#include "recomp.h"
#include "rec_mod.h"

void f_8ff281(void) {
  LOAD_REGS();
L_8ff281: /* 8ff281: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ff284: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ff289: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8ff28c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff28d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ff290: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff295u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ff295(); return;
}

void f_8ff295(void) {
  LOAD_REGS();
L_8ff295: /* 8ff295: push 0xa20160 */
  { uint32_t v = 0xa20160u; esp -= 4; W32(esp, v); }
/* 8ff29a: push 0xaf0da8 */
  { uint32_t v = 0xaf0da8u; esp -= 4; W32(esp, v); }
/* 8ff29f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ff2a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ff2a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff2a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff2aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff2ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff2b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ff2b1: guest_badaddr(0x8ff2b1); return;
}

void f_8ff3a0(void) {
  LOAD_REGS();
L_8ff3a0: /* 8ff3a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ff3a4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8ff3a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ff3aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff3ab: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8ff3aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff3ae: ret  */
  esp += 4; SPILL(); return;
}

void f_8ff3c0(void) {
  LOAD_REGS();
L_8ff3c0: /* 8ff3c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff3c1: mov esi, ecx */
  esi = ecx;
/* 8ff3c3: call dword ptr [0xcfaa40] */
  esp -= 4; W32(esp, 0x8ff3c9u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* 8ff3c9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8ff3cd: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 8ff3d0: mov dword ptr [esi], 0xa201a0 */
  W32((uint32_t)(esi), 0xa201a0u);
/* 8ff3d6: mov dword ptr [esi + 0x44], 0 */
  W32((uint32_t)(esi + 0x44u), 0x0u);
/* 8ff3dd: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
/* 8ff3e4: mov eax, esi */
  eax = esi;
/* 8ff3e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff3e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ff400(void) {
  LOAD_REGS();
L_8ff400: /* 8ff400: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 8ff403: ret  */
  esp += 4; SPILL(); return;
}

void f_8ff420(void) {
  LOAD_REGS();
L_8ff420: /* 8ff420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ff424: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* 8ff427: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ff440(void) {
  LOAD_REGS();
L_8ff440: /* 8ff440: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 8ff443: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8ff446: ret  */
  esp += 4; SPILL(); return;
}

void f_8ff460(void) {
  LOAD_REGS();
L_8ff460: /* 8ff460: jmp dword ptr [0xcfaa14] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_8ff480(void) {
  LOAD_REGS();
L_8ff480: /* 8ff480: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ff484: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8ff488: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ff48a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff48b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8ff48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff48e: ret  */
  esp += 4; SPILL(); return;
}

void f_8ff4a0(void) {
  LOAD_REGS();
L_8ff4a0: /* 8ff4a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ff4a1: mov ebp, esp */
  ebp = esp;
/* 8ff4a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ff4a5: push 0x9d9bc0 */
  { uint32_t v = 0x9d9bc0u; esp -= 4; W32(esp, v); }
/* 8ff4aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ff4b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff4b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ff4b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ff4bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ff4bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff4bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff4be: mov esi, ecx */
  esi = ecx;
/* 8ff4c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ff4c3: push 0xcf08e0 */
  { uint32_t v = 0xcf08e0u; esp -= 4; W32(esp, v); }
/* 8ff4c8: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 8ff4cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ff4d2: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8ff4d8u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8ff4d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff4db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff4dc: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* 8ff4e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff4e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff4eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff4ec: mov esp, ebp */
  esp = ebp;
/* 8ff4ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff4ef: ret  */
  esp += 4; SPILL(); return;
}

void f_8ff4f0(void) {
  LOAD_REGS();
L_8ff4f0: /* 8ff4f0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ff4f3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ff4f8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ff4fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff4fc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ff4ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff504u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ff504(); return;
}

void f_8ff504(void) {
  LOAD_REGS();
L_8ff504: /* 8ff504: push 0xa2020c */
  { uint32_t v = 0xa2020cu; esp -= 4; W32(esp, v); }
/* 8ff509: push 0xaf1260 */
  { uint32_t v = 0xaf1260u; esp -= 4; W32(esp, v); }
/* 8ff50e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ff514u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ff514: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff517: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff519: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff51b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff520u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ff520: guest_badaddr(0x8ff520); return;
}

void f_8ff560(void) {
  LOAD_REGS();
L_8ff560: /* 8ff560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ff561: mov ebp, esp */
  ebp = esp;
/* 8ff563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ff565: push 0x9d9bd0 */
  { uint32_t v = 0x9d9bd0u; esp -= 4; W32(esp, v); }
/* 8ff56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ff570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ff578: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ff57b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ff57c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff57d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff57e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8ff581: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ff584: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff585: mov esi, ecx */
  esi = ecx;
/* 8ff587: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ff58e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x8ff594u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 8ff594: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ff596: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ff599: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff59a: mov ecx, edi */
  ecx = edi;
/* 8ff59c: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8ff59fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff59f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff5a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff5a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff5a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff5ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff5ac: mov esp, ebp */
  esp = ebp;
/* 8ff5ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff5af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ff5b2(void) {
  LOAD_REGS();
L_8ff5b2: /* 8ff5b2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ff5b5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ff5ba: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8ff5bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff5be: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ff5c1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff5c6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ff5c6(); return;
}

void f_8ff5c6(void) {
  LOAD_REGS();
L_8ff5c6: /* 8ff5c6: push 0xa20254 */
  { uint32_t v = 0xa20254u; esp -= 4; W32(esp, v); }
/* 8ff5cb: push 0xaf1268 */
  { uint32_t v = 0xaf1268u; esp -= 4; W32(esp, v); }
/* 8ff5d0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ff5d6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ff5d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff5d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff5db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff5dd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff5e2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ff5e2: guest_badaddr(0x8ff5e2); return;
}

void f_8ff620(void) {
  LOAD_REGS();
L_8ff620: /* 8ff620: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 8ff623: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff625: je 0x8ff63c */
  if (zf) goto L_8ff63c;
L_8ff627: /* 8ff627: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 8ff62a: test byte ptr [eax + 0x44], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff62e: je 0x8ff63c */
  if (zf) goto L_8ff63c;
L_8ff630: /* 8ff630: mov eax, 1 */
  eax = 0x1u;
/* 8ff635: mov dword ptr [ecx + 0x44c], eax */
  W32((uint32_t)(ecx + 0x44cu), eax);
/* 8ff63b: ret  */
  esp += 4; SPILL(); return;
L_8ff63c: /* 8ff63c: xor eax, eax */
  eax = 0;
/* 8ff63e: ret  */
  esp += 4; SPILL(); return;
}

void f_8ff650(void) {
  LOAD_REGS();
L_8ff650: /* 8ff650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ff651: mov ebp, esp */
  ebp = esp;
/* 8ff653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ff655: push 0x9d9be9 */
  { uint32_t v = 0x9d9be9u; esp -= 4; W32(esp, v); }
/* 8ff65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ff660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ff668: sub esp, 0x418 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ff66e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ff66f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff670: mov esi, ecx */
  esi = ecx;
/* 8ff672: mov eax, dword ptr [esi + 0x448] */
  eax = R32((uint32_t)(esi + 0x448u));
/* 8ff678: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff67a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff67b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ff67e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ff685: jne 0x8ff718 */
  if (!zf) goto L_8ff718;
L_8ff68b: /* 8ff68b: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8ff68e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff690: jne 0x8ff718 */
  if (!zf) goto L_8ff718;
L_8ff696: /* 8ff696: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8ff699: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 8ff69c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8ff6a2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8ff6a2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8ff6a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ff6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff6ab: push 0xaf1280 */
  { uint32_t v = 0xaf1280u; esp -= 4; W32(esp, v); }
/* 8ff6b0: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8ff6b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff6b6: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8ff6bcu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8ff6bc: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 8ff6c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ff6c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff6c6: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ff6c9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ff6cfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ff6cf: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 8ff6d5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8ff6d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ff6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff6db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff6dc: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8ff6dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff6df: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 8ff6e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ff6e6: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ff6e9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ff6efu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ff6ef: lea edi, [esi + 0x48] */
  edi = (uint32_t)(esi + 0x48u);
/* 8ff6f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff6f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff6f4: call dword ptr [0xcfacf8] */
  esp -= 4; W32(esp, 0x8ff6fau); SPILL(); f_4e4264(); if (g_unwind) return; /* Core!?appCreateTempFilename@@YAXPBGPAG@Z */ RELOAD();
/* 8ff6fa: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8ff6ff: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ff701: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 8ff707: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8ff709: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ff70b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff70e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff70f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff712: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8ff715u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff715: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
L_8ff718: /* 8ff718: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 8ff71b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff71d: jne 0x8ff74e */
  if (!zf) goto L_8ff74e;
L_8ff71f: /* 8ff71f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff720: push 0xaf12b0 */
  { uint32_t v = 0xaf12b0u; esp -= 4; W32(esp, v); }
/* 8ff725: push 0xaf12c0 */
  { uint32_t v = 0xaf12c0u; esp -= 4; W32(esp, v); }
/* 8ff72a: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x8ff730u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 8ff730: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ff732: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff735: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff736: mov ecx, esi */
  ecx = esi;
/* 8ff738: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x8ff73bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff73b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff73e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff745: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff746: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff747: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff748: mov esp, ebp */
  esp = ebp;
/* 8ff74a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff74b: ret 8 */
  esp += 12; SPILL(); return;
L_8ff74e: /* 8ff74e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8ff751: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ff753: jle 0x8ff75f */
  if ((zf || sf != of)) goto L_8ff75f;
L_8ff755: /* 8ff755: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ff758: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ff75a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff75b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff75c: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x8ff75fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ff75f: /* 8ff75f: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 8ff762: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8ff768u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8ff768: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff76a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff76c: je 0x8ff7c7 */
  if (zf) goto L_8ff7c7;
L_8ff76e: /* 8ff76e: push 0xaf12d0 */
  { uint32_t v = 0xaf12d0u; esp -= 4; W32(esp, v); }
/* 8ff773: push 0xaf12e0 */
  { uint32_t v = 0xaf12e0u; esp -= 4; W32(esp, v); }
/* 8ff778: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x8ff77eu); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 8ff77e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff781: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 8ff784: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff785: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff786: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff789: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff78a: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ff790u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ff790: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff793: mov ecx, eax */
  ecx = eax;
/* 8ff795: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ff799: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ff79fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ff79f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ff7a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff7a2: mov ecx, esi */
  ecx = esi;
/* 8ff7a4: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x8ff7a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff7a7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff7aa: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ff7ae: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ff7b4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ff7b4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff7b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff7be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff7bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff7c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff7c1: mov esp, ebp */
  esp = ebp;
/* 8ff7c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff7c4: ret 8 */
  esp += 12; SPILL(); return;
L_8ff7c7: /* 8ff7c7: mov edx, dword ptr [esi + 0x448] */
  edx = R32((uint32_t)(esi + 0x448u));
/* 8ff7cd: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8ff7d0: mov ebx, dword ptr [0xcfa8b0] */
  ebx = R32((uint32_t)(0xcfa8b0u));
/* 8ff7d6: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ff7d8: mov dword ptr [esi + 0x448], edx */
  W32((uint32_t)(esi + 0x448u), edx);
/* 8ff7de: test byte ptr [eax + 0x44], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff7e2: je 0x8ff7f0 */
  if (zf) goto L_8ff7f0;
L_8ff7e4: /* 8ff7e4: push 0xaf12f4 */
  { uint32_t v = 0xaf12f4u; esp -= 4; W32(esp, v); }
/* 8ff7e9: push 0xaf1304 */
  { uint32_t v = 0xaf1304u; esp -= 4; W32(esp, v); }
/* 8ff7ee: jmp 0x8ff7fa */
  goto L_8ff7fa;
L_8ff7f0: /* 8ff7f0: push 0xaf132c */
  { uint32_t v = 0xaf132cu; esp -= 4; W32(esp, v); }
/* 8ff7f5: push 0xaf133c */
  { uint32_t v = 0xaf133cu; esp -= 4; W32(esp, v); }
L_8ff7fa: /* 8ff7fa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8ff7fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff7fc: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 8ff7ff: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 8ff802: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff805: mov edi, eax */
  edi = eax;
/* 8ff807: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8ff80du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8ff80d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff80e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff80f: mov edi, dword ptr [0xcfa8b4] */
  edi = R32((uint32_t)(0xcfa8b4u));
/* 8ff815: lea edx, [ebp - 0x424] */
  edx = (uint32_t)(ebp + 0xfffffbdcu);
/* 8ff81b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff81c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ff81eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff81e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff821: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff823: push 0xaf1354 */
  { uint32_t v = 0xaf1354u; esp -= 4; W32(esp, v); }
/* 8ff828: push 0xaf1364 */
  { uint32_t v = 0xaf1364u; esp -= 4; W32(esp, v); }
/* 8ff82d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8ff82fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff82f: fild dword ptr [esi + 0x448] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x448u)); FPUSH(v); }
/* 8ff835: mov ecx, eax */
  ecx = eax;
/* 8ff837: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8ff83a: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8ff83d: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 8ff843: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8ff846: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8ff847: fidiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xcu)));
/* 8ff84a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff84d: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8ff853: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ff856: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ff858: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8ff85b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ff85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff85f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff860: lea ecx, [ebp - 0x224] */
  ecx = (uint32_t)(ebp + 0xfffffddcu);
/* 8ff866: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff867: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ff869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff869: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ff86c: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8ff86f: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 8ff872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ff874: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff877: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 8ff87c: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 8ff882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff883: lea eax, [ebp - 0x424] */
  eax = (uint32_t)(ebp + 0xfffffbdcu);
/* 8ff889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff88a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8ff88du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff88d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff890: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff892: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff899: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff89a: mov esp, ebp */
  esp = ebp;
/* 8ff89c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff89d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ff8a0(void) {
  LOAD_REGS();
L_8ff8a0: /* 8ff8a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ff8a3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ff8a8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8ff8ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff8ac: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ff8af: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff8b4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ff8b4(); return;
}

void f_8ff8b4(void) {
  LOAD_REGS();
L_8ff8b4: /* 8ff8b4: push 0xa20288 */
  { uint32_t v = 0xa20288u; esp -= 4; W32(esp, v); }
/* 8ff8b9: push 0xaf137c */
  { uint32_t v = 0xaf137cu; esp -= 4; W32(esp, v); }
/* 8ff8be: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ff8c4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ff8c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff8c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff8c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff8cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff8d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ff8d0: guest_badaddr(0x8ff8d0); return;
}

void f_8ff990(void) {
  LOAD_REGS();
L_8ff990: /* 8ff990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ff991: mov ebp, esp */
  ebp = esp;
/* 8ff993: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ff995: push 0x9d9c00 */
  { uint32_t v = 0x9d9c00u; esp -= 4; W32(esp, v); }
/* 8ff99a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ff9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff9a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ff9a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ff9ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ff9ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ff9af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff9b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff9b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ff9b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff9b5: add ecx, 0x248 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x248u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ff9bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff9bc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ff9c3: call dword ptr [0xcfa900] */
  esp -= 4; W32(esp, 0x8ff9c9u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* 8ff9c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff9cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff9cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff9d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff9d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff9d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff9d9: mov esp, ebp */
  esp = ebp;
/* 8ff9db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff9dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ff9df(void) {
  LOAD_REGS();
L_8ff9df: /* 8ff9df: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ff9e2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ff9e7: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8ff9ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff9eb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ff9ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ff9f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ff9f3(); return;
}

void f_8ff9f3(void) {
  LOAD_REGS();
L_8ff9f3: /* 8ff9f3: push 0xa202c0 */
  { uint32_t v = 0xa202c0u; esp -= 4; W32(esp, v); }
/* 8ff9f8: push 0xaf1384 */
  { uint32_t v = 0xaf1384u; esp -= 4; W32(esp, v); }
/* 8ff9fd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ffa03u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ffa03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ffa06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffa08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffa0a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffa0fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ffa0f: guest_badaddr(0x8ffa0f); return;
}

void f_8ffa30(void) {
  LOAD_REGS();
L_8ffa30: /* 8ffa30: mov eax, ecx */
  eax = ecx;
/* 8ffa32: mov dword ptr [eax], 0xa202fc */
  W32((uint32_t)(eax), 0xa202fcu);
/* 8ffa38: ret  */
  esp += 4; SPILL(); return;
}

void f_8ffa50(void) {
  LOAD_REGS();
L_8ffa50: /* 8ffa50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ffa51: mov ebp, esp */
  ebp = esp;
/* 8ffa53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ffa55: push 0x9d9c10 */
  { uint32_t v = 0x9d9c10u; esp -= 4; W32(esp, v); }
/* 8ffa5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ffa60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffa61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ffa68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ffa6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ffa6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ffa6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffa6e: mov esi, ecx */
  esi = ecx;
/* 8ffa70: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 8ffa73: xor edi, edi */
  edi = 0;
/* 8ffa75: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ffa77: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ffa7a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8ffa7d: je 0x8ffa9b */
  if (zf) goto L_8ffa9b;
L_8ffa7f: /* 8ffa7f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ffa81: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ffa83: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8ffa85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ffa85: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 8ffa88: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 8ffa8e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8ffa90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ffa92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffa93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffa94: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 8ffa97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffa98: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8ffa9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ffa9b: /* 8ffa9b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8ffa9e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ffaa0: je 0x8ffab0 */
  if (zf) goto L_8ffab0;
L_8ffaa2: /* 8ffaa2: cmp dword ptr [eax + 0x3eec], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3eecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ffaa8: jne 0x8ffab0 */
  if (!zf) goto L_8ffab0;
L_8ffaaa: /* 8ffaaa: mov dword ptr [eax + 0x3eec], edi */
  W32((uint32_t)(eax + 0x3eecu), edi);
L_8ffab0: /* 8ffab0: mov ecx, esi */
  ecx = esi;
/* 8ffab2: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 8ffab5: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8ffabbu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8ffabb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ffabe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ffabf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffac0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ffac7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ffac8: mov esp, ebp */
  esp = ebp;
/* 8ffaca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ffacb: ret  */
  esp += 4; SPILL(); return;
}

void f_8ffacc(void) {
  LOAD_REGS();
L_8ffacc: /* 8ffacc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ffacf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ffad4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8ffad7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ffad8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ffadb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffae0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ffae0(); return;
}

void f_8ffae0(void) {
  LOAD_REGS();
L_8ffae0: /* 8ffae0: push 0xa20308 */
  { uint32_t v = 0xa20308u; esp -= 4; W32(esp, v); }
/* 8ffae5: push 0xaf1504 */
  { uint32_t v = 0xaf1504u; esp -= 4; W32(esp, v); }
/* 8ffaea: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ffaf0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ffaf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ffaf3: xor edi, edi */
  edi = 0;
/* 8ffaf5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffaf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffaf7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffafcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ffafc: guest_badaddr(0x8ffafc); return;
}

void f_8ffb30(void) {
  LOAD_REGS();
L_8ffb30: /* 8ffb30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ffb31: mov ebp, esp */
  ebp = esp;
/* 8ffb33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ffb35: push 0x9d9c20 */
  { uint32_t v = 0x9d9c20u; esp -= 4; W32(esp, v); }
/* 8ffb3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ffb40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffb41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ffb48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ffb4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ffb4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ffb4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffb4e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ffb51: push 0xaf1520 */
  { uint32_t v = 0xaf1520u; esp -= 4; W32(esp, v); }
/* 8ffb56: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ffb59: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ffb60: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8ffb66u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8ffb66: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ffb69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ffb6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffb6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ffb72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ffb73: mov esp, ebp */
  esp = ebp;
/* 8ffb75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ffb76: ret  */
  esp += 4; SPILL(); return;
}

void f_8ffb77(void) {
  LOAD_REGS();
L_8ffb77: /* 8ffb77: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ffb7a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ffb7f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ffb82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ffb83: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ffb86: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffb8bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ffb8b(); return;
}

void f_8ffb8b(void) {
  LOAD_REGS();
L_8ffb8b: /* 8ffb8b: push 0xa20338 */
  { uint32_t v = 0xa20338u; esp -= 4; W32(esp, v); }
/* 8ffb90: push 0xaf1530 */
  { uint32_t v = 0xaf1530u; esp -= 4; W32(esp, v); }
/* 8ffb95: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ffb9bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ffb9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ffb9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffba0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffba2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffba7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ffba7: guest_badaddr(0x8ffba7); return;
}

void f_8ffbd0(void) {
  LOAD_REGS();
L_8ffbd0: /* 8ffbd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ffbd1: mov ebp, esp */
  ebp = esp;
/* 8ffbd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ffbd5: push 0x9d9c30 */
  { uint32_t v = 0x9d9c30u; esp -= 4; W32(esp, v); }
/* 8ffbda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ffbe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffbe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ffbe8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ffbeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ffbec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ffbed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffbee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8ffbf1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ffbf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffbf5: mov esi, ecx */
  esi = ecx;
/* 8ffbf7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ffbfe: call 0x6c7130 */
  esp -= 4; W32(esp, 0x8ffc03u); SPILL(); f_6c7130(); if (g_unwind) return; RELOAD();
/* 8ffc03: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ffc05: add esi, 0x454 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ffc0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ffc0c: mov ecx, edi */
  ecx = edi;
/* 8ffc0e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8ffc11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ffc11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ffc14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ffc15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffc16: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ffc1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ffc1e: mov esp, ebp */
  esp = ebp;
/* 8ffc20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ffc21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ffc24(void) {
  LOAD_REGS();
L_8ffc24: /* 8ffc24: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ffc27: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ffc2c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8ffc2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ffc30: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ffc33: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffc38u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ffc38(); return;
}

void f_8ffc38(void) {
  LOAD_REGS();
L_8ffc38: /* 8ffc38: push 0xa20390 */
  { uint32_t v = 0xa20390u; esp -= 4; W32(esp, v); }
/* 8ffc3d: push 0xaf1538 */
  { uint32_t v = 0xaf1538u; esp -= 4; W32(esp, v); }
/* 8ffc42: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ffc48u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ffc48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ffc4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffc4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffc4f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffc54u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ffc54: guest_badaddr(0x8ffc54); return;
}

void f_8ffc90(void) {
  LOAD_REGS();
L_8ffc90: /* 8ffc90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ffc91: mov ebp, esp */
  ebp = esp;
/* 8ffc93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ffc95: push 0x9d9c54 */
  { uint32_t v = 0x9d9c54u; esp -= 4; W32(esp, v); }
/* 8ffc9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ffca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ffca8: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ffcae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ffcaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ffcb0: mov esi, ecx */
  esi = ecx;
/* 8ffcb2: mov eax, dword ptr [esi + 0x454] */
  eax = R32((uint32_t)(esi + 0x454u));
/* 8ffcb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ffcba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffcbb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ffcbe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ffcc5: je 0x8ffd8f */
  if (zf) goto L_8ffd8f;
L_8ffccb: /* 8ffccb: call 0x6c2a68 */
  esp -= 4; W32(esp, 0x8ffcd0u); SPILL(); f_6c2a68(); if (g_unwind) return; RELOAD();
/* 8ffcd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ffcd2: je 0x8ffd8f */
  if (zf) goto L_8ffd8f;
L_8ffcd8: /* 8ffcd8: mov eax, dword ptr [esi + 0x454] */
  eax = R32((uint32_t)(esi + 0x454u));
/* 8ffcde: mov ebx, 1 */
  ebx = 0x1u;
/* 8ffce3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ffce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffce5: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8ffceb: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8ffcf0u); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8ffcf0: push 0xaf1540 */
  { uint32_t v = 0xaf1540u; esp -= 4; W32(esp, v); }
/* 8ffcf5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ffcf8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8ffcfb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8ffd01u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8ffd01: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ffd04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ffd05: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 8ffd0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ffd0c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ffd10: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x8ffd16u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 8ffd16: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 8ffd1c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ffd1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffd21: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8ffd27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffd28: mov byte ptr [ebp - 0x26], bl */
  W8((uint32_t)(ebp + 0xffffffdau), (ebx & 0xffu));
/* 8ffd2b: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8ffd30u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8ffd30: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ffd33: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8ffd36: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ffd3cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ffd3c: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8ffd42: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ffd46: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8ffd4cu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8ffd4c: mov eax, ebx */
  eax = ebx;
/* 8ffd4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ffd51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ffd58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ffd59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffd5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ffd5b: mov esp, ebp */
  esp = ebp;
/* 8ffd5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ffd5e: ret  */
  esp += 4; SPILL(); return;
L_8ffd8f: /* 8ffd8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ffd92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ffd93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffd94: xor eax, eax */
  eax = 0;
/* 8ffd96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ffd9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ffd9e: mov esp, ebp */
  esp = ebp;
/* 8ffda0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ffda1: ret  */
  esp += 4; SPILL(); return;
}

void f_8ffd5f(void) {
  LOAD_REGS();
L_8ffd5f: /* 8ffd5f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ffd62: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ffd67: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8ffd6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ffd6b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ffd6e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffd73u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ffd73(); return;
}

void f_8ffd73(void) {
  LOAD_REGS();
L_8ffd73: /* 8ffd73: push 0xa203d4 */
  { uint32_t v = 0xa203d4u; esp -= 4; W32(esp, v); }
/* 8ffd78: push 0xaf154c */
  { uint32_t v = 0xaf154cu; esp -= 4; W32(esp, v); }
/* 8ffd7d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ffd83u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ffd83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ffd86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffd88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ffd8a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffd8fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8ffd8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ffd92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ffd93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffd94: xor eax, eax */
  eax = 0;
/* 8ffd96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ffd9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ffd9e: mov esp, ebp */
  esp = ebp;
/* 8ffda0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ffda1: ret  */
  esp += 4; SPILL(); return;
}

void f_8ffe00(void) {
  LOAD_REGS();
L_8ffe00: /* 8ffe00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ffe01: mov ebp, esp */
  ebp = esp;
/* 8ffe03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ffe05: push 0x9d9c70 */
  { uint32_t v = 0x9d9c70u; esp -= 4; W32(esp, v); }
/* 8ffe0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ffe10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ffe11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ffe18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ffe1b: mov eax, dword ptr [ecx + 0x454] */
  eax = R32((uint32_t)(ecx + 0x454u));
/* 8ffe21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ffe22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ffe23: xor edx, edx */
  edx = 0;
/* 8ffe25: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ffe27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ffe28: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ffe2b: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 8ffe2e: je 0x8ffe38 */
  if (zf) goto L_8ffe38;
L_8ffe30: /* 8ffe30: cmp dword ptr [eax + 0x64], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x64u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ffe33: jne 0x8ffe38 */
  if (!zf) goto L_8ffe38;
L_8ffe35: /* 8ffe35: mov dword ptr [eax + 0x64], edx */
  W32((uint32_t)(eax + 0x64u), edx);
L_8ffe38: /* 8ffe38: mov dword ptr [ecx + 0x454], edx */
  W32((uint32_t)(ecx + 0x454u), edx);
/* 8ffe3e: call 0x6ccef5 */
  esp -= 4; W32(esp, 0x8ffe43u); SPILL(); f_6ccef5(); if (g_unwind) return; RELOAD();
/* 8ffe43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ffe46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ffe47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffe48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ffe4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ffe50: mov esp, ebp */
  esp = ebp;
/* 8ffe52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ffe53: ret  */
  esp += 4; SPILL(); return;
}

void f_8ffe54(void) {
  LOAD_REGS();
L_8ffe54: /* 8ffe54: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ffe57: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ffe5c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ffe5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ffe60: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ffe63: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffe68u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ffe68(); return;
}

void f_8ffe68(void) {
  LOAD_REGS();
L_8ffe68: /* 8ffe68: push 0xa2041c */
  { uint32_t v = 0xa2041cu; esp -= 4; W32(esp, v); }
/* 8ffe6d: push 0xaf15a8 */
  { uint32_t v = 0xaf15a8u; esp -= 4; W32(esp, v); }
/* 8ffe72: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ffe78u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ffe78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ffe7b: xor edx, edx */
  edx = 0;
/* 8ffe7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ffe7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ffe7f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ffe84u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ffe84: guest_badaddr(0x8ffe84); return;
}

void f_8ffec0(void) {
  LOAD_REGS();
L_8ffec0: /* 8ffec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ffec1: mov esi, ecx */
  esi = ecx;
/* 8ffec3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ffec9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ffec9: mov eax, esi */
  eax = esi;
/* 8ffecb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ffecc: ret  */
  esp += 4; SPILL(); return;
}

void f_8ffee0(void) {
  LOAD_REGS();
L_8ffee0: /* 8ffee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ffee2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ffee6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8ffee9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fff00(void) {
  LOAD_REGS();
L_8fff00: /* 8fff00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8fff04: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fff06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fff07: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fff0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fff0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fff20(void) {
  LOAD_REGS();
L_8fff20: /* 8fff20: mov eax, 1 */
  eax = 0x1u;
/* 8fff25: ret  */
  esp += 4; SPILL(); return;
}

void f_8fff40(void) {
  LOAD_REGS();
L_8fff40: /* 8fff40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fff42: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_8fff50(void) {
  LOAD_REGS();
L_8fff50: /* 8fff50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fff51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fff52: mov esi, ecx */
  esi = ecx;
/* 8fff54: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8fff57: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8fff5a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8fff5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fff5e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8fff62: lea ebx, [eax + edi] */
  ebx = (uint32_t)(eax + edi);
/* 8fff65: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fff67: jle 0x8fff76 */
  if ((zf || sf != of)) goto L_8fff76;
L_8fff69: /* 8fff69: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fff6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fff6d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8fff6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fff70: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fff76u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_8fff76: /* 8fff76: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8fff7a: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8fff7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fff7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fff80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fff81: add edx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8fff84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fff85: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8fff8au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8fff8a: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8fff8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fff90: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8fff92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fff93: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 8fff96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fff97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fff98: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8fffc0(void) {
  LOAD_REGS();
L_8fffc0: /* 8fffc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fffc1: mov esi, ecx */
  esi = ecx;
/* 8fffc3: call 0x6c9e5d */
  esp -= 4; W32(esp, 0x8fffc8u); SPILL(); f_6c9e5d(); if (g_unwind) return; RELOAD();
/* 8fffc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fffcd: je 0x8fffdc */
  if (zf) goto L_8fffdc;
L_8fffcf: /* 8fffcf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8fffd4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fffd6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fffd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fffd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fffdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fffdc: /* 8fffdc: mov eax, esi */
  eax = esi;
/* 8fffde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fffdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_900000(void) {
  LOAD_REGS();
L_900000: /* 900000: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 900004: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 900008: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 90000b: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 90000e: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 900014: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 900017: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 90001a: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 90001d: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 900020: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_900040(void) {
  LOAD_REGS();
L_900040: /* 900040: mov eax, ecx */
  eax = ecx;
/* 900042: mov dword ptr [eax], 0xa20444 */
  W32((uint32_t)(eax), 0xa20444u);
/* 900048: ret  */
  esp += 4; SPILL(); return;
}

void f_900060(void) {
  LOAD_REGS();
L_900060: /* 900060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 900061: mov ebp, esp */
  ebp = esp;
/* 900063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 900065: push 0x9d9c80 */
  { uint32_t v = 0x9d9c80u; esp -= 4; W32(esp, v); }
/* 90006a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 900070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 900078: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90007b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90007c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90007d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90007e: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 900084: xor esi, esi */
  esi = 0;
/* 900086: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 900089: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 90008c: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 90008e: mov edi, edi */
  edi = edi;
L_900090: /* 900090: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 900093: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 900095: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x900098u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900098: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90009a: jne 0x900125 */
  if (!zf) goto L_900125;
L_9000a0: /* 9000a0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9000a3: lea ecx, [ebp - 0x12] */
  ecx = (uint32_t)(ebp + 0xffffffeeu);
/* 9000a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9000a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9000a8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9000aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9000aa: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9000ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9000b0: lea eax, [ebp - 0x12] */
  eax = (uint32_t)(ebp + 0xffffffeeu);
/* 9000b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9000b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9000b5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9000b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9000b7: mov al, byte ptr [ebp - 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffeeu))) & 0xffu);
/* 9000ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9000bd: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9000bf: je 0x9000ca */
  if (zf) goto L_9000ca;
L_9000c1: /* 9000c1: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 9000c3: mov esi, 1 */
  esi = 0x1u;
/* 9000c8: jmp 0x900090 */
  goto L_900090;
L_9000ca: /* 9000ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9000cb: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9000ce: jne 0x900090 */
  if (!zf) goto L_900090;
L_9000d0: /* 9000d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9000d3: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* 9000d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9000d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9000d8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9000dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9000da: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 9000dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9000e0: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 9000e2: jae 0x900100 */
  if (!cf) goto L_900100;
L_9000e4: /* 9000e4: push 0xaa */
  { uint32_t v = 0xaau; esp -= 4; W32(esp, v); }
/* 9000e9: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 9000ee: push 0xaf1684 */
  { uint32_t v = 0xaf1684u; esp -= 4; W32(esp, v); }
/* 9000f3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x9000f9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 9000f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9000fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_900100: /* 900100: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 900103: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 900105: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 900107: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 90010a: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 90010d: jbe 0x90011e */
  if ((cf | zf)) goto L_90011e;
L_90010f: /* 90010f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 900112: lea edx, [ebp - 0x12] */
  edx = (uint32_t)(ebp + 0xffffffeeu);
/* 900115: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900116: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900117: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x900119u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900119: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90011c: jmp 0x900100 */
  goto L_900100;
L_90011e: /* 90011e: xor esi, esi */
  esi = 0;
/* 900120: jmp 0x900090 */
  goto L_900090;
L_900125: /* 900125: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900128: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900129: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90012a: mov eax, 1 */
  eax = 0x1u;
/* 90012f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 900136: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900137: mov esp, ebp */
  esp = ebp;
/* 900139: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90013a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90013d(void) {
  LOAD_REGS();
L_90013d: /* 90013d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 900140: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 900145: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 900148: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900149: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 90014c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900151u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_900151(); return;
}

void f_900151(void) {
  LOAD_REGS();
L_900151: /* 900151: push 0xa20450 */
  { uint32_t v = 0xa20450u; esp -= 4; W32(esp, v); }
/* 900156: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 90015b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x900161u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 900161: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900164: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900166: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900168: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90016du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_90016d: guest_badaddr(0x90016d); return;
}

void f_9001c0(void) {
  LOAD_REGS();
L_9001c0: /* 9001c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9001c1: mov ebp, esp */
  ebp = esp;
/* 9001c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9001c5: push 0x9d9c90 */
  { uint32_t v = 0x9d9c90u; esp -= 4; W32(esp, v); }
/* 9001ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9001d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9001d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9001d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9001db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9001dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9001dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9001de: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 9001e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9001e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9001ee: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 9001f2: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_9001f4: /* 9001f4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9001f7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9001f9: mov ecx, esi */
  ecx = esi;
/* 9001fb: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x9001feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9001fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900200: jne 0x900263 */
  if (!zf) goto L_900263;
L_900202: /* 900202: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
/* 900205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900206: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900207: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x900209u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900209: mov al, byte ptr [ebp - 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 90020c: mov cl, byte ptr [ebp - 0x15] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffebu))) & 0xffu);
/* 90020f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900212: cmp cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 900214: jne 0x90021b */
  if (!zf) goto L_90021b;
L_900216: /* 900216: cmp bl, 0xff */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 900219: jne 0x90025f */
  if (!zf) goto L_90025f;
L_90021b: /* 90021b: movzx esi, bl */
  esi = (uint32_t)((ebx & 0xffu));
/* 90021e: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900221: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 900224: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* 900227: jle 0x900230 */
  if ((zf || sf != of)) goto L_900230;
L_900229: /* 900229: mov esi, 5 */
  esi = 0x5u;
/* 90022e: mov edi, edi */
  edi = edi;
L_900230: /* 900230: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 900232: jle 0x900244 */
  if ((zf || sf != of)) goto L_900244;
L_900234: /* 900234: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 900237: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 90023a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90023b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90023c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x90023eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90023e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900241: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 900242: jmp 0x900230 */
  goto L_900230;
L_900244: /* 900244: cmp byte ptr [ebp - 0x14], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 900248: jb 0x900257 */
  if (cf) goto L_900257;
L_90024a: /* 90024a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 90024d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 900250: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900251: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900252: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x900254u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900254: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_900257: /* 900257: mov al, byte ptr [ebp - 0x15] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffebu))) & 0xffu);
/* 90025a: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 90025d: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_90025f: /* 90025f: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 900261: jmp 0x9001f4 */
  goto L_9001f4;
L_900263: /* 900263: mov cl, byte ptr [ebp - 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 900266: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 900269: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90026c: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 90026f: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 900272: mov esi, eax */
  esi = eax;
/* 900274: jle 0x900280 */
  if ((zf || sf != of)) goto L_900280;
L_900276: /* 900276: mov esi, 5 */
  esi = 0x5u;
/* 90027b: jmp 0x900280 */
  goto L_900280;
L_900280: /* 900280: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 900282: jle 0x900294 */
  if ((zf || sf != of)) goto L_900294;
L_900284: /* 900284: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 900287: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 90028a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90028b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90028c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x90028eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90028e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900291: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 900292: jmp 0x900280 */
  goto L_900280;
L_900294: /* 900294: cmp byte ptr [ebp + 0xb], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 900298: jb 0x9002a7 */
  if (cf) goto L_9002a7;
L_90029a: /* 90029a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 90029d: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 9002a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9002a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9002a2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9002a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9002a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9002a7: /* 9002a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9002aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9002ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9002ac: xor eax, eax */
  eax = 0;
/* 9002ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9002b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9002b6: mov esp, ebp */
  esp = ebp;
/* 9002b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9002b9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90027d(void) {
  LOAD_REGS();
L_90027d: /* 90027d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_900280: /* 900280: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 900282: jle 0x900294 */
  if ((zf || sf != of)) goto L_900294;
L_900284: /* 900284: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 900287: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 90028a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90028b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90028c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x90028eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90028e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900291: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 900292: jmp 0x900280 */
  goto L_900280;
L_900294: /* 900294: cmp byte ptr [ebp + 0xb], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 900298: jb 0x9002a7 */
  if (cf) goto L_9002a7;
L_90029a: /* 90029a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 90029d: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 9002a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9002a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9002a2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9002a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9002a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9002a7: /* 9002a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9002aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9002ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9002ac: xor eax, eax */
  eax = 0;
/* 9002ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9002b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9002b6: mov esp, ebp */
  esp = ebp;
/* 9002b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9002b9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9002bc(void) {
  LOAD_REGS();
L_9002bc: /* 9002bc: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9002bf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 9002c4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9002c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9002c8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9002cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9002d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_9002d0(); return;
}

void f_9002d0(void) {
  LOAD_REGS();
L_9002d0: /* 9002d0: push 0xa2047c */
  { uint32_t v = 0xa2047cu; esp -= 4; W32(esp, v); }
/* 9002d5: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 9002da: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x9002e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 9002e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9002e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9002e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9002e7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9002ecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9002ec: guest_badaddr(0x9002ec); return;
}

void f_900340(void) {
  LOAD_REGS();
L_900340: /* 900340: mov eax, ecx */
  eax = ecx;
/* 900342: mov dword ptr [eax], 0xa204a8 */
  W32((uint32_t)(eax), 0xa204a8u);
/* 900348: ret  */
  esp += 4; SPILL(); return;
}

void f_900360(void) {
  LOAD_REGS();
L_900360: /* 900360: mov eax, ecx */
  eax = ecx;
/* 900362: mov dword ptr [eax], 0xa204b4 */
  W32((uint32_t)(eax), 0xa204b4u);
/* 900368: ret  */
  esp += 4; SPILL(); return;
}

void f_900380(void) {
  LOAD_REGS();
L_900380: /* 900380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 900381: mov ebp, esp */
  ebp = esp;
/* 900383: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 900385: push 0x9d9ca0 */
  { uint32_t v = 0x9d9ca0u; esp -= 4; W32(esp, v); }
/* 90038a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 900390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900391: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 900398: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90039e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90039f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9003a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9003a1: xor eax, eax */
  eax = 0;
/* 9003a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9003a6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9003a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9003b0: /* 9003b0: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9003b5: jge 0x9003c1 */
  if ((sf == of)) goto L_9003c1;
L_9003b7: /* 9003b7: mov byte ptr [ebp + eax - 0x11c], al */
  W8((uint32_t)(ebp + eax + 0xfffffee4u), (eax & 0xffu));
/* 9003be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9003bf: jmp 0x9003b0 */
  goto L_9003b0;
L_9003c1: /* 9003c1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9003c4: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 9003ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9003d0: /* 9003d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9003d2: mov ecx, esi */
  ecx = esi;
/* 9003d4: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x9003d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9003d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9003d9: jne 0x900454 */
  if (!zf) goto L_900454;
L_9003db: /* 9003db: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 9003de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9003df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9003e0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9003e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9003e2: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 9003e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9003e8: xor ebx, ebx */
  ebx = 0;
/* 9003ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9003f0: /* 9003f0: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9003f6: jge 0x900404 */
  if ((sf == of)) goto L_900404;
L_9003f8: /* 9003f8: cmp byte ptr [ebp + ebx - 0x11c], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + ebx + 0xfffffee4u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9003ff: je 0x90041c */
  if (zf) goto L_90041c;
L_900401: /* 900401: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 900402: jmp 0x9003f0 */
  goto L_9003f0;
L_900404: /* 900404: push 0x15b */
  { uint32_t v = 0x15bu; esp -= 4; W32(esp, v); }
/* 900409: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 90040e: push 0xaf16a8 */
  { uint32_t v = 0xaf16a8u; esp -= 4; W32(esp, v); }
/* 900413: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x900419u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 900419: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90041c: /* 90041c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 90041f: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* 900422: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900424: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 900427: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x900429u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900429: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90042c: xor eax, eax */
  eax = 0;
/* 90042e: mov edi, edi */
  edi = edi;
L_900430: /* 900430: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900432: jle 0x900445 */
  if ((zf || sf != of)) goto L_900445;
L_900434: /* 900434: mov cl, byte ptr [ebp + ebx - 0x11d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + ebx + 0xfffffee3u))) & 0xffu);
/* 90043b: mov byte ptr [ebp + ebx - 0x11c], cl */
  W8((uint32_t)(ebp + ebx + 0xfffffee4u), (ecx & 0xffu));
/* 900442: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 900443: jmp 0x900430 */
  goto L_900430;
L_900445: /* 900445: mov dl, byte ptr [ebp + 0xb] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 900448: mov byte ptr [ebp + eax - 0x11c], dl */
  W8((uint32_t)(ebp + eax + 0xfffffee4u), (edx & 0xffu));
/* 90044f: jmp 0x9003d0 */
  goto L_9003d0;
L_900454: /* 900454: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900457: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900459: xor eax, eax */
  eax = 0;
/* 90045b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 900462: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900463: mov esp, ebp */
  esp = ebp;
/* 900465: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900466: ret 8 */
  esp += 12; SPILL(); return;
}

void f_900469(void) {
  LOAD_REGS();
L_900469: /* 900469: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 90046c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 900471: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 900474: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900475: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 900478: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90047du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_90047d(); return;
}

void f_90047d(void) {
  LOAD_REGS();
L_90047d: /* 90047d: push 0xa204c0 */
  { uint32_t v = 0xa204c0u; esp -= 4; W32(esp, v); }
/* 900482: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 900487: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x90048du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 90048d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900492: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900494: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900499u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_900499: guest_badaddr(0x900499); return;
}

void f_9004f0(void) {
  LOAD_REGS();
L_9004f0: /* 9004f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9004f1: mov ebp, esp */
  ebp = esp;
/* 9004f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9004f5: push 0x9d9cb0 */
  { uint32_t v = 0x9d9cb0u; esp -= 4; W32(esp, v); }
/* 9004fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 900500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900501: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 900508: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90050e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90050f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900510: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 900511: xor eax, eax */
  eax = 0;
/* 900513: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 900516: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 900519: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_900520: /* 900520: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900525: jge 0x900531 */
  if ((sf == of)) goto L_900531;
L_900527: /* 900527: mov byte ptr [ebp + eax - 0x118], al */
  W8((uint32_t)(ebp + eax + 0xfffffee8u), (eax & 0xffu));
/* 90052e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90052f: jmp 0x900520 */
  goto L_900520;
L_900531: /* 900531: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 900534: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 900537: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 90053d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_900540: /* 900540: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 900542: mov ecx, esi */
  ecx = esi;
/* 900544: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x900547u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900549: jne 0x900594 */
  if (!zf) goto L_900594;
L_90054b: /* 90054b: lea ecx, [ebp + 0xf] */
  ecx = (uint32_t)(ebp + 0xfu);
/* 90054e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90054f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900550: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x900552u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900552: movzx edx, byte ptr [ebp + 0xf] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfu)));
/* 900556: mov al, byte ptr [ebp + edx - 0x118] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + edx + 0xfffffee8u))) & 0xffu);
/* 90055d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900560: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 900563: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900564: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900565: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 900568: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x90056au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90056a: movzx eax, byte ptr [ebp + 0xf] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfu)));
/* 90056e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900571: xor ecx, ecx */
  ecx = 0;
L_900573: /* 900573: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900575: jle 0x900588 */
  if ((zf || sf != of)) goto L_900588;
L_900577: /* 900577: mov dl, byte ptr [ebp + eax - 0x119] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0xfffffee7u))) & 0xffu);
/* 90057e: mov byte ptr [ebp + eax - 0x118], dl */
  W8((uint32_t)(ebp + eax + 0xfffffee8u), (edx & 0xffu));
/* 900585: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 900586: jmp 0x900573 */
  goto L_900573;
L_900588: /* 900588: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 90058b: mov byte ptr [ebp + ecx - 0x118], al */
  W8((uint32_t)(ebp + ecx + 0xfffffee8u), (eax & 0xffu));
/* 900592: jmp 0x900540 */
  goto L_900540;
L_900594: /* 900594: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900597: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900598: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900599: mov eax, 1 */
  eax = 0x1u;
/* 90059e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9005a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9005a6: mov esp, ebp */
  esp = ebp;
/* 9005a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9005a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9005ac(void) {
  LOAD_REGS();
L_9005ac: /* 9005ac: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9005af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 9005b4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9005b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9005b8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 9005bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9005c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_9005c0(); return;
}

void f_9005c0(void) {
  LOAD_REGS();
L_9005c0: /* 9005c0: push 0xa204ec */
  { uint32_t v = 0xa204ecu; esp -= 4; W32(esp, v); }
/* 9005c5: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 9005ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x9005d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 9005d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9005d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9005d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9005d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9005dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9005dc: guest_badaddr(0x9005dc); return;
}

void f_900620(void) {
  LOAD_REGS();
L_900620: /* 900620: mov eax, ecx */
  eax = ecx;
/* 900622: mov dword ptr [eax], 0xa20518 */
  W32((uint32_t)(eax), 0xa20518u);
/* 900628: ret  */
  esp += 4; SPILL(); return;
}

void f_900640(void) {
  LOAD_REGS();
L_900640: /* 900640: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 900641: mov ebp, esp */
  ebp = esp;
/* 900643: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 900645: push 0x9d9ccb */
  { uint32_t v = 0x9d9ccbu; esp -= 4; W32(esp, v); }
/* 90064a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 900650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900651: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 900658: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90065e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 900661: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 900664: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900665: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 900667: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 90066a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90066b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 90066e: mov esi, ecx */
  esi = ecx;
/* 900670: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 900673: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900674: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900675: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900676: mov ecx, esi */
  ecx = esi;
/* 900678: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90067f: call 0x6c56e1 */
  esp -= 4; W32(esp, 0x900684u); SPILL(); f_6c56e1(); if (g_unwind) return; RELOAD();
/* 900684: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 900687: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 900689: mov ebx, 1 */
  ebx = 0x1u;
/* 90068e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90068f: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 900691: call 0x6c74cd */
  esp -= 4; W32(esp, 0x900696u); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 900696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900698: mov dword ptr [esi + 0x454], eax */
  W32((uint32_t)(esi + 0x454u), eax);
/* 90069e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9006a0: jne 0x9006d7 */
  if (!zf) goto L_9006d7;
L_9006a2: /* 9006a2: push 0xaf1554 */
  { uint32_t v = 0xaf1554u; esp -= 4; W32(esp, v); }
/* 9006a7: push 0xaf1564 */
  { uint32_t v = 0xaf1564u; esp -= 4; W32(esp, v); }
/* 9006ac: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x9006b2u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 9006b2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9006b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9006b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9006b8: mov ecx, esi */
  ecx = esi;
/* 9006ba: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x9006bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9006bd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9006bf: mov ecx, esi */
  ecx = esi;
/* 9006c1: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x9006c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9006c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9006c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9006ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9006cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9006d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9006d1: mov esp, ebp */
  esp = ebp;
/* 9006d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9006d4: ret 0x10 */
  esp += 20; SPILL(); return;
L_9006d7: /* 9006d7: mov dword ptr [eax + 0x64], esi */
  W32((uint32_t)(eax + 0x64u), esi);
/* 9006da: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 9006e0: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 9006e3: mov dword ptr [ecx + 0x26c], edx */
  W32((uint32_t)(ecx + 0x26cu), edx);
/* 9006e9: mov eax, dword ptr [esi + 0x454] */
  eax = R32((uint32_t)(esi + 0x454u));
/* 9006ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9006f0: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 9006f6: call 0x6c6780 */
  esp -= 4; W32(esp, 0x9006fbu); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 9006fb: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 9006fe: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 900701: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900702: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 900708: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900709: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 90070c: call 0x6c42b4 */
  esp -= 4; W32(esp, 0x900711u); SPILL(); f_6c42b4(); if (g_unwind) return; RELOAD();
/* 900711: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900714: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 90071a: mov byte ptr [ebp - 0x1a], bl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ebx & 0xffu));
/* 90071d: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x900723u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 900723: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900725: je 0x90073f */
  if (zf) goto L_90073f;
L_900727: /* 900727: push 0x102 */
  { uint32_t v = 0x102u; esp -= 4; W32(esp, v); }
/* 90072c: push 0xaf157c */
  { uint32_t v = 0xaf157cu; esp -= 4; W32(esp, v); }
/* 900731: push 0xaf158c */
  { uint32_t v = 0xaf158cu; esp -= 4; W32(esp, v); }
/* 900736: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x90073cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 90073c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90073f: /* 90073f: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 900745: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900747: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 90074d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90074e: call 0x6c76cb */
  esp -= 4; W32(esp, 0x900753u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 900753: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 900759: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90075d: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x900763u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 900763: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900766: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900767: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900768: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90076f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900770: mov esp, ebp */
  esp = ebp;
/* 900772: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900773: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_900776(void) {
  LOAD_REGS();
L_900776: /* 900776: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 900779: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 90077e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 900781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900782: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 900785: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90078au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_90078a(); return;
}

void f_90078a(void) {
  LOAD_REGS();
L_90078a: /* 90078a: push 0xa20524 */
  { uint32_t v = 0xa20524u; esp -= 4; W32(esp, v); }
/* 90078f: push 0xaf15a0 */
  { uint32_t v = 0xaf15a0u; esp -= 4; W32(esp, v); }
/* 900794: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x90079au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 90079a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90079d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90079f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9007a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9007a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9007a6: guest_badaddr(0x9007a6); return;
}

void f_900810(void) {
  LOAD_REGS();
L_900810: /* 900810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900811: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 900813: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 900815: mov esi, ecx */
  esi = ecx;
/* 900817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x90081du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 90081d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 900821: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 900823: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 900825: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 900828: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900829: ret 4 */
  esp += 8; SPILL(); return;
}

void f_900840(void) {
  LOAD_REGS();
L_900840: /* 900840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900841: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 900842: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 900848: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900849: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90084a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 90084e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 900850: mov esi, ecx */
  esi = ecx;
/* 900852: jge 0x900868 */
  if ((sf == of)) goto L_900868;
L_900854: /* 900854: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 900859: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 90085e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 900863: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x900865u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900865: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_900868: /* 900868: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90086b: jle 0x900881 */
  if ((zf || sf != of)) goto L_900881;
L_90086d: /* 90086d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 900872: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 900877: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 90087c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x90087eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90087e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_900881: /* 900881: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 900885: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 900888: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 90088b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90088d: jle 0x9008a3 */
  if ((zf || sf != of)) goto L_9008a3;
L_90088f: /* 90088f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 900894: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 900899: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 90089e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x9008a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9008a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9008a3: /* 9008a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9008a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9008a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9008a7: mov ecx, esi */
  ecx = esi;
/* 9008a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x9008afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 9008af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9008b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9008b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9008b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9008b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9008e0(void) {
  LOAD_REGS();
L_9008e0: /* 9008e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9008e1: mov ebp, esp */
  ebp = esp;
/* 9008e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9008e5: push 0x9d9cf0 */
  { uint32_t v = 0x9d9cf0u; esp -= 4; W32(esp, v); }
/* 9008ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9008f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9008f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9008f8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9008fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9008fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9008fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9008fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 900901: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 900903: xor esi, esi */
  esi = 0;
/* 900905: push 0x40000 */
  { uint32_t v = 0x40000u; esp -= 4; W32(esp, v); }
/* 90090a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 90090d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 900910: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x900916u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 900916: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 900918: push 0x40001 */
  { uint32_t v = 0x40001u; esp -= 4; W32(esp, v); }
/* 90091d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900920: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900924: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x90092au); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 90092a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 90092d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 900930: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 900933: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 900937: mov dword ptr [0xcf08dc], eax */
  W32((uint32_t)(0xcf08dcu), eax);
/* 90093c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 90093f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_900942: /* 900942: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 900944: mov ecx, edi */
  ecx = edi;
/* 900946: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x900949u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900949: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90094b: jne 0x900a3a */
  if (!zf) goto L_900a3a;
L_900951: /* 900951: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 900953: mov ecx, edi */
  ecx = edi;
/* 900955: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x900958u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900958: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 90095a: mov ecx, edi */
  ecx = edi;
/* 90095c: mov esi, eax */
  esi = eax;
/* 90095e: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x900961u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900961: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 900963: cmp eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900968: jle 0x90096f */
  if ((zf || sf != of)) goto L_90096f;
L_90096a: /* 90096a: mov eax, 0x40000 */
  eax = 0x40000u;
L_90096f: /* 90096f: mov dword ptr [0xcf08d8], eax */
  W32((uint32_t)(0xcf08d8u), eax);
/* 900974: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 900976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900977: mov eax, dword ptr [0xcf08dc] */
  eax = R32((uint32_t)(0xcf08dcu));
/* 90097c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90097d: mov ecx, edi */
  ecx = edi;
/* 90097f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x900982u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900982: xor eax, eax */
  eax = 0;
L_900984: /* 900984: mov ecx, dword ptr [0xcf08d8] */
  ecx = R32((uint32_t)(0xcf08d8u));
/* 90098a: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 90098d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90098f: jge 0x90099a */
  if ((sf == of)) goto L_90099a;
L_900991: /* 900991: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 900994: mov dword ptr [ecx + eax*4], eax */
  W32((uint32_t)(ecx + eax*4), eax);
/* 900997: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 900998: jmp 0x900984 */
  goto L_900984;
L_90099a: /* 90099a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 90099d: push 0x6c2e87 */
  { uint32_t v = 0x6c2e87u; esp -= 4; W32(esp, v); }
/* 9009a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9009a4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9009a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9009a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9009a7: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x9009adu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 9009ad: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 9009b0: mov esi, dword ptr [0xcf08d8] */
  esi = R32((uint32_t)(0xcf08d8u));
/* 9009b6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9009b9: xor eax, eax */
  eax = 0;
/* 9009bb: jmp 0x9009c0 */
  goto L_9009c0;
L_9009c0: /* 9009c0: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 9009c3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9009c5: jge 0x9009df */
  if ((sf == of)) goto L_9009df;
L_9009c7: /* 9009c7: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 9009ca: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9009cd: jne 0x9009d5 */
  if (!zf) goto L_9009d5;
L_9009cf: /* 9009cf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9009d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9009d3: jmp 0x9009c0 */
  goto L_9009c0;
L_9009d5: /* 9009d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9009d7: jne 0x9009dc */
  if (!zf) goto L_9009dc;
L_9009d9: /* 9009d9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_9009dc: /* 9009dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9009dd: jmp 0x9009c0 */
  goto L_9009c0;
L_9009df: /* 9009df: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 9009e5: push 0xcf08d8 */
  { uint32_t v = 0xcf08d8u; esp -= 4; W32(esp, v); }
/* 9009ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9009eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9009edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9009ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9009f0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9009f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9009f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9009f5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9009f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9009f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9009fa: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9009fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9009fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9009ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x900a01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900a01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900a04: xor esi, esi */
  esi = 0;
L_900a06: /* 900a06: mov edx, dword ptr [0xcf08d8] */
  edx = R32((uint32_t)(0xcf08d8u));
/* 900a0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 900a0d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900a0f: jge 0x900942 */
  if ((sf == of)) goto L_900942;
L_900a15: /* 900a15: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 900a18: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 900a1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900a1d: je 0x900a22 */
  if (zf) goto L_900a22;
L_900a1f: /* 900a1f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 900a20: jmp 0x900a24 */
  goto L_900a24;
L_900a22: /* 900a22: xor eax, eax */
  eax = 0;
L_900a24: /* 900a24: mov ecx, dword ptr [0xcf08dc] */
  ecx = R32((uint32_t)(0xcf08dcu));
/* 900a2a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 900a2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900a2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900a2e: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x900a34u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 900a34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900a37: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 900a38: jmp 0x900a06 */
  goto L_900a06;
L_900a3a: /* 900a3a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900a3d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900a41: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x900a46u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 900a46: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 900a49: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 900a4d: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x900a52u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 900a52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900a55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900a56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900a57: xor eax, eax */
  eax = 0;
/* 900a59: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 900a60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900a61: mov esp, ebp */
  esp = ebp;
/* 900a63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900a64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9009bd(void) {
  LOAD_REGS();
  goto L_9009bd;
L_900942: /* 900942: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 900944: mov ecx, edi */
  ecx = edi;
/* 900946: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x900949u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900949: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90094b: jne 0x900a3a */
  if (!zf) goto L_900a3a;
L_900951: /* 900951: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 900953: mov ecx, edi */
  ecx = edi;
/* 900955: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x900958u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900958: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 90095a: mov ecx, edi */
  ecx = edi;
/* 90095c: mov esi, eax */
  esi = eax;
/* 90095e: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x900961u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900961: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 900963: cmp eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900968: jle 0x90096f */
  if ((zf || sf != of)) goto L_90096f;
L_90096a: /* 90096a: mov eax, 0x40000 */
  eax = 0x40000u;
L_90096f: /* 90096f: mov dword ptr [0xcf08d8], eax */
  W32((uint32_t)(0xcf08d8u), eax);
/* 900974: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 900976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900977: mov eax, dword ptr [0xcf08dc] */
  eax = R32((uint32_t)(0xcf08dcu));
/* 90097c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90097d: mov ecx, edi */
  ecx = edi;
/* 90097f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x900982u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900982: xor eax, eax */
  eax = 0;
L_900984: /* 900984: mov ecx, dword ptr [0xcf08d8] */
  ecx = R32((uint32_t)(0xcf08d8u));
/* 90098a: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 90098d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90098f: jge 0x90099a */
  if ((sf == of)) goto L_90099a;
L_900991: /* 900991: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 900994: mov dword ptr [ecx + eax*4], eax */
  W32((uint32_t)(ecx + eax*4), eax);
/* 900997: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 900998: jmp 0x900984 */
  goto L_900984;
L_90099a: /* 90099a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 90099d: push 0x6c2e87 */
  { uint32_t v = 0x6c2e87u; esp -= 4; W32(esp, v); }
/* 9009a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9009a4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9009a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9009a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9009a7: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x9009adu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 9009ad: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 9009b0: mov esi, dword ptr [0xcf08d8] */
  esi = R32((uint32_t)(0xcf08d8u));
/* 9009b6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9009b9: xor eax, eax */
  eax = 0;
/* 9009bb: jmp 0x9009c0 */
  goto L_9009c0;
L_9009bd: /* 9009bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9009c0: /* 9009c0: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 9009c3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9009c5: jge 0x9009df */
  if ((sf == of)) goto L_9009df;
L_9009c7: /* 9009c7: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 9009ca: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9009cd: jne 0x9009d5 */
  if (!zf) goto L_9009d5;
L_9009cf: /* 9009cf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9009d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9009d3: jmp 0x9009c0 */
  goto L_9009c0;
L_9009d5: /* 9009d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9009d7: jne 0x9009dc */
  if (!zf) goto L_9009dc;
L_9009d9: /* 9009d9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_9009dc: /* 9009dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9009dd: jmp 0x9009c0 */
  goto L_9009c0;
L_9009df: /* 9009df: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 9009e5: push 0xcf08d8 */
  { uint32_t v = 0xcf08d8u; esp -= 4; W32(esp, v); }
/* 9009ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9009eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9009edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9009ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9009f0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9009f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9009f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9009f5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9009f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9009f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9009fa: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9009fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9009fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9009ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x900a01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900a01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900a04: xor esi, esi */
  esi = 0;
L_900a06: /* 900a06: mov edx, dword ptr [0xcf08d8] */
  edx = R32((uint32_t)(0xcf08d8u));
/* 900a0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 900a0d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900a0f: jge 0x900942 */
  if ((sf == of)) goto L_900942;
L_900a15: /* 900a15: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 900a18: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 900a1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900a1d: je 0x900a22 */
  if (zf) goto L_900a22;
L_900a1f: /* 900a1f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 900a20: jmp 0x900a24 */
  goto L_900a24;
L_900a22: /* 900a22: xor eax, eax */
  eax = 0;
L_900a24: /* 900a24: mov ecx, dword ptr [0xcf08dc] */
  ecx = R32((uint32_t)(0xcf08dcu));
/* 900a2a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 900a2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900a2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900a2e: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x900a34u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 900a34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900a37: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 900a38: jmp 0x900a06 */
  goto L_900a06;
L_900a3a: /* 900a3a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900a3d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900a41: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x900a46u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 900a46: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 900a49: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 900a4d: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x900a52u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 900a52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900a55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900a56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900a57: xor eax, eax */
  eax = 0;
/* 900a59: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 900a60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900a61: mov esp, ebp */
  esp = ebp;
/* 900a63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900a64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_900a67(void) {
  LOAD_REGS();
L_900a67: /* 900a67: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 900a6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 900a6f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 900a72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900a73: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 900a76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900a7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_900a7b(); return;
}

void f_900a7b(void) {
  LOAD_REGS();
L_900a7b: /* 900a7b: push 0xa2056c */
  { uint32_t v = 0xa2056cu; esp -= 4; W32(esp, v); }
/* 900a80: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 900a85: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x900a8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 900a8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900a8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900a90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900a92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900a97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_900a97: guest_badaddr(0x900a97); return;
}

void f_900b10(void) {
  LOAD_REGS();
L_900b10: /* 900b10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 900b14: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 900b16: mov edx, dword ptr [0xcf08dc] */
  edx = R32((uint32_t)(0xcf08dcu));
/* 900b1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900b1d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 900b1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900b1f: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 900b23: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 900b25: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900b27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 900b28: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* 900b2b: lea edi, [edx + ebp] */
  edi = (uint32_t)(edx + ebp);
/* 900b2e: mov edx, eax */
  edx = eax;
/* 900b30: jge 0x900b34 */
  if ((sf == of)) goto L_900b34;
L_900b32: /* 900b32: mov edx, ebp */
  edx = ebp;
L_900b34: /* 900b34: mov esi, dword ptr [0xcf08d8] */
  esi = R32((uint32_t)(0xcf08d8u));
/* 900b3a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 900b3c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 900b3e: jle 0x900b53 */
  if ((zf || sf != of)) goto L_900b53;
L_900b40: /* 900b40: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_900b42: /* 900b42: mov dl, byte ptr [edi + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ecx))) & 0xffu);
/* 900b45: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 900b47: cmp bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 900b49: jb 0x900b5a */
  if (cf) goto L_900b5a;
L_900b4b: /* 900b4b: ja 0x900b62 */
  if ((!cf && !zf)) goto L_900b62;
L_900b4d: /* 900b4d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 900b4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 900b4f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 900b51: jg 0x900b42 */
  if ((!zf && sf == of)) goto L_900b42;
L_900b53: /* 900b53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900b54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900b55: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 900b57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900b58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900b59: ret  */
  esp += 4; SPILL(); return;
L_900b5a: /* 900b5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900b5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900b5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900b5d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 900b60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900b61: ret  */
  esp += 4; SPILL(); return;
L_900b62: /* 900b62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900b63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900b64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900b65: mov eax, 1 */
  eax = 0x1u;
/* 900b6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900b6b: ret  */
  esp += 4; SPILL(); return;
}

void f_900b90(void) {
  LOAD_REGS();
L_900b90: /* 900b90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 900b91: mov ebp, esp */
  ebp = esp;
/* 900b93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 900b95: push 0x9d9d10 */
  { uint32_t v = 0x9d9d10u; esp -= 4; W32(esp, v); }
/* 900b9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 900ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900ba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 900ba8: sub esp, 0x838 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x838u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 900bae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900baf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900bb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 900bb1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 900bb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 900bb6: xor edi, edi */
  edi = 0;
/* 900bb8: push 0x40001 */
  { uint32_t v = 0x40001u; esp -= 4; W32(esp, v); }
/* 900bbd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 900bc0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 900bc3: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x900bc9u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 900bc9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 900bcb: push 0x40001 */
  { uint32_t v = 0x40001u; esp -= 4; W32(esp, v); }
/* 900bd0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 900bd3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900bd7: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x900bddu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 900bdd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_900be1: /* 900be1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 900be4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 900be6: mov ecx, ebx */
  ecx = ebx;
/* 900be8: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x900bebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900beb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 900bed: jne 0x900d60 */
  if (!zf) goto L_900d60;
L_900bf3: /* 900bf3: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 900bf9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 900bfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900bfd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900bfe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x900c00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900c00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900c03: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 900c06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900c07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900c08: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x900c0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900c0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900c0d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 900c10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900c11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900c12: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x900c14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900c14: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 900c17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900c1a: cmp eax, 0x40001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40001u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900c1f: jle 0x900c36 */
  if ((zf || sf != of)) goto L_900c36;
L_900c21: /* 900c21: push 0x57 */
  { uint32_t v = 0x57u; esp -= 4; W32(esp, v); }
/* 900c23: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 900c28: push 0xaf16e4 */
  { uint32_t v = 0xaf16e4u; esp -= 4; W32(esp, v); }
/* 900c2d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x900c33u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 900c33: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_900c36: /* 900c36: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 900c38: mov ecx, ebx */
  ecx = ebx;
/* 900c3a: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x900c3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900c3d: mov esi, eax */
  esi = eax;
/* 900c3f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 900c41: mov ecx, ebx */
  ecx = ebx;
/* 900c43: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x900c46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900c46: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 900c48: cmp dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900c4b: jle 0x900c62 */
  if ((zf || sf != of)) goto L_900c62;
L_900c4d: /* 900c4d: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 900c4f: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 900c54: push 0xaf16b0 */
  { uint32_t v = 0xaf16b0u; esp -= 4; W32(esp, v); }
/* 900c59: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x900c5fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 900c5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_900c62: /* 900c62: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 900c65: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 900c67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 900c68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900c69: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 900c6c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 900c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900c70: mov ecx, ebx */
  ecx = ebx;
/* 900c72: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x900c75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900c75: xor eax, eax */
  eax = 0;
L_900c77: /* 900c77: cmp eax, 0x101 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900c7c: jge 0x900c88 */
  if ((sf == of)) goto L_900c88;
L_900c7e: /* 900c7e: mov dword ptr [ebp + eax*4 - 0x440], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffbc0u), edi);
/* 900c85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 900c86: jmp 0x900c77 */
  goto L_900c77;
L_900c88: /* 900c88: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 900c8b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 900c8e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 900c91: xor eax, eax */
  eax = 0;
L_900c93: /* 900c93: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900c95: jge 0x900ccc */
  if ((sf == of)) goto L_900ccc;
L_900c97: /* 900c97: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 900c99: je 0x900cb3 */
  if (zf) goto L_900cb3;
L_900c9b: /* 900c9b: movzx ecx, byte ptr [eax + edx] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx)));
/* 900c9f: mov esi, dword ptr [ebp + ecx*4 - 0x440] */
  esi = R32((uint32_t)(ebp + ecx*4 + 0xfffffbc0u));
/* 900ca6: lea ecx, [ebp + ecx*4 - 0x440] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffbc0u);
/* 900cad: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 900cae: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 900cb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 900cb1: jmp 0x900c93 */
  goto L_900c93;
L_900cb3: /* 900cb3: mov ecx, 0x100 */
  ecx = 0x100u;
/* 900cb8: mov esi, dword ptr [ebp + ecx*4 - 0x440] */
  esi = R32((uint32_t)(ebp + ecx*4 + 0xfffffbc0u));
/* 900cbf: lea ecx, [ebp + ecx*4 - 0x440] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffbc0u);
/* 900cc6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 900cc7: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 900cc9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 900cca: jmp 0x900c93 */
  goto L_900c93;
L_900ccc: /* 900ccc: xor esi, esi */
  esi = 0;
/* 900cce: xor ecx, ecx */
  ecx = 0;
/* 900cd0: xor eax, eax */
  eax = 0;
L_900cd2: /* 900cd2: cmp eax, 0x101 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900cd7: jge 0x900cf1 */
  if ((sf == of)) goto L_900cf1;
L_900cd9: /* 900cd9: mov dword ptr [ebp + eax*4 - 0x844], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xfffff7bcu), ecx);
/* 900ce0: add ecx, dword ptr [ebp + eax*4 - 0x440] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + eax*4 + 0xfffffbc0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 900ce7: mov dword ptr [ebp + eax*4 - 0x440], esi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffbc0u), esi);
/* 900cee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 900cef: jmp 0x900cd2 */
  goto L_900cd2;
L_900cf1: /* 900cf1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900cf3: jge 0x900d30 */
  if ((sf == of)) goto L_900d30;
L_900cf5: /* 900cf5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 900cf7: je 0x900cff */
  if (zf) goto L_900cff;
L_900cf9: /* 900cf9: movzx eax, byte ptr [esi + edx] */
  eax = (uint32_t)(R8((uint32_t)(esi + edx)));
/* 900cfd: jmp 0x900d04 */
  goto L_900d04;
L_900cff: /* 900cff: mov eax, 0x100 */
  eax = 0x100u;
L_900d04: /* 900d04: mov edx, dword ptr [ebp + eax*4 - 0x440] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffbc0u));
/* 900d0b: lea ecx, [ebp + eax*4 - 0x440] */
  ecx = (uint32_t)(ebp + eax*4 + 0xfffffbc0u);
/* 900d12: mov eax, dword ptr [ebp + eax*4 - 0x844] */
  eax = R32((uint32_t)(ebp + eax*4 + 0xfffff7bcu));
/* 900d19: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 900d1b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 900d1c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 900d1e: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 900d21: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 900d24: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 900d27: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 900d2a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 900d2d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 900d2e: jmp 0x900cf1 */
  goto L_900cf1;
L_900d30: /* 900d30: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 900d33: xor edi, edi */
  edi = 0;
L_900d35: /* 900d35: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 900d36: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900d38: jge 0x900d59 */
  if ((sf == of)) goto L_900d59;
L_900d3a: /* 900d3a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 900d3d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 900d3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 900d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900d41: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x900d47u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 900d47: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 900d4a: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 900d4d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 900d50: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 900d53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900d56: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 900d57: jmp 0x900d35 */
  goto L_900d35;
L_900d59: /* 900d59: xor edi, edi */
  edi = 0;
/* 900d5b: jmp 0x900be1 */
  goto L_900be1;
L_900d60: /* 900d60: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 900d63: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900d67: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x900d6cu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 900d6c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 900d6f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 900d73: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x900d78u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 900d78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900d7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900d7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900d7d: mov eax, 1 */
  eax = 0x1u;
/* 900d82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 900d89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900d8a: mov esp, ebp */
  esp = ebp;
/* 900d8c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900d8d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_900d90(void) {
  LOAD_REGS();
L_900d90: /* 900d90: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 900d93: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 900d98: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 900d9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900d9c: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 900d9f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900da4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_900da4(); return;
}

void f_900da4(void) {
  LOAD_REGS();
L_900da4: /* 900da4: push 0xa20598 */
  { uint32_t v = 0xa20598u; esp -= 4; W32(esp, v); }
/* 900da9: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 900dae: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x900db4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 900db4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900db7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900db9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900dbb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900dc0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_900dc0: guest_badaddr(0x900dc0); return;
}

void f_900e60(void) {
  LOAD_REGS();
L_900e60: /* 900e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 900e61: mov ebp, esp */
  ebp = esp;
/* 900e63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 900e65: push 0x9d9d44 */
  { uint32_t v = 0x9d9d44u; esp -= 4; W32(esp, v); }
/* 900e6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 900e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900e71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 900e78: sub esp, 0xb4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 900e7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 900e7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 900e80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 900e81: mov edi, ecx */
  edi = ecx;
/* 900e83: xor esi, esi */
  esi = 0;
/* 900e85: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900e88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 900e8b: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 900e8e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x900e94u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 900e94: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900e97: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900e9b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x900ea1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 900ea1: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 900ea4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 900ea8: jmp 0x900eb0 */
  goto L_900eb0;
L_900eb0: /* 900eb0: cmp esi, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900eb3: jge 0x900f67 */
  if ((sf == of)) goto L_900f67;
L_900eb9: /* 900eb9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 900ebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900ebd: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 900ec3: call dword ptr [0xcfad00] */
  esp -= 4; W32(esp, 0x900ec9u); SPILL(); f_4e2c39(); if (g_unwind) return; /* Core!??0FBufferReader@@QAE@ABV?$TArray@E@@@Z */ RELOAD();
/* 900ec9: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 900ecc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 900ed0: call dword ptr [0xcfaa40] */
  esp -= 4; W32(esp, 0x900ed6u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* 900ed6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900ed9: mov dword ptr [ebp - 0x78], 0xa201a0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0xa201a0u);
/* 900ee0: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 900ee3: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 900eea: mov dword ptr [ebp - 0x64], 1 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x1u);
/* 900ef1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 900ef4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 900ef5: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900ef7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 900efb: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 900efe: jl 0x900f03 */
  if ((sf != of)) goto L_900f03;
L_900f00: /* 900f00: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_900f03: /* 900f03: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900f05: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 900f0b: jne 0x900f10 */
  if (!zf) goto L_900f10;
L_900f0d: /* 900f0d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_900f10: /* 900f10: mov edx, esi */
  edx = esi;
/* 900f12: imul edx, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 900f16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900f18: add edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 900f1b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 900f1e: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 900f21: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x900f23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900f23: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 900f26: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 900f27: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900f29: jge 0x900f44 */
  if ((sf == of)) goto L_900f44;
L_900f2b: /* 900f2b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900f2f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900f32: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x900f37u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 900f37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900f39: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 900f3b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900f3e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x900f44u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_900f44: /* 900f44: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 900f47: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 900f4b: call dword ptr [0xcfaa14] */
  esp -= 4; W32(esp, 0x900f51u); SPILL(); f_4e4552(); if (g_unwind) return; /* Core!??1FArchive@@UAE@XZ */ RELOAD();
/* 900f51: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 900f57: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 900f5b: call dword ptr [0xcfacfc] */
  esp -= 4; W32(esp, 0x900f61u); SPILL(); f_4e1168(); if (g_unwind) return; /* Core!??1FBufferReader@@UAE@XZ */ RELOAD();
/* 900f61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 900f62: jmp 0x900eb0 */
  goto L_900eb0;
L_900f67: /* 900f67: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900f6a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900f6e: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x900f73u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 900f73: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900f76: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 900f7a: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x900f7fu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 900f7f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900f82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900f83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900f84: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 900f8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900f8c: mov esp, ebp */
  esp = ebp;
/* 900f8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900f8f: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_900eaa(void) {
  LOAD_REGS();
L_900eaa: /* 900eaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_900eb0: /* 900eb0: cmp esi, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900eb3: jge 0x900f67 */
  if ((sf == of)) goto L_900f67;
L_900eb9: /* 900eb9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 900ebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900ebd: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 900ec3: call dword ptr [0xcfad00] */
  esp -= 4; W32(esp, 0x900ec9u); SPILL(); f_4e2c39(); if (g_unwind) return; /* Core!??0FBufferReader@@QAE@ABV?$TArray@E@@@Z */ RELOAD();
/* 900ec9: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 900ecc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 900ed0: call dword ptr [0xcfaa40] */
  esp -= 4; W32(esp, 0x900ed6u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* 900ed6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900ed9: mov dword ptr [ebp - 0x78], 0xa201a0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0xa201a0u);
/* 900ee0: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 900ee3: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 900eea: mov dword ptr [ebp - 0x64], 1 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x1u);
/* 900ef1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 900ef4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 900ef5: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900ef7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 900efb: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 900efe: jl 0x900f03 */
  if ((sf != of)) goto L_900f03;
L_900f00: /* 900f00: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_900f03: /* 900f03: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 900f05: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 900f0b: jne 0x900f10 */
  if (!zf) goto L_900f10;
L_900f0d: /* 900f0d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_900f10: /* 900f10: mov edx, esi */
  edx = esi;
/* 900f12: imul edx, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 900f16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900f18: add edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 900f1b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 900f1e: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 900f21: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x900f23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 900f23: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 900f26: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 900f27: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 900f29: jge 0x900f44 */
  if ((sf == of)) goto L_900f44;
L_900f2b: /* 900f2b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 900f2f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900f32: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x900f37u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 900f37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900f39: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 900f3b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900f3e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x900f44u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_900f44: /* 900f44: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 900f47: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 900f4b: call dword ptr [0xcfaa14] */
  esp -= 4; W32(esp, 0x900f51u); SPILL(); f_4e4552(); if (g_unwind) return; /* Core!??1FArchive@@UAE@XZ */ RELOAD();
/* 900f51: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 900f57: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 900f5b: call dword ptr [0xcfacfc] */
  esp -= 4; W32(esp, 0x900f61u); SPILL(); f_4e1168(); if (g_unwind) return; /* Core!??1FBufferReader@@UAE@XZ */ RELOAD();
/* 900f61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 900f62: jmp 0x900eb0 */
  goto L_900eb0;
L_900f67: /* 900f67: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 900f6a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 900f6e: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x900f73u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 900f73: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 900f76: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 900f7a: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x900f7fu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 900f7f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 900f82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 900f83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 900f84: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 900f8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 900f8c: mov esp, ebp */
  esp = ebp;
/* 900f8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 900f8f: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_900f92(void) {
  LOAD_REGS();
L_900f92: /* 900f92: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 900f95: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 900f9a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 900f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 900f9e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 900fa1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900fa6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_900fa6(); return;
}

void f_900fa6(void) {
  LOAD_REGS();
L_900fa6: /* 900fa6: push 0xa205c4 */
  { uint32_t v = 0xa205c4u; esp -= 4; W32(esp, v); }
/* 900fab: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 900fb0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x900fb6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 900fb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 900fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900fbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 900fbd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x900fc2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_900fc2: guest_badaddr(0x900fc2); return;
}

void f_901030(void) {
  LOAD_REGS();
L_901030: /* 901030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 901031: mov ebp, esp */
  ebp = esp;
/* 901033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 901035: push 0x9d9d60 */
  { uint32_t v = 0x9d9d60u; esp -= 4; W32(esp, v); }
/* 90103a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 901040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 901048: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90104b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90104e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 901051: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 901052: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901053: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901054: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 901057: push 0x6cbd6b */
  { uint32_t v = 0x6cbd6bu; esp -= 4; W32(esp, v); }
/* 90105c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 90105d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90105e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 901061: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 901063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901064: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901065: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90106c: call 0x6c66c2 */
  esp -= 4; W32(esp, 0x901071u); SPILL(); f_6c66c2(); if (g_unwind) return; RELOAD();
/* 901071: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 901074: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901075: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901076: mov eax, 1 */
  eax = 0x1u;
/* 90107b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 901082: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901083: mov esp, ebp */
  esp = ebp;
/* 901085: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 901086: ret 8 */
  esp += 12; SPILL(); return;
}

void f_901089(void) {
  LOAD_REGS();
L_901089: /* 901089: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 90108c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 901091: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 901094: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901095: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 901098: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90109du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_90109d(); return;
}

void f_90109d(void) {
  LOAD_REGS();
L_90109d: /* 90109d: push 0xa205ec */
  { uint32_t v = 0xa205ecu; esp -= 4; W32(esp, v); }
/* 9010a2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 9010a7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x9010adu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 9010ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9010b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9010b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9010b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9010b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9010b9: guest_badaddr(0x9010b9); return;
}

void f_9010f0(void) {
  LOAD_REGS();
L_9010f0: /* 9010f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9010f1: mov ebp, esp */
  ebp = esp;
/* 9010f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9010f5: push 0x9d9d70 */
  { uint32_t v = 0x9d9d70u; esp -= 4; W32(esp, v); }
/* 9010fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 901100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 901108: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90110b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90110c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90110d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90110e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 901111: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 901114: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901116: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 901118: mov ecx, esi */
  ecx = esi;
/* 90111a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 901121: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x901127u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 901127: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 901129: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 90112c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90112d: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 901130: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 901133: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901134: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90113b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90113c: mov esp, ebp */
  esp = ebp;
/* 90113e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90113f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_901142(void) {
  LOAD_REGS();
L_901142: /* 901142: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 901145: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 90114a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 90114d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90114e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 901151: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901156u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_901156(); return;
}

void f_901156(void) {
  LOAD_REGS();
L_901156: /* 901156: push 0xa2061c */
  { uint32_t v = 0xa2061cu; esp -= 4; W32(esp, v); }
/* 90115b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 901160: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x901166u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 901166: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901169: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90116b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90116d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901172u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_901172: guest_badaddr(0x901172); return;
}

void f_9011b0(void) {
  LOAD_REGS();
L_9011b0: /* 9011b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9011b2: push 0x9d9d89 */
  { uint32_t v = 0x9d9d89u; esp -= 4; W32(esp, v); }
/* 9011b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9011bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9011be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9011c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9011c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9011c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9011c8: mov esi, ecx */
  esi = ecx;
/* 9011ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9011cb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9011cf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 9011d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9011d4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 9011da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9011e2: jge 0x9011f8 */
  if ((sf == of)) goto L_9011f8;
L_9011e4: /* 9011e4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 9011e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 9011ee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 9011f3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9011f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9011f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9011f8: /* 9011f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9011fb: jle 0x901211 */
  if ((zf || sf != of)) goto L_901211;
L_9011fd: /* 9011fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 901202: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901207: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 90120c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x90120eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90120e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901211: /* 901211: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901213: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901214: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901216: mov ecx, esi */
  ecx = esi;
/* 901218: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x90121eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 90121e: mov ecx, esi */
  ecx = esi;
/* 901220: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 901228: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x90122eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 90122e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 901232: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901233: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901234: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901235: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90123c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90123f: ret  */
  esp += 4; SPILL(); return;
}

void f_901270(void) {
  LOAD_REGS();
L_901270: /* 901270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 901271: mov ebp, esp */
  ebp = esp;
/* 901273: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 901275: push 0x9d9dc4 */
  { uint32_t v = 0x9d9dc4u; esp -= 4; W32(esp, v); }
/* 90127a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 901280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901281: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 901288: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90128e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90128f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901290: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 901293: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901294: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 901297: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 90129a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90129b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90129c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9012a3: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x9012a9u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 9012a9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9012ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9012ae: mov ecx, esi */
  ecx = esi;
/* 9012b0: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x9012b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9012b3: mov edi, eax */
  edi = eax;
/* 9012b5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9012b7: mov ecx, esi */
  ecx = esi;
/* 9012b9: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x9012bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9012bc: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9012be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9012c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9012c1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9012c4: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x9012cau); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 9012ca: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9012cd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9012d0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9012d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9012d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9012d4: mov ecx, esi */
  ecx = esi;
/* 9012d6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 9012da: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x9012ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9012dd: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9012e0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9012e3: lea eax, [edx*8] */
  eax = (uint32_t)(edx*8);
/* 9012ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9012eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9012ec: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 9012f2: call dword ptr [0xcfac74] */
  esp -= 4; W32(esp, 0x9012f8u); SPILL(); f_4e2441(); if (g_unwind) return; /* Core!??0FBitReader@@QAE@PAEH@Z */ RELOAD();
/* 9012f8: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 9012fa: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 9012fd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 901300: mov dword ptr [ebp - 0x48], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xffffffffu);
/* 901307: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 90130e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901314u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901314: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 901317: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 90131b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901321u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901321: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 901327: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901328: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 90132b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 90132f: call 0x6c4999 */
  esp -= 4; W32(esp, 0x901334u); SPILL(); f_6c4999(); if (g_unwind) return; RELOAD();
/* 901334: mov edi, dword ptr [0xcfacb4] */
  edi = R32((uint32_t)(0xcfacb4u));
/* 90133a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_901340: /* 901340: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 901343: mov ecx, eax */
  ecx = eax;
/* 901345: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 901346: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901348: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 90134b: jle 0x9013a8 */
  if ((zf || sf != of)) goto L_9013a8;
L_90134d: /* 90134d: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 901353: call dword ptr [0xcfa4e8] */
  esp -= 4; W32(esp, 0x901359u); SPILL(); f_4e14c9(); if (g_unwind) return; /* Core!?AtEnd@FBitReader@@UAEHXZ */ RELOAD();
/* 901359: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90135b: je 0x901375 */
  if (zf) goto L_901375;
L_90135d: /* 90135d: push 0x13b */
  { uint32_t v = 0x13bu; esp -= 4; W32(esp, v); }
/* 901362: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 901367: push 0xaf1710 */
  { uint32_t v = 0xaf1710u; esp -= 4; W32(esp, v); }
/* 90136c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x901372u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 901372: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901375: /* 901375: lea esi, [ebp - 0x48] */
  esi = (uint32_t)(ebp + 0xffffffb8u);
L_901378: /* 901378: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90137b: jne 0x901390 */
  if (!zf) goto L_901390;
L_90137d: /* 90137d: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 901383: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901385: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 901388: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90138b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 90138e: jmp 0x901378 */
  goto L_901378;
L_901390: /* 901390: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 901393: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 901395: lea edx, [ebp + 0xb] */
  edx = (uint32_t)(ebp + 0xbu);
/* 901398: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90139a: mov byte ptr [ebp + 0xb], cl */
  W8((uint32_t)(ebp + 0xbu), (ecx & 0xffu));
/* 90139d: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x9013a3u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 9013a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9013a6: jmp 0x901340 */
  goto L_901340;
L_9013a8: /* 9013a8: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 9013ab: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 9013ae: call 0x6c3b20 */
  esp -= 4; W32(esp, 0x9013b3u); SPILL(); f_6c3b20(); if (g_unwind) return; RELOAD();
/* 9013b3: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 9013b9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 9013bd: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x9013c3u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 9013c3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9013c6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9013ca: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x9013cfu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 9013cf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9013d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9013d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9013d4: mov eax, 1 */
  eax = 0x1u;
/* 9013d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9013e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9013e1: mov esp, ebp */
  esp = ebp;
/* 9013e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9013e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9013e7(void) {
  LOAD_REGS();
L_9013e7: /* 9013e7: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 9013ea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 9013ef: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 9013f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9013f3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 9013f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9013fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_9013fb(); return;
}

void f_9013fb(void) {
  LOAD_REGS();
L_9013fb: /* 9013fb: push 0xa20650 */
  { uint32_t v = 0xa20650u; esp -= 4; W32(esp, v); }
/* 901400: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 901405: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x90140bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 90140b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90140e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901412: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901417u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_901417: guest_badaddr(0x901417); return;
}

void f_901490(void) {
  LOAD_REGS();
L_901490: /* 901490: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 901492: push 0x9d9de9 */
  { uint32_t v = 0x9d9de9u; esp -= 4; W32(esp, v); }
/* 901497: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 90149d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90149e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9014a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9014a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9014a7: mov esi, ecx */
  esi = ecx;
/* 9014a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 9014ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9014b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9014b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9014b3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9014bb: call 0x6ccd2e */
  esp -= 4; W32(esp, 0x9014c0u); SPILL(); f_6ccd2e(); if (g_unwind) return; RELOAD();
/* 9014c0: mov ecx, esi */
  ecx = esi;
/* 9014c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 9014ca: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x9014d0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 9014d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9014d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9014d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9014dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9014df: ret  */
  esp += 4; SPILL(); return;
}

void f_901500(void) {
  LOAD_REGS();
L_901500: /* 901500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 901501: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 901502: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 901508: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901509: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90150a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 90150e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901510: mov esi, ecx */
  esi = ecx;
/* 901512: jge 0x901528 */
  if ((sf == of)) goto L_901528;
L_901514: /* 901514: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 901519: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 90151e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 901523: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x901525u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901525: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901528: /* 901528: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90152b: jle 0x901541 */
  if ((zf || sf != of)) goto L_901541;
L_90152d: /* 90152d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 901532: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901537: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 90153c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x90153eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90153e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901541: /* 901541: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 901545: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 901548: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 90154b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90154d: jle 0x901563 */
  if ((zf || sf != of)) goto L_901563;
L_90154f: /* 90154f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 901554: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901559: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 90155e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x901560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901560: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901563: /* 901563: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901565: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 901566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901567: mov ecx, esi */
  ecx = esi;
/* 901569: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x90156fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 90156f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901570: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901571: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 901572: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901573: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9015a0(void) {
  LOAD_REGS();
L_9015a0: /* 9015a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9015a2: push 0x9d9e1f */
  { uint32_t v = 0x9d9e1fu; esp -= 4; W32(esp, v); }
/* 9015a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9015ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9015ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9015b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9015b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9015b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9015b8: mov esi, ecx */
  esi = ecx;
/* 9015ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9015bb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9015bf: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9015c2: xor edi, edi */
  edi = 0;
/* 9015c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9015c6: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 9015ce: jle 0x9015f2 */
  if ((zf || sf != of)) goto L_9015f2;
L_9015d0: /* 9015d0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9015d3: mov ebx, dword ptr [eax + edi*4] */
  ebx = R32((uint32_t)(eax + edi*4));
/* 9015d6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9015d8: je 0x9015ea */
  if (zf) goto L_9015ea;
L_9015da: /* 9015da: mov ecx, ebx */
  ecx = ebx;
/* 9015dc: call 0x6c3b20 */
  esp -= 4; W32(esp, 0x9015e1u); SPILL(); f_6c3b20(); if (g_unwind) return; RELOAD();
/* 9015e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9015e2: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9015e7u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9015e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9015ea: /* 9015ea: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9015ed: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9015ee: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9015f0: jl 0x9015d0 */
  if ((sf != of)) goto L_9015d0;
L_9015f2: /* 9015f2: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 9015f5: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* 9015fa: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x9015ffu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 9015ff: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 901602: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 901606: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 901609: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90160b: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 901611: mov dword ptr [esp + 0x18], 2 */
  W32((uint32_t)(esp + 0x18u), 0x2u);
/* 901619: jge 0x90162f */
  if ((sf == of)) goto L_90162f;
L_90161b: /* 90161b: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 901620: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901625: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 90162a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x90162cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90162c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90162f: /* 90162f: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901632: jle 0x901648 */
  if ((zf || sf != of)) goto L_901648;
L_901634: /* 901634: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 901639: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 90163e: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 901643: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x901645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901645: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901648: /* 901648: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 90164a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90164b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90164d: mov ecx, esi */
  ecx = esi;
/* 90164f: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x901655u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 901655: mov ecx, esi */
  ecx = esi;
/* 901657: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 90165f: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x901665u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 901665: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 901669: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90166a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90166b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90166c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 901673: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901676: ret  */
  esp += 4; SPILL(); return;
}

void f_9016c0(void) {
  LOAD_REGS();
L_9016c0: /* 9016c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9016c2: push 0x9d9e56 */
  { uint32_t v = 0x9d9e56u; esp -= 4; W32(esp, v); }
/* 9016c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9016cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9016ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9016d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9016d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9016d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9016d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9016d9: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 9016dd: mov ebx, ecx */
  ebx = ecx;
/* 9016df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9016e0: mov ecx, esi */
  ecx = esi;
/* 9016e2: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x9016e8u); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 9016e8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9016ea: je 0x90177e */
  if (zf) goto L_90177e;
L_9016f0: /* 9016f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9016f2: lea ebp, [ebx + 8] */
  ebp = (uint32_t)(ebx + 0x8u);
/* 9016f5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9016f7: mov ecx, ebp */
  ecx = ebp;
/* 9016f9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x9016ffu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 9016ff: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 901702: xor edi, edi */
  edi = 0;
/* 901704: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901706: jle 0x901794 */
  if ((zf || sf != of)) goto L_901794;
L_90170c: /* 90170c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_901710: /* 901710: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 901715: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 901717: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 901719: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 90171e: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 901720: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x901722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901722: mov esi, eax */
  esi = eax;
/* 901724: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 901728: xor eax, eax */
  eax = 0;
/* 90172a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90172c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 901730: je 0x901754 */
  if (zf) goto L_901754;
L_901732: /* 901732: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 901735: mov dword ptr [esi], 0xffffffff */
  W32((uint32_t)(esi), 0xffffffffu);
/* 90173b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 90173e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901744u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901744: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 901747: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 90174c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901752u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901752: jmp 0x901756 */
  goto L_901756;
L_901754: /* 901754: xor esi, esi */
  esi = 0;
L_901756: /* 901756: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 901759: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 90175d: mov dword ptr [eax + edi*4], esi */
  W32((uint32_t)(eax + edi*4), esi);
/* 901760: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 901763: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901764: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 901767: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 90176f: call 0x6c4999 */
  esp -= 4; W32(esp, 0x901774u); SPILL(); f_6c4999(); if (g_unwind) return; RELOAD();
/* 901774: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 901777: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 901778: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90177a: jl 0x901710 */
  if ((sf != of)) goto L_901710;
L_90177c: /* 90177c: jmp 0x901794 */
  goto L_901794;
L_90177e: /* 90177e: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 901782: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901783: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901784: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x90178au); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 90178a: movzx ecx, byte ptr [esp + 0x2c] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x2cu)));
/* 90178f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901792: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
L_901794: /* 901794: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 901798: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901799: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90179a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90179b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90179c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9017a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9017a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9017f0(void) {
  LOAD_REGS();
L_9017f0: /* 9017f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9017f1: mov ebp, esp */
  ebp = esp;
/* 9017f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9017f5: push 0x9d9e7b */
  { uint32_t v = 0x9d9e7bu; esp -= 4; W32(esp, v); }
/* 9017fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 901800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 901808: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90180b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90180c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90180d: mov esi, ecx */
  esi = ecx;
/* 90180f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901810: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 901813: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 901816: mov dword ptr [esi], 0xa206c0 */
  W32((uint32_t)(esi), 0xa206c0u);
/* 90181c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 901823: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 901827: xor edi, edi */
  edi = 0;
/* 901829: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_901830: /* 901830: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901833: jge 0x90187c */
  if ((sf == of)) goto L_90187c;
L_901835: /* 901835: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 901838: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 90183e: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 901841: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 901843: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 901845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901846: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x901849u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901849: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 90184a: jmp 0x901830 */
  goto L_901830;
L_90187c: /* 90187c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 90187f: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 901886: call 0x6c4480 */
  esp -= 4; W32(esp, 0x90188bu); SPILL(); f_6c4480(); if (g_unwind) return; RELOAD();
/* 90188b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 90188e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90188f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901890: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 901897: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901898: mov esp, ebp */
  esp = ebp;
/* 90189a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90189b: ret  */
  esp += 4; SPILL(); return;
}

void f_90184c(void) {
  LOAD_REGS();
L_90184c: /* 90184c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 90184f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 901854: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 901857: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901858: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 90185b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901860u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_901860(); return;
}

void f_901860(void) {
  LOAD_REGS();
L_901860: /* 901860: push 0xa20684 */
  { uint32_t v = 0xa20684u; esp -= 4; W32(esp, v); }
/* 901865: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 90186a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x901870u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 901870: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901875: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901877: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90187cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 90187c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 90187f: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 901886: call 0x6c4480 */
  esp -= 4; W32(esp, 0x90188bu); SPILL(); f_6c4480(); if (g_unwind) return; RELOAD();
/* 90188b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 90188e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90188f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901890: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 901897: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901898: mov esp, ebp */
  esp = ebp;
/* 90189a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90189b: ret  */
  esp += 4; SPILL(); return;
}

void f_9018d0(void) {
  LOAD_REGS();
L_9018d0: /* 9018d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9018d1: mov ebp, esp */
  ebp = esp;
/* 9018d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9018d5: push 0x9d9e90 */
  { uint32_t v = 0x9d9e90u; esp -= 4; W32(esp, v); }
/* 9018da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9018e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9018e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9018e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9018eb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9018ee: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9018f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9018f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9018f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9018f4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9018f7: push 0x6c9efd */
  { uint32_t v = 0x6c9efdu; esp -= 4; W32(esp, v); }
/* 9018fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9018fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 901900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901901: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901902: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 901909: call 0x6c66c2 */
  esp -= 4; W32(esp, 0x90190eu); SPILL(); f_6c66c2(); if (g_unwind) return; RELOAD();
/* 90190e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 901911: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901913: xor eax, eax */
  eax = 0;
/* 901915: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90191c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90191d: mov esp, ebp */
  esp = ebp;
/* 90191f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 901920: ret 8 */
  esp += 12; SPILL(); return;
}

void f_901923(void) {
  LOAD_REGS();
L_901923: /* 901923: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 901926: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 90192b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 90192e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90192f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 901932: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901937u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_901937(); return;
}

void f_901937(void) {
  LOAD_REGS();
L_901937: /* 901937: push 0xa206cc */
  { uint32_t v = 0xa206ccu; esp -= 4; W32(esp, v); }
/* 90193c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 901941: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x901947u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 901947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90194a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90194c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90194e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901953u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_901953: guest_badaddr(0x901953); return;
}

void f_901990(void) {
  LOAD_REGS();
L_901990: /* 901990: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 901992: jmp dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); SPILL(); call_ind(t); return; }
}

void f_9019a0(void) {
  LOAD_REGS();
L_9019a0: /* 9019a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9019a1: mov esi, ecx */
  esi = ecx;
/* 9019a3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 9019a6: mov dword ptr [esi], 0xa206c0 */
  W32((uint32_t)(esi), 0xa206c0u);
/* 9019ac: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x9019b2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 9019b2: mov eax, esi */
  eax = esi;
/* 9019b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9019b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9019d0(void) {
  LOAD_REGS();
L_9019d0: /* 9019d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9019d1: mov ebp, esp */
  ebp = esp;
/* 9019d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9019d5: push 0x9d9efa */
  { uint32_t v = 0x9d9efau; esp -= 4; W32(esp, v); }
/* 9019da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9019e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9019e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9019e8: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9019ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9019ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9019f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9019f1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9019f4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9019f6: xor ebx, ebx */
  ebx = 0;
/* 9019f8: mov ecx, edi */
  ecx = edi;
/* 9019fa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9019fd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 901a00: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x901a03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901a03: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901a05: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 901a0a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901a0d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 901a10: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 901a13: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x901a19u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
L_901a19: /* 901a19: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901a1f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 901a23: jge 0x901a78 */
  if ((sf == of)) goto L_901a78;
L_901a25: /* 901a25: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 901a2b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 901a2d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 901a2f: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 901a34: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 901a36: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x901a38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901a38: mov esi, eax */
  esi = eax;
/* 901a3a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 901a3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901a3f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 901a43: je 0x901a6d */
  if (zf) goto L_901a6d;
L_901a45: /* 901a45: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 901a48: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 901a4a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 901a51: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901a57u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901a57: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 901a5a: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 901a5e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901a64u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901a64: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 901a67: mov dword ptr [eax + ebx*4], esi */
  W32((uint32_t)(eax + ebx*4), esi);
/* 901a6a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 901a6b: jmp 0x901a19 */
  goto L_901a19;
L_901a6d: /* 901a6d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 901a70: xor esi, esi */
  esi = 0;
/* 901a72: mov dword ptr [eax + ebx*4], esi */
  W32((uint32_t)(eax + ebx*4), esi);
/* 901a75: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 901a76: jmp 0x901a19 */
  goto L_901a19;
L_901a78: /* 901a78: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901a7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901a7c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 901a7f: call 0x6c8e0e */
  esp -= 4; W32(esp, 0x901a84u); SPILL(); f_6c8e0e(); if (g_unwind) return; RELOAD();
/* 901a84: mov esi, dword ptr [0xcfa1b8] */
  esi = R32((uint32_t)(0xcfa1b8u));
/* 901a8a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 901a8e: mov edi, edi */
  edi = edi;
L_901a90: /* 901a90: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 901a92: mov ecx, edi */
  ecx = edi;
/* 901a94: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x901a97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901a97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901a99: jne 0x901abb */
  if (!zf) goto L_901abb;
L_901a9b: /* 901a9b: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 901a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901a9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901aa0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x901aa2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901aa2: movzx ecx, byte ptr [ebp - 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 901aa6: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 901aa9: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 901aac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 901aaf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901ab2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 901ab3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 901ab6: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 901ab9: jmp 0x901a90 */
  goto L_901a90;
L_901abb: /* 901abb: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 901abe: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 901ac0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901ac1: mov ecx, edi */
  ecx = edi;
/* 901ac3: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x901ac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901ac6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 901ac9: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 901acc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901ace: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x901ad4u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 901ad4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901ad7: /* 901ad7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901ada: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901add: jle 0x901b2c */
  if ((zf || sf != of)) goto L_901b2c;
L_901adf: /* 901adf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901ae1: jg 0x901afe */
  if ((!zf && sf == of)) goto L_901afe;
L_901ae3: /* 901ae3: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 901ae8: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901aed: push 0xac3ba0 */
  { uint32_t v = 0xac3ba0u; esp -= 4; W32(esp, v); }
/* 901af2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x901af8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 901af8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901afb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901afe: /* 901afe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 901b01: mov edx, dword ptr [ecx + eax*4 - 4] */
  edx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* 901b05: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 901b08: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901b0a: jne 0x901b2c */
  if (!zf) goto L_901b2c;
L_901b0c: /* 901b0c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901b0f: call 0x6c46ec */
  esp -= 4; W32(esp, 0x901b14u); SPILL(); f_6c46ec(); if (g_unwind) return; RELOAD();
/* 901b14: mov esi, eax */
  esi = eax;
/* 901b16: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901b18: je 0x901ad7 */
  if (zf) goto L_901ad7;
L_901b1a: /* 901b1a: mov ecx, esi */
  ecx = esi;
/* 901b1c: call 0x6c3b20 */
  esp -= 4; W32(esp, 0x901b21u); SPILL(); f_6c3b20(); if (g_unwind) return; RELOAD();
/* 901b21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901b22: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x901b27u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 901b27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901b2a: jmp 0x901ad7 */
  goto L_901ad7;
L_901b2c: /* 901b2c: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 901b2f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_901b32: /* 901b32: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901b35: jle 0x901c21 */
  if ((zf || sf != of)) goto L_901c21;
L_901b3b: /* 901b3b: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 901b41: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 901b43: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 901b45: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 901b4a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 901b4c: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x901b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901b4e: mov esi, eax */
  esi = eax;
/* 901b50: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 901b53: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901b55: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 901b59: je 0x901b80 */
  if (zf) goto L_901b80;
L_901b5b: /* 901b5b: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 901b5e: mov dword ptr [esi], 0xffffffff */
  W32((uint32_t)(esi), 0xffffffffu);
/* 901b64: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 901b6b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901b71u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901b71: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 901b74: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 901b78: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x901b7eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 901b7e: jmp 0x901b82 */
  goto L_901b82;
L_901b80: /* 901b80: xor esi, esi */
  esi = 0;
L_901b82: /* 901b82: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901b84: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 901b87: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 901b89: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 901b8c: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 901b90: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x901b96u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 901b96: xor ebx, ebx */
  ebx = 0;
L_901b98: /* 901b98: cmp ebx, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901b9b: jge 0x901be7 */
  if ((sf == of)) goto L_901be7;
L_901b9d: /* 901b9d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 901ba0: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 901ba3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 901ba6: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 901bad: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901bb0: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 901bb2: call 0x6c46ec */
  esp -= 4; W32(esp, 0x901bb7u); SPILL(); f_6c46ec(); if (g_unwind) return; RELOAD();
/* 901bb7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 901bb9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 901bbc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 901bbf: mov ecx, dword ptr [edi + ecx] */
  ecx = R32((uint32_t)(edi + ecx));
/* 901bc2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 901bc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 901bc6: call 0x6c3c15 */
  esp -= 4; W32(esp, 0x901bcbu); SPILL(); f_6c3c15(); if (g_unwind) return; RELOAD();
/* 901bcb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 901bce: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 901bd1: mov ecx, dword ptr [edi + edx] */
  ecx = R32((uint32_t)(edi + edx));
/* 901bd4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 901bd7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 901bda: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 901bdd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 901bdf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 901be2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 901be3: mov esi, eax */
  esi = eax;
/* 901be5: jmp 0x901b98 */
  goto L_901b98;
L_901be7: /* 901be7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901bea: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 901bed: xor ebx, ebx */
  ebx = 0;
/* 901bef: nop  */
L_901bf0: /* 901bf0: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901bf2: jge 0x901c02 */
  if ((sf == of)) goto L_901c02;
L_901bf4: /* 901bf4: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 901bf7: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 901bfa: cmp edx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901bfd: jl 0x901c02 */
  if ((sf != of)) goto L_901c02;
L_901bff: /* 901bff: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 901c00: jmp 0x901bf0 */
  goto L_901bf0;
L_901c02: /* 901c02: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901c04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 901c06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 901c07: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901c0a: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x901c10u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 901c10: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 901c13: mov dword ptr [eax + ebx*4], esi */
  W32((uint32_t)(eax + ebx*4), esi);
/* 901c16: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 901c19: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901c1c: jmp 0x901b32 */
  goto L_901b32;
L_901c21: /* 901c21: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901c24: call 0x6c46ec */
  esp -= 4; W32(esp, 0x901c29u); SPILL(); f_6c46ec(); if (g_unwind) return; RELOAD();
/* 901c29: mov ebx, dword ptr [0xcfa1b8] */
  ebx = R32((uint32_t)(0xcfa1b8u));
/* 901c2f: mov esi, eax */
  esi = eax;
/* 901c31: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_901c34: /* 901c34: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 901c36: mov ecx, edi */
  ecx = edi;
/* 901c38: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x901c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901c3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901c3d: jne 0x901c60 */
  if (!zf) goto L_901c60;
L_901c3f: /* 901c3f: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 901c42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901c43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901c44: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x901c46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901c46: movzx ecx, byte ptr [ebp - 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 901c4a: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 901c4d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 901c50: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 901c53: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 901c56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901c59: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 901c5b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 901c5e: jmp 0x901c34 */
  goto L_901c34;
L_901c60: /* 901c60: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 901c63: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 901c65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901c66: mov ecx, edi */
  ecx = edi;
/* 901c68: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x901c6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901c6b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 901c6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901c6f: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901c75: call dword ptr [0xcfac78] */
  esp -= 4; W32(esp, 0x901c7bu); SPILL(); f_4e149c(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@H@Z */ RELOAD();
/* 901c7b: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 901c81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901c82: mov ecx, esi */
  ecx = esi;
/* 901c84: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 901c88: call 0x6c1b68 */
  esp -= 4; W32(esp, 0x901c8du); SPILL(); f_6c1b68(); if (g_unwind) return; RELOAD();
/* 901c8d: mov edi, dword ptr [0xcfab74] */
  edi = R32((uint32_t)(0xcfab74u));
L_901c93: /* 901c93: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 901c96: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 901c98: mov ecx, esi */
  ecx = esi;
/* 901c9a: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x901c9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901c9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901c9f: jne 0x901cd9 */
  if (!zf) goto L_901cd9;
L_901ca1: /* 901ca1: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 901ca4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901ca5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901ca6: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x901cacu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 901cac: movzx edx, byte ptr [ebp - 0x11] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 901cb0: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 901cb3: mov ebx, dword ptr [eax + edx*4] */
  ebx = R32((uint32_t)(eax + edx*4));
/* 901cb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901cb9: xor esi, esi */
  esi = 0;
/* 901cbb: jmp 0x901cc0 */
  goto L_901cc0;
L_901cc0: /* 901cc0: cmp esi, dword ptr [ebx + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901cc3: jge 0x901c93 */
  if ((sf == of)) goto L_901c93;
L_901cc5: /* 901cc5: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 901cc8: xor edx, edx */
  edx = 0;
/* 901cca: mov dl, byte ptr [ecx + esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi))) & 0xffu);
/* 901ccd: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901cd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901cd4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901cd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901cd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 901cd7: jmp 0x901cc0 */
  goto L_901cc0;
L_901cd9: /* 901cd9: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901cdf: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x901ce5u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 901ce5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901ce7: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 901ced: je 0x901d03 */
  if (zf) goto L_901d03;
L_901cef: /* 901cef: push 0x125 */
  { uint32_t v = 0x125u; esp -= 4; W32(esp, v); }
/* 901cf4: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 901cf9: push 0xaf1748 */
  { uint32_t v = 0xaf1748u; esp -= 4; W32(esp, v); }
/* 901cfe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901d03: /* 901d03: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d09: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x901d0fu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 901d0f: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 901d12: je 0x901d28 */
  if (zf) goto L_901d28;
L_901d14: /* 901d14: push 0x126 */
  { uint32_t v = 0x126u; esp -= 4; W32(esp, v); }
/* 901d19: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 901d1e: push 0xaf1724 */
  { uint32_t v = 0xaf1724u; esp -= 4; W32(esp, v); }
/* 901d23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901d25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901d28: /* 901d28: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d2e: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x901d34u); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 901d34: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d3a: mov esi, eax */
  esi = eax;
/* 901d3c: call dword ptr [0xcfac8c] */
  esp -= 4; W32(esp, 0x901d42u); SPILL(); f_4e21ee(); if (g_unwind) return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */ RELOAD();
/* 901d42: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 901d45: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 901d47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901d48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901d49: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x901d4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d4c: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 901d4f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901d51: je 0x901d63 */
  if (zf) goto L_901d63;
L_901d53: /* 901d53: mov ecx, esi */
  ecx = esi;
/* 901d55: call 0x6c3b20 */
  esp -= 4; W32(esp, 0x901d5au); SPILL(); f_6c3b20(); if (g_unwind) return; RELOAD();
/* 901d5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901d5b: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x901d60u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 901d60: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901d63: /* 901d63: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d69: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 901d6d: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x901d73u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 901d73: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 901d76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901d78: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 901d7c: mov esi, eax */
  esi = eax;
/* 901d7e: jge 0x901daf */
  if ((sf == of)) goto L_901daf;
L_901d80: /* 901d80: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 901d85: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901d8a: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 901d8f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901d91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d91: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 901d94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901d97: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901d99: jle 0x901daf */
  if ((zf || sf != of)) goto L_901daf;
L_901d9b: /* 901d9b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 901da0: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901da5: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 901daa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901dacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901dac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901daf: /* 901daf: xor eax, eax */
  eax = 0;
L_901db1: /* 901db1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901db3: jge 0x901db8 */
  if ((sf == of)) goto L_901db8;
L_901db5: /* 901db5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 901db6: jmp 0x901db1 */
  goto L_901db1;
L_901db8: /* 901db8: mov ebx, dword ptr [0xcfa390] */
  ebx = R32((uint32_t)(0xcfa390u));
/* 901dbe: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901dc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901dc3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 901dc6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x901dc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901dc8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 901dcb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 901dcf: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x901dd5u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 901dd5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901dd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901dda: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 901dde: mov esi, eax */
  esi = eax;
/* 901de0: jge 0x901e17 */
  if ((sf == of)) goto L_901e17;
L_901de2: /* 901de2: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 901de8: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 901ded: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901df2: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 901df7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901df9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901df9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901dfc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901dff: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901e01: jle 0x901e17 */
  if ((zf || sf != of)) goto L_901e17;
L_901e03: /* 901e03: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 901e08: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901e0d: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 901e12: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901e14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901e14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901e17: /* 901e17: xor eax, eax */
  eax = 0;
/* 901e19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_901e20: /* 901e20: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901e22: jge 0x901e27 */
  if ((sf == of)) goto L_901e27;
L_901e24: /* 901e24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 901e25: jmp 0x901e20 */
  goto L_901e20;
L_901e27: /* 901e27: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901e29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901e2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901e2c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901e2f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x901e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901e31: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901e34: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 901e38: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x901e3eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 901e3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 901e41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901e42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901e43: xor eax, eax */
  eax = 0;
/* 901e45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 901e4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901e4d: mov esp, ebp */
  esp = ebp;
/* 901e4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 901e50: ret 8 */
  esp += 12; SPILL(); return;
}

void f_901cbd(void) {
  LOAD_REGS();
  goto L_901cbd;
L_901c93: /* 901c93: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 901c96: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 901c98: mov ecx, esi */
  ecx = esi;
/* 901c9a: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x901c9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901c9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901c9f: jne 0x901cd9 */
  if (!zf) goto L_901cd9;
L_901ca1: /* 901ca1: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 901ca4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901ca5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901ca6: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x901cacu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 901cac: movzx edx, byte ptr [ebp - 0x11] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 901cb0: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 901cb3: mov ebx, dword ptr [eax + edx*4] */
  ebx = R32((uint32_t)(eax + edx*4));
/* 901cb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901cb9: xor esi, esi */
  esi = 0;
/* 901cbb: jmp 0x901cc0 */
  goto L_901cc0;
L_901cbd: /* 901cbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_901cc0: /* 901cc0: cmp esi, dword ptr [ebx + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901cc3: jge 0x901c93 */
  if ((sf == of)) goto L_901c93;
L_901cc5: /* 901cc5: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 901cc8: xor edx, edx */
  edx = 0;
/* 901cca: mov dl, byte ptr [ecx + esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi))) & 0xffu);
/* 901ccd: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901cd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 901cd4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901cd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901cd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 901cd7: jmp 0x901cc0 */
  goto L_901cc0;
L_901cd9: /* 901cd9: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901cdf: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x901ce5u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 901ce5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901ce7: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 901ced: je 0x901d03 */
  if (zf) goto L_901d03;
L_901cef: /* 901cef: push 0x125 */
  { uint32_t v = 0x125u; esp -= 4; W32(esp, v); }
/* 901cf4: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 901cf9: push 0xaf1748 */
  { uint32_t v = 0xaf1748u; esp -= 4; W32(esp, v); }
/* 901cfe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901d03: /* 901d03: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d09: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x901d0fu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 901d0f: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 901d12: je 0x901d28 */
  if (zf) goto L_901d28;
L_901d14: /* 901d14: push 0x126 */
  { uint32_t v = 0x126u; esp -= 4; W32(esp, v); }
/* 901d19: push 0xaf168c */
  { uint32_t v = 0xaf168cu; esp -= 4; W32(esp, v); }
/* 901d1e: push 0xaf1724 */
  { uint32_t v = 0xaf1724u; esp -= 4; W32(esp, v); }
/* 901d23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901d25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901d28: /* 901d28: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d2e: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x901d34u); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 901d34: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d3a: mov esi, eax */
  esi = eax;
/* 901d3c: call dword ptr [0xcfac8c] */
  esp -= 4; W32(esp, 0x901d42u); SPILL(); f_4e21ee(); if (g_unwind) return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */ RELOAD();
/* 901d42: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 901d45: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 901d47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901d48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 901d49: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x901d4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d4c: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 901d4f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 901d51: je 0x901d63 */
  if (zf) goto L_901d63;
L_901d53: /* 901d53: mov ecx, esi */
  ecx = esi;
/* 901d55: call 0x6c3b20 */
  esp -= 4; W32(esp, 0x901d5au); SPILL(); f_6c3b20(); if (g_unwind) return; RELOAD();
/* 901d5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901d5b: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x901d60u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 901d60: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901d63: /* 901d63: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 901d69: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 901d6d: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x901d73u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 901d73: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 901d76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901d78: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 901d7c: mov esi, eax */
  esi = eax;
/* 901d7e: jge 0x901daf */
  if ((sf == of)) goto L_901daf;
L_901d80: /* 901d80: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 901d85: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901d8a: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 901d8f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901d91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901d91: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 901d94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901d97: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901d99: jle 0x901daf */
  if ((zf || sf != of)) goto L_901daf;
L_901d9b: /* 901d9b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 901da0: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901da5: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 901daa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901dacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901dac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901daf: /* 901daf: xor eax, eax */
  eax = 0;
L_901db1: /* 901db1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901db3: jge 0x901db8 */
  if ((sf == of)) goto L_901db8;
L_901db5: /* 901db5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 901db6: jmp 0x901db1 */
  goto L_901db1;
L_901db8: /* 901db8: mov ebx, dword ptr [0xcfa390] */
  ebx = R32((uint32_t)(0xcfa390u));
/* 901dbe: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901dc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901dc3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 901dc6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x901dc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901dc8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 901dcb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 901dcf: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x901dd5u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 901dd5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901dd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901dda: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 901dde: mov esi, eax */
  esi = eax;
/* 901de0: jge 0x901e17 */
  if ((sf == of)) goto L_901e17;
L_901de2: /* 901de2: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 901de8: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 901ded: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901df2: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 901df7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901df9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901df9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 901dfc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901dff: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901e01: jle 0x901e17 */
  if ((zf || sf != of)) goto L_901e17;
L_901e03: /* 901e03: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 901e08: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 901e0d: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 901e12: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x901e14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901e14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_901e17: /* 901e17: xor eax, eax */
  eax = 0;
/* 901e19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_901e20: /* 901e20: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901e22: jge 0x901e27 */
  if ((sf == of)) goto L_901e27;
L_901e24: /* 901e24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 901e25: jmp 0x901e20 */
  goto L_901e20;
L_901e27: /* 901e27: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 901e29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901e2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901e2c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901e2f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x901e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 901e31: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 901e34: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 901e38: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x901e3eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 901e3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 901e41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901e42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901e43: xor eax, eax */
  eax = 0;
/* 901e45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 901e4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901e4d: mov esp, ebp */
  esp = ebp;
/* 901e4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 901e50: ret 8 */
  esp += 12; SPILL(); return;
}

void f_901e53(void) {
  LOAD_REGS();
L_901e53: /* 901e53: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 901e56: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 901e5b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 901e5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 901e5f: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 901e62: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901e67u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_901e67(); return;
}

void f_901e67(void) {
  LOAD_REGS();
L_901e67: /* 901e67: push 0xa206fc */
  { uint32_t v = 0xa206fcu; esp -= 4; W32(esp, v); }
/* 901e6c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 901e71: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x901e77u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 901e77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 901e7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901e7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901e7e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x901e83u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_901e83: guest_badaddr(0x901e83); return;
}

void f_901fc0(void) {
  LOAD_REGS();
L_901fc0: /* 901fc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 901fc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 901fc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 901fc3: mov esi, ecx */
  esi = ecx;
/* 901fc5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 901fc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 901fc9: lea edi, [esi + 0x14] */
  edi = (uint32_t)(esi + 0x14u);
/* 901fcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 901fce: mov ecx, edi */
  ecx = edi;
/* 901fd0: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x901fd6u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 901fd6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 901fd8: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 901fdc: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 901fde: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 901fe1: xor edi, edi */
  edi = 0;
/* 901fe3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 901fe5: jle 0x901ffb */
  if ((zf || sf != of)) goto L_901ffb;
L_901fe7: /* 901fe7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 901fea: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 901fed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 901fee: call 0x6c3c15 */
  esp -= 4; W32(esp, 0x901ff3u); SPILL(); f_6c3c15(); if (g_unwind) return; RELOAD();
/* 901ff3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 901ff6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 901ff7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 901ff9: jl 0x901fe7 */
  if ((sf != of)) goto L_901fe7;
L_901ffb: /* 901ffb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 901ffc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 901ffd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 901ffe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_902030(void) {
  LOAD_REGS();
L_902030: /* 902030: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 902031: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 902035: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 902036: mov esi, ecx */
  esi = ecx;
/* 902038: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 902039: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 90203c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90203e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 902041: mov ecx, ebx */
  ecx = ebx;
/* 902043: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902044: call dword ptr [0xcfab74] */
  esp -= 4; W32(esp, 0x90204au); SPILL(); f_4e24eb(); if (g_unwind) return; /* Core!?WriteBit@FBitWriter@@QAEXE@Z */ RELOAD();
/* 90204a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 90204d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90204f: je 0x902071 */
  if (zf) goto L_902071;
L_902051: /* 902051: xor edi, edi */
  edi = 0;
/* 902053: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 902055: jle 0x902086 */
  if ((zf || sf != of)) goto L_902086;
L_902057: /* 902057: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 90205a: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 90205d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90205e: call 0x6c1b68 */
  esp -= 4; W32(esp, 0x902063u); SPILL(); f_6c1b68(); if (g_unwind) return; RELOAD();
/* 902063: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 902066: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 902067: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 902069: jl 0x902057 */
  if ((sf != of)) goto L_902057;
L_90206b: /* 90206b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90206c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90206d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90206e: ret 4 */
  esp += 8; SPILL(); return;
L_902071: /* 902071: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 902073: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 902077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902078: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 902079: mov byte ptr [esp + 0x18], dl */
  W8((uint32_t)(esp + 0x18u), (edx & 0xffu));
/* 90207d: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x902083u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 902083: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_902086: /* 902086: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 902087: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 902088: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 902089: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9020b0(void) {
  LOAD_REGS();
L_9020b0: /* 9020b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9020b2: push 0x9d9f29 */
  { uint32_t v = 0x9d9f29u; esp -= 4; W32(esp, v); }
/* 9020b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9020bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9020be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9020c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9020c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9020c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9020c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9020c9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9020cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9020d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9020d2: mov esi, ecx */
  esi = ecx;
/* 9020d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9020d5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9020d9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x9020dfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 9020df: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 9020e6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9020e9: xor ebx, ebx */
  ebx = 0;
/* 9020eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9020ed: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9020f5: jle 0x90211b */
  if ((zf || sf != of)) goto L_90211b;
L_9020f7: /* 9020f7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9020f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9020fb: mov ecx, esi */
  ecx = esi;
/* 9020fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x902103u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 902103: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 902105: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 902108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90210a: je 0x902113 */
  if (zf) goto L_902113;
L_90210c: /* 90210c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 90210e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 902111: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_902113: /* 902113: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 902116: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 902117: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 902119: jl 0x9020f7 */
  if ((sf != of)) goto L_9020f7;
L_90211b: /* 90211b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 90211f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 902120: mov eax, esi */
  eax = esi;
/* 902122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 902123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 902124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90212b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90212e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_902170(void) {
  LOAD_REGS();
L_902170: /* 902170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 902171: mov esi, ecx */
  esi = ecx;
/* 902173: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 902176: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 902178: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 902179: jg 0x902193 */
  if ((!zf && sf == of)) goto L_902193;
L_90217b: /* 90217b: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* 902180: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 902185: push 0xac3d0c */
  { uint32_t v = 0xac3d0cu; esp -= 4; W32(esp, v); }
/* 90218a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x902190u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 902190: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_902193: /* 902193: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 902196: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 902198: mov edi, dword ptr [ecx + eax*4 - 4] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* 90219c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90219e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 90219f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9021a0: mov ecx, esi */
  ecx = esi;
/* 9021a2: call 0x6ccd2e */
  esp -= 4; W32(esp, 0x9021a7u); SPILL(); f_6ccd2e(); if (g_unwind) return; RELOAD();
/* 9021a7: mov eax, edi */
  eax = edi;
/* 9021a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9021aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9021ab: ret  */
  esp += 4; SPILL(); return;
}

void f_9021c0(void) {
  LOAD_REGS();
L_9021c0: /* 9021c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9021c1: mov ebp, esp */
  ebp = esp;
/* 9021c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9021c5: push 0x9d9f62 */
  { uint32_t v = 0x9d9f62u; esp -= 4; W32(esp, v); }
/* 9021ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9021d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9021d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9021d8: sub esp, 0x65c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x65cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9021de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9021df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9021e0: mov esi, ecx */
  esi = ecx;
/* 9021e2: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 9021e5: xor ebx, ebx */
  ebx = 0;
/* 9021e7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9021e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9021ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9021ed: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 9021f0: je 0x9021fb */
  if (zf) goto L_9021fb;
L_9021f2: /* 9021f2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9021f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9021f6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x9021f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9021f8: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
L_9021fb: /* 9021fb: cmp dword ptr [esi + 0x44c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 902201: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 902204: je 0x9022aa */
  if (zf) goto L_9022aa;
L_90220a: /* 90220a: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 90220d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x902213u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 902213: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 902219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90221a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 90221c: push 0xaf138c */
  { uint32_t v = 0xaf138cu; esp -= 4; W32(esp, v); }
/* 902221: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902222: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x902228u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 902228: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 90222e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 902230: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 902232: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902235: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 902236: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 902237: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 90223a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90223b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x90223eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90223e: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 902241: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 902244: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x90224au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 90224a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90224b: lea edx, [ebp - 0x268] */
  edx = (uint32_t)(ebp + 0xfffffd98u);
/* 902251: push 0xaf13c0 */
  { uint32_t v = 0xaf13c0u; esp -= 4; W32(esp, v); }
/* 902256: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 902257: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x90225du); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 90225d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 902260: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 902263: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 902266: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 902268: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90226b: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 902270: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 902276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902277: push 0xaf13dc */
  { uint32_t v = 0xaf13dcu; esp -= 4; W32(esp, v); }
/* 90227c: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x90227fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90227f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 902282: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 902285: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 902288: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90228a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90228c: push 0xcf08e4 */
  { uint32_t v = 0xcf08e4u; esp -= 4; W32(esp, v); }
L_902291: /* 902291: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 902294: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 902295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902296: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x902299u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902299: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 90229c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9022a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9022a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9022a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9022a6: mov esp, ebp */
  esp = ebp;
/* 9022a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9022a9: ret  */
  esp += 4; SPILL(); return;
L_9022aa: /* 9022aa: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9022ad: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x9022b3u); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 9022b3: mov edi, eax */
  edi = eax;
/* 9022b5: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 9022ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9022bc: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9022bf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x9022c5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 9022c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9022c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9022c7: lea ecx, [ebp - 0x468] */
  ecx = (uint32_t)(ebp + 0xfffffb98u);
/* 9022cd: push 0xaf13ec */
  { uint32_t v = 0xaf13ecu; esp -= 4; W32(esp, v); }
/* 9022d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9022d3: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x9022d9u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 9022d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9022dc: cmp word ptr [esi + 0x248], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x248u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9022e3: jne 0x90255a */
  if (!zf) goto L_90255a;
L_9022e9: /* 9022e9: cmp dword ptr [esi + 0x448], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x448u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9022ef: jne 0x902343 */
  if (!zf) goto L_902343;
L_9022f1: /* 9022f1: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 9022f4: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 9022f7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x9022fdu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 9022fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9022fe: push 0xaf1400 */
  { uint32_t v = 0xaf1400u; esp -= 4; W32(esp, v); }
/* 902303: push 0xaf1410 */
  { uint32_t v = 0xaf1410u; esp -= 4; W32(esp, v); }
/* 902308: mov edi, eax */
  edi = eax;
/* 90230a: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x902310u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 902310: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902313: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 902314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902315: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 902318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902319: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x90231fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 90231f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902322: mov ecx, eax */
  ecx = eax;
/* 902324: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 902328: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x90232eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 90232e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 902330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902331: mov ecx, esi */
  ecx = esi;
/* 902333: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x902336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902336: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 902339: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90233d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x902343u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_902343: /* 902343: cmp word ptr [esi + 0x248], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x248u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 90234a: jne 0x90255a */
  if (!zf) goto L_90255a;
L_902350: /* 902350: cmp dword ptr [esi + 0x450], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x450u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 902356: je 0x90255a */
  if (zf) goto L_90255a;
L_90235c: /* 90235c: lea edi, [esi + 0x48] */
  edi = (uint32_t)(esi + 0x48u);
/* 90235f: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 902365: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 902366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902367: call dword ptr [0xcfa900] */
  esp -= 4; W32(esp, 0x90236du); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* 90236d: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 902373: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 902375: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902378: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90237b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x902381u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 902381: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 902382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902383: call dword ptr [0xcfacf8] */
  esp -= 4; W32(esp, 0x902389u); SPILL(); f_4e4264(); if (g_unwind) return; /* Core!?appCreateTempFilename@@YAXPBGPAG@Z */ RELOAD();
/* 902389: mov edx, dword ptr [0xcfa3b0] */
  edx = R32((uint32_t)(0xcfa3b0u));
/* 90238f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 902391: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 902397: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 902399: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 90239b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90239e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90239f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9023a1: lea edx, [ebp - 0x268] */
  edx = (uint32_t)(ebp + 0xfffffd98u);
/* 9023a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9023a8: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x9023abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9023ab: mov ebx, eax */
  ebx = eax;
/* 9023ad: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 9023b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9023b4: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 9023b9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9023bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9023bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9023be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9023c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9023c1: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x9023c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9023c4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9023c6: mov edi, eax */
  edi = eax;
/* 9023c8: je 0x90250e */
  if (zf) goto L_90250e;
L_9023ce: /* 9023ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9023d0: je 0x90250e */
  if (zf) goto L_90250e;
L_9023d6: /* 9023d6: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 9023d9: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9023dfu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9023df: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9023e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9023e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9023e4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 9023e8: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x9023eeu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 9023ee: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9023f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9023f4: cmp eax, 0x162e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x162eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9023f9: je 0x90242a */
  if (zf) goto L_90242a;
L_9023fb: /* 9023fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9023fd: push 0xaf1448 */
  { uint32_t v = 0xaf1448u; esp -= 4; W32(esp, v); }
/* 902402: push 0xaf1458 */
  { uint32_t v = 0xaf1458u; esp -= 4; W32(esp, v); }
/* 902407: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x90240du); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 90240d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90240f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902413: mov ecx, esi */
  ecx = esi;
/* 902415: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x902418u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902418: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 90241b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90241f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x902425u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 902425: jmp 0x90252b */
  goto L_90252b;
L_90242a: /* 90242a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 90242d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90242e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90242f: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x902435u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 902435: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902438: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 90243b: call 0x6c3d28 */
  esp -= 4; W32(esp, 0x902440u); SPILL(); f_6c3d28(); if (g_unwind) return; RELOAD();
/* 902440: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902442: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 902446: call 0x6c242d */
  esp -= 4; W32(esp, 0x90244bu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90244b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90244e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902450: je 0x90245a */
  if (zf) goto L_90245a;
L_902452: /* 902452: mov dword ptr [eax], 0xa20444 */
  W32((uint32_t)(eax), 0xa20444u);
/* 902458: jmp 0x90245c */
  goto L_90245c;
L_90245a: /* 90245a: xor eax, eax */
  eax = 0;
L_90245c: /* 90245c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90245d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 902460: call 0x6ccc70 */
  esp -= 4; W32(esp, 0x902465u); SPILL(); f_6ccc70(); if (g_unwind) return; RELOAD();
/* 902465: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902467: call 0x6c242d */
  esp -= 4; W32(esp, 0x90246cu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90246c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90246f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902471: je 0x90247b */
  if (zf) goto L_90247b;
L_902473: /* 902473: mov dword ptr [eax], 0xa204a8 */
  W32((uint32_t)(eax), 0xa204a8u);
/* 902479: jmp 0x90247d */
  goto L_90247d;
L_90247b: /* 90247b: xor eax, eax */
  eax = 0;
L_90247d: /* 90247d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90247e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 902481: call 0x6ccc70 */
  esp -= 4; W32(esp, 0x902486u); SPILL(); f_6ccc70(); if (g_unwind) return; RELOAD();
/* 902486: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902488: call 0x6c242d */
  esp -= 4; W32(esp, 0x90248du); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90248d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902490: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902492: je 0x90249c */
  if (zf) goto L_90249c;
L_902494: /* 902494: mov dword ptr [eax], 0xa204b4 */
  W32((uint32_t)(eax), 0xa204b4u);
/* 90249a: jmp 0x90249e */
  goto L_90249e;
L_90249c: /* 90249c: xor eax, eax */
  eax = 0;
L_90249e: /* 90249e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90249f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9024a2: call 0x6ccc70 */
  esp -= 4; W32(esp, 0x9024a7u); SPILL(); f_6ccc70(); if (g_unwind) return; RELOAD();
/* 9024a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9024a9: call 0x6c242d */
  esp -= 4; W32(esp, 0x9024aeu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9024ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9024b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9024b3: je 0x9024bd */
  if (zf) goto L_9024bd;
L_9024b5: /* 9024b5: mov dword ptr [eax], 0xa20444 */
  W32((uint32_t)(eax), 0xa20444u);
/* 9024bb: jmp 0x9024bf */
  goto L_9024bf;
L_9024bd: /* 9024bd: xor eax, eax */
  eax = 0;
L_9024bf: /* 9024bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9024c0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9024c3: call 0x6ccc70 */
  esp -= 4; W32(esp, 0x9024c8u); SPILL(); f_6ccc70(); if (g_unwind) return; RELOAD();
/* 9024c8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9024ca: call 0x6c242d */
  esp -= 4; W32(esp, 0x9024cfu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9024cf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9024d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9024d4: je 0x9024de */
  if (zf) goto L_9024de;
L_9024d6: /* 9024d6: mov dword ptr [eax], 0xa20518 */
  W32((uint32_t)(eax), 0xa20518u);
/* 9024dc: jmp 0x9024e0 */
  goto L_9024e0;
L_9024de: /* 9024de: xor eax, eax */
  eax = 0;
L_9024e0: /* 9024e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9024e1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9024e4: call 0x6ccc70 */
  esp -= 4; W32(esp, 0x9024e9u); SPILL(); f_6ccc70(); if (g_unwind) return; RELOAD();
/* 9024e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9024ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9024eb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9024ee: call 0x6ca213 */
  esp -= 4; W32(esp, 0x9024f3u); SPILL(); f_6ca213(); if (g_unwind) return; RELOAD();
/* 9024f3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9024f6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 9024fa: call 0x6c6bf9 */
  esp -= 4; W32(esp, 0x9024ffu); SPILL(); f_6c6bf9(); if (g_unwind) return; RELOAD();
/* 9024ff: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 902502: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 902506: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x90250cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 90250c: jmp 0x90252b */
  goto L_90252b;
L_90250e: /* 90250e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902510: push 0xaf1428 */
  { uint32_t v = 0xaf1428u; esp -= 4; W32(esp, v); }
/* 902515: push 0xaf1438 */
  { uint32_t v = 0xaf1438u; esp -= 4; W32(esp, v); }
/* 90251a: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x902520u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 902520: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 902522: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902526: mov ecx, esi */
  ecx = esi;
/* 902528: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x90252bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90252b: /* 90252b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90252d: je 0x90254e */
  if (zf) goto L_90254e;
L_90252f: /* 90252f: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 902534: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 902536: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 902538: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90253a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90253c: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 902542: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902543: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x902546u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902546: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 902548: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90254a: mov ecx, ebx */
  ecx = ebx;
/* 90254c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x90254eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90254e: /* 90254e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902550: je 0x90255a */
  if (zf) goto L_90255a;
L_902552: /* 902552: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 902554: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902556: mov ecx, edi */
  ecx = edi;
/* 902558: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x90255au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90255a: /* 90255a: cmp word ptr [esi + 0x248], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x248u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 902562: lea ebx, [esi + 0x248] */
  ebx = (uint32_t)(esi + 0x248u);
/* 902568: jne 0x9025e9 */
  if (!zf) goto L_9025e9;
L_90256a: /* 90256a: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 902570: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 902572: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 902574: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 902577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902578: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x90257bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90257b: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 90257e: cmp eax, dword ptr [ecx + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 902581: je 0x9025a0 */
  if (zf) goto L_9025a0;
L_902583: /* 902583: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902585: push 0xaf1468 */
  { uint32_t v = 0xaf1468u; esp -= 4; W32(esp, v); }
/* 90258a: push 0xaf1478 */
  { uint32_t v = 0xaf1478u; esp -= 4; W32(esp, v); }
/* 90258f: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x902595u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 902595: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 902597: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90259a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90259b: mov ecx, esi */
  ecx = esi;
/* 90259d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x9025a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9025a0: /* 9025a0: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9025a4: jne 0x9025e9 */
  if (!zf) goto L_9025e9;
L_9025a6: /* 9025a6: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 9025ab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9025ad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9025af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9025b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9025b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9025b5: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 9025b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9025b9: lea eax, [ebp - 0x468] */
  eax = (uint32_t)(ebp + 0xfffffb98u);
/* 9025bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9025c0: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x9025c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9025c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9025c5: jne 0x9025e3 */
  if (!zf) goto L_9025e3;
L_9025c7: /* 9025c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9025c8: push 0xaf1488 */
  { uint32_t v = 0xaf1488u; esp -= 4; W32(esp, v); }
/* 9025cd: push 0xaf1498 */
  { uint32_t v = 0xaf1498u; esp -= 4; W32(esp, v); }
/* 9025d2: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x9025d8u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 9025d8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9025da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9025dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9025de: mov ecx, esi */
  ecx = esi;
/* 9025e0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x9025e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9025e3: /* 9025e3: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9025e7: je 0x902610 */
  if (zf) goto L_902610;
L_9025e9: /* 9025e9: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 9025ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9025f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9025f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9025f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9025f6: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 9025f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9025fa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x9025fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9025fd: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 902600: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 902603: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 902606: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 902608: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90260a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90260b: jmp 0x902291 */
  goto L_902291;
L_902610: /* 902610: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 902613: call 0x6ccf7c */
  esp -= 4; W32(esp, 0x902618u); SPILL(); f_6ccf7c(); if (g_unwind) return; RELOAD();
/* 902618: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 90261d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90261f: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 902622: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 902626: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x90262cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 90262c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90262d: lea ecx, [ebp - 0x268] */
  ecx = (uint32_t)(ebp + 0xfffffd98u);
/* 902633: push 0xaf14a8 */
  { uint32_t v = 0xaf14a8u; esp -= 4; W32(esp, v); }
/* 902638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902639: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x90263fu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 90263f: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 902642: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902645: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x90264bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 90264b: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 90264f: je 0x90265c */
  if (zf) goto L_90265c;
L_902651: /* 902651: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 902654: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x90265au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 90265a: jmp 0x902668 */
  goto L_902668;
L_90265c: /* 90265c: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 90265f: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 902662: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x902668u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
L_902668: /* 902668: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 90266b: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90266e: mov edi, eax */
  edi = eax;
/* 902670: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x902676u); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 902676: lea ecx, [ebp - 0x268] */
  ecx = (uint32_t)(ebp + 0xfffffd98u);
/* 90267c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90267d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90267e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90267f: push 0xaf14c4 */
  { uint32_t v = 0xaf14c4u; esp -= 4; W32(esp, v); }
/* 902684: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 902687: call 0x6c6feb */
  esp -= 4; W32(esp, 0x90268cu); SPILL(); f_6c6feb(); if (g_unwind) return; RELOAD();
/* 90268c: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 90268f: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 902692: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x902698u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 902698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902699: lea eax, [ebp - 0x668] */
  eax = (uint32_t)(ebp + 0xfffff998u);
/* 90269f: push 0xaf14d0 */
  { uint32_t v = 0xaf14d0u; esp -= 4; W32(esp, v); }
/* 9026a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9026a5: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x9026abu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 9026ab: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 9026ae: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 9026b1: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 9026b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9026b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9026b9: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 9026be: lea edx, [ebp - 0x668] */
  edx = (uint32_t)(ebp + 0xfffff998u);
/* 9026c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9026c5: push 0xaf14ec */
  { uint32_t v = 0xaf14ecu; esp -= 4; W32(esp, v); }
/* 9026ca: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x9026cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9026cd: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 9026d0: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 9026d3: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 9026d6: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 9026d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9026db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9026dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9026de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9026df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9026e0: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x9026e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9026e3: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 9026e6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9026ea: call 0x6cb77b */
  esp -= 4; W32(esp, 0x9026efu); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 9026ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9026f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9026f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9026f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9026fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9026fc: mov esp, ebp */
  esp = ebp;
/* 9026fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9026ff: ret  */
  esp += 4; SPILL(); return;
}

void f_902700(void) {
  LOAD_REGS();
L_902700: /* 902700: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 902703: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 902708: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 90270b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90270c: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 90270f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x902714u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_902714(); return;
}

void f_902714(void) {
  LOAD_REGS();
L_902714: /* 902714: push 0xa20730 */
  { uint32_t v = 0xa20730u; esp -= 4; W32(esp, v); }
/* 902719: push 0xaf14fc */
  { uint32_t v = 0xaf14fcu; esp -= 4; W32(esp, v); }
/* 90271e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x902724u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 902724: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902727: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902729: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90272b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x902730u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_902730: guest_badaddr(0x902730); return;
}

void f_9028a0(void) {
  LOAD_REGS();
L_9028a0: /* 9028a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9028a1: mov ebp, esp */
  ebp = esp;
/* 9028a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9028a5: push 0x9d9f80 */
  { uint32_t v = 0x9d9f80u; esp -= 4; W32(esp, v); }
/* 9028aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9028b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9028b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9028b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9028bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9028bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9028bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9028be: mov edi, dword ptr [0xcfa33c] */
  edi = R32((uint32_t)(0xcfa33cu));
/* 9028c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9028c7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9028c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9028ca: mov ebx, ecx */
  ebx = ecx;
/* 9028cc: mov ecx, esp */
  ecx = esp;
/* 9028ce: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 9028d1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9028d3: push 0xaf182c */
  { uint32_t v = 0xaf182cu; esp -= 4; W32(esp, v); }
/* 9028d8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9028df: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9028e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9028e1: mov ecx, ebx */
  ecx = ebx;
/* 9028e3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x9028e9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 9028e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9028ea: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 9028ec: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x9028f2u); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 9028f2: mov esi, eax */
  esi = eax;
/* 9028f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9028f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9028f9: je 0x902917 */
  if (zf) goto L_902917;
L_9028fb: /* 9028fb: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902900: push 0xaf1850 */
  { uint32_t v = 0xaf1850u; esp -= 4; W32(esp, v); }
/* 902905: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 902907: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902909: mov ecx, esi */
  ecx = esi;
/* 90290b: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x902911u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902911: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_902917: /* 902917: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902919: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90291a: mov ecx, esp */
  ecx = esp;
/* 90291c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 90291f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902921: push 0xaf1860 */
  { uint32_t v = 0xaf1860u; esp -= 4; W32(esp, v); }
/* 902926: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902928: mov ecx, ebx */
  ecx = ebx;
/* 90292a: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902930u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902931: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902933: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x902939u); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902939: mov esi, eax */
  esi = eax;
/* 90293b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90293e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902940: je 0x90295e */
  if (zf) goto L_90295e;
L_902942: /* 902942: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902947: push 0xaf188c */
  { uint32_t v = 0xaf188cu; esp -= 4; W32(esp, v); }
/* 90294c: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 90294e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902950: mov ecx, esi */
  ecx = esi;
/* 902952: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x902958u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902958: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_90295e: /* 90295e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902961: mov ecx, esp */
  ecx = esp;
/* 902963: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902966: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902968: push 0xaf189c */
  { uint32_t v = 0xaf189cu; esp -= 4; W32(esp, v); }
/* 90296d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x90296fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90296f: mov ecx, ebx */
  ecx = ebx;
/* 902971: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902977u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902977: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902978: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 90297a: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x902980u); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902980: mov esi, eax */
  esi = eax;
/* 902982: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902985: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902987: je 0x9029a5 */
  if (zf) goto L_9029a5;
L_902989: /* 902989: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 90298e: push 0xaf18b8 */
  { uint32_t v = 0xaf18b8u; esp -= 4; W32(esp, v); }
/* 902993: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 902995: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902997: mov ecx, esi */
  ecx = esi;
/* 902999: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x90299fu); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 90299f: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_9029a5: /* 9029a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9029a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9029a8: mov ecx, esp */
  ecx = esp;
/* 9029aa: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 9029ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9029af: push 0xaf18c8 */
  { uint32_t v = 0xaf18c8u; esp -= 4; W32(esp, v); }
/* 9029b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9029b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9029b6: mov ecx, ebx */
  ecx = ebx;
/* 9029b8: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x9029beu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 9029be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9029bf: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 9029c1: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x9029c7u); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 9029c7: mov esi, eax */
  esi = eax;
/* 9029c9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9029cc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9029ce: je 0x9029ec */
  if (zf) goto L_9029ec;
L_9029d0: /* 9029d0: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 9029d5: push 0xaf18e8 */
  { uint32_t v = 0xaf18e8u; esp -= 4; W32(esp, v); }
/* 9029da: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9029dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9029de: mov ecx, esi */
  ecx = esi;
/* 9029e0: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x9029e6u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 9029e6: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_9029ec: /* 9029ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9029ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9029ef: mov ecx, esp */
  ecx = esp;
/* 9029f1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 9029f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9029f6: push 0xaf18f8 */
  { uint32_t v = 0xaf18f8u; esp -= 4; W32(esp, v); }
/* 9029fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9029fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9029fd: mov ecx, ebx */
  ecx = ebx;
/* 9029ff: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902a05u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902a05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902a06: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902a08: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x902a0eu); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902a0e: mov esi, eax */
  esi = eax;
/* 902a10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902a13: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902a15: je 0x902a33 */
  if (zf) goto L_902a33;
L_902a17: /* 902a17: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902a1c: push 0xaf1924 */
  { uint32_t v = 0xaf1924u; esp -= 4; W32(esp, v); }
/* 902a21: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 902a23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902a25: mov ecx, esi */
  ecx = esi;
/* 902a27: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x902a2du); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902a2d: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_902a33: /* 902a33: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902a35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902a36: mov ecx, esp */
  ecx = esp;
/* 902a38: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902a3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902a3d: push 0xaf1934 */
  { uint32_t v = 0xaf1934u; esp -= 4; W32(esp, v); }
/* 902a42: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902a44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902a44: mov ecx, ebx */
  ecx = ebx;
/* 902a46: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902a4cu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902a4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902a4d: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902a4f: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x902a55u); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902a55: mov esi, eax */
  esi = eax;
/* 902a57: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902a5a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902a5c: je 0x902a7a */
  if (zf) goto L_902a7a;
L_902a5e: /* 902a5e: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902a63: push 0xaf1958 */
  { uint32_t v = 0xaf1958u; esp -= 4; W32(esp, v); }
/* 902a68: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 902a6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902a6c: mov ecx, esi */
  ecx = esi;
/* 902a6e: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x902a74u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902a74: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_902a7a: /* 902a7a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902a7d: mov ecx, esp */
  ecx = esp;
/* 902a7f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902a82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902a84: push 0xaf1968 */
  { uint32_t v = 0xaf1968u; esp -= 4; W32(esp, v); }
/* 902a89: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902a8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902a8b: mov ecx, ebx */
  ecx = ebx;
/* 902a8d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902a93u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902a93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902a94: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902a96: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x902a9cu); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902a9c: mov esi, eax */
  esi = eax;
/* 902a9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902aa1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902aa3: je 0x902ac1 */
  if (zf) goto L_902ac1;
L_902aa5: /* 902aa5: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902aaa: push 0xaf1984 */
  { uint32_t v = 0xaf1984u; esp -= 4; W32(esp, v); }
/* 902aaf: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 902ab1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902ab3: mov ecx, esi */
  ecx = esi;
/* 902ab5: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x902abbu); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902abb: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_902ac1: /* 902ac1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902ac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902ac4: mov ecx, esp */
  ecx = esp;
/* 902ac6: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902ac9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902acb: push 0xaf1994 */
  { uint32_t v = 0xaf1994u; esp -= 4; W32(esp, v); }
/* 902ad0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902ad2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902ad2: mov ecx, ebx */
  ecx = ebx;
/* 902ad4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902adau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902ada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902adb: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902add: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x902ae3u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902ae3: mov esi, eax */
  esi = eax;
/* 902ae5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902ae8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902aea: je 0x902b08 */
  if (zf) goto L_902b08;
L_902aec: /* 902aec: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902af1: push 0xaf19c0 */
  { uint32_t v = 0xaf19c0u; esp -= 4; W32(esp, v); }
/* 902af6: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 902af8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902afa: mov ecx, esi */
  ecx = esi;
/* 902afc: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x902b02u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902b02: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_902b08: /* 902b08: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902b0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902b0b: mov ecx, esp */
  ecx = esp;
/* 902b0d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902b10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902b12: push 0xaf19d0 */
  { uint32_t v = 0xaf19d0u; esp -= 4; W32(esp, v); }
/* 902b17: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902b19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902b19: mov ecx, ebx */
  ecx = ebx;
/* 902b1b: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902b21u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902b21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902b22: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902b24: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x902b2au); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902b2a: mov esi, eax */
  esi = eax;
/* 902b2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902b2f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902b31: je 0x902b4f */
  if (zf) goto L_902b4f;
L_902b33: /* 902b33: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902b38: push 0xaf19fc */
  { uint32_t v = 0xaf19fcu; esp -= 4; W32(esp, v); }
/* 902b3d: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902b3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902b41: mov ecx, esi */
  ecx = esi;
/* 902b43: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x902b49u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902b49: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_902b4f: /* 902b4f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902b51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902b52: mov ecx, esp */
  ecx = esp;
/* 902b54: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902b57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902b59: push 0xaf1a0c */
  { uint32_t v = 0xaf1a0cu; esp -= 4; W32(esp, v); }
/* 902b5e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902b60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902b60: mov ecx, ebx */
  ecx = ebx;
/* 902b62: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902b68u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902b69: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902b6b: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x902b71u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902b71: mov esi, eax */
  esi = eax;
/* 902b73: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902b76: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902b78: je 0x902b96 */
  if (zf) goto L_902b96;
L_902b7a: /* 902b7a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902b7f: push 0xaf1a38 */
  { uint32_t v = 0xaf1a38u; esp -= 4; W32(esp, v); }
/* 902b84: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 902b86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902b88: mov ecx, esi */
  ecx = esi;
/* 902b8a: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x902b90u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902b90: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_902b96: /* 902b96: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902b98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902b99: mov ecx, esp */
  ecx = esp;
/* 902b9b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902b9e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902ba0: push 0xaf1a48 */
  { uint32_t v = 0xaf1a48u; esp -= 4; W32(esp, v); }
/* 902ba5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902ba7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902ba7: mov ecx, ebx */
  ecx = ebx;
/* 902ba9: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902bafu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902baf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902bb0: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 902bb2: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x902bb8u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902bb8: mov esi, eax */
  esi = eax;
/* 902bba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902bbd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902bbf: je 0x902bdd */
  if (zf) goto L_902bdd;
L_902bc1: /* 902bc1: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902bc6: push 0xaf1a68 */
  { uint32_t v = 0xaf1a68u; esp -= 4; W32(esp, v); }
/* 902bcb: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 902bcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902bcf: mov ecx, esi */
  ecx = esi;
/* 902bd1: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x902bd7u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902bd7: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_902bdd: /* 902bdd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902bdf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902be0: mov ecx, esp */
  ecx = esp;
/* 902be2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902be5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902be7: push 0xaf1a78 */
  { uint32_t v = 0xaf1a78u; esp -= 4; W32(esp, v); }
/* 902bec: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902beeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902bee: mov ecx, ebx */
  ecx = ebx;
/* 902bf0: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902bf6u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902bf7: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902bf9: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x902bffu); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902bff: mov esi, eax */
  esi = eax;
/* 902c01: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902c04: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902c06: je 0x902c27 */
  if (zf) goto L_902c27;
L_902c08: /* 902c08: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902c0d: push 0xaf1a98 */
  { uint32_t v = 0xaf1a98u; esp -= 4; W32(esp, v); }
/* 902c12: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 902c17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902c19: mov ecx, esi */
  ecx = esi;
/* 902c1b: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x902c21u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902c21: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_902c27: /* 902c27: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902c29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902c2a: mov ecx, esp */
  ecx = esp;
/* 902c2c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902c2f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902c31: push 0xaf1aa8 */
  { uint32_t v = 0xaf1aa8u; esp -= 4; W32(esp, v); }
/* 902c36: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902c38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902c38: mov ecx, ebx */
  ecx = ebx;
/* 902c3a: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x902c40u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 902c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902c41: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 902c43: call dword ptr [0xcfac34] */
  esp -= 4; W32(esp, 0x902c49u); SPILL(); f_4e2ea5(); if (g_unwind) return; /* Core!??2UArrayProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902c49: mov esi, eax */
  esi = eax;
/* 902c4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902c4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902c50: je 0x902c73 */
  if (zf) goto L_902c73;
L_902c52: /* 902c52: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 902c57: push 0xaf1acc */
  { uint32_t v = 0xaf1accu; esp -= 4; W32(esp, v); }
/* 902c5c: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 902c61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902c63: mov ecx, esi */
  ecx = esi;
/* 902c65: call dword ptr [0xcfac30] */
  esp -= 4; W32(esp, 0x902c6bu); SPILL(); f_4e26ee(); if (g_unwind) return; /* Core!??0UArrayProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 902c6b: mov dword ptr [esi], 0xa1b690 */
  W32((uint32_t)(esi), 0xa1b690u);
/* 902c71: jmp 0x902c75 */
  goto L_902c75;
L_902c73: /* 902c73: xor esi, esi */
  esi = 0;
L_902c75: /* 902c75: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902c77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902c78: mov ecx, esp */
  ecx = esp;
/* 902c7a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 902c7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 902c7f: push 0xaf1adc */
  { uint32_t v = 0xaf1adcu; esp -= 4; W32(esp, v); }
/* 902c84: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x902c86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902c86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 902c87: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 902c89: call dword ptr [0xcfaa28] */
  esp -= 4; W32(esp, 0x902c8fu); SPILL(); f_4e16bd(); if (g_unwind) return; /* Core!??2UStrProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 902c8f: mov edi, eax */
  edi = eax;
/* 902c91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902c94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902c96: je 0x902ca8 */
  if (zf) goto L_902ca8;
L_902c98: /* 902c98: mov ecx, edi */
  ecx = edi;
/* 902c9a: call dword ptr [0xcfa7fc] */
  esp -= 4; W32(esp, 0x902ca0u); SPILL(); f_4e193d(); if (g_unwind) return; /* Core!??0UStrProperty@@QAE@XZ */ RELOAD();
/* 902ca0: mov dword ptr [edi], 0xa101d0 */
  W32((uint32_t)(edi), 0xa101d0u);
/* 902ca6: jmp 0x902caa */
  goto L_902caa;
L_902ca8: /* 902ca8: xor edi, edi */
  edi = 0;
L_902caa: /* 902caa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 902cad: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 902cb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 902cb1: mov dword ptr [ebx + 0x64], 0x2710 */
  W32((uint32_t)(ebx + 0x64u), 0x2710u);
/* 902cb8: mov dword ptr [ebx + 0x68], 0x1b58 */
  W32((uint32_t)(ebx + 0x68u), 0x1b58u);
/* 902cbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 902cc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 902cc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 902cc8: mov esp, ebp */
  esp = ebp;
/* 902cca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 902ccb: ret  */
  esp += 4; SPILL(); return;
}

void f_902ccc(void) {
  LOAD_REGS();
L_902ccc: /* 902ccc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 902ccf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 902cd4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 902cd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902cd8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 902cdb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x902ce0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_902ce0(); return;
}

void f_902ce0(void) {
  LOAD_REGS();
L_902ce0: /* 902ce0: push 0xa2076c */
  { uint32_t v = 0xa2076cu; esp -= 4; W32(esp, v); }
/* 902ce5: push 0xaf1af8 */
  { uint32_t v = 0xaf1af8u; esp -= 4; W32(esp, v); }
/* 902cea: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x902cf0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 902cf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902cf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902cf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902cf7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x902cfcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_902cfc: guest_badaddr(0x902cfc); return;
}

void f_902e20(void) {
  LOAD_REGS();
L_902e20: /* 902e20: ret  */
  esp += 4; SPILL(); return;
}

void f_902e40(void) {
  LOAD_REGS();
L_902e40: /* 902e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 902e44: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 902e47: mov eax, 1 */
  eax = 0x1u;
/* 902e4c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_902e60(void) {
  LOAD_REGS();
L_902e60: /* 902e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 902e64: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 902e67: mov eax, 1 */
  eax = 0x1u;
/* 902e6c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_902e80(void) {
  LOAD_REGS();
L_902e80: /* 902e80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 902e81: mov esi, ecx */
  esi = ecx;
/* 902e83: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x902e89u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 902e89: mov eax, esi */
  eax = esi;
/* 902e8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 902e8c: ret  */
  esp += 4; SPILL(); return;
}

void f_902ea0(void) {
  LOAD_REGS();
L_902ea0: /* 902ea0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 902ea4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 902ea8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 902eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 902eab: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x902eaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902eae: ret  */
  esp += 4; SPILL(); return;
}

void f_902ec0(void) {
  LOAD_REGS();
L_902ec0: /* 902ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 902ec4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 902ec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902ec7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x902ecdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 902ecd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_902ee0(void) {
  LOAD_REGS();
L_902ee0: /* 902ee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 902ee1: mov ebp, esp */
  ebp = esp;
/* 902ee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 902ee5: push 0x9d9f90 */
  { uint32_t v = 0x9d9f90u; esp -= 4; W32(esp, v); }
/* 902eea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 902ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902ef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 902ef8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 902efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 902efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 902efd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 902efe: mov edi, ecx */
  edi = ecx;
/* 902f00: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 902f03: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 902f05: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 902f08: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 902f0f: je 0x902f19 */
  if (zf) goto L_902f19;
L_902f11: /* 902f11: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 902f13: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x902f19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_902f19: /* 902f19: xor esi, esi */
  esi = 0;
/* 902f1b: jmp 0x902f20 */
  goto L_902f20;
L_902f20: /* 902f20: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 902f23: jge 0x902f66 */
  if ((sf == of)) goto L_902f66;
L_902f25: /* 902f25: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 902f28: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 902f2b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 902f2d: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x902f33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902f33: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 902f34: jmp 0x902f20 */
  goto L_902f20;
L_902f66: /* 902f66: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 902f69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 902f6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 902f6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 902f72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 902f73: mov esp, ebp */
  esp = ebp;
/* 902f75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 902f76: ret  */
  esp += 4; SPILL(); return;
}

void f_902f1d(void) {
  LOAD_REGS();
L_902f1d: /* 902f1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_902f20: /* 902f20: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 902f23: jge 0x902f66 */
  if ((sf == of)) goto L_902f66;
L_902f25: /* 902f25: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 902f28: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 902f2b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 902f2d: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x902f33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 902f33: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 902f34: jmp 0x902f20 */
  goto L_902f20;
L_902f66: /* 902f66: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 902f69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 902f6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 902f6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 902f72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 902f73: mov esp, ebp */
  esp = ebp;
/* 902f75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 902f76: ret  */
  esp += 4; SPILL(); return;
}

void f_902f36(void) {
  LOAD_REGS();
L_902f36: /* 902f36: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 902f39: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 902f3e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 902f41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 902f42: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 902f45: call 0x99caf8 */
  esp -= 4; W32(esp, 0x902f4au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_902f4a(); return;
}

void f_902f4a(void) {
  LOAD_REGS();
L_902f4a: /* 902f4a: push 0xa207b4 */
  { uint32_t v = 0xa207b4u; esp -= 4; W32(esp, v); }
/* 902f4f: push 0xaf1b08 */
  { uint32_t v = 0xaf1b08u; esp -= 4; W32(esp, v); }
/* 902f54: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x902f5au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 902f5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 902f5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902f5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 902f61: call 0x99caf8 */
  esp -= 4; W32(esp, 0x902f66u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 902f66: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 902f69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 902f6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 902f6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 902f72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 902f73: mov esp, ebp */
  esp = ebp;
/* 902f75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 902f76: ret  */
  esp += 4; SPILL(); return;
}

void f_902fb0(void) {
  LOAD_REGS();
L_902fb0: /* 902fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 902fb1: mov ebp, esp */
  ebp = esp;
/* 902fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 902fb5: push 0x9d9fa0 */
  { uint32_t v = 0x9d9fa0u; esp -= 4; W32(esp, v); }
/* 902fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 902fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 902fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 902fc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 902fcb: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 902fce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 902fcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 902fd0: mov esi, ecx */
  esi = ecx;
/* 902fd2: fadd qword ptr [esi + 0x44] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x44u)));
/* 902fd5: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 902fd8: xor eax, eax */
  eax = 0;
/* 902fda: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 902fdc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 902fdd: fstp qword ptr [esi + 0x44] */
  WF64((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 902fe0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 902fe3: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 902fe6: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 902fec: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 902ff2: jne 0x90304c */
  if (!zf) goto L_90304c;
L_902ff4: /* 902ff4: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 902ff7: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 902ffa: mov ebx, 1 */
  ebx = 0x1u;
/* 902fff: nop  */
L_903000: /* 903000: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 903002: jl 0x90304c */
  if ((sf != of)) goto L_90304c;
L_903004: /* 903004: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 903007: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 90300a: cmp dword ptr [ecx + 0x6c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x6cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90300d: jne 0x903019 */
  if (!zf) goto L_903019;
L_90300f: /* 90300f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903011: je 0x903019 */
  if (zf) goto L_903019;
L_903013: /* 903013: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 903015: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903016: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x903019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_903019: /* 903019: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 90301a: jmp 0x903000 */
  goto L_903000;
L_90304c: /* 90304c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 90304f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903050: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903051: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903058: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903059: mov esp, ebp */
  esp = ebp;
/* 90305b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90305c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90301c(void) {
  LOAD_REGS();
L_90301c: /* 90301c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 90301f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903024: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 903027: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903028: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 90302b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903030u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903030(); return;
}

void f_903030(void) {
  LOAD_REGS();
L_903030: /* 903030: push 0xa207e8 */
  { uint32_t v = 0xa207e8u; esp -= 4; W32(esp, v); }
/* 903035: push 0xaf1b20 */
  { uint32_t v = 0xaf1b20u; esp -= 4; W32(esp, v); }
/* 90303a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903040u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903040: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903043: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903045: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903047: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90304cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 90304c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 90304f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903050: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903051: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903058: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903059: mov esp, ebp */
  esp = ebp;
/* 90305b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90305c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903090(void) {
  LOAD_REGS();
L_903090: /* 903090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903091: mov ebp, esp */
  ebp = esp;
/* 903093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903095: push 0x9d9fb0 */
  { uint32_t v = 0x9d9fb0u; esp -= 4; W32(esp, v); }
/* 90309a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9030a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9030a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9030a8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9030ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9030ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9030ad: mov esi, ecx */
  esi = ecx;
/* 9030af: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 9030b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9030b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9030b5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9030bc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9030bf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 9030c3: je 0x9030cc */
  if (zf) goto L_9030cc;
L_9030c5: /* 9030c5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9030c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9030c9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x9030ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9030cc: /* 9030cc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9030d3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_9030d7: /* 9030d7: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 9030da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9030dc: je 0x903150 */
  if (zf) goto L_903150;
L_9030de: /* 9030de: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9030e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9030e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9030e5: je 0x9030d7 */
  if (zf) goto L_9030d7;
L_9030e7: /* 9030e7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9030e9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9030eb: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x9030eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9030ee: jmp 0x9030d7 */
  goto L_9030d7;
L_903150: /* 903150: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 903152: mov ecx, esi */
  ecx = esi;
/* 903154: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90315b: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x90315eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90315e: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 903161: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903163: je 0x90316c */
  if (zf) goto L_90316c;
L_903165: /* 903165: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 903167: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 903169: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x90316cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90316c: /* 90316c: mov ecx, esi */
  ecx = esi;
/* 90316e: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x903174u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 903174: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903177: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903178: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903179: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903181: mov esp, ebp */
  esp = ebp;
/* 903183: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903184: ret  */
  esp += 4; SPILL(); return;
}

void f_9030f0(void) {
  LOAD_REGS();
L_9030f0: /* 9030f0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9030f3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 9030f8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9030fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9030fc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 9030ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903104u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903104(); return;
}

void f_903104(void) {
  LOAD_REGS();
L_903104: /* 903104: push 0xa20890 */
  { uint32_t v = 0xa20890u; esp -= 4; W32(esp, v); }
/* 903109: push 0xaf1b30 */
  { uint32_t v = 0xaf1b30u; esp -= 4; W32(esp, v); }
/* 90310e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903114u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903114: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903117: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903119: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90311b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903120u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903120(); return;
}

void f_903120(void) {
  LOAD_REGS();
L_903120: /* 903120: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 903123: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903128: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 90312b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90312c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 90312f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903134u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903134(); return;
}

void f_903134(void) {
  LOAD_REGS();
L_903134: /* 903134: push 0xa20854 */
  { uint32_t v = 0xa20854u; esp -= 4; W32(esp, v); }
/* 903139: push 0xaf1b38 */
  { uint32_t v = 0xaf1b38u; esp -= 4; W32(esp, v); }
/* 90313e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903144u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903144: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903147: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90314b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903150u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 903150: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 903152: mov ecx, esi */
  ecx = esi;
/* 903154: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90315b: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x90315eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90315e: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 903161: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903163: je 0x90316c */
  if (zf) goto L_90316c;
L_903165: /* 903165: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 903167: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 903169: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x90316cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90316c: /* 90316c: mov ecx, esi */
  ecx = esi;
/* 90316e: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x903174u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 903174: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903177: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903178: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903179: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903181: mov esp, ebp */
  esp = ebp;
/* 903183: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903184: ret  */
  esp += 4; SPILL(); return;
}

void f_903185(void) {
  LOAD_REGS();
L_903185: /* 903185: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 903188: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 90318d: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 903190: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 903191: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 903194: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903199u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903199(); return;
}

void f_903199(void) {
  LOAD_REGS();
L_903199: /* 903199: push 0xa20824 */
  { uint32_t v = 0xa20824u; esp -= 4; W32(esp, v); }
/* 90319e: push 0xaf1b40 */
  { uint32_t v = 0xaf1b40u; esp -= 4; W32(esp, v); }
/* 9031a3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x9031a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 9031a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9031ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9031ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9031b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9031b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9031b5: guest_badaddr(0x9031b5); return;
}

void f_903210(void) {
  LOAD_REGS();
L_903210: /* 903210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903211: mov ebp, esp */
  ebp = esp;
/* 903213: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903215: push 0x9d9fe4 */
  { uint32_t v = 0x9d9fe4u; esp -= 4; W32(esp, v); }
/* 90321a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 903220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903221: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 903228: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90322b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90322c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90322d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90322e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 903231: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 903234: mov esi, ecx */
  esi = ecx;
/* 903236: push 0xaf1b48 */
  { uint32_t v = 0xaf1b48u; esp -= 4; W32(esp, v); }
/* 90323b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90323c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 90323f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 903246: call dword ptr [0xcfa5b8] */
  esp -= 4; W32(esp, 0x90324cu); SPILL(); f_4e32ec(); if (g_unwind) return; /* Core!?ParseCommand@@YAHPAPBGPBG@Z */ RELOAD();
/* 90324c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90324f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903251: je 0x9033ef */
  if (zf) goto L_9033ef;
L_903257: /* 903257: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 90325a: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 903260: push 0xaf1b58 */
  { uint32_t v = 0xaf1b58u; esp -= 4; W32(esp, v); }
/* 903265: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903266: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x903268u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903268: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 90326b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90326e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903270: je 0x903317 */
  if (zf) goto L_903317;
L_903276: /* 903276: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 903278: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 90327b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90327c: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x90327fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90327f: mov ecx, eax */
  ecx = eax;
/* 903281: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 903285: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x90328bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 90328b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90328c: push 0xaf1b74 */
  { uint32_t v = 0xaf1b74u; esp -= 4; W32(esp, v); }
/* 903291: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903292: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x903294u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903294: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903297: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 90329a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90329e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x9032a4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 9032a4: xor edi, edi */
  edi = 0;
/* 9032a6: jmp 0x9032b0 */
  goto L_9032b0;
L_9032b0: /* 9032b0: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9032b3: cmp edi, dword ptr [eax + 0x3ec4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3ec4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9032b9: jge 0x903317 */
  if ((sf == of)) goto L_903317;
L_9032bb: /* 9032bb: mov ecx, dword ptr [eax + 0x3ec0] */
  ecx = R32((uint32_t)(eax + 0x3ec0u));
/* 9032c1: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 9032c8: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 9032cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9032cd: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 9032d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9032d1: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x9032d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9032d4: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9032d7: mov esi, dword ptr [ecx + 0x3ec0] */
  esi = R32((uint32_t)(ecx + 0x3ec0u));
/* 9032dd: mov ecx, eax */
  ecx = eax;
/* 9032df: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 9032e3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9032e5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x9032ebu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 9032eb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9032ed: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9032f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9032f1: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* 9032f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9032f5: push 0xaf1b90 */
  { uint32_t v = 0xaf1b90u; esp -= 4; W32(esp, v); }
/* 9032fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9032fb: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x903301u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 903301: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903304: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 903307: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90330b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x903311u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 903311: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 903314: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 903315: jmp 0x9032b0 */
  goto L_9032b0;
L_903317: /* 903317: xor eax, eax */
  eax = 0;
L_903319: /* 903319: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90331c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 90331f: jge 0x9033d7 */
  if ((sf == of)) goto L_9033d7;
L_903325: /* 903325: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 903328: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 90332b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 90332d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 903330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903331: mov ecx, ebx */
  ecx = ebx;
/* 903333: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x903336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903336: mov ecx, eax */
  ecx = eax;
/* 903338: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 90333c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x903342u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 903342: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 903345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903346: push 0xaf1bbc */
  { uint32_t v = 0xaf1bbcu; esp -= 4; W32(esp, v); }
/* 90334b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90334c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x903352u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 903352: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903355: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 903358: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90335c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x903362u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 903362: xor eax, eax */
  eax = 0;
/* 903364: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_903367: /* 903367: cmp eax, dword ptr [ebx + 0x3ec4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3ec4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90336d: jge 0x9033ce */
  if ((sf == of)) goto L_9033ce;
L_90336f: /* 90336f: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 903376: mov eax, dword ptr [ebx + 0x3ec0] */
  eax = R32((uint32_t)(ebx + 0x3ec0u));
/* 90337c: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 90337f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 903381: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 903384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903385: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x903388u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903388: mov esi, dword ptr [ebx + 0x3ec0] */
  esi = R32((uint32_t)(ebx + 0x3ec0u));
/* 90338e: mov ecx, eax */
  ecx = eax;
/* 903390: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 903394: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 903396: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x90339cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 90339c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90339e: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 9033a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9033a2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9033a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9033a6: push 0xaf1bd8 */
  { uint32_t v = 0xaf1bd8u; esp -= 4; W32(esp, v); }
/* 9033ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9033ac: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x9033b2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 9033b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9033b5: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 9033b8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9033bc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x9033c2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 9033c2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9033c5: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9033c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9033c9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9033cc: jmp 0x903367 */
  goto L_903367;
L_9033ce: /* 9033ce: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 9033d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9033d2: jmp 0x903319 */
  goto L_903319;
L_9033d7: /* 9033d7: mov eax, 1 */
  eax = 0x1u;
/* 9033dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9033df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9033e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9033e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9033e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9033e9: mov esp, ebp */
  esp = ebp;
/* 9033eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9033ec: ret 8 */
  esp += 12; SPILL(); return;
L_9033ef: /* 9033ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9033f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9033f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9033f4: xor eax, eax */
  eax = 0;
/* 9033f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9033fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9033fe: mov esp, ebp */
  esp = ebp;
/* 903400: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903401: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9032a8(void) {
  LOAD_REGS();
L_9032a8: /* 9032a8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 9032af: nop  */
L_9032b0: /* 9032b0: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9032b3: cmp edi, dword ptr [eax + 0x3ec4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3ec4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9032b9: jge 0x903317 */
  if ((sf == of)) goto L_903317;
L_9032bb: /* 9032bb: mov ecx, dword ptr [eax + 0x3ec0] */
  ecx = R32((uint32_t)(eax + 0x3ec0u));
/* 9032c1: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 9032c8: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 9032cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9032cd: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 9032d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9032d1: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x9032d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9032d4: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9032d7: mov esi, dword ptr [ecx + 0x3ec0] */
  esi = R32((uint32_t)(ecx + 0x3ec0u));
/* 9032dd: mov ecx, eax */
  ecx = eax;
/* 9032df: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 9032e3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9032e5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x9032ebu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 9032eb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9032ed: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9032f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9032f1: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* 9032f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9032f5: push 0xaf1b90 */
  { uint32_t v = 0xaf1b90u; esp -= 4; W32(esp, v); }
/* 9032fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9032fb: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x903301u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 903301: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903304: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 903307: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90330b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x903311u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 903311: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 903314: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 903315: jmp 0x9032b0 */
  goto L_9032b0;
L_903317: /* 903317: xor eax, eax */
  eax = 0;
L_903319: /* 903319: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90331c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 90331f: jge 0x9033d7 */
  if ((sf == of)) goto L_9033d7;
L_903325: /* 903325: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 903328: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 90332b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 90332d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 903330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903331: mov ecx, ebx */
  ecx = ebx;
/* 903333: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x903336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903336: mov ecx, eax */
  ecx = eax;
/* 903338: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 90333c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x903342u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 903342: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 903345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903346: push 0xaf1bbc */
  { uint32_t v = 0xaf1bbcu; esp -= 4; W32(esp, v); }
/* 90334b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90334c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x903352u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 903352: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903355: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 903358: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90335c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x903362u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 903362: xor eax, eax */
  eax = 0;
/* 903364: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_903367: /* 903367: cmp eax, dword ptr [ebx + 0x3ec4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3ec4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90336d: jge 0x9033ce */
  if ((sf == of)) goto L_9033ce;
L_90336f: /* 90336f: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 903376: mov eax, dword ptr [ebx + 0x3ec0] */
  eax = R32((uint32_t)(ebx + 0x3ec0u));
/* 90337c: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 90337f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 903381: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 903384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903385: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x903388u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903388: mov esi, dword ptr [ebx + 0x3ec0] */
  esi = R32((uint32_t)(ebx + 0x3ec0u));
/* 90338e: mov ecx, eax */
  ecx = eax;
/* 903390: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 903394: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 903396: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x90339cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 90339c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90339e: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 9033a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9033a2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9033a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9033a6: push 0xaf1bd8 */
  { uint32_t v = 0xaf1bd8u; esp -= 4; W32(esp, v); }
/* 9033ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9033ac: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x9033b2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 9033b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9033b5: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 9033b8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9033bc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x9033c2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 9033c2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9033c5: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9033c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9033c9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9033cc: jmp 0x903367 */
  goto L_903367;
L_9033ce: /* 9033ce: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 9033d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9033d2: jmp 0x903319 */
  goto L_903319;
L_9033d7: /* 9033d7: mov eax, 1 */
  eax = 0x1u;
/* 9033dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9033df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9033e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9033e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9033e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9033e9: mov esp, ebp */
  esp = ebp;
/* 9033eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9033ec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_903404(void) {
  LOAD_REGS();
L_903404: /* 903404: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 903407: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 90340c: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 90340f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 903410: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 903413: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903418u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903418(); return;
}

void f_903418(void) {
  LOAD_REGS();
L_903418: /* 903418: push 0xa208cc */
  { uint32_t v = 0xa208ccu; esp -= 4; W32(esp, v); }
/* 90341d: push 0xaf1c04 */
  { uint32_t v = 0xaf1c04u; esp -= 4; W32(esp, v); }
/* 903422: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903428u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903428: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90342b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90342d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90342f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903434u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_903434: guest_badaddr(0x903434); return;
}

void f_9034d0(void) {
  LOAD_REGS();
L_9034d0: /* 9034d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9034d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9034d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9034d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9034d8: mov edi, ecx */
  edi = ecx;
/* 9034da: je 0x90351e */
  if (zf) goto L_90351e;
L_9034dc: /* 9034dc: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9034e1: mov ecx, esi */
  ecx = esi;
/* 9034e3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x9034e9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 9034e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9034eb: je 0x90351e */
  if (zf) goto L_90351e;
L_9034ed: /* 9034ed: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 9034f3: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9034f5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9034f9: jne 0x90351e */
  if (!zf) goto L_90351e;
L_9034fb: /* 9034fb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9034fe: jne 0x90351e */
  if (!zf) goto L_90351e;
L_903500: /* 903500: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 903503: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 903507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903508: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90350e: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x903513u); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 903513: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 903515: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 903517: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903518: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 90351a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90351b: ret 4 */
  esp += 8; SPILL(); return;
L_90351e: /* 90351e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90351f: mov eax, 1 */
  eax = 0x1u;
/* 903524: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903525: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903550(void) {
  LOAD_REGS();
L_903550: /* 903550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903551: mov ebp, esp */
  ebp = esp;
/* 903553: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903555: push 0x9da000 */
  { uint32_t v = 0x9da000u; esp -= 4; W32(esp, v); }
/* 90355a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 903560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903561: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 903568: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90356b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90356c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90356d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 903570: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903571: mov ebx, ecx */
  ebx = ecx;
/* 903573: xor edi, edi */
  edi = 0;
/* 903575: mov ecx, esi */
  ecx = esi;
/* 903577: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 90357a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 90357d: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 903580: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x903586u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 903586: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 903588: je 0x90367f */
  if (zf) goto L_90367f;
L_90358e: /* 90358e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 903591: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 903593: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 903596: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 90359c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 90359e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90359f: mov ecx, esi */
  ecx = esi;
/* 9035a1: mov byte ptr [ebp + 0xb], 0 */
  W8((uint32_t)(ebp + 0xbu), 0x0u);
/* 9035a5: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x9035a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9035a8: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 9035ab: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9035ad: je 0x903602 */
  if (zf) goto L_903602;
L_9035af: /* 9035af: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9035b1: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 9035b6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 9035b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9035ba: mov ecx, esi */
  ecx = esi;
/* 9035bc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x9035bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9035bf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9035c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9035c4: je 0x903674 */
  if (zf) goto L_903674;
L_9035ca: /* 9035ca: mov ecx, esi */
  ecx = esi;
/* 9035cc: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x9035d2u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 9035d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9035d4: jne 0x90362c */
  if (!zf) goto L_90362c;
L_9035d6: /* 9035d6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9035d9: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9035de: jae 0x90362c */
  if (!cf) goto L_90362c;
L_9035e0: /* 9035e0: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
/* 9035e3: mov eax, dword ptr [ecx + eax*4 + 0xeb4] */
  eax = R32((uint32_t)(ecx + eax*4 + 0xeb4u));
/* 9035ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9035ec: je 0x90362c */
  if (zf) goto L_90362c;
L_9035ee: /* 9035ee: cmp dword ptr [eax + 0x44], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9035f2: jne 0x90362c */
  if (!zf) goto L_90362c;
L_9035f4: /* 9035f4: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 9035f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9035f9: jne 0x90362c */
  if (!zf) goto L_90362c;
L_9035fb: /* 9035fb: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 9035fe: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 903600: jmp 0x90362c */
  goto L_90362c;
L_903602: /* 903602: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 903605: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 903607: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903608: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 90360b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90360c: mov ecx, esi */
  ecx = esi;
/* 90360e: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x903611u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903611: mov ecx, esi */
  ecx = esi;
/* 903613: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x903619u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 903619: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90361b: jne 0x90362c */
  if (!zf) goto L_90362c;
L_90361d: /* 90361d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 903620: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 903622: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 903624: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903625: mov ecx, ebx */
  ecx = ebx;
/* 903627: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x90362au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90362a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_90362c: /* 90362c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 90362e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903630: je 0x90373b */
  if (zf) goto L_90373b;
L_903636: /* 903636: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 903639: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90363a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x903640u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 903640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903642: jne 0x90373b */
  if (!zf) goto L_90373b;
L_903648: /* 903648: mov ecx, esi */
  ecx = esi;
/* 90364a: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 903650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903651: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x903653u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903653: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 903655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903657: mov ebx, eax */
  ebx = eax;
/* 903659: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x90365bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90365b: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 903661: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903663: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 903665: push 0xaf1760 */
  { uint32_t v = 0xaf1760u; esp -= 4; W32(esp, v); }
/* 90366a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90366b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x903671u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 903671: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_903674: /* 903674: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 90367a: jmp 0x90373b */
  goto L_90373b;
L_90367f: /* 90367f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 903682: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 903684: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903686: je 0x903702 */
  if (zf) goto L_903702;
L_903688: /* 903688: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 90368d: mov ecx, edi */
  ecx = edi;
/* 90368f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x903695u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 903695: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903697: je 0x903702 */
  if (zf) goto L_903702;
L_903699: /* 903699: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 90369f: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9036a1: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 9036a4: jne 0x903702 */
  if (!zf) goto L_903702;
L_9036a6: /* 9036a6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9036a9: jne 0x903702 */
  if (!zf) goto L_903702;
L_9036ab: /* 9036ab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9036ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9036af: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 9036b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9036b3: mov ecx, esi */
  ecx = esi;
/* 9036b5: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
/* 9036b9: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x9036bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9036bc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9036bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9036c0: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
/* 9036c3: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9036c9: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x9036ceu); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 9036ce: xor edi, edi */
  edi = 0;
/* 9036d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9036d2: je 0x9036dd */
  if (zf) goto L_9036dd;
L_9036d4: /* 9036d4: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 9036d7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 9036da: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
L_9036dd: /* 9036dd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9036df: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 9036e4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 9036e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9036e8: mov ecx, esi */
  ecx = esi;
/* 9036ea: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x9036edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9036ed: mov eax, edi */
  eax = edi;
/* 9036ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9036f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9036f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9036fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9036fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9036fc: mov esp, ebp */
  esp = ebp;
/* 9036fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9036ff: ret 0xc */
  esp += 16; SPILL(); return;
L_903702: /* 903702: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 903705: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 903707: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903709: je 0x903753 */
  if (zf) goto L_903753;
L_90370b: /* 90370b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 90370d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90370e: mov ecx, ebx */
  ecx = ebx;
/* 903710: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x903713u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903713: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 903716: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 903719: je 0x903753 */
  if (zf) goto L_903753;
L_90371b: /* 90371b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 90371d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90371f: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 903722: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903723: mov ecx, esi */
  ecx = esi;
/* 903725: mov byte ptr [ebp + 0xb], 0 */
  W8((uint32_t)(ebp + 0xbu), 0x0u);
/* 903729: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x90372cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90372c: mov eax, dword ptr [ebx + 0x68] */
  eax = R32((uint32_t)(ebx + 0x68u));
/* 90372f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 903731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903732: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 903735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_903736: /* 903736: mov ecx, esi */
  ecx = esi;
/* 903738: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x90373bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90373b: /* 90373b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 90373e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90373f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903740: mov eax, 1 */
  eax = 0x1u;
/* 903745: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90374c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90374d: mov esp, ebp */
  esp = ebp;
/* 90374f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903750: ret 0xc */
  esp += 16; SPILL(); return;
L_903753: /* 903753: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 903755: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 903757: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 90375a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90375b: mov ecx, esi */
  ecx = esi;
/* 90375d: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
/* 903761: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x903764u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903764: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 903766: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 90376b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 90376e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90376f: jmp 0x903736 */
  goto L_903736;
}

void f_903771(void) {
  LOAD_REGS();
L_903771: /* 903771: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 903774: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903779: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 90377c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90377d: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 903780: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903785u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903785(); return;
}

void f_903785(void) {
  LOAD_REGS();
L_903785: /* 903785: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 90378b: push 0xa208f8 */
  { uint32_t v = 0xa208f8u; esp -= 4; W32(esp, v); }
/* 903790: push 0xaf17a8 */
  { uint32_t v = 0xaf17a8u; esp -= 4; W32(esp, v); }
/* 903795: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x903797u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903797: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 90379a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90379c: mov edi, dword ptr [0xcfa3a8] */
  edi = R32((uint32_t)(0xcfa3a8u));
/* 9037a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9037a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9037a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9037a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9037a9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9037ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9037ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9037af: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9037b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9037b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9037b2: push 0xaf17b0 */
  { uint32_t v = 0xaf17b0u; esp -= 4; W32(esp, v); }
/* 9037b7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9037b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9037b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9037bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9037be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9037c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9037c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9037c5: guest_badaddr(0x9037c5); return;
}

void f_903870(void) {
  LOAD_REGS();
L_903870: /* 903870: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903871: mov ebp, esp */
  ebp = esp;
/* 903873: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903875: push 0x9da010 */
  { uint32_t v = 0x9da010u; esp -= 4; W32(esp, v); }
/* 90387a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 903880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903881: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 903888: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90388b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90388c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90388d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 903890: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903891: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 903894: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 903897: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 903899: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90389a: mov ecx, esi */
  ecx = esi;
/* 90389c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9038a3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x9038a9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 9038a9: mov ecx, edi */
  ecx = edi;
/* 9038ab: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x9038b1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 9038b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9038b3: je 0x903901 */
  if (zf) goto L_903901;
L_9038b5: /* 9038b5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 9038b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9038b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9038ba: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x9038c0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 9038c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 9038c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9038c6: xor eax, eax */
  eax = 0;
L_9038c8: /* 9038c8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9038cb: jge 0x9038d0 */
  if ((sf == of)) goto L_9038d0;
L_9038cd: /* 9038cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9038ce: jmp 0x9038c8 */
  goto L_9038c8;
L_9038d0: /* 9038d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9038d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9038d3: mov ecx, esi */
  ecx = esi;
/* 9038d5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x9038dbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 9038db: xor ebx, ebx */
  ebx = 0;
/* 9038dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9038e0: /* 9038e0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9038e3: jge 0x903926 */
  if ((sf == of)) goto L_903926;
L_9038e5: /* 9038e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9038e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9038e9: mov ecx, esi */
  ecx = esi;
/* 9038eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x9038f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 9038f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9038f3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9038f5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 9038f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9038f9: mov ecx, edi */
  ecx = edi;
/* 9038fb: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x9038feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9038fe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9038ff: jmp 0x9038e0 */
  goto L_9038e0;
L_903901: /* 903901: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 903904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903905: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903906: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x90390cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 90390c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90390f: xor ebx, ebx */
  ebx = 0;
L_903911: /* 903911: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 903914: jge 0x903926 */
  if ((sf == of)) goto L_903926;
L_903916: /* 903916: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 903918: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 90391a: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 90391d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90391e: mov ecx, edi */
  ecx = edi;
/* 903920: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x903923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903923: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 903924: jmp 0x903911 */
  goto L_903911;
L_903926: /* 903926: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903929: mov eax, edi */
  eax = edi;
/* 90392b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90392c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90392d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903934: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903935: mov esp, ebp */
  esp = ebp;
/* 903937: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903938: ret  */
  esp += 4; SPILL(); return;
}

void f_903939(void) {
  LOAD_REGS();
L_903939: /* 903939: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 90393c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903941: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 903944: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903945: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 903948: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90394du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_90394d(); return;
}

void f_90394d(void) {
  LOAD_REGS();
L_90394d: /* 90394d: push 0xa2094c */
  { uint32_t v = 0xa2094cu; esp -= 4; W32(esp, v); }
/* 903952: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 903957: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x90395du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 90395d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903962: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903964: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903969u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_903969: guest_badaddr(0x903969); return;
}

void f_9039b0(void) {
  LOAD_REGS();
L_9039b0: /* 9039b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9039b1: mov ebp, esp */
  ebp = esp;
/* 9039b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9039b5: push 0x9da042 */
  { uint32_t v = 0x9da042u; esp -= 4; W32(esp, v); }
/* 9039ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9039c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9039c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9039c8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9039cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9039cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9039cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9039ce: mov esi, ecx */
  esi = ecx;
/* 9039d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9039d3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 9039d6: call dword ptr [0xcfa2a4] */
  esp -= 4; W32(esp, 0x9039dcu); SPILL(); f_4e22e3(); if (g_unwind) return; /* Core!??0USubsystem@@IAE@XZ */ RELOAD();
/* 9039dc: xor ebx, ebx */
  ebx = 0;
/* 9039de: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 9039e1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 9039e4: mov dword ptr [esi], 0xa06f00 */
  W32((uint32_t)(esi), 0xa06f00u);
/* 9039ea: mov dword ptr [esi + 0x28], 0xa06ef8 */
  W32((uint32_t)(esi + 0x28u), 0xa06ef8u);
/* 9039f1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x9039f7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 9039f7: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 9039fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9039fe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 903a02: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* 903a05: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* 903a08: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x903a0eu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 903a0e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 903a12: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x903a18u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 903a18: mov edi, dword ptr [0xcfa5f8] */
  edi = R32((uint32_t)(0xcfa5f8u));
/* 903a1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903a1f: push 0xaf17e4 */
  { uint32_t v = 0xaf17e4u; esp -= 4; W32(esp, v); }
/* 903a24: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 903a29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903a2a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x903a2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903a2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903a2f: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 903a32: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x903a38u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 903a38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903a39: push 0xaf17f0 */
  { uint32_t v = 0xaf17f0u; esp -= 4; W32(esp, v); }
/* 903a3e: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 903a43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903a44: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x903a46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903a46: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903a49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903a4b: mov ecx, esp */
  ecx = esp;
/* 903a4d: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 903a50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903a51: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 903a57: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x903a5du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 903a5d: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x903a63u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 903a63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903a64: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 903a66: call dword ptr [0xcfa18c] */
  esp -= 4; W32(esp, 0x903a6cu); SPILL(); f_4e10af(); if (g_unwind) return; /* Core!??2UPackageMap@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 903a6c: mov edi, eax */
  edi = eax;
/* 903a6e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903a71: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 903a73: je 0x903a85 */
  if (zf) goto L_903a85;
L_903a75: /* 903a75: mov ecx, edi */
  ecx = edi;
/* 903a77: call dword ptr [0xcfa480] */
  esp -= 4; W32(esp, 0x903a7du); SPILL(); f_4e1f46(); if (g_unwind) return; /* Core!??0UPackageMap@@QAE@XZ */ RELOAD();
/* 903a7d: mov dword ptr [edi], 0xa209a0 */
  W32((uint32_t)(edi), 0xa209a0u);
/* 903a83: jmp 0x903a87 */
  goto L_903a87;
L_903a85: /* 903a85: xor edi, edi */
  edi = 0;
L_903a87: /* 903a87: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 903a8a: call dword ptr [0xcfa810] */
  esp -= 4; W32(esp, 0x903a90u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 903a90: push 0xaf1808 */
  { uint32_t v = 0xaf1808u; esp -= 4; W32(esp, v); }
/* 903a95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903a96: call dword ptr [0xcfa80c] */
  esp -= 4; W32(esp, 0x903a9cu); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 903a9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903a9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903aa2: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 903aa5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903aa6: mov eax, esi */
  eax = esi;
/* 903aa8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903aa9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903ab0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903ab1: mov esp, ebp */
  esp = ebp;
/* 903ab3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903ab4: ret  */
  esp += 4; SPILL(); return;
}

void f_903ab5(void) {
  LOAD_REGS();
L_903ab5: /* 903ab5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 903ab8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903abd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 903ac0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903ac1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 903ac4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903ac9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903ac9(); return;
}

void f_903ac9(void) {
  LOAD_REGS();
L_903ac9: /* 903ac9: push 0xa20964 */
  { uint32_t v = 0xa20964u; esp -= 4; W32(esp, v); }
/* 903ace: push 0xaf1824 */
  { uint32_t v = 0xaf1824u; esp -= 4; W32(esp, v); }
/* 903ad3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903ad9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903ad9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903adc: xor ebx, ebx */
  ebx = 0;
/* 903ade: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903adf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903ae0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903ae5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_903ae5: guest_badaddr(0x903ae5); return;
}

void f_903b40(void) {
  LOAD_REGS();
L_903b40: /* 903b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903b41: mov esi, ecx */
  esi = ecx;
/* 903b43: call dword ptr [0xcfa47c] */
  esp -= 4; W32(esp, 0x903b49u); SPILL(); f_4e3dff(); if (g_unwind) return; /* Core!??1UPackageMap@@UAE@XZ */ RELOAD();
/* 903b49: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 903b4e: je 0x903b5c */
  if (zf) goto L_903b5c;
L_903b50: /* 903b50: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 903b52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903b53: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x903b59u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 903b59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_903b5c: /* 903b5c: mov eax, esi */
  eax = esi;
/* 903b5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903b5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903b80(void) {
  LOAD_REGS();
L_903b80: /* 903b80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903b81: mov ebp, esp */
  ebp = esp;
/* 903b83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903b85: push 0x9da060 */
  { uint32_t v = 0x9da060u; esp -= 4; W32(esp, v); }
/* 903b8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 903b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903b91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 903b98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 903b9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903b9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903b9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903b9e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 903ba1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 903ba4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903ba5: mov esi, ecx */
  esi = ecx;
/* 903ba7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 903bae: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x903bb4u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 903bb4: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 903bb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903bb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903bb9: call 0x6c6d4d */
  esp -= 4; W32(esp, 0x903bbeu); SPILL(); f_6c6d4d(); if (g_unwind) return; RELOAD();
/* 903bbe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 903bc0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903bc3: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 903bc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903bc7: mov ecx, eax */
  ecx = eax;
/* 903bc9: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x903bccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903bcc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 903bce: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 903bd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903bd2: mov ecx, eax */
  ecx = eax;
/* 903bd4: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x903bd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903bd7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 903bd9: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* 903bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903bdd: mov ecx, eax */
  ecx = eax;
/* 903bdf: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x903be2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903be2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 903be4: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 903bea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903beb: mov ecx, eax */
  ecx = eax;
/* 903bed: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x903bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903bf0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903bf3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903bf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903bf5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903bfc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903bfd: mov esp, ebp */
  esp = ebp;
/* 903bff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903c00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903c03(void) {
  LOAD_REGS();
L_903c03: /* 903c03: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 903c06: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903c0b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 903c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903c0f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 903c12: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903c17u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903c17(); return;
}

void f_903c17(void) {
  LOAD_REGS();
L_903c17: /* 903c17: push 0xa20a4c */
  { uint32_t v = 0xa20a4cu; esp -= 4; W32(esp, v); }
/* 903c1c: push 0xaf1b28 */
  { uint32_t v = 0xaf1b28u; esp -= 4; W32(esp, v); }
/* 903c21: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903c27u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903c27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903c2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903c2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903c2e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903c33u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_903c33: guest_badaddr(0x903c33); return;
}

void f_903c70(void) {
  LOAD_REGS();
L_903c70: /* 903c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903c71: mov ebp, esp */
  ebp = esp;
/* 903c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903c75: push 0x9da070 */
  { uint32_t v = 0x9da070u; esp -= 4; W32(esp, v); }
/* 903c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 903c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 903c88: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 903c8b: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 903c8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903c8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903c90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903c91: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 903c92: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 903c95: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 903c98: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 903c9f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_903ca2: /* 903ca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 903ca4: jl 0x903d5e */
  if ((sf != of)) goto L_903d5e;
L_903caa: /* 903caa: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 903cad: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 903cb0: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 903cb3: test dword ptr [edx + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903cbd: je 0x903ce4 */
  if (zf) goto L_903ce4;
L_903cbf: /* 903cbf: lea edi, [ebx + 0x3ecc] */
  edi = (uint32_t)(ebx + 0x3eccu);
/* 903cc5: xor esi, esi */
  esi = 0;
L_903cc7: /* 903cc7: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 903cca: jge 0x903ce4 */
  if ((sf == of)) goto L_903ce4;
L_903ccc: /* 903ccc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 903cce: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 903cd1: cmp dword ptr [eax + esi*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 903cd4: jne 0x903ce1 */
  if (!zf) goto L_903ce1;
L_903cd6: /* 903cd6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 903cd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903cd9: mov ecx, edi */
  ecx = edi;
/* 903cdb: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x903ce0u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 903ce0: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_903ce1: /* 903ce1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 903ce2: jmp 0x903cc7 */
  goto L_903cc7;
L_903ce4: /* 903ce4: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 903ce7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 903ce8: lea ecx, [ebx + 0x3ed8] */
  ecx = (uint32_t)(ebx + 0x3ed8u);
/* 903cee: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x903cf3u); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 903cf3: mov esi, eax */
  esi = eax;
/* 903cf5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903cf7: je 0x903d1f */
  if (zf) goto L_903d1f;
L_903cf9: /* 903cf9: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 903cfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903cfe: jne 0x903d18 */
  if (!zf) goto L_903d18;
L_903d00: /* 903d00: push 0x111 */
  { uint32_t v = 0x111u; esp -= 4; W32(esp, v); }
/* 903d05: push 0xaf1c0c */
  { uint32_t v = 0xaf1c0cu; esp -= 4; W32(esp, v); }
/* 903d0a: push 0xaf1c1c */
  { uint32_t v = 0xaf1c1cu; esp -= 4; W32(esp, v); }
/* 903d0f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x903d15u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 903d15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_903d18: /* 903d18: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 903d1a: mov ecx, esi */
  ecx = esi;
/* 903d1c: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x903d1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_903d1f: /* 903d1f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 903d22: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 903d25: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 903d26: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 903d29: jmp 0x903ca2 */
  goto L_903ca2;
L_903d5e: /* 903d5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903d61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903d63: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903d6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903d6b: mov esp, ebp */
  esp = ebp;
/* 903d6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903d6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903d2e(void) {
  LOAD_REGS();
L_903d2e: /* 903d2e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 903d31: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903d36: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 903d39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 903d3a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 903d3d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903d42u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903d42(); return;
}

void f_903d42(void) {
  LOAD_REGS();
L_903d42: /* 903d42: push 0xa20a80 */
  { uint32_t v = 0xa20a80u; esp -= 4; W32(esp, v); }
/* 903d47: push 0xaf1c34 */
  { uint32_t v = 0xaf1c34u; esp -= 4; W32(esp, v); }
/* 903d4c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903d52u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903d52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903d55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903d57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903d59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903d5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 903d5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903d61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903d63: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903d6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903d6b: mov esp, ebp */
  esp = ebp;
/* 903d6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903d6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903dd0(void) {
  LOAD_REGS();
L_903dd0: /* 903dd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 903dd4: ret  */
  esp += 4; SPILL(); return;
}

void f_903df0(void) {
  LOAD_REGS();
L_903df0: /* 903df0: xor eax, eax */
  eax = 0;
/* 903df2: ret  */
  esp += 4; SPILL(); return;
}

void f_903e10(void) {
  LOAD_REGS();
L_903e10: /* 903e10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903e30(void) {
  LOAD_REGS();
L_903e30: /* 903e30: xor eax, eax */
  eax = 0;
/* 903e32: ret 4 */
  esp += 8; SPILL(); return;
}

void f_903e50(void) {
  LOAD_REGS();
L_903e50: /* 903e50: xor eax, eax */
  eax = 0;
/* 903e52: ret  */
  esp += 4; SPILL(); return;
}

void f_903e70(void) {
  LOAD_REGS();
L_903e70: /* 903e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903e71: mov ebp, esp */
  ebp = esp;
/* 903e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903e75: push 0x9da080 */
  { uint32_t v = 0x9da080u; esp -= 4; W32(esp, v); }
/* 903e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 903e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 903e88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 903e8b: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 903e8e: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 903e91: mov ecx, dword ptr [ecx + 0x3eec] */
  ecx = R32((uint32_t)(ecx + 0x3eecu));
/* 903e97: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903e99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903e9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903e9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903e9c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 903e9f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 903ea6: je 0x903ef7 */
  if (zf) goto L_903ef7;
L_903ea8: /* 903ea8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 903eaa: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x903eadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 903ead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 903eaf: je 0x903ef7 */
  if (zf) goto L_903ef7;
L_903eb1: /* 903eb1: mov eax, 1 */
  eax = 0x1u;
/* 903eb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903eb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903ec0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903ec1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903ec2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903ec3: mov esp, ebp */
  esp = ebp;
/* 903ec5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903ec6: ret  */
  esp += 4; SPILL(); return;
L_903ef7: /* 903ef7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903efa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903efb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903efc: xor eax, eax */
  eax = 0;
/* 903efe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903f05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903f06: mov esp, ebp */
  esp = ebp;
/* 903f08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903f09: ret  */
  esp += 4; SPILL(); return;
}

void f_903ec7(void) {
  LOAD_REGS();
L_903ec7: /* 903ec7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 903eca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903ecf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 903ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903ed3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 903ed6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903edbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903edb(); return;
}

void f_903edb(void) {
  LOAD_REGS();
L_903edb: /* 903edb: push 0xa20ad0 */
  { uint32_t v = 0xa20ad0u; esp -= 4; W32(esp, v); }
/* 903ee0: push 0xaf21ac */
  { uint32_t v = 0xaf21acu; esp -= 4; W32(esp, v); }
/* 903ee5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903eebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903eeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903eee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903ef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903ef2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903ef7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 903ef7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903efa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903efb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903efc: xor eax, eax */
  eax = 0;
/* 903efe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903f05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903f06: mov esp, ebp */
  esp = ebp;
/* 903f08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903f09: ret  */
  esp += 4; SPILL(); return;
}

void f_903f40(void) {
  LOAD_REGS();
L_903f40: /* 903f40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 903f41: mov ebp, esp */
  ebp = esp;
/* 903f43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 903f45: push 0x9da090 */
  { uint32_t v = 0x9da090u; esp -= 4; W32(esp, v); }
/* 903f4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 903f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903f51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 903f58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 903f5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 903f5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 903f5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 903f5e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 903f61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903f63: push 0xaf22a0 */
  { uint32_t v = 0xaf22a0u; esp -= 4; W32(esp, v); }
/* 903f68: push 0xaf22b0 */
  { uint32_t v = 0xaf22b0u; esp -= 4; W32(esp, v); }
/* 903f6d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 903f74: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x903f7au); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 903f7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903f7e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 903f83: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 903f85: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 903f8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 903f8b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x903f91u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 903f91: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 903f94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903f97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 903f98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 903f99: xor eax, eax */
  eax = 0;
/* 903f9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 903fa2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 903fa3: mov esp, ebp */
  esp = ebp;
/* 903fa5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 903fa6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_903fa9(void) {
  LOAD_REGS();
L_903fa9: /* 903fa9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 903fac: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 903fb1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 903fb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 903fb5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 903fb8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903fbdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_903fbd(); return;
}

void f_903fbd(void) {
  LOAD_REGS();
L_903fbd: /* 903fbd: push 0xa20b18 */
  { uint32_t v = 0xa20b18u; esp -= 4; W32(esp, v); }
/* 903fc2: push 0xaf22cc */
  { uint32_t v = 0xaf22ccu; esp -= 4; W32(esp, v); }
/* 903fc7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x903fcdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 903fcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 903fd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903fd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 903fd4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x903fd9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_903fd9: guest_badaddr(0x903fd9); return;
}

void f_904010(void) {
  LOAD_REGS();
L_904010: /* 904010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 904011: mov ebp, esp */
  ebp = esp;
/* 904013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 904015: push 0x9da0a0 */
  { uint32_t v = 0x9da0a0u; esp -= 4; W32(esp, v); }
/* 90401a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 904020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 904028: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90402b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90402c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90402d: mov esi, ecx */
  esi = ecx;
/* 90402f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 904032: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904034: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 904035: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 904038: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90403f: jne 0x904059 */
  if (!zf) goto L_904059;
L_904041: /* 904041: push 0x146 */
  { uint32_t v = 0x146u; esp -= 4; W32(esp, v); }
/* 904046: push 0xaf22d4 */
  { uint32_t v = 0xaf22d4u; esp -= 4; W32(esp, v); }
/* 90404b: push 0xaf22e4 */
  { uint32_t v = 0xaf22e4u; esp -= 4; W32(esp, v); }
/* 904050: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x904056u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 904056: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_904059: /* 904059: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 90405c: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 90405f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904061: jne 0x90407b */
  if (!zf) goto L_90407b;
L_904063: /* 904063: push 0x147 */
  { uint32_t v = 0x147u; esp -= 4; W32(esp, v); }
/* 904068: push 0xaf22f0 */
  { uint32_t v = 0xaf22f0u; esp -= 4; W32(esp, v); }
/* 90406d: push 0xaf2300 */
  { uint32_t v = 0xaf2300u; esp -= 4; W32(esp, v); }
/* 904072: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x904078u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 904078: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90407b: /* 90407b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 90407e: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 904081: cmp dword ptr [edx + 0x6c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x6cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 904085: jne 0x9040cf */
  if (!zf) goto L_9040cf;
L_904087: /* 904087: lea edi, [esi + 0x9c] */
  edi = (uint32_t)(esi + 0x9cu);
/* 90408d: push 0xcf21f0 */
  { uint32_t v = 0xcf21f0u; esp -= 4; W32(esp, v); }
/* 904092: mov ecx, edi */
  ecx = edi;
/* 904094: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x90409au); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 90409a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90409c: je 0x9040cf */
  if (zf) goto L_9040cf;
L_90409e: /* 90409e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9040a0: push 0xaf231c */
  { uint32_t v = 0xaf231cu; esp -= 4; W32(esp, v); }
/* 9040a5: push 0xaf232c */
  { uint32_t v = 0xaf232cu; esp -= 4; W32(esp, v); }
/* 9040aa: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x9040b0u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 9040b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9040b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9040b4: mov ecx, edi */
  ecx = edi;
/* 9040b6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x9040bcu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 9040bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9040bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9040c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9040c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9040c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9040c9: mov esp, ebp */
  esp = ebp;
/* 9040cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9040cc: ret 4 */
  esp += 8; SPILL(); return;
L_9040cf: /* 9040cf: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 9040d2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9040d5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9040d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9040d8: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x9040deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9040de: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 9040e1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9040e3: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x9040e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9040e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9040ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9040ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9040ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9040f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9040f6: mov esp, ebp */
  esp = ebp;
/* 9040f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9040f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9040fc(void) {
  LOAD_REGS();
L_9040fc: /* 9040fc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9040ff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 904104: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 904107: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904108: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 90410b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x904110u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_904110(); return;
}

void f_904110(void) {
  LOAD_REGS();
L_904110: /* 904110: push 0xa20b70 */
  { uint32_t v = 0xa20b70u; esp -= 4; W32(esp, v); }
/* 904115: push 0xaf2350 */
  { uint32_t v = 0xaf2350u; esp -= 4; W32(esp, v); }
/* 90411a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x904120u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 904120: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904123: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904125: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904127: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90412cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_90412c: guest_badaddr(0x90412c); return;
}

void f_904180(void) {
  LOAD_REGS();
L_904180: /* 904180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 904181: mov ebp, esp */
  ebp = esp;
/* 904183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 904185: push 0x9da0b0 */
  { uint32_t v = 0x9da0b0u; esp -= 4; W32(esp, v); }
/* 90418a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 904190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 904198: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90419b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90419c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90419d: mov esi, ecx */
  esi = ecx;
/* 90419f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9041a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9041a3: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 9041ad: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 9041b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9041b3: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9041b6: push 0xaf2358 */
  { uint32_t v = 0xaf2358u; esp -= 4; W32(esp, v); }
/* 9041bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9041bc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9041c3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x9041c9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 9041c9: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 9041cc: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 9041cf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9041d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9041d4: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x9041dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9041da: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9041dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9041de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9041df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9041e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9041e7: mov esp, ebp */
  esp = ebp;
/* 9041e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9041ea: ret  */
  esp += 4; SPILL(); return;
}

void f_9041eb(void) {
  LOAD_REGS();
L_9041eb: /* 9041eb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9041ee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 9041f3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9041f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9041f7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 9041fa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9041ffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_9041ff(); return;
}

void f_9041ff(void) {
  LOAD_REGS();
L_9041ff: /* 9041ff: push 0xa20ba8 */
  { uint32_t v = 0xa20ba8u; esp -= 4; W32(esp, v); }
/* 904204: push 0xaf2364 */
  { uint32_t v = 0xaf2364u; esp -= 4; W32(esp, v); }
/* 904209: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x90420fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 90420f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904212: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904214: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904216: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90421bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_90421b: guest_badaddr(0x90421b); return;
}

void f_904250(void) {
  LOAD_REGS();
L_904250: /* 904250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904251: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 904255: push 0xcf1a90 */
  { uint32_t v = 0xcf1a90u; esp -= 4; W32(esp, v); }
/* 90425a: mov ecx, esi */
  ecx = esi;
/* 90425c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x904262u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 904262: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904264: jne 0x90427e */
  if (!zf) goto L_90427e;
L_904266: /* 904266: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 90426b: push 0xaf2390 */
  { uint32_t v = 0xaf2390u; esp -= 4; W32(esp, v); }
/* 904270: push 0xaf23d4 */
  { uint32_t v = 0xaf23d4u; esp -= 4; W32(esp, v); }
/* 904275: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x90427bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 90427b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90427e: /* 90427e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 904282: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 904285: jne 0x90428d */
  if (!zf) goto L_90428d;
L_904287: /* 904287: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x90428du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_90428d: /* 90428d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 904293: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 904295: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 904299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90429b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90429c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9042a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9042a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9042a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9042a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9042a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9042a6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x9042acu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 9042ac: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9042af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9042b0: ret  */
  esp += 4; SPILL(); return;
}

void f_9042e0(void) {
  LOAD_REGS();
L_9042e0: /* 9042e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9042e1: mov ebp, esp */
  ebp = esp;
/* 9042e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9042e5: push 0x9da0c0 */
  { uint32_t v = 0x9da0c0u; esp -= 4; W32(esp, v); }
/* 9042ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9042f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9042f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9042f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9042fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9042fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9042ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 904301: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 904304: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90430b: xor eax, eax */
  eax = 0;
/* 90430d: mov esi, 0x8000 */
  esi = 0x8000u;
L_904312: /* 904312: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 904318: cmp eax, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90431b: jge 0x904345 */
  if ((sf == of)) goto L_904345;
L_90431d: /* 90431d: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 904320: lea edi, [eax + eax*8] */
  edi = (uint32_t)(eax + eax*8);
/* 904323: test dword ptr [edx + edi*8 + 0x44], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi*8 + 0x44u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904327: je 0x904342 */
  if (zf) goto L_904342;
L_904329: /* 904329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90432a: call 0x6c8099 */
  esp -= 4; W32(esp, 0x90432fu); SPILL(); f_6c8099(); if (g_unwind) return; RELOAD();
L_90432f: /* 90432f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904332: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904339: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90433a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90433b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90433c: mov esp, ebp */
  esp = ebp;
/* 90433e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90433f: ret 4 */
  esp += 8; SPILL(); return;
L_904342: /* 904342: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 904343: jmp 0x904312 */
  goto L_904312;
L_904345: /* 904345: mov ecx, dword ptr [ecx + 0x3eec] */
  ecx = R32((uint32_t)(ecx + 0x3eecu));
/* 90434b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90434d: je 0x90432f */
  if (zf) goto L_90432f;
L_90434f: /* 90434f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 904351: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 904353: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x904356u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904356: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904359: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90435a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90435b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904362: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 904363: mov esp, ebp */
  esp = ebp;
/* 904365: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904366: ret 4 */
  esp += 8; SPILL(); return;
}

void f_904369(void) {
  LOAD_REGS();
L_904369: /* 904369: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 90436c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 904371: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 904374: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904375: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 904378: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90437du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_90437d(); return;
}

void f_90437d(void) {
  LOAD_REGS();
L_90437d: /* 90437d: push 0xa20be8 */
  { uint32_t v = 0xa20be8u; esp -= 4; W32(esp, v); }
/* 904382: push 0xaf2298 */
  { uint32_t v = 0xaf2298u; esp -= 4; W32(esp, v); }
/* 904387: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x90438du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 90438d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904390: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904392: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904394: call 0x99caf8 */
  esp -= 4; W32(esp, 0x904399u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_904399: guest_badaddr(0x904399); return;
}

void f_9043d0(void) {
  LOAD_REGS();
L_9043d0: /* 9043d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9043d1: mov ebp, esp */
  ebp = esp;
/* 9043d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9043d5: push 0x9da0d9 */
  { uint32_t v = 0x9da0d9u; esp -= 4; W32(esp, v); }
/* 9043da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9043e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9043e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9043e8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9043eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9043ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9043ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9043f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9043f1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 9043f4: mov ebx, ecx */
  ebx = ecx;
/* 9043f6: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 9043fc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9043ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 904400: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 904403: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 90440a: call dword ptr [0xcfacc0] */
  esp -= 4; W32(esp, 0x904410u); SPILL(); f_4e4561(); if (g_unwind) return; /* Core!?IsValidIndex@FArray@@QBEHH@Z */ RELOAD();
/* 904410: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904412: jne 0x90442c */
  if (!zf) goto L_90442c;
L_904414: /* 904414: push 0x109 */
  { uint32_t v = 0x109u; esp -= 4; W32(esp, v); }
/* 904419: push 0xaf21b4 */
  { uint32_t v = 0xaf21b4u; esp -= 4; W32(esp, v); }
/* 90441e: push 0xaf21c4 */
  { uint32_t v = 0xaf21c4u; esp -= 4; W32(esp, v); }
/* 904423: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x904429u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 904429: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90442c: /* 90442c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 904432: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 904435: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 904438: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 90443c: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 90443f: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 904442: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 904445: je 0x9044f8 */
  if (zf) goto L_9044f8;
L_90444b: /* 90444b: mov eax, dword ptr [esi + 0x3ef4] */
  eax = R32((uint32_t)(esi + 0x3ef4u));
/* 904451: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 904454: jle 0x904481 */
  if ((zf || sf != of)) goto L_904481;
L_904456: /* 904456: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 904458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90445a: lea ecx, [esi + 0x3ef0] */
  ecx = (uint32_t)(esi + 0x3ef0u);
/* 904460: call 0x6c18a2 */
  esp -= 4; W32(esp, 0x904465u); SPILL(); f_6c18a2(); if (g_unwind) return; RELOAD();
L_904465: /* 904465: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904466: lea ecx, [ebx - 0x28] */
  ecx = (uint32_t)(ebx + 0xffffffd8u);
/* 904469: call 0x6c155f */
  esp -= 4; W32(esp, 0x90446eu); SPILL(); f_6c155f(); if (g_unwind) return; RELOAD();
L_90446e: /* 90446e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904471: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904478: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 904479: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90447a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90447b: mov esp, ebp */
  esp = ebp;
/* 90447d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90447e: ret 0x10 */
  esp += 20; SPILL(); return;
L_904481: /* 904481: lea edi, [ebx + 0x74] */
  edi = (uint32_t)(ebx + 0x74u);
/* 904484: push 0xcf21ec */
  { uint32_t v = 0xcf21ecu; esp -= 4; W32(esp, v); }
/* 904489: mov ecx, edi */
  ecx = edi;
/* 90448b: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x904491u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 904491: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904493: je 0x90446e */
  if (zf) goto L_90446e;
L_904495: /* 904495: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 904498: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 90449b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x9044a1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 9044a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9044a3: push 0xaf21fc */
  { uint32_t v = 0xaf21fcu; esp -= 4; W32(esp, v); }
/* 9044a8: push 0xaf220c */
  { uint32_t v = 0xaf220cu; esp -= 4; W32(esp, v); }
/* 9044ad: mov esi, eax */
  esi = eax;
/* 9044af: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x9044b5u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 9044b5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9044b8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9044bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9044bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9044bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9044be: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 9044c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9044c2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x9044c8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 9044c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9044cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9044cc: mov ecx, edi */
  ecx = edi;
/* 9044ce: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 9044d2: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x9044d8u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 9044d8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9044db: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 9044df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x9044e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 9044e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9044e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9044e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9044ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9044f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9044f2: mov esp, ebp */
  esp = ebp;
/* 9044f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9044f5: ret 0x10 */
  esp += 20; SPILL(); return;
L_9044f8: /* 9044f8: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 9044fb: cmp esi, dword ptr [ecx + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9044fe: je 0x90451b */
  if (zf) goto L_90451b;
L_904500: /* 904500: push 0x11f */
  { uint32_t v = 0x11fu; esp -= 4; W32(esp, v); }
/* 904505: push 0xaf222c */
  { uint32_t v = 0xaf222cu; esp -= 4; W32(esp, v); }
/* 90450a: push 0xaf223c */
  { uint32_t v = 0xaf223cu; esp -= 4; W32(esp, v); }
/* 90450f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x904515u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 904515: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 904518: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90451b: /* 90451b: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 90451e: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 904520: js 0x90453d */
  if (sf) goto L_90453d;
L_904522: /* 904522: push 0x120 */
  { uint32_t v = 0x120u; esp -= 4; W32(esp, v); }
/* 904527: push 0xaf2264 */
  { uint32_t v = 0xaf2264u; esp -= 4; W32(esp, v); }
/* 90452c: push 0xaf2274 */
  { uint32_t v = 0xaf2274u; esp -= 4; W32(esp, v); }
/* 904531: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x904537u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 904537: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 90453a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90453d: /* 90453d: and dword ptr [eax + 0x44], 0xffff7fff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44u))); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44u), r);
  }
/* 904544: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
/* 904547: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 90454a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90454b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90454d: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
/* 904550: je 0x904465 */
  if (zf) goto L_904465;
L_904556: /* 904556: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 90455c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90455e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90455f: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 904562: call 0x6c5745 */
  esp -= 4; W32(esp, 0x904567u); SPILL(); f_6c5745(); if (g_unwind) return; RELOAD();
/* 904567: jmp 0x904465 */
  goto L_904465;
}

void f_90456c(void) {
  LOAD_REGS();
L_90456c: /* 90456c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 90456f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 904574: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 904577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904578: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 90457b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x904580u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_904580(); return;
}

void f_904580(void) {
  LOAD_REGS();
L_904580: /* 904580: push 0xa20c40 */
  { uint32_t v = 0xa20c40u; esp -= 4; W32(esp, v); }
/* 904585: push 0xaf2290 */
  { uint32_t v = 0xaf2290u; esp -= 4; W32(esp, v); }
/* 90458a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x904590u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 904590: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904593: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904595: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904597: call 0x99caf8 */
  esp -= 4; W32(esp, 0x90459cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_90459c: guest_badaddr(0x90459c); return;
}

void f_904620(void) {
  LOAD_REGS();
L_904620: /* 904620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 904621: mov ebp, esp */
  ebp = esp;
/* 904623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 904625: push 0x9da12d */
  { uint32_t v = 0x9da12du; esp -= 4; W32(esp, v); }
/* 90462a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 904630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 904638: sub esp, 0x2b0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2b0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90463e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90463f: mov ebx, ecx */
  ebx = ecx;
/* 904641: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 904644: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 904647: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904648: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 904649: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 90464c: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90464e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 904651: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 904658: je 0x90466f */
  if (zf) goto L_90466f;
L_90465a: /* 90465a: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 90465c: push 0xaf1e1c */
  { uint32_t v = 0xaf1e1cu; esp -= 4; W32(esp, v); }
/* 904661: push 0xaf1e2c */
  { uint32_t v = 0xaf1e2cu; esp -= 4; W32(esp, v); }
/* 904666: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x90466cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 90466c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90466f: /* 90466f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904672: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 904678: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 90467a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90467b: push 0xaf1e54 */
  { uint32_t v = 0xaf1e54u; esp -= 4; W32(esp, v); }
/* 904680: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 904685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904686: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x90468cu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 90468c: mov esi, dword ptr [0xcfa5b8] */
  esi = R32((uint32_t)(0xcfa5b8u));
/* 904692: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904695: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 904698: push 0xaf1e88 */
  { uint32_t v = 0xaf1e88u; esp -= 4; W32(esp, v); }
/* 90469d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90469e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9046a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9046a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9046a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9046a5: je 0x904763 */
  if (zf) goto L_904763;
L_9046ab: /* 9046ab: mov esi, dword ptr [0xcfaa54] */
  esi = R32((uint32_t)(0xcfaa54u));
/* 9046b1: xor eax, eax */
  eax = 0;
/* 9046b3: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 9046b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9046b7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 9046ba: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 9046bd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9046c0: push 0xaf1e98 */
  { uint32_t v = 0xaf1e98u; esp -= 4; W32(esp, v); }
/* 9046c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9046c6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9046c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9046c8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9046cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9046ce: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 9046d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9046d2: push 0xaf1ea8 */
  { uint32_t v = 0xaf1ea8u; esp -= 4; W32(esp, v); }
/* 9046d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9046d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9046dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9046da: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9046dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9046e0: cmp eax, 0x8b2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8b2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9046e5: jle 0x904714 */
  if ((zf || sf != of)) goto L_904714;
L_9046e7: /* 9046e7: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 9046ea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9046ec: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 9046f1: push 0xcf21dc */
  { uint32_t v = 0xcf21dcu; esp -= 4; W32(esp, v); }
/* 9046f6: push 0xcf21e0 */
  { uint32_t v = 0xcf21e0u; esp -= 4; W32(esp, v); }
/* 9046fb: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x904701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904701: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904704: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90470b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90470c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90470d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90470e: mov esp, ebp */
  esp = ebp;
/* 904710: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904711: ret 8 */
  esp += 12; SPILL(); return;
L_904714: /* 904714: mov esi, dword ptr [0xcfa904] */
  esi = R32((uint32_t)(0xcfa904u));
/* 90471a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90471c: push 0xaf1eb4 */
  { uint32_t v = 0xaf1eb4u; esp -= 4; W32(esp, v); }
/* 904721: push 0xaf1ec4 */
  { uint32_t v = 0xaf1ec4u; esp -= 4; W32(esp, v); }
/* 904726: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x904728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904728: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90472b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90472d: push 0xaf1ee4 */
  { uint32_t v = 0xaf1ee4u; esp -= 4; W32(esp, v); }
/* 904732: push 0xaf1ef4 */
  { uint32_t v = 0xaf1ef4u; esp -= 4; W32(esp, v); }
/* 904737: mov edi, eax */
  edi = eax;
/* 904739: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x90473bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90473b: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 90473e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 904740: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904743: push 0x40c00000 */
  { uint32_t v = 0x40c00000u; esp -= 4; W32(esp, v); }
/* 904748: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 904749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_90474a: /* 90474a: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x904750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_904750: /* 904750: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904753: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90475a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90475b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90475c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90475d: mov esp, ebp */
  esp = ebp;
/* 90475f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904760: ret 8 */
  esp += 12; SPILL(); return;
L_904763: /* 904763: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 904766: push 0xaf1f18 */
  { uint32_t v = 0xaf1f18u; esp -= 4; W32(esp, v); }
/* 90476b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90476c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x90476eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90476e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904771: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904773: je 0x90478a */
  if (zf) goto L_90478a;
L_904775: /* 904775: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 904778: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 90477b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90477d: push 0x41200000 */
  { uint32_t v = 0x41200000u; esp -= 4; W32(esp, v); }
/* 904782: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904783: push 0xaf1f28 */
  { uint32_t v = 0xaf1f28u; esp -= 4; W32(esp, v); }
/* 904788: jmp 0x90474a */
  goto L_90474a;
L_90478a: /* 90478a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 90478d: push 0xaf1f50 */
  { uint32_t v = 0xaf1f50u; esp -= 4; W32(esp, v); }
/* 904792: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904793: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x904795u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904795: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904798: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90479a: je 0x90483a */
  if (zf) goto L_90483a;
L_9047a0: /* 9047a0: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 9047a3: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 9047a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9047a8: je 0x904750 */
  if (zf) goto L_904750;
L_9047aa: /* 9047aa: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 9047ad: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9047af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9047b1: je 0x904750 */
  if (zf) goto L_904750;
L_9047b3: /* 9047b3: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 9047b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9047b8: je 0x904750 */
  if (zf) goto L_904750;
L_9047ba: /* 9047ba: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9047bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9047be: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 9047c1: call 0x6c1870 */
  esp -= 4; W32(esp, 0x9047c6u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 9047c6: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 9047c9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 9047cd: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
L_9047cf: /* 9047cf: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9047d0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9047d2: jl 0x904b09 */
  if ((sf != of)) goto L_904b09;
L_9047d8: /* 9047d8: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 9047db: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 9047dd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9047e0: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 9047e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9047e4: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 9047e7: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x9047edu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 9047ed: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 9047f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9047f1: mov ecx, eax */
  ecx = eax;
/* 9047f3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 9047f7: call dword ptr [0xcfaaa0] */
  esp -= 4; W32(esp, 0x9047fdu); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* 9047fd: push 0xaf1f64 */
  { uint32_t v = 0xaf1f64u; esp -= 4; W32(esp, v); }
/* 904802: mov ecx, eax */
  ecx = eax;
/* 904804: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 904807: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x90480du); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 90480d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 904810: mov edi, eax */
  edi = eax;
/* 904812: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 904816: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x90481cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 90481c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 90481f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 904823: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x904829u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 904829: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90482b: je 0x9047cf */
  if (zf) goto L_9047cf;
L_90482d: /* 90482d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90482f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904830: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 904833: call 0x6cd00d */
  esp -= 4; W32(esp, 0x904838u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 904838: jmp 0x9047cf */
  goto L_9047cf;
L_90483a: /* 90483a: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 90483d: push 0xaf1f78 */
  { uint32_t v = 0xaf1f78u; esp -= 4; W32(esp, v); }
/* 904842: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904843: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x904845u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904845: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90484a: je 0x90494f */
  if (zf) goto L_90494f;
L_904850: /* 904850: mov esi, dword ptr [edi + 0xb4] */
  esi = R32((uint32_t)(edi + 0xb4u));
/* 904856: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 904858: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90485b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90485d: mov ecx, esi */
  ecx = esi;
/* 90485f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x904865u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 904865: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 904867: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 90486a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 90486d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90486f: je 0x90487d */
  if (zf) goto L_90487d;
L_904871: /* 904871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904873: call dword ptr [0xcface0] */
  esp -= 4; W32(esp, 0x904879u); SPILL(); f_4e2b12(); if (g_unwind) return; /* Core!??0FPackageInfo@@QAE@PAVULinkerLoad@@@Z */ RELOAD();
/* 904879: mov esi, eax */
  esi = eax;
/* 90487b: jmp 0x90487f */
  goto L_90487f;
L_90487d: /* 90487d: xor esi, esi */
  esi = 0;
L_90487f: /* 90487f: mov dx, word ptr [0xcf21e4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xcf21e4u))) & 0xffffu);
/* 904886: xor eax, eax */
  eax = 0;
/* 904888: mov word ptr [ebp - 0xbc], dx */
  W16((uint32_t)(ebp + 0xffffff44u), (edx & 0xffffu));
/* 90488f: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 904894: lea edi, [ebp - 0xba] */
  edi = (uint32_t)(ebp + 0xffffff46u);
/* 90489a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 90489c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 90489f: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 9048a1: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 9048a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9048a5: push 0xaf1f84 */
  { uint32_t v = 0xaf1f84u; esp -= 4; W32(esp, v); }
/* 9048aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9048ab: call dword ptr [0xcfaaa8] */
  esp -= 4; W32(esp, 0x9048b1u); SPILL(); f_4e3f35(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFGuid@@@Z */ RELOAD();
/* 9048b1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9048b4: mov ebx, dword ptr [0xcfaa54] */
  ebx = R32((uint32_t)(0xcfaa54u));
/* 9048ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9048bd: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* 9048c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9048c1: push 0xaf1f90 */
  { uint32_t v = 0xaf1f90u; esp -= 4; W32(esp, v); }
/* 9048c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9048c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9048c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9048c9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9048cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9048cf: lea edi, [esi + 0x24] */
  edi = (uint32_t)(esi + 0x24u);
/* 9048d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9048d3: push 0xaf1f9c */
  { uint32_t v = 0xaf1f9cu; esp -= 4; W32(esp, v); }
/* 9048d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9048d9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9048dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9048db: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9048dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9048e0: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 9048e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9048e4: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 9048e7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9048ea: push 0xaf1fa8 */
  { uint32_t v = 0xaf1fa8u; esp -= 4; W32(esp, v); }
/* 9048ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9048f0: call dword ptr [0xcfacdc] */
  esp -= 4; W32(esp, 0x9048f6u); SPILL(); f_4e44cb(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAK@Z */ RELOAD();
/* 9048f6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9048f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9048fc: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9048fe: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 904904: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904905: push 0xaf1fb8 */
  { uint32_t v = 0xaf1fb8u; esp -= 4; W32(esp, v); }
/* 90490a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90490b: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x904911u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 904911: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904914: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904917: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904918: push 0xaf1fc4 */
  { uint32_t v = 0xaf1fc4u; esp -= 4; W32(esp, v); }
/* 90491d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90491e: call dword ptr [0xcfabc8] */
  esp -= 4; W32(esp, 0x904924u); SPILL(); f_4e1a5a(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFString@@@Z */ RELOAD();
/* 904924: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904927: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 90492d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90492e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904930: call dword ptr [0xcfa844] */
  esp -= 4; W32(esp, 0x904936u); SPILL(); f_4e1cb2(); if (g_unwind) return; /* Core!?CreatePackage@UObject@@SAPAVUPackage@@PAV1@PBG@Z */ RELOAD();
/* 904936: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904939: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 90493c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 90493f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904946: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 904947: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 904948: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 904949: mov esp, ebp */
  esp = ebp;
/* 90494b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90494c: ret 8 */
  esp += 12; SPILL(); return;
L_90494f: /* 90494f: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 904952: push 0xaf1fd4 */
  { uint32_t v = 0xaf1fd4u; esp -= 4; W32(esp, v); }
/* 904957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904958: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x90495au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90495a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90495d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90495f: je 0x904987 */
  if (zf) goto L_904987;
L_904961: /* 904961: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904964: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904965: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x90496bu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 90496b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90496e: mov dword ptr [edi + 0xd0], eax */
  W32((uint32_t)(edi + 0xd0u), eax);
/* 904974: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904977: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90497e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90497f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 904980: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 904981: mov esp, ebp */
  esp = ebp;
/* 904983: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904984: ret 8 */
  esp += 12; SPILL(); return;
L_904987: /* 904987: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 90498a: push 0xaf1fe8 */
  { uint32_t v = 0xaf1fe8u; esp -= 4; W32(esp, v); }
/* 90498f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904990: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x904992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904992: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904995: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904997: je 0x904b28 */
  if (zf) goto L_904b28;
L_90499d: /* 90499d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9049a0: mov esi, dword ptr [0xcfaa54] */
  esi = R32((uint32_t)(0xcfaa54u));
/* 9049a6: lea eax, [edi + 0xcc] */
  eax = (uint32_t)(edi + 0xccu);
/* 9049ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9049ad: push 0xaf1ffc */
  { uint32_t v = 0xaf1ffcu; esp -= 4; W32(esp, v); }
/* 9049b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9049b3: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 9049ba: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 9049c1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9049c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9049c3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9049c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9049c9: add edi, 0xc8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9049cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9049d0: push 0xaf2008 */
  { uint32_t v = 0xaf2008u; esp -= 4; W32(esp, v); }
/* 9049d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9049d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9049d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9049d8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9049db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9049de: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 9049e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9049e2: push 0xaf2020 */
  { uint32_t v = 0xaf2020u; esp -= 4; W32(esp, v); }
/* 9049e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9049e8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9049eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9049ea: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9049ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9049f0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9049f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9049f4: push 0xaf2030 */
  { uint32_t v = 0xaf2030u; esp -= 4; W32(esp, v); }
/* 9049f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9049fa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9049fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9049fc: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 9049ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904a02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904a03: call 0x6c9610 */
  esp -= 4; W32(esp, 0x904a08u); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 904a08: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 904a0b: mov dword ptr [eax + 0x180], edx */
  W32((uint32_t)(eax + 0x180u), edx);
/* 904a11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904a14: lea eax, [ebx + 0x1c] */
  eax = (uint32_t)(ebx + 0x1cu);
/* 904a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904a18: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 904a1b: call 0x6c1870 */
  esp -= 4; W32(esp, 0x904a20u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 904a20: push 0xcf21e8 */
  { uint32_t v = 0xcf21e8u; esp -= 4; W32(esp, v); }
/* 904a25: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 904a28: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 904a2c: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x904a32u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 904a32: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
L_904a35: /* 904a35: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 904a36: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 904a38: jl 0x904a86 */
  if ((sf != of)) goto L_904a86;
L_904a3a: /* 904a3a: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* 904a3d: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 904a40: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 904a42: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 904a45: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 904a48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904a49: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 904a4c: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x904a52u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 904a52: push 0xaf203c */
  { uint32_t v = 0xaf203cu; esp -= 4; W32(esp, v); }
/* 904a57: mov ecx, eax */
  ecx = eax;
/* 904a59: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 904a5d: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x904a63u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 904a63: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 904a66: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 904a69: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 904a6d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x904a73u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 904a73: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 904a76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904a78: je 0x904a35 */
  if (zf) goto L_904a35;
L_904a7a: /* 904a7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 904a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904a7d: mov ecx, edi */
  ecx = edi;
/* 904a7f: call 0x6cd00d */
  esp -= 4; W32(esp, 0x904a84u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 904a84: jmp 0x904a35 */
  goto L_904a35;
L_904a86: /* 904a86: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 904a89: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 904a8c: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 904a8f: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 904a92: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 904a98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904a99: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 904a9c: push 0xaf2048 */
  { uint32_t v = 0xaf2048u; esp -= 4; W32(esp, v); }
/* 904aa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904aa2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x904aa4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904aa4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904aa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904aa9: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 904aac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904aad: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 904ab0: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x904ab5u); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 904ab5: mov ecx, eax */
  ecx = eax;
/* 904ab7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 904abb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x904ac1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 904ac1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 904ac4: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 904ac7: mov edx, dword ptr [edx + 0xc8] */
  edx = R32((uint32_t)(edx + 0xc8u));
/* 904acd: mov esi, eax */
  esi = eax;
/* 904acf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 904ad1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904ad2: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x904ad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904ad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904ad9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904ada: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 904add: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 904ae0: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 904ae3: push 0xaf2060 */
  { uint32_t v = 0xaf2060u; esp -= 4; W32(esp, v); }
/* 904ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904ae9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x904aebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904aeb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904aee: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 904af1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 904af5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x904afbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 904afb: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 904afe: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 904b01: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 904b03: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x904b09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_904b09: /* 904b09: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 904b0c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 904b10: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x904b15u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 904b15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904b18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904b1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 904b20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 904b21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 904b22: mov esp, ebp */
  esp = ebp;
/* 904b24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904b25: ret 8 */
  esp += 12; SPILL(); return;
L_904b28: /* 904b28: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 904b2b: push 0xaf2094 */
  { uint32_t v = 0xaf2094u; esp -= 4; W32(esp, v); }
/* 904b30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904b31: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x904b33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904b33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904b36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904b38: je 0x904bfb */
  if (zf) goto L_904bfb;
L_904b3e: /* 904b3e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 904b41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 904b43: add edi, 0x3ef0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3ef0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 904b49: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 904b4b: mov ecx, edi */
  ecx = edi;
/* 904b4d: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x904b53u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 904b53: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 904b55: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904b58: mov ebx, dword ptr [0xcfabc8] */
  ebx = R32((uint32_t)(0xcfabc8u));
/* 904b5e: mov esi, eax */
  esi = eax;
/* 904b60: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 904b63: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 904b66: lea eax, [esi + edx + 4] */
  eax = (uint32_t)(esi + edx + 0x4u);
/* 904b6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904b6b: push 0xaf20a0 */
  { uint32_t v = 0xaf20a0u; esp -= 4; W32(esp, v); }
/* 904b70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904b71: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x904b73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904b73: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 904b75: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904b78: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904b7b: lea eax, [esi + edx + 0x10] */
  eax = (uint32_t)(esi + edx + 0x10u);
/* 904b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904b80: push 0xaf20b0 */
  { uint32_t v = 0xaf20b0u; esp -= 4; W32(esp, v); }
/* 904b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904b86: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x904b88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904b88: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 904b8a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904b8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904b90: lea eax, [esi + edx + 0x1c] */
  eax = (uint32_t)(esi + edx + 0x1cu);
/* 904b94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904b95: push 0xaf20c0 */
  { uint32_t v = 0xaf20c0u; esp -= 4; W32(esp, v); }
/* 904b9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904b9b: call dword ptr [0xcfa184] */
  esp -= 4; W32(esp, 0x904ba1u); SPILL(); f_4e2d83(); if (g_unwind) return; /* Core!?ParseUBOOL@@YAHPBG0AAH@Z */ RELOAD();
/* 904ba1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 904ba3: lea ebx, [esi + edx] */
  ebx = (uint32_t)(esi + edx);
/* 904ba6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904ba9: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 904bac: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x904bb2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 904bb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904bb4: push 0x2002 */
  { uint32_t v = 0x2002u; esp -= 4; W32(esp, v); }
/* 904bb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904bbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904bbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904bbe: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 904bc3: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x904bc9u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 904bc9: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 904bcb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 904bcd: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 904bd0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904bd5: jne 0x904750 */
  if (!zf) goto L_904750;
L_904bdb: /* 904bdb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 904bde: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 904be0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904be1: mov ecx, edi */
  ecx = edi;
/* 904be3: call 0x6c18a2 */
  esp -= 4; W32(esp, 0x904be8u); SPILL(); f_6c18a2(); if (g_unwind) return; RELOAD();
/* 904be8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904beb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904bf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 904bf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 904bf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 904bf5: mov esp, ebp */
  esp = ebp;
/* 904bf7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904bf8: ret 8 */
  esp += 12; SPILL(); return;
L_904bfb: /* 904bfb: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 904bfe: push 0xaf20dc */
  { uint32_t v = 0xaf20dcu; esp -= 4; W32(esp, v); }
/* 904c03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904c04: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x904c06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904c06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904c09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904c0b: je 0x904750 */
  if (zf) goto L_904750;
L_904c11: /* 904c11: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 904c14: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 904c1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 904c1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904c1d: push 0xaf20ec */
  { uint32_t v = 0xaf20ecu; esp -= 4; W32(esp, v); }
/* 904c22: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 904c27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904c28: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x904c2eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 904c2e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904c31: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904c34: lea eax, [ebx + 0x38] */
  eax = (uint32_t)(ebx + 0x38u);
/* 904c37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904c38: push 0xaf211c */
  { uint32_t v = 0xaf211cu; esp -= 4; W32(esp, v); }
/* 904c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904c3e: call dword ptr [0xcfabc8] */
  esp -= 4; W32(esp, 0x904c44u); SPILL(); f_4e1a5a(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFString@@@Z */ RELOAD();
/* 904c44: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 904c47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904c4a: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 904c4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904c4e: push 0xaf212c */
  { uint32_t v = 0xaf212cu; esp -= 4; W32(esp, v); }
/* 904c53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904c54: call dword ptr [0xcfa184] */
  esp -= 4; W32(esp, 0x904c5au); SPILL(); f_4e2d83(); if (g_unwind) return; /* Core!?ParseUBOOL@@YAHPBG0AAH@Z */ RELOAD();
/* 904c5a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 904c5d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904c60: add edi, 0xc8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 904c66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 904c67: push 0xaf2138 */
  { uint32_t v = 0xaf2138u; esp -= 4; W32(esp, v); }
/* 904c6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904c6d: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x904c73u); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 904c73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904c76: xor edi, edi */
  edi = 0;
/* 904c78: jmp 0x904c80 */
  goto L_904c80;
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
