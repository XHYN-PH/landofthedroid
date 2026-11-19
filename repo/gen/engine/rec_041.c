#include "recomp.h"
#include "rec_mod.h"

void f_7bd258(void) {
  LOAD_REGS();
L_7bd258: /* 7bd258: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7bd25b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bd260: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7bd263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd264: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7bd267: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd26cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bd26c(); return;
}

void f_7bd26c(void) {
  LOAD_REGS();
L_7bd26c: /* 7bd26c: push 0xa0da30 */
  { uint32_t v = 0xa0da30u; esp -= 4; W32(esp, v); }
/* 7bd271: push 0xad192c */
  { uint32_t v = 0xad192cu; esp -= 4; W32(esp, v); }
/* 7bd276: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bd27cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bd27c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd27f: xor ebx, ebx */
  ebx = 0;
/* 7bd281: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd282: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd283: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd288u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bd288(); return;
}

void f_7bd288(void) {
  LOAD_REGS();
L_7bd288: /* 7bd288: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7bd28b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bd290: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7bd293: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd294: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7bd297: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd29cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bd29c(); return;
}

void f_7bd29c(void) {
  LOAD_REGS();
L_7bd29c: /* 7bd29c: push 0xa0da14 */
  { uint32_t v = 0xa0da14u; esp -= 4; W32(esp, v); }
/* 7bd2a1: push 0xad1924 */
  { uint32_t v = 0xad1924u; esp -= 4; W32(esp, v); }
/* 7bd2a6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bd2acu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bd2ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd2af: xor ebx, ebx */
  ebx = 0;
/* 7bd2b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd2b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd2b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd2b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7bd2b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bd2bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bd2bc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7bd2be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bd2bf: xor eax, eax */
  eax = 0;
/* 7bd2c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bd2c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bd2c9: mov esp, ebp */
  esp = ebp;
/* 7bd2cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bd2cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bd2cf(void) {
  LOAD_REGS();
L_7bd2cf: /* 7bd2cf: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7bd2d2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bd2d7: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bd2da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd2db: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7bd2de: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd2e3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bd2e3(); return;
}

void f_7bd2e3(void) {
  LOAD_REGS();
L_7bd2e3: /* 7bd2e3: push 0xa0d9d8 */
  { uint32_t v = 0xa0d9d8u; esp -= 4; W32(esp, v); }
/* 7bd2e8: push 0xad1934 */
  { uint32_t v = 0xad1934u; esp -= 4; W32(esp, v); }
/* 7bd2ed: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bd2f3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bd2f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd2f6: xor ebx, ebx */
  ebx = 0;
/* 7bd2f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd2f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd2fa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd2ffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bd2ff: guest_badaddr(0x7bd2ff); return;
}

void f_7bd3d0(void) {
  LOAD_REGS();
L_7bd3d0: /* 7bd3d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bd3d1: mov ebp, esp */
  ebp = esp;
/* 7bd3d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bd3d5: push 0x9cf350 */
  { uint32_t v = 0x9cf350u; esp -= 4; W32(esp, v); }
/* 7bd3da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bd3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd3e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bd3e8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bd3eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bd3ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd3ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bd3f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bd3f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bd3f4: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7bd3f7: mov esi, ecx */
  esi = ecx;
/* 7bd3f9: xor ebx, ebx */
  ebx = 0;
/* 7bd3fb: push 0xad1e84 */
  { uint32_t v = 0xad1e84u; esp -= 4; W32(esp, v); }
/* 7bd400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd401: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7bd404: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7bd407: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7bd40a: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7bd410u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7bd410: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd413: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd415: jne 0x7bd41e */
  if (!zf) goto L_7bd41e;
L_7bd417: /* 7bd417: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_7bd41e: /* 7bd41e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd41f: push 0xad1e8c */
  { uint32_t v = 0xad1e8cu; esp -= 4; W32(esp, v); }
/* 7bd424: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd425: call dword ptr [0xcfa82c] */
  esp -= 4; W32(esp, 0x7bd42bu); SPILL(); f_4e3648(); if (g_unwind) return; /* Core!?LoadPackage@UObject@@SAPAV1@PAV1@PBGK@Z */ RELOAD();
/* 7bd42b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd42e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd430: mov dword ptr [esi + 0x1e8], eax */
  W32((uint32_t)(esi + 0x1e8u), eax);
/* 7bd436: je 0x7bd61c */
  if (zf) goto L_7bd61c;
L_7bd43c: /* 7bd43c: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd43f: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7bd445: jne 0x7bd46c */
  if (!zf) goto L_7bd46c;
L_7bd447: /* 7bd447: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd44c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd44e: push 0xad1ea8 */
  { uint32_t v = 0xad1ea8u; esp -= 4; W32(esp, v); }
/* 7bd453: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd454: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd456u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd456: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd45c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd45e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd461: push 0xad1ef0 */
  { uint32_t v = 0xad1ef0u; esp -= 4; W32(esp, v); }
/* 7bd466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd467: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd469u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd469: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd46c: /* 7bd46c: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7bd46f: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7bd472: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7bd475: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x7bd47bu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 7bd47b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd47d: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7bd480: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 7bd483: jne 0x7bd49d */
  if (!zf) goto L_7bd49d;
L_7bd485: /* 7bd485: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 7bd48a: push 0xac3d40 */
  { uint32_t v = 0xac3d40u; esp -= 4; W32(esp, v); }
/* 7bd48f: push 0xac3d38 */
  { uint32_t v = 0xac3d38u; esp -= 4; W32(esp, v); }
/* 7bd494: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bd49au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bd49a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd49d: /* 7bd49d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7bd4a0: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7bd4a5u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
L_7bd4a5: /* 7bd4a5: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7bd4aa: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7bd4ad: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bd4b0: jge 0x7bd5c5 */
  if ((sf == of)) goto L_7bd5c5;
L_7bd4b6: /* 7bd4b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd4b8: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7bd4bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd4bd: je 0x7bd594 */
  if (zf) goto L_7bd594;
L_7bd4c3: /* 7bd4c3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bd4c6: mov eax, dword ptr [edx + 0x1e8] */
  eax = R32((uint32_t)(edx + 0x1e8u));
/* 7bd4cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd4cd: mov ecx, esi */
  ecx = esi;
/* 7bd4cf: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7bd4d5u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7bd4d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd4d7: je 0x7bd594 */
  if (zf) goto L_7bd594;
L_7bd4dd: /* 7bd4dd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bd4e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd4e2: jne 0x7bd505 */
  if (!zf) goto L_7bd505;
L_7bd4e4: /* 7bd4e4: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7bd4e7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bd4edu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bd4ed: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7bd4f0: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd4f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd4f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd4f8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd4fa: push 0xad1ef4 */
  { uint32_t v = 0xad1ef4u; esp -= 4; W32(esp, v); }
/* 7bd4ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd500: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd502u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd502: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd505: /* 7bd505: xor edi, edi */
  edi = 0;
L_7bd507: /* 7bd507: cmp edi, dword ptr [esi + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bd50a: jge 0x7bd57a */
  if ((sf == of)) goto L_7bd57a;
L_7bd50c: /* 7bd50c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bd50f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd511: jne 0x7bd53d */
  if (!zf) goto L_7bd53d;
L_7bd513: /* 7bd513: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 7bd516: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7bd519: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7bd51c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bd522u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bd522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd523: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd528: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd52a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bd52b: push 0xad1f18 */
  { uint32_t v = 0xad1f18u; esp -= 4; W32(esp, v); }
/* 7bd530: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd531: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7bd537u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7bd537: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd53a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7bd53b: jmp 0x7bd507 */
  goto L_7bd507;
L_7bd53d: /* 7bd53d: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 7bd540: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 7bd543: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7bd546: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bd54cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bd54c: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7bd54f: mov ebx, eax */
  ebx = eax;
/* 7bd551: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bd557u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bd557: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7bd55a: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd560: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd561: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd562: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd563: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd565: push 0xad1f34 */
  { uint32_t v = 0xad1f34u; esp -= 4; W32(esp, v); }
/* 7bd56a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd56b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7bd571u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7bd571: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7bd574: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd577: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7bd578: jmp 0x7bd507 */
  goto L_7bd507;
L_7bd57a: /* 7bd57a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7bd57d: mov esi, dword ptr [esi + 0x44] */
  esi = R32((uint32_t)(esi + 0x44u));
/* 7bd580: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bd583: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7bd589: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7bd58a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bd58c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7bd58f: jle 0x7bd594 */
  if ((zf || sf != of)) goto L_7bd594;
L_7bd591: /* 7bd591: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_7bd594: /* 7bd594: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7bd599: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7bd59c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7bd59d: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bd59f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7bd5a2: jge 0x7bd4a5 */
  if ((sf == of)) goto L_7bd4a5;
L_7bd5a8: /* 7bd5a8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd5aa: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 7bd5ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd5af: je 0x7bd594 */
  if (zf) goto L_7bd594;
L_7bd5b1: /* 7bd5b1: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7bd5b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd5b5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7bd5bbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7bd5bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd5bd: jne 0x7bd4a5 */
  if (!zf) goto L_7bd4a5;
L_7bd5c3: /* 7bd5c3: jmp 0x7bd594 */
  goto L_7bd594;
L_7bd5c5: /* 7bd5c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bd5c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd5ca: jne 0x7bd633 */
  if (!zf) goto L_7bd633;
L_7bd5cc: /* 7bd5cc: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd5d1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd5d3: push 0xad1f48 */
  { uint32_t v = 0xad1f48u; esp -= 4; W32(esp, v); }
/* 7bd5d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd5d9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd5dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd5db: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7bd5de: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd5e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd5e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd5e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd5e9: push 0xad1fb0 */
  { uint32_t v = 0xad1fb0u; esp -= 4; W32(esp, v); }
/* 7bd5ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd5ef: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd5f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd5f1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bd5f4: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd5f9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd5fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd5fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd5ff: push 0xad1ff0 */
  { uint32_t v = 0xad1ff0u; esp -= 4; W32(esp, v); }
/* 7bd604: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd605: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd607: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd60d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd60f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd612: push 0xad2030 */
  { uint32_t v = 0xad2030u; esp -= 4; W32(esp, v); }
/* 7bd617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd618: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd61au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd61a: jmp 0x7bd630 */
  goto L_7bd630;
L_7bd61c: /* 7bd61c: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7bd622: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bd624: push 0xad2098 */
  { uint32_t v = 0xad2098u; esp -= 4; W32(esp, v); }
/* 7bd629: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd62a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7bd630u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
L_7bd630: /* 7bd630: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd633: /* 7bd633: mov eax, dword ptr [0xcfa81c] */
  eax = R32((uint32_t)(0xcfa81cu));
/* 7bd638: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bd63b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bd63c: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 7bd642: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bd643: xor eax, eax */
  eax = 0;
/* 7bd645: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bd64c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bd64d: mov esp, ebp */
  esp = ebp;
/* 7bd64f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bd650: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bd653(void) {
  LOAD_REGS();
L_7bd653: /* 7bd653: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7bd656: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bd65b: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bd65e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd65f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7bd662: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd667u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bd667(); return;
}

void f_7bd667(void) {
  LOAD_REGS();
L_7bd667: /* 7bd667: push 0xa0da68 */
  { uint32_t v = 0xa0da68u; esp -= 4; W32(esp, v); }
/* 7bd66c: push 0xad20e0 */
  { uint32_t v = 0xad20e0u; esp -= 4; W32(esp, v); }
/* 7bd671: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bd677u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bd677: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd67a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd67c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd67e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd683u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bd683: guest_badaddr(0x7bd683); return;
}

void f_7bd740(void) {
  LOAD_REGS();
L_7bd740: /* 7bd740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bd741: mov ebp, esp */
  ebp = esp;
/* 7bd743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bd745: push 0x9cf360 */
  { uint32_t v = 0x9cf360u; esp -= 4; W32(esp, v); }
/* 7bd74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bd750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bd758: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bd75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bd75d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7bd760: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bd761: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bd764: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bd767: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bd768: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bd76b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bd772: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7bd778u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7bd778: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7bd77e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd781: mov ebx, eax */
  ebx = eax;
/* 7bd783: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7bd788: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd78a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd78b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bd78c: push 0xad20e8 */
  { uint32_t v = 0xad20e8u; esp -= 4; W32(esp, v); }
/* 7bd791: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd792: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd794u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd794: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd797: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bd799: jl 0x7bd8d2 */
  if ((sf != of)) goto L_7bd8d2;
L_7bd79f: /* 7bd79f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd7a1: push 0xad211c */
  { uint32_t v = 0xad211cu; esp -= 4; W32(esp, v); }
/* 7bd7a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd7a8: call dword ptr [0xcfa82c] */
  esp -= 4; W32(esp, 0x7bd7aeu); SPILL(); f_4e3648(); if (g_unwind) return; /* Core!?LoadPackage@UObject@@SAPAV1@PAV1@PBGK@Z */ RELOAD();
/* 7bd7ae: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bd7b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd7b4: mov dword ptr [edx + 0x1e8], eax */
  W32((uint32_t)(edx + 0x1e8u), eax);
/* 7bd7ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd7bc: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd7c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd7c3: je 0x7bd8ca */
  if (zf) goto L_7bd8ca;
L_7bd7c9: /* 7bd7c9: push 0xad2138 */
  { uint32_t v = 0xad2138u; esp -= 4; W32(esp, v); }
/* 7bd7ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd7d1: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd7d7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd7d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd7dc: push 0xad2180 */
  { uint32_t v = 0xad2180u; esp -= 4; W32(esp, v); }
/* 7bd7e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd7e2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd7e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd7e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd7e7: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x7bd7edu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 7bd7ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd7ef: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7bd7f2: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 7bd7f9: jne 0x7bd813 */
  if (!zf) goto L_7bd813;
L_7bd7fb: /* 7bd7fb: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 7bd800: push 0xac3d40 */
  { uint32_t v = 0xac3d40u; esp -= 4; W32(esp, v); }
/* 7bd805: push 0xac3d38 */
  { uint32_t v = 0xac3d38u; esp -= 4; W32(esp, v); }
/* 7bd80a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bd810u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bd810: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd813: /* 7bd813: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bd816: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7bd81bu); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7bd81b: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7bd820: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7bd823: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7bd826: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bd828: jge 0x7bd86e */
  if ((sf == of)) goto L_7bd86e;
L_7bd82a: /* 7bd82a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bd82c: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 7bd82f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd831: je 0x7bd813 */
  if (zf) goto L_7bd813;
L_7bd833: /* 7bd833: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bd836: mov ecx, dword ptr [eax + 0x1e8] */
  ecx = R32((uint32_t)(eax + 0x1e8u));
/* 7bd83c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd83d: mov ecx, esi */
  ecx = esi;
/* 7bd83f: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7bd845u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7bd845: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd847: je 0x7bd813 */
  if (zf) goto L_7bd813;
L_7bd849: /* 7bd849: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7bd84c: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* 7bd84f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bd855u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bd855: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 7bd858: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd85a: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd85f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd861: push 0xad2188 */
  { uint32_t v = 0xad2188u; esp -= 4; W32(esp, v); }
/* 7bd866: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd867: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd869: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd86c: jmp 0x7bd813 */
  goto L_7bd813;
L_7bd86e: /* 7bd86e: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd874: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd876: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bd879: mov edx, dword ptr [ecx + 0x1e8] */
  edx = R32((uint32_t)(ecx + 0x1e8u));
/* 7bd87f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd881: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd882: push 0xad21cc */
  { uint32_t v = 0xad21ccu; esp -= 4; W32(esp, v); }
/* 7bd887: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bd889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd88b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd88c: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7bd892u); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7bd892: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bd897: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bd899: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd89c: push 0xad21e8 */
  { uint32_t v = 0xad21e8u; esp -= 4; W32(esp, v); }
/* 7bd8a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd8a2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd8a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd8a4: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd8aa: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd8ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd8af: push 0xad2250 */
  { uint32_t v = 0xad2250u; esp -= 4; W32(esp, v); }
/* 7bd8b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd8b5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd8b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd8b7: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7bd8bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bd8bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd8c2: push 0xad2278 */
  { uint32_t v = 0xad2278u; esp -= 4; W32(esp, v); }
/* 7bd8c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd8c8: jmp 0x7bd8e0 */
  goto L_7bd8e0;
L_7bd8ca: /* 7bd8ca: push 0xad22e0 */
  { uint32_t v = 0xad22e0u; esp -= 4; W32(esp, v); }
/* 7bd8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd8d0: jmp 0x7bd8e0 */
  goto L_7bd8e0;
L_7bd8d2: /* 7bd8d2: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bd8d8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bd8da: push 0xad2328 */
  { uint32_t v = 0xad2328u; esp -= 4; W32(esp, v); }
/* 7bd8df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7bd8e0: /* 7bd8e0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bd8e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd8e2: mov ecx, dword ptr [0xcfa81c] */
  ecx = R32((uint32_t)(0xcfa81cu));
/* 7bd8e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd8eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bd8ec: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 7bd8f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bd8f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bd8f6: xor eax, eax */
  eax = 0;
/* 7bd8f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bd8ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bd900: mov esp, ebp */
  esp = ebp;
/* 7bd902: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bd903: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bd906(void) {
  LOAD_REGS();
L_7bd906: /* 7bd906: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bd909: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bd90e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7bd911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd912: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7bd915: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd91au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bd91a(); return;
}

void f_7bd91a(void) {
  LOAD_REGS();
L_7bd91a: /* 7bd91a: push 0xa0dabc */
  { uint32_t v = 0xa0dabcu; esp -= 4; W32(esp, v); }
/* 7bd91f: push 0xad2358 */
  { uint32_t v = 0xad2358u; esp -= 4; W32(esp, v); }
/* 7bd924: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bd92au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bd92a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd92d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd92f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bd931: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bd936u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bd936: guest_badaddr(0x7bd936); return;
}

void f_7bd9c0(void) {
  LOAD_REGS();
L_7bd9c0: /* 7bd9c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bd9c1: mov esi, ecx */
  esi = ecx;
/* 7bd9c3: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7bd9c9u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7bd9c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd9cb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7bd9cd: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 7bd9d4: jne 0x7bd9ee */
  if (!zf) goto L_7bd9ee;
L_7bd9d6: /* 7bd9d6: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 7bd9db: push 0xac3d40 */
  { uint32_t v = 0xac3d40u; esp -= 4; W32(esp, v); }
/* 7bd9e0: push 0xac3d38 */
  { uint32_t v = 0xac3d38u; esp -= 4; W32(esp, v); }
/* 7bd9e5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bd9ebu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bd9eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd9ee: /* 7bd9ee: mov ecx, esi */
  ecx = esi;
/* 7bd9f0: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7bd9f5u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7bd9f5: mov eax, esi */
  eax = esi;
/* 7bd9f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bd9f8: ret  */
  esp += 4; SPILL(); return;
}

void f_7bda10(void) {
  LOAD_REGS();
L_7bda10: /* 7bda10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bda12: push 0x9cf379 */
  { uint32_t v = 0x9cf379u; esp -= 4; W32(esp, v); }
/* 7bda17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bda1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bda1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bda25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bda26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bda27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bda28: mov esi, ecx */
  esi = ecx;
/* 7bda2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bda2b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7bda2f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7bda32: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bda34: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7bda3a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7bda42: jge 0x7bda58 */
  if ((sf == of)) goto L_7bda58;
L_7bda44: /* 7bda44: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7bda49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7bda4e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7bda53: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bda55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bda55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bda58: /* 7bda58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bda5b: jle 0x7bda71 */
  if ((zf || sf != of)) goto L_7bda71;
L_7bda5d: /* 7bda5d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7bda62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7bda67: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7bda6c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bda6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bda6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bda71: /* 7bda71: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bda73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bda74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bda76: mov ecx, esi */
  ecx = esi;
/* 7bda78: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7bda7eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7bda7e: mov ecx, esi */
  ecx = esi;
/* 7bda80: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7bda88: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7bda8eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7bda8e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7bda92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bda93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bda94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bda95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bda9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bda9f: ret  */
  esp += 4; SPILL(); return;
}

void f_7bdad0(void) {
  LOAD_REGS();
L_7bdad0: /* 7bdad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bdad1: mov ebp, esp */
  ebp = esp;
/* 7bdad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bdad5: push 0x9cf3e0 */
  { uint32_t v = 0x9cf3e0u; esp -= 4; W32(esp, v); }
/* 7bdada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bdae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bdae8: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bdaeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bdaec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bdaed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bdaee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bdaf1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bdaf4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bdafb: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7bdafe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bdb02: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bdb08u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bdb08: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7bdb0b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bdb0f: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bdb15u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bdb15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdb17: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7bdb1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdb1b: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 7bdb1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bdb1f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7bdb23: call dword ptr [0xcfa83c] */
  esp -= 4; W32(esp, 0x7bdb29u); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* 7bdb29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdb2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bdb2e: jne 0x7bdb47 */
  if (!zf) goto L_7bdb47;
L_7bdb30: /* 7bdb30: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7bdb36: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bdb38: push 0xad1968 */
  { uint32_t v = 0xad1968u; esp -= 4; W32(esp, v); }
/* 7bdb3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdb3e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7bdb44u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7bdb44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bdb47: /* 7bdb47: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7bdb4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7bdb50: /* 7bdb50: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7bdb53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bdb54: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7bdb5b: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7bdb61u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7bdb61: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdb64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bdb66: jle 0x7bdb7e */
  if ((zf || sf != of)) goto L_7bdb7e;
L_7bdb68: /* 7bdb68: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7bdb6b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7bdb6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdb6f: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7bdb72: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7bdb78u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7bdb78: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdb7b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_7bdb7e: /* 7bdb7e: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7bdb81: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7bdb87u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7bdb87: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7bdb8a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdb90u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdb90: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7bdb93: mov esi, eax */
  esi = eax;
/* 7bdb95: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdb9bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdb9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bdb9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdb9d: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7bdba0: push 0xad19a4 */
  { uint32_t v = 0xad19a4u; esp -= 4; W32(esp, v); }
/* 7bdba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bdba6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bdba8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bdba8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdbab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdbac: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7bdbaf: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7bdbb3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7bdbb9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7bdbb9: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7bdbbc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7bdbc0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bdbc6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bdbc6: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7bdbc9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdbcfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdbcf: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7bdbd5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7bdbd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bdbd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdbdb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bdbdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdbde: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 7bdbe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdbe2: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7bdbe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bdbe5: xor eax, eax */
  eax = 0;
/* 7bdbe7: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7bdbeb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7bdbee: mov edi, edi */
  edi = edi;
L_7bdbf0: /* 7bdbf0: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7bdbf3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bdbf5: jge 0x7bdf1d */
  if ((sf == of)) goto L_7bdf1d;
L_7bdbfb: /* 7bdbfb: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7bdbfe: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7bdc01: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7bdc04: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdc0au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdc0a: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7bdc0d: mov esi, eax */
  esi = eax;
/* 7bdc0f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdc15u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdc15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bdc16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdc17: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 7bdc1a: push 0xad19b0 */
  { uint32_t v = 0xad19b0u; esp -= 4; W32(esp, v); }
/* 7bdc1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdc20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bdc22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bdc22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdc25: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bdc28: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7bdc2c: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bdc32u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bdc32: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7bdc35: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7bdc39: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bdc3fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bdc3f: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7bdc42: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7bdc46: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdc4cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdc4c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7bdc4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bdc50: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bdc53: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bdc56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bdc57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdc58: call 0x6c9d09 */
  esp -= 4; W32(esp, 0x7bdc5du); SPILL(); f_6c9d09(); if (g_unwind) return; RELOAD();
/* 7bdc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bdc5f: je 0x7bdee4 */
  if (zf) goto L_7bdee4;
L_7bdc65: /* 7bdc65: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bdc68: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 7bdc6f: xor esi, esi */
  esi = 0;
L_7bdc71: /* 7bdc71: cmp esi, dword ptr [ebx + 0x1e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bdc77: jge 0x7bdcac */
  if ((sf == of)) goto L_7bdcac;
L_7bdc79: /* 7bdc79: mov eax, dword ptr [ebx + 0x1dc] */
  eax = R32((uint32_t)(ebx + 0x1dcu));
/* 7bdc7f: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7bdc82: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7bdc85: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdc8bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdc8b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7bdc8e: mov edi, eax */
  edi = eax;
/* 7bdc90: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdc96u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdc96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bdc97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdc98: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7bdc9eu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7bdc9e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdca1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bdca3: jne 0x7bddea */
  if (!zf) goto L_7bddea;
L_7bdca9: /* 7bdca9: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_7bdcac: /* 7bdcac: cmp dword ptr [ebp - 0x18], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bdcb0: jne 0x7bddf0 */
  if (!zf) goto L_7bddf0;
L_7bdcb6: /* 7bdcb6: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7bdcb9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdcbfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdcbf: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7bdcc2: mov esi, eax */
  esi = eax;
/* 7bdcc4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdccau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdcca: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7bdcd0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bdcd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bdcd3: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7bdcd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdcda: push 0xad19bc */
  { uint32_t v = 0xad19bcu; esp -= 4; W32(esp, v); }
/* 7bdcdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bdce0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bdce2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bdce2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdce5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bdce8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdceeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdcee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdcef: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7bdcf4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bdcf6: push 0xad19f0 */
  { uint32_t v = 0xad19f0u; esp -= 4; W32(esp, v); }
/* 7bdcfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bdcfc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bdcfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bdcfe: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bdd01: mov ebx, dword ptr [esi + 0x1e0] */
  ebx = R32((uint32_t)(esi + 0x1e0u));
/* 7bdd07: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdd0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdd0c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bdd0f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7bdd15u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7bdd15: mov esi, dword ptr [esi + 0x1e8] */
  esi = R32((uint32_t)(esi + 0x1e8u));
/* 7bdd1b: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7bdd20: mov ecx, 0xcc5bc8 */
  ecx = 0xcc5bc8u;
/* 7bdd25: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7bdd2bu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7bdd2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bdd2d: jne 0x7bdd47 */
  if (!zf) goto L_7bdd47;
L_7bdd2f: /* 7bdd2f: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7bdd34: push 0xad2948 */
  { uint32_t v = 0xad2948u; esp -= 4; W32(esp, v); }
/* 7bdd39: push 0xad298c */
  { uint32_t v = 0xad298cu; esp -= 4; W32(esp, v); }
/* 7bdd3e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bdd44u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bdd44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bdd47: /* 7bdd47: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bdd4a: jne 0x7bdd54 */
  if (!zf) goto L_7bdd54;
L_7bdd4c: /* 7bdd4c: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7bdd52u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7bdd52: mov esi, eax */
  esi = eax;
L_7bdd54: /* 7bdd54: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7bdd5a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bdd5c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7bdd5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdd61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdd62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdd64: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bdd66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bdd67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bdd68: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7bdd6d: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7bdd73u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7bdd73: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bdd76: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdd79: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bdd7b: add esi, 0x1dc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1dcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bdd81: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bdd83: mov ecx, esi */
  ecx = esi;
/* 7bdd85: mov edi, eax */
  edi = eax;
/* 7bdd87: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7bdd8du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7bdd8d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bdd8f: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7bdd92: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7bdd94: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 7bdd97: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7bdd9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdd9b: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7bdd9e: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7bdda4u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7bdda4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bdda6: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
/* 7bdda9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7bddab: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7bddae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bddb0: mov ecx, edi */
  ecx = edi;
/* 7bddb2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7bddb8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7bddb8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7bddba: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7bddbd: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7bddc0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bddc2: je 0x7bddce */
  if (zf) goto L_7bddce;
L_7bddc4: /* 7bddc4: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bddc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bddc8: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7bddceu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_7bddce: /* 7bddce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7bddd0: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 7bddd3: mov dword ptr [ecx + 0x40], 1 */
  W32((uint32_t)(ecx + 0x40u), 0x1u);
/* 7bddda: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bdddc: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 7bdddf: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7bdde2: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 7bdde5: jmp 0x7bdee4 */
  goto L_7bdee4;
L_7bddea: /* 7bddea: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7bddeb: jmp 0x7bdc71 */
  goto L_7bdc71;
L_7bddf0: /* 7bddf0: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7bddf3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bddf9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bddf9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7bddff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bde00: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bde02: push 0xad1a1c */
  { uint32_t v = 0xad1a1cu; esp -= 4; W32(esp, v); }
/* 7bde07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bde08: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7bde0eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7bde0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bde11: xor esi, esi */
  esi = 0;
L_7bde13: /* 7bde13: mov ecx, dword ptr [ebx + 0x1dc] */
  ecx = R32((uint32_t)(ebx + 0x1dcu));
/* 7bde19: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bde1c: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 7bde1f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bde21: cmp esi, dword ptr [ecx + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bde24: jge 0x7bde59 */
  if ((sf == of)) goto L_7bde59;
L_7bde26: /* 7bde26: mov eax, ecx */
  eax = ecx;
/* 7bde28: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 7bde2b: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7bde2e: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 7bde31: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bde34: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bde3au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bde3a: mov ecx, ebx */
  ecx = ebx;
/* 7bde3c: mov edi, eax */
  edi = eax;
/* 7bde3e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bde44u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bde44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bde45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bde46: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x7bde4cu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 7bde4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bde4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bde51: je 0x7bdec4 */
  if (zf) goto L_7bdec4;
L_7bde53: /* 7bde53: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bde56: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7bde57: jmp 0x7bde13 */
  goto L_7bde13;
L_7bde59: /* 7bde59: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 7bde5b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bde5d: jne 0x7bdec4 */
  if (!zf) goto L_7bdec4;
L_7bde5f: /* 7bde5f: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bde62: mov eax, dword ptr [ebx + 0x1dc] */
  eax = R32((uint32_t)(ebx + 0x1dcu));
/* 7bde68: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7bde6b: mov edx, dword ptr [eax + esi] */
  edx = R32((uint32_t)(eax + esi));
/* 7bde6e: mov edi, dword ptr [edx + 0x38] */
  edi = R32((uint32_t)(edx + 0x38u));
/* 7bde71: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7bde73: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bde76: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bde7cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bde7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bde7d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7bde82: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bde84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bde85: push 0xad1a50 */
  { uint32_t v = 0xad1a50u; esp -= 4; W32(esp, v); }
/* 7bde8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bde8b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7bde91u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7bde91: mov edx, dword ptr [ebx + 0x1dc] */
  edx = R32((uint32_t)(ebx + 0x1dcu));
/* 7bde97: mov esi, dword ptr [esi + edx] */
  esi = R32((uint32_t)(esi + edx));
/* 7bde9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bde9d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7bde9f: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bdea2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bdea4: mov ecx, esi */
  ecx = esi;
/* 7bdea6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7bdeacu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7bdeac: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7bdeae: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7bdeb1: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7bdeb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bdeb6: je 0x7bdee4 */
  if (zf) goto L_7bdee4;
L_7bdeb8: /* 7bdeb8: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bdebb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bdebc: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7bdec2u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7bdec2: jmp 0x7bdee4 */
  goto L_7bdee4;
L_7bdec4: /* 7bdec4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bdec7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bdecdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bdecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdece: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7bded3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bded5: push 0xad1a80 */
  { uint32_t v = 0xad1a80u; esp -= 4; W32(esp, v); }
/* 7bdeda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bdedb: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7bdee1u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7bdee1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bdee4: /* 7bdee4: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7bdee7: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7bdeeb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bdef1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bdef1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7bdef4: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7bdef8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bdefeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bdefe: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7bdf01: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7bdf05: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bdf0bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bdf0b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bdf0e: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7bdf14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bdf15: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7bdf18: jmp 0x7bdbf0 */
  goto L_7bdbf0;
L_7bdf1d: /* 7bdf1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bdf1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdf20: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7bdf23: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7bdf27: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7bdf2cu); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7bdf2c: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7bdf2f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7bdf33: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7bdf39u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7bdf39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdf3b: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 7bdf3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bdf3f: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 7bdf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bdf43: call dword ptr [0xcfa83c] */
  esp -= 4; W32(esp, 0x7bdf49u); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* 7bdf49: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdf4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bdf4e: jne 0x7bdb50 */
  if (!zf) goto L_7bdb50;
L_7bdf54: /* 7bdf54: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7bdf57: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bdf5b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bdf61u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bdf61: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7bdf64: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bdf68: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bdf6eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bdf6e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7bdf71: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7bdf78: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bdf7eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bdf7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bdf81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bdf82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bdf83: xor eax, eax */
  eax = 0;
/* 7bdf85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bdf8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bdf8d: mov esp, ebp */
  esp = ebp;
/* 7bdf8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bdf90: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7bdf93(void) {
  LOAD_REGS();
L_7bdf93: /* 7bdf93: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7bdf96: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bdf9b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7bdf9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bdf9f: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7bdfa2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bdfa7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bdfa7(); return;
}

void f_7bdfa7(void) {
  LOAD_REGS();
L_7bdfa7: /* 7bdfa7: push 0xa0db08 */
  { uint32_t v = 0xa0db08u; esp -= 4; W32(esp, v); }
/* 7bdfac: push 0xad1abc */
  { uint32_t v = 0xad1abcu; esp -= 4; W32(esp, v); }
/* 7bdfb1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bdfb7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bdfb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bdfba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdfbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bdfbe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bdfc3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bdfc3: guest_badaddr(0x7bdfc3); return;
}

void f_7be110(void) {
  LOAD_REGS();
L_7be110: /* 7be110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7be111: mov ebp, esp */
  ebp = esp;
/* 7be113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7be115: push 0x9cf446 */
  { uint32_t v = 0x9cf446u; esp -= 4; W32(esp, v); }
/* 7be11a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7be120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7be128: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7be12b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7be12c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7be12d: mov ebx, ecx */
  ebx = ecx;
/* 7be12f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7be130: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7be133: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7be136: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7be13d: lea ecx, [ebx + 0x1dc] */
  ecx = (uint32_t)(ebx + 0x1dcu);
/* 7be143: xor eax, eax */
  eax = 0;
L_7be145: /* 7be145: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be148: jge 0x7be14d */
  if ((sf == of)) goto L_7be14d;
L_7be14a: /* 7be14a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7be14b: jmp 0x7be145 */
  goto L_7be145;
L_7be14d: /* 7be14d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be14f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7be151: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7be157u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7be157: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7be15a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7be15c: jne 0x7be214 */
  if (!zf) goto L_7be214;
L_7be162: /* 7be162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be164: push 0xad1ac4 */
  { uint32_t v = 0xad1ac4u; esp -= 4; W32(esp, v); }
/* 7be169: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be16b: call dword ptr [0xcfa82c] */
  esp -= 4; W32(esp, 0x7be171u); SPILL(); f_4e3648(); if (g_unwind) return; /* Core!?LoadPackage@UObject@@SAPAV1@PAV1@PBGK@Z */ RELOAD();
/* 7be171: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be174: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7be176: mov dword ptr [ebx + 0x1e8], eax */
  W32((uint32_t)(ebx + 0x1e8u), eax);
/* 7be17c: je 0x7be214 */
  if (zf) goto L_7be214;
L_7be182: /* 7be182: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7be187: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7be189: push 0xad1ae0 */
  { uint32_t v = 0xad1ae0u; esp -= 4; W32(esp, v); }
/* 7be18e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be18f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7be195u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7be195: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be198: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x7be19eu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 7be19e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7be1a0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7be1a3: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 7be1aa: jne 0x7be1c4 */
  if (!zf) goto L_7be1c4;
L_7be1ac: /* 7be1ac: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 7be1b1: push 0xac3d40 */
  { uint32_t v = 0xac3d40u; esp -= 4; W32(esp, v); }
/* 7be1b6: push 0xac3d38 */
  { uint32_t v = 0xac3d38u; esp -= 4; W32(esp, v); }
/* 7be1bb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7be1c1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7be1c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7be1c4: /* 7be1c4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7be1c7: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7be1ccu); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7be1cc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7be1d1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7be1d4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7be1d7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be1d9: jge 0x7be27a */
  if ((sf == of)) goto L_7be27a;
L_7be1df: /* 7be1df: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7be1e1: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 7be1e4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7be1e6: je 0x7be1c4 */
  if (zf) goto L_7be1c4;
L_7be1e8: /* 7be1e8: mov eax, dword ptr [ebx + 0x1e8] */
  eax = R32((uint32_t)(ebx + 0x1e8u));
/* 7be1ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be1ef: mov ecx, edi */
  ecx = edi;
/* 7be1f1: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7be1f7u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7be1f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7be1f9: je 0x7be1c4 */
  if (zf) goto L_7be1c4;
L_7be1fb: /* 7be1fb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7be1fd: lea esi, [ebx + 0x1dc] */
  esi = (uint32_t)(ebx + 0x1dcu);
/* 7be203: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7be205: mov ecx, esi */
  ecx = esi;
/* 7be207: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7be20du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7be20d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7be20f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7be212: jmp 0x7be1c4 */
  goto L_7be1c4;
L_7be214: /* 7be214: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7be21a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7be21c: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7be222: push 0xad1b28 */
  { uint32_t v = 0xad1b28u; esp -= 4; W32(esp, v); }
/* 7be227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be228: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be22au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be22a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be22d: push 0xad1b68 */
  { uint32_t v = 0xad1b68u; esp -= 4; W32(esp, v); }
/* 7be232: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be234: call dword ptr [0xcfa844] */
  esp -= 4; W32(esp, 0x7be23au); SPILL(); f_4e1cb2(); if (g_unwind) return; /* Core!?CreatePackage@UObject@@SAPAVUPackage@@PAV1@PBG@Z */ RELOAD();
/* 7be23a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be23d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7be23f: mov dword ptr [ebx + 0x1e8], eax */
  W32((uint32_t)(ebx + 0x1e8u), eax);
/* 7be245: jne 0x7be27a */
  if (!zf) goto L_7be27a;
L_7be247: /* 7be247: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7be24d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be24f: push 0xad1b84 */
  { uint32_t v = 0xad1b84u; esp -= 4; W32(esp, v); }
/* 7be254: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be255: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be257u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be257: mov eax, dword ptr [0xcfa81c] */
  eax = R32((uint32_t)(0xcfa81cu));
/* 7be25c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be25f: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_7be265: /* 7be265: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7be268: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7be269: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7be26a: xor eax, eax */
  eax = 0;
/* 7be26c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7be273: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7be274: mov esp, ebp */
  esp = ebp;
/* 7be276: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7be277: ret 8 */
  esp += 12; SPILL(); return;
L_7be27a: /* 7be27a: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7be280: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7be282: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be284: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7be286: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be288: push 0xad1b94 */
  { uint32_t v = 0xad1b94u; esp -= 4; W32(esp, v); }
/* 7be28d: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7be290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be291: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7be294u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be294: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7be297: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 7be29d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7be2a1: xor esi, esi */
  esi = 0;
L_7be2a3: /* 7be2a3: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be2a6: jge 0x7be2f5 */
  if ((sf == of)) goto L_7be2f5;
L_7be2a8: /* 7be2a8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7be2ab: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 7be2ae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7be2b1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be2b7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be2b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be2b8: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7be2bb: push 0xad1ba4 */
  { uint32_t v = 0xad1ba4u; esp -= 4; W32(esp, v); }
/* 7be2c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be2c1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be2c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be2c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be2c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7be2c7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7be2ca: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7be2cd: mov ecx, esp */
  ecx = esp;
/* 7be2cf: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7be2d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be2d3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7be2d7: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7be2ddu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7be2dd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7be2e0: call 0x6c7199 */
  esp -= 4; W32(esp, 0x7be2e5u); SPILL(); f_6c7199(); if (g_unwind) return; RELOAD();
/* 7be2e5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7be2e8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7be2ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be2f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be2f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7be2f3: jmp 0x7be2a3 */
  goto L_7be2a3;
L_7be2f5: /* 7be2f5: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7be2fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7be2fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be2fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7be300: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be302: push 0xad1bb4 */
  { uint32_t v = 0xad1bb4u; esp -= 4; W32(esp, v); }
/* 7be307: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7be30a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be30b: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7be30eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be30e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be30f: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7be312: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7be316: call 0x6caf0b */
  esp -= 4; W32(esp, 0x7be31bu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 7be31b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7be31e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be31f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be321: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7be324: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7be328: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7be32du); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7be32d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7be330: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7be334: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7be33au); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7be33a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7be33d: xor esi, esi */
  esi = 0;
/* 7be33f: mov bl, 5 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5u) & 0xffu);
L_7be341: /* 7be341: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be344: jge 0x7be398 */
  if ((sf == of)) goto L_7be398;
L_7be346: /* 7be346: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7be349: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7be34c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7be34f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be355u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be356: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7be359: push 0xad1bcc */
  { uint32_t v = 0xad1bccu; esp -= 4; W32(esp, v); }
/* 7be35e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be35f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7be365u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7be365: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be368: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7be36b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be36c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7be36f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7be372: mov ecx, esp */
  ecx = esp;
/* 7be374: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7be377: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be378: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7be37b: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7be381u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7be381: mov ecx, edi */
  ecx = edi;
/* 7be383: call 0x6c7199 */
  esp -= 4; W32(esp, 0x7be388u); SPILL(); f_6c7199(); if (g_unwind) return; RELOAD();
/* 7be388: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7be38b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7be38f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be395u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be395: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7be396: jmp 0x7be341 */
  goto L_7be341;
L_7be398: /* 7be398: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7be39e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be3a0: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7be3a6: push 0xad1be8 */
  { uint32_t v = 0xad1be8u; esp -= 4; W32(esp, v); }
/* 7be3ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be3ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be3aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be3ae: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* 7be3b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be3b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be3b8: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7be3bd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7be3bf: push 0xad1c50 */
  { uint32_t v = 0xad1c50u; esp -= 4; W32(esp, v); }
/* 7be3c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be3c5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be3c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be3c7: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7be3cd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7be3cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be3d2: push 0xad1c90 */
  { uint32_t v = 0xad1c90u; esp -= 4; W32(esp, v); }
/* 7be3d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be3d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be3dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be3da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be3dd: push 0xb7d810 */
  { uint32_t v = 0xb7d810u; esp -= 4; W32(esp, v); }
/* 7be3e2: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7be3e5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7be3ebu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7be3eb: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 7be3ee: xor eax, eax */
  eax = 0;
/* 7be3f0: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7be3f4: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7be3f7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7be3fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7be400: /* 7be400: cmp eax, dword ptr [edi + 0x1e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be406: jge 0x7be4d5 */
  if ((sf == of)) goto L_7be4d5;
L_7be40c: /* 7be40c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7be40f: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 7be415: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 7be418: lea esi, [edi + 0x28] */
  esi = (uint32_t)(edi + 0x28u);
/* 7be41b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7be41c: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7be41f: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7be425u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7be425: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7be428: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be42eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be42e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be42f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7be432: push 0xad1cf8 */
  { uint32_t v = 0xad1cf8u; esp -= 4; W32(esp, v); }
/* 7be437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be438: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7be43eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7be43e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be442: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7be445: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7be449: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7be44fu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7be44f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7be452: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7be456: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be45cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be45c: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 7be45f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be461: jle 0x7be466 */
  if ((zf || sf != of)) goto L_7be466;
L_7be463: /* 7be463: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_7be466: /* 7be466: mov ecx, esi */
  ecx = esi;
/* 7be468: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be46eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be46e: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 7be471: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 7be474: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7be47a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be47b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be47c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be47d: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7be482: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7be484: push 0xad1d10 */
  { uint32_t v = 0xad1d10u; esp -= 4; W32(esp, v); }
/* 7be489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be48a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be48cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be48c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be48f: xor esi, esi */
  esi = 0;
L_7be491: /* 7be491: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be494: jge 0x7be4bd */
  if ((sf == of)) goto L_7be4bd;
L_7be496: /* 7be496: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7be499: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7be49c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7be49f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be4a5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be4a5: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7be4ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be4ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7be4af: push 0xad1d64 */
  { uint32_t v = 0xad1d64u; esp -= 4; W32(esp, v); }
/* 7be4b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be4b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be4b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be4b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be4ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7be4bb: jmp 0x7be491 */
  goto L_7be491;
L_7be4bd: /* 7be4bd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7be4c0: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7be4c6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7be4c9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7be4cc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7be4cd: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7be4d0: jmp 0x7be400 */
  goto L_7be400;
L_7be4d5: /* 7be4d5: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7be4da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7be4dc: push 0xad1d88 */
  { uint32_t v = 0xad1d88u; esp -= 4; W32(esp, v); }
/* 7be4e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be4e2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be4e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be4e4: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7be4ea: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7be4ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be4ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7be4f0: push 0xad1df0 */
  { uint32_t v = 0xad1df0u; esp -= 4; W32(esp, v); }
/* 7be4f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be4f6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be4f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be4f8: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7be4fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be500: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be503: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be504: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 7be507: push 0xad1e44 */
  { uint32_t v = 0xad1e44u; esp -= 4; W32(esp, v); }
/* 7be50c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be50d: call dword ptr [0xcfa840] */
  esp -= 4; W32(esp, 0x7be513u); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 7be513: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7be519: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be51b: mov eax, dword ptr [edi + 0x1e8] */
  eax = R32((uint32_t)(edi + 0x1e8u));
/* 7be521: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be526: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be527: push 0xad1e60 */
  { uint32_t v = 0xad1e60u; esp -= 4; W32(esp, v); }
/* 7be52c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7be52e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be531: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7be537u); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7be537: mov ecx, dword ptr [0xcfa81c] */
  ecx = R32((uint32_t)(0xcfa81cu));
/* 7be53d: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 7be543: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be546: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7be549: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7be54d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be553u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be553: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7be556: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be557: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be559: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7be55c: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7be560: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7be565u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7be565: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7be568: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7be56c: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7be572u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7be572: jmp 0x7be265 */
  goto L_7be265;
}

void f_7be577(void) {
  LOAD_REGS();
L_7be577: /* 7be577: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7be57a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7be57f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7be582: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be583: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7be586: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7be58bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7be58b(); return;
}

void f_7be58b(void) {
  LOAD_REGS();
L_7be58b: /* 7be58b: push 0xa0db68 */
  { uint32_t v = 0xa0db68u; esp -= 4; W32(esp, v); }
/* 7be590: push 0xad1e7c */
  { uint32_t v = 0xad1e7cu; esp -= 4; W32(esp, v); }
/* 7be595: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7be59bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7be59b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be59e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be5a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be5a2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7be5a7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7be5a7: guest_badaddr(0x7be5a7); return;
}

void f_7be6e0(void) {
  LOAD_REGS();
L_7be6e0: /* 7be6e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7be6e1: mov ebp, esp */
  ebp = esp;
/* 7be6e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7be6e5: push 0x9cf4b7 */
  { uint32_t v = 0x9cf4b7u; esp -= 4; W32(esp, v); }
/* 7be6ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7be6f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be6f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7be6f8: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7be6fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7be6fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7be6ff: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7be705: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7be706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7be707: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7be70a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7be70d: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7be713: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be716: push 0xad24f8 */
  { uint32_t v = 0xad24f8u; esp -= 4; W32(esp, v); }
/* 7be71b: xor edi, edi */
  edi = 0;
/* 7be71d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be71e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7be721: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be723u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be723: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7be728: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7be72a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be72d: push 0xad2534 */
  { uint32_t v = 0xad2534u; esp -= 4; W32(esp, v); }
/* 7be732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be733: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be735u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be735: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be738: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7be73b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7be741u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7be741: mov esi, dword ptr [0xcfa83c] */
  esi = R32((uint32_t)(0xcfa83cu));
/* 7be747: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7be748: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 7be74b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be74c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7be74f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be750: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7be754: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be756u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be756: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be759: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7be75b: jne 0x7be770 */
  if (!zf) goto L_7be770;
L_7be75d: /* 7be75d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7be763: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be765: push 0xad2538 */
  { uint32_t v = 0xad2538u; esp -= 4; W32(esp, v); }
/* 7be76a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be76b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be76du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be76d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7be770: /* 7be770: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7be773: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7be779u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7be779: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7be77a: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7be77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be77e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7be781: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be782: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7be786: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7be788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be788: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be78b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7be78d: jne 0x7be7a2 */
  if (!zf) goto L_7be7a2;
L_7be78f: /* 7be78f: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7be795: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7be797: push 0xad2574 */
  { uint32_t v = 0xad2574u; esp -= 4; W32(esp, v); }
/* 7be79c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be79d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be79fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be79f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7be7a2: /* 7be7a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7be7a5: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7be7a8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7be7ab: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7be7ae: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be7b4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be7b4: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7be7b7: mov esi, eax */
  esi = eax;
/* 7be7b9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be7bfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be7bf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7be7c2: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7be7c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be7c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7be7ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be7cb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7be7cd: push 0xad25a4 */
  { uint32_t v = 0xad25a4u; esp -= 4; W32(esp, v); }
/* 7be7d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be7d3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be7d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be7d5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be7d8: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7be7db: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be7e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be7e1: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7be7e7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7be7e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7be7eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7be7ec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7be7ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be7ef: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7be7f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be7f3: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7be7f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be7f6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_7be7fa: /* 7be7fa: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7be7fd: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7be7ff: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7be802: jge 0x7be943 */
  if ((sf == of)) goto L_7be943;
L_7be808: /* 7be808: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7be80b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7be811u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7be811: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7be814: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7be818: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7be81eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7be81e: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7be821: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7be824: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7be827: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7be829: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7be82d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be833u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be833: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 7be836: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be837: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7be83a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be83b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7be83e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be83f: call 0x6c9d09 */
  esp -= 4; W32(esp, 0x7be844u); SPILL(); f_6c9d09(); if (g_unwind) return; RELOAD();
/* 7be844: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7be846: je 0x7be904 */
  if (zf) goto L_7be904;
L_7be84c: /* 7be84c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7be84f: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7be851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7be852: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7be855: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7be85bu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7be85b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7be85d: push 0xad25c4 */
  { uint32_t v = 0xad25c4u; esp -= 4; W32(esp, v); }
/* 7be862: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7be865: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7be869: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7be86fu); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7be86f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7be872: je 0x7be8a3 */
  if (zf) goto L_7be8a3;
L_7be874: /* 7be874: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7be879: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7be87a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be87b: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 7be87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be87f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7be882: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7be888u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7be888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be889: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7be88c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7be890: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7be896u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7be896: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7be899: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7be89d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be8a3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7be8a3: /* 7be8a3: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7be8a6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be8acu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be8ac: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7be8af: mov ebx, eax */
  ebx = eax;
/* 7be8b1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be8b7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be8b7: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7be8ba: mov edi, eax */
  edi = eax;
/* 7be8bc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be8c2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be8c2: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7be8c5: mov esi, eax */
  esi = eax;
/* 7be8c7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be8cdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be8cd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7be8d0: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7be8d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7be8d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7be8d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7be8d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7be8da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be8db: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7be8dd: push 0xad25c8 */
  { uint32_t v = 0xad25c8u; esp -= 4; W32(esp, v); }
/* 7be8e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be8e3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7be8e9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7be8e9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be8ec: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7be8ef: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7be8f3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be8f9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be8f9: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7be8ff: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7be902: jmp 0x7be923 */
  goto L_7be923;
L_7be904: /* 7be904: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7be907: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7be909: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7be90fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7be90f: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7be915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be916: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7be918: push 0xad267c */
  { uint32_t v = 0xad267cu; esp -= 4; W32(esp, v); }
/* 7be91d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be91e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7be920u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7be920: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7be923: /* 7be923: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7be926: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7be92a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be930u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be930: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7be933: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7be937: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be93du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be93d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7be93e: jmp 0x7be7fa */
  goto L_7be7fa;
L_7be943: /* 7be943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7be944: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be946: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7be949: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7be94d: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7be952u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7be952: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7be955: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7be959: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7be95fu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7be95f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7be962: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7be966: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be96cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be96c: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7be96f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7be973: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7be979u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7be979: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7be97c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7be97d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7be97e: xor eax, eax */
  eax = 0;
/* 7be980: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7be987: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7be988: mov esp, ebp */
  esp = ebp;
/* 7be98a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7be98b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7be98e(void) {
  LOAD_REGS();
L_7be98e: /* 7be98e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7be991: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7be996: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7be999: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7be99a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7be99d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7be9a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7be9a2(); return;
}

void f_7be9a2(void) {
  LOAD_REGS();
L_7be9a2: /* 7be9a2: push 0xa0dbd0 */
  { uint32_t v = 0xa0dbd0u; esp -= 4; W32(esp, v); }
/* 7be9a7: push 0xad26a0 */
  { uint32_t v = 0xad26a0u; esp -= 4; W32(esp, v); }
/* 7be9ac: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7be9b2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7be9b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7be9b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be9b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7be9b9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7be9beu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7be9be: guest_badaddr(0x7be9be); return;
}

void f_7bea80(void) {
  LOAD_REGS();
L_7bea80: /* 7bea80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bea81: mov ebp, esp */
  ebp = esp;
/* 7bea83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bea85: push 0x9cf4e9 */
  { uint32_t v = 0x9cf4e9u; esp -= 4; W32(esp, v); }
/* 7bea8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bea90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bea91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bea98: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bea9b: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7beaa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7beaa1: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7beaa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7beaa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7beaa9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7beaac: mov edi, ecx */
  edi = ecx;
/* 7beaae: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7beab0: push 0xad26a8 */
  { uint32_t v = 0xad26a8u; esp -= 4; W32(esp, v); }
/* 7beab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7beab6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7beabd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7beabfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7beabf: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7beac5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7beac7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beaca: push 0xad2710 */
  { uint32_t v = 0xad2710u; esp -= 4; W32(esp, v); }
/* 7beacf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bead0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bead2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bead2: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7bead8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7beada: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beadd: push 0xad2748 */
  { uint32_t v = 0xad2748u; esp -= 4; W32(esp, v); }
/* 7beae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7beae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7beae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7beae5: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7beaea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7beaec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beaef: push 0xad27b0 */
  { uint32_t v = 0xad27b0u; esp -= 4; W32(esp, v); }
/* 7beaf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7beaf5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7beaf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7beaf7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beafa: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7beafd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7beb03u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7beb03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7beb05: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7beb08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7beb09: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7beb0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7beb0d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7beb11: call dword ptr [0xcfa83c] */
  esp -= 4; W32(esp, 0x7beb17u); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* 7beb17: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beb1a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7beb1d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7beb23u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7beb23: mov esi, dword ptr [0xcfa340] */
  esi = R32((uint32_t)(0xcfa340u));
/* 7beb29: push 0xad27b4 */
  { uint32_t v = 0xad27b4u; esp -= 4; W32(esp, v); }
/* 7beb2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7beb2f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7beb31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7beb31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beb34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7beb36: jne 0x7beb49 */
  if (!zf) goto L_7beb49;
L_7beb38: /* 7beb38: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7beb3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7beb3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7beb3d: mov ecx, edi */
  ecx = edi;
/* 7beb3f: call 0x6c2ee6 */
  esp -= 4; W32(esp, 0x7beb44u); SPILL(); f_6c2ee6(); if (g_unwind) return; RELOAD();
/* 7beb44: jmp 0x7bec48 */
  goto L_7bec48;
L_7beb49: /* 7beb49: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7beb4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7beb52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7beb52: push 0xad27bc */
  { uint32_t v = 0xad27bcu; esp -= 4; W32(esp, v); }
/* 7beb57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7beb58: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7beb5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7beb5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beb5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7beb5f: jne 0x7beb73 */
  if (!zf) goto L_7beb73;
L_7beb61: /* 7beb61: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7beb64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7beb65: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7beb67: mov ecx, edi */
  ecx = edi;
/* 7beb69: call 0x6c2ee6 */
  esp -= 4; W32(esp, 0x7beb6eu); SPILL(); f_6c2ee6(); if (g_unwind) return; RELOAD();
/* 7beb6e: jmp 0x7bec48 */
  goto L_7bec48;
L_7beb73: /* 7beb73: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7beb76: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7beb7cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7beb7c: push 0xad27c4 */
  { uint32_t v = 0xad27c4u; esp -= 4; W32(esp, v); }
/* 7beb81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7beb82: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7beb84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7beb84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beb87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7beb89: jne 0x7beb9b */
  if (!zf) goto L_7beb9b;
L_7beb8b: /* 7beb8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7beb8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7beb8f: mov ecx, edi */
  ecx = edi;
/* 7beb91: call 0x6c325b */
  esp -= 4; W32(esp, 0x7beb96u); SPILL(); f_6c325b(); if (g_unwind) return; RELOAD();
/* 7beb96: jmp 0x7bec48 */
  goto L_7bec48;
L_7beb9b: /* 7beb9b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7beb9e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7beba4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7beba4: push 0xad27cc */
  { uint32_t v = 0xad27ccu; esp -= 4; W32(esp, v); }
/* 7beba9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bebaa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bebacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bebac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bebaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bebb1: jne 0x7bebc3 */
  if (!zf) goto L_7bebc3;
L_7bebb3: /* 7bebb3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7bebb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bebb7: mov ecx, edi */
  ecx = edi;
/* 7bebb9: call 0x6c5e84 */
  esp -= 4; W32(esp, 0x7bebbeu); SPILL(); f_6c5e84(); if (g_unwind) return; RELOAD();
/* 7bebbe: jmp 0x7bec48 */
  goto L_7bec48;
L_7bebc3: /* 7bebc3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bebc6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bebccu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bebcc: push 0xad27d4 */
  { uint32_t v = 0xad27d4u; esp -= 4; W32(esp, v); }
/* 7bebd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bebd2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bebd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bebd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bebd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bebd9: jne 0x7bebe8 */
  if (!zf) goto L_7bebe8;
L_7bebdb: /* 7bebdb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7bebde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bebdf: mov ecx, edi */
  ecx = edi;
/* 7bebe1: call 0x6c1811 */
  esp -= 4; W32(esp, 0x7bebe6u); SPILL(); f_6c1811(); if (g_unwind) return; RELOAD();
/* 7bebe6: jmp 0x7bec48 */
  goto L_7bec48;
L_7bebe8: /* 7bebe8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bebeb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bebf1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bebf1: push 0xad27dc */
  { uint32_t v = 0xad27dcu; esp -= 4; W32(esp, v); }
/* 7bebf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bebf7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bebf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bebf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bebfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bebfe: jne 0x7bec0d */
  if (!zf) goto L_7bec0d;
L_7bec00: /* 7bec00: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bec03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bec04: mov ecx, edi */
  ecx = edi;
/* 7bec06: call 0x6c1631 */
  esp -= 4; W32(esp, 0x7bec0bu); SPILL(); f_6c1631(); if (g_unwind) return; RELOAD();
/* 7bec0b: jmp 0x7bec48 */
  goto L_7bec48;
L_7bec0d: /* 7bec0d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bec10: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bec16u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bec16: push 0xad27e4 */
  { uint32_t v = 0xad27e4u; esp -= 4; W32(esp, v); }
/* 7bec1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bec1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bec1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bec1e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bec21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bec23: jne 0x7bec32 */
  if (!zf) goto L_7bec32;
L_7bec25: /* 7bec25: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7bec28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bec29: mov ecx, edi */
  ecx = edi;
/* 7bec2b: call 0x6cb195 */
  esp -= 4; W32(esp, 0x7bec30u); SPILL(); f_6cb195(); if (g_unwind) return; RELOAD();
/* 7bec30: jmp 0x7bec48 */
  goto L_7bec48;
L_7bec32: /* 7bec32: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7bec35: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bec3a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bec3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bec3d: push 0xad27ec */
  { uint32_t v = 0xad27ecu; esp -= 4; W32(esp, v); }
/* 7bec42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bec43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bec45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bec45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bec48: /* 7bec48: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bec4b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bec4f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bec55u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bec55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bec58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bec59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bec5a: xor eax, eax */
  eax = 0;
/* 7bec5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bec63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bec64: mov esp, ebp */
  esp = ebp;
/* 7bec66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bec67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bec6a(void) {
  LOAD_REGS();
L_7bec6a: /* 7bec6a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bec6d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bec72: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7bec75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bec76: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7bec79: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bec7eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bec7e(); return;
}

void f_7bec7e(void) {
  LOAD_REGS();
L_7bec7e: /* 7bec7e: push 0xa0dc10 */
  { uint32_t v = 0xa0dc10u; esp -= 4; W32(esp, v); }
/* 7bec83: push 0xad2818 */
  { uint32_t v = 0xad2818u; esp -= 4; W32(esp, v); }
/* 7bec88: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bec8eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bec8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bec91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bec93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bec95: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bec9au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bec9a: guest_badaddr(0x7bec9a); return;
}

void f_7bed30(void) {
  LOAD_REGS();
L_7bed30: /* 7bed30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bed32: push 0x9cf509 */
  { uint32_t v = 0x9cf509u; esp -= 4; W32(esp, v); }
/* 7bed37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bed3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bed3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bed45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bed46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bed47: mov esi, ecx */
  esi = ecx;
/* 7bed49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7bed4d: call dword ptr [0xcfa804] */
  esp -= 4; W32(esp, 0x7bed53u); SPILL(); f_4e26e4(); if (g_unwind) return; /* Core!??0UCommandlet@@QAE@XZ */ RELOAD();
/* 7bed53: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 7bed59: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7bed61: mov dword ptr [esi], 0xa0dc50 */
  W32((uint32_t)(esi), 0xa0dc50u);
/* 7bed67: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bed6du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bed6d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7bed71: mov eax, esi */
  eax = esi;
/* 7bed73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bed74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bed7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bed7e: ret  */
  esp += 4; SPILL(); return;
}

void f_7beda0(void) {
  LOAD_REGS();
L_7beda0: /* 7beda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7beda1: mov esi, ecx */
  esi = ecx;
/* 7beda3: call 0x6c5a15 */
  esp -= 4; W32(esp, 0x7beda8u); SPILL(); f_6c5a15(); if (g_unwind) return; RELOAD();
/* 7beda8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bedad: je 0x7bedbe */
  if (zf) goto L_7bedbe;
L_7bedaf: /* 7bedaf: push 0x1ec */
  { uint32_t v = 0x1ecu; esp -= 4; W32(esp, v); }
/* 7bedb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bedb5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7bedbbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7bedbb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bedbe: /* 7bedbe: mov eax, esi */
  eax = esi;
/* 7bedc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bedc1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bede0(void) {
  LOAD_REGS();
L_7bede0: /* 7bede0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bede2: push 0x9cf537 */
  { uint32_t v = 0x9cf537u; esp -= 4; W32(esp, v); }
/* 7bede7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7beded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bedee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bedf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bedf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bedf7: mov esi, ecx */
  esi = ecx;
/* 7bedf9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7bedfd: mov dword ptr [esi], 0xa0dc50 */
  W32((uint32_t)(esi), 0xa0dc50u);
/* 7bee03: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7bee0b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7bee11u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7bee11: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 7bee17: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7bee1c: call 0x6cad2b */
  esp -= 4; W32(esp, 0x7bee21u); SPILL(); f_6cad2b(); if (g_unwind) return; RELOAD();
/* 7bee21: mov ecx, esi */
  ecx = esi;
/* 7bee23: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7bee2b: call dword ptr [0xcfa808] */
  esp -= 4; W32(esp, 0x7bee31u); SPILL(); f_4e189d(); if (g_unwind) return; /* Core!??1UCommandlet@@UAE@XZ */ RELOAD();
/* 7bee31: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7bee35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bee36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bee3d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bee40: ret  */
  esp += 4; SPILL(); return;
}

void f_7bee70(void) {
  LOAD_REGS();
L_7bee70: /* 7bee70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bee72: push 0x9cf564 */
  { uint32_t v = 0x9cf564u; esp -= 4; W32(esp, v); }
/* 7bee77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bee7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bee7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bee85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bee86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bee87: mov esi, ecx */
  esi = ecx;
/* 7bee89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7bee8d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7bee93u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7bee93: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7bee96: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7bee9e: mov dword ptr [esi], 0xa0dcd8 */
  W32((uint32_t)(esi), 0xa0dcd8u);
/* 7beea4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7beeaau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7beeaa: mov ecx, esi */
  ecx = esi;
/* 7beeac: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7beeb1: call dword ptr [0xcfa7a4] */
  esp -= 4; W32(esp, 0x7beeb7u); SPILL(); f_4e3ef4(); if (g_unwind) return; /* Core!?AddToRoot@UObject@@QAEXXZ */ RELOAD();
/* 7beeb7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7beebb: mov eax, esi */
  eax = esi;
/* 7beebd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7beebe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7beec5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7beec8: ret  */
  esp += 4; SPILL(); return;
}

void f_7beef0(void) {
  LOAD_REGS();
L_7beef0: /* 7beef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7beef1: mov ebp, esp */
  ebp = esp;
/* 7beef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7beef5: push 0x9cf580 */
  { uint32_t v = 0x9cf580u; esp -= 4; W32(esp, v); }
/* 7beefa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bef00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bef01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bef08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bef0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bef0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bef0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bef0e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7bef11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bef14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bef15: mov esi, ecx */
  esi = ecx;
/* 7bef17: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bef1e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7bef24u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7bef24: mov ecx, edi */
  ecx = edi;
/* 7bef26: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7bef2cu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7bef2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bef2e: jne 0x7bef72 */
  if (!zf) goto L_7bef72;
L_7bef30: /* 7bef30: mov ecx, edi */
  ecx = edi;
/* 7bef32: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x7bef38u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 7bef38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bef3a: jne 0x7bef72 */
  if (!zf) goto L_7bef72;
L_7bef3c: /* 7bef3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7bef40: /* 7bef40: cmp eax, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bef43: jge 0x7bef54 */
  if ((sf == of)) goto L_7bef54;
L_7bef45: /* 7bef45: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7bef48: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7bef4b: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 7bef51: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bef52: jmp 0x7bef40 */
  goto L_7bef40;
L_7bef54: /* 7bef54: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7bef57: xor eax, eax */
  eax = 0;
/* 7bef59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7bef60: /* 7bef60: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bef63: jge 0x7bef68 */
  if ((sf == of)) goto L_7bef68;
L_7bef65: /* 7bef65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bef66: jmp 0x7bef60 */
  goto L_7bef60;
L_7bef68: /* 7bef68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bef6a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bef6c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7bef72u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_7bef72: /* 7bef72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bef75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bef76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bef77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bef7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bef7f: mov esp, ebp */
  esp = ebp;
/* 7bef81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bef82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bef85(void) {
  LOAD_REGS();
L_7bef85: /* 7bef85: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bef88: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bef8d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bef90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bef91: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bef94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bef99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bef99(); return;
}

void f_7bef99(void) {
  LOAD_REGS();
L_7bef99: /* 7bef99: push 0xa0dd54 */
  { uint32_t v = 0xa0dd54u; esp -= 4; W32(esp, v); }
/* 7bef9e: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7befa3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7befa9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7befa9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7befac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7befae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7befb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7befb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7befb5: guest_badaddr(0x7befb5); return;
}

void f_7bf000(void) {
  LOAD_REGS();
L_7bf000: /* 7bf000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bf001: mov ebp, esp */
  ebp = esp;
/* 7bf003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bf005: push 0x9cf590 */
  { uint32_t v = 0x9cf590u; esp -= 4; W32(esp, v); }
/* 7bf00a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bf010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bf011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bf018: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bf01b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bf01c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bf01d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bf01e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bf021: mov esi, ecx */
  esi = ecx;
/* 7bf023: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bf02a: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x7bf030u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 7bf030: xor eax, eax */
  eax = 0;
L_7bf032: /* 7bf032: cmp eax, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bf035: jge 0x7bf046 */
  if ((sf == of)) goto L_7bf046;
L_7bf037: /* 7bf037: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7bf03a: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7bf03d: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 7bf043: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bf044: jmp 0x7bf032 */
  goto L_7bf032;
L_7bf046: /* 7bf046: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7bf049: xor eax, eax */
  eax = 0;
/* 7bf04b: jmp 0x7bf050 */
  goto L_7bf050;
L_7bf050: /* 7bf050: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bf053: jge 0x7bf058 */
  if ((sf == of)) goto L_7bf058;
L_7bf055: /* 7bf055: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bf056: jmp 0x7bf050 */
  goto L_7bf050;
L_7bf058: /* 7bf058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bf05a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bf05c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7bf062u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7bf062: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bf065: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bf066: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bf067: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bf06e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bf06f: mov esp, ebp */
  esp = ebp;
/* 7bf071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bf072: ret  */
  esp += 4; SPILL(); return;
}

void f_7bf04d(void) {
  LOAD_REGS();
L_7bf04d: /* 7bf04d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7bf050: /* 7bf050: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bf053: jge 0x7bf058 */
  if ((sf == of)) goto L_7bf058;
L_7bf055: /* 7bf055: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bf056: jmp 0x7bf050 */
  goto L_7bf050;
L_7bf058: /* 7bf058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bf05a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bf05c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7bf062u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7bf062: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bf065: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bf066: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bf067: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bf06e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bf06f: mov esp, ebp */
  esp = ebp;
/* 7bf071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bf072: ret  */
  esp += 4; SPILL(); return;
}

void f_7bf073(void) {
  LOAD_REGS();
L_7bf073: /* 7bf073: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bf076: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bf07b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bf07e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bf07f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bf082: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bf087u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bf087(); return;
}

void f_7bf087(void) {
  LOAD_REGS();
L_7bf087: /* 7bf087: push 0xa0dd9c */
  { uint32_t v = 0xa0dd9cu; esp -= 4; W32(esp, v); }
/* 7bf08c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7bf091: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bf097u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bf097: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bf09a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bf09c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bf09e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bf0a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bf0a3: guest_badaddr(0x7bf0a3); return;
}

void f_7bf0e0(void) {
  LOAD_REGS();
L_7bf0e0: /* 7bf0e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bf0e1: mov esi, ecx */
  esi = ecx;
/* 7bf0e3: call 0x6cb88e */
  esp -= 4; W32(esp, 0x7bf0e8u); SPILL(); f_6cb88e(); if (g_unwind) return; RELOAD();
/* 7bf0e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bf0ed: je 0x7bf0fb */
  if (zf) goto L_7bf0fb;
L_7bf0ef: /* 7bf0ef: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7bf0f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bf0f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7bf0f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7bf0f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bf0fb: /* 7bf0fb: mov eax, esi */
  eax = esi;
/* 7bf0fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bf0fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bf120(void) {
  LOAD_REGS();
L_7bf120: /* 7bf120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bf122: push 0x9cf5b4 */
  { uint32_t v = 0x9cf5b4u; esp -= 4; W32(esp, v); }
/* 7bf127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bf12d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bf12e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bf135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bf136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bf137: mov esi, ecx */
  esi = ecx;
/* 7bf139: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7bf13d: mov dword ptr [esi], 0xa0dcd8 */
  W32((uint32_t)(esi), 0xa0dcd8u);
/* 7bf143: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7bf14b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7bf151u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7bf151: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7bf154: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7bf159: call 0x6c4ce1 */
  esp -= 4; W32(esp, 0x7bf15eu); SPILL(); f_6c4ce1(); if (g_unwind) return; RELOAD();
/* 7bf15e: mov ecx, esi */
  ecx = esi;
/* 7bf160: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7bf168: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x7bf16eu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 7bf16e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7bf172: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bf173: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bf17a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bf17d: ret  */
  esp += 4; SPILL(); return;
}

void f_7bf1a0(void) {
  LOAD_REGS();
L_7bf1a0: /* 7bf1a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bf1a1: mov ebp, esp */
  ebp = esp;
/* 7bf1a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bf1a5: push 0x9cf5e6 */
  { uint32_t v = 0x9cf5e6u; esp -= 4; W32(esp, v); }
/* 7bf1aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bf1b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bf1b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bf1b8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bf1bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bf1bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bf1bd: mov esi, dword ptr [0xcfa33c] */
  esi = R32((uint32_t)(0xcfa33cu));
/* 7bf1c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bf1c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bf1c7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf1c9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bf1cc: xor edi, edi */
  edi = 0;
/* 7bf1ce: push 0xad010c */
  { uint32_t v = 0xad010cu; esp -= 4; W32(esp, v); }
/* 7bf1d3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf1d6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7bf1d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf1dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf1db: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf1dd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf1df: push 0xad0124 */
  { uint32_t v = 0xad0124u; esp -= 4; W32(esp, v); }
/* 7bf1e4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf1e7: mov dword ptr [0xb7e288], eax */
  W32((uint32_t)(0xb7e288u), eax);
/* 7bf1ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf1ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf1f0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf1f2: mov dword ptr [0xb7e28c], ecx */
  W32((uint32_t)(0xb7e28cu), ecx);
/* 7bf1f8: push 0xad0138 */
  { uint32_t v = 0xad0138u; esp -= 4; W32(esp, v); }
/* 7bf1fd: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf200: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf202: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf204: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf206: push 0xad0150 */
  { uint32_t v = 0xad0150u; esp -= 4; W32(esp, v); }
/* 7bf20b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf20e: mov dword ptr [0xb7e290], edx */
  W32((uint32_t)(0xb7e290u), edx);
/* 7bf214: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf216: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf218: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf21a: push 0xad0164 */
  { uint32_t v = 0xad0164u; esp -= 4; W32(esp, v); }
/* 7bf21f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf222: mov dword ptr [0xb7e294], eax */
  W32((uint32_t)(0xb7e294u), eax);
/* 7bf227: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf229u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf229: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf22b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf22d: mov dword ptr [0xb7e298], ecx */
  W32((uint32_t)(0xb7e298u), ecx);
/* 7bf233: push 0xad0174 */
  { uint32_t v = 0xad0174u; esp -= 4; W32(esp, v); }
/* 7bf238: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf23b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf23du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf23d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf23f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf241: push 0xad0188 */
  { uint32_t v = 0xad0188u; esp -= 4; W32(esp, v); }
/* 7bf246: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf249: mov dword ptr [0xb7e29c], edx */
  W32((uint32_t)(0xb7e29cu), edx);
/* 7bf24f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf251: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf253: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf255: push 0xad0194 */
  { uint32_t v = 0xad0194u; esp -= 4; W32(esp, v); }
/* 7bf25a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf25d: mov dword ptr [0xb7e2a0], eax */
  W32((uint32_t)(0xb7e2a0u), eax);
/* 7bf262: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf264u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf264: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf266: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf268: mov dword ptr [0xb7e2a4], ecx */
  W32((uint32_t)(0xb7e2a4u), ecx);
/* 7bf26e: push 0xad01a4 */
  { uint32_t v = 0xad01a4u; esp -= 4; W32(esp, v); }
/* 7bf273: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf276: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf278: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf27a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf27c: push 0xad01b4 */
  { uint32_t v = 0xad01b4u; esp -= 4; W32(esp, v); }
/* 7bf281: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf284: mov dword ptr [0xb7e2a8], edx */
  W32((uint32_t)(0xb7e2a8u), edx);
/* 7bf28a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf28cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf28c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf28e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf290: push 0xad01c4 */
  { uint32_t v = 0xad01c4u; esp -= 4; W32(esp, v); }
/* 7bf295: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf298: mov dword ptr [0xb7e2ac], eax */
  W32((uint32_t)(0xb7e2acu), eax);
/* 7bf29d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf29fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf29f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf2a1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf2a3: mov dword ptr [0xb7e2b0], ecx */
  W32((uint32_t)(0xb7e2b0u), ecx);
/* 7bf2a9: push 0xad01ec */
  { uint32_t v = 0xad01ecu; esp -= 4; W32(esp, v); }
/* 7bf2ae: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf2b1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf2b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf2b3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf2b5: mov dword ptr [0xb7e2b4], edx */
  W32((uint32_t)(0xb7e2b4u), edx);
/* 7bf2bb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf2bd: push 0xad01f8 */
  { uint32_t v = 0xad01f8u; esp -= 4; W32(esp, v); }
/* 7bf2c2: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf2c5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf2c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf2c7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf2c9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf2cb: push 0xad0208 */
  { uint32_t v = 0xad0208u; esp -= 4; W32(esp, v); }
/* 7bf2d0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf2d3: mov dword ptr [0xb7e2b8], eax */
  W32((uint32_t)(0xb7e2b8u), eax);
/* 7bf2d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf2dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf2da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf2dc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf2de: mov dword ptr [0xb7e2bc], ecx */
  W32((uint32_t)(0xb7e2bcu), ecx);
/* 7bf2e4: push 0xad0214 */
  { uint32_t v = 0xad0214u; esp -= 4; W32(esp, v); }
/* 7bf2e9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf2ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf2eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf2ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf2f0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf2f2: push 0xad022c */
  { uint32_t v = 0xad022cu; esp -= 4; W32(esp, v); }
/* 7bf2f7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf2fa: mov dword ptr [0xb7e2c0], edx */
  W32((uint32_t)(0xb7e2c0u), edx);
/* 7bf300: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf302u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf302: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf304: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf306: push 0xad023c */
  { uint32_t v = 0xad023cu; esp -= 4; W32(esp, v); }
/* 7bf30b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf30e: mov dword ptr [0xb7e2c4], eax */
  W32((uint32_t)(0xb7e2c4u), eax);
/* 7bf313: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf315: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf317: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf319: mov dword ptr [0xb7e2c8], ecx */
  W32((uint32_t)(0xb7e2c8u), ecx);
/* 7bf31f: push 0xad024c */
  { uint32_t v = 0xad024cu; esp -= 4; W32(esp, v); }
/* 7bf324: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf327: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf329u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf329: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf32b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf32d: push 0xad0268 */
  { uint32_t v = 0xad0268u; esp -= 4; W32(esp, v); }
/* 7bf332: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf335: mov dword ptr [0xb7e2cc], edx */
  W32((uint32_t)(0xb7e2ccu), edx);
/* 7bf33b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf33du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf33d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf33f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf341: push 0xad0284 */
  { uint32_t v = 0xad0284u; esp -= 4; W32(esp, v); }
/* 7bf346: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf349: mov dword ptr [0xb7e2d0], eax */
  W32((uint32_t)(0xb7e2d0u), eax);
/* 7bf34e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf350u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf350: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf352: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf354: mov dword ptr [0xb7e2d4], ecx */
  W32((uint32_t)(0xb7e2d4u), ecx);
/* 7bf35a: push 0xad029c */
  { uint32_t v = 0xad029cu; esp -= 4; W32(esp, v); }
/* 7bf35f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf362: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf364u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf364: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf366: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf368: push 0xad02ac */
  { uint32_t v = 0xad02acu; esp -= 4; W32(esp, v); }
/* 7bf36d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf370: mov dword ptr [0xb7e2d8], edx */
  W32((uint32_t)(0xb7e2d8u), edx);
/* 7bf376: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf378u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf378: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf37a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf37c: push 0xad02c8 */
  { uint32_t v = 0xad02c8u; esp -= 4; W32(esp, v); }
/* 7bf381: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf384: mov dword ptr [0xb7e2dc], eax */
  W32((uint32_t)(0xb7e2dcu), eax);
/* 7bf389: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf38bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf38b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf38d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf38f: mov dword ptr [0xb7e2e0], ecx */
  W32((uint32_t)(0xb7e2e0u), ecx);
/* 7bf395: push 0xad02e4 */
  { uint32_t v = 0xad02e4u; esp -= 4; W32(esp, v); }
/* 7bf39a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf39d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf39fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf39f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf3a1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf3a3: push 0xad0300 */
  { uint32_t v = 0xad0300u; esp -= 4; W32(esp, v); }
/* 7bf3a8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf3ab: mov dword ptr [0xb7e2e4], edx */
  W32((uint32_t)(0xb7e2e4u), edx);
/* 7bf3b1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf3b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf3b3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf3b5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf3b7: push 0xad0324 */
  { uint32_t v = 0xad0324u; esp -= 4; W32(esp, v); }
/* 7bf3bc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf3bf: mov dword ptr [0xb7e2e8], eax */
  W32((uint32_t)(0xb7e2e8u), eax);
/* 7bf3c4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf3c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf3c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf3c8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf3ca: mov dword ptr [0xb7e2ec], ecx */
  W32((uint32_t)(0xb7e2ecu), ecx);
/* 7bf3d0: push 0xad0338 */
  { uint32_t v = 0xad0338u; esp -= 4; W32(esp, v); }
/* 7bf3d5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf3d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf3dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf3da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf3dc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf3de: push 0xad035c */
  { uint32_t v = 0xad035cu; esp -= 4; W32(esp, v); }
/* 7bf3e3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf3e6: mov dword ptr [0xb7e2f0], edx */
  W32((uint32_t)(0xb7e2f0u), edx);
/* 7bf3ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf3eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf3ee: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf3f0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf3f2: push 0xad036c */
  { uint32_t v = 0xad036cu; esp -= 4; W32(esp, v); }
/* 7bf3f7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf3fa: mov dword ptr [0xb7e2f4], eax */
  W32((uint32_t)(0xb7e2f4u), eax);
/* 7bf3ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf401u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf401: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf403: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf405: mov dword ptr [0xb7e2f8], ecx */
  W32((uint32_t)(0xb7e2f8u), ecx);
/* 7bf40b: push 0xad0390 */
  { uint32_t v = 0xad0390u; esp -= 4; W32(esp, v); }
/* 7bf410: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf413: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf415: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf417: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf419: push 0xad039c */
  { uint32_t v = 0xad039cu; esp -= 4; W32(esp, v); }
/* 7bf41e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf421: mov dword ptr [0xb7e2fc], edx */
  W32((uint32_t)(0xb7e2fcu), edx);
/* 7bf427: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf429u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf429: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf42b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf42d: push 0xad03b4 */
  { uint32_t v = 0xad03b4u; esp -= 4; W32(esp, v); }
/* 7bf432: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf435: mov dword ptr [0xb7e300], eax */
  W32((uint32_t)(0xb7e300u), eax);
/* 7bf43a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf43cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf43c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf43e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf440: mov dword ptr [0xb7e304], ecx */
  W32((uint32_t)(0xb7e304u), ecx);
/* 7bf446: push 0xad03d4 */
  { uint32_t v = 0xad03d4u; esp -= 4; W32(esp, v); }
/* 7bf44b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf44e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf450u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf450: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf452: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf454: push 0xad03e8 */
  { uint32_t v = 0xad03e8u; esp -= 4; W32(esp, v); }
/* 7bf459: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf45c: mov dword ptr [0xb7e308], edx */
  W32((uint32_t)(0xb7e308u), edx);
/* 7bf462: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf464u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf464: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf466: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf468: push 0xad0408 */
  { uint32_t v = 0xad0408u; esp -= 4; W32(esp, v); }
/* 7bf46d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf470: mov dword ptr [0xb7e30c], eax */
  W32((uint32_t)(0xb7e30cu), eax);
/* 7bf475: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf477u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf477: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf479: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf47b: mov dword ptr [0xb7e310], ecx */
  W32((uint32_t)(0xb7e310u), ecx);
/* 7bf481: push 0xad041c */
  { uint32_t v = 0xad041cu; esp -= 4; W32(esp, v); }
/* 7bf486: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf489: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf48bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf48b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf48d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf48f: push 0xad043c */
  { uint32_t v = 0xad043cu; esp -= 4; W32(esp, v); }
/* 7bf494: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf497: mov dword ptr [0xb7e314], edx */
  W32((uint32_t)(0xb7e314u), edx);
/* 7bf49d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf49fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf49f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf4a1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf4a3: push 0xad0454 */
  { uint32_t v = 0xad0454u; esp -= 4; W32(esp, v); }
/* 7bf4a8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf4ab: mov dword ptr [0xb7e318], eax */
  W32((uint32_t)(0xb7e318u), eax);
/* 7bf4b0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf4b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf4b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf4b4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf4b6: mov dword ptr [0xb7e31c], ecx */
  W32((uint32_t)(0xb7e31cu), ecx);
/* 7bf4bc: push 0xad0474 */
  { uint32_t v = 0xad0474u; esp -= 4; W32(esp, v); }
/* 7bf4c1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf4c4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf4c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf4c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf4c8: mov dword ptr [0xb7e320], edx */
  W32((uint32_t)(0xb7e320u), edx);
/* 7bf4ce: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf4d0: push 0xad048c */
  { uint32_t v = 0xad048cu; esp -= 4; W32(esp, v); }
/* 7bf4d5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf4d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf4dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf4da: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf4dc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf4de: push 0xad04c0 */
  { uint32_t v = 0xad04c0u; esp -= 4; W32(esp, v); }
/* 7bf4e3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf4e6: mov dword ptr [0xb7e324], eax */
  W32((uint32_t)(0xb7e324u), eax);
/* 7bf4eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf4edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf4ed: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf4ef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf4f1: mov dword ptr [0xb7e328], ecx */
  W32((uint32_t)(0xb7e328u), ecx);
/* 7bf4f7: push 0xad04d8 */
  { uint32_t v = 0xad04d8u; esp -= 4; W32(esp, v); }
/* 7bf4fc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf4ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf501: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf503: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf505: push 0xad0508 */
  { uint32_t v = 0xad0508u; esp -= 4; W32(esp, v); }
/* 7bf50a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf50d: mov dword ptr [0xb7e32c], edx */
  W32((uint32_t)(0xb7e32cu), edx);
/* 7bf513: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf515: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf517: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf519: push 0xad0524 */
  { uint32_t v = 0xad0524u; esp -= 4; W32(esp, v); }
/* 7bf51e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf521: mov dword ptr [0xb7e330], eax */
  W32((uint32_t)(0xb7e330u), eax);
/* 7bf526: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf528: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf52a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf52c: mov dword ptr [0xb7e334], ecx */
  W32((uint32_t)(0xb7e334u), ecx);
/* 7bf532: push 0xad0540 */
  { uint32_t v = 0xad0540u; esp -= 4; W32(esp, v); }
/* 7bf537: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf53a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf53cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf53c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf53e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf540: push 0xad0560 */
  { uint32_t v = 0xad0560u; esp -= 4; W32(esp, v); }
/* 7bf545: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf548: mov dword ptr [0xb7e338], edx */
  W32((uint32_t)(0xb7e338u), edx);
/* 7bf54e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf550u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf550: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf552: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf554: push 0xad057c */
  { uint32_t v = 0xad057cu; esp -= 4; W32(esp, v); }
/* 7bf559: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf55c: mov dword ptr [0xb7e33c], eax */
  W32((uint32_t)(0xb7e33cu), eax);
/* 7bf561: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf563u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf563: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf565: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf567: mov dword ptr [0xb7e340], ecx */
  W32((uint32_t)(0xb7e340u), ecx);
/* 7bf56d: push 0xad0590 */
  { uint32_t v = 0xad0590u; esp -= 4; W32(esp, v); }
/* 7bf572: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf575: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf577u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf577: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf579: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf57b: push 0xad05ac */
  { uint32_t v = 0xad05acu; esp -= 4; W32(esp, v); }
/* 7bf580: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf583: mov dword ptr [0xb7e344], edx */
  W32((uint32_t)(0xb7e344u), edx);
/* 7bf589: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf58bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf58b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf58d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf58f: push 0xad05d0 */
  { uint32_t v = 0xad05d0u; esp -= 4; W32(esp, v); }
/* 7bf594: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf597: mov dword ptr [0xb7e348], eax */
  W32((uint32_t)(0xb7e348u), eax);
/* 7bf59c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf59eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf59e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf5a0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf5a2: mov dword ptr [0xb7e34c], ecx */
  W32((uint32_t)(0xb7e34cu), ecx);
/* 7bf5a8: push 0xad05f8 */
  { uint32_t v = 0xad05f8u; esp -= 4; W32(esp, v); }
/* 7bf5ad: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf5b0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf5b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf5b2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf5b4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf5b6: push 0xad0620 */
  { uint32_t v = 0xad0620u; esp -= 4; W32(esp, v); }
/* 7bf5bb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf5be: mov dword ptr [0xb7e350], edx */
  W32((uint32_t)(0xb7e350u), edx);
/* 7bf5c4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf5c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf5c6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf5c8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf5ca: push 0xad0640 */
  { uint32_t v = 0xad0640u; esp -= 4; W32(esp, v); }
/* 7bf5cf: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf5d2: mov dword ptr [0xb7e354], eax */
  W32((uint32_t)(0xb7e354u), eax);
/* 7bf5d7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf5d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf5d9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf5db: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf5dd: mov dword ptr [0xb7e358], ecx */
  W32((uint32_t)(0xb7e358u), ecx);
/* 7bf5e3: push 0xad065c */
  { uint32_t v = 0xad065cu; esp -= 4; W32(esp, v); }
/* 7bf5e8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf5eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf5edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf5ed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf5ef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf5f1: push 0xad0674 */
  { uint32_t v = 0xad0674u; esp -= 4; W32(esp, v); }
/* 7bf5f6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf5f9: mov dword ptr [0xb7e35c], edx */
  W32((uint32_t)(0xb7e35cu), edx);
/* 7bf5ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf601u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf601: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf603: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf605: push 0xad0698 */
  { uint32_t v = 0xad0698u; esp -= 4; W32(esp, v); }
/* 7bf60a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf60d: mov dword ptr [0xb7e360], eax */
  W32((uint32_t)(0xb7e360u), eax);
/* 7bf612: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf614u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf614: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf616: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf618: mov dword ptr [0xb7e364], ecx */
  W32((uint32_t)(0xb7e364u), ecx);
/* 7bf61e: push 0xad06b8 */
  { uint32_t v = 0xad06b8u; esp -= 4; W32(esp, v); }
/* 7bf623: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf626: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf628u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf628: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf62a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf62c: push 0xad06cc */
  { uint32_t v = 0xad06ccu; esp -= 4; W32(esp, v); }
/* 7bf631: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf634: mov dword ptr [0xb7e368], edx */
  W32((uint32_t)(0xb7e368u), edx);
/* 7bf63a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf63cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf63c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf63e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf640: push 0xad06ec */
  { uint32_t v = 0xad06ecu; esp -= 4; W32(esp, v); }
/* 7bf645: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf648: mov dword ptr [0xb7e36c], eax */
  W32((uint32_t)(0xb7e36cu), eax);
/* 7bf64d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf64fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf64f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf651: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf653: mov dword ptr [0xb7e370], ecx */
  W32((uint32_t)(0xb7e370u), ecx);
/* 7bf659: push 0xad0704 */
  { uint32_t v = 0xad0704u; esp -= 4; W32(esp, v); }
/* 7bf65e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf661: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf663u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf663: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf665: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf667: push 0xad0720 */
  { uint32_t v = 0xad0720u; esp -= 4; W32(esp, v); }
/* 7bf66c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf66f: mov dword ptr [0xb7e374], edx */
  W32((uint32_t)(0xb7e374u), edx);
/* 7bf675: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf677u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf677: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf679: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf67b: push 0xad072c */
  { uint32_t v = 0xad072cu; esp -= 4; W32(esp, v); }
/* 7bf680: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf683: mov dword ptr [0xb7e378], eax */
  W32((uint32_t)(0xb7e378u), eax);
/* 7bf688: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf68au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf68a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf68c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf68e: mov dword ptr [0xb7e37c], ecx */
  W32((uint32_t)(0xb7e37cu), ecx);
/* 7bf694: push 0xad074c */
  { uint32_t v = 0xad074cu; esp -= 4; W32(esp, v); }
/* 7bf699: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf69c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf69eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf69e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf6a0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf6a2: push 0xad076c */
  { uint32_t v = 0xad076cu; esp -= 4; W32(esp, v); }
/* 7bf6a7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf6aa: mov dword ptr [0xb7e380], edx */
  W32((uint32_t)(0xb7e380u), edx);
/* 7bf6b0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf6b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf6b2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf6b4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf6b6: push 0xad0788 */
  { uint32_t v = 0xad0788u; esp -= 4; W32(esp, v); }
/* 7bf6bb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf6be: mov dword ptr [0xb7e384], eax */
  W32((uint32_t)(0xb7e384u), eax);
/* 7bf6c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf6c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf6c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf6c7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf6c9: mov dword ptr [0xb7e388], ecx */
  W32((uint32_t)(0xb7e388u), ecx);
/* 7bf6cf: push 0xad079c */
  { uint32_t v = 0xad079cu; esp -= 4; W32(esp, v); }
/* 7bf6d4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf6d7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf6d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf6d9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf6db: mov dword ptr [0xb7e38c], edx */
  W32((uint32_t)(0xb7e38cu), edx);
/* 7bf6e1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf6e3: push 0xad07b4 */
  { uint32_t v = 0xad07b4u; esp -= 4; W32(esp, v); }
/* 7bf6e8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf6eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf6edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf6ed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf6ef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf6f1: push 0xad07c8 */
  { uint32_t v = 0xad07c8u; esp -= 4; W32(esp, v); }
/* 7bf6f6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf6f9: mov dword ptr [0xb7e390], eax */
  W32((uint32_t)(0xb7e390u), eax);
/* 7bf6fe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf700u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf700: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf702: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf704: mov dword ptr [0xb7e394], ecx */
  W32((uint32_t)(0xb7e394u), ecx);
/* 7bf70a: push 0xad07dc */
  { uint32_t v = 0xad07dcu; esp -= 4; W32(esp, v); }
/* 7bf70f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf712: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf714u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf714: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf716: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf718: push 0xad07f4 */
  { uint32_t v = 0xad07f4u; esp -= 4; W32(esp, v); }
/* 7bf71d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf720: mov dword ptr [0xb7e398], edx */
  W32((uint32_t)(0xb7e398u), edx);
/* 7bf726: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf728: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf72a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf72c: push 0xad0814 */
  { uint32_t v = 0xad0814u; esp -= 4; W32(esp, v); }
/* 7bf731: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf734: mov dword ptr [0xb7e39c], eax */
  W32((uint32_t)(0xb7e39cu), eax);
/* 7bf739: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf73bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf73b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf73d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf73f: mov dword ptr [0xb7e3a0], ecx */
  W32((uint32_t)(0xb7e3a0u), ecx);
/* 7bf745: push 0xad0838 */
  { uint32_t v = 0xad0838u; esp -= 4; W32(esp, v); }
/* 7bf74a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf74d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf74fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf74f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf751: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf753: push 0xad0850 */
  { uint32_t v = 0xad0850u; esp -= 4; W32(esp, v); }
/* 7bf758: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf75b: mov dword ptr [0xb7e3a4], edx */
  W32((uint32_t)(0xb7e3a4u), edx);
/* 7bf761: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf763: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf765: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf767: push 0xad086c */
  { uint32_t v = 0xad086cu; esp -= 4; W32(esp, v); }
/* 7bf76c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf76f: mov dword ptr [0xb7e3a8], eax */
  W32((uint32_t)(0xb7e3a8u), eax);
/* 7bf774: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf776u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf776: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf778: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf77a: mov dword ptr [0xb7e3ac], ecx */
  W32((uint32_t)(0xb7e3acu), ecx);
/* 7bf780: push 0xad0880 */
  { uint32_t v = 0xad0880u; esp -= 4; W32(esp, v); }
/* 7bf785: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf788: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf78au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf78a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf78c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf78e: push 0xad0890 */
  { uint32_t v = 0xad0890u; esp -= 4; W32(esp, v); }
/* 7bf793: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf796: mov dword ptr [0xb7e3b0], edx */
  W32((uint32_t)(0xb7e3b0u), edx);
/* 7bf79c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf79eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf79e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf7a0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf7a2: push 0xad08ac */
  { uint32_t v = 0xad08acu; esp -= 4; W32(esp, v); }
/* 7bf7a7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf7aa: mov dword ptr [0xb7e3b4], eax */
  W32((uint32_t)(0xb7e3b4u), eax);
/* 7bf7af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf7b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf7b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf7b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf7b5: mov dword ptr [0xb7e3b8], ecx */
  W32((uint32_t)(0xb7e3b8u), ecx);
/* 7bf7bb: push 0xad08cc */
  { uint32_t v = 0xad08ccu; esp -= 4; W32(esp, v); }
/* 7bf7c0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf7c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf7c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf7c5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf7c7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf7c9: push 0xad08e0 */
  { uint32_t v = 0xad08e0u; esp -= 4; W32(esp, v); }
/* 7bf7ce: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf7d1: mov dword ptr [0xb7e3bc], edx */
  W32((uint32_t)(0xb7e3bcu), edx);
/* 7bf7d7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf7d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf7d9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf7db: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf7dd: push 0xad08fc */
  { uint32_t v = 0xad08fcu; esp -= 4; W32(esp, v); }
/* 7bf7e2: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf7e5: mov dword ptr [0xb7e3c0], eax */
  W32((uint32_t)(0xb7e3c0u), eax);
/* 7bf7ea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf7ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf7ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf7ee: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf7f0: mov dword ptr [0xb7e3c4], ecx */
  W32((uint32_t)(0xb7e3c4u), ecx);
/* 7bf7f6: push 0xad0918 */
  { uint32_t v = 0xad0918u; esp -= 4; W32(esp, v); }
/* 7bf7fb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf7fe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf800u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf800: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf802: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf804: push 0xad0930 */
  { uint32_t v = 0xad0930u; esp -= 4; W32(esp, v); }
/* 7bf809: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf80c: mov dword ptr [0xb7e3c8], edx */
  W32((uint32_t)(0xb7e3c8u), edx);
/* 7bf812: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf814u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf814: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf816: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf818: push 0xad0950 */
  { uint32_t v = 0xad0950u; esp -= 4; W32(esp, v); }
/* 7bf81d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf820: mov dword ptr [0xb7e3cc], eax */
  W32((uint32_t)(0xb7e3ccu), eax);
/* 7bf825: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf827u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf827: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf829: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf82b: mov dword ptr [0xb7e3d0], ecx */
  W32((uint32_t)(0xb7e3d0u), ecx);
/* 7bf831: push 0xad0964 */
  { uint32_t v = 0xad0964u; esp -= 4; W32(esp, v); }
/* 7bf836: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf839: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf83bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf83b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf83d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf83f: push 0xad097c */
  { uint32_t v = 0xad097cu; esp -= 4; W32(esp, v); }
/* 7bf844: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf847: mov dword ptr [0xb7e3d4], edx */
  W32((uint32_t)(0xb7e3d4u), edx);
/* 7bf84d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf84fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf84f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf851: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf853: push 0xad0994 */
  { uint32_t v = 0xad0994u; esp -= 4; W32(esp, v); }
/* 7bf858: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf85b: mov dword ptr [0xb7e3d8], eax */
  W32((uint32_t)(0xb7e3d8u), eax);
/* 7bf860: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf862: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf864: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf866: mov dword ptr [0xb7e3dc], ecx */
  W32((uint32_t)(0xb7e3dcu), ecx);
/* 7bf86c: push 0xad09b0 */
  { uint32_t v = 0xad09b0u; esp -= 4; W32(esp, v); }
/* 7bf871: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf874: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf876: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf878: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf87a: push 0xad09c4 */
  { uint32_t v = 0xad09c4u; esp -= 4; W32(esp, v); }
/* 7bf87f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf882: mov dword ptr [0xb7e3e0], edx */
  W32((uint32_t)(0xb7e3e0u), edx);
/* 7bf888: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf88au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf88a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf88c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf88e: push 0xad09e0 */
  { uint32_t v = 0xad09e0u; esp -= 4; W32(esp, v); }
/* 7bf893: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf896: mov dword ptr [0xb7e3e4], eax */
  W32((uint32_t)(0xb7e3e4u), eax);
/* 7bf89b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf89du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf89d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf89f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf8a1: mov dword ptr [0xb7e3e8], ecx */
  W32((uint32_t)(0xb7e3e8u), ecx);
/* 7bf8a7: push 0xad0a00 */
  { uint32_t v = 0xad0a00u; esp -= 4; W32(esp, v); }
/* 7bf8ac: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf8af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf8b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf8b1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf8b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf8b5: push 0xad0a34 */
  { uint32_t v = 0xad0a34u; esp -= 4; W32(esp, v); }
/* 7bf8ba: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf8bd: mov dword ptr [0xb7e3ec], edx */
  W32((uint32_t)(0xb7e3ecu), edx);
/* 7bf8c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf8c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf8c5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf8c7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf8c9: push 0xad0a64 */
  { uint32_t v = 0xad0a64u; esp -= 4; W32(esp, v); }
/* 7bf8ce: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf8d1: mov dword ptr [0xb7e3f0], eax */
  W32((uint32_t)(0xb7e3f0u), eax);
/* 7bf8d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf8d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf8d8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf8da: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf8dc: mov dword ptr [0xb7e3f4], ecx */
  W32((uint32_t)(0xb7e3f4u), ecx);
/* 7bf8e2: push 0xad0a88 */
  { uint32_t v = 0xad0a88u; esp -= 4; W32(esp, v); }
/* 7bf8e7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf8ea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf8ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf8ec: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf8ee: mov dword ptr [0xb7e3f8], edx */
  W32((uint32_t)(0xb7e3f8u), edx);
/* 7bf8f4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf8f6: push 0xad0ab0 */
  { uint32_t v = 0xad0ab0u; esp -= 4; W32(esp, v); }
/* 7bf8fb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf8fe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf900u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf900: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf902: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf904: push 0xad0ad0 */
  { uint32_t v = 0xad0ad0u; esp -= 4; W32(esp, v); }
/* 7bf909: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf90c: mov dword ptr [0xb7e3fc], eax */
  W32((uint32_t)(0xb7e3fcu), eax);
/* 7bf911: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf913u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf913: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf915: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf917: mov dword ptr [0xb7e400], ecx */
  W32((uint32_t)(0xb7e400u), ecx);
/* 7bf91d: push 0xad0af8 */
  { uint32_t v = 0xad0af8u; esp -= 4; W32(esp, v); }
/* 7bf922: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf925: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf927u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf927: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf929: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf92b: push 0xad0b18 */
  { uint32_t v = 0xad0b18u; esp -= 4; W32(esp, v); }
/* 7bf930: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf933: mov dword ptr [0xb7e404], edx */
  W32((uint32_t)(0xb7e404u), edx);
/* 7bf939: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf93bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf93b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf93d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf93f: push 0xad0b38 */
  { uint32_t v = 0xad0b38u; esp -= 4; W32(esp, v); }
/* 7bf944: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf947: mov dword ptr [0xb7e408], eax */
  W32((uint32_t)(0xb7e408u), eax);
/* 7bf94c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf94eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf94e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf950: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf952: mov dword ptr [0xb7e40c], ecx */
  W32((uint32_t)(0xb7e40cu), ecx);
/* 7bf958: push 0xad0b50 */
  { uint32_t v = 0xad0b50u; esp -= 4; W32(esp, v); }
/* 7bf95d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf960: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf962u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf962: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf964: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf966: push 0xad0b64 */
  { uint32_t v = 0xad0b64u; esp -= 4; W32(esp, v); }
/* 7bf96b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf96e: mov dword ptr [0xb7e410], edx */
  W32((uint32_t)(0xb7e410u), edx);
/* 7bf974: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf976u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf976: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf978: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf97a: push 0xad0b84 */
  { uint32_t v = 0xad0b84u; esp -= 4; W32(esp, v); }
/* 7bf97f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf982: mov dword ptr [0xb7e414], eax */
  W32((uint32_t)(0xb7e414u), eax);
/* 7bf987: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf989u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf989: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf98b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf98d: mov dword ptr [0xb7e418], ecx */
  W32((uint32_t)(0xb7e418u), ecx);
/* 7bf993: push 0xad0bb0 */
  { uint32_t v = 0xad0bb0u; esp -= 4; W32(esp, v); }
/* 7bf998: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf99b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf99du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf99d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf99f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf9a1: push 0xad0bd0 */
  { uint32_t v = 0xad0bd0u; esp -= 4; W32(esp, v); }
/* 7bf9a6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf9a9: mov dword ptr [0xb7e41c], edx */
  W32((uint32_t)(0xb7e41cu), edx);
/* 7bf9af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf9b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf9b1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf9b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf9b5: push 0xad0bec */
  { uint32_t v = 0xad0becu; esp -= 4; W32(esp, v); }
/* 7bf9ba: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf9bd: mov dword ptr [0xb7e420], eax */
  W32((uint32_t)(0xb7e420u), eax);
/* 7bf9c2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf9c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf9c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bf9c6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf9c8: mov dword ptr [0xb7e424], ecx */
  W32((uint32_t)(0xb7e424u), ecx);
/* 7bf9ce: push 0xad0c1c */
  { uint32_t v = 0xad0c1cu; esp -= 4; W32(esp, v); }
/* 7bf9d3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf9d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf9d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf9d8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bf9da: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf9dc: push 0xad0c34 */
  { uint32_t v = 0xad0c34u; esp -= 4; W32(esp, v); }
/* 7bf9e1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf9e4: mov dword ptr [0xb7e428], edx */
  W32((uint32_t)(0xb7e428u), edx);
/* 7bf9ea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf9ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf9ec: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bf9ee: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bf9f0: push 0xad0c50 */
  { uint32_t v = 0xad0c50u; esp -= 4; W32(esp, v); }
/* 7bf9f5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bf9f8: mov dword ptr [0xb7e42c], eax */
  W32((uint32_t)(0xb7e42cu), eax);
/* 7bf9fd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bf9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bf9ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfa01: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa03: mov dword ptr [0xb7e430], ecx */
  W32((uint32_t)(0xb7e430u), ecx);
/* 7bfa09: push 0xad0c6c */
  { uint32_t v = 0xad0c6cu; esp -= 4; W32(esp, v); }
/* 7bfa0e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa11: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa13: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfa15: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa17: push 0xad0c94 */
  { uint32_t v = 0xad0c94u; esp -= 4; W32(esp, v); }
/* 7bfa1c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa1f: mov dword ptr [0xb7e434], edx */
  W32((uint32_t)(0xb7e434u), edx);
/* 7bfa25: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa27: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfa29: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa2b: push 0xad0cb4 */
  { uint32_t v = 0xad0cb4u; esp -= 4; W32(esp, v); }
/* 7bfa30: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa33: mov dword ptr [0xb7e438], eax */
  W32((uint32_t)(0xb7e438u), eax);
/* 7bfa38: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa3a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfa3c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa3e: mov dword ptr [0xb7e43c], ecx */
  W32((uint32_t)(0xb7e43cu), ecx);
/* 7bfa44: push 0xad0cc8 */
  { uint32_t v = 0xad0cc8u; esp -= 4; W32(esp, v); }
/* 7bfa49: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa4c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa4e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfa50: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa52: push 0xad0ce0 */
  { uint32_t v = 0xad0ce0u; esp -= 4; W32(esp, v); }
/* 7bfa57: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa5a: mov dword ptr [0xb7e440], edx */
  W32((uint32_t)(0xb7e440u), edx);
/* 7bfa60: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa62: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfa64: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa66: push 0xad0d0c */
  { uint32_t v = 0xad0d0cu; esp -= 4; W32(esp, v); }
/* 7bfa6b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa6e: mov dword ptr [0xb7e444], eax */
  W32((uint32_t)(0xb7e444u), eax);
/* 7bfa73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfa77: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa79: mov dword ptr [0xb7e448], ecx */
  W32((uint32_t)(0xb7e448u), ecx);
/* 7bfa7f: push 0xad0d34 */
  { uint32_t v = 0xad0d34u; esp -= 4; W32(esp, v); }
/* 7bfa84: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa87: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa89: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfa8b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfa8d: push 0xad0d44 */
  { uint32_t v = 0xad0d44u; esp -= 4; W32(esp, v); }
/* 7bfa92: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfa95: mov dword ptr [0xb7e44c], edx */
  W32((uint32_t)(0xb7e44cu), edx);
/* 7bfa9b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfa9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfa9d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfa9f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfaa1: push 0xad0d60 */
  { uint32_t v = 0xad0d60u; esp -= 4; W32(esp, v); }
/* 7bfaa6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfaa9: mov dword ptr [0xb7e450], eax */
  W32((uint32_t)(0xb7e450u), eax);
/* 7bfaae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfab0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfab0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfab2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfab4: mov dword ptr [0xb7e454], ecx */
  W32((uint32_t)(0xb7e454u), ecx);
/* 7bfaba: push 0xad0d80 */
  { uint32_t v = 0xad0d80u; esp -= 4; W32(esp, v); }
/* 7bfabf: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfac2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfac4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfac4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfac6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfac8: push 0xad0da0 */
  { uint32_t v = 0xad0da0u; esp -= 4; W32(esp, v); }
/* 7bfacd: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfad0: mov dword ptr [0xb7e458], edx */
  W32((uint32_t)(0xb7e458u), edx);
/* 7bfad6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfad8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfada: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfadc: push 0xad0dc4 */
  { uint32_t v = 0xad0dc4u; esp -= 4; W32(esp, v); }
/* 7bfae1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfae4: mov dword ptr [0xb7e45c], eax */
  W32((uint32_t)(0xb7e45cu), eax);
/* 7bfae9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfaebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfaeb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfaed: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfaef: mov dword ptr [0xb7e460], ecx */
  W32((uint32_t)(0xb7e460u), ecx);
/* 7bfaf5: push 0xad0de8 */
  { uint32_t v = 0xad0de8u; esp -= 4; W32(esp, v); }
/* 7bfafa: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfafd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfaffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfaff: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfb01: mov dword ptr [0xb7e464], edx */
  W32((uint32_t)(0xb7e464u), edx);
/* 7bfb07: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb09: push 0xad0e10 */
  { uint32_t v = 0xad0e10u; esp -= 4; W32(esp, v); }
/* 7bfb0e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb11: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb13: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfb15: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb17: push 0xad0e28 */
  { uint32_t v = 0xad0e28u; esp -= 4; W32(esp, v); }
/* 7bfb1c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb1f: mov dword ptr [0xb7e468], eax */
  W32((uint32_t)(0xb7e468u), eax);
/* 7bfb24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfb28: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb2a: mov dword ptr [0xb7e46c], ecx */
  W32((uint32_t)(0xb7e46cu), ecx);
/* 7bfb30: push 0xad0e48 */
  { uint32_t v = 0xad0e48u; esp -= 4; W32(esp, v); }
/* 7bfb35: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb38: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb3a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfb3c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb3e: push 0xad0e6c */
  { uint32_t v = 0xad0e6cu; esp -= 4; W32(esp, v); }
/* 7bfb43: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb46: mov dword ptr [0xb7e470], edx */
  W32((uint32_t)(0xb7e470u), edx);
/* 7bfb4c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb4e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfb50: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb52: push 0xad0e84 */
  { uint32_t v = 0xad0e84u; esp -= 4; W32(esp, v); }
/* 7bfb57: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb5a: mov dword ptr [0xb7e474], eax */
  W32((uint32_t)(0xb7e474u), eax);
/* 7bfb5f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb61: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfb63: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb65: mov dword ptr [0xb7e478], ecx */
  W32((uint32_t)(0xb7e478u), ecx);
/* 7bfb6b: push 0xad0ea0 */
  { uint32_t v = 0xad0ea0u; esp -= 4; W32(esp, v); }
/* 7bfb70: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb75: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfb77: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb79: push 0xad0ec0 */
  { uint32_t v = 0xad0ec0u; esp -= 4; W32(esp, v); }
/* 7bfb7e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb81: mov dword ptr [0xb7e47c], edx */
  W32((uint32_t)(0xb7e47cu), edx);
/* 7bfb87: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb89: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfb8b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfb8d: push 0xad0ed4 */
  { uint32_t v = 0xad0ed4u; esp -= 4; W32(esp, v); }
/* 7bfb92: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfb95: mov dword ptr [0xb7e480], eax */
  W32((uint32_t)(0xb7e480u), eax);
/* 7bfb9a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfb9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfb9c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfb9e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfba0: mov dword ptr [0xb7e484], ecx */
  W32((uint32_t)(0xb7e484u), ecx);
/* 7bfba6: push 0xad0f00 */
  { uint32_t v = 0xad0f00u; esp -= 4; W32(esp, v); }
/* 7bfbab: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfbae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfbb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfbb0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfbb2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfbb4: push 0xad0f10 */
  { uint32_t v = 0xad0f10u; esp -= 4; W32(esp, v); }
/* 7bfbb9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfbbc: mov dword ptr [0xb7e488], edx */
  W32((uint32_t)(0xb7e488u), edx);
/* 7bfbc2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfbc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfbc4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfbc6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfbc8: push 0xad0f2c */
  { uint32_t v = 0xad0f2cu; esp -= 4; W32(esp, v); }
/* 7bfbcd: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfbd0: mov dword ptr [0xb7e48c], eax */
  W32((uint32_t)(0xb7e48cu), eax);
/* 7bfbd5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfbd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfbd7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfbd9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfbdb: mov dword ptr [0xb7e490], ecx */
  W32((uint32_t)(0xb7e490u), ecx);
/* 7bfbe1: push 0xad0f4c */
  { uint32_t v = 0xad0f4cu; esp -= 4; W32(esp, v); }
/* 7bfbe6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfbe9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfbebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfbeb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfbed: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfbef: push 0xad0f74 */
  { uint32_t v = 0xad0f74u; esp -= 4; W32(esp, v); }
/* 7bfbf4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfbf7: mov dword ptr [0xb7e494], edx */
  W32((uint32_t)(0xb7e494u), edx);
/* 7bfbfd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfbffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfbff: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfc01: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc03: push 0xad0f8c */
  { uint32_t v = 0xad0f8cu; esp -= 4; W32(esp, v); }
/* 7bfc08: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc0b: mov dword ptr [0xb7e498], eax */
  W32((uint32_t)(0xb7e498u), eax);
/* 7bfc10: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc12: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfc14: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc16: mov dword ptr [0xb7e49c], ecx */
  W32((uint32_t)(0xb7e49cu), ecx);
/* 7bfc1c: push 0xad0f9c */
  { uint32_t v = 0xad0f9cu; esp -= 4; W32(esp, v); }
/* 7bfc21: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc26: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfc28: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc2a: push 0xad0fb0 */
  { uint32_t v = 0xad0fb0u; esp -= 4; W32(esp, v); }
/* 7bfc2f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc32: mov dword ptr [0xb7e4a0], edx */
  W32((uint32_t)(0xb7e4a0u), edx);
/* 7bfc38: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc3a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfc3c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc3e: push 0xad0fc8 */
  { uint32_t v = 0xad0fc8u; esp -= 4; W32(esp, v); }
/* 7bfc43: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc46: mov dword ptr [0xb7e4a4], eax */
  W32((uint32_t)(0xb7e4a4u), eax);
/* 7bfc4b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc4d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfc4f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc51: mov dword ptr [0xb7e4a8], ecx */
  W32((uint32_t)(0xb7e4a8u), ecx);
/* 7bfc57: push 0xad0fd8 */
  { uint32_t v = 0xad0fd8u; esp -= 4; W32(esp, v); }
/* 7bfc5c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc5f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc61: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfc63: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc65: push 0xad1000 */
  { uint32_t v = 0xad1000u; esp -= 4; W32(esp, v); }
/* 7bfc6a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc6d: mov dword ptr [0xb7e4ac], edx */
  W32((uint32_t)(0xb7e4acu), edx);
/* 7bfc73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc75: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfc77: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc79: push 0xad101c */
  { uint32_t v = 0xad101cu; esp -= 4; W32(esp, v); }
/* 7bfc7e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc81: mov dword ptr [0xb7e4b0], eax */
  W32((uint32_t)(0xb7e4b0u), eax);
/* 7bfc86: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc88: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfc8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfc8c: mov dword ptr [0xb7e4b4], ecx */
  W32((uint32_t)(0xb7e4b4u), ecx);
/* 7bfc92: push 0xad103c */
  { uint32_t v = 0xad103cu; esp -= 4; W32(esp, v); }
/* 7bfc97: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfc9a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfc9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfc9c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfc9e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfca0: push 0xad1070 */
  { uint32_t v = 0xad1070u; esp -= 4; W32(esp, v); }
/* 7bfca5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfca8: mov dword ptr [0xb7e4b8], edx */
  W32((uint32_t)(0xb7e4b8u), edx);
/* 7bfcae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfcb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfcb0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfcb2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfcb4: push 0xad10a0 */
  { uint32_t v = 0xad10a0u; esp -= 4; W32(esp, v); }
/* 7bfcb9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfcbc: mov dword ptr [0xb7e4bc], eax */
  W32((uint32_t)(0xb7e4bcu), eax);
/* 7bfcc1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfcc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfcc3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfcc5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfcc7: mov dword ptr [0xb7e4c0], ecx */
  W32((uint32_t)(0xb7e4c0u), ecx);
/* 7bfccd: push 0xad10c0 */
  { uint32_t v = 0xad10c0u; esp -= 4; W32(esp, v); }
/* 7bfcd2: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfcd5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfcd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfcd7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfcd9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfcdb: push 0xad10f4 */
  { uint32_t v = 0xad10f4u; esp -= 4; W32(esp, v); }
/* 7bfce0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfce3: mov dword ptr [0xb7e4c4], edx */
  W32((uint32_t)(0xb7e4c4u), edx);
/* 7bfce9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfcebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfceb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfced: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfcef: push 0xad112c */
  { uint32_t v = 0xad112cu; esp -= 4; W32(esp, v); }
/* 7bfcf4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfcf7: mov dword ptr [0xb7e4c8], eax */
  W32((uint32_t)(0xb7e4c8u), eax);
/* 7bfcfc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfcfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfcfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfd00: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd02: mov dword ptr [0xb7e4cc], ecx */
  W32((uint32_t)(0xb7e4ccu), ecx);
/* 7bfd08: push 0xad1168 */
  { uint32_t v = 0xad1168u; esp -= 4; W32(esp, v); }
/* 7bfd0d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd10: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd12: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfd14: mov dword ptr [0xb7e4d0], edx */
  W32((uint32_t)(0xb7e4d0u), edx);
/* 7bfd1a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd1c: push 0xad1184 */
  { uint32_t v = 0xad1184u; esp -= 4; W32(esp, v); }
/* 7bfd21: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd26: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfd28: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd2a: push 0xad11a0 */
  { uint32_t v = 0xad11a0u; esp -= 4; W32(esp, v); }
/* 7bfd2f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd32: mov dword ptr [0xb7e4d4], eax */
  W32((uint32_t)(0xb7e4d4u), eax);
/* 7bfd37: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd39: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfd3b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd3d: mov dword ptr [0xb7e4d8], ecx */
  W32((uint32_t)(0xb7e4d8u), ecx);
/* 7bfd43: push 0xad11b8 */
  { uint32_t v = 0xad11b8u; esp -= 4; W32(esp, v); }
/* 7bfd48: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd4b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd4d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfd4f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd51: push 0xad11d4 */
  { uint32_t v = 0xad11d4u; esp -= 4; W32(esp, v); }
/* 7bfd56: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd59: mov dword ptr [0xb7e4dc], edx */
  W32((uint32_t)(0xb7e4dcu), edx);
/* 7bfd5f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd61: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfd63: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd65: push 0xad1200 */
  { uint32_t v = 0xad1200u; esp -= 4; W32(esp, v); }
/* 7bfd6a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd6d: mov dword ptr [0xb7e4e0], eax */
  W32((uint32_t)(0xb7e4e0u), eax);
/* 7bfd72: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd74: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfd76: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd78: mov dword ptr [0xb7e4e4], ecx */
  W32((uint32_t)(0xb7e4e4u), ecx);
/* 7bfd7e: push 0xad1220 */
  { uint32_t v = 0xad1220u; esp -= 4; W32(esp, v); }
/* 7bfd83: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd86: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd88: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfd8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfd8c: push 0xad1244 */
  { uint32_t v = 0xad1244u; esp -= 4; W32(esp, v); }
/* 7bfd91: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfd94: mov dword ptr [0xb7e4e8], edx */
  W32((uint32_t)(0xb7e4e8u), edx);
/* 7bfd9a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfd9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfd9c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfd9e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfda0: push 0xad1260 */
  { uint32_t v = 0xad1260u; esp -= 4; W32(esp, v); }
/* 7bfda5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfda8: mov dword ptr [0xb7e4ec], eax */
  W32((uint32_t)(0xb7e4ecu), eax);
/* 7bfdad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfdafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfdaf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfdb1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfdb3: mov dword ptr [0xb7e4f0], ecx */
  W32((uint32_t)(0xb7e4f0u), ecx);
/* 7bfdb9: push 0xad127c */
  { uint32_t v = 0xad127cu; esp -= 4; W32(esp, v); }
/* 7bfdbe: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfdc1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfdc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfdc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfdc5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfdc7: push 0xad1290 */
  { uint32_t v = 0xad1290u; esp -= 4; W32(esp, v); }
/* 7bfdcc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfdcf: mov dword ptr [0xb7e4f4], edx */
  W32((uint32_t)(0xb7e4f4u), edx);
/* 7bfdd5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfdd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfdd7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfdd9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfddb: push 0xad12b0 */
  { uint32_t v = 0xad12b0u; esp -= 4; W32(esp, v); }
/* 7bfde0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfde3: mov dword ptr [0xb7e4f8], eax */
  W32((uint32_t)(0xb7e4f8u), eax);
/* 7bfde8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfdeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfdea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfdec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfdee: mov dword ptr [0xb7e4fc], ecx */
  W32((uint32_t)(0xb7e4fcu), ecx);
/* 7bfdf4: push 0xad12d4 */
  { uint32_t v = 0xad12d4u; esp -= 4; W32(esp, v); }
/* 7bfdf9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfdfc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfdfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfdfe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfe00: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe02: push 0xad12f0 */
  { uint32_t v = 0xad12f0u; esp -= 4; W32(esp, v); }
/* 7bfe07: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe0a: mov dword ptr [0xb7e500], edx */
  W32((uint32_t)(0xb7e500u), edx);
/* 7bfe10: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe12: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfe14: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe16: push 0xad1324 */
  { uint32_t v = 0xad1324u; esp -= 4; W32(esp, v); }
/* 7bfe1b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe1e: mov dword ptr [0xb7e504], eax */
  W32((uint32_t)(0xb7e504u), eax);
/* 7bfe23: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfe27: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe29: mov dword ptr [0xb7e508], ecx */
  W32((uint32_t)(0xb7e508u), ecx);
/* 7bfe2f: push 0xad1344 */
  { uint32_t v = 0xad1344u; esp -= 4; W32(esp, v); }
/* 7bfe34: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe37: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe39: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfe3b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe3d: push 0xad1364 */
  { uint32_t v = 0xad1364u; esp -= 4; W32(esp, v); }
/* 7bfe42: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe45: mov dword ptr [0xb7e50c], edx */
  W32((uint32_t)(0xb7e50cu), edx);
/* 7bfe4b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe4d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfe4f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe51: push 0xad1380 */
  { uint32_t v = 0xad1380u; esp -= 4; W32(esp, v); }
/* 7bfe56: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe59: mov dword ptr [0xb7e510], eax */
  W32((uint32_t)(0xb7e510u), eax);
/* 7bfe5e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfe62: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe64: mov dword ptr [0xb7e514], ecx */
  W32((uint32_t)(0xb7e514u), ecx);
/* 7bfe6a: push 0xad1394 */
  { uint32_t v = 0xad1394u; esp -= 4; W32(esp, v); }
/* 7bfe6f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe72: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe74: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfe76: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe78: push 0xad13ac */
  { uint32_t v = 0xad13acu; esp -= 4; W32(esp, v); }
/* 7bfe7d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe80: mov dword ptr [0xb7e518], edx */
  W32((uint32_t)(0xb7e518u), edx);
/* 7bfe86: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe88: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfe8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe8c: push 0xad13c0 */
  { uint32_t v = 0xad13c0u; esp -= 4; W32(esp, v); }
/* 7bfe91: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfe94: mov dword ptr [0xb7e51c], eax */
  W32((uint32_t)(0xb7e51cu), eax);
/* 7bfe99: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfe9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfe9b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfe9d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfe9f: mov dword ptr [0xb7e520], ecx */
  W32((uint32_t)(0xb7e520u), ecx);
/* 7bfea5: push 0xad13d4 */
  { uint32_t v = 0xad13d4u; esp -= 4; W32(esp, v); }
/* 7bfeaa: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfead: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfeafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfeaf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfeb1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfeb3: push 0xad1400 */
  { uint32_t v = 0xad1400u; esp -= 4; W32(esp, v); }
/* 7bfeb8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfebb: mov dword ptr [0xb7e524], edx */
  W32((uint32_t)(0xb7e524u), edx);
/* 7bfec1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfec3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfec3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bfec5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfec7: push 0xad1428 */
  { uint32_t v = 0xad1428u; esp -= 4; W32(esp, v); }
/* 7bfecc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfecf: mov dword ptr [0xb7e528], eax */
  W32((uint32_t)(0xb7e528u), eax);
/* 7bfed4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfed6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfed6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bfed8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfeda: mov dword ptr [0xb7e52c], ecx */
  W32((uint32_t)(0xb7e52cu), ecx);
/* 7bfee0: push 0xad145c */
  { uint32_t v = 0xad145cu; esp -= 4; W32(esp, v); }
/* 7bfee5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfee8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfeeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfeea: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bfeec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bfeee: push 0xad1484 */
  { uint32_t v = 0xad1484u; esp -= 4; W32(esp, v); }
/* 7bfef3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bfef6: mov dword ptr [0xb7e530], edx */
  W32((uint32_t)(0xb7e530u), edx);
/* 7bfefc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bfefeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bfefe: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bff00: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff02: push 0xad14b0 */
  { uint32_t v = 0xad14b0u; esp -= 4; W32(esp, v); }
/* 7bff07: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff0a: mov dword ptr [0xb7e534], eax */
  W32((uint32_t)(0xb7e534u), eax);
/* 7bff0f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff11: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bff13: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff15: mov dword ptr [0xb7e538], ecx */
  W32((uint32_t)(0xb7e538u), ecx);
/* 7bff1b: push 0xad14cc */
  { uint32_t v = 0xad14ccu; esp -= 4; W32(esp, v); }
/* 7bff20: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff23: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff25: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bff27: mov dword ptr [0xb7e53c], edx */
  W32((uint32_t)(0xb7e53cu), edx);
/* 7bff2d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff2f: push 0xad14f4 */
  { uint32_t v = 0xad14f4u; esp -= 4; W32(esp, v); }
/* 7bff34: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff37: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff39: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bff3b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff3d: push 0xad1510 */
  { uint32_t v = 0xad1510u; esp -= 4; W32(esp, v); }
/* 7bff42: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff45: mov dword ptr [0xb7e540], eax */
  W32((uint32_t)(0xb7e540u), eax);
/* 7bff4a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bff4e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff50: mov dword ptr [0xb7e544], ecx */
  W32((uint32_t)(0xb7e544u), ecx);
/* 7bff56: push 0xad1534 */
  { uint32_t v = 0xad1534u; esp -= 4; W32(esp, v); }
/* 7bff5b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff5e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff60: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bff62: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff64: push 0xad1548 */
  { uint32_t v = 0xad1548u; esp -= 4; W32(esp, v); }
/* 7bff69: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff6c: mov dword ptr [0xb7e548], edx */
  W32((uint32_t)(0xb7e548u), edx);
/* 7bff72: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff74: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bff76: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff78: push 0xad1560 */
  { uint32_t v = 0xad1560u; esp -= 4; W32(esp, v); }
/* 7bff7d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff80: mov dword ptr [0xb7e54c], eax */
  W32((uint32_t)(0xb7e54cu), eax);
/* 7bff85: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff87: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bff89: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff8b: mov dword ptr [0xb7e550], ecx */
  W32((uint32_t)(0xb7e550u), ecx);
/* 7bff91: push 0xad1574 */
  { uint32_t v = 0xad1574u; esp -= 4; W32(esp, v); }
/* 7bff96: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bff99: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bff9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bff9b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bff9d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7bff9f: push 0xad15a0 */
  { uint32_t v = 0xad15a0u; esp -= 4; W32(esp, v); }
/* 7bffa4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bffa7: mov dword ptr [0xb7e554], edx */
  W32((uint32_t)(0xb7e554u), edx);
/* 7bffad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bffafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bffaf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bffb1: mov dword ptr [0xb7e558], eax */
  W32((uint32_t)(0xb7e558u), eax);
/* 7bffb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bffb9: mov ecx, dword ptr [eax + 0x78] */
  ecx = R32((uint32_t)(eax + 0x78u));
/* 7bffbc: mov ebx, 1 */
  ebx = 0x1u;
/* 7bffc1: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7bffc3: mov dword ptr [eax + 0x78], ecx */
  W32((uint32_t)(eax + 0x78u), ecx);
/* 7bffc6: call 0x6c85b7 */
  esp -= 4; W32(esp, 0x7bffcbu); SPILL(); f_6c85b7(); if (g_unwind) return; RELOAD();
/* 7bffcb: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* 7bffd0: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 7bffd5: call dword ptr [0xcfa85c] */
  esp -= 4; W32(esp, 0x7bffdbu); SPILL(); f_4e3ee0(); if (g_unwind) return; /* Core!?Init@FMemStack@@QAEXH@Z */ RELOAD();
/* 7bffdb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bffde: mov edx, dword ptr [ecx + 0x74] */
  edx = R32((uint32_t)(ecx + 0x74u));
/* 7bffe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bffe2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bffe3: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 7bffe8: shl edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7bffeb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bffec: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7bfff1: call dword ptr [0xcfa858] */
  esp -= 4; W32(esp, 0x7bfff7u); SPILL(); f_4e4331(); if (g_unwind) return; /* Core!?Init@FMemCache@@QAEXHHPAXH@Z */ RELOAD();
/* 7bfff7: mov ecx, 0xce8310 */
  ecx = 0xce8310u;
/* 7bfffc: call 0x6c6325 */
  esp -= 4; W32(esp, 0x7c0001u); SPILL(); f_6c6325(); if (g_unwind) return; RELOAD();
/* 7c0001: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c0004: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
/* 7c0007: mov ecx, dword ptr [0xcfa790] */
  ecx = R32((uint32_t)(0xcfa790u));
/* 7c000d: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c000f: je 0x7c0014 */
  if (zf) goto L_7c0014;
L_7c0011: /* 7c0011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0012: jmp 0x7c0017 */
  goto L_7c0017;
L_7c0014: /* 7c0014: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c0016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7c0017: /* 7c0017: call dword ptr [0xcfa854] */
  esp -= 4; W32(esp, 0x7c001du); SPILL(); f_4e1b2c(); if (g_unwind) return; /* Core!?appRandInit@@YAXH@Z */ RELOAD();
/* 7c001d: mov eax, dword ptr [0xce6f04] */
  eax = R32((uint32_t)(0xce6f04u));
/* 7c0022: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0025: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0027: jne 0x7c005a */
  if (!zf) goto L_7c005a;
L_7c0029: /* 7c0029: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7c002f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7c0031: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c0033: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 7c0038: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 7c003a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7c003cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c003c: mov ecx, eax */
  ecx = eax;
/* 7c003e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c0041: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0043: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7c0046: je 0x7c004f */
  if (zf) goto L_7c004f;
L_7c0048: /* 7c0048: call 0x6c5b1e */
  esp -= 4; W32(esp, 0x7c004du); SPILL(); f_6c5b1e(); if (g_unwind) return; RELOAD();
/* 7c004d: jmp 0x7c0051 */
  goto L_7c0051;
L_7c004f: /* 7c004f: xor eax, eax */
  eax = 0;
L_7c0051: /* 7c0051: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c0055: mov dword ptr [0xce6f04], eax */
  W32((uint32_t)(0xce6f04u), eax);
L_7c005a: /* 7c005a: cmp dword ptr [0xcd8a5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8a5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0060: jne 0x7c0094 */
  if (!zf) goto L_7c0094;
L_7c0062: /* 7c0062: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7c0068: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c006a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c006c: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 7c0071: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 7c0073: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7c0075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0075: mov ecx, eax */
  ecx = eax;
/* 7c0077: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c007a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c007c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7c0080: je 0x7c0089 */
  if (zf) goto L_7c0089;
L_7c0082: /* 7c0082: call 0x6c3c9c */
  esp -= 4; W32(esp, 0x7c0087u); SPILL(); f_6c3c9c(); if (g_unwind) return; RELOAD();
/* 7c0087: jmp 0x7c008b */
  goto L_7c008b;
L_7c0089: /* 7c0089: xor eax, eax */
  eax = 0;
L_7c008b: /* 7c008b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c008f: mov dword ptr [0xcd8a5c], eax */
  W32((uint32_t)(0xcd8a5cu), eax);
L_7c0094: /* 7c0094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0095: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7c0098: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c009eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c009e: mov edi, dword ptr [0xcfa550] */
  edi = R32((uint32_t)(0xcfa550u));
/* 7c00a4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c00a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c00a6: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7c00ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c00ae: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c00b1: mov esi, dword ptr [0xcfa1e4] */
  esi = R32((uint32_t)(0xcfa1e4u));
/* 7c00b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c00b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c00bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c00bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c00be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c00c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c00c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c00c2: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 7c00c7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7c00c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c00c9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c00cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c00ce: je 0x7c00d9 */
  if (zf) goto L_7c00d9;
L_7c00d0: /* 7c00d0: mov ecx, eax */
  ecx = eax;
/* 7c00d2: call 0x6cc93c */
  esp -= 4; W32(esp, 0x7c00d7u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 7c00d7: jmp 0x7c00db */
  goto L_7c00db;
L_7c00d9: /* 7c00d9: xor eax, eax */
  eax = 0;
L_7c00db: /* 7c00db: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c00de: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* 7c00e1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c00e4: call dword ptr [0xcfa7a4] */
  esp -= 4; W32(esp, 0x7c00eau); SPILL(); f_4e3ef4(); if (g_unwind) return; /* Core!?AddToRoot@UObject@@QAEXXZ */ RELOAD();
/* 7c00ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c00ec: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7c00ef: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c00f5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c00f5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c00f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c00f7: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7c00fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c00ff: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c0102: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0104: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0106: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c0107: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0109: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c010b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c010c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c010d: push 0xb7f0a8 */
  { uint32_t v = 0xb7f0a8u; esp -= 4; W32(esp, v); }
/* 7c0112: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7c0114u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0114: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0117: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0119: je 0x7c0129 */
  if (zf) goto L_7c0129;
L_7c011b: /* 7c011b: mov ecx, eax */
  ecx = eax;
/* 7c011d: call 0x6cad85 */
  esp -= 4; W32(esp, 0x7c0122u); SPILL(); f_6cad85(); if (g_unwind) return; RELOAD();
/* 7c0122: mov dword ptr [0xb7d820], eax */
  W32((uint32_t)(0xb7d820u), eax);
/* 7c0127: jmp 0x7c0133 */
  goto L_7c0133;
L_7c0129: /* 7c0129: mov dword ptr [0xb7d820], 0 */
  W32((uint32_t)(0xb7d820u), 0x0u);
L_7c0133: /* 7c0133: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7c0139u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7c0139: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c013b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7c013e: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 7c0145: jne 0x7c015f */
  if (!zf) goto L_7c015f;
L_7c0147: /* 7c0147: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 7c014c: push 0xac3d40 */
  { uint32_t v = 0xac3d40u; esp -= 4; W32(esp, v); }
/* 7c0151: push 0xac3d38 */
  { uint32_t v = 0xac3d38u; esp -= 4; W32(esp, v); }
/* 7c0156: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7c015cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7c015c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c015f: /* 7c015f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c0162: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7c0167u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7c0167: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_7c016a: /* 7c016a: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7c016f: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c0172: jge 0x7c01e2 */
  if ((sf == of)) goto L_7c01e2;
L_7c0174: /* 7c0174: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c0176: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7c0179: call dword ptr [0xcfa850] */
  esp -= 4; W32(esp, 0x7c017fu); SPILL(); f_4e2883(); if (g_unwind) return; /* Core!?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */ RELOAD();
/* 7c017f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0181: jne 0x7c01bc */
  if (!zf) goto L_7c01bc;
L_7c0183: /* 7c0183: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7c0188: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c018a: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 7c018d: mov ecx, edi */
  ecx = edi;
/* 7c018f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c0195u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c0195: mov ecx, edi */
  ecx = edi;
/* 7c0197: mov ebx, eax */
  ebx = eax;
/* 7c0199: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7c019fu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7c019f: mov edi, eax */
  edi = eax;
/* 7c01a1: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7c01a7u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7c01a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c01a9: push 0x2002 */
  { uint32_t v = 0x2002u; esp -= 4; W32(esp, v); }
/* 7c01ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c01b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c01b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c01b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c01b3: call dword ptr [0xcfa7c4] */
  esp -= 4; W32(esp, 0x7c01b9u); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7c01b9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c01bc: /* 7c01bc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7c01c1: /* 7c01c1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7c01c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c01c5: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c01c7: jge 0x7c01e2 */
  if ((sf == of)) goto L_7c01e2;
L_7c01c9: /* 7c01c9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c01cb: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7c01ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c01d0: je 0x7c01c1 */
  if (zf) goto L_7c01c1;
L_7c01d2: /* 7c01d2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c01d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c01d6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c01dcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c01dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c01de: je 0x7c01bc */
  if (zf) goto L_7c01bc;
L_7c01e0: /* 7c01e0: jmp 0x7c016a */
  goto L_7c016a;
L_7c01e2: /* 7c01e2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7c01e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c01ea: push 0xad15c0 */
  { uint32_t v = 0xad15c0u; esp -= 4; W32(esp, v); }
/* 7c01ef: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 7c01f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c01f5: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c01fbu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c01fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c01fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0201: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c0202: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c0203: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c020a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c020b: mov esp, ebp */
  esp = ebp;
/* 7c020d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c020e: ret  */
  esp += 4; SPILL(); return;
}

void f_7c020f(void) {
  LOAD_REGS();
L_7c020f: /* 7c020f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c0212: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c0217: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7c021a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c021b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7c021e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c0223u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c0223(); return;
}

void f_7c0223(void) {
  LOAD_REGS();
L_7c0223: /* 7c0223: push 0xa0dde0 */
  { uint32_t v = 0xa0dde0u; esp -= 4; W32(esp, v); }
/* 7c0228: push 0xad15f4 */
  { uint32_t v = 0xad15f4u; esp -= 4; W32(esp, v); }
/* 7c022d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c0233u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c0233: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0236: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0238: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c023a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c023fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c023f: guest_badaddr(0x7c023f); return;
}

void f_7c0670(void) {
  LOAD_REGS();
L_7c0670: /* 7c0670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0671: mov esi, ecx */
  esi = ecx;
/* 7c0673: call 0x6c4cb9 */
  esp -= 4; W32(esp, 0x7c0678u); SPILL(); f_6c4cb9(); if (g_unwind) return; RELOAD();
/* 7c0678: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c067d: je 0x7c068c */
  if (zf) goto L_7c068c;
L_7c067f: /* 7c067f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7c0684: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c0686: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c0688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0689: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7c068cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c068c: /* 7c068c: mov eax, esi */
  eax = esi;
/* 7c068e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c068f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c06b0(void) {
  LOAD_REGS();
L_7c06b0: /* 7c06b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c06b1: mov ebp, esp */
  ebp = esp;
/* 7c06b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c06b5: push 0x9cf611 */
  { uint32_t v = 0x9cf611u; esp -= 4; W32(esp, v); }
/* 7c06ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c06c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c06c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c06c8: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c06cb: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7c06d0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c06d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c06d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c06d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c06d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c06d7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7c06da: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c06dd: mov esi, ecx */
  esi = ecx;
/* 7c06df: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c06e6: je 0x7c06fd */
  if (zf) goto L_7c06fd;
L_7c06e8: /* 7c06e8: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 7c06eb: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 7c06ee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c06f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c06f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c06f3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7c06f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c06f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c06f7: jne 0x7c07bb */
  if (!zf) goto L_7c07bb;
L_7c06fd: /* 7c06fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7c0700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0701: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c0702: call dword ptr [0xcfa868] */
  esp -= 4; W32(esp, 0x7c0708u); SPILL(); f_4e1109(); if (g_unwind) return; /* Core!?StaticExec@UObject@@SAHPBGAAVFOutputDevice@@@Z */ RELOAD();
/* 7c0708: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c070b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c070d: jne 0x7c07bb */
  if (!zf) goto L_7c07bb;
L_7c0713: /* 7c0713: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c0716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0717: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c0718: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7c071d: call dword ptr [0xcfa864] */
  esp -= 4; W32(esp, 0x7c0723u); SPILL(); f_4e197e(); if (g_unwind) return; /* Core!?Exec@FMemCache@@QAEHPBGAAVFOutputDevice@@@Z */ RELOAD();
/* 7c0723: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0725: jne 0x7c07bb */
  if (!zf) goto L_7c07bb;
L_7c072b: /* 7c072b: mov eax, dword ptr [0xcfa860] */
  eax = R32((uint32_t)(0xcfa860u));
/* 7c0730: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c0732: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0734: je 0x7c0743 */
  if (zf) goto L_7c0743;
L_7c0736: /* 7c0736: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c0739: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c073b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c073c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c073d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7c073fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c073f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0741: jne 0x7c07bb */
  if (!zf) goto L_7c07bb;
L_7c0743: /* 7c0743: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7c0746: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0748: je 0x7c075b */
  if (zf) goto L_7c075b;
L_7c074a: /* 7c074a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c074d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c074f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0751: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7c0757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0757: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0759: jne 0x7c07bb */
  if (!zf) goto L_7c07bb;
L_7c075b: /* 7c075b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7c075e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0760: je 0x7c0773 */
  if (zf) goto L_7c0773;
L_7c0762: /* 7c0762: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 7c0765: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 7c0768: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c076b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c076c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c076d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7c076fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c076f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0771: jne 0x7c07bb */
  if (!zf) goto L_7c07bb;
L_7c0773: /* 7c0773: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7c0779: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c077b: je 0x7c078b */
  if (zf) goto L_7c078b;
L_7c077d: /* 7c077d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c0780: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c0782: call 0x6c1889 */
  esp -= 4; W32(esp, 0x7c0787u); SPILL(); f_6c1889(); if (g_unwind) return; RELOAD();
/* 7c0787: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0789: jne 0x7c07bb */
  if (!zf) goto L_7c07bb;
L_7c078b: /* 7c078b: mov ebx, dword ptr [0xcfa5b8] */
  ebx = R32((uint32_t)(0xcfa5b8u));
/* 7c0791: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c0794: push 0xad1640 */
  { uint32_t v = 0xad1640u; esp -= 4; W32(esp, v); }
/* 7c0799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c079a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c079cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c079c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c079f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c07a1: je 0x7c07d3 */
  if (zf) goto L_7c07d3;
L_7c07a3: /* 7c07a3: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7c07a6: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7c07a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c07ab: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7c07aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c07ae: push 0xad164c */
  { uint32_t v = 0xad164cu; esp -= 4; W32(esp, v); }
/* 7c07b3: mov ecx, edi */
  ecx = edi;
/* 7c07b5: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7c07bbu); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
L_7c07bb: /* 7c07bb: mov eax, 1 */
  eax = 0x1u;
/* 7c07c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c07c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c07ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c07cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c07cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c07cd: mov esp, ebp */
  esp = ebp;
/* 7c07cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c07d0: ret 8 */
  esp += 12; SPILL(); return;
L_7c07d3: /* 7c07d3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c07d6: push 0xad1678 */
  { uint32_t v = 0xad1678u; esp -= 4; W32(esp, v); }
/* 7c07db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c07dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c07deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c07de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c07e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c07e3: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7c07e6: je 0x7c0a1c */
  if (zf) goto L_7c0a1c;
L_7c07ec: /* 7c07ec: push 0xad1684 */
  { uint32_t v = 0xad1684u; esp -= 4; W32(esp, v); }
/* 7c07f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c07f2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c07f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c07f4: xor edi, edi */
  edi = 0;
/* 7c07f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c07f9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c07fb: je 0x7c080c */
  if (zf) goto L_7c080c;
L_7c07fd: /* 7c07fd: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 7c0800: xor edx, edx */
  edx = 0;
/* 7c0802: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0804: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c0807: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 7c080a: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c080c: /* 7c080c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c080f: push 0xad1690 */
  { uint32_t v = 0xad1690u; esp -= 4; W32(esp, v); }
/* 7c0814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0815: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0817u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0817: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c081a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c081c: jne 0x7c09ff */
  if (!zf) goto L_7c09ff;
L_7c0822: /* 7c0822: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7c0825: push 0xad16a0 */
  { uint32_t v = 0xad16a0u; esp -= 4; W32(esp, v); }
/* 7c082a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c082b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c082du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c082d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0830: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0832: jne 0x7c09ff */
  if (!zf) goto L_7c09ff;
L_7c0838: /* 7c0838: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7c083b: push 0xad16ac */
  { uint32_t v = 0xad16acu; esp -= 4; W32(esp, v); }
/* 7c0840: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c0841: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0843: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0846: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0848: je 0x7c085c */
  if (zf) goto L_7c085c;
L_7c084a: /* 7c084a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 7c084d: xor eax, eax */
  eax = 0;
/* 7c084f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0851: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c0854: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7c0857: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c085c: /* 7c085c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7c085f: push 0xad16b4 */
  { uint32_t v = 0xad16b4u; esp -= 4; W32(esp, v); }
/* 7c0864: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c0865: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0867u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0867: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c086a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c086c: je 0x7c0880 */
  if (zf) goto L_7c0880;
L_7c086e: /* 7c086e: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 7c0871: xor edx, edx */
  edx = 0;
/* 7c0873: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0875: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c0878: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7c087b: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c0880: /* 7c0880: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c0883: push 0xad16c4 */
  { uint32_t v = 0xad16c4u; esp -= 4; W32(esp, v); }
/* 7c0888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0889: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c088bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c088b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c088e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0890: je 0x7c08a4 */
  if (zf) goto L_7c08a4;
L_7c0892: /* 7c0892: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 7c0895: xor ecx, ecx */
  ecx = 0;
/* 7c0897: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0899: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c089c: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 7c089f: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c08a4: /* 7c08a4: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7c08a7: push 0xad16d8 */
  { uint32_t v = 0xad16d8u; esp -= 4; W32(esp, v); }
/* 7c08ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c08ad: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c08afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c08af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c08b2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c08b4: je 0x7c08c8 */
  if (zf) goto L_7c08c8;
L_7c08b6: /* 7c08b6: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 7c08b9: xor eax, eax */
  eax = 0;
/* 7c08bb: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c08bd: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c08c0: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 7c08c3: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c08c8: /* 7c08c8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7c08cb: push 0xad16e4 */
  { uint32_t v = 0xad16e4u; esp -= 4; W32(esp, v); }
/* 7c08d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c08d1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c08d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c08d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c08d6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c08d8: je 0x7c08ec */
  if (zf) goto L_7c08ec;
L_7c08da: /* 7c08da: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7c08dd: xor edx, edx */
  edx = 0;
/* 7c08df: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c08e1: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c08e4: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 7c08e7: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c08ec: /* 7c08ec: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c08ef: push 0xad16fc */
  { uint32_t v = 0xad16fcu; esp -= 4; W32(esp, v); }
/* 7c08f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c08f5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c08f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c08f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c08fa: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c08fc: je 0x7c0910 */
  if (zf) goto L_7c0910;
L_7c08fe: /* 7c08fe: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7c0901: xor ecx, ecx */
  ecx = 0;
/* 7c0903: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0905: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c0908: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 7c090b: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c0910: /* 7c0910: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7c0913: push 0xad170c */
  { uint32_t v = 0xad170cu; esp -= 4; W32(esp, v); }
/* 7c0918: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c0919: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c091bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c091b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c091e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0920: je 0x7c0934 */
  if (zf) goto L_7c0934;
L_7c0922: /* 7c0922: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7c0925: xor eax, eax */
  eax = 0;
/* 7c0927: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0929: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c092c: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 7c092f: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c0934: /* 7c0934: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7c0937: push 0xad171c */
  { uint32_t v = 0xad171cu; esp -= 4; W32(esp, v); }
/* 7c093c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c093d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c093fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c093f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0942: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0944: je 0x7c0958 */
  if (zf) goto L_7c0958;
L_7c0946: /* 7c0946: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 7c0949: xor edx, edx */
  edx = 0;
/* 7c094b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c094d: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c0950: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 7c0953: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c0958: /* 7c0958: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c095b: push 0xad1728 */
  { uint32_t v = 0xad1728u; esp -= 4; W32(esp, v); }
/* 7c0960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0961: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0963u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0963: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0966: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0968: je 0x7c097c */
  if (zf) goto L_7c097c;
L_7c096a: /* 7c096a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 7c096d: xor ecx, ecx */
  ecx = 0;
/* 7c096f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0971: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c0974: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 7c0977: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c097c: /* 7c097c: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7c097f: push 0xad1730 */
  { uint32_t v = 0xad1730u; esp -= 4; W32(esp, v); }
/* 7c0984: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c0985: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0987u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0987: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c098a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c098c: je 0x7c09bb */
  if (zf) goto L_7c09bb;
L_7c098e: /* 7c098e: mov eax, 1 */
  eax = 0x1u;
/* 7c0993: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7c0996: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7c0999: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 7c099c: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 7c099f: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 7c09a2: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 7c09a5: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 7c09a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c09ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c09b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c09b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c09b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c09b5: mov esp, ebp */
  esp = ebp;
/* 7c09b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c09b8: ret 8 */
  esp += 12; SPILL(); return;
L_7c09bb: /* 7c09bb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c09be: push 0xad1738 */
  { uint32_t v = 0xad1738u; esp -= 4; W32(esp, v); }
/* 7c09c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c09c4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c09c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c09c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c09c9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c09cb: je 0x7c09ea */
  if (zf) goto L_7c09ea;
L_7c09cd: /* 7c09cd: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 7c09d0: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 7c09d3: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 7c09d6: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 7c09d9: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 7c09dc: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 7c09df: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 7c09e2: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 7c09e5: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c09ea: /* 7c09ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c09ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c09ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c09ef: xor eax, eax */
  eax = 0;
/* 7c09f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c09f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c09f9: mov esp, ebp */
  esp = ebp;
/* 7c09fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c09fc: ret 8 */
  esp += 12; SPILL(); return;
L_7c09ff: /* 7c09ff: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 7c0a02: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 7c0a05: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 7c0a08: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 7c0a0b: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 7c0a0e: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 7c0a11: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 7c0a14: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 7c0a17: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c0a1c: /* 7c0a1c: push 0xad1744 */
  { uint32_t v = 0xad1744u; esp -= 4; W32(esp, v); }
/* 7c0a21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c0a22: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0a24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0a24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0a27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0a29: je 0x7c09ea */
  if (zf) goto L_7c09ea;
L_7c0a2b: /* 7c0a2b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c0a2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0a30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c0a31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0a33: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7c0a36: call 0x6c440d */
  esp -= 4; W32(esp, 0x7c0a3bu); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7c0a3b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c0a3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0a40: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c0a44: je 0x7c0b2d */
  if (zf) goto L_7c0b2d;
L_7c0a4a: /* 7c0a4a: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7c0a4d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0a53u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0a53: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7c0a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0a5a: push 0xad1758 */
  { uint32_t v = 0xad1758u; esp -= 4; W32(esp, v); }
/* 7c0a5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0a60: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0a62: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0a65: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7c0a68: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0a6eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0a6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0a6f: push 0xad177c */
  { uint32_t v = 0xad177cu; esp -= 4; W32(esp, v); }
/* 7c0a74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0a75: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0a77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0a77: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7c0a7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0a7e: push 0xad17a0 */
  { uint32_t v = 0xad17a0u; esp -= 4; W32(esp, v); }
/* 7c0a83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0a84: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0a86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0a86: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0a89: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7c0a8c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0a92u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0a92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0a93: push 0xad17c4 */
  { uint32_t v = 0xad17c4u; esp -= 4; W32(esp, v); }
/* 7c0a98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0a99: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0a9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0a9b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7c0a9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0aa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c0aa2: push 0xad17e8 */
  { uint32_t v = 0xad17e8u; esp -= 4; W32(esp, v); }
/* 7c0aa7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0aa8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0aaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0aaa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0aad: xor esi, esi */
  esi = 0;
/* 7c0aaf: nop  */
L_7c0ab0: /* 7c0ab0: cmp esi, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c0ab3: jge 0x7c0ad4 */
  if ((sf == of)) goto L_7c0ad4;
L_7c0ab5: /* 7c0ab5: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7c0ab8: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7c0abb: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7c0abe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0ac4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0ac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0ac5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0ac6: push 0xad180c */
  { uint32_t v = 0xad180cu; esp -= 4; W32(esp, v); }
/* 7c0acb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0acc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0ace: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0ad1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c0ad2: jmp 0x7c0ab0 */
  goto L_7c0ab0;
L_7c0ad4: /* 7c0ad4: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7c0ad7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0addu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0add: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0ade: push 0xad1834 */
  { uint32_t v = 0xad1834u; esp -= 4; W32(esp, v); }
/* 7c0ae3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0ae4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0ae6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0ae6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0ae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0aeb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c0aee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c0aef: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7c0af2: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x7c0af7u); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 7c0af7: mov ecx, eax */
  ecx = eax;
/* 7c0af9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7c0afd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0b03u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0b03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0b04: push 0xad1858 */
  { uint32_t v = 0xad1858u; esp -= 4; W32(esp, v); }
/* 7c0b09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0b0a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c0b0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0b0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0b0f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c0b12: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c0b16: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c0b1cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7c0b1c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7c0b1f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c0b23: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7c0b28u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7c0b28: jmp 0x7c07bb */
  goto L_7c07bb;
L_7c0b2d: /* 7c0b2d: push 0xad1880 */
  { uint32_t v = 0xad1880u; esp -= 4; W32(esp, v); }
/* 7c0b32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0b33: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7c0b39u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7c0b39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0b3c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7c0b3f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c0b43: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7c0b48u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7c0b48: jmp 0x7c07bb */
  goto L_7c07bb;
}

void f_7c0b4d(void) {
  LOAD_REGS();
L_7c0b4d: /* 7c0b4d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c0b50: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c0b55: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7c0b58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0b59: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7c0b5c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c0b61u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c0b61(); return;
}

void f_7c0b61(void) {
  LOAD_REGS();
L_7c0b61: /* 7c0b61: push 0xa0de04 */
  { uint32_t v = 0xa0de04u; esp -= 4; W32(esp, v); }
/* 7c0b66: push 0xad1890 */
  { uint32_t v = 0xad1890u; esp -= 4; W32(esp, v); }
/* 7c0b6b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c0b71u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c0b71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0b74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0b76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c0b78: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c0b7du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c0b7d: guest_badaddr(0x7c0b7d); return;
}

void f_7c0cc0(void) {
  LOAD_REGS();
L_7c0cc0: /* 7c0cc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7c0cc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0cc6: je 0x7c0ccd */
  if (zf) goto L_7c0ccd;
L_7c0cc8: /* 7c0cc8: jmp 0x6c1659 */
  SPILL(); f_6c1659(); return;
L_7c0ccd: /* 7c0ccd: ret  */
  esp += 4; SPILL(); return;
}

void f_7c0ce0(void) {
  LOAD_REGS();
L_7c0ce0: /* 7c0ce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7c0ce4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0ce6: je 0x7c0ced */
  if (zf) goto L_7c0ced;
L_7c0ce8: /* 7c0ce8: jmp 0x6cad85 */
  SPILL(); f_6cad85(); return;
L_7c0ced: /* 7c0ced: ret  */
  esp += 4; SPILL(); return;
}

void f_7c0d00(void) {
  LOAD_REGS();
L_7c0d00: /* 7c0d00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c0d01: mov ebp, esp */
  ebp = esp;
/* 7c0d03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c0d05: push 0x9cf630 */
  { uint32_t v = 0x9cf630u; esp -= 4; W32(esp, v); }
/* 7c0d0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c0d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0d11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c0d18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c0d1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c0d1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0d1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0d1e: xor ebx, ebx */
  ebx = 0;
/* 7c0d20: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c0d23: mov edi, ecx */
  edi = ecx;
/* 7c0d25: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c0d28: call dword ptr [0xcfa79c] */
  esp -= 4; W32(esp, 0x7c0d2eu); SPILL(); f_4e211c(); if (g_unwind) return; /* Core!?RemoveFromRoot@UObject@@QAEXXZ */ RELOAD();
/* 7c0d2e: mov dword ptr [edi + 0x34], ebx */
  W32((uint32_t)(edi + 0x34u), ebx);
/* 7c0d31: mov dword ptr [edi + 0x30], ebx */
  W32((uint32_t)(edi + 0x30u), ebx);
/* 7c0d34: call 0x6c551a */
  esp -= 4; W32(esp, 0x7c0d39u); SPILL(); f_6c551a(); if (g_unwind) return; RELOAD();
/* 7c0d39: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 7c0d3e: call dword ptr [0xcfa874] */
  esp -= 4; W32(esp, 0x7c0d44u); SPILL(); f_4e237e(); if (g_unwind) return; /* Core!?Exit@FMemStack@@QAEXXZ */ RELOAD();
/* 7c0d44: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c0d46: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7c0d4b: call dword ptr [0xcfa870] */
  esp -= 4; W32(esp, 0x7c0d51u); SPILL(); f_4e21fd(); if (g_unwind) return; /* Core!?Exit@FMemCache@@QAEXH@Z */ RELOAD();
/* 7c0d51: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7c0d57: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0d59: je 0x7c0d75 */
  if (zf) goto L_7c0d75;
L_7c0d5b: /* 7c0d5b: mov esi, ecx */
  esi = ecx;
/* 7c0d5d: call 0x6c266c */
  esp -= 4; W32(esp, 0x7c0d62u); SPILL(); f_6c266c(); if (g_unwind) return; RELOAD();
/* 7c0d62: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7c0d67: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c0d69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c0d6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0d6c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7c0d6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0d6f: mov dword ptr [0xce6f04], ebx */
  W32((uint32_t)(0xce6f04u), ebx);
L_7c0d75: /* 7c0d75: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 7c0d7b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0d7d: je 0x7c0d99 */
  if (zf) goto L_7c0d99;
L_7c0d7f: /* 7c0d7f: mov esi, ecx */
  esi = ecx;
/* 7c0d81: call 0x6c4cb9 */
  esp -= 4; W32(esp, 0x7c0d86u); SPILL(); f_6c4cb9(); if (g_unwind) return; RELOAD();
/* 7c0d86: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7c0d8b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c0d8d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c0d8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0d90: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7c0d93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0d93: mov dword ptr [0xcd8a5c], ebx */
  W32((uint32_t)(0xcd8a5cu), ebx);
L_7c0d99: /* 7c0d99: mov ecx, edi */
  ecx = edi;
/* 7c0d9b: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x7c0da1u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 7c0da1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c0da4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c0da5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c0da6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c0dad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c0dae: mov esp, ebp */
  esp = ebp;
/* 7c0db0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c0db1: ret  */
  esp += 4; SPILL(); return;
}

void f_7c0db2(void) {
  LOAD_REGS();
L_7c0db2: /* 7c0db2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c0db5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c0dba: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c0dbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c0dbe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c0dc1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c0dc6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c0dc6(); return;
}

void f_7c0dc6(void) {
  LOAD_REGS();
L_7c0dc6: /* 7c0dc6: push 0xa0de28 */
  { uint32_t v = 0xa0de28u; esp -= 4; W32(esp, v); }
/* 7c0dcb: push 0xad15fc */
  { uint32_t v = 0xad15fcu; esp -= 4; W32(esp, v); }
/* 7c0dd0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c0dd6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c0dd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0dd9: xor ebx, ebx */
  ebx = 0;
/* 7c0ddb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c0ddc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c0ddd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c0de2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c0de2: guest_badaddr(0x7c0de2); return;
}

void f_7c0e30(void) {
  LOAD_REGS();
L_7c0e30: /* 7c0e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c0e31: mov ebp, esp */
  ebp = esp;
/* 7c0e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c0e35: push 0x9cf652 */
  { uint32_t v = 0x9cf652u; esp -= 4; W32(esp, v); }
/* 7c0e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c0e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c0e48: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c0e4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c0e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0e4d: mov esi, ecx */
  esi = ecx;
/* 7c0e4f: mov al, byte ptr [esi + 0x44c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x44cu))) & 0xffu);
/* 7c0e55: xor ebx, ebx */
  ebx = 0;
/* 7c0e57: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0e59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0e5a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c0e5d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c0e60: jne 0x7c0e9d */
  if (!zf) goto L_7c0e9d;
L_7c0e62: /* 7c0e62: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7c0e65: push 0xad32c0 */
  { uint32_t v = 0xad32c0u; esp -= 4; W32(esp, v); }
/* 7c0e6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0e6b: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c0e71u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c0e71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0e74: mov ecx, eax */
  ecx = eax;
/* 7c0e76: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c0e7a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0e80u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0e80: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c0e86: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c0e88: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c0e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0e8c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c0e8e: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c0e91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0e91: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c0e94: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7c0e97: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c0e9du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c0e9d: /* 7c0e9d: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 7c0ea3: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7c0ea9u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7c0ea9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c0eab: jne 0x7c0ee8 */
  if (!zf) goto L_7c0ee8;
L_7c0ead: /* 7c0ead: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7c0eb0: push 0xad32f4 */
  { uint32_t v = 0xad32f4u; esp -= 4; W32(esp, v); }
/* 7c0eb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0eb6: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c0ebcu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c0ebc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0ebf: mov ecx, eax */
  ecx = eax;
/* 7c0ec1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7c0ec5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0ecbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0ecb: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c0ed1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c0ed3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c0ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0ed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0ed7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c0ed9: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c0edcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0edc: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c0edf: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7c0ee2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c0ee8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c0ee8: /* 7c0ee8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c0eeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c0eec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c0eed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c0ef4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c0ef5: mov esp, ebp */
  esp = ebp;
/* 7c0ef7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c0ef8: ret  */
  esp += 4; SPILL(); return;
}

void f_7c0ef9(void) {
  LOAD_REGS();
L_7c0ef9: /* 7c0ef9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c0efc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c0f01: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c0f04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c0f05: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c0f08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c0f0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c0f0d(); return;
}

void f_7c0f0d(void) {
  LOAD_REGS();
L_7c0f0d: /* 7c0f0d: push 0xa0de50 */
  { uint32_t v = 0xa0de50u; esp -= 4; W32(esp, v); }
/* 7c0f12: push 0xad3328 */
  { uint32_t v = 0xad3328u; esp -= 4; W32(esp, v); }
/* 7c0f17: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c0f1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c0f1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0f20: xor ebx, ebx */
  ebx = 0;
/* 7c0f22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c0f23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c0f24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c0f29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c0f29: guest_badaddr(0x7c0f29); return;
}

void f_7c0f70(void) {
  LOAD_REGS();
L_7c0f70: /* 7c0f70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c0f71: mov ebp, esp */
  ebp = esp;
/* 7c0f73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c0f75: push 0x9cf6c1 */
  { uint32_t v = 0x9cf6c1u; esp -= 4; W32(esp, v); }
/* 7c0f7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c0f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0f81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c0f88: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c0f8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c0f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0f8d: mov esi, ecx */
  esi = ecx;
/* 7c0f8f: test byte ptr [esi + 0x8c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c0f96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c0f97: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c0f9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c0fa1: je 0x7c0ff7 */
  if (zf) goto L_7c0ff7;
L_7c0fa3: /* 7c0fa3: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c0fa9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c0fa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0faa: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7c0fad: push 0xad3330 */
  { uint32_t v = 0xad3330u; esp -= 4; W32(esp, v); }
/* 7c0fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0fb3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c0fb9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c0fb9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c0fbc: mov ecx, eax */
  ecx = eax;
/* 7c0fbe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c0fc2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c0fc8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c0fc8: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c0fce: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c0fd0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c0fd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c0fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c0fd4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c0fd6: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c0fd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c0fd9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c0fdc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c0fe0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c0fe6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7c0fe6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c0fe9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c0ff0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c0ff1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c0ff2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c0ff3: mov esp, ebp */
  esp = ebp;
/* 7c0ff5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c0ff6: ret  */
  esp += 4; SPILL(); return;
L_7c0ff7: /* 7c0ff7: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7c0ffdu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7c0ffd: mov ecx, eax */
  ecx = eax;
/* 7c0fff: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x7c1005u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 7c1005: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c100c: je 0x7c105c */
  if (zf) goto L_7c105c;
L_7c100e: /* 7c100e: test byte ptr [esi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1015: jne 0x7c105c */
  if (!zf) goto L_7c105c;
L_7c1017: /* 7c1017: mov ecx, esi */
  ecx = esi;
/* 7c1019: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c101fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c101f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1020: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7c1023: push 0xad3380 */
  { uint32_t v = 0xad3380u; esp -= 4; W32(esp, v); }
/* 7c1028: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1029: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c102fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c102f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1032: mov ecx, eax */
  ecx = eax;
/* 7c1034: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7c1038: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c103eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c103e: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1044: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c1046: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1048: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1049: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c104a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c104c: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c104fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c104f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c1052: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1056: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c105cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c105c: /* 7c105c: mov ecx, esi */
  ecx = esi;
/* 7c105e: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7c1064u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7c1064: mov ecx, eax */
  ecx = eax;
/* 7c1066: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x7c106cu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 7c106c: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7c1072: mov ecx, 0x100 */
  ecx = 0x100u;
/* 7c1077: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1079: je 0x7c10c8 */
  if (zf) goto L_7c10c8;
L_7c107b: /* 7c107b: test dword ptr [esi + 0x80], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1081: jne 0x7c10c8 */
  if (!zf) goto L_7c10c8;
L_7c1083: /* 7c1083: mov ecx, esi */
  ecx = esi;
/* 7c1085: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c108bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c108b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c108c: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7c108f: push 0xad3410 */
  { uint32_t v = 0xad3410u; esp -= 4; W32(esp, v); }
/* 7c1094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1095: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c109bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c109b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c109e: mov ecx, eax */
  ecx = eax;
/* 7c10a0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7c10a4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c10aau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c10aa: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c10b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c10b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c10b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c10b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c10b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c10b8: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c10bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c10bb: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c10be: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c10c2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c10c8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c10c8: /* 7c10c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c10ca: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c10cd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c10d3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c10d3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7c10d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c10d7: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 7c10dd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7c10e3u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7c10e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c10e5: je 0x7c1183 */
  if (zf) goto L_7c1183;
L_7c10eb: /* 7c10eb: xor ecx, ecx */
  ecx = 0;
L_7c10ed: /* 7c10ed: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7c10f3: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c10f6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c10f9: jge 0x7c1169 */
  if ((sf == of)) goto L_7c1169;
L_7c10fb: /* 7c10fb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7c10fe: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 7c1101: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1103: je 0x7c1166 */
  if (zf) goto L_7c1166;
L_7c1105: /* 7c1105: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 7c110b: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c110e: jne 0x7c1166 */
  if (!zf) goto L_7c1166;
L_7c1110: /* 7c1110: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7c1116: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c1118: jle 0x7c1145 */
  if ((zf || sf != of)) goto L_7c1145;
L_7c111a: /* 7c111a: xor ebx, ebx */
  ebx = 0;
/* 7c111c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c1120: /* 7c1120: cmp ebx, dword ptr [edi + 0x108] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c1126: jge 0x7c115c */
  if ((sf == of)) goto L_7c115c;
L_7c1128: /* 7c1128: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* 7c112e: lea eax, [esi + 0xfc] */
  eax = (uint32_t)(esi + 0xfcu);
/* 7c1134: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1135: lea ecx, [ecx + ebx*8] */
  ecx = (uint32_t)(ecx + ebx*8);
/* 7c1138: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7c113eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7c113e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1140: jne 0x7c1183 */
  if (!zf) goto L_7c1183;
L_7c1142: /* 7c1142: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c1143: jmp 0x7c1120 */
  goto L_7c1120;
L_7c1145: /* 7c1145: lea edx, [esi + 0xfc] */
  edx = (uint32_t)(esi + 0xfcu);
/* 7c114b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c114c: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 7c1152: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7c1158u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7c1158: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c115a: jne 0x7c1183 */
  if (!zf) goto L_7c1183;
L_7c115c: /* 7c115c: xor eax, eax */
  eax = 0;
/* 7c115e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c1161: je 0x7c1169 */
  if (zf) goto L_7c1169;
L_7c1163: /* 7c1163: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7c1166: /* 7c1166: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c1167: jmp 0x7c10ed */
  goto L_7c10ed;
L_7c1169: /* 7c1169: xor eax, eax */
  eax = 0;
/* 7c116b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c116d: jne 0x7c1183 */
  if (!zf) goto L_7c1183;
L_7c116f: /* 7c116f: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c1174: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c1176: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1178: push 0xad34a8 */
  { uint32_t v = 0xad34a8u; esp -= 4; W32(esp, v); }
/* 7c117d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c117e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1180: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1183u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c1183: /* 7c1183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1185: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c1188: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c118eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c118e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7c1191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1192: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 7c1198: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7c119eu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7c119e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c11a0: je 0x7c1217 */
  if (zf) goto L_7c1217;
L_7c11a2: /* 7c11a2: xor ecx, ecx */
  ecx = 0;
L_7c11a4: /* 7c11a4: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7c11aa: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c11ad: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c11b0: jge 0x7c11fd */
  if ((sf == of)) goto L_7c11fd;
L_7c11b2: /* 7c11b2: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7c11b5: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 7c11b8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c11ba: je 0x7c11fa */
  if (zf) goto L_7c11fa;
L_7c11bc: /* 7c11bc: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 7c11c2: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c11c5: jne 0x7c11fa */
  if (!zf) goto L_7c11fa;
L_7c11c7: /* 7c11c7: lea ebx, [esi + 0x1f8] */
  ebx = (uint32_t)(esi + 0x1f8u);
/* 7c11cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c11ce: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 7c11d4: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7c11dau); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7c11da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c11dc: jne 0x7c1217 */
  if (!zf) goto L_7c1217;
L_7c11de: /* 7c11de: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c11e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c11e2: mov ecx, edi */
  ecx = edi;
/* 7c11e4: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7c11eau); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7c11ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c11eb: mov ecx, eax */
  ecx = eax;
/* 7c11ed: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7c11f3u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7c11f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c11f5: jne 0x7c1217 */
  if (!zf) goto L_7c1217;
L_7c11f7: /* 7c11f7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7c11fa: /* 7c11fa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c11fb: jmp 0x7c11a4 */
  goto L_7c11a4;
L_7c11fd: /* 7c11fd: xor eax, eax */
  eax = 0;
/* 7c11ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1201: jne 0x7c1217 */
  if (!zf) goto L_7c1217;
L_7c1203: /* 7c1203: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1209: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c120b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c120d: push 0xad3538 */
  { uint32_t v = 0xad3538u; esp -= 4; W32(esp, v); }
/* 7c1212: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1214: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1217u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c1217: /* 7c1217: mov ecx, esi */
  ecx = esi;
/* 7c1219: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7c121fu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7c121f: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 7c1225: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1228: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7c122e: je 0x7c1365 */
  if (zf) goto L_7c1365;
L_7c1234: /* 7c1234: xor ecx, ecx */
  ecx = 0;
L_7c1236: /* 7c1236: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7c123c: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c123f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c1242: jge 0x7c1365 */
  if ((sf == of)) goto L_7c1365;
L_7c1248: /* 7c1248: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c124b: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7c124e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1250: je 0x7c1356 */
  if (zf) goto L_7c1356;
L_7c1256: /* 7c1256: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c1258: je 0x7c1356 */
  if (zf) goto L_7c1356;
L_7c125e: /* 7c125e: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 7c1264: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c1267: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 7c126d: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 7c1273: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 7c1279: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 7c127f: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 7c1285: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7c1288: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c128b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c128e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7c1294u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7c1294: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7c1297: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7c129d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c129f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c12a2: jp 0x7c1356 */
  if (pf) goto L_7c1356;
L_7c12a8: /* 7c12a8: mov ecx, edi */
  ecx = edi;
/* 7c12aa: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7c12b0u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7c12b0: mov ecx, esi */
  ecx = esi;
/* 7c12b2: mov ebx, eax */
  ebx = eax;
/* 7c12b4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7c12bau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7c12ba: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c12bc: jne 0x7c1356 */
  if (!zf) goto L_7c1356;
L_7c12c2: /* 7c12c2: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7c12c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c12c9: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 7c12cf: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x7c12d5u); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7c12d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c12d7: je 0x7c1356 */
  if (zf) goto L_7c1356;
L_7c12d9: /* 7c12d9: mov dl, byte ptr [edi + 0x51] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x51u))) & 0xffu);
/* 7c12dc: cmp dl, byte ptr [esi + 0x51] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x51u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c12df: jne 0x7c1356 */
  if (!zf) goto L_7c1356;
L_7c12e1: /* 7c12e1: lea eax, [esi + 0x288] */
  eax = (uint32_t)(esi + 0x288u);
/* 7c12e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c12e8: lea ecx, [edi + 0x288] */
  ecx = (uint32_t)(edi + 0x288u);
/* 7c12ee: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x7c12f4u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 7c12f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c12f6: je 0x7c1356 */
  if (zf) goto L_7c1356;
L_7c12f8: /* 7c12f8: cmp byte ptr [esi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c12fc: jne 0x7c1306 */
  if (!zf) goto L_7c1306;
L_7c12fe: /* 7c12fe: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7c1301: cmp ecx, dword ptr [edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c1304: jne 0x7c1356 */
  if (!zf) goto L_7c1356;
L_7c1306: /* 7c1306: mov ecx, edi */
  ecx = edi;
/* 7c1308: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c130eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c130e: mov ecx, esi */
  ecx = esi;
/* 7c1310: mov edi, eax */
  edi = eax;
/* 7c1312: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c1318u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c1318: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c1319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c131a: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c131d: push 0xad35bc */
  { uint32_t v = 0xad35bcu; esp -= 4; W32(esp, v); }
/* 7c1322: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c1323: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c1329u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c1329: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c132c: mov ecx, eax */
  ecx = eax;
/* 7c132e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7c1332: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1338u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1338: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c133e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c1340: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1342: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1344: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1346: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1349u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1349: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c134c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1350: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1356u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1356: /* 7c1356: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c1359: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7c135f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c1360: jmp 0x7c1236 */
  goto L_7c1236;
L_7c1365: /* 7c1365: test byte ptr [esi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c136c: jne 0x7c13c2 */
  if (!zf) goto L_7c13c2;
L_7c136e: /* 7c136e: fld dword ptr [esi + 0x2dc] */
  { double v = F32((uint32_t)(esi + 0x2dcu)); FPUSH(v); }
/* 7c1374: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c137a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c137c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c137f: jp 0x7c13c2 */
  if (pf) goto L_7c13c2;
L_7c1381: /* 7c1381: mov ecx, esi */
  ecx = esi;
/* 7c1383: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c1389u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c1389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c138a: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7c138d: push 0xad35f0 */
  { uint32_t v = 0xad35f0u; esp -= 4; W32(esp, v); }
/* 7c1392: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1393: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c1395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1395: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1398: mov ecx, eax */
  ecx = eax;
/* 7c139a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7c139e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c13a4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c13a4: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c13aa: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c13ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c13ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c13af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c13b0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c13b2: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c13b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c13b5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c13b8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c13bc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c13c2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c13c2: /* 7c13c2: cmp byte ptr [esi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c13c6: jne 0x7c1410 */
  if (!zf) goto L_7c1410;
L_7c13c8: /* 7c13c8: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 7c13cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c13cd: jne 0x7c1410 */
  if (!zf) goto L_7c1410;
L_7c13cf: /* 7c13cf: mov ecx, esi */
  ecx = esi;
/* 7c13d1: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c13d7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c13d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c13d8: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7c13db: push 0xad3638 */
  { uint32_t v = 0xad3638u; esp -= 4; W32(esp, v); }
/* 7c13e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c13e1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c13e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c13e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c13e6: mov ecx, eax */
  ecx = eax;
/* 7c13e8: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7c13ec: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c13f2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c13f2: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c13f8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c13fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c13fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c13fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c13fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1400: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1403u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1403: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c1406: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c140a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1410u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1410: /* 7c1410: cmp byte ptr [esi + 0x51], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c1414: jne 0x7c1461 */
  if (!zf) goto L_7c1461;
L_7c1416: /* 7c1416: mov eax, dword ptr [esi + 0x278] */
  eax = R32((uint32_t)(esi + 0x278u));
/* 7c141c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c141e: jne 0x7c1461 */
  if (!zf) goto L_7c1461;
L_7c1420: /* 7c1420: mov ecx, esi */
  ecx = esi;
/* 7c1422: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c1428u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c1428: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1429: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7c142c: push 0xad3698 */
  { uint32_t v = 0xad3698u; esp -= 4; W32(esp, v); }
/* 7c1431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1432: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c1434u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1434: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1437: mov ecx, eax */
  ecx = eax;
/* 7c1439: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7c143d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1443u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1443: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1449: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c144b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c144d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c144e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c144f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1451: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1454u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1454: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c1457: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c145b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1461u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1461: /* 7c1461: cmp byte ptr [esi + 0x51], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c1465: jne 0x7c14b2 */
  if (!zf) goto L_7c14b2;
L_7c1467: /* 7c1467: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 7c146d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c146f: jne 0x7c14b2 */
  if (!zf) goto L_7c14b2;
L_7c1471: /* 7c1471: mov ecx, esi */
  ecx = esi;
/* 7c1473: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c1479u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c1479: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c147a: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7c147d: push 0xad36e8 */
  { uint32_t v = 0xad36e8u; esp -= 4; W32(esp, v); }
/* 7c1482: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1483: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c1485u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1485: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1488: mov ecx, eax */
  ecx = eax;
/* 7c148a: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7c148e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1494u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1494: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c149a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c149c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c149e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c149f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c14a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c14a2: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c14a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c14a5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c14a8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c14ac: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c14b2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c14b2: /* 7c14b2: mov al, byte ptr [esi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x29u))) & 0xffu);
/* 7c14b5: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c14b7: je 0x7c14c5 */
  if (zf) goto L_7c14c5;
L_7c14b9: /* 7c14b9: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c14bb: je 0x7c14c5 */
  if (zf) goto L_7c14c5;
L_7c14bd: /* 7c14bd: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c14bf: je 0x7c14c5 */
  if (zf) goto L_7c14c5;
L_7c14c1: /* 7c14c1: cmp al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c14c3: jne 0x7c1506 */
  if (!zf) goto L_7c1506;
L_7c14c5: /* 7c14c5: mov ecx, esi */
  ecx = esi;
/* 7c14c7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c14cdu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c14cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c14ce: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7c14d1: push 0xad3730 */
  { uint32_t v = 0xad3730u; esp -= 4; W32(esp, v); }
/* 7c14d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c14d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c14d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c14d9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c14dc: mov ecx, eax */
  ecx = eax;
/* 7c14de: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7c14e2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c14e8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c14e8: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c14ee: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c14f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c14f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c14f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c14f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c14f6: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c14f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c14f9: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c14fc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1500: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1506u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1506: /* 7c1506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1507: call 0x6c2d92 */
  esp -= 4; W32(esp, 0x7c150cu); SPILL(); f_6c2d92(); if (g_unwind) return; RELOAD();
/* 7c150c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c150f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1511: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1518: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1519: mov esp, ebp */
  esp = ebp;
/* 7c151b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c151c: ret  */
  esp += 4; SPILL(); return;
}

void f_7c151d(void) {
  LOAD_REGS();
L_7c151d: /* 7c151d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c1520: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c1525: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c1528: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c1529: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7c152c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1531u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c1531(); return;
}

void f_7c1531(void) {
  LOAD_REGS();
L_7c1531: /* 7c1531: push 0xa0de90 */
  { uint32_t v = 0xa0de90u; esp -= 4; W32(esp, v); }
/* 7c1536: push 0xad3764 */
  { uint32_t v = 0xad3764u; esp -= 4; W32(esp, v); }
/* 7c153b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c1541u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c1541: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1544: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1546: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1548: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c154du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c154d: guest_badaddr(0x7c154d); return;
}

void f_7c16d0(void) {
  LOAD_REGS();
L_7c16d0: /* 7c16d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c16d1: mov ebp, esp */
  ebp = esp;
/* 7c16d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c16d5: push 0x9cf6f0 */
  { uint32_t v = 0x9cf6f0u; esp -= 4; W32(esp, v); }
/* 7c16da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c16e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c16e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c16e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c16eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c16ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c16ed: mov esi, ecx */
  esi = ecx;
/* 7c16ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c16f0: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 7c16f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c16f9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1700: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1706u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1706: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c170c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c170e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1712: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7c1714: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1717u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1717: mov ecx, esi */
  ecx = esi;
/* 7c1719: call 0x6c2441 */
  esp -= 4; W32(esp, 0x7c171eu); SPILL(); f_6c2441(); if (g_unwind) return; RELOAD();
/* 7c171e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1721: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1722: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c172a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c172b: mov esp, ebp */
  esp = ebp;
/* 7c172d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c172e: ret  */
  esp += 4; SPILL(); return;
}

void f_7c172f(void) {
  LOAD_REGS();
L_7c172f: /* 7c172f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c1732: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c1737: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c173a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c173b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c173e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1743u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c1743(); return;
}

void f_7c1743(void) {
  LOAD_REGS();
L_7c1743: /* 7c1743: push 0xa0dec8 */
  { uint32_t v = 0xa0dec8u; esp -= 4; W32(esp, v); }
/* 7c1748: push 0xad376c */
  { uint32_t v = 0xad376cu; esp -= 4; W32(esp, v); }
/* 7c174d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c1753u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c1753: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1756: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1758: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c175a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c175fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c175f: guest_badaddr(0x7c175f); return;
}

void f_7c1790(void) {
  LOAD_REGS();
L_7c1790: /* 7c1790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c1791: mov ebp, esp */
  ebp = esp;
/* 7c1793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c1795: push 0x9cf700 */
  { uint32_t v = 0x9cf700u; esp -= 4; W32(esp, v); }
/* 7c179a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c17a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c17a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c17a8: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c17ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c17ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c17ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c17ae: xor edi, edi */
  edi = 0;
/* 7c17b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c17b3: mov esi, ecx */
  esi = ecx;
/* 7c17b5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7c17b8: call 0x6c2441 */
  esp -= 4; W32(esp, 0x7c17bdu); SPILL(); f_6c2441(); if (g_unwind) return; RELOAD();
/* 7c17bd: cmp dword ptr [esi + 0x340], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x340u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c17c3: jne 0x7c17e9 */
  if (!zf) goto L_7c17e9;
L_7c17c5: /* 7c17c5: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c17ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c17cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c17ce: push 0xad3a80 */
  { uint32_t v = 0xad3a80u; esp -= 4; W32(esp, v); }
/* 7c17d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c17d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c17d5: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c17d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c17d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c17db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c17e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c17e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c17e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c17e5: mov esp, ebp */
  esp = ebp;
/* 7c17e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c17e8: ret  */
  esp += 4; SPILL(); return;
L_7c17e9: /* 7c17e9: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7c17ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c17f2: mov eax, esp */
  eax = esp;
/* 7c17f4: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7c17fb: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c17fe: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7c1800: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7c1807: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c180a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7c180d: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7c1814: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c1817: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7c181a: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 7c1820: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7c1825: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 7c1828: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7c182b: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 7c182e: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7c1831: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 7c1837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c1838: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c183d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c183e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c183f: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7c1842: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7c1849: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7c1850: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 7c1857: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 7c185e: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 7c1865: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7c186c: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 7c1873: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 7c187a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c187c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c187d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7c1883u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1883: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7c1886: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1888: je 0x7c18b0 */
  if (zf) goto L_7c18b0;
L_7c188a: /* 7c188a: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1890: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c1892: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1894: push 0xad3ac8 */
  { uint32_t v = 0xad3ac8u; esp -= 4; W32(esp, v); }
L_7c1899: /* 7c1899: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c189a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c189c: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c189fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c189f: /* 7c189f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c18a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c18a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c18a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c18ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c18ac: mov esp, ebp */
  esp = ebp;
/* 7c18ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c18af: ret  */
  esp += 4; SPILL(); return;
L_7c18b0: /* 7c18b0: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7c18b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c18b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c18bb: mov edx, esp */
  edx = esp;
/* 7c18bd: mov dword ptr [ebp - 0x24], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x40000000u);
/* 7c18c4: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c18c7: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7c18c9: mov dword ptr [ebp - 0x20], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x40000000u);
/* 7c18d0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c18d3: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7c18d6: mov dword ptr [ebp - 0x1c], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x40000000u);
/* 7c18dd: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c18e0: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7c18e3: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 7c18e9: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7c18ee: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c18f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c18f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c18f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c18f7: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7c18fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c18fb: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7c1901u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1901: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7c1904: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1906: je 0x7c189f */
  if (zf) goto L_7c189f;
L_7c1908: /* 7c1908: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c190d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c190f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1911: push 0xad3b18 */
  { uint32_t v = 0xad3b18u; esp -= 4; W32(esp, v); }
/* 7c1916: jmp 0x7c1899 */
  goto L_7c1899;
}

void f_7c1918(void) {
  LOAD_REGS();
L_7c1918: /* 7c1918: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c191b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c1920: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c1923: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c1924: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c1927: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c192cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c192c(); return;
}

void f_7c192c(void) {
  LOAD_REGS();
L_7c192c: /* 7c192c: push 0xa0defc */
  { uint32_t v = 0xa0defcu; esp -= 4; W32(esp, v); }
/* 7c1931: push 0xad3b68 */
  { uint32_t v = 0xad3b68u; esp -= 4; W32(esp, v); }
/* 7c1936: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c193cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c193c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c193f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1941: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1943: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1948u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c1948: guest_badaddr(0x7c1948); return;
}

void f_7c19c0(void) {
  LOAD_REGS();
L_7c19c0: /* 7c19c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c19c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7c19c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c19c7: je 0x7c19de */
  if (zf) goto L_7c19de;
L_7c19c9: /* 7c19c9: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 7c19ce: mov ecx, esi */
  ecx = esi;
/* 7c19d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c19d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c19d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c19d8: je 0x7c19de */
  if (zf) goto L_7c19de;
L_7c19da: /* 7c19da: mov eax, esi */
  eax = esi;
/* 7c19dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c19dd: ret  */
  esp += 4; SPILL(); return;
L_7c19de: /* 7c19de: xor eax, eax */
  eax = 0;
/* 7c19e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c19e1: ret  */
  esp += 4; SPILL(); return;
}

void f_7c1a00(void) {
  LOAD_REGS();
L_7c1a00: /* 7c1a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c1a01: mov ebp, esp */
  ebp = esp;
/* 7c1a03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c1a05: push 0x9cf719 */
  { uint32_t v = 0x9cf719u; esp -= 4; W32(esp, v); }
/* 7c1a0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c1a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1a11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c1a18: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c1a1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c1a1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1a1d: mov esi, ecx */
  esi = ecx;
/* 7c1a1f: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 7c1a25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1a27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c1a28: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c1a2b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1a32: je 0x7c1adb */
  if (zf) goto L_7c1adb;
L_7c1a38: /* 7c1a38: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7c1a3e: call 0x6c4304 */
  esp -= 4; W32(esp, 0x7c1a43u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 7c1a43: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c1a45: je 0x7c1adb */
  if (zf) goto L_7c1adb;
L_7c1a4b: /* 7c1a4b: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 7c1a51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1a53: je 0x7c1a63 */
  if (zf) goto L_7c1a63;
L_7c1a55: /* 7c1a55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7c1a57: mov ecx, esi */
  ecx = esi;
/* 7c1a59: call dword ptr [eax + 0x17c] */
  { uint32_t t = R32((uint32_t)(eax + 0x17cu)); esp -= 4; W32(esp, 0x7c1a5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1a5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1a61: jne 0x7c1adb */
  if (!zf) goto L_7c1adb;
L_7c1a63: /* 7c1a63: xor edx, edx */
  edx = 0;
/* 7c1a65: jmp 0x7c1a70 */
  goto L_7c1a70;
L_7c1a70: /* 7c1a70: mov ecx, dword ptr [esi + 0x280] */
  ecx = R32((uint32_t)(esi + 0x280u));
/* 7c1a76: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7c1a79: cmp edx, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c1a7c: jge 0x7c1adb */
  if ((sf == of)) goto L_7c1adb;
L_7c1a7e: /* 7c1a7e: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 7c1a81: mov eax, edx */
  eax = edx;
/* 7c1a83: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 7c1a89: mov ecx, dword ptr [eax + edi + 0xf8] */
  ecx = R32((uint32_t)(eax + edi + 0xf8u));
/* 7c1a90: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c1a92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1a94: jne 0x7c1af3 */
  if (!zf) goto L_7c1af3;
L_7c1a96: /* 7c1a96: mov ecx, esi */
  ecx = esi;
/* 7c1a98: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c1a9eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c1a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1a9f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c1aa2: push 0xad3778 */
  { uint32_t v = 0xad3778u; esp -= 4; W32(esp, v); }
/* 7c1aa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c1aa8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c1aaeu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c1aae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1ab1: mov ecx, eax */
  ecx = eax;
/* 7c1ab3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c1ab7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1abdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1abd: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1ac3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c1ac5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1ac7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1ac9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1acb: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1ace: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c1ad1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1ad5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1adbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1adb: /* 7c1adb: mov ecx, esi */
  ecx = esi;
/* 7c1add: call 0x6c2441 */
  esp -= 4; W32(esp, 0x7c1ae2u); SPILL(); f_6c2441(); if (g_unwind) return; RELOAD();
/* 7c1ae2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1ae5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1ae6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1ae7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1aee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1aef: mov esp, ebp */
  esp = ebp;
/* 7c1af1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c1af2: ret  */
  esp += 4; SPILL(); return;
L_7c1af3: /* 7c1af3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c1af4: jmp 0x7c1a70 */
  goto L_7c1a70;
}

void f_7c1a67(void) {
  LOAD_REGS();
L_7c1a67: /* 7c1a67: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7c1a6e: mov edi, edi */
  edi = edi;
L_7c1a70: /* 7c1a70: mov ecx, dword ptr [esi + 0x280] */
  ecx = R32((uint32_t)(esi + 0x280u));
/* 7c1a76: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7c1a79: cmp edx, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c1a7c: jge 0x7c1adb */
  if ((sf == of)) goto L_7c1adb;
L_7c1a7e: /* 7c1a7e: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 7c1a81: mov eax, edx */
  eax = edx;
/* 7c1a83: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 7c1a89: mov ecx, dword ptr [eax + edi + 0xf8] */
  ecx = R32((uint32_t)(eax + edi + 0xf8u));
/* 7c1a90: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c1a92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1a94: jne 0x7c1af3 */
  if (!zf) goto L_7c1af3;
L_7c1a96: /* 7c1a96: mov ecx, esi */
  ecx = esi;
/* 7c1a98: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c1a9eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c1a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1a9f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c1aa2: push 0xad3778 */
  { uint32_t v = 0xad3778u; esp -= 4; W32(esp, v); }
/* 7c1aa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c1aa8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c1aaeu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c1aae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1ab1: mov ecx, eax */
  ecx = eax;
/* 7c1ab3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c1ab7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1abdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1abd: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1ac3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c1ac5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1ac7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1ac9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1acb: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1ace: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c1ad1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1ad5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1adbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1adb: /* 7c1adb: mov ecx, esi */
  ecx = esi;
/* 7c1add: call 0x6c2441 */
  esp -= 4; W32(esp, 0x7c1ae2u); SPILL(); f_6c2441(); if (g_unwind) return; RELOAD();
/* 7c1ae2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1ae5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1ae6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1ae7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1aee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1aef: mov esp, ebp */
  esp = ebp;
/* 7c1af1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c1af2: ret  */
  esp += 4; SPILL(); return;
L_7c1af3: /* 7c1af3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c1af4: jmp 0x7c1a70 */
  goto L_7c1a70;
}

void f_7c1af9(void) {
  LOAD_REGS();
L_7c1af9: /* 7c1af9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c1afc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c1b01: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c1b04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c1b05: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c1b08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1b0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c1b0d(); return;
}

void f_7c1b0d(void) {
  LOAD_REGS();
L_7c1b0d: /* 7c1b0d: push 0xa0df38 */
  { uint32_t v = 0xa0df38u; esp -= 4; W32(esp, v); }
/* 7c1b12: push 0xad37cc */
  { uint32_t v = 0xad37ccu; esp -= 4; W32(esp, v); }
/* 7c1b17: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c1b1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c1b1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1b20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1b24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1b29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c1b29: guest_badaddr(0x7c1b29); return;
}

void f_7c1b80(void) {
  LOAD_REGS();
L_7c1b80: /* 7c1b80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c1b81: mov ebp, esp */
  ebp = esp;
/* 7c1b83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c1b85: push 0x9cf742 */
  { uint32_t v = 0x9cf742u; esp -= 4; W32(esp, v); }
/* 7c1b8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c1b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1b91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c1b98: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c1b9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c1b9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1b9d: xor ebx, ebx */
  ebx = 0;
/* 7c1b9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c1ba0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c1ba3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c1ba6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c1ba9: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7c1bac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c1bb0: /* 7c1bb0: cmp ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7c1bb3: jae 0x7c1d1b */
  if (!cf) goto L_7c1d1b;
L_7c1bb9: /* 7c1bb9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c1bbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1bbe: je 0x7c1c54 */
  if (zf) goto L_7c1c54;
L_7c1bc4: /* 7c1bc4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c1bc7: mov eax, ebx */
  eax = ebx;
/* 7c1bc9: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 7c1bcc: lea edi, [eax + ecx + 0x350] */
  edi = (uint32_t)(eax + ecx + 0x350u);
/* 7c1bd3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c1bd5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1bd7: je 0x7c1c54 */
  if (zf) goto L_7c1c54;
L_7c1bd9: /* 7c1bd9: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7c1bde: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c1be4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c1be4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1be6: je 0x7c1c54 */
  if (zf) goto L_7c1c54;
L_7c1be8: /* 7c1be8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7c1bea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1bec: je 0x7c1bff */
  if (zf) goto L_7c1bff;
L_7c1bee: /* 7c1bee: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7c1bf3: mov ecx, esi */
  ecx = esi;
/* 7c1bf5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c1bfbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c1bfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1bfd: jne 0x7c1c01 */
  if (!zf) goto L_7c1c01;
L_7c1bff: /* 7c1bff: xor esi, esi */
  esi = 0;
L_7c1c01: /* 7c1c01: test byte ptr [esi + 0x7c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x7cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1c05: jne 0x7c1c54 */
  if (!zf) goto L_7c1c54;
L_7c1c07: /* 7c1c07: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c1c09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1c0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1c0d: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x7c1c13u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 7c1c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1c14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c1c15: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c1c18: push 0xad37d8 */
  { uint32_t v = 0xad37d8u; esp -= 4; W32(esp, v); }
/* 7c1c1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c1c1e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c1c24u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c1c24: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1c27: mov ecx, eax */
  ecx = eax;
/* 7c1c29: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c1c2d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1c33u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1c33: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1c39: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c1c3b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1c3e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c1c41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1c42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1c44: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1c47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1c47: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c1c4a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1c4e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1c54u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1c54: /* 7c1c54: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c1c57: mov ecx, ebx */
  ecx = ebx;
/* 7c1c59: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 7c1c5c: mov esi, dword ptr [ecx + edx + 0x350] */
  esi = R32((uint32_t)(ecx + edx + 0x350u));
/* 7c1c63: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1c65: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 7c1c68: je 0x7c1c88 */
  if (zf) goto L_7c1c88;
L_7c1c6a: /* 7c1c6a: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7c1c6f: mov ecx, esi */
  ecx = esi;
/* 7c1c71: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c1c77u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c1c77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1c79: je 0x7c1c88 */
  if (zf) goto L_7c1c88;
L_7c1c7b: /* 7c1c7b: test byte ptr [esi + 0x7c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x7cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1c7f: je 0x7c1c88 */
  if (zf) goto L_7c1c88;
L_7c1c81: /* 7c1c81: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7c1c88: /* 7c1c88: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 7c1c8e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1c90: je 0x7c1ce5 */
  if (zf) goto L_7c1ce5;
L_7c1c92: /* 7c1c92: cmp dword ptr [ecx + 0xb0], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c1c99: jle 0x7c1ce5 */
  if ((zf || sf != of)) goto L_7c1ce5;
L_7c1c9b: /* 7c1c9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1c9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1c9f: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x7c1ca5u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 7c1ca5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1ca6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7c1ca9: push 0xad38c8 */
  { uint32_t v = 0xad38c8u; esp -= 4; W32(esp, v); }
/* 7c1cae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1caf: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c1cb5u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c1cb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1cb8: mov ecx, eax */
  ecx = eax;
/* 7c1cba: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7c1cbe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1cc4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1cc4: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c1cca: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c1ccc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1cce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1ccf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c1cd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1cd3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1cd5: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1cd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1cd8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c1cdb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1cdf: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1ce5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1ce5: /* 7c1ce5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c1ce6: jmp 0x7c1bb0 */
  goto L_7c1bb0;
L_7c1d1b: /* 7c1d1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1d1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1d1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1d20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1d27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1d28: mov esp, ebp */
  esp = ebp;
/* 7c1d2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c1d2b: ret  */
  esp += 4; SPILL(); return;
}

void f_7c1ceb(void) {
  LOAD_REGS();
L_7c1ceb: /* 7c1ceb: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c1cee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c1cf3: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c1cf6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c1cf7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c1cfa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1cffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c1cff(); return;
}

void f_7c1cff(void) {
  LOAD_REGS();
L_7c1cff: /* 7c1cff: push 0xa0df70 */
  { uint32_t v = 0xa0df70u; esp -= 4; W32(esp, v); }
/* 7c1d04: push 0xad3974 */
  { uint32_t v = 0xad3974u; esp -= 4; W32(esp, v); }
/* 7c1d09: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c1d0fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c1d0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1d16: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1d1bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7c1d1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1d1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1d1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1d20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1d27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1d28: mov esp, ebp */
  esp = ebp;
/* 7c1d2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c1d2b: ret  */
  esp += 4; SPILL(); return;
}

void f_7c1da0(void) {
  LOAD_REGS();
L_7c1da0: /* 7c1da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c1da1: mov ebp, esp */
  ebp = esp;
/* 7c1da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c1da5: push 0x9cf760 */
  { uint32_t v = 0x9cf760u; esp -= 4; W32(esp, v); }
/* 7c1daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c1db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c1db8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c1dbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c1dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1dbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c1dbe: xor edi, edi */
  edi = 0;
/* 7c1dc0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c1dc3: mov ebx, ecx */
  ebx = ecx;
/* 7c1dc5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7c1dc8: call 0x6c2441 */
  esp -= 4; W32(esp, 0x7c1dcdu); SPILL(); f_6c2441(); if (g_unwind) return; RELOAD();
/* 7c1dcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c1dce: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c1dd1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c1dd7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c1dd7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7c1dda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1ddb: lea ecx, [ebx + 0x3a4] */
  ecx = (uint32_t)(ebx + 0x3a4u);
/* 7c1de1: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7c1de7u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7c1de7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c1de9: je 0x7c1e55 */
  if (zf) goto L_7c1e55;
L_7c1deb: /* 7c1deb: jmp 0x7c1df0 */
  goto L_7c1df0;
L_7c1df0: /* 7c1df0: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 7c1df6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c1df9: jge 0x7c1e3b */
  if ((sf == of)) goto L_7c1e3b;
L_7c1dfb: /* 7c1dfb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7c1dfe: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7c1e01: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e03: je 0x7c1e38 */
  if (zf) goto L_7c1e38;
L_7c1e05: /* 7c1e05: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 7c1e0a: mov ecx, esi */
  ecx = esi;
/* 7c1e0c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c1e12u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c1e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e14: je 0x7c1e38 */
  if (zf) goto L_7c1e38;
L_7c1e16: /* 7c1e16: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7c1e1c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e1f: jne 0x7c1e38 */
  if (!zf) goto L_7c1e38;
L_7c1e21: /* 7c1e21: lea edx, [ebx + 0x3a4] */
  edx = (uint32_t)(ebx + 0x3a4u);
/* 7c1e27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c1e28: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 7c1e2e: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7c1e34u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7c1e34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e36: jne 0x7c1e55 */
  if (!zf) goto L_7c1e55;
L_7c1e38: /* 7c1e38: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c1e39: jmp 0x7c1df0 */
  goto L_7c1df0;
L_7c1e3b: /* 7c1e3b: xor eax, eax */
  eax = 0;
/* 7c1e3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e3f: jne 0x7c1e55 */
  if (!zf) goto L_7c1e55;
L_7c1e41: /* 7c1e41: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c1e46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c1e48: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1e4a: push 0xad3980 */
  { uint32_t v = 0xad3980u; esp -= 4; W32(esp, v); }
/* 7c1e4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c1e50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1e52: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1e55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c1e55: /* 7c1e55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1e58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1e59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1e5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1e61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1e62: mov esp, ebp */
  esp = ebp;
/* 7c1e64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c1e65: ret  */
  esp += 4; SPILL(); return;
}

void f_7c1ded(void) {
  LOAD_REGS();
L_7c1ded: /* 7c1ded: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7c1df0: /* 7c1df0: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 7c1df6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c1df9: jge 0x7c1e3b */
  if ((sf == of)) goto L_7c1e3b;
L_7c1dfb: /* 7c1dfb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7c1dfe: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7c1e01: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e03: je 0x7c1e38 */
  if (zf) goto L_7c1e38;
L_7c1e05: /* 7c1e05: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 7c1e0a: mov ecx, esi */
  ecx = esi;
/* 7c1e0c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c1e12u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c1e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e14: je 0x7c1e38 */
  if (zf) goto L_7c1e38;
L_7c1e16: /* 7c1e16: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7c1e1c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e1f: jne 0x7c1e38 */
  if (!zf) goto L_7c1e38;
L_7c1e21: /* 7c1e21: lea edx, [ebx + 0x3a4] */
  edx = (uint32_t)(ebx + 0x3a4u);
/* 7c1e27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c1e28: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 7c1e2e: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7c1e34u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7c1e34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e36: jne 0x7c1e55 */
  if (!zf) goto L_7c1e55;
L_7c1e38: /* 7c1e38: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c1e39: jmp 0x7c1df0 */
  goto L_7c1df0;
L_7c1e3b: /* 7c1e3b: xor eax, eax */
  eax = 0;
/* 7c1e3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1e3f: jne 0x7c1e55 */
  if (!zf) goto L_7c1e55;
L_7c1e41: /* 7c1e41: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c1e46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c1e48: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1e4a: push 0xad3980 */
  { uint32_t v = 0xad3980u; esp -= 4; W32(esp, v); }
/* 7c1e4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c1e50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1e52: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1e55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c1e55: /* 7c1e55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1e58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1e59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1e5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1e61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1e62: mov esp, ebp */
  esp = ebp;
/* 7c1e64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c1e65: ret  */
  esp += 4; SPILL(); return;
}

void f_7c1e66(void) {
  LOAD_REGS();
L_7c1e66: /* 7c1e66: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c1e69: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c1e6e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7c1e71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c1e72: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c1e75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1e7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c1e7a(); return;
}

void f_7c1e7a(void) {
  LOAD_REGS();
L_7c1e7a: /* 7c1e7a: push 0xa0dfb8 */
  { uint32_t v = 0xa0dfb8u; esp -= 4; W32(esp, v); }
/* 7c1e7f: push 0xad39fc */
  { uint32_t v = 0xad39fcu; esp -= 4; W32(esp, v); }
/* 7c1e84: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c1e8au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c1e8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1e8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1e8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1e91: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1e96u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c1e96: guest_badaddr(0x7c1e96); return;
}

void f_7c1ee0(void) {
  LOAD_REGS();
L_7c1ee0: /* 7c1ee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c1ee1: mov ebp, esp */
  ebp = esp;
/* 7c1ee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c1ee5: push 0x9cf779 */
  { uint32_t v = 0x9cf779u; esp -= 4; W32(esp, v); }
/* 7c1eea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c1ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1ef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c1ef8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c1efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c1efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1efd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c1efe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c1f01: mov esi, ecx */
  esi = ecx;
/* 7c1f03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1f0a: call 0x6c2441 */
  esp -= 4; W32(esp, 0x7c1f0fu); SPILL(); f_6c2441(); if (g_unwind) return; RELOAD();
/* 7c1f0f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7c1f15: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c1f18: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c1f1a: test byte ptr [eax + 0x44c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1f21: je 0x7c1f90 */
  if (zf) goto L_7c1f90;
L_7c1f23: /* 7c1f23: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 7c1f29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c1f2b: jne 0x7c1f72 */
  if (!zf) goto L_7c1f72;
L_7c1f2d: /* 7c1f2d: mov ecx, esi */
  ecx = esi;
/* 7c1f2f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7c1f35u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7c1f35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1f36: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c1f39: push 0xad3a04 */
  { uint32_t v = 0xad3a04u; esp -= 4; W32(esp, v); }
/* 7c1f3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c1f3f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7c1f45u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7c1f45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1f48: mov ecx, eax */
  ecx = eax;
/* 7c1f4a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c1f4e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7c1f54u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7c1f54: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7c1f5a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7c1f5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c1f5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1f60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c1f62: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1f65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c1f65: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c1f68: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c1f6c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7c1f72u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7c1f72: /* 7c1f72: mov eax, dword ptr [esi + 0x384] */
  eax = R32((uint32_t)(esi + 0x384u));
/* 7c1f78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c1f7a: jge 0x7c1f90 */
  if ((sf == of)) goto L_7c1f90;
L_7c1f7c: /* 7c1f7c: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c1f81: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c1f83: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c1f85: push 0xad3a28 */
  { uint32_t v = 0xad3a28u; esp -= 4; W32(esp, v); }
/* 7c1f8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c1f8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1f8d: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7c1f90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c1f90: /* 7c1f90: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c1f93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c1f94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c1f95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c1f9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c1f9d: mov esp, ebp */
  esp = ebp;
/* 7c1f9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c1fa0: ret  */
  esp += 4; SPILL(); return;
}

void f_7c1fa1(void) {
  LOAD_REGS();
L_7c1fa1: /* 7c1fa1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c1fa4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c1fa9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c1fac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c1fad: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c1fb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1fb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c1fb5(); return;
}

void f_7c1fb5(void) {
  LOAD_REGS();
L_7c1fb5: /* 7c1fb5: push 0xa0dff0 */
  { uint32_t v = 0xa0dff0u; esp -= 4; W32(esp, v); }
/* 7c1fba: push 0xad3a74 */
  { uint32_t v = 0xad3a74u; esp -= 4; W32(esp, v); }
/* 7c1fbf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c1fc5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c1fc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c1fc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1fca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c1fcc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c1fd1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c1fd1: guest_badaddr(0x7c1fd1); return;
}

void f_7c2020(void) {
  LOAD_REGS();
L_7c2020: /* 7c2020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c2021: mov ebp, esp */
  ebp = esp;
/* 7c2023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c2025: push 0x9cf790 */
  { uint32_t v = 0x9cf790u; esp -= 4; W32(esp, v); }
/* 7c202a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c2030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c2038: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c203b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c203c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c203d: mov esi, ecx */
  esi = ecx;
/* 7c203f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2040: xor edi, edi */
  edi = 0;
/* 7c2042: mov ecx, edi */
  ecx = edi;
/* 7c2044: mov eax, esi */
  eax = esi;
/* 7c2046: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c2048: mov edx, edi */
  edx = edi;
/* 7c204a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c204d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c2050: mov eax, edi */
  eax = edi;
/* 7c2052: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 7c2055: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c2057: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c205a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c205d: mov edx, edi */
  edx = edi;
/* 7c205f: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7c2062: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c2064: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7c2067: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c206a: mov ecx, edi */
  ecx = edi;
/* 7c206c: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 7c206f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c2071: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c2074: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c2077: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7c207a: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 7c207d: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c2080: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c2083: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7c2086: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 7c2089: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c208c: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7c208f: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 7c2092: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c2095: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2096: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c2099: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7c209c: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7c209f: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 7c20a2: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c20a5: mov dword ptr [esi + 0xf0], edi */
  W32((uint32_t)(esi + 0xf0u), edi);
/* 7c20ab: mov dword ptr [esi + 0xf4], edi */
  W32((uint32_t)(esi + 0xf4u), edi);
/* 7c20b1: mov dword ptr [esi + 0xf8], edi */
  W32((uint32_t)(esi + 0xf8u), edi);
/* 7c20b7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c20bdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c20bd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c20c0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7c20c3: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* 7c20c9: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 7c20cf: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* 7c20d5: lea eax, [esi + 0x110] */
  eax = (uint32_t)(esi + 0x110u);
/* 7c20db: mov ecx, edi */
  ecx = edi;
/* 7c20dd: mov dword ptr [esi + 0xfc], edx */
  W32((uint32_t)(esi + 0xfcu), edx);
/* 7c20e3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c20e5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7c20e7: mov dword ptr [esi + 0x100], edi */
  W32((uint32_t)(esi + 0x100u), edi);
/* 7c20ed: mov edx, edi */
  edx = edi;
/* 7c20ef: mov dword ptr [esi + 0x140], edi */
  W32((uint32_t)(esi + 0x140u), edi);
/* 7c20f5: mov dword ptr [esi + 0x144], 0x42000000 */
  W32((uint32_t)(esi + 0x144u), 0x42000000u);
/* 7c20ff: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c2102: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2103: add esi, 0x11c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c2109: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c210a: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7c210d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 7c2110: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c2113: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c2116: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x7c211cu); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 7c211c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c211f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2122: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2123: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c212b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c212c: mov esp, ebp */
  esp = ebp;
/* 7c212e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c212f: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2130(void) {
  LOAD_REGS();
L_7c2130: /* 7c2130: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c2133: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c2138: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c213b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c213c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c213f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2144u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c2144(); return;
}

void f_7c2144(void) {
  LOAD_REGS();
L_7c2144: /* 7c2144: push 0xa0e040 */
  { uint32_t v = 0xa0e040u; esp -= 4; W32(esp, v); }
/* 7c2149: push 0xad3d30 */
  { uint32_t v = 0xad3d30u; esp -= 4; W32(esp, v); }
/* 7c214e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c2154u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c2154: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2157: xor edi, edi */
  edi = 0;
/* 7c2159: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c215a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c215b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2160u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c2160: guest_badaddr(0x7c2160); return;
}

void f_7c21d0(void) {
  LOAD_REGS();
L_7c21d0: /* 7c21d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c21d3: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 7c21d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c21d7: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7c21dd: xor esi, esi */
  esi = 0;
/* 7c21df: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 7c21e2: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 7c21e5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7c21eb: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 7c21ee: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 7c21f1: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7c21f7: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 7c21fa: mov eax, dword ptr [ecx + 0x100] */
  eax = R32((uint32_t)(ecx + 0x100u));
/* 7c2200: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7c2201: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c2203: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7c2205: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c2207: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 7c220b: jle 0x7c2278 */
  if ((zf || sf != of)) goto L_7c2278;
L_7c220d: /* 7c220d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c220e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c220f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2210: lea edi, [ecx + 0x30] */
  edi = (uint32_t)(ecx + 0x30u);
L_7c2213: /* 7c2213: mov eax, edi */
  eax = edi;
/* 7c2215: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7c2217: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7c221a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c221d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7c2221: mov edx, dword ptr [ecx + 0x100] */
  edx = R32((uint32_t)(ecx + 0x100u));
/* 7c2227: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7c2229: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c222c: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 7c222f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7c2233: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 7c2236: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 7c2238: mov edx, edi */
  edx = edi;
/* 7c223a: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 7c223c: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 7c223f: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 7c2242: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c2245: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c2248: mov edx, dword ptr [ecx + 0x100] */
  edx = R32((uint32_t)(ecx + 0x100u));
/* 7c224e: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7c2250: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c2253: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 7c2256: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 7c2259: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7c225d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7c225f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c2262: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7c2266: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c2269: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7c226d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c226e: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c2271: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2273: jl 0x7c2213 */
  if ((sf != of)) goto L_7c2213;
L_7c2275: /* 7c2275: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2276: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c2277: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7c2278: /* 7c2278: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2279: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c227c: ret  */
  esp += 4; SPILL(); return;
}

void f_7c22b0(void) {
  LOAD_REGS();
L_7c22b0: /* 7c22b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c22b1: mov ebp, esp */
  ebp = esp;
/* 7c22b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c22b5: push 0x9cf7a0 */
  { uint32_t v = 0x9cf7a0u; esp -= 4; W32(esp, v); }
/* 7c22ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c22c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c22c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c22c8: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c22cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c22cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c22cd: mov esi, ecx */
  esi = ecx;
/* 7c22cf: fld dword ptr [esi + 0x44] */
  { double v = F32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 7c22d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c22d3: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 7c22d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c22d9: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 7c22dc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c22e3: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 7c22e6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7c22ed: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 7c22f0: mov edi, 2 */
  edi = 0x2u;
/* 7c22f5: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 7c22f8: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7c22fb: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7c22fe: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7c2301: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7c2304: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7c2307: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7c230a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7c230d: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c2310: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
L_7c2313: /* 7c2313: cmp edi, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2319: jge 0x7c23d7 */
  if ((sf == of)) goto L_7c23d7;
L_7c231f: /* 7c231f: lea eax, [edi + edi*2 + 0xc] */
  eax = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c2323: fld dword ptr [esi + eax*4 + 8] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x8u)); FPUSH(v); }
/* 7c2327: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 7c232a: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 7c232d: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7c2330: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c2333: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 7c2336: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c2339: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7c233b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c233e: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 7c2341: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7c2344: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7c2347: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7c234a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7c234d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c2350: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7c2353: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7c2356: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7c2359: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c235b: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7c235e: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7c2361: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c2364: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7c2367: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c2369: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7c236c: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7c236f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7c2372: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7c2375: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c2377: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7c237a: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7c237d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7c2380: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7c2386u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7c2386: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7c2389: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7c238c: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7c238f: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7c2392: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c2395: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7c2398: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c239b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7c239e: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7c23a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c23a2: jmp 0x7c2313 */
  goto L_7c2313;
L_7c23d7: /* 7c23d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c23da: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c23dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c23de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c23df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c23e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c23e7: mov esp, ebp */
  esp = ebp;
/* 7c23e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c23ea: ret  */
  esp += 4; SPILL(); return;
}

void f_7c23a7(void) {
  LOAD_REGS();
L_7c23a7: /* 7c23a7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c23aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c23af: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7c23b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c23b3: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7c23b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c23bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c23bb(); return;
}

void f_7c23bb(void) {
  LOAD_REGS();
L_7c23bb: /* 7c23bb: push 0xa0e05c */
  { uint32_t v = 0xa0e05cu; esp -= 4; W32(esp, v); }
/* 7c23c0: push 0xad3d84 */
  { uint32_t v = 0xad3d84u; esp -= 4; W32(esp, v); }
/* 7c23c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c23cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c23cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c23ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c23d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c23d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c23d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7c23d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c23da: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c23dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c23de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c23df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c23e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c23e7: mov esp, ebp */
  esp = ebp;
/* 7c23e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c23ea: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2440(void) {
  LOAD_REGS();
L_7c2440: /* 7c2440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c2441: mov ebp, esp */
  ebp = esp;
/* 7c2443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c2445: push 0x9cf7b0 */
  { uint32_t v = 0x9cf7b0u; esp -= 4; W32(esp, v); }
/* 7c244a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c2450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c2458: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c245b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c245c: mov ebx, ecx */
  ebx = ecx;
/* 7c245e: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* 7c2464: mov eax, ecx */
  eax = ecx;
/* 7c2466: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7c2467: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c2469: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c246a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7c246c: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c246f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2470: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c2473: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c247a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c247d: jle 0x7c2484 */
  if ((zf || sf != of)) goto L_7c2484;
L_7c247f: /* 7c247f: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2482: jle 0x7c249b */
  if ((zf || sf != of)) goto L_7c249b;
L_7c2484: /* 7c2484: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7c2489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c248a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c248c: push 0xad3ef0 */
  { uint32_t v = 0xad3ef0u; esp -= 4; W32(esp, v); }
/* 7c2491: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c2492: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7c2498u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7c2498: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c249b: /* 7c249b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c249e: mov ecx, 0x52 */
  ecx = 0x52u;
/* 7c24a3: mov esi, ebx */
  esi = ebx;
/* 7c24a5: mov edi, edx */
  edi = edx;
/* 7c24a7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7c24a9: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c24af: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c24b2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c24b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c24b5: mov dword ptr [edx + 0x100], eax */
  W32((uint32_t)(edx + 0x100u), eax);
/* 7c24bb: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 7c24be: mov dword ptr [ebx + 0x100], eax */
  W32((uint32_t)(ebx + 0x100u), eax);
/* 7c24c4: xor eax, eax */
  eax = 0;
L_7c24c6: /* 7c24c6: mov esi, dword ptr [edx + 0x100] */
  esi = R32((uint32_t)(edx + 0x100u));
/* 7c24cc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c24cd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c24cf: jge 0x7c24f8 */
  if ((sf == of)) goto L_7c24f8;
L_7c24d1: /* 7c24d1: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 7c24d5: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c24d8: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 7c24db: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7c24dd: lea esi, [eax + eax*2 + 0xc] */
  esi = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c24e1: lea esi, [edx + esi*4] */
  esi = (uint32_t)(edx + esi*4);
/* 7c24e4: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7c24e6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7c24e9: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7c24ec: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c24ef: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7c24f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c24f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c24f6: jmp 0x7c24c6 */
  goto L_7c24c6;
L_7c24f8: /* 7c24f8: mov eax, dword ptr [edx + 0x100] */
  eax = R32((uint32_t)(edx + 0x100u));
/* 7c24fe: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c2501: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c2504: lea ecx, [ebx + 0x30] */
  ecx = (uint32_t)(ebx + 0x30u);
/* 7c2507: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 7c2509: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 7c250c: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7c250e: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 7c2511: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7c2514: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c2517: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c251a: mov esi, dword ptr [ebx + 0xf0] */
  esi = R32((uint32_t)(ebx + 0xf0u));
/* 7c2520: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* 7c2525: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7c2527: mov dword ptr [ebx + 0xf0], esi */
  W32((uint32_t)(ebx + 0xf0u), esi);
/* 7c252d: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 7c2533: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7c2535: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2536: mov dword ptr [edx + 0xf0], ecx */
  W32((uint32_t)(edx + 0xf0u), ecx);
/* 7c253c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c253f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2540: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c2547: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c2548: mov esp, ebp */
  esp = ebp;
/* 7c254a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c254b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c254e(void) {
  LOAD_REGS();
L_7c254e: /* 7c254e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c2551: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c2556: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c2559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c255a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c255d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2562u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c2562(); return;
}

void f_7c2562(void) {
  LOAD_REGS();
L_7c2562: /* 7c2562: push 0xa0e078 */
  { uint32_t v = 0xa0e078u; esp -= 4; W32(esp, v); }
/* 7c2567: push 0xad3f30 */
  { uint32_t v = 0xad3f30u; esp -= 4; W32(esp, v); }
/* 7c256c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c2572u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c2572: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2575: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c2577: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c2579: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c257eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c257e: guest_badaddr(0x7c257e); return;
}

void f_7c25d0(void) {
  LOAD_REGS();
L_7c25d0: /* 7c25d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c25d1: mov ebp, esp */
  ebp = esp;
/* 7c25d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c25d5: push 0x9cf7c0 */
  { uint32_t v = 0x9cf7c0u; esp -= 4; W32(esp, v); }
/* 7c25da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c25e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c25e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c25e8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c25eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c25ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c25ed: lea esi, [ecx + 0xc] */
  esi = (uint32_t)(ecx + 0xcu);
/* 7c25f0: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7c25f7: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c25fa: mov eax, esi */
  eax = esi;
/* 7c25fc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c25fe: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7c2605: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c2608: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c260b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7c2612: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c2615: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2616: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c2619: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c261c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c2623: mov eax, 2 */
  eax = 0x2u;
L_7c2628: /* 7c2628: cmp eax, dword ptr [ecx + 0x100] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c262e: jge 0x7c26a6 */
  if ((sf == of)) goto L_7c26a6;
L_7c2630: /* 7c2630: lea edx, [eax + eax*2 + 0xc] */
  edx = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c2634: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 7c2637: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 7c263a: fsub dword ptr [ecx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x30u)));
/* 7c263d: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 7c2640: fsub dword ptr [ecx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x34u)));
/* 7c2643: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 7c2646: lea edx, [eax + eax*2 + 9] */
  edx = (uint32_t)(eax + eax*2 + 0x9u);
/* 7c264a: fsub dword ptr [ecx + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x38u)));
/* 7c264d: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 7c2650: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 7c2652: fsub dword ptr [ecx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x30u)));
/* 7c2655: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c2656: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c2659: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 7c265c: fsub dword ptr [ecx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x34u)));
/* 7c265f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c2662: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 7c2665: fsub dword ptr [ecx + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x38u)));
/* 7c2668: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c266b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7c266d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c266f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 7c2671: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c2673: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7c2676: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7c2678: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c267a: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7c267d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c267f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c2682: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7c2685: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c2688: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7c268a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c268c: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7c268e: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7c2691: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7c2693: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 7c2695: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c2698: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7c269b: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 7c269e: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7c26a1: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 7c26a4: jmp 0x7c2628 */
  goto L_7c2628;
L_7c26a6: /* 7c26a6: mov ecx, esi */
  ecx = esi;
/* 7c26a8: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7c26aeu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7c26ae: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7c26b1: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c26b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c26b9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c26bc: jp 0x7c26f8 */
  if (pf) goto L_7c26f8;
L_7c26be: /* 7c26be: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c26c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c26c3: jne 0x7c26e0 */
  if (!zf) goto L_7c26e0;
L_7c26c5: /* 7c26c5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7c26ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c26cc: push 0xad3f38 */
  { uint32_t v = 0xad3f38u; esp -= 4; W32(esp, v); }
/* 7c26d1: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7c26d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c26d7: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c26ddu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c26dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c26e0: /* 7c26e0: mov eax, 1 */
  eax = 0x1u;
/* 7c26e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c26e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c26ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c26f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c26f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c26f2: mov esp, ebp */
  esp = ebp;
/* 7c26f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c26f5: ret 4 */
  esp += 8; SPILL(); return;
L_7c26f8: /* 7c26f8: mov ecx, esi */
  ecx = esi;
/* 7c26fa: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7c2700u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7c2700: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c2703: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2704: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2705: xor eax, eax */
  eax = 0;
/* 7c2707: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c270e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c270f: mov esp, ebp */
  esp = ebp;
/* 7c2711: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c2712: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c2715(void) {
  LOAD_REGS();
L_7c2715: /* 7c2715: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c2718: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c271d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c2720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2721: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c2724: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2729u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c2729(); return;
}

void f_7c2729(void) {
  LOAD_REGS();
L_7c2729: /* 7c2729: push 0xa0e0a8 */
  { uint32_t v = 0xa0e0a8u; esp -= 4; W32(esp, v); }
/* 7c272e: push 0xad3f84 */
  { uint32_t v = 0xad3f84u; esp -= 4; W32(esp, v); }
/* 7c2733: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c2739u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c2739: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c273c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c273e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c2740: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2745u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c2745: guest_badaddr(0x7c2745); return;
}

void f_7c27b0(void) {
  LOAD_REGS();
L_7c27b0: /* 7c27b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c27b1: mov ebp, esp */
  ebp = esp;
/* 7c27b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c27b5: push 0x9cf7d0 */
  { uint32_t v = 0x9cf7d0u; esp -= 4; W32(esp, v); }
/* 7c27ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c27c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c27c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c27c8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c27cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c27cc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7c27cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c27d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c27d1: mov esi, ecx */
  esi = ecx;
/* 7c27d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c27d6: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c27d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c27da: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7c27dd: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 7c27e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c27e1: mov ecx, edi */
  ecx = edi;
/* 7c27e3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c27ea: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x7c27f0u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c27f0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c27f2: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7c27f4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7c27f7: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7c27fa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c27fd: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7c2800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c2801: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7c2804: lea edi, [esi + 0x24] */
  edi = (uint32_t)(esi + 0x24u);
/* 7c2807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c2808: mov ecx, edi */
  ecx = edi;
/* 7c280a: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x7c2810u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c2810: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c2813: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c2815: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7c2818: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7c281a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7c281d: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 7c2820: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7c2823: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c2826: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7c2829: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 7c282c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c282f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2830: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 7c2833: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7c2836: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c2838: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c2839: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 7c283b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c283e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c2841: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c2844: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c2847: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x7c284du); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c284d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c2850: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7c2853: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 7c2856: mov edx, esi */
  edx = esi;
/* 7c2858: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c285b: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7c285e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7c2860: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 7c2862: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c2865: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c2868: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c286a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c286d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c2870: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c2873: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c2876: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c2879: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c287c: xor eax, eax */
  eax = 0;
/* 7c287e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_7c2881: /* 7c2881: cmp eax, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2887: jge 0x7c28f1 */
  if ((sf == of)) goto L_7c28f1;
L_7c2889: /* 7c2889: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c288c: lea ecx, [eax + eax*2 + 0xc] */
  ecx = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c2890: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 7c2894: lea edi, [esi + ecx*4] */
  edi = (uint32_t)(esi + ecx*4);
/* 7c2897: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 7c289a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c289b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c289e: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7c28a1: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 7c28a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c28a5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c28a7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7c28aa: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 7c28ac: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c28af: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7c28b2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c28b5: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x7c28bbu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c28bb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7c28be: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c28c0: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7c28c2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c28c5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c28c8: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7c28cb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c28ce: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c28d1: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c28d4: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 7c28d7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c28da: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7c28dc: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7c28df: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c28e2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c28e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7c28e8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7c28eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c28ec: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7c28ef: jmp 0x7c2881 */
  goto L_7c2881;
L_7c28f1: /* 7c28f1: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7c28f4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c28fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c28fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c28ff: jp 0x7c2972 */
  if (pf) goto L_7c2972;
L_7c2901: /* 7c2901: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c2907: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7c2908: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c290a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7c290c: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7c290f: xor edx, edx */
  edx = 0;
L_7c2911: /* 7c2911: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2913: jge 0x7c2972 */
  if ((sf == of)) goto L_7c2972;
L_7c2915: /* 7c2915: lea ecx, [edx + edx*2 + 0xc] */
  ecx = (uint32_t)(edx + edx*2 + 0xcu);
/* 7c2919: lea edi, [esi + ecx*4] */
  edi = (uint32_t)(esi + ecx*4);
/* 7c291c: mov eax, edi */
  eax = edi;
/* 7c291e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7c2920: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7c2923: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c2926: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7c2929: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c292f: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c2931: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c2934: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c2937: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7c293a: lea eax, [esi + ecx*4] */
  eax = (uint32_t)(esi + ecx*4);
/* 7c293d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c293f: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7c2941: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7c2944: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 7c2947: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c294a: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7c294d: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c2953: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c2955: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c2958: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c295b: lea eax, [esi + ecx*4] */
  eax = (uint32_t)(esi + ecx*4);
/* 7c295e: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c2961: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7c2963: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c2966: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c2969: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c296c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7c296f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c2970: jmp 0x7c2911 */
  goto L_7c2911;
L_7c2972: /* 7c2972: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c2975: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c2978: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c2979: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7c297c: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c297f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2980: mov ecx, esi */
  ecx = esi;
/* 7c2982: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x7c2988u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c2988: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7c298b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c298c: mov ecx, eax */
  ecx = eax;
/* 7c298e: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7c2994u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7c2994: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c2996: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 7c2998: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7c299b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7c299e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7c29a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c29a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c29a5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7c29a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c29a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c29b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c29b1: mov esp, ebp */
  esp = ebp;
/* 7c29b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c29b4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7c29b7(void) {
  LOAD_REGS();
L_7c29b7: /* 7c29b7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c29ba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c29bf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c29c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c29c3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c29c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c29cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c29cb(); return;
}

void f_7c29cb(void) {
  LOAD_REGS();
L_7c29cb: /* 7c29cb: push 0xa0e0d4 */
  { uint32_t v = 0xa0e0d4u; esp -= 4; W32(esp, v); }
/* 7c29d0: push 0xad3f8c */
  { uint32_t v = 0xad3f8cu; esp -= 4; W32(esp, v); }
/* 7c29d5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c29dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c29db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c29de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c29e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c29e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c29e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c29e7: guest_badaddr(0x7c29e7); return;
}

void f_7c2a80(void) {
  LOAD_REGS();
L_7c2a80: /* 7c2a80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c2a81: mov ebp, esp */
  ebp = esp;
/* 7c2a83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c2a85: push 0x9cf7e0 */
  { uint32_t v = 0x9cf7e0u; esp -= 4; W32(esp, v); }
/* 7c2a8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c2a90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2a91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c2a98: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c2a9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c2a9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c2a9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2a9e: mov esi, ecx */
  esi = ecx;
/* 7c2aa0: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 7c2aa6: xor edi, edi */
  edi = 0;
/* 7c2aa8: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c2aaa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c2aad: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7c2ab0: je 0x7c2b0e */
  if (zf) goto L_7c2b0e;
L_7c2ab2: /* 7c2ab2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c2ab4: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7c2ab7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c2ab7: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 7c2abd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c2abf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c2ac2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c2ac5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c2ac8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7c2acbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c2acb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c2ace: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c2ad1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c2ad4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c2ad7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c2ada: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c2adc: jmp 0x7c2b1e */
  goto L_7c2b1e;
L_7c2b0e: /* 7c2b0e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c2b11: mov dword ptr [eax], 0x43800000 */
  W32((uint32_t)(eax), 0x43800000u);
/* 7c2b17: mov dword ptr [eax + 4], 0x43800000 */
  W32((uint32_t)(eax + 0x4u), 0x43800000u);
L_7c2b1e: /* 7c2b1e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c2b21: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 7c2b24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2b25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2b26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c2b2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c2b2e: mov esp, ebp */
  esp = ebp;
/* 7c2b30: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c2b31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c2ade(void) {
  LOAD_REGS();
L_7c2ade: /* 7c2ade: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c2ae1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c2ae6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7c2ae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2aea: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7c2aed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2af2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c2af2(); return;
}

void f_7c2af2(void) {
  LOAD_REGS();
L_7c2af2: /* 7c2af2: push 0xa0e0fc */
  { uint32_t v = 0xa0e0fcu; esp -= 4; W32(esp, v); }
/* 7c2af7: push 0xad3fd8 */
  { uint32_t v = 0xad3fd8u; esp -= 4; W32(esp, v); }
/* 7c2afc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c2b02u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c2b02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2b05: xor edi, edi */
  edi = 0;
/* 7c2b07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2b08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2b09: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2b0eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7c2b0e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c2b11: mov dword ptr [eax], 0x43800000 */
  W32((uint32_t)(eax), 0x43800000u);
/* 7c2b17: mov dword ptr [eax + 4], 0x43800000 */
  W32((uint32_t)(eax + 0x4u), 0x43800000u);
/* 7c2b1e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c2b21: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 7c2b24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2b25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2b26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c2b2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c2b2e: mov esp, ebp */
  esp = ebp;
/* 7c2b30: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c2b31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c2b70(void) {
  LOAD_REGS();
L_7c2b70: /* 7c2b70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7c2b74: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7c2b78: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7c2b7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2b7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c2b7c: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x7c2b82u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 7c2b82: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7c2ba0(void) {
  LOAD_REGS();
L_7c2ba0: /* 7c2ba0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7c2ba4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c2ba6: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7c2baa: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c2bac: fcom dword ptr [0xa0e134] */
  fpu_com(ST0, F32((uint32_t)(0xa0e134u)));
/* 7c2bb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c2bb4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c2bb7: jne 0x7c2c0c */
  if (!zf) goto L_7c2c0c;
L_7c2bb9: /* 7c2bb9: fcomp dword ptr [0xa0e130] */
  fpu_com(ST0, F32((uint32_t)(0xa0e130u)));
  FPOP();
/* 7c2bbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c2bc1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c2bc4: jp 0x7c2c0e */
  if (pf) goto L_7c2c0e;
L_7c2bc6: /* 7c2bc6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c2bc9: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c2bcc: fcom dword ptr [0xa0e134] */
  fpu_com(ST0, F32((uint32_t)(0xa0e134u)));
/* 7c2bd2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c2bd4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c2bd7: jne 0x7c2c0c */
  if (!zf) goto L_7c2c0c;
L_7c2bd9: /* 7c2bd9: fcomp dword ptr [0xa0e130] */
  fpu_com(ST0, F32((uint32_t)(0xa0e130u)));
  FPOP();
/* 7c2bdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c2be1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c2be4: jp 0x7c2c0e */
  if (pf) goto L_7c2c0e;
L_7c2be6: /* 7c2be6: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7c2be9: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c2bec: fcom dword ptr [0xa0e134] */
  fpu_com(ST0, F32((uint32_t)(0xa0e134u)));
/* 7c2bf2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c2bf4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c2bf7: jne 0x7c2c0c */
  if (!zf) goto L_7c2c0c;
L_7c2bf9: /* 7c2bf9: fcomp dword ptr [0xa0e130] */
  fpu_com(ST0, F32((uint32_t)(0xa0e130u)));
  FPOP();
/* 7c2bff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c2c01: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c2c04: jp 0x7c2c0e */
  if (pf) goto L_7c2c0e;
L_7c2c06: /* 7c2c06: mov eax, 1 */
  eax = 0x1u;
/* 7c2c0b: ret  */
  esp += 4; SPILL(); return;
L_7c2c0c: /* 7c2c0c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7c2c0e: /* 7c2c0e: xor eax, eax */
  eax = 0;
/* 7c2c10: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2c40(void) {
  LOAD_REGS();
L_7c2c40: /* 7c2c40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c2c44: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7c2c48: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7c2c4a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c2c4c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c2c4f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 7c2c52: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c2c55: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7c2c59: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 7c2c5c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7c2c5f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c2c61: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7c2c64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2c66: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c2c68: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c2c6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2c6c: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2c80(void) {
  LOAD_REGS();
L_7c2c80: /* 7c2c80: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c2c83: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 7c2c87: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 7c2c8b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c2c8d: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c2c8f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c2c92: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c2c95: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7c2c98: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7c2c9c: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7c2c9f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c2ca1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c2ca3: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 7c2ca7: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c2caa: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c2cad: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 7c2cb1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7c2cb4: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7c2cb7: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 7c2cbb: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7c2cbf: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 7c2cc3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c2cc5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7c2cc9: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7c2ccd: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 7c2cd1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7c2cd5: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7c2cd8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c2cda: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7c2cdd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2cdf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c2ce1: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7c2ce3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2ce5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7c2ce9: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7c2cec: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7c2cf0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7c2cf3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2cf5: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 7c2cf9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7c2cfb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2cfd: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7c2cff: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7c2d03: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c2d05: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c2d09: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7c2d0d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c2d0f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7c2d13: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 7c2d17: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7c2d1a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7c2d1e: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7c2d21: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 7c2d25: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7c2d27: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7c2d2b: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c2d2d: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c2d30: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c2d33: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2d36: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2d70(void) {
  LOAD_REGS();
L_7c2d70: /* 7c2d70: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c2d73: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 7c2d77: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7c2d7b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c2d7d: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c2d7f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c2d81: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c2d84: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c2d87: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 7c2d8b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7c2d8e: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7c2d91: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 7c2d95: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7c2d99: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7c2d9d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c2d9f: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 7c2da3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c2da7: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 7c2dab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c2dad: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7c2db1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7c2db3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7c2db5: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7c2db8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7c2dbb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2dbd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c2dc0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7c2dc3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2dc5: fsubr dword ptr [ecx + 0xc] */
  ST0 = (F32((uint32_t)(ecx + 0xcu))) - ST0;
/* 7c2dc8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c2dcc: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7c2dcf: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7c2dd3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7c2dd6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2dd8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7c2dda: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7c2ddc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c2dde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7c2de0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c2de2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c2de4: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 7c2de8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c2dea: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7c2dee: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7c2df2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c2df4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7c2df8: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 7c2dfc: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7c2dff: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7c2e03: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7c2e06: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7c2e0a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7c2e0c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7c2e10: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c2e12: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c2e15: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c2e18: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2e1b: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2e50(void) {
  LOAD_REGS();
L_7c2e50: /* 7c2e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c2e51: mov ebp, esp */
  ebp = esp;
/* 7c2e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c2e55: push 0x9cf7f0 */
  { uint32_t v = 0x9cf7f0u; esp -= 4; W32(esp, v); }
/* 7c2e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c2e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c2e68: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c2e6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c2e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c2e6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2e6e: xor eax, eax */
  eax = 0;
/* 7c2e70: mov edi, ecx */
  edi = ecx;
/* 7c2e72: mov esi, dword ptr [edi + 0x100] */
  esi = R32((uint32_t)(edi + 0x100u));
/* 7c2e78: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c2e7b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7c2e7e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c2e81: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c2e82: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c2e85: jmp 0x7c2e90 */
  goto L_7c2e90;
L_7c2e90: /* 7c2e90: cmp eax, dword ptr [edi + 0x100] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2e96: jge 0x7c2f3b */
  if ((sf == of)) goto L_7c2f3b;
L_7c2e9c: /* 7c2e9c: lea ecx, [esi + esi*2 + 0xc] */
  ecx = (uint32_t)(esi + esi*2 + 0xcu);
/* 7c2ea0: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c2ea4: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 7c2ea7: lea ebx, [edi + eax*4] */
  ebx = (uint32_t)(edi + eax*4);
/* 7c2eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c2eab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c2eac: call 0x6c3ada */
  esp -= 4; W32(esp, 0x7c2eb1u); SPILL(); f_6c3ada(); if (g_unwind) return; RELOAD();
/* 7c2eb1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2eb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c2eb6: jne 0x7c2ee6 */
  if (!zf) goto L_7c2ee6;
L_7c2eb8: /* 7c2eb8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c2ebb: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c2ebe: je 0x7c2ed7 */
  if (zf) goto L_7c2ed7;
L_7c2ec0: /* 7c2ec0: lea ecx, [eax + eax*2 + 0xc] */
  ecx = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c2ec4: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 7c2ec7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c2ec9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c2ecb: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7c2ece: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c2ed1: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7c2ed4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_7c2ed7: /* 7c2ed7: mov esi, eax */
  esi = eax;
/* 7c2ed9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c2eda: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c2edd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c2ee0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c2ee1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c2ee4: jmp 0x7c2e90 */
  goto L_7c2e90;
L_7c2ee6: /* 7c2ee6: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7c2eec: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7c2eee: push 0xad3d40 */
  { uint32_t v = 0xad3d40u; esp -= 4; W32(esp, v); }
/* 7c2ef3: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7c2ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2ef9: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c2effu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c2eff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c2f02: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2f05: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c2f06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c2f09: jmp 0x7c2e90 */
  goto L_7c2e90;
L_7c2f3b: /* 7c2f3b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c2f3e: xor ecx, ecx */
  ecx = 0;
/* 7c2f40: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2f43: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7c2f46: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c2f47: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c2f49: mov dword ptr [edi + 0x100], ecx */
  W32((uint32_t)(edi + 0x100u), ecx);
/* 7c2f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2f50: mov eax, ecx */
  eax = ecx;
/* 7c2f52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c2f55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2f56: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c2f5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c2f5e: mov esp, ebp */
  esp = ebp;
/* 7c2f60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c2f61: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2e87(void) {
  LOAD_REGS();
L_7c2e87: /* 7c2e87: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7c2e8e: mov edi, edi */
  edi = edi;
L_7c2e90: /* 7c2e90: cmp eax, dword ptr [edi + 0x100] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2e96: jge 0x7c2f3b */
  if ((sf == of)) goto L_7c2f3b;
L_7c2e9c: /* 7c2e9c: lea ecx, [esi + esi*2 + 0xc] */
  ecx = (uint32_t)(esi + esi*2 + 0xcu);
/* 7c2ea0: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c2ea4: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 7c2ea7: lea ebx, [edi + eax*4] */
  ebx = (uint32_t)(edi + eax*4);
/* 7c2eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c2eab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c2eac: call 0x6c3ada */
  esp -= 4; W32(esp, 0x7c2eb1u); SPILL(); f_6c3ada(); if (g_unwind) return; RELOAD();
/* 7c2eb1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2eb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c2eb6: jne 0x7c2ee6 */
  if (!zf) goto L_7c2ee6;
L_7c2eb8: /* 7c2eb8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c2ebb: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c2ebe: je 0x7c2ed7 */
  if (zf) goto L_7c2ed7;
L_7c2ec0: /* 7c2ec0: lea ecx, [eax + eax*2 + 0xc] */
  ecx = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c2ec4: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 7c2ec7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c2ec9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c2ecb: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7c2ece: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c2ed1: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7c2ed4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_7c2ed7: /* 7c2ed7: mov esi, eax */
  esi = eax;
/* 7c2ed9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c2eda: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c2edd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c2ee0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c2ee1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c2ee4: jmp 0x7c2e90 */
  goto L_7c2e90;
L_7c2ee6: /* 7c2ee6: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7c2eec: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7c2eee: push 0xad3d40 */
  { uint32_t v = 0xad3d40u; esp -= 4; W32(esp, v); }
/* 7c2ef3: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7c2ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2ef9: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c2effu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c2eff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c2f02: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2f05: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c2f06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c2f09: jmp 0x7c2e90 */
  goto L_7c2e90;
L_7c2f3b: /* 7c2f3b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c2f3e: xor ecx, ecx */
  ecx = 0;
/* 7c2f40: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2f43: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7c2f46: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c2f47: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c2f49: mov dword ptr [edi + 0x100], ecx */
  W32((uint32_t)(edi + 0x100u), ecx);
/* 7c2f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2f50: mov eax, ecx */
  eax = ecx;
/* 7c2f52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c2f55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2f56: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c2f5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c2f5e: mov esp, ebp */
  esp = ebp;
/* 7c2f60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c2f61: ret  */
  esp += 4; SPILL(); return;
}

void f_7c2f0b(void) {
  LOAD_REGS();
L_7c2f0b: /* 7c2f0b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c2f0e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c2f13: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c2f16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c2f17: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c2f1a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2f1fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c2f1f(); return;
}

void f_7c2f1f(void) {
  LOAD_REGS();
L_7c2f1f: /* 7c2f1f: push 0xa0e138 */
  { uint32_t v = 0xa0e138u; esp -= 4; W32(esp, v); }
/* 7c2f24: push 0xad3d7c */
  { uint32_t v = 0xad3d7cu; esp -= 4; W32(esp, v); }
/* 7c2f29: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c2f2fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c2f2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c2f32: xor eax, eax */
  eax = 0;
/* 7c2f34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2f35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2f36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c2f3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7c2f3b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c2f3e: xor ecx, ecx */
  ecx = 0;
/* 7c2f40: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c2f43: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7c2f46: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c2f47: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c2f49: mov dword ptr [edi + 0x100], ecx */
  W32((uint32_t)(edi + 0x100u), ecx);
/* 7c2f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c2f50: mov eax, ecx */
  eax = ecx;
/* 7c2f52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c2f55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c2f56: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c2f5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c2f5e: mov esp, ebp */
  esp = ebp;
/* 7c2f60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c2f61: ret  */
  esp += 4; SPILL(); return;
}
