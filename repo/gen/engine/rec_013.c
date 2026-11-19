#include "recomp.h"
#include "rec_mod.h"

void f_725660(void) {
  LOAD_REGS();
L_725660: /* 725660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725662: push 0x9c3d69 */
  { uint32_t v = 0x9c3d69u; esp -= 4; W32(esp, v); }
/* 725667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72566d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72566e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725675: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725676: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725677: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725678: mov esi, ecx */
  esi = ecx;
/* 72567a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72567b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72567f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 725682: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 725684: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72568a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 725692: jge 0x7256a8 */
  if ((sf == of)) goto L_7256a8;
L_725694: /* 725694: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 725699: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72569e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7256a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7256a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7256a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7256a8: /* 7256a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7256ab: jle 0x7256c1 */
  if ((zf || sf != of)) goto L_7256c1;
L_7256ad: /* 7256ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7256b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7256b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7256bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7256beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7256be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7256c1: /* 7256c1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7256c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7256c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7256c6: mov ecx, esi */
  ecx = esi;
/* 7256c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7256ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7256ce: mov ecx, esi */
  ecx = esi;
/* 7256d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7256d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7256deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7256de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7256e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7256e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7256e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7256e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7256ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7256ef: ret  */
  esp += 4; SPILL(); return;
}

void f_725720(void) {
  LOAD_REGS();
L_725720: /* 725720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 725721: mov ebp, esp */
  ebp = esp;
/* 725723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725725: push 0x9c3d80 */
  { uint32_t v = 0x9c3d80u; esp -= 4; W32(esp, v); }
/* 72572a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 725730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725738: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 72573b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72573c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72573d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 725740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725741: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 725744: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 725747: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725749: xor ebx, ebx */
  ebx = 0;
/* 72574b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72574c: mov ecx, edi */
  ecx = edi;
/* 72574e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 725751: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x725757u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 725757: mov ecx, esi */
  ecx = esi;
/* 725759: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x72575fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 72575f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 725761: je 0x7257c8 */
  if (zf) goto L_7257c8;
L_725763: /* 725763: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 725766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725767: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725768: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x72576eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 72576e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 725771: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725774: xor eax, eax */
  eax = 0;
L_725776: /* 725776: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725779: jge 0x72577e */
  if ((sf == of)) goto L_72577e;
L_72577b: /* 72577b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 72577c: jmp 0x725776 */
  goto L_725776;
L_72577e: /* 72577e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72577f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725781: mov ecx, edi */
  ecx = edi;
/* 725783: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x725789u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 725789: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 72578c: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
L_725792: /* 725792: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 725795: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725798: jge 0x7257ff */
  if ((sf == of)) goto L_7257ff;
L_72579a: /* 72579a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 72579c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 72579e: mov ecx, edi */
  ecx = edi;
/* 7257a0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7257a6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7257a6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7257a8: lea esi, [edx + eax*8] */
  esi = (uint32_t)(edx + eax*8);
/* 7257ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7257ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7257af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7257b0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7257b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7257b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7257b5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7257b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7257b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7257ba: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7257bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7257bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7257bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7257c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7257c3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7257c6: jmp 0x725792 */
  goto L_725792;
L_7257c8: /* 7257c8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7257cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7257cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7257cd: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7257d3u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7257d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7257d6: /* 7257d6: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7257d9: jge 0x7257ff */
  if ((sf == of)) goto L_7257ff;
L_7257db: /* 7257db: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7257dd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7257e0: lea esi, [ecx + ebx*8] */
  esi = (uint32_t)(ecx + ebx*8);
/* 7257e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7257e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7257e5: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x7257ebu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 7257eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7257ee: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7257f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7257f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7257f3: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x7257f9u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 7257f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7257fc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7257fd: jmp 0x7257d6 */
  goto L_7257d6;
L_7257ff: /* 7257ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 725802: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 725805: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725806: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725807: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72580e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72580f: mov esp, ebp */
  esp = ebp;
/* 725811: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725812: ret  */
  esp += 4; SPILL(); return;
}

void f_725813(void) {
  LOAD_REGS();
L_725813: /* 725813: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 725816: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 72581b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 72581e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72581f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 725822: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725827u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_725827(); return;
}

void f_725827(void) {
  LOAD_REGS();
L_725827: /* 725827: push 0x9f8528 */
  { uint32_t v = 0x9f8528u; esp -= 4; W32(esp, v); }
/* 72582c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 725831: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x725837u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 725837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72583a: xor ebx, ebx */
  ebx = 0;
/* 72583c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72583d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72583e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725843u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_725843: guest_badaddr(0x725843); return;
}

void f_7258a0(void) {
  LOAD_REGS();
L_7258a0: /* 7258a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7258a1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7258a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7258a6: mov esi, ecx */
  esi = ecx;
/* 7258a8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7258aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7258ab: je 0x7258ed */
  if (zf) goto L_7258ed;
L_7258ad: /* 7258ad: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7258b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7258b1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7258b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7258b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7258b9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7258bc: xor edi, edi */
  edi = 0;
/* 7258be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7258c0: jle 0x7258ed */
  if ((zf || sf != of)) goto L_7258ed;
L_7258c2: /* 7258c2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7258c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7258c6: mov ecx, esi */
  ecx = esi;
/* 7258c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7258ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7258ce: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7258d0: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7258d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7258d5: je 0x7258e5 */
  if (zf) goto L_7258e5;
L_7258d7: /* 7258d7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7258d9: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 7258dc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7258de: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 7258e2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_7258e5: /* 7258e5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7258e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7258e9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7258eb: jl 0x7258c2 */
  if ((sf != of)) goto L_7258c2;
L_7258ed: /* 7258ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7258ee: mov eax, esi */
  eax = esi;
/* 7258f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7258f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7258f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_725920(void) {
  LOAD_REGS();
L_725920: /* 725920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725922: push 0x9c3d99 */
  { uint32_t v = 0x9c3d99u; esp -= 4; W32(esp, v); }
/* 725927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72592d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72592e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725936: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725938: mov esi, ecx */
  esi = ecx;
/* 72593a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72593b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72593f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 725942: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 725944: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72594a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 725952: jge 0x725968 */
  if ((sf == of)) goto L_725968;
L_725954: /* 725954: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 725959: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72595e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 725963: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x725965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725965: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_725968: /* 725968: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72596b: jle 0x725981 */
  if ((zf || sf != of)) goto L_725981;
L_72596d: /* 72596d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 725972: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 725977: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72597c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72597eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72597e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_725981: /* 725981: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 725983: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725984: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725986: mov ecx, esi */
  ecx = esi;
/* 725988: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72598eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72598e: mov ecx, esi */
  ecx = esi;
/* 725990: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 725998: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72599eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72599e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7259a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7259a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7259a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7259a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7259ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7259af: ret  */
  esp += 4; SPILL(); return;
}

void f_7259e0(void) {
  LOAD_REGS();
L_7259e0: /* 7259e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7259e1: mov ebp, esp */
  ebp = esp;
/* 7259e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7259e5: push 0x9c3db0 */
  { uint32_t v = 0x9c3db0u; esp -= 4; W32(esp, v); }
/* 7259ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7259f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7259f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7259f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7259fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7259fc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7259ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725a00: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725a03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725a04: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 725a07: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 725a09: xor edi, edi */
  edi = 0;
/* 725a0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725a0c: mov ecx, esi */
  ecx = esi;
/* 725a0e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 725a11: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x725a17u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 725a17: mov ecx, ebx */
  ecx = ebx;
/* 725a19: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x725a1fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 725a1f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 725a21: je 0x725ad2 */
  if (zf) goto L_725ad2;
L_725a27: /* 725a27: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 725a2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725a2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725a2c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x725a32u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 725a32: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 725a35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725a38: xor eax, eax */
  eax = 0;
/* 725a3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_725a40: /* 725a40: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725a43: jge 0x725a48 */
  if ((sf == of)) goto L_725a48;
L_725a45: /* 725a45: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725a46: jmp 0x725a40 */
  goto L_725a40;
L_725a48: /* 725a48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725a49: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 725a4b: mov ecx, esi */
  ecx = esi;
/* 725a4d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x725a53u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 725a53: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 725a56: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 725a5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_725a60: /* 725a60: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 725a63: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725a66: jge 0x725b4a */
  if ((sf == of)) goto L_725b4a;
L_725a6c: /* 725a6c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 725a6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 725a70: mov ecx, esi */
  ecx = esi;
/* 725a72: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x725a78u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 725a78: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 725a7a: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 725a7d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 725a7f: je 0x725a8c */
  if (zf) goto L_725a8c;
L_725a81: /* 725a81: mov ecx, eax */
  ecx = eax;
/* 725a83: call 0x6c6b36 */
  esp -= 4; W32(esp, 0x725a88u); SPILL(); f_6c6b36(); if (g_unwind) return; RELOAD();
/* 725a88: mov esi, eax */
  esi = eax;
/* 725a8a: jmp 0x725a8e */
  goto L_725a8e;
L_725a8c: /* 725a8c: xor esi, esi */
  esi = 0;
L_725a8e: /* 725a8e: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 725a91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 725a92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725a93: call 0x6c4b4c */
  esp -= 4; W32(esp, 0x725a98u); SPILL(); f_6c4b4c(); if (g_unwind) return; RELOAD();
/* 725a98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725a9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725a9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725a9d: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x725aa3u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 725aa3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 725aa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725aa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 725aaa: je 0x725ab2 */
  if (zf) goto L_725ab2;
L_725aac: /* 725aac: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 725aaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725ab0: jmp 0x725ab6 */
  goto L_725ab6;
L_725ab2: /* 725ab2: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 725ab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_725ab6: /* 725ab6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725ab7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725ab9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725ab9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725abc: add esi, 0x1e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725abf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725ac1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725ac3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725ac3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 725ac6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725ac9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725acc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725acd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 725ad0: jmp 0x725a60 */
  goto L_725a60;
L_725ad2: /* 725ad2: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 725ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725ad6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725ad7: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x725addu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 725add: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 725ae3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725ae6: xor eax, eax */
  eax = 0;
/* 725ae8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 725aeb: jmp 0x725af0 */
  goto L_725af0;
L_725af0: /* 725af0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 725af3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725af5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 725af8: jge 0x725b4a */
  if ((sf == of)) goto L_725b4a;
L_725afa: /* 725afa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 725afd: mov esi, eax */
  esi = eax;
/* 725aff: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 725b01: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 725b04: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725b06: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 725b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725b0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725b0b: call 0x6c4b4c */
  esp -= 4; W32(esp, 0x725b10u); SPILL(); f_6c4b4c(); if (g_unwind) return; RELOAD();
/* 725b10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725b15: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x725b1bu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 725b1b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 725b1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 725b22: je 0x725b2a */
  if (zf) goto L_725b2a;
L_725b24: /* 725b24: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 725b27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725b28: jmp 0x725b2e */
  goto L_725b2e;
L_725b2a: /* 725b2a: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 725b2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_725b2e: /* 725b2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725b2f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725b31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725b31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b34: add esi, 0x1e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725b37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725b39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725b3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725b3b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 725b3e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725b41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b44: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725b45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 725b48: jmp 0x725af0 */
  goto L_725af0;
L_725b4a: /* 725b4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 725b4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725b4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725b4f: mov eax, ebx */
  eax = ebx;
/* 725b51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 725b58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725b59: mov esp, ebp */
  esp = ebp;
/* 725b5b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725b5c: ret  */
  esp += 4; SPILL(); return;
}

void f_725aed(void) {
  LOAD_REGS();
L_725aed: /* 725aed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_725af0: /* 725af0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 725af3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725af5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 725af8: jge 0x725b4a */
  if ((sf == of)) goto L_725b4a;
L_725afa: /* 725afa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 725afd: mov esi, eax */
  esi = eax;
/* 725aff: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 725b01: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 725b04: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725b06: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 725b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725b0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725b0b: call 0x6c4b4c */
  esp -= 4; W32(esp, 0x725b10u); SPILL(); f_6c4b4c(); if (g_unwind) return; RELOAD();
/* 725b10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725b15: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x725b1bu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 725b1b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 725b1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 725b22: je 0x725b2a */
  if (zf) goto L_725b2a;
L_725b24: /* 725b24: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 725b27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725b28: jmp 0x725b2e */
  goto L_725b2e;
L_725b2a: /* 725b2a: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 725b2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_725b2e: /* 725b2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725b2f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725b31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725b31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b34: add esi, 0x1e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725b37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725b39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725b3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725b3b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 725b3e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725b41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b44: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725b45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 725b48: jmp 0x725af0 */
  goto L_725af0;
L_725b4a: /* 725b4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 725b4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725b4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725b4f: mov eax, ebx */
  eax = ebx;
/* 725b51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 725b58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725b59: mov esp, ebp */
  esp = ebp;
/* 725b5b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725b5c: ret  */
  esp += 4; SPILL(); return;
}

void f_725b5d(void) {
  LOAD_REGS();
L_725b5d: /* 725b5d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 725b60: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 725b65: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 725b68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725b69: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 725b6c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725b71u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_725b71(); return;
}

void f_725b71(void) {
  LOAD_REGS();
L_725b71: /* 725b71: push 0x9f8540 */
  { uint32_t v = 0x9f8540u; esp -= 4; W32(esp, v); }
/* 725b76: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 725b7b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x725b81u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 725b81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725b84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725b86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725b88: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725b8du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_725b8d: guest_badaddr(0x725b8d); return;
}

void f_725c00(void) {
  LOAD_REGS();
L_725c00: /* 725c00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725c01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725c02: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 725c03: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 725c07: mov ebx, ecx */
  ebx = ecx;
/* 725c09: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 725c0b: je 0x725c72 */
  if (zf) goto L_725c72;
L_725c0d: /* 725c0d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 725c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725c11: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 725c13: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x725c19u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 725c19: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 725c1c: xor eax, eax */
  eax = 0;
/* 725c1e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725c20: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 725c24: jle 0x725c72 */
  if ((zf || sf != of)) goto L_725c72;
L_725c26: /* 725c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725c27: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 725c2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725c2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_725c30: /* 725c30: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 725c32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 725c34: mov ecx, ebx */
  ecx = ebx;
/* 725c36: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x725c3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 725c3c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 725c3e: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 725c41: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 725c43: je 0x725c55 */
  if (zf) goto L_725c55;
L_725c45: /* 725c45: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 725c48: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725c4c: mov ecx, 8 */
  ecx = 0x8u;
/* 725c51: mov edi, eax */
  edi = eax;
/* 725c53: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_725c55: /* 725c55: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 725c59: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 725c5d: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 725c60: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725c61: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 725c64: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725c66: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 725c6a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 725c6e: jl 0x725c30 */
  if ((sf != of)) goto L_725c30;
L_725c70: /* 725c70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725c71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_725c72: /* 725c72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725c73: mov eax, ebx */
  eax = ebx;
/* 725c75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725c76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 725c77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_725ca0(void) {
  LOAD_REGS();
L_725ca0: /* 725ca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725ca2: push 0x9c3dc9 */
  { uint32_t v = 0x9c3dc9u; esp -= 4; W32(esp, v); }
/* 725ca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 725cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725cae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725cb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725cb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725cb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725cb8: mov esi, ecx */
  esi = ecx;
/* 725cba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725cbb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 725cbf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 725cc2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 725cc4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 725cca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 725cd2: jge 0x725ce8 */
  if ((sf == of)) goto L_725ce8;
L_725cd4: /* 725cd4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 725cd9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 725cde: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 725ce3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x725ce5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725ce5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_725ce8: /* 725ce8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725ceb: jle 0x725d01 */
  if ((zf || sf != of)) goto L_725d01;
L_725ced: /* 725ced: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 725cf2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 725cf7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 725cfc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x725cfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725cfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_725d01: /* 725d01: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725d03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725d04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725d06: mov ecx, esi */
  ecx = esi;
/* 725d08: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x725d0eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 725d0e: mov ecx, esi */
  ecx = esi;
/* 725d10: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 725d18: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x725d1eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 725d1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 725d22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725d23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725d24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725d25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 725d2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725d2f: ret  */
  esp += 4; SPILL(); return;
}

void f_725d60(void) {
  LOAD_REGS();
L_725d60: /* 725d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 725d61: mov ebp, esp */
  ebp = esp;
/* 725d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725d65: push 0x9c3de0 */
  { uint32_t v = 0x9c3de0u; esp -= 4; W32(esp, v); }
/* 725d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 725d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725d78: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 725d7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725d7c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 725d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725d80: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725d83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725d84: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 725d87: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725d89: xor edi, edi */
  edi = 0;
/* 725d8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725d8c: mov ecx, esi */
  ecx = esi;
/* 725d8e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 725d91: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x725d97u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 725d97: mov ecx, ebx */
  ecx = ebx;
/* 725d99: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x725d9fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 725d9f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 725da1: je 0x725e4b */
  if (zf) goto L_725e4b;
L_725da7: /* 725da7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 725daa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725dab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725dac: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x725db2u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 725db2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 725db5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725db8: xor eax, eax */
  eax = 0;
/* 725dba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_725dc0: /* 725dc0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725dc3: jge 0x725dc8 */
  if ((sf == of)) goto L_725dc8;
L_725dc5: /* 725dc5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725dc6: jmp 0x725dc0 */
  goto L_725dc0;
L_725dc8: /* 725dc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725dc9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725dcb: mov ecx, esi */
  ecx = esi;
/* 725dcd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x725dd3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 725dd3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 725dd6: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 725ddc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_725de0: /* 725de0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 725de3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725de6: jge 0x725e9c */
  if ((sf == of)) goto L_725e9c;
L_725dec: /* 725dec: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725dee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 725df0: mov ecx, esi */
  ecx = esi;
/* 725df2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x725df8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 725df8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 725dfa: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 725dfd: xor esi, esi */
  esi = 0;
/* 725dff: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 725e01: je 0x725e14 */
  if (zf) goto L_725e14;
L_725e03: /* 725e03: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 725e06: mov word ptr [eax + 2], si */
  W16((uint32_t)(eax + 0x2u), (esi & 0xffffu));
/* 725e0a: mov word ptr [eax + 4], si */
  W16((uint32_t)(eax + 0x4u), (esi & 0xffffu));
/* 725e0e: mov word ptr [eax + 6], si */
  W16((uint32_t)(eax + 0x6u), (esi & 0xffffu));
/* 725e12: mov esi, eax */
  esi = eax;
L_725e14: /* 725e14: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 725e17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725e18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e19: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e1e: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 725e21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725e22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e28: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 725e2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 725e2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e2d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e32: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725e36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e37: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 725e3c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725e3f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 725e42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e45: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725e46: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 725e49: jmp 0x725de0 */
  goto L_725de0;
L_725e4b: /* 725e4b: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 725e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725e50: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x725e56u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 725e56: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 725e5c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e5f: xor ebx, ebx */
  ebx = 0;
L_725e61: /* 725e61: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725e64: jge 0x725e99 */
  if ((sf == of)) goto L_725e99;
L_725e66: /* 725e66: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 725e68: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 725e6b: lea esi, [eax + ebx*8] */
  esi = (uint32_t)(eax + ebx*8);
/* 725e6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725e6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725e70: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e75: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 725e78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 725e79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e7a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e7f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 725e82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725e83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e84: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e89: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 725e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725e8e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x725e90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 725e90: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725e93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725e96: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 725e97: jmp 0x725e61 */
  goto L_725e61;
L_725e99: /* 725e99: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_725e9c: /* 725e9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 725e9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725ea0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725ea1: mov eax, ebx */
  eax = ebx;
/* 725ea3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 725eaa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725eab: mov esp, ebp */
  esp = ebp;
/* 725ead: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725eae: ret  */
  esp += 4; SPILL(); return;
}

void f_725eaf(void) {
  LOAD_REGS();
L_725eaf: /* 725eaf: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 725eb2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 725eb7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 725eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725ebb: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 725ebe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725ec3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_725ec3(); return;
}

void f_725ec3(void) {
  LOAD_REGS();
L_725ec3: /* 725ec3: push 0x9f8558 */
  { uint32_t v = 0x9f8558u; esp -= 4; W32(esp, v); }
/* 725ec8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 725ecd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x725ed3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 725ed3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725ed6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725ed8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725eda: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725edfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_725edf: guest_badaddr(0x725edf); return;
}

void f_725f40(void) {
  LOAD_REGS();
L_725f40: /* 725f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725f41: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 725f45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725f46: mov esi, ecx */
  esi = ecx;
/* 725f48: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 725f4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725f4b: je 0x725f8d */
  if (zf) goto L_725f8d;
L_725f4d: /* 725f4d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 725f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725f51: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725f53: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x725f59u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 725f59: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 725f5c: xor edi, edi */
  edi = 0;
/* 725f5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 725f60: jle 0x725f8d */
  if ((zf || sf != of)) goto L_725f8d;
L_725f62: /* 725f62: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725f64: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 725f66: mov ecx, esi */
  ecx = esi;
/* 725f68: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x725f6eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 725f6e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 725f70: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 725f73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 725f75: je 0x725f85 */
  if (zf) goto L_725f85;
L_725f77: /* 725f77: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 725f79: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 725f7c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 725f7e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 725f82: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_725f85: /* 725f85: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 725f88: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 725f89: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725f8b: jl 0x725f62 */
  if ((sf != of)) goto L_725f62;
L_725f8d: /* 725f8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725f8e: mov eax, esi */
  eax = esi;
/* 725f90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725f91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725f92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_725fc0(void) {
  LOAD_REGS();
L_725fc0: /* 725fc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725fc2: push 0x9c3df9 */
  { uint32_t v = 0x9c3df9u; esp -= 4; W32(esp, v); }
/* 725fc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 725fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725fce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725fd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725fd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725fd8: mov esi, ecx */
  esi = ecx;
/* 725fda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725fdb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 725fdf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 725fe2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 725fe4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 725fea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 725ff2: jge 0x726008 */
  if ((sf == of)) goto L_726008;
L_725ff4: /* 725ff4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 725ff9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 725ffe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 726003: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x726005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 726005: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726008: /* 726008: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72600b: jle 0x726021 */
  if ((zf || sf != of)) goto L_726021;
L_72600d: /* 72600d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 726012: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 726017: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72601c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72601eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72601e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726021: /* 726021: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 726023: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726026: mov ecx, esi */
  ecx = esi;
/* 726028: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72602eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72602e: mov ecx, esi */
  ecx = esi;
/* 726030: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 726038: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72603eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72603e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 726042: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726044: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726045: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72604c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72604f: ret  */
  esp += 4; SPILL(); return;
}

void f_726080(void) {
  LOAD_REGS();
L_726080: /* 726080: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726081: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726082: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 726083: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 726087: mov ebx, ecx */
  ebx = ecx;
/* 726089: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72608b: je 0x7260f3 */
  if (zf) goto L_7260f3;
L_72608d: /* 72608d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 726090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726091: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 726093: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x726099u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 726099: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72609c: xor eax, eax */
  eax = 0;
/* 72609e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7260a0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7260a4: jle 0x7260f3 */
  if ((zf || sf != of)) goto L_7260f3;
L_7260a6: /* 7260a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7260a7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7260ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7260ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7260b0: /* 7260b0: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7260b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7260b4: mov ecx, ebx */
  ecx = ebx;
/* 7260b6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7260bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7260bc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7260be: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7260c1: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 7260c4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7260c6: je 0x7260d6 */
  if (zf) goto L_7260d6;
L_7260c8: /* 7260c8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7260cb: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7260cf: mov ecx, 5 */
  ecx = 0x5u;
/* 7260d4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7260d6: /* 7260d6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7260da: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7260de: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7260e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7260e2: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7260e5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7260e7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7260eb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7260ef: jl 0x7260b0 */
  if ((sf != of)) goto L_7260b0;
L_7260f1: /* 7260f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7260f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7260f3: /* 7260f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7260f4: mov eax, ebx */
  eax = ebx;
/* 7260f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7260f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7260f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726120(void) {
  LOAD_REGS();
L_726120: /* 726120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726122: push 0x9c3e19 */
  { uint32_t v = 0x9c3e19u; esp -= 4; W32(esp, v); }
/* 726127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72612d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72612e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726136: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726137: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726138: mov esi, ecx */
  esi = ecx;
/* 72613a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72613b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72613f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 726142: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 726144: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72614a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 726152: jge 0x726168 */
  if ((sf == of)) goto L_726168;
L_726154: /* 726154: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 726159: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72615e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 726163: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x726165u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 726165: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726168: /* 726168: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72616b: jle 0x726181 */
  if ((zf || sf != of)) goto L_726181;
L_72616d: /* 72616d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 726172: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 726177: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72617c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72617eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72617e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726181: /* 726181: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 726183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726184: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726186: mov ecx, esi */
  ecx = esi;
/* 726188: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72618eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72618e: mov ecx, esi */
  ecx = esi;
/* 726190: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 726198: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72619eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72619e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7261a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7261a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7261a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7261a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7261ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7261af: ret  */
  esp += 4; SPILL(); return;
}

void f_7261e0(void) {
  LOAD_REGS();
L_7261e0: /* 7261e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7261e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7261e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7261e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7261e7: mov esi, ecx */
  esi = ecx;
/* 7261e9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7261eb: je 0x72623d */
  if (zf) goto L_72623d;
L_7261ed: /* 7261ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7261f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7261f1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7261f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7261f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7261f9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7261fc: xor ebx, ebx */
  ebx = 0;
/* 7261fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 726200: jle 0x72623d */
  if ((zf || sf != of)) goto L_72623d;
L_726202: /* 726202: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 726203: xor ebp, ebp */
  ebp = 0;
L_726205: /* 726205: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 726207: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726209: mov ecx, esi */
  ecx = esi;
/* 72620b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x726211u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 726211: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 726213: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 726216: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 726219: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72621b: je 0x726231 */
  if (zf) goto L_726231;
L_72621d: /* 72621d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 72621f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 726221: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 726223: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 726225: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 726228: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72622b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72622e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_726231: /* 726231: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 726234: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726235: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 726238: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72623a: jl 0x726205 */
  if ((sf != of)) goto L_726205;
L_72623c: /* 72623c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_72623d: /* 72623d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72623e: mov eax, esi */
  eax = esi;
/* 726240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726242: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726270(void) {
  LOAD_REGS();
L_726270: /* 726270: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726272: push 0x9c3e39 */
  { uint32_t v = 0x9c3e39u; esp -= 4; W32(esp, v); }
/* 726277: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72627d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72627e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726285: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726286: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726287: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726288: mov esi, ecx */
  esi = ecx;
/* 72628a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72628b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72628f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 726292: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 726294: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72629a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7262a2: jge 0x7262b8 */
  if ((sf == of)) goto L_7262b8;
L_7262a4: /* 7262a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7262a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7262ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7262b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7262b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7262b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7262b8: /* 7262b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7262bb: jle 0x7262d1 */
  if ((zf || sf != of)) goto L_7262d1;
L_7262bd: /* 7262bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7262c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7262c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7262cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7262ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7262ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7262d1: /* 7262d1: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 7262d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7262d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7262d9: mov ecx, esi */
  ecx = esi;
/* 7262db: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7262e1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7262e1: mov ecx, esi */
  ecx = esi;
/* 7262e3: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7262eb: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7262f1u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7262f1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7262f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7262f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7262f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7262f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7262ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726302: ret  */
  esp += 4; SPILL(); return;
}

void f_726340(void) {
  LOAD_REGS();
L_726340: /* 726340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726341: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726342: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 726343: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 726347: mov ebx, ecx */
  ebx = ecx;
/* 726349: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72634b: je 0x7263b9 */
  if (zf) goto L_7263b9;
L_72634d: /* 72634d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 726350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726351: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 726356: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x72635cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 72635c: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72635f: xor eax, eax */
  eax = 0;
/* 726361: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726363: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 726367: jle 0x7263b9 */
  if ((zf || sf != of)) goto L_7263b9;
L_726369: /* 726369: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72636a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 72636e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72636f: nop  */
L_726370: /* 726370: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 726375: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726377: mov ecx, ebx */
  ecx = ebx;
/* 726379: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72637fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72637f: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 726385: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 726387: je 0x726399 */
  if (zf) goto L_726399;
L_726389: /* 726389: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 72638c: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 726390: mov ecx, 0x41 */
  ecx = 0x41u;
/* 726395: mov edi, eax */
  edi = eax;
/* 726397: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_726399: /* 726399: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 72639d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7263a1: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7263a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7263a5: add edx, 0x104 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7263ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7263ad: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7263b1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7263b5: jl 0x726370 */
  if ((sf != of)) goto L_726370;
L_7263b7: /* 7263b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7263b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7263b9: /* 7263b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7263ba: mov eax, ebx */
  eax = ebx;
/* 7263bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7263bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7263be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726400(void) {
  LOAD_REGS();
L_726400: /* 726400: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726402: push 0x9c3e59 */
  { uint32_t v = 0x9c3e59u; esp -= 4; W32(esp, v); }
/* 726407: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72640d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72640e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726416: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726417: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726418: mov esi, ecx */
  esi = ecx;
/* 72641a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72641b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72641f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 726422: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 726424: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72642a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 726432: jge 0x726448 */
  if ((sf == of)) goto L_726448;
L_726434: /* 726434: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 726439: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72643e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 726443: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x726445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 726445: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726448: /* 726448: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72644b: jle 0x726461 */
  if ((zf || sf != of)) goto L_726461;
L_72644d: /* 72644d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 726452: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 726457: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72645c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72645eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72645e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726461: /* 726461: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 726463: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726464: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726466: mov ecx, esi */
  ecx = esi;
/* 726468: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72646eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72646e: mov ecx, esi */
  ecx = esi;
/* 726470: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 726478: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72647eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72647e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 726482: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726483: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726484: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726485: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72648c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72648f: ret  */
  esp += 4; SPILL(); return;
}

void f_7264c0(void) {
  LOAD_REGS();
L_7264c0: /* 7264c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7264c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7264c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7264c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7264c7: mov esi, ecx */
  esi = ecx;
/* 7264c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7264cb: je 0x726506 */
  if (zf) goto L_726506;
L_7264cd: /* 7264cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7264d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7264d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7264d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7264d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7264d9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7264dc: xor ebx, ebx */
  ebx = 0;
/* 7264de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7264e0: jle 0x726506 */
  if ((zf || sf != of)) goto L_726506;
L_7264e2: /* 7264e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7264e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7264e6: mov ecx, esi */
  ecx = esi;
/* 7264e8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7264eeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7264ee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7264f0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7264f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7264f5: je 0x7264fe */
  if (zf) goto L_7264fe;
L_7264f7: /* 7264f7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7264f9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7264fc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7264fe: /* 7264fe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 726501: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726502: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726504: jl 0x7264e2 */
  if ((sf != of)) goto L_7264e2;
L_726506: /* 726506: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726507: mov eax, esi */
  eax = esi;
/* 726509: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72650a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72650b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726530(void) {
  LOAD_REGS();
L_726530: /* 726530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726532: push 0x9c3e79 */
  { uint32_t v = 0x9c3e79u; esp -= 4; W32(esp, v); }
/* 726537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72653d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72653e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726545: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 726548: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726549: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72654a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 72654e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 726551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726552: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 726554: mov ebx, ecx */
  ebx = ecx;
/* 726556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726557: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 72655b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x726561u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 726561: xor esi, esi */
  esi = 0;
/* 726563: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 726566: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726569: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 72656d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 726571: jle 0x7265ce */
  if ((zf || sf != of)) goto L_7265ce;
L_726573: /* 726573: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 726577: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_726578: /* 726578: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 72657a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 72657c: mov ecx, ebx */
  ecx = ebx;
/* 72657e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x726584u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 726584: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 726586: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 726589: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 72658c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72658e: je 0x7265b2 */
  if (zf) goto L_7265b2;
L_726590: /* 726590: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 726593: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 726597: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* 72659a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72659c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72659f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7265a0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7265a3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7265a5: call 0x6cb258 */
  esp -= 4; W32(esp, 0x7265aau); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 7265aa: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 7265ad: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 7265b0: xor esi, esi */
  esi = 0;
L_7265b2: /* 7265b2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7265b6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7265ba: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7265bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7265be: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7265c1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7265c3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7265c7: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7265cb: jl 0x726578 */
  if ((sf != of)) goto L_726578;
L_7265cd: /* 7265cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7265ce: /* 7265ce: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7265d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7265d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7265d4: mov eax, ebx */
  eax = ebx;
/* 7265d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7265d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7265de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7265e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726566(void) {
  LOAD_REGS();
L_726566: /* 726566: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726569: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 72656d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 726571: jle 0x7265ce */
  if ((zf || sf != of)) goto L_7265ce;
L_726573: /* 726573: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 726577: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_726578: /* 726578: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 72657a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 72657c: mov ecx, ebx */
  ecx = ebx;
/* 72657e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x726584u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 726584: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 726586: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 726589: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 72658c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72658e: je 0x7265b2 */
  if (zf) goto L_7265b2;
L_726590: /* 726590: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 726593: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 726597: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* 72659a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72659c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72659f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7265a0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7265a3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7265a5: call 0x6cb258 */
  esp -= 4; W32(esp, 0x7265aau); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 7265aa: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 7265ad: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 7265b0: xor esi, esi */
  esi = 0;
L_7265b2: /* 7265b2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7265b6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7265ba: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7265bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7265be: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7265c1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7265c3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7265c7: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7265cb: jl 0x726578 */
  if ((sf != of)) goto L_726578;
L_7265cd: /* 7265cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7265ce: /* 7265ce: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7265d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7265d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7265d4: mov eax, ebx */
  eax = ebx;
/* 7265d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7265d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7265de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7265e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726620(void) {
  LOAD_REGS();
L_726620: /* 726620: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 726624: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726626: mov esi, ecx */
  esi = ecx;
/* 726628: call 0x6caede */
  esp -= 4; W32(esp, 0x72662du); SPILL(); f_6caede(); if (g_unwind) return; RELOAD();
/* 72662d: mov eax, esi */
  eax = esi;
/* 72662f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726630: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726650(void) {
  LOAD_REGS();
L_726650: /* 726650: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726652: push 0x9c3e99 */
  { uint32_t v = 0x9c3e99u; esp -= 4; W32(esp, v); }
/* 726657: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72665d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72665e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726666: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726667: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726668: mov esi, ecx */
  esi = ecx;
/* 72666a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72666b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72666f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 726672: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 726674: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72667a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 726682: jge 0x726698 */
  if ((sf == of)) goto L_726698;
L_726684: /* 726684: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 726689: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72668e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 726693: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x726695u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 726695: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726698: /* 726698: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72669b: jle 0x7266b1 */
  if ((zf || sf != of)) goto L_7266b1;
L_72669d: /* 72669d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7266a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7266a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7266ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7266aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7266ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7266b1: /* 7266b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7266b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7266b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7266b6: mov ecx, esi */
  ecx = esi;
/* 7266b8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7266beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7266be: mov ecx, esi */
  ecx = esi;
/* 7266c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7266c8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7266ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7266ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7266d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7266d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7266d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7266d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7266dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7266df: ret  */
  esp += 4; SPILL(); return;
}

void f_726710(void) {
  LOAD_REGS();
L_726710: /* 726710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 726714: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726715: mov esi, ecx */
  esi = ecx;
/* 726717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726718: mov ecx, eax */
  ecx = eax;
/* 72671a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 72671c: mov edx, esi */
  edx = esi;
/* 72671e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 726720: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 726723: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 726726: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 726729: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72672c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 72672f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 726732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726733: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 726736: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 726739: call 0x6cbbae */
  esp -= 4; W32(esp, 0x72673eu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 72673e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72673f: mov eax, esi */
  eax = esi;
/* 726741: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726742: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726760(void) {
  LOAD_REGS();
L_726760: /* 726760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726761: mov esi, ecx */
  esi = ecx;
/* 726763: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726764: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 726768: mov eax, edi */
  eax = edi;
/* 72676a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72676c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72676e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 726771: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 726774: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 726777: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72677a: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 72677d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 726780: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 726783: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 726786: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 726789: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 72678c: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 72678f: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 726792: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 726795: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 726798: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 72679b: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 72679e: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 7267a1: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 7267a4: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 7267a7: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 7267aa: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 7267ad: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7267b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7267b1: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 7267b4: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 7267b7: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x7267bdu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 7267bd: lea edx, [edi + 0x3c] */
  edx = (uint32_t)(edi + 0x3cu);
/* 7267c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7267c1: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 7267c4: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x7267cau); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 7267ca: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 7267cd: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 7267d0: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 7267d3: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 7267d6: mov dx, word ptr [edi + 0x54] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x54u))) & 0xffffu);
/* 7267da: mov word ptr [esi + 0x54], dx */
  W16((uint32_t)(esi + 0x54u), (edx & 0xffffu));
/* 7267de: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 7267e1: mov byte ptr [esi + 0x56], al */
  W8((uint32_t)(esi + 0x56u), (eax & 0xffu));
/* 7267e4: mov cl, byte ptr [edi + 0x57] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x57u))) & 0xffu);
/* 7267e7: mov byte ptr [esi + 0x57], cl */
  W8((uint32_t)(esi + 0x57u), (ecx & 0xffu));
/* 7267ea: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 7267ed: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 7267f0: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 7267f3: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7267f6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 7267f9: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 7267fc: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 7267ff: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 726802: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 726805: add edi, 0x6c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 726808: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726809: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 72680c: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 72680f: call 0x6c3a71 */
  esp -= 4; W32(esp, 0x726814u); SPILL(); f_6c3a71(); if (g_unwind) return; RELOAD();
/* 726814: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726815: mov eax, esi */
  eax = esi;
/* 726817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726818: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726850(void) {
  LOAD_REGS();
L_726850: /* 726850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 726854: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726855: mov esi, ecx */
  esi = ecx;
/* 726857: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726858: mov ecx, eax */
  ecx = eax;
/* 72685a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 72685c: mov edx, esi */
  edx = esi;
/* 72685e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 726860: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 726863: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 726866: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 726869: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 72686c: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 72686f: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 726872: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 726875: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 726878: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 72687b: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 72687e: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 726881: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 726884: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 726887: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 72688a: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 72688d: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 726890: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 726893: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 726896: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 726899: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 72689c: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 72689f: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7268a2: lea edx, [eax + 0x2c] */
  edx = (uint32_t)(eax + 0x2cu);
/* 7268a5: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7268a7: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 7268aa: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7268ac: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7268af: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7268b2: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 7268b5: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7268b8: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 7268bb: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 7268be: lea ecx, [eax + 0x3c] */
  ecx = (uint32_t)(eax + 0x3cu);
/* 7268c1: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7268c3: lea edx, [esi + 0x3c] */
  edx = (uint32_t)(esi + 0x3cu);
/* 7268c6: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7268c8: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7268cb: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7268ce: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 7268d1: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 7268d4: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 7268d7: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 7268da: mov edx, dword ptr [eax + 0x4c] */
  edx = R32((uint32_t)(eax + 0x4cu));
/* 7268dd: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 7268e0: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 7268e3: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 7268e6: mov dl, byte ptr [eax + 0x54] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x54u))) & 0xffu);
/* 7268e9: mov byte ptr [esi + 0x54], dl */
  W8((uint32_t)(esi + 0x54u), (edx & 0xffu));
/* 7268ec: mov cl, byte ptr [eax + 0x55] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x55u))) & 0xffu);
/* 7268ef: mov byte ptr [esi + 0x55], cl */
  W8((uint32_t)(esi + 0x55u), (ecx & 0xffu));
/* 7268f2: mov dl, byte ptr [eax + 0x56] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x56u))) & 0xffu);
/* 7268f5: mov byte ptr [esi + 0x56], dl */
  W8((uint32_t)(esi + 0x56u), (edx & 0xffu));
/* 7268f8: mov cl, byte ptr [eax + 0x57] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x57u))) & 0xffu);
/* 7268fb: mov byte ptr [esi + 0x57], cl */
  W8((uint32_t)(esi + 0x57u), (ecx & 0xffu));
/* 7268fe: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 726901: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 726904: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 726907: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 72690a: mov edx, dword ptr [eax + 0x60] */
  edx = R32((uint32_t)(eax + 0x60u));
/* 72690d: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 726910: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 726913: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 726916: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 726919: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 72691c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72691d: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 726920: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 726923: call 0x6c725c */
  esp -= 4; W32(esp, 0x726928u); SPILL(); f_6c725c(); if (g_unwind) return; RELOAD();
/* 726928: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726929: mov eax, esi */
  eax = esi;
/* 72692b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72692c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726970(void) {
  LOAD_REGS();
L_726970: /* 726970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726972: push 0x9c3ebb */
  { uint32_t v = 0x9c3ebbu; esp -= 4; W32(esp, v); }
/* 726977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72697d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72697e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726986: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726987: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726988: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72698c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72698e: mov esi, ecx */
  esi = ecx;
/* 726990: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 726993: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726994: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 726997: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72699b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 72699d: call 0x6c463d */
  esp -= 4; W32(esp, 0x7269a2u); SPILL(); f_6c463d(); if (g_unwind) return; RELOAD();
/* 7269a2: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 7269a5: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7269a8: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 7269ab: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7269ae: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 7269b1: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 7269b4: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 7269b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7269b8: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 7269bb: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7269c3: call 0x6c4601 */
  esp -= 4; W32(esp, 0x7269c8u); SPILL(); f_6c4601(); if (g_unwind) return; RELOAD();
/* 7269c8: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7269cb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7269cf: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 7269d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7269d3: mov eax, esi */
  eax = esi;
/* 7269d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7269d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7269dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7269e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726a10(void) {
  LOAD_REGS();
L_726a10: /* 726a10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726a11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726a12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 726a16: mov esi, ecx */
  esi = ecx;
/* 726a18: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 726a1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726a1c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 726a1f: mov dword ptr [esi], 0x9f8570 */
  W32((uint32_t)(esi), 0x9f8570u);
/* 726a25: call 0x6c46dd */
  esp -= 4; W32(esp, 0x726a2au); SPILL(); f_6c46dd(); if (g_unwind) return; RELOAD();
/* 726a2a: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 726a2d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 726a30: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 726a33: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 726a36: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 726a39: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 726a3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726a3d: mov eax, esi */
  eax = esi;
/* 726a3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726a40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726a60(void) {
  LOAD_REGS();
L_726a60: /* 726a60: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 726a63: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 726a66: ret  */
  esp += 4; SPILL(); return;
}

void f_726a80(void) {
  LOAD_REGS();
L_726a80: /* 726a80: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 726a83: ret  */
  esp += 4; SPILL(); return;
}

void f_726aa0(void) {
  LOAD_REGS();
L_726aa0: /* 726aa0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 726aa3: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 726aa6: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 726aa9: ret  */
  esp += 4; SPILL(); return;
}

void f_726ac0(void) {
  LOAD_REGS();
L_726ac0: /* 726ac0: mov eax, 0x24 */
  eax = 0x24u;
/* 726ac5: ret  */
  esp += 4; SPILL(); return;
}

void f_726ae0(void) {
  LOAD_REGS();
L_726ae0: /* 726ae0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 726ae4: mov eax, 1 */
  eax = 0x1u;
/* 726ae9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 726aeb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 726aee: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 726af1: mov eax, 4 */
  eax = 0x4u;
/* 726af6: mov edx, 2 */
  edx = 0x2u;
/* 726afb: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 726b02: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 726b05: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 726b08: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 726b0b: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 726b0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726b30(void) {
  LOAD_REGS();
L_726b30: /* 726b30: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 726b33: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 726b36: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 726b3a: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 726b3d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 726b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726b41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726b42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 726b43: call 0x6ca83f */
  esp -= 4; W32(esp, 0x726b48u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 726b48: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726b4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726b60(void) {
  LOAD_REGS();
L_726b60: /* 726b60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 726b64: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 726b67: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 726b6a: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 726b6d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 726b71: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 726b73: ret 8 */
  esp += 12; SPILL(); return;
}

void f_726b90(void) {
  LOAD_REGS();
L_726b90: /* 726b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726b91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726b92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 726b96: mov esi, ecx */
  esi = ecx;
/* 726b98: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 726b9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726b9c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 726b9f: call 0x6c4aa2 */
  esp -= 4; W32(esp, 0x726ba4u); SPILL(); f_6c4aa2(); if (g_unwind) return; RELOAD();
/* 726ba4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 726ba7: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 726baa: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 726bad: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 726bb0: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 726bb3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 726bb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726bb7: mov eax, esi */
  eax = esi;
/* 726bb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726bba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726bd0(void) {
  LOAD_REGS();
L_726bd0: /* 726bd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 726bd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726bd5: mov esi, ecx */
  esi = ecx;
/* 726bd7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 726bd9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 726bdb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 726bde: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 726be1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 726be4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 726be7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 726bea: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 726bed: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 726bf0: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 726bf3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 726bf6: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 726bf9: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 726bfc: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 726bff: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 726c02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726c03: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 726c06: call 0x6cb8b1 */
  esp -= 4; W32(esp, 0x726c0bu); SPILL(); f_6cb8b1(); if (g_unwind) return; RELOAD();
/* 726c0b: mov eax, esi */
  eax = esi;
/* 726c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726c0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726c40(void) {
  LOAD_REGS();
L_726c40: /* 726c40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726c41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726c42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 726c46: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 726c48: mov esi, ecx */
  esi = ecx;
/* 726c4a: je 0x726c51 */
  if (zf) goto L_726c51;
L_726c4c: /* 726c4c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 726c4f: jmp 0x726c53 */
  goto L_726c53;
L_726c51: /* 726c51: xor eax, eax */
  eax = 0;
L_726c53: /* 726c53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726c54: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 726c57: call 0x6ca02e */
  esp -= 4; W32(esp, 0x726c5cu); SPILL(); f_6ca02e(); if (g_unwind) return; RELOAD();
/* 726c5c: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 726c62: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 726c65: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 726c68: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 726c6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726c6c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 726c6f: mov dword ptr [esi], 0x9f859c */
  W32((uint32_t)(esi), 0x9f859cu);
/* 726c75: mov eax, esi */
  eax = esi;
/* 726c77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726c78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726c90(void) {
  LOAD_REGS();
L_726c90: /* 726c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 726c91: mov ebp, esp */
  ebp = esp;
/* 726c93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726c95: push 0x9c3ed0 */
  { uint32_t v = 0x9c3ed0u; esp -= 4; W32(esp, v); }
/* 726c9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 726ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726ca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726ca8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 726cab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726cac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726cad: mov esi, ecx */
  esi = ecx;
/* 726caf: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 726cb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 726cb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726cb5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 726cb8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 726cbf: jge 0x726ce0 */
  if ((sf == of)) goto L_726ce0;
L_726cc1: /* 726cc1: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 726cc4: xor eax, eax */
  eax = 0;
L_726cc6: /* 726cc6: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726cc9: jge 0x726cce */
  if ((sf == of)) goto L_726cce;
L_726ccb: /* 726ccb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 726ccc: jmp 0x726cc6 */
  goto L_726cc6;
L_726cce: /* 726cce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726cd0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 726cd2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x726cd8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 726cd8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 726cdb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 726cdd: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_726ce0: /* 726ce0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 726ce3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726ce4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726ce5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 726cec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726ced: mov esp, ebp */
  esp = ebp;
/* 726cef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 726cf0: ret  */
  esp += 4; SPILL(); return;
}

void f_726cf1(void) {
  LOAD_REGS();
L_726cf1: /* 726cf1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 726cf4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 726cf9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 726cfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 726cfd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 726d00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x726d05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_726d05(); return;
}

void f_726d05(void) {
  LOAD_REGS();
L_726d05: /* 726d05: push 0x9f85a8 */
  { uint32_t v = 0x9f85a8u; esp -= 4; W32(esp, v); }
/* 726d0a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 726d0f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x726d15u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 726d15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726d18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726d1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726d1c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x726d21u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_726d21: guest_badaddr(0x726d21); return;
}

void f_726d60(void) {
  LOAD_REGS();
L_726d60: /* 726d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726d61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726d62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 726d66: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 726d68: mov esi, ecx */
  esi = ecx;
/* 726d6a: je 0x726d71 */
  if (zf) goto L_726d71;
L_726d6c: /* 726d6c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 726d6f: jmp 0x726d73 */
  goto L_726d73;
L_726d71: /* 726d71: xor eax, eax */
  eax = 0;
L_726d73: /* 726d73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726d74: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 726d77: call 0x6c93ef */
  esp -= 4; W32(esp, 0x726d7cu); SPILL(); f_6c93ef(); if (g_unwind) return; RELOAD();
/* 726d7c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 726d7f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 726d82: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 726d85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726d86: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 726d89: mov eax, esi */
  eax = esi;
/* 726d8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726d8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726da0(void) {
  LOAD_REGS();
L_726da0: /* 726da0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726da1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726da2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 726da3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 726da7: mov ebx, ecx */
  ebx = ecx;
/* 726da9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 726dab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726dac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726dad: je 0x726e75 */
  if (zf) goto L_726e75;
L_726db3: /* 726db3: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 726db8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 726dba: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 726dbd: xor edi, edi */
  edi = 0;
/* 726dbf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 726dc1: je 0x726de3 */
  if (zf) goto L_726de3;
L_726dc3: /* 726dc3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 726dc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 726dc8: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 726dcd: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 726dd2: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726dd7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726dd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726dda: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 726ddd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726dde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726ddf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726de0: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x726de3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_726de3: /* 726de3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726de4: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726de9: mov ecx, ebx */
  ecx = ebx;
/* 726deb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x726df1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 726df1: cmp dword ptr [ebp + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726df4: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 726df8: jle 0x726e75 */
  if ((zf || sf != of)) goto L_726e75;
L_726dfa: /* 726dfa: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 726dfe: mov edi, edi */
  edi = edi;
L_726e00: /* 726e00: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726e05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726e07: mov ecx, ebx */
  ecx = ebx;
/* 726e09: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x726e0fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 726e0f: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 726e15: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 726e17: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 726e19: mov esi, eax */
  esi = eax;
/* 726e1b: je 0x726e3b */
  if (zf) goto L_726e3b;
L_726e1d: /* 726e1d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 726e20: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 726e22: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 726e27: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 726e2c: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726e31: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726e33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726e36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726e37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726e38: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x726e3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_726e3b: /* 726e3b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 726e3d: imul esi, esi, 0x148 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x148u);
  esi = (uint32_t)r;
  }
/* 726e43: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 726e45: mov edi, esi */
  edi = esi;
/* 726e47: je 0x726e57 */
  if (zf) goto L_726e57;
L_726e49: /* 726e49: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 726e4c: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 726e50: mov ecx, 0x52 */
  ecx = 0x52u;
/* 726e55: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_726e57: /* 726e57: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 726e5b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 726e5f: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 726e62: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 726e63: add edx, 0x148 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 726e69: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726e6b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 726e6f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 726e73: jl 0x726e00 */
  if ((sf != of)) goto L_726e00;
L_726e75: /* 726e75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726e76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726e77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 726e78: mov eax, ebx */
  eax = ebx;
/* 726e7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726e7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 726e7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_726ec0(void) {
  LOAD_REGS();
L_726ec0: /* 726ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 726ec1: mov ebp, esp */
  ebp = esp;
/* 726ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 726ec5: push 0x9c3ee0 */
  { uint32_t v = 0x9c3ee0u; esp -= 4; W32(esp, v); }
/* 726eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 726ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 726ed8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 726edb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726edd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 726ee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 726ee1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 726ee4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 726ee7: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726eec: xor ebx, ebx */
  ebx = 0;
/* 726eee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726eef: mov ecx, edi */
  ecx = edi;
/* 726ef1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 726ef4: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x726efau); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 726efa: mov ecx, esi */
  ecx = esi;
/* 726efc: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x726f02u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 726f02: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 726f04: je 0x726f77 */
  if (zf) goto L_726f77;
L_726f06: /* 726f06: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 726f09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726f0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726f0b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x726f11u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 726f11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 726f14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726f17: xor eax, eax */
  eax = 0;
/* 726f19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_726f20: /* 726f20: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726f23: jge 0x726f28 */
  if ((sf == of)) goto L_726f28;
L_726f25: /* 726f25: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 726f26: jmp 0x726f20 */
  goto L_726f20;
L_726f28: /* 726f28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726f29: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726f2e: mov ecx, edi */
  ecx = edi;
/* 726f30: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x726f36u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_726f36: /* 726f36: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726f39: jge 0x726faa */
  if ((sf == of)) goto L_726faa;
L_726f3b: /* 726f3b: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726f40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726f42: mov ecx, edi */
  ecx = edi;
/* 726f44: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x726f4au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 726f4a: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 726f50: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 726f52: je 0x726f68 */
  if (zf) goto L_726f68;
L_726f54: /* 726f54: mov ecx, eax */
  ecx = eax;
/* 726f56: call 0x6cba3c */
  esp -= 4; W32(esp, 0x726f5bu); SPILL(); f_6cba3c(); if (g_unwind) return; RELOAD();
/* 726f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726f5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726f5d: call 0x6c9246 */
  esp -= 4; W32(esp, 0x726f62u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 726f62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726f65: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726f66: jmp 0x726f36 */
  goto L_726f36;
L_726f68: /* 726f68: xor eax, eax */
  eax = 0;
/* 726f6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726f6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726f6c: call 0x6c9246 */
  esp -= 4; W32(esp, 0x726f71u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 726f71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726f74: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726f75: jmp 0x726f36 */
  goto L_726f36;
L_726f77: /* 726f77: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 726f7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 726f7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726f7c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x726f82u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 726f82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726f85: xor esi, esi */
  esi = 0;
L_726f87: /* 726f87: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726f89: jge 0x726fa7 */
  if ((sf == of)) goto L_726fa7;
L_726f8b: /* 726f8b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 726f8d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 726f90: mov ecx, esi */
  ecx = esi;
/* 726f92: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 726f98: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 726f9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726f9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 726f9c: call 0x6c9246 */
  esp -= 4; W32(esp, 0x726fa1u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 726fa1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726fa4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 726fa5: jmp 0x726f87 */
  goto L_726f87;
L_726fa7: /* 726fa7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_726faa: /* 726faa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 726fad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726fae: mov eax, esi */
  eax = esi;
/* 726fb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726fb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 726fb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726fb9: mov esp, ebp */
  esp = ebp;
/* 726fbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 726fbc: ret  */
  esp += 4; SPILL(); return;
}

void f_726f6c(void) {
  LOAD_REGS();
  goto L_726f6c;
L_726f36: /* 726f36: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726f39: jge 0x726faa */
  if ((sf == of)) goto L_726faa;
L_726f3b: /* 726f3b: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726f40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726f42: mov ecx, edi */
  ecx = edi;
/* 726f44: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x726f4au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 726f4a: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 726f50: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 726f52: je 0x726f68 */
  if (zf) goto L_726f68;
L_726f54: /* 726f54: mov ecx, eax */
  ecx = eax;
/* 726f56: call 0x6cba3c */
  esp -= 4; W32(esp, 0x726f5bu); SPILL(); f_6cba3c(); if (g_unwind) return; RELOAD();
/* 726f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726f5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726f5d: call 0x6c9246 */
  esp -= 4; W32(esp, 0x726f62u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 726f62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726f65: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726f66: jmp 0x726f36 */
  goto L_726f36;
L_726f68: /* 726f68: xor eax, eax */
  eax = 0;
/* 726f6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726f6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_726f6c: /* 726f6c: call 0x6c9246 */
  esp -= 4; W32(esp, 0x726f71u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 726f71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726f74: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726f75: jmp 0x726f36 */
  goto L_726f36;
L_726faa: /* 726faa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 726fad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726fae: mov eax, esi */
  eax = esi;
/* 726fb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726fb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 726fb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726fb9: mov esp, ebp */
  esp = ebp;
/* 726fbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 726fbc: ret  */
  esp += 4; SPILL(); return;
}

void f_726f74(void) {
  LOAD_REGS();
  goto L_726f74;
L_726f36: /* 726f36: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 726f39: jge 0x726faa */
  if ((sf == of)) goto L_726faa;
L_726f3b: /* 726f3b: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 726f40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 726f42: mov ecx, edi */
  ecx = edi;
/* 726f44: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x726f4au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 726f4a: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 726f50: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 726f52: je 0x726f68 */
  if (zf) goto L_726f68;
L_726f54: /* 726f54: mov ecx, eax */
  ecx = eax;
/* 726f56: call 0x6cba3c */
  esp -= 4; W32(esp, 0x726f5bu); SPILL(); f_6cba3c(); if (g_unwind) return; RELOAD();
/* 726f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726f5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726f5d: call 0x6c9246 */
  esp -= 4; W32(esp, 0x726f62u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 726f62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726f65: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726f66: jmp 0x726f36 */
  goto L_726f36;
L_726f68: /* 726f68: xor eax, eax */
  eax = 0;
/* 726f6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 726f6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 726f6c: call 0x6c9246 */
  esp -= 4; W32(esp, 0x726f71u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 726f71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_726f74: /* 726f74: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 726f75: jmp 0x726f36 */
  goto L_726f36;
L_726faa: /* 726faa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 726fad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 726fae: mov eax, esi */
  eax = esi;
/* 726fb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 726fb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 726fb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 726fb9: mov esp, ebp */
  esp = ebp;
/* 726fbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 726fbc: ret  */
  esp += 4; SPILL(); return;
}

void f_726fbd(void) {
  LOAD_REGS();
L_726fbd: /* 726fbd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 726fc0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 726fc5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 726fc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 726fc9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 726fcc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x726fd1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_726fd1(); return;
}

void f_726fd1(void) {
  LOAD_REGS();
L_726fd1: /* 726fd1: push 0x9f85d8 */
  { uint32_t v = 0x9f85d8u; esp -= 4; W32(esp, v); }
/* 726fd6: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 726fdb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x726fe1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 726fe1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 726fe4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726fe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 726fe8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x726fedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_726fed: guest_badaddr(0x726fed); return;
}

void f_727040(void) {
  LOAD_REGS();
L_727040: /* 727040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727041: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727042: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 727046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727047: mov esi, ecx */
  esi = ecx;
/* 727049: call 0x6c5e0c */
  esp -= 4; W32(esp, 0x72704eu); SPILL(); f_6c5e0c(); if (g_unwind) return; RELOAD();
/* 72704e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 727051: mov ecx, esi */
  ecx = esi;
/* 727053: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 727056: call 0x6c38eb */
  esp -= 4; W32(esp, 0x72705bu); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
/* 72705b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72705c: mov eax, esi */
  eax = esi;
/* 72705e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72705f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727080(void) {
  LOAD_REGS();
L_727080: /* 727080: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727082: push 0x9c3ef9 */
  { uint32_t v = 0x9c3ef9u; esp -= 4; W32(esp, v); }
/* 727087: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72708d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72708e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 727095: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727096: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727097: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727098: mov esi, ecx */
  esi = ecx;
/* 72709a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72709b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72709f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7270a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7270a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7270aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7270b2: jge 0x7270c8 */
  if ((sf == of)) goto L_7270c8;
L_7270b4: /* 7270b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7270b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7270be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7270c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7270c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7270c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7270c8: /* 7270c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7270cb: jle 0x7270e1 */
  if ((zf || sf != of)) goto L_7270e1;
L_7270cd: /* 7270cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7270d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7270d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7270dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7270deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7270de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7270e1: /* 7270e1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7270e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7270e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7270e6: mov ecx, esi */
  ecx = esi;
/* 7270e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7270eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7270ee: mov ecx, esi */
  ecx = esi;
/* 7270f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7270f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7270feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7270fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 727102: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727103: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727104: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 727105: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72710c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72710f: ret  */
  esp += 4; SPILL(); return;
}

void f_727140(void) {
  LOAD_REGS();
L_727140: /* 727140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727141: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 727142: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 727146: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727147: mov esi, ecx */
  esi = ecx;
/* 727149: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72714b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72714c: je 0x7271e7 */
  if (zf) goto L_7271e7;
L_727152: /* 727152: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 727157: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727159: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72715b: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 72715e: je 0x72717e */
  if (zf) goto L_72717e;
L_727160: /* 727160: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727163: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727165: push 0x6cc68a */
  { uint32_t v = 0x6cc68au; esp -= 4; W32(esp, v); }
/* 72716a: push 0x6c7bc1 */
  { uint32_t v = 0x6c7bc1u; esp -= 4; W32(esp, v); }
/* 72716f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 727171: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727173: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 727174: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 727177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 727179: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72717a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72717b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x72717eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72717e: /* 72717e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72717f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 727181: mov ecx, esi */
  ecx = esi;
/* 727183: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x727189u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 727189: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 72718c: xor ebx, ebx */
  ebx = 0;
/* 72718e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727190: jle 0x7271e7 */
  if ((zf || sf != of)) goto L_7271e7;
L_727192: /* 727192: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 727194: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 727196: mov ecx, esi */
  ecx = esi;
/* 727198: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72719eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72719e: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7271a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7271a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7271a8: mov edi, eax */
  edi = eax;
/* 7271aa: je 0x7271c7 */
  if (zf) goto L_7271c7;
L_7271ac: /* 7271ac: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7271af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7271b1: push 0x6cc68a */
  { uint32_t v = 0x6cc68au; esp -= 4; W32(esp, v); }
/* 7271b6: push 0x6c7bc1 */
  { uint32_t v = 0x6c7bc1u; esp -= 4; W32(esp, v); }
/* 7271bb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7271bd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7271bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7271c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7271c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7271c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7271c4: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7271c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7271c7: /* 7271c7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7271c9: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 7271cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7271ce: je 0x7271df */
  if (zf) goto L_7271df;
L_7271d0: /* 7271d0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 7271d3: mov ecx, dword ptr [edx + ebx*8] */
  ecx = R32((uint32_t)(edx + ebx*8));
/* 7271d6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7271d8: mov edx, dword ptr [edx + ebx*8 + 4] */
  edx = R32((uint32_t)(edx + ebx*8 + 0x4u));
/* 7271dc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_7271df: /* 7271df: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7271e2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7271e3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7271e5: jl 0x727192 */
  if ((sf != of)) goto L_727192;
L_7271e7: /* 7271e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7271e8: mov eax, esi */
  eax = esi;
/* 7271ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7271eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7271ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7271ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727220(void) {
  LOAD_REGS();
L_727220: /* 727220: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727221: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 727225: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 727226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727227: mov esi, ecx */
  esi = ecx;
/* 727229: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72722b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72722c: je 0x7272e0 */
  if (zf) goto L_7272e0;
L_727232: /* 727232: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 727237: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727239: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72723b: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 72723e: je 0x72725e */
  if (zf) goto L_72725e;
L_727240: /* 727240: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727243: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727245: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 72724a: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 72724f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 727251: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727253: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 727254: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 727257: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 727259: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72725a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72725b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x72725eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72725e: /* 72725e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72725f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 727261: mov ecx, esi */
  ecx = esi;
/* 727263: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x727269u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 727269: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 72726c: xor ebp, ebp */
  ebp = 0;
/* 72726e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727270: jle 0x7272e0 */
  if ((zf || sf != of)) goto L_7272e0;
L_727272: /* 727272: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_727276: /* 727276: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 727278: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 72727a: mov ecx, esi */
  ecx = esi;
/* 72727c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x727282u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 727282: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 727288: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72728a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72728c: mov edi, eax */
  edi = eax;
/* 72728e: je 0x7272ab */
  if (zf) goto L_7272ab;
L_727290: /* 727290: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 727293: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727295: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 72729a: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 72729f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7272a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7272a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7272a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7272a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7272a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7272a8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7272abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7272ab: /* 7272ab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7272ad: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7272b0: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7272b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7272b5: je 0x7272cd */
  if (zf) goto L_7272cd;
L_7272b7: /* 7272b7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7272b9: add ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7272bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7272bf: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7272c1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7272c4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7272c7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7272ca: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_7272cd: /* 7272cd: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7272d1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7272d4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7272d5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7272d8: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7272da: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7272de: jl 0x727276 */
  if ((sf != of)) goto L_727276;
L_7272e0: /* 7272e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7272e1: mov eax, esi */
  eax = esi;
/* 7272e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7272e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7272e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7272e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727330(void) {
  LOAD_REGS();
L_727330: /* 727330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727331: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 727335: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 727336: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727337: mov esi, ecx */
  esi = ecx;
/* 727339: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72733b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72733c: je 0x7273cf */
  if (zf) goto L_7273cf;
L_727342: /* 727342: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 727347: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727349: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72734b: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 72734e: je 0x72736e */
  if (zf) goto L_72736e;
L_727350: /* 727350: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727353: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727355: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 72735a: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 72735f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 727361: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727363: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 727364: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 727367: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 727369: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72736a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72736b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x72736eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72736e: /* 72736e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72736f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 727371: mov ecx, esi */
  ecx = esi;
/* 727373: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x727379u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 727379: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 72737c: xor ebp, ebp */
  ebp = 0;
/* 72737e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727380: jle 0x7273cf */
  if ((zf || sf != of)) goto L_7273cf;
L_727382: /* 727382: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 727384: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 727386: mov ecx, esi */
  ecx = esi;
/* 727388: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72738eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72738e: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 727394: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 727396: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 727398: mov edi, eax */
  edi = eax;
/* 72739a: je 0x7273b7 */
  if (zf) goto L_7273b7;
L_72739c: /* 72739c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 72739f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7273a1: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7273a6: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7273ab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7273ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7273af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7273b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7273b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7273b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7273b4: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7273b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7273b7: /* 7273b7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7273b9: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 7273bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7273be: je 0x7273c7 */
  if (zf) goto L_7273c7;
L_7273c0: /* 7273c0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7273c2: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 7273c5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7273c7: /* 7273c7: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7273ca: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7273cb: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7273cd: jl 0x727382 */
  if ((sf != of)) goto L_727382;
L_7273cf: /* 7273cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7273d0: mov eax, esi */
  eax = esi;
/* 7273d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7273d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7273d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7273d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727410(void) {
  LOAD_REGS();
L_727410: /* 727410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727412: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 727416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727417: mov esi, ecx */
  esi = ecx;
/* 727419: call 0x6c93ae */
  esp -= 4; W32(esp, 0x72741eu); SPILL(); f_6c93ae(); if (g_unwind) return; RELOAD();
/* 72741e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 727421: mov ecx, esi */
  ecx = esi;
/* 727423: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 727426: call 0x6c3fda */
  esp -= 4; W32(esp, 0x72742bu); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 72742b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72742c: mov eax, esi */
  eax = esi;
/* 72742e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72742f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727450(void) {
  LOAD_REGS();
L_727450: /* 727450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727452: push 0x9c3f19 */
  { uint32_t v = 0x9c3f19u; esp -= 4; W32(esp, v); }
/* 727457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72745d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72745e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 727465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727466: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727467: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727468: mov esi, ecx */
  esi = ecx;
/* 72746a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72746b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72746f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 727472: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727474: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72747a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 727482: jge 0x727498 */
  if ((sf == of)) goto L_727498;
L_727484: /* 727484: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727489: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72748e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 727493: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727495u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727495: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727498: /* 727498: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72749b: jle 0x7274b1 */
  if ((zf || sf != of)) goto L_7274b1;
L_72749d: /* 72749d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7274a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7274a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7274ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7274aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7274ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7274b1: /* 7274b1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7274b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7274b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7274b6: mov ecx, esi */
  ecx = esi;
/* 7274b8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7274beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7274be: mov ecx, esi */
  ecx = esi;
/* 7274c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7274c8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7274ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7274ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7274d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7274d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7274d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7274d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7274dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7274df: ret  */
  esp += 4; SPILL(); return;
}

void f_727510(void) {
  LOAD_REGS();
L_727510: /* 727510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727511: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727512: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 727516: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727517: mov esi, ecx */
  esi = ecx;
/* 727519: call 0x6c1947 */
  esp -= 4; W32(esp, 0x72751eu); SPILL(); f_6c1947(); if (g_unwind) return; RELOAD();
/* 72751e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 727521: mov ecx, esi */
  ecx = esi;
/* 727523: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 727526: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x72752bu); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 72752b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72752c: mov eax, esi */
  eax = esi;
/* 72752e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72752f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727550(void) {
  LOAD_REGS();
L_727550: /* 727550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727552: push 0x9c3f39 */
  { uint32_t v = 0x9c3f39u; esp -= 4; W32(esp, v); }
/* 727557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72755d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72755e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 727565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727566: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727567: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727568: mov esi, ecx */
  esi = ecx;
/* 72756a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72756b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72756f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 727572: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727574: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72757a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 727582: jge 0x727598 */
  if ((sf == of)) goto L_727598;
L_727584: /* 727584: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727589: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72758e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 727593: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727595: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727598: /* 727598: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72759b: jle 0x7275b1 */
  if ((zf || sf != of)) goto L_7275b1;
L_72759d: /* 72759d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7275a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7275a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7275ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7275aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7275ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7275b1: /* 7275b1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7275b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7275b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7275b6: mov ecx, esi */
  ecx = esi;
/* 7275b8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7275beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7275be: mov ecx, esi */
  ecx = esi;
/* 7275c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7275c8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7275ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7275ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7275d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7275d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7275d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7275d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7275dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7275df: ret  */
  esp += 4; SPILL(); return;
}

void f_727610(void) {
  LOAD_REGS();
L_727610: /* 727610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727612: push 0x9c3f59 */
  { uint32_t v = 0x9c3f59u; esp -= 4; W32(esp, v); }
/* 727617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72761d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72761e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 727625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727627: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727628: mov esi, ecx */
  esi = ecx;
/* 72762a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72762b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72762f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 727632: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727634: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72763a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 727642: jge 0x727658 */
  if ((sf == of)) goto L_727658;
L_727644: /* 727644: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727649: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72764e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 727653: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727655u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727655: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727658: /* 727658: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72765b: jle 0x727671 */
  if ((zf || sf != of)) goto L_727671;
L_72765d: /* 72765d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 727662: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727667: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72766c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72766eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72766e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727671: /* 727671: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 727673: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 727676: mov ecx, esi */
  ecx = esi;
/* 727678: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72767eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72767e: mov ecx, esi */
  ecx = esi;
/* 727680: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 727688: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72768eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72768e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 727692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 727695: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72769c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72769f: ret  */
  esp += 4; SPILL(); return;
}

void f_7276d0(void) {
  LOAD_REGS();
L_7276d0: /* 7276d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7276d2: push 0x9c3f79 */
  { uint32_t v = 0x9c3f79u; esp -= 4; W32(esp, v); }
/* 7276d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7276dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7276de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7276e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7276e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7276e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7276e8: mov esi, ecx */
  esi = ecx;
/* 7276ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7276eb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7276ef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7276f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7276f4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7276fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 727702: jge 0x727718 */
  if ((sf == of)) goto L_727718;
L_727704: /* 727704: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727709: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72770e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 727713: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727715u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727715: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727718: /* 727718: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72771b: jle 0x727731 */
  if ((zf || sf != of)) goto L_727731;
L_72771d: /* 72771d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 727722: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727727: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72772c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72772eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72772e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727731: /* 727731: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 727733: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 727736: mov ecx, esi */
  ecx = esi;
/* 727738: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72773eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72773e: mov ecx, esi */
  ecx = esi;
/* 727740: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 727748: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72774eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72774e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 727752: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727754: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 727755: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72775c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72775f: ret  */
  esp += 4; SPILL(); return;
}

void f_727790(void) {
  LOAD_REGS();
L_727790: /* 727790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 727791: mov ebp, esp */
  ebp = esp;
/* 727793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727795: push 0x9c3fb7 */
  { uint32_t v = 0x9c3fb7u; esp -= 4; W32(esp, v); }
/* 72779a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7277a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7277a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7277a8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7277ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7277ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7277ad: mov esi, ecx */
  esi = ecx;
/* 7277af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7277b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7277b3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7277b6: mov dword ptr [esi], 0x9f859c */
  W32((uint32_t)(esi), 0x9f859cu);
/* 7277bc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7277bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7277c1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7277c8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7277cc: je 0x7277d4 */
  if (zf) goto L_7277d4;
L_7277ce: /* 7277ce: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7277d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7277d1: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x7277d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7277d4: /* 7277d4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7277d7: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7277de: call 0x6c1730 */
  esp -= 4; W32(esp, 0x7277e3u); SPILL(); f_6c1730(); if (g_unwind) return; RELOAD();
/* 7277e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7277e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7277e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7277e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7277ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7277f0: mov esp, ebp */
  esp = ebp;
/* 7277f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7277f3: ret  */
  esp += 4; SPILL(); return;
}

void f_7277f4(void) {
  LOAD_REGS();
L_7277f4: /* 7277f4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7277f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7277fc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7277ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 727800: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 727803: call 0x99caf8 */
  esp -= 4; W32(esp, 0x727808u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_727808(); return;
}

void f_727808(void) {
  LOAD_REGS();
L_727808: /* 727808: push 0x9f85f0 */
  { uint32_t v = 0x9f85f0u; esp -= 4; W32(esp, v); }
/* 72780d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 727812: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x727818u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 727818: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72781b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72781d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72781f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x727824u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_727824: guest_badaddr(0x727824); return;
}

void f_727860(void) {
  LOAD_REGS();
L_727860: /* 727860: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727861: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 727865: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727867: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 727868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727869: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 72786f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727870: mov ebp, ecx */
  ebp = ecx;
/* 727872: jge 0x727888 */
  if ((sf == of)) goto L_727888;
L_727874: /* 727874: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 727879: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72787e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 727883: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x727885u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727885: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727888: /* 727888: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72788b: jle 0x7278a1 */
  if ((zf || sf != of)) goto L_7278a1;
L_72788d: /* 72788d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727892: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727897: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 72789c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72789eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72789e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7278a1: /* 7278a1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7278a5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7278a8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7278ab: jle 0x7278c1 */
  if ((zf || sf != of)) goto L_7278c1;
L_7278ad: /* 7278ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7278b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7278b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7278bc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7278beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7278be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7278c1: /* 7278c1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7278c3: jge 0x7278e0 */
  if ((sf == of)) goto L_7278e0;
L_7278c5: /* 7278c5: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 7278c8: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7278cb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7278cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7278d0: /* 7278d0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7278d3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7278d5: call 0x6cce78 */
  esp -= 4; W32(esp, 0x7278dau); SPILL(); f_6cce78(); if (g_unwind) return; RELOAD();
/* 7278da: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7278dd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7278de: jne 0x7278d0 */
  if (!zf) goto L_7278d0;
L_7278e0: /* 7278e0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7278e4: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7278e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7278e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7278e8: mov ecx, ebp */
  ecx = ebp;
/* 7278ea: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7278f0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7278f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7278f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7278f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7278f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7278f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_727930(void) {
  LOAD_REGS();
L_727930: /* 727930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727931: mov esi, ecx */
  esi = ecx;
/* 727933: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727937: xor edi, edi */
  edi = 0;
/* 727939: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 72793b: jle 0x727955 */
  if ((zf || sf != of)) goto L_727955;
L_72793d: /* 72793d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72793e: xor ebx, ebx */
  ebx = 0;
L_727940: /* 727940: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 727942: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 727944: call 0x6cce78 */
  esp -= 4; W32(esp, 0x727949u); SPILL(); f_6cce78(); if (g_unwind) return; RELOAD();
/* 727949: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 72794c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 72794d: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 727950: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727952: jl 0x727940 */
  if ((sf != of)) goto L_727940;
L_727954: /* 727954: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_727955: /* 727955: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 727959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72795a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 72795c: mov ecx, esi */
  ecx = esi;
/* 72795e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x727964u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 727964: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727965: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727966: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727980(void) {
  LOAD_REGS();
L_727980: /* 727980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727981: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 727985: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727987: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 727988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727989: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 72798f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727990: mov ebp, ecx */
  ebp = ecx;
/* 727992: jge 0x7279a8 */
  if ((sf == of)) goto L_7279a8;
L_727994: /* 727994: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 727999: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72799e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7279a3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7279a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7279a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7279a8: /* 7279a8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7279ab: jle 0x7279c1 */
  if ((zf || sf != of)) goto L_7279c1;
L_7279ad: /* 7279ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7279b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7279b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7279bc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7279beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7279be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7279c1: /* 7279c1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7279c5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7279c8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7279cb: jle 0x7279e1 */
  if ((zf || sf != of)) goto L_7279e1;
L_7279cd: /* 7279cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7279d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7279d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7279dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7279deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7279de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7279e1: /* 7279e1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7279e3: jge 0x727a00 */
  if ((sf == of)) goto L_727a00;
L_7279e5: /* 7279e5: mov esi, ebx */
  esi = ebx;
/* 7279e7: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7279ea: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7279ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7279f0: /* 7279f0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7279f3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7279f5: call 0x6c3c2e */
  esp -= 4; W32(esp, 0x7279fau); SPILL(); f_6c3c2e(); if (g_unwind) return; RELOAD();
/* 7279fa: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7279fd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7279fe: jne 0x7279f0 */
  if (!zf) goto L_7279f0;
L_727a00: /* 727a00: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 727a04: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 727a06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727a07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727a08: mov ecx, ebp */
  ecx = ebp;
/* 727a0a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x727a10u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 727a10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727a11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727a12: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 727a13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 727a14: ret 8 */
  esp += 12; SPILL(); return;
}

void f_727a50(void) {
  LOAD_REGS();
L_727a50: /* 727a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727a51: mov esi, ecx */
  esi = ecx;
/* 727a53: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727a56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727a57: xor edi, edi */
  edi = 0;
/* 727a59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727a5b: jle 0x727a75 */
  if ((zf || sf != of)) goto L_727a75;
L_727a5d: /* 727a5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727a5e: xor ebx, ebx */
  ebx = 0;
L_727a60: /* 727a60: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 727a62: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 727a64: call 0x6c3c2e */
  esp -= 4; W32(esp, 0x727a69u); SPILL(); f_6c3c2e(); if (g_unwind) return; RELOAD();
/* 727a69: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727a6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 727a6d: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 727a70: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727a72: jl 0x727a60 */
  if ((sf != of)) goto L_727a60;
L_727a74: /* 727a74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_727a75: /* 727a75: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 727a79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 727a7a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 727a7c: mov ecx, esi */
  ecx = esi;
/* 727a7e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x727a84u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 727a84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727a85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727a86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727aa0(void) {
  LOAD_REGS();
L_727aa0: /* 727aa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727aa2: push 0x9c3fd9 */
  { uint32_t v = 0x9c3fd9u; esp -= 4; W32(esp, v); }
/* 727aa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 727aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 727aae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 727ab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727ab6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727ab7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727ab8: mov esi, ecx */
  esi = ecx;
/* 727aba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727abb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 727abf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 727ac2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727ac4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 727aca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 727ad2: jge 0x727ae8 */
  if ((sf == of)) goto L_727ae8;
L_727ad4: /* 727ad4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727ad9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727ade: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 727ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727ae5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727ae8: /* 727ae8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727aeb: jle 0x727b01 */
  if ((zf || sf != of)) goto L_727b01;
L_727aed: /* 727aed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 727af2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727af7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 727afc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727afeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727afe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727b01: /* 727b01: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 727b03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727b04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 727b06: mov ecx, esi */
  ecx = esi;
/* 727b08: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x727b0eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 727b0e: mov ecx, esi */
  ecx = esi;
/* 727b10: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 727b18: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x727b1eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 727b1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 727b22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727b23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727b24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 727b25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 727b2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 727b2f: ret  */
  esp += 4; SPILL(); return;
}

void f_727b60(void) {
  LOAD_REGS();
L_727b60: /* 727b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727b61: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 727b65: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727b67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 727b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727b69: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 727b6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727b70: mov ebp, ecx */
  ebp = ecx;
/* 727b72: jge 0x727b88 */
  if ((sf == of)) goto L_727b88;
L_727b74: /* 727b74: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 727b79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727b7e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 727b83: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x727b85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727b85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727b88: /* 727b88: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727b8b: jle 0x727ba1 */
  if ((zf || sf != of)) goto L_727ba1;
L_727b8d: /* 727b8d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727b92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727b97: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 727b9c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x727b9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727b9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727ba1: /* 727ba1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 727ba5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 727ba8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727bab: jle 0x727bc1 */
  if ((zf || sf != of)) goto L_727bc1;
L_727bad: /* 727bad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 727bb2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727bb7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 727bbc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x727bbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727bbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727bc1: /* 727bc1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727bc3: jge 0x727be0 */
  if ((sf == of)) goto L_727be0;
L_727bc5: /* 727bc5: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 727bc8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 727bcb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 727bcd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_727bd0: /* 727bd0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 727bd3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 727bd5: call 0x6c8ac6 */
  esp -= 4; W32(esp, 0x727bdau); SPILL(); f_6c8ac6(); if (g_unwind) return; RELOAD();
/* 727bda: add esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 727bdd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 727bde: jne 0x727bd0 */
  if (!zf) goto L_727bd0;
L_727be0: /* 727be0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 727be4: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 727be6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727be7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727be8: mov ecx, ebp */
  ecx = ebp;
/* 727bea: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x727bf0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 727bf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727bf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727bf2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 727bf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 727bf4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_727c30(void) {
  LOAD_REGS();
L_727c30: /* 727c30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727c31: mov esi, ecx */
  esi = ecx;
/* 727c33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727c36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727c37: xor edi, edi */
  edi = 0;
/* 727c39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727c3b: jle 0x727c55 */
  if ((zf || sf != of)) goto L_727c55;
L_727c3d: /* 727c3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727c3e: xor ebx, ebx */
  ebx = 0;
L_727c40: /* 727c40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 727c42: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 727c44: call 0x6c8ac6 */
  esp -= 4; W32(esp, 0x727c49u); SPILL(); f_6c8ac6(); if (g_unwind) return; RELOAD();
/* 727c49: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 727c4c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 727c4d: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 727c50: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727c52: jl 0x727c40 */
  if ((sf != of)) goto L_727c40;
L_727c54: /* 727c54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_727c55: /* 727c55: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 727c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 727c5a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 727c5c: mov ecx, esi */
  ecx = esi;
/* 727c5e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x727c64u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 727c64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727c65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727c66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727c80(void) {
  LOAD_REGS();
L_727c80: /* 727c80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 727c82: push 0x9c3ff9 */
  { uint32_t v = 0x9c3ff9u; esp -= 4; W32(esp, v); }
/* 727c87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 727c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 727c8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 727c95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 727c96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 727c97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727c98: mov esi, ecx */
  esi = ecx;
/* 727c9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727c9b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 727c9f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 727ca2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 727ca4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 727caa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 727cb2: jge 0x727cc8 */
  if ((sf == of)) goto L_727cc8;
L_727cb4: /* 727cb4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 727cb9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727cbe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 727cc3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727cc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727cc8: /* 727cc8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 727ccb: jle 0x727ce1 */
  if ((zf || sf != of)) goto L_727ce1;
L_727ccd: /* 727ccd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 727cd2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 727cd7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 727cdc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x727cdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 727cde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_727ce1: /* 727ce1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 727ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727ce4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 727ce6: mov ecx, esi */
  ecx = esi;
/* 727ce8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x727ceeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 727cee: mov ecx, esi */
  ecx = esi;
/* 727cf0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 727cf8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x727cfeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 727cfe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 727d02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727d03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727d04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 727d05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 727d0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 727d0f: ret  */
  esp += 4; SPILL(); return;
}

void f_727d40(void) {
  LOAD_REGS();
L_727d40: /* 727d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727d41: mov esi, ecx */
  esi = ecx;
/* 727d43: call 0x6c3eb3 */
  esp -= 4; W32(esp, 0x727d48u); SPILL(); f_6c3eb3(); if (g_unwind) return; RELOAD();
/* 727d48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727d4d: je 0x727d5c */
  if (zf) goto L_727d5c;
L_727d4f: /* 727d4f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727d54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727d56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727d58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727d59: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727d5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727d5c: /* 727d5c: mov eax, esi */
  eax = esi;
/* 727d5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727d5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727d80(void) {
  LOAD_REGS();
L_727d80: /* 727d80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727d81: mov esi, ecx */
  esi = ecx;
/* 727d83: call 0x6c12b2 */
  esp -= 4; W32(esp, 0x727d88u); SPILL(); f_6c12b2(); if (g_unwind) return; RELOAD();
/* 727d88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727d8d: je 0x727d9c */
  if (zf) goto L_727d9c;
L_727d8f: /* 727d8f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727d94: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727d96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727d98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727d99: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727d9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727d9c: /* 727d9c: mov eax, esi */
  eax = esi;
/* 727d9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727d9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727dc0(void) {
  LOAD_REGS();
L_727dc0: /* 727dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727dc1: mov esi, ecx */
  esi = ecx;
/* 727dc3: call 0x6c1622 */
  esp -= 4; W32(esp, 0x727dc8u); SPILL(); f_6c1622(); if (g_unwind) return; RELOAD();
/* 727dc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727dcd: je 0x727ddc */
  if (zf) goto L_727ddc;
L_727dcf: /* 727dcf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727dd4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727dd6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727dd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727dd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727ddcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727ddc: /* 727ddc: mov eax, esi */
  eax = esi;
/* 727dde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727ddf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727e00(void) {
  LOAD_REGS();
L_727e00: /* 727e00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727e01: mov esi, ecx */
  esi = ecx;
/* 727e03: call 0x6c8b20 */
  esp -= 4; W32(esp, 0x727e08u); SPILL(); f_6c8b20(); if (g_unwind) return; RELOAD();
/* 727e08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727e0d: je 0x727e1c */
  if (zf) goto L_727e1c;
L_727e0f: /* 727e0f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727e14: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727e16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727e18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727e19: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727e1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727e1c: /* 727e1c: mov eax, esi */
  eax = esi;
/* 727e1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727e1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727e40(void) {
  LOAD_REGS();
L_727e40: /* 727e40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727e41: mov esi, ecx */
  esi = ecx;
/* 727e43: call 0x6caeac */
  esp -= 4; W32(esp, 0x727e48u); SPILL(); f_6caeac(); if (g_unwind) return; RELOAD();
/* 727e48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727e4d: je 0x727e5c */
  if (zf) goto L_727e5c;
L_727e4f: /* 727e4f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727e54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727e56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727e58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727e59: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727e5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727e5c: /* 727e5c: mov eax, esi */
  eax = esi;
/* 727e5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727e5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727e80(void) {
  LOAD_REGS();
L_727e80: /* 727e80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727e81: mov esi, ecx */
  esi = ecx;
/* 727e83: call 0x6c1f41 */
  esp -= 4; W32(esp, 0x727e88u); SPILL(); f_6c1f41(); if (g_unwind) return; RELOAD();
/* 727e88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727e8d: je 0x727e9c */
  if (zf) goto L_727e9c;
L_727e8f: /* 727e8f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727e94: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727e96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727e98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727e99: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727e9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727e9c: /* 727e9c: mov eax, esi */
  eax = esi;
/* 727e9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727e9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727ec0(void) {
  LOAD_REGS();
L_727ec0: /* 727ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727ec1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727ec2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 727ec6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727ec7: mov esi, ecx */
  esi = ecx;
/* 727ec9: call 0x6c6ee2 */
  esp -= 4; W32(esp, 0x727eceu); SPILL(); f_6c6ee2(); if (g_unwind) return; RELOAD();
/* 727ece: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 727ed1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 727ed3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 727ed6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 727ed8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 727edb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 727ede: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 727ee1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 727ee4: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 727ee7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727ee8: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 727eeb: mov eax, esi */
  eax = esi;
/* 727eed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727eee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727f10(void) {
  LOAD_REGS();
L_727f10: /* 727f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727f11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727f12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 727f16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 727f17: mov esi, ecx */
  esi = ecx;
/* 727f19: call 0x6c8251 */
  esp -= 4; W32(esp, 0x727f1eu); SPILL(); f_6c8251(); if (g_unwind) return; RELOAD();
/* 727f1e: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 727f21: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 727f23: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 727f26: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 727f28: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 727f2b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 727f2e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 727f31: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 727f34: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 727f37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 727f38: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 727f3b: mov eax, esi */
  eax = esi;
/* 727f3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727f3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727f60(void) {
  LOAD_REGS();
L_727f60: /* 727f60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727f61: mov esi, ecx */
  esi = ecx;
/* 727f63: call 0x6c2fe0 */
  esp -= 4; W32(esp, 0x727f68u); SPILL(); f_6c2fe0(); if (g_unwind) return; RELOAD();
/* 727f68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727f6d: je 0x727f7c */
  if (zf) goto L_727f7c;
L_727f6f: /* 727f6f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727f74: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727f76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727f78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727f79: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727f7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727f7c: /* 727f7c: mov eax, esi */
  eax = esi;
/* 727f7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727f7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727fa0(void) {
  LOAD_REGS();
L_727fa0: /* 727fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727fa1: mov esi, ecx */
  esi = ecx;
/* 727fa3: call 0x6c7711 */
  esp -= 4; W32(esp, 0x727fa8u); SPILL(); f_6c7711(); if (g_unwind) return; RELOAD();
/* 727fa8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727fad: je 0x727fbc */
  if (zf) goto L_727fbc;
L_727faf: /* 727faf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727fb4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727fb6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727fb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727fb9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727fbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727fbc: /* 727fbc: mov eax, esi */
  eax = esi;
/* 727fbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727fbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_727fe0(void) {
  LOAD_REGS();
L_727fe0: /* 727fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727fe1: mov esi, ecx */
  esi = ecx;
/* 727fe3: call 0x6c40e3 */
  esp -= 4; W32(esp, 0x727fe8u); SPILL(); f_6c40e3(); if (g_unwind) return; RELOAD();
/* 727fe8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 727fed: je 0x727ffc */
  if (zf) goto L_727ffc;
L_727fef: /* 727fef: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 727ff4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 727ff6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 727ff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 727ff9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x727ffcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_727ffc: /* 727ffc: mov eax, esi */
  eax = esi;
/* 727ffe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 727fff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728020(void) {
  LOAD_REGS();
L_728020: /* 728020: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 728023: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_728040(void) {
  LOAD_REGS();
L_728040: /* 728040: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 728043: jmp 0x6cb474 */
  SPILL(); f_6cb474(); return;
}

void f_728060(void) {
  LOAD_REGS();
L_728060: /* 728060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728062: push 0x9c401b */
  { uint32_t v = 0x9c401bu; esp -= 4; W32(esp, v); }
/* 728067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72806d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72806e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728077: mov esi, ecx */
  esi = ecx;
/* 728079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72807d: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 728080: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 728088: call 0x6c6226 */
  esp -= 4; W32(esp, 0x72808du); SPILL(); f_6c6226(); if (g_unwind) return; RELOAD();
/* 72808d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 728090: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 728098: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x72809du); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 72809d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7280a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7280a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7280a9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7280ac: ret  */
  esp += 4; SPILL(); return;
}

void f_7280d0(void) {
  LOAD_REGS();
L_7280d0: /* 7280d0: jmp 0x6c4ad9 */
  SPILL(); f_6c4ad9(); return;
}

void f_7280f0(void) {
  LOAD_REGS();
L_7280f0: /* 7280f0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7280f3: jmp 0x6cafe7 */
  SPILL(); f_6cafe7(); return;
}

void f_728110(void) {
  LOAD_REGS();
L_728110: /* 728110: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 728113: jmp 0x6c71a8 */
  SPILL(); f_6c71a8(); return;
}

void f_728130(void) {
  LOAD_REGS();
L_728130: /* 728130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728131: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 728135: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 728137: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 728138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728139: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 72813f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728140: mov ebp, ecx */
  ebp = ecx;
/* 728142: jge 0x728158 */
  if ((sf == of)) goto L_728158;
L_728144: /* 728144: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 728149: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72814e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 728153: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x728155u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 728155: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728158: /* 728158: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72815b: jle 0x728171 */
  if ((zf || sf != of)) goto L_728171;
L_72815d: /* 72815d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 728162: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 728167: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 72816c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72816eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72816e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728171: /* 728171: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 728175: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 728178: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72817b: jle 0x728191 */
  if ((zf || sf != of)) goto L_728191;
L_72817d: /* 72817d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 728182: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 728187: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72818c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72818eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72818e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728191: /* 728191: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 728193: jge 0x7281b0 */
  if ((sf == of)) goto L_7281b0;
L_728195: /* 728195: mov esi, ebx */
  esi = ebx;
/* 728197: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 72819a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 72819c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7281a0: /* 7281a0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7281a3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7281a5: call 0x6c7d06 */
  esp -= 4; W32(esp, 0x7281aau); SPILL(); f_6c7d06(); if (g_unwind) return; RELOAD();
/* 7281aa: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7281ad: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7281ae: jne 0x7281a0 */
  if (!zf) goto L_7281a0;
L_7281b0: /* 7281b0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7281b4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7281b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7281b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7281b8: mov ecx, ebp */
  ecx = ebp;
/* 7281ba: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7281c0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7281c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7281c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7281c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7281c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7281c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_728200(void) {
  LOAD_REGS();
L_728200: /* 728200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728202: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728203: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 728207: mov esi, ecx */
  esi = ecx;
/* 728209: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72820b: je 0x72824d */
  if (zf) goto L_72824d;
L_72820d: /* 72820d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 728210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728211: call 0x6c5ba5 */
  esp -= 4; W32(esp, 0x728216u); SPILL(); f_6c5ba5(); if (g_unwind) return; RELOAD();
/* 728216: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 728219: xor ebx, ebx */
  ebx = 0;
/* 72821b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 72821d: jle 0x72824d */
  if ((zf || sf != of)) goto L_72824d;
L_72821f: /* 72821f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 728220: xor ebp, ebp */
  ebp = 0;
L_728222: /* 728222: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 728224: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 728226: mov ecx, esi */
  ecx = esi;
/* 728228: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72822eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72822e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 728231: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 728233: je 0x728241 */
  if (zf) goto L_728241;
L_728235: /* 728235: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 728237: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 728239: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72823a: mov ecx, eax */
  ecx = eax;
/* 72823c: call 0x6c4039 */
  esp -= 4; W32(esp, 0x728241u); SPILL(); f_6c4039(); if (g_unwind) return; RELOAD();
L_728241: /* 728241: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 728244: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 728245: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 728248: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72824a: jl 0x728222 */
  if ((sf != of)) goto L_728222;
L_72824c: /* 72824c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_72824d: /* 72824d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72824e: mov eax, esi */
  eax = esi;
/* 728250: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 728252: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728280(void) {
  LOAD_REGS();
L_728280: /* 728280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728281: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 728285: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 728287: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 728288: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728289: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 72828f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728290: mov ebp, ecx */
  ebp = ecx;
/* 728292: jge 0x7282a8 */
  if ((sf == of)) goto L_7282a8;
L_728294: /* 728294: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 728299: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72829e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7282a3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7282a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7282a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7282a8: /* 7282a8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7282ab: jle 0x7282c1 */
  if ((zf || sf != of)) goto L_7282c1;
L_7282ad: /* 7282ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7282b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7282b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7282bc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7282beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7282be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7282c1: /* 7282c1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7282c5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7282c8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7282cb: jle 0x7282e1 */
  if ((zf || sf != of)) goto L_7282e1;
L_7282cd: /* 7282cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7282d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7282d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7282dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7282deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7282de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7282e1: /* 7282e1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7282e3: jge 0x728300 */
  if ((sf == of)) goto L_728300;
L_7282e5: /* 7282e5: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 7282e8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7282eb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7282ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7282f0: /* 7282f0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7282f3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7282f5: call 0x6c52b3 */
  esp -= 4; W32(esp, 0x7282fau); SPILL(); f_6c52b3(); if (g_unwind) return; RELOAD();
/* 7282fa: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7282fd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7282fe: jne 0x7282f0 */
  if (!zf) goto L_7282f0;
L_728300: /* 728300: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 728304: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 728306: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728307: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728308: mov ecx, ebp */
  ecx = ebp;
/* 72830a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x728310u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 728310: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728311: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728312: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 728313: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 728314: ret 8 */
  esp += 12; SPILL(); return;
}

void f_728350(void) {
  LOAD_REGS();
L_728350: /* 728350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728352: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728353: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 728357: mov esi, ecx */
  esi = ecx;
/* 728359: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72835b: je 0x7283a0 */
  if (zf) goto L_7283a0;
L_72835d: /* 72835d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 728360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728361: call 0x6c8026 */
  esp -= 4; W32(esp, 0x728366u); SPILL(); f_6c8026(); if (g_unwind) return; RELOAD();
/* 728366: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 728369: xor ebx, ebx */
  ebx = 0;
/* 72836b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 72836d: jle 0x7283a0 */
  if ((zf || sf != of)) goto L_7283a0;
L_72836f: /* 72836f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 728370: xor ebp, ebp */
  ebp = 0;
L_728372: /* 728372: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 728374: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 728376: mov ecx, esi */
  ecx = esi;
/* 728378: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72837eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72837e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 728380: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 728383: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 728386: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 728388: je 0x728394 */
  if (zf) goto L_728394;
L_72838a: /* 72838a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72838c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 72838e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72838f: call 0x6c4a93 */
  esp -= 4; W32(esp, 0x728394u); SPILL(); f_6c4a93(); if (g_unwind) return; RELOAD();
L_728394: /* 728394: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 728397: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 728398: add ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 72839b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72839d: jl 0x728372 */
  if ((sf != of)) goto L_728372;
L_72839f: /* 72839f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7283a0: /* 7283a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7283a1: mov eax, esi */
  eax = esi;
/* 7283a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7283a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7283a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7283d0(void) {
  LOAD_REGS();
L_7283d0: /* 7283d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7283d4: jmp 0x6c8b20 */
  SPILL(); f_6c8b20(); return;
}

void f_7283f0(void) {
  LOAD_REGS();
L_7283f0: /* 7283f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7283f1: mov esi, ecx */
  esi = ecx;
/* 7283f3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7283f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7283f7: xor edi, edi */
  edi = 0;
/* 7283f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7283fb: jle 0x728415 */
  if ((zf || sf != of)) goto L_728415;
L_7283fd: /* 7283fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7283fe: xor ebx, ebx */
  ebx = 0;
L_728400: /* 728400: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 728402: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 728404: call 0x6c8b20 */
  esp -= 4; W32(esp, 0x728409u); SPILL(); f_6c8b20(); if (g_unwind) return; RELOAD();
/* 728409: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 72840c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 72840d: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 728410: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 728412: jl 0x728400 */
  if ((sf != of)) goto L_728400;
L_728414: /* 728414: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_728415: /* 728415: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 728419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72841a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 72841c: mov ecx, esi */
  ecx = esi;
/* 72841e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x728424u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 728424: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728425: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728426: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728440(void) {
  LOAD_REGS();
L_728440: /* 728440: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728441: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 728445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728446: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728447: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 728449: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72844a: mov esi, ecx */
  esi = ecx;
/* 72844c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x728452u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 728452: mov edi, eax */
  edi = eax;
/* 728454: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 728459: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 72845b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72845d: je 0x728479 */
  if (zf) goto L_728479;
L_72845f: /* 72845f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 728462: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 728464: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 728469: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 72846e: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 728470: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 728472: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728473: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728474: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728476: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x728479u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_728479: /* 728479: mov eax, edi */
  eax = edi;
/* 72847b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72847c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72847d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72847e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7284b0(void) {
  LOAD_REGS();
L_7284b0: /* 7284b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7284b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7284b5: mov esi, ecx */
  esi = ecx;
/* 7284b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7284b9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7284bc: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7284be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7284bf: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7284c2: call 0x6c425a */
  esp -= 4; W32(esp, 0x7284c7u); SPILL(); f_6c425a(); if (g_unwind) return; RELOAD();
/* 7284c7: mov eax, esi */
  eax = esi;
/* 7284c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7284ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7284e0(void) {
  LOAD_REGS();
L_7284e0: /* 7284e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7284e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7284e5: mov esi, ecx */
  esi = ecx;
/* 7284e7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7284e9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7284ec: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7284ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7284ef: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7284f2: call 0x6ca60f */
  esp -= 4; W32(esp, 0x7284f7u); SPILL(); f_6ca60f(); if (g_unwind) return; RELOAD();
/* 7284f7: mov eax, esi */
  eax = esi;
/* 7284f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7284fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728510(void) {
  LOAD_REGS();
L_728510: /* 728510: jmp 0x6c25d6 */
  SPILL(); f_6c25d6(); return;
}

void f_728530(void) {
  LOAD_REGS();
L_728530: /* 728530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728531: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728532: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 728536: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728537: mov esi, ecx */
  esi = ecx;
/* 728539: call 0x6ca0c9 */
  esp -= 4; W32(esp, 0x72853eu); SPILL(); f_6ca0c9(); if (g_unwind) return; RELOAD();
/* 72853e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 728541: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 728544: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728545: mov eax, esi */
  eax = esi;
/* 728547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728548: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728560(void) {
  LOAD_REGS();
L_728560: /* 728560: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728562: push 0x9c4043 */
  { uint32_t v = 0x9c4043u; esp -= 4; W32(esp, v); }
/* 728567: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72856d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72856e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728575: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728577: mov esi, ecx */
  esi = ecx;
/* 728579: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72857d: mov dword ptr [esi], 0x9f8630 */
  W32((uint32_t)(esi), 0x9f8630u);
/* 728583: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72858b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x728591u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 728591: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728594: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 728599: call 0x6c8cb0 */
  esp -= 4; W32(esp, 0x72859eu); SPILL(); f_6c8cb0(); if (g_unwind) return; RELOAD();
/* 72859e: mov ecx, esi */
  ecx = esi;
/* 7285a0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7285a8: call 0x6c9d18 */
  esp -= 4; W32(esp, 0x7285adu); SPILL(); f_6c9d18(); if (g_unwind) return; RELOAD();
/* 7285ad: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7285b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7285b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7285b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7285bc: ret  */
  esp += 4; SPILL(); return;
}

void f_7285e0(void) {
  LOAD_REGS();
L_7285e0: /* 7285e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7285e2: push 0x9c4068 */
  { uint32_t v = 0x9c4068u; esp -= 4; W32(esp, v); }
/* 7285e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7285ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7285ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7285f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7285f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7285f7: mov esi, ecx */
  esi = ecx;
/* 7285f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7285fd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x728603u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 728603: xor eax, eax */
  eax = 0;
/* 728605: mov dword ptr [esi + 0x2c], 0x2c */
  W32((uint32_t)(esi + 0x2cu), 0x2cu);
/* 72860c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72860f: mov dword ptr [esi + 0x34], 4 */
  W32((uint32_t)(esi + 0x34u), 0x4u);
/* 728616: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728619: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 72861d: mov dword ptr [esi], 0x9f8630 */
  W32((uint32_t)(esi), 0x9f8630u);
/* 728623: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x728629u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 728629: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72862d: mov eax, esi */
  eax = esi;
/* 72862f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728630: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728637: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72863a: ret  */
  esp += 4; SPILL(); return;
}

void f_728660(void) {
  LOAD_REGS();
L_728660: /* 728660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728662: push 0x9c4088 */
  { uint32_t v = 0x9c4088u; esp -= 4; W32(esp, v); }
/* 728667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72866d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72866e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728675: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728677: mov esi, ecx */
  esi = ecx;
/* 728679: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72867d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x728683u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 728683: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 728687: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72868a: xor eax, eax */
  eax = 0;
/* 72868c: mov dword ptr [esi + 0x2c], 0x2c */
  W32((uint32_t)(esi + 0x2cu), 0x2cu);
/* 728693: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 728696: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728699: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 72869d: mov dword ptr [esi], 0x9f8630 */
  W32((uint32_t)(esi), 0x9f8630u);
/* 7286a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7286a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7286a9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7286ad: mov eax, esi */
  eax = esi;
/* 7286af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7286b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7286b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7286ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7286e0(void) {
  LOAD_REGS();
L_7286e0: /* 7286e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7286e1: mov ebp, esp */
  ebp = esp;
/* 7286e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7286e5: push 0x9c40a0 */
  { uint32_t v = 0x9c40a0u; esp -= 4; W32(esp, v); }
/* 7286ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7286f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7286f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7286f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7286fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7286fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7286fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7286fe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 728701: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 728704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728705: mov esi, ecx */
  esi = ecx;
/* 728707: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 72870e: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x728713u); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 728713: mov ecx, edi */
  ecx = edi;
/* 728715: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x72871bu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 72871b: cmp eax, 0x4b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72871e: jl 0x72874a */
  if ((sf != of)) goto L_72874a;
L_728720: /* 728720: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 728723: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728724: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728725: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x72872bu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 72872b: mov ebx, dword ptr [0xcfa27c] */
  ebx = R32((uint32_t)(0xcfa27cu));
/* 728731: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728734: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 728737: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728739: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72873bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72873b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72873e: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 728741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 728742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728743: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x728745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 728745: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728748: jmp 0x728750 */
  goto L_728750;
L_72874a: /* 72874a: mov ebx, dword ptr [0xcfa27c] */
  ebx = R32((uint32_t)(0xcfa27cu));
L_728750: /* 728750: lea eax, [esi + 0x38] */
  eax = (uint32_t)(esi + 0x38u);
/* 728753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728754: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728755: call 0x6c5b32 */
  esp -= 4; W32(esp, 0x72875au); SPILL(); f_6c5b32(); if (g_unwind) return; RELOAD();
/* 72875a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72875d: mov ecx, edi */
  ecx = edi;
/* 72875f: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x728765u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 728765: cmp eax, 0x49 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 728768: jl 0x728781 */
  if ((sf != of)) goto L_728781;
L_72876a: /* 72876a: mov ecx, edi */
  ecx = edi;
/* 72876c: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x728772u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 728772: cmp eax, 0x4a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 728775: jg 0x728781 */
  if ((!zf && sf == of)) goto L_728781;
L_728777: /* 728777: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72877a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72877b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72877c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72877eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72877e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728781: /* 728781: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 728784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728786: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72878d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72878e: mov esp, ebp */
  esp = ebp;
/* 728790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 728791: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728794(void) {
  LOAD_REGS();
L_728794: /* 728794: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 728797: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 72879c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 72879f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7287a0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7287a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7287a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7287a8(); return;
}

void f_7287a8(void) {
  LOAD_REGS();
L_7287a8: /* 7287a8: push 0x9f86b8 */
  { uint32_t v = 0x9f86b8u; esp -= 4; W32(esp, v); }
/* 7287ad: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7287b2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7287b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7287b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7287bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7287bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7287bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7287c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7287c4: guest_badaddr(0x7287c4); return;
}

void f_728810(void) {
  LOAD_REGS();
L_728810: /* 728810: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728812: push 0x9c40b8 */
  { uint32_t v = 0x9c40b8u; esp -= 4; W32(esp, v); }
/* 728817: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72881d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72881e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728827: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728828: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72882c: mov esi, ecx */
  esi = ecx;
/* 72882e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72882f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 728833: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x728839u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 728839: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 72883f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 728842: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 728845: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 72884b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 72884e: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 728851: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 728854: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 728857: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 72885a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 72885d: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 728860: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728861: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728864: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72886c: mov dword ptr [esi], 0x9f8630 */
  W32((uint32_t)(esi), 0x9f8630u);
/* 728872: call 0x6c763a */
  esp -= 4; W32(esp, 0x728877u); SPILL(); f_6c763a(); if (g_unwind) return; RELOAD();
/* 728877: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72887b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72887c: mov eax, esi */
  eax = esi;
/* 72887e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72887f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728886: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728889: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7288b0(void) {
  LOAD_REGS();
L_7288b0: /* 7288b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7288b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7288b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7288b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7288b7: mov esi, ecx */
  esi = ecx;
/* 7288b9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7288bfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7288bf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7288c2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 7288c5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7288c8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 7288cb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 7288ce: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 7288d1: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7288d4: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7288d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7288d8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7288db: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 7288de: call 0x6c2c4d */
  esp -= 4; W32(esp, 0x7288e3u); SPILL(); f_6c2c4d(); if (g_unwind) return; RELOAD();
/* 7288e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7288e4: mov eax, esi */
  eax = esi;
/* 7288e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7288e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728900(void) {
  LOAD_REGS();
L_728900: /* 728900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728901: mov esi, ecx */
  esi = ecx;
/* 728903: call 0x6c4057 */
  esp -= 4; W32(esp, 0x728908u); SPILL(); f_6c4057(); if (g_unwind) return; RELOAD();
/* 728908: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72890d: je 0x72891b */
  if (zf) goto L_72891b;
L_72890f: /* 72890f: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 728911: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728912: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x728918u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 728918: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72891b: /* 72891b: mov eax, esi */
  eax = esi;
/* 72891d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72891e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728940(void) {
  LOAD_REGS();
L_728940: /* 728940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728941: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 728945: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 728948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728949: mov esi, ecx */
  esi = ecx;
/* 72894b: je 0x72897d */
  if (zf) goto L_72897d;
L_72894d: /* 72894d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 728950: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728951: push 0x6c4057 */
  { uint32_t v = 0x6c4057u; esp -= 4; W32(esp, v); }
/* 728956: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 728959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72895a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 72895c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72895d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x728962u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 728962: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 728965: je 0x728975 */
  if (zf) goto L_728975;
L_728967: /* 728967: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72896d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72896f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 728971: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728972: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x728975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_728975: /* 728975: mov eax, edi */
  eax = edi;
/* 728977: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728978: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728979: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72897a: ret 4 */
  esp += 8; SPILL(); return;
L_72897d: /* 72897d: mov ecx, esi */
  ecx = esi;
/* 72897f: call 0x6c4057 */
  esp -= 4; W32(esp, 0x728984u); SPILL(); f_6c4057(); if (g_unwind) return; RELOAD();
/* 728984: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 728987: je 0x728995 */
  if (zf) goto L_728995;
L_728989: /* 728989: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 72898b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72898c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x728992u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 728992: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728995: /* 728995: mov eax, esi */
  eax = esi;
/* 728997: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728998: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 728999: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7289c0(void) {
  LOAD_REGS();
L_7289c0: /* 7289c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7289c2: push 0x9c40e3 */
  { uint32_t v = 0x9c40e3u; esp -= 4; W32(esp, v); }
/* 7289c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7289cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7289ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7289d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7289d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7289d7: mov esi, ecx */
  esi = ecx;
/* 7289d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7289dd: mov dword ptr [esi], 0x9f86f8 */
  W32((uint32_t)(esi), 0x9f86f8u);
/* 7289e3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7289eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7289f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7289f1: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7289f4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7289f9: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7289feu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7289fe: mov ecx, esi */
  ecx = esi;
/* 728a00: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 728a08: call 0x6c9d18 */
  esp -= 4; W32(esp, 0x728a0du); SPILL(); f_6c9d18(); if (g_unwind) return; RELOAD();
/* 728a0d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 728a11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728a12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728a19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728a1c: ret  */
  esp += 4; SPILL(); return;
}

void f_728a40(void) {
  LOAD_REGS();
L_728a40: /* 728a40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728a42: push 0x9c4108 */
  { uint32_t v = 0x9c4108u; esp -= 4; W32(esp, v); }
/* 728a47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728a4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728a55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728a56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728a57: mov esi, ecx */
  esi = ecx;
/* 728a59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 728a5d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x728a63u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 728a63: xor eax, eax */
  eax = 0;
/* 728a65: mov dword ptr [esi + 0x2c], 0xc */
  W32((uint32_t)(esi + 0x2cu), 0xcu);
/* 728a6c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 728a6f: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
/* 728a76: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728a79: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 728a7d: mov dword ptr [esi], 0x9f86f8 */
  W32((uint32_t)(esi), 0x9f86f8u);
/* 728a83: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x728a89u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 728a89: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 728a8d: mov eax, esi */
  eax = esi;
/* 728a8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728a90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728a97: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728a9a: ret  */
  esp += 4; SPILL(); return;
}

void f_728ac0(void) {
  LOAD_REGS();
L_728ac0: /* 728ac0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728ac2: push 0x9c4128 */
  { uint32_t v = 0x9c4128u; esp -= 4; W32(esp, v); }
/* 728ac7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728ace: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728ad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728ad6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728ad7: mov esi, ecx */
  esi = ecx;
/* 728ad9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 728add: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x728ae3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 728ae3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 728ae7: mov dword ptr [esi + 0x2c], 0xc */
  W32((uint32_t)(esi + 0x2cu), 0xcu);
/* 728aee: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 728af1: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
/* 728af8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728afb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 728b03: mov dword ptr [esi], 0x9f86f8 */
  W32((uint32_t)(esi), 0x9f86f8u);
/* 728b09: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x728b0fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 728b0f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 728b13: mov eax, esi */
  eax = esi;
/* 728b15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728b16: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728b1d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728b20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728b50(void) {
  LOAD_REGS();
L_728b50: /* 728b50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 728b51: mov ebp, esp */
  ebp = esp;
/* 728b53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728b55: push 0x9c4140 */
  { uint32_t v = 0x9c4140u; esp -= 4; W32(esp, v); }
/* 728b5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728b61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728b68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 728b6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728b6c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 728b6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728b70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728b71: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 728b74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728b75: mov esi, ecx */
  esi = ecx;
/* 728b77: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 728b7e: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x728b83u); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 728b83: mov ecx, ebx */
  ecx = ebx;
/* 728b85: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x728b8bu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 728b8b: cmp eax, 0x4b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 728b8e: jl 0x728bb8 */
  if ((sf != of)) goto L_728bb8;
L_728b90: /* 728b90: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 728b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728b94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728b95: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x728b9bu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 728b9b: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
/* 728ba1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728ba4: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 728ba7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728ba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728ba9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x728babu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 728bab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728bae: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 728bb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 728bb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728bb3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x728bb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 728bb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728bb8: /* 728bb8: add esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 728bbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728bbc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728bbd: call 0x6c1505 */
  esp -= 4; W32(esp, 0x728bc2u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 728bc2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 728bc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728bc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728bc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728bca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728bd1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 728bd2: mov esp, ebp */
  esp = ebp;
/* 728bd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 728bd5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728bd8(void) {
  LOAD_REGS();
L_728bd8: /* 728bd8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 728bdb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 728be0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 728be3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728be4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 728be7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x728becu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_728bec(); return;
}

void f_728bec(void) {
  LOAD_REGS();
L_728bec: /* 728bec: push 0x9f8780 */
  { uint32_t v = 0x9f8780u; esp -= 4; W32(esp, v); }
/* 728bf1: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 728bf6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x728bfcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 728bfc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728bff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 728c01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 728c03: call 0x99caf8 */
  esp -= 4; W32(esp, 0x728c08u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_728c08: guest_badaddr(0x728c08); return;
}

void f_728c40(void) {
  LOAD_REGS();
L_728c40: /* 728c40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728c42: push 0x9c4158 */
  { uint32_t v = 0x9c4158u; esp -= 4; W32(esp, v); }
/* 728c47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728c4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728c55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728c56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728c57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728c58: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 728c5c: mov esi, ecx */
  esi = ecx;
/* 728c5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728c5f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 728c63: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x728c69u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 728c69: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 728c6f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 728c72: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 728c75: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 728c7b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 728c7e: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 728c81: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 728c84: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 728c87: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 728c8a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 728c8d: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 728c90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728c91: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728c94: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 728c9c: mov dword ptr [esi], 0x9f86f8 */
  W32((uint32_t)(esi), 0x9f86f8u);
/* 728ca2: call 0x6cbbae */
  esp -= 4; W32(esp, 0x728ca7u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 728ca7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 728cab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728cac: mov eax, esi */
  eax = esi;
/* 728cae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728caf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728cb6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728cb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728ce0(void) {
  LOAD_REGS();
L_728ce0: /* 728ce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728ce1: mov esi, ecx */
  esi = ecx;
/* 728ce3: call 0x6c4c00 */
  esp -= 4; W32(esp, 0x728ce8u); SPILL(); f_6c4c00(); if (g_unwind) return; RELOAD();
/* 728ce8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 728ced: je 0x728cfb */
  if (zf) goto L_728cfb;
L_728cef: /* 728cef: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 728cf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728cf2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x728cf8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 728cf8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728cfb: /* 728cfb: mov eax, esi */
  eax = esi;
/* 728cfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728cfe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728d20(void) {
  LOAD_REGS();
L_728d20: /* 728d20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728d21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 728d25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 728d28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728d29: mov esi, ecx */
  esi = ecx;
/* 728d2b: je 0x728d5d */
  if (zf) goto L_728d5d;
L_728d2d: /* 728d2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 728d30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728d31: push 0x6c4c00 */
  { uint32_t v = 0x6c4c00u; esp -= 4; W32(esp, v); }
/* 728d36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 728d39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728d3a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 728d3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728d3d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x728d42u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 728d42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 728d45: je 0x728d55 */
  if (zf) goto L_728d55;
L_728d47: /* 728d47: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 728d4d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 728d4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 728d51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728d52: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x728d55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_728d55: /* 728d55: mov eax, edi */
  eax = edi;
/* 728d57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728d58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728d59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 728d5a: ret 4 */
  esp += 8; SPILL(); return;
L_728d5d: /* 728d5d: mov ecx, esi */
  ecx = esi;
/* 728d5f: call 0x6c4c00 */
  esp -= 4; W32(esp, 0x728d64u); SPILL(); f_6c4c00(); if (g_unwind) return; RELOAD();
/* 728d64: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 728d67: je 0x728d75 */
  if (zf) goto L_728d75;
L_728d69: /* 728d69: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 728d6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728d6c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x728d72u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 728d72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728d75: /* 728d75: mov eax, esi */
  eax = esi;
/* 728d77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728d78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 728d79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728da0(void) {
  LOAD_REGS();
L_728da0: /* 728da0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728da2: push 0x9c4183 */
  { uint32_t v = 0x9c4183u; esp -= 4; W32(esp, v); }
/* 728da7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728dad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728dae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728db5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728db6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728db7: mov esi, ecx */
  esi = ecx;
/* 728db9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 728dbd: mov dword ptr [esi], 0x9f87d0 */
  W32((uint32_t)(esi), 0x9f87d0u);
/* 728dc3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 728dcb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x728dd1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 728dd1: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728dd4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 728dd9: call 0x6c9052 */
  esp -= 4; W32(esp, 0x728ddeu); SPILL(); f_6c9052(); if (g_unwind) return; RELOAD();
/* 728dde: mov ecx, esi */
  ecx = esi;
/* 728de0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 728de8: call 0x6c9d18 */
  esp -= 4; W32(esp, 0x728dedu); SPILL(); f_6c9d18(); if (g_unwind) return; RELOAD();
/* 728ded: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 728df1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728df2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728df9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728dfc: ret  */
  esp += 4; SPILL(); return;
}

void f_728e20(void) {
  LOAD_REGS();
L_728e20: /* 728e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728e22: push 0x9c41a8 */
  { uint32_t v = 0x9c41a8u; esp -= 4; W32(esp, v); }
/* 728e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728e37: mov esi, ecx */
  esi = ecx;
/* 728e39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 728e3d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x728e43u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 728e43: xor eax, eax */
  eax = 0;
/* 728e45: mov dword ptr [esi + 0x2c], 4 */
  W32((uint32_t)(esi + 0x2cu), 0x4u);
/* 728e4c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 728e4f: mov dword ptr [esi + 0x34], 2 */
  W32((uint32_t)(esi + 0x34u), 0x2u);
/* 728e56: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728e59: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 728e5d: mov dword ptr [esi], 0x9f87d0 */
  W32((uint32_t)(esi), 0x9f87d0u);
/* 728e63: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x728e69u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 728e69: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 728e6d: mov eax, esi */
  eax = esi;
/* 728e6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728e70: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728e77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728e7a: ret  */
  esp += 4; SPILL(); return;
}

void f_728ea0(void) {
  LOAD_REGS();
L_728ea0: /* 728ea0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728ea2: push 0x9c41c8 */
  { uint32_t v = 0x9c41c8u; esp -= 4; W32(esp, v); }
/* 728ea7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728eae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728eb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728eb7: mov esi, ecx */
  esi = ecx;
/* 728eb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 728ebd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x728ec3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 728ec3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 728ec7: mov dword ptr [esi + 0x2c], 4 */
  W32((uint32_t)(esi + 0x2cu), 0x4u);
/* 728ece: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 728ed1: mov dword ptr [esi + 0x34], 2 */
  W32((uint32_t)(esi + 0x34u), 0x2u);
/* 728ed8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 728edb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 728ee3: mov dword ptr [esi], 0x9f87d0 */
  W32((uint32_t)(esi), 0x9f87d0u);
/* 728ee9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x728eefu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 728eef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 728ef3: mov eax, esi */
  eax = esi;
/* 728ef5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728ef6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728efd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728f00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728f30(void) {
  LOAD_REGS();
L_728f30: /* 728f30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 728f31: mov ebp, esp */
  ebp = esp;
/* 728f33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 728f35: push 0x9c41e0 */
  { uint32_t v = 0x9c41e0u; esp -= 4; W32(esp, v); }
/* 728f3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 728f40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728f41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 728f48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 728f4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728f4c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 728f4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728f50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 728f51: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 728f54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728f55: mov esi, ecx */
  esi = ecx;
/* 728f57: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 728f5e: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x728f63u); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 728f63: mov ecx, ebx */
  ecx = ebx;
/* 728f65: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x728f6bu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 728f6b: cmp eax, 0x4b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 728f6e: jl 0x728f98 */
  if ((sf != of)) goto L_728f98;
L_728f70: /* 728f70: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 728f73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728f74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728f75: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x728f7bu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 728f7b: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
/* 728f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728f84: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 728f87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728f88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728f89: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x728f8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 728f8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728f8e: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 728f91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 728f92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 728f93: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x728f95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 728f95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_728f98: /* 728f98: add esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 728f9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 728f9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 728f9d: call 0x6c11d6 */
  esp -= 4; W32(esp, 0x728fa2u); SPILL(); f_6c11d6(); if (g_unwind) return; RELOAD();
/* 728fa2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 728fa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728fa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 728fa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 728faa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 728fb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 728fb2: mov esp, ebp */
  esp = ebp;
/* 728fb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 728fb5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_728fb8(void) {
  LOAD_REGS();
L_728fb8: /* 728fb8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 728fbb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 728fc0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 728fc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 728fc4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 728fc7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x728fccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_728fcc(); return;
}

void f_728fcc(void) {
  LOAD_REGS();
L_728fcc: /* 728fcc: push 0x9f8858 */
  { uint32_t v = 0x9f8858u; esp -= 4; W32(esp, v); }
/* 728fd1: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 728fd6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x728fdcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 728fdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 728fdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 728fe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 728fe3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x728fe8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_728fe8: guest_badaddr(0x728fe8); return;
}

void f_729020(void) {
  LOAD_REGS();
L_729020: /* 729020: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729022: push 0x9c41f8 */
  { uint32_t v = 0x9c41f8u; esp -= 4; W32(esp, v); }
/* 729027: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72902d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72902e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729037: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729038: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72903c: mov esi, ecx */
  esi = ecx;
/* 72903e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72903f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 729043: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x729049u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 729049: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 72904f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 729052: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 729055: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 72905b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 72905e: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 729061: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 729064: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 729067: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 72906a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 72906d: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 729070: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729071: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 729074: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72907c: mov dword ptr [esi], 0x9f87d0 */
  W32((uint32_t)(esi), 0x9f87d0u);
/* 729082: call 0x6c1172 */
  esp -= 4; W32(esp, 0x729087u); SPILL(); f_6c1172(); if (g_unwind) return; RELOAD();
/* 729087: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72908b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72908c: mov eax, esi */
  eax = esi;
/* 72908e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72908f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729096: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729099: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7290c0(void) {
  LOAD_REGS();
L_7290c0: /* 7290c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7290c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7290c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7290c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7290c7: mov esi, ecx */
  esi = ecx;
/* 7290c9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7290cfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7290cf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7290d2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 7290d5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7290d8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 7290db: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 7290de: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 7290e1: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7290e4: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7290e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7290e8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7290eb: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 7290ee: call 0x6cb98d */
  esp -= 4; W32(esp, 0x7290f3u); SPILL(); f_6cb98d(); if (g_unwind) return; RELOAD();
/* 7290f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7290f4: mov eax, esi */
  eax = esi;
/* 7290f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7290f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729110(void) {
  LOAD_REGS();
L_729110: /* 729110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729111: mov esi, ecx */
  esi = ecx;
/* 729113: call 0x6c4f98 */
  esp -= 4; W32(esp, 0x729118u); SPILL(); f_6c4f98(); if (g_unwind) return; RELOAD();
/* 729118: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72911d: je 0x72912b */
  if (zf) goto L_72912b;
L_72911f: /* 72911f: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 729121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729122: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x729128u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 729128: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72912b: /* 72912b: mov eax, esi */
  eax = esi;
/* 72912d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72912e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729150(void) {
  LOAD_REGS();
L_729150: /* 729150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 729151: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 729155: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729159: mov esi, ecx */
  esi = ecx;
/* 72915b: je 0x72918d */
  if (zf) goto L_72918d;
L_72915d: /* 72915d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 729160: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729161: push 0x6c4f98 */
  { uint32_t v = 0x6c4f98u; esp -= 4; W32(esp, v); }
/* 729166: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 729169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72916a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 72916c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72916d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x729172u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 729172: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729175: je 0x729185 */
  if (zf) goto L_729185;
L_729177: /* 729177: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72917d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72917f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 729181: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729182: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x729185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_729185: /* 729185: mov eax, edi */
  eax = edi;
/* 729187: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729188: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729189: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72918a: ret 4 */
  esp += 8; SPILL(); return;
L_72918d: /* 72918d: mov ecx, esi */
  ecx = esi;
/* 72918f: call 0x6c4f98 */
  esp -= 4; W32(esp, 0x729194u); SPILL(); f_6c4f98(); if (g_unwind) return; RELOAD();
/* 729194: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729197: je 0x7291a5 */
  if (zf) goto L_7291a5;
L_729199: /* 729199: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 72919b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72919c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7291a2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7291a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7291a5: /* 7291a5: mov eax, esi */
  eax = esi;
/* 7291a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7291a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7291a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7291d0(void) {
  LOAD_REGS();
L_7291d0: /* 7291d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7291d2: push 0x9c4223 */
  { uint32_t v = 0x9c4223u; esp -= 4; W32(esp, v); }
/* 7291d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7291dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7291de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7291e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7291e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7291e7: mov esi, ecx */
  esi = ecx;
/* 7291e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7291ed: mov dword ptr [esi], 0x9f88a0 */
  W32((uint32_t)(esi), 0x9f88a0u);
/* 7291f3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7291fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x729201u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 729201: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 729204: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 729209: call 0x6c916a */
  esp -= 4; W32(esp, 0x72920eu); SPILL(); f_6c916a(); if (g_unwind) return; RELOAD();
/* 72920e: mov ecx, esi */
  ecx = esi;
/* 729210: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 729218: call 0x6c9d18 */
  esp -= 4; W32(esp, 0x72921du); SPILL(); f_6c9d18(); if (g_unwind) return; RELOAD();
/* 72921d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729221: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729222: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729229: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72922c: ret  */
  esp += 4; SPILL(); return;
}

void f_729250(void) {
  LOAD_REGS();
L_729250: /* 729250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729252: push 0x9c4248 */
  { uint32_t v = 0x9c4248u; esp -= 4; W32(esp, v); }
/* 729257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72925d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72925e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729267: mov esi, ecx */
  esi = ecx;
/* 729269: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72926d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x729273u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 729273: xor eax, eax */
  eax = 0;
/* 729275: mov dword ptr [esi + 0x2c], 8 */
  W32((uint32_t)(esi + 0x2cu), 0x8u);
/* 72927c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72927f: mov dword ptr [esi + 0x34], 3 */
  W32((uint32_t)(esi + 0x34u), 0x3u);
/* 729286: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 729289: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 72928d: mov dword ptr [esi], 0x9f88a0 */
  W32((uint32_t)(esi), 0x9f88a0u);
/* 729293: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729299u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729299: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72929d: mov eax, esi */
  eax = esi;
/* 72929f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7292a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7292a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7292aa: ret  */
  esp += 4; SPILL(); return;
}

void f_7292d0(void) {
  LOAD_REGS();
L_7292d0: /* 7292d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7292d2: push 0x9c4268 */
  { uint32_t v = 0x9c4268u; esp -= 4; W32(esp, v); }
/* 7292d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7292dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7292de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7292e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7292e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7292e7: mov esi, ecx */
  esi = ecx;
/* 7292e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7292ed: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7292f3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7292f3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7292f7: mov dword ptr [esi + 0x2c], 8 */
  W32((uint32_t)(esi + 0x2cu), 0x8u);
/* 7292fe: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 729301: mov dword ptr [esi + 0x34], 3 */
  W32((uint32_t)(esi + 0x34u), 0x3u);
/* 729308: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 72930b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 729313: mov dword ptr [esi], 0x9f88a0 */
  W32((uint32_t)(esi), 0x9f88a0u);
/* 729319: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72931fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72931f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729323: mov eax, esi */
  eax = esi;
/* 729325: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729326: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72932d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729330: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729360(void) {
  LOAD_REGS();
L_729360: /* 729360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 729361: mov ebp, esp */
  ebp = esp;
/* 729363: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729365: push 0x9c4280 */
  { uint32_t v = 0x9c4280u; esp -= 4; W32(esp, v); }
/* 72936a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 729370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729371: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729378: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 72937b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72937c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 72937f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729380: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729381: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 729384: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 729385: mov esi, ecx */
  esi = ecx;
/* 729387: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 72938e: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x729393u); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 729393: mov ecx, ebx */
  ecx = ebx;
/* 729395: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x72939bu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 72939b: cmp eax, 0x4b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72939e: jl 0x7293c8 */
  if ((sf != of)) goto L_7293c8;
L_7293a0: /* 7293a0: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 7293a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7293a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7293a5: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7293abu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7293ab: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
/* 7293b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7293b4: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 7293b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7293b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7293b9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7293bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7293bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7293be: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 7293c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7293c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7293c3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7293c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7293c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7293c8: /* 7293c8: add esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7293cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7293cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7293cd: call 0x6cab7d */
  esp -= 4; W32(esp, 0x7293d2u); SPILL(); f_6cab7d(); if (g_unwind) return; RELOAD();
/* 7293d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7293d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7293d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7293d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7293da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7293e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7293e2: mov esp, ebp */
  esp = ebp;
/* 7293e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7293e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7293e8(void) {
  LOAD_REGS();
L_7293e8: /* 7293e8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7293eb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7293f0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7293f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7293f4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7293f7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7293fcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7293fc(); return;
}

void f_7293fc(void) {
  LOAD_REGS();
L_7293fc: /* 7293fc: push 0x9f8928 */
  { uint32_t v = 0x9f8928u; esp -= 4; W32(esp, v); }
/* 729401: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 729406: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x72940cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 72940c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72940f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 729411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 729413: call 0x99caf8 */
  esp -= 4; W32(esp, 0x729418u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_729418: guest_badaddr(0x729418); return;
}

void f_729450(void) {
  LOAD_REGS();
L_729450: /* 729450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729452: push 0x9c4298 */
  { uint32_t v = 0x9c4298u; esp -= 4; W32(esp, v); }
/* 729457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72945d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72945e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729467: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729468: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72946c: mov esi, ecx */
  esi = ecx;
/* 72946e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72946f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 729473: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x729479u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 729479: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 72947f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 729482: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 729485: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 72948b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 72948e: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 729491: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 729494: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 729497: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 72949a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 72949d: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7294a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7294a1: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7294a4: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7294ac: mov dword ptr [esi], 0x9f88a0 */
  W32((uint32_t)(esi), 0x9f88a0u);
/* 7294b2: call 0x6c935e */
  esp -= 4; W32(esp, 0x7294b7u); SPILL(); f_6c935e(); if (g_unwind) return; RELOAD();
/* 7294b7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7294bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7294bc: mov eax, esi */
  eax = esi;
/* 7294be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7294bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7294c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7294c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7294f0(void) {
  LOAD_REGS();
L_7294f0: /* 7294f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7294f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7294f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7294f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7294f7: mov esi, ecx */
  esi = ecx;
/* 7294f9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7294ffu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7294ff: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 729502: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 729505: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 729508: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 72950b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 72950e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 729511: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 729514: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 729517: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729518: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 72951b: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 72951e: call 0x6c2d97 */
  esp -= 4; W32(esp, 0x729523u); SPILL(); f_6c2d97(); if (g_unwind) return; RELOAD();
/* 729523: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729524: mov eax, esi */
  eax = esi;
/* 729526: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729527: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729540(void) {
  LOAD_REGS();
L_729540: /* 729540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729541: mov esi, ecx */
  esi = ecx;
/* 729543: call 0x6c557e */
  esp -= 4; W32(esp, 0x729548u); SPILL(); f_6c557e(); if (g_unwind) return; RELOAD();
/* 729548: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72954d: je 0x72955b */
  if (zf) goto L_72955b;
L_72954f: /* 72954f: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 729551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729552: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x729558u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 729558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72955b: /* 72955b: mov eax, esi */
  eax = esi;
/* 72955d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72955e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729580(void) {
  LOAD_REGS();
L_729580: /* 729580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 729581: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 729585: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729589: mov esi, ecx */
  esi = ecx;
/* 72958b: je 0x7295bd */
  if (zf) goto L_7295bd;
L_72958d: /* 72958d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 729590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729591: push 0x6c557e */
  { uint32_t v = 0x6c557eu; esp -= 4; W32(esp, v); }
/* 729596: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 729599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72959a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 72959c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72959d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7295a2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7295a2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7295a5: je 0x7295b5 */
  if (zf) goto L_7295b5;
L_7295a7: /* 7295a7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7295ad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7295af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7295b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7295b2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7295b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7295b5: /* 7295b5: mov eax, edi */
  eax = edi;
/* 7295b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7295b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7295b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7295ba: ret 4 */
  esp += 8; SPILL(); return;
L_7295bd: /* 7295bd: mov ecx, esi */
  ecx = esi;
/* 7295bf: call 0x6c557e */
  esp -= 4; W32(esp, 0x7295c4u); SPILL(); f_6c557e(); if (g_unwind) return; RELOAD();
/* 7295c4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7295c7: je 0x7295d5 */
  if (zf) goto L_7295d5;
L_7295c9: /* 7295c9: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7295cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7295cc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7295d2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7295d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7295d5: /* 7295d5: mov eax, esi */
  eax = esi;
/* 7295d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7295d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7295d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729600(void) {
  LOAD_REGS();
L_729600: /* 729600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729602: push 0x9c42c3 */
  { uint32_t v = 0x9c42c3u; esp -= 4; W32(esp, v); }
/* 729607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72960d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72960e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729617: mov esi, ecx */
  esi = ecx;
/* 729619: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72961d: mov dword ptr [esi], 0x9f8968 */
  W32((uint32_t)(esi), 0x9f8968u);
/* 729623: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72962b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x729631u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 729631: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 729634: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 729639: call 0x6c91fb */
  esp -= 4; W32(esp, 0x72963eu); SPILL(); f_6c91fb(); if (g_unwind) return; RELOAD();
/* 72963e: mov ecx, esi */
  ecx = esi;
/* 729640: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 729648: call 0x6c9d18 */
  esp -= 4; W32(esp, 0x72964du); SPILL(); f_6c9d18(); if (g_unwind) return; RELOAD();
/* 72964d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729651: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729652: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729659: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72965c: ret  */
  esp += 4; SPILL(); return;
}

void f_729680(void) {
  LOAD_REGS();
L_729680: /* 729680: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729682: push 0x9c42e8 */
  { uint32_t v = 0x9c42e8u; esp -= 4; W32(esp, v); }
/* 729687: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72968d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72968e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729697: mov esi, ecx */
  esi = ecx;
/* 729699: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72969d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7296a3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7296a3: xor eax, eax */
  eax = 0;
/* 7296a5: mov dword ptr [esi + 0x2c], 0x28 */
  W32((uint32_t)(esi + 0x2cu), 0x28u);
/* 7296ac: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 7296af: mov dword ptr [esi + 0x34], 5 */
  W32((uint32_t)(esi + 0x34u), 0x5u);
/* 7296b6: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7296b9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7296bd: mov dword ptr [esi], 0x9f8968 */
  W32((uint32_t)(esi), 0x9f8968u);
/* 7296c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7296c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7296c9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7296cd: mov eax, esi */
  eax = esi;
/* 7296cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7296d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7296d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7296da: ret  */
  esp += 4; SPILL(); return;
}

void f_729700(void) {
  LOAD_REGS();
L_729700: /* 729700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729702: push 0x9c4308 */
  { uint32_t v = 0x9c4308u; esp -= 4; W32(esp, v); }
/* 729707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72970d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72970e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729717: mov esi, ecx */
  esi = ecx;
/* 729719: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72971d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x729723u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 729723: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 729727: mov dword ptr [esi + 0x2c], 0x28 */
  W32((uint32_t)(esi + 0x2cu), 0x28u);
/* 72972e: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 729731: mov dword ptr [esi + 0x34], 5 */
  W32((uint32_t)(esi + 0x34u), 0x5u);
/* 729738: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 72973b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 729743: mov dword ptr [esi], 0x9f8968 */
  W32((uint32_t)(esi), 0x9f8968u);
/* 729749: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72974fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72974f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729753: mov eax, esi */
  eax = esi;
/* 729755: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729756: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72975d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729760: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729790(void) {
  LOAD_REGS();
L_729790: /* 729790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 729791: mov ebp, esp */
  ebp = esp;
/* 729793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729795: push 0x9c4320 */
  { uint32_t v = 0x9c4320u; esp -= 4; W32(esp, v); }
/* 72979a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7297a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7297a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7297a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7297ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7297ac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7297af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7297b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7297b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7297b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7297b5: mov esi, ecx */
  esi = ecx;
/* 7297b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7297be: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x7297c3u); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 7297c3: mov ecx, ebx */
  ecx = ebx;
/* 7297c5: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7297cbu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7297cb: cmp eax, 0x4b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7297ce: jl 0x7297f8 */
  if ((sf != of)) goto L_7297f8;
L_7297d0: /* 7297d0: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 7297d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7297d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7297d5: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7297dbu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7297db: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
/* 7297e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7297e4: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 7297e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7297e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7297e9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7297ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7297eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7297ee: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 7297f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7297f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7297f3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7297f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7297f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7297f8: /* 7297f8: add esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7297fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7297fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7297fd: call 0x6c8044 */
  esp -= 4; W32(esp, 0x729802u); SPILL(); f_6c8044(); if (g_unwind) return; RELOAD();
/* 729802: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 729805: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729808: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729809: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72980a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729811: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 729812: mov esp, ebp */
  esp = ebp;
/* 729814: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 729815: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729818(void) {
  LOAD_REGS();
L_729818: /* 729818: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 72981b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 729820: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 729823: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729824: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 729827: call 0x99caf8 */
  esp -= 4; W32(esp, 0x72982cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_72982c(); return;
}

void f_72982c(void) {
  LOAD_REGS();
L_72982c: /* 72982c: push 0x9f89f0 */
  { uint32_t v = 0x9f89f0u; esp -= 4; W32(esp, v); }
/* 729831: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 729836: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x72983cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 72983c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72983f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 729841: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 729843: call 0x99caf8 */
  esp -= 4; W32(esp, 0x729848u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_729848: guest_badaddr(0x729848); return;
}

void f_729880(void) {
  LOAD_REGS();
L_729880: /* 729880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729882: push 0x9c4338 */
  { uint32_t v = 0x9c4338u; esp -= 4; W32(esp, v); }
/* 729887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72988d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72988e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729897: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729898: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72989c: mov esi, ecx */
  esi = ecx;
/* 72989e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72989f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7298a3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x7298a9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 7298a9: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 7298af: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7298b2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 7298b5: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 7298bb: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7298be: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 7298c1: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 7298c4: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 7298c7: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7298ca: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 7298cd: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7298d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7298d1: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7298d4: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7298dc: mov dword ptr [esi], 0x9f8968 */
  W32((uint32_t)(esi), 0x9f8968u);
/* 7298e2: call 0x6cc40f */
  esp -= 4; W32(esp, 0x7298e7u); SPILL(); f_6cc40f(); if (g_unwind) return; RELOAD();
/* 7298e7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7298eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7298ec: mov eax, esi */
  eax = esi;
/* 7298ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7298ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7298f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7298f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729920(void) {
  LOAD_REGS();
L_729920: /* 729920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729921: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729922: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 729926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729927: mov esi, ecx */
  esi = ecx;
/* 729929: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72992fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72992f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 729932: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 729935: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 729938: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 72993b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 72993e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 729941: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 729944: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 729947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729948: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 72994b: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 72994e: call 0x6c1127 */
  esp -= 4; W32(esp, 0x729953u); SPILL(); f_6c1127(); if (g_unwind) return; RELOAD();
/* 729953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729954: mov eax, esi */
  eax = esi;
/* 729956: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729957: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729970(void) {
  LOAD_REGS();
L_729970: /* 729970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729971: mov esi, ecx */
  esi = ecx;
/* 729973: call 0x6c62d5 */
  esp -= 4; W32(esp, 0x729978u); SPILL(); f_6c62d5(); if (g_unwind) return; RELOAD();
/* 729978: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72997d: je 0x72998b */
  if (zf) goto L_72998b;
L_72997f: /* 72997f: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 729981: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729982: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x729988u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 729988: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72998b: /* 72998b: mov eax, esi */
  eax = esi;
/* 72998d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72998e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7299b0(void) {
  LOAD_REGS();
L_7299b0: /* 7299b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7299b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7299b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7299b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7299b9: mov esi, ecx */
  esi = ecx;
/* 7299bb: je 0x7299ed */
  if (zf) goto L_7299ed;
L_7299bd: /* 7299bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7299c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7299c1: push 0x6c62d5 */
  { uint32_t v = 0x6c62d5u; esp -= 4; W32(esp, v); }
/* 7299c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7299c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7299ca: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7299cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7299cd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7299d2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7299d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7299d5: je 0x7299e5 */
  if (zf) goto L_7299e5;
L_7299d7: /* 7299d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7299dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7299df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7299e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7299e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7299e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7299e5: /* 7299e5: mov eax, edi */
  eax = edi;
/* 7299e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7299e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7299e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7299ea: ret 4 */
  esp += 8; SPILL(); return;
L_7299ed: /* 7299ed: mov ecx, esi */
  ecx = esi;
/* 7299ef: call 0x6c62d5 */
  esp -= 4; W32(esp, 0x7299f4u); SPILL(); f_6c62d5(); if (g_unwind) return; RELOAD();
/* 7299f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7299f7: je 0x729a05 */
  if (zf) goto L_729a05;
L_7299f9: /* 7299f9: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7299fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7299fc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x729a02u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 729a02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_729a05: /* 729a05: mov eax, esi */
  eax = esi;
/* 729a07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729a08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 729a09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729a30(void) {
  LOAD_REGS();
L_729a30: /* 729a30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729a32: push 0x9c4363 */
  { uint32_t v = 0x9c4363u; esp -= 4; W32(esp, v); }
/* 729a37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 729a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729a3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729a46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729a47: mov esi, ecx */
  esi = ecx;
/* 729a49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 729a4d: mov dword ptr [esi], 0x9f8a48 */
  W32((uint32_t)(esi), 0x9f8a48u);
/* 729a53: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 729a5b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x729a61u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 729a61: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 729a64: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 729a69: call 0x6cb5af */
  esp -= 4; W32(esp, 0x729a6eu); SPILL(); f_6cb5af(); if (g_unwind) return; RELOAD();
/* 729a6e: mov ecx, esi */
  ecx = esi;
/* 729a70: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 729a78: call 0x6c7473 */
  esp -= 4; W32(esp, 0x729a7du); SPILL(); f_6c7473(); if (g_unwind) return; RELOAD();
/* 729a7d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729a81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729a82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729a89: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729a8c: ret  */
  esp += 4; SPILL(); return;
}

void f_729ab0(void) {
  LOAD_REGS();
L_729ab0: /* 729ab0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729ab2: push 0x9c4388 */
  { uint32_t v = 0x9c4388u; esp -= 4; W32(esp, v); }
/* 729ab7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 729abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729abe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729ac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729ac6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729ac7: mov esi, ecx */
  esi = ecx;
/* 729ac9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 729acd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x729ad3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 729ad3: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 729ad6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 729ade: mov dword ptr [esi], 0x9f8a48 */
  W32((uint32_t)(esi), 0x9f8a48u);
/* 729ae4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729aeau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729aea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729aee: mov eax, esi */
  eax = esi;
/* 729af0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729af1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729af8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729afb: ret  */
  esp += 4; SPILL(); return;
}

void f_729b20(void) {
  LOAD_REGS();
L_729b20: /* 729b20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729b22: push 0x9c43a8 */
  { uint32_t v = 0x9c43a8u; esp -= 4; W32(esp, v); }
/* 729b27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 729b2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729b2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729b35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729b36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729b37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729b38: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 729b3c: mov esi, ecx */
  esi = ecx;
/* 729b3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729b3f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 729b43: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x729b49u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 729b49: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 729b4f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 729b52: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 729b55: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 729b58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729b59: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 729b5c: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 729b64: mov dword ptr [esi], 0x9f8a48 */
  W32((uint32_t)(esi), 0x9f8a48u);
/* 729b6a: call 0x6c1d11 */
  esp -= 4; W32(esp, 0x729b6fu); SPILL(); f_6c1d11(); if (g_unwind) return; RELOAD();
/* 729b6f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 729b73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729b74: mov eax, esi */
  eax = esi;
/* 729b76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729b77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729b7e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729b81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729bb0(void) {
  LOAD_REGS();
L_729bb0: /* 729bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729bb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729bb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 729bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729bb7: mov esi, ecx */
  esi = ecx;
/* 729bb9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x729bbfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 729bbf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 729bc2: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 729bc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729bc6: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 729bc9: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 729bcc: call 0x6c1cb7 */
  esp -= 4; W32(esp, 0x729bd1u); SPILL(); f_6c1cb7(); if (g_unwind) return; RELOAD();
/* 729bd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729bd2: mov eax, esi */
  eax = esi;
/* 729bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729bd5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729bf0(void) {
  LOAD_REGS();
L_729bf0: /* 729bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729bf1: mov esi, ecx */
  esi = ecx;
/* 729bf3: call 0x6c4f2f */
  esp -= 4; W32(esp, 0x729bf8u); SPILL(); f_6c4f2f(); if (g_unwind) return; RELOAD();
/* 729bf8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729bfd: je 0x729c0b */
  if (zf) goto L_729c0b;
L_729bff: /* 729bff: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 729c01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729c02: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x729c08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 729c08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_729c0b: /* 729c0b: mov eax, esi */
  eax = esi;
/* 729c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729c0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729c30(void) {
  LOAD_REGS();
L_729c30: /* 729c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 729c31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 729c35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729c39: mov esi, ecx */
  esi = ecx;
/* 729c3b: je 0x729c6d */
  if (zf) goto L_729c6d;
L_729c3d: /* 729c3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 729c40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729c41: push 0x6c4f2f */
  { uint32_t v = 0x6c4f2fu; esp -= 4; W32(esp, v); }
/* 729c46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 729c49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729c4a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 729c4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729c4d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x729c52u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 729c52: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729c55: je 0x729c65 */
  if (zf) goto L_729c65;
L_729c57: /* 729c57: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 729c5d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 729c5f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 729c61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729c62: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x729c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_729c65: /* 729c65: mov eax, edi */
  eax = edi;
/* 729c67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729c68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729c69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 729c6a: ret 4 */
  esp += 8; SPILL(); return;
L_729c6d: /* 729c6d: mov ecx, esi */
  ecx = esi;
/* 729c6f: call 0x6c4f2f */
  esp -= 4; W32(esp, 0x729c74u); SPILL(); f_6c4f2f(); if (g_unwind) return; RELOAD();
/* 729c74: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 729c77: je 0x729c85 */
  if (zf) goto L_729c85;
L_729c79: /* 729c79: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 729c7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729c7c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x729c82u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 729c82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_729c85: /* 729c85: mov eax, esi */
  eax = esi;
/* 729c87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729c88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 729c89: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729cb0(void) {
  LOAD_REGS();
L_729cb0: /* 729cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729cb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729cb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 729cb6: mov esi, ecx */
  esi = ecx;
/* 729cb8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 729cbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729cbc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 729cbf: mov dword ptr [esi], 0x9f8ac4 */
  W32((uint32_t)(esi), 0x9f8ac4u);
/* 729cc5: call 0x6c47e1 */
  esp -= 4; W32(esp, 0x729ccau); SPILL(); f_6c47e1(); if (g_unwind) return; RELOAD();
/* 729cca: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 729ccd: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 729cd0: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 729cd3: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 729cd6: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 729cd9: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 729cdc: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 729cdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729ce0: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 729ce3: mov eax, esi */
  eax = esi;
/* 729ce5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729ce6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729d00(void) {
  LOAD_REGS();
L_729d00: /* 729d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729d01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729d02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 729d06: mov esi, ecx */
  esi = ecx;
/* 729d08: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 729d0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729d0c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 729d0f: call 0x6c6573 */
  esp -= 4; W32(esp, 0x729d14u); SPILL(); f_6c6573(); if (g_unwind) return; RELOAD();
/* 729d14: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 729d17: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 729d1a: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 729d1d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 729d20: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 729d23: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 729d26: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 729d29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729d2a: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 729d2d: mov eax, esi */
  eax = esi;
/* 729d2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729d30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729d50(void) {
  LOAD_REGS();
L_729d50: /* 729d50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729d52: push 0x9c440a */
  { uint32_t v = 0x9c440au; esp -= 4; W32(esp, v); }
/* 729d57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 729d5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729d5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729d65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729d66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729d67: mov esi, ecx */
  esi = ecx;
/* 729d69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 729d6d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729d73u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729d73: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 729d76: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 729d7e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729d84u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729d84: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 729d87: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 729d8c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729d92u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729d92: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 729d95: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 729d9a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729da0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729da0: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 729da3: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 729da8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729daeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729dae: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 729db1: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 729db6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729dbcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729dbc: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 729dbf: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 729dc4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729dcau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729dca: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 729dcd: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 729dd2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x729dd8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 729dd8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729ddc: mov eax, esi */
  eax = esi;
/* 729dde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729ddf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729de6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729de9: ret  */
  esp += 4; SPILL(); return;
}

void f_729e20(void) {
  LOAD_REGS();
L_729e20: /* 729e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729e22: push 0x9c447a */
  { uint32_t v = 0x9c447au; esp -= 4; W32(esp, v); }
/* 729e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 729e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729e37: mov esi, ecx */
  esi = ecx;
/* 729e39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 729e3d: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 729e40: mov dword ptr [esp + 0x10], 6 */
  W32((uint32_t)(esp + 0x10u), 0x6u);
/* 729e48: call 0x6c678f */
  esp -= 4; W32(esp, 0x729e4du); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 729e4d: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 729e50: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 729e55: call 0x6c4e4e */
  esp -= 4; W32(esp, 0x729e5au); SPILL(); f_6c4e4e(); if (g_unwind) return; RELOAD();
/* 729e5a: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 729e5d: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 729e62: call 0x6c678f */
  esp -= 4; W32(esp, 0x729e67u); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 729e67: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 729e6a: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 729e6f: call 0x6c9543 */
  esp -= 4; W32(esp, 0x729e74u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 729e74: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 729e77: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 729e7c: call 0x6c9543 */
  esp -= 4; W32(esp, 0x729e81u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 729e81: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 729e84: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 729e89: call 0x6c678f */
  esp -= 4; W32(esp, 0x729e8eu); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 729e8e: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 729e91: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 729e96: call 0x6c9543 */
  esp -= 4; W32(esp, 0x729e9bu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 729e9b: mov ecx, esi */
  ecx = esi;
/* 729e9d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 729ea5: call 0x6c9543 */
  esp -= 4; W32(esp, 0x729eaau); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 729eaa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 729eae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729eaf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729eb6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729eb9: ret  */
  esp += 4; SPILL(); return;
}

void f_729ef0(void) {
  LOAD_REGS();
L_729ef0: /* 729ef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 729ef2: push 0x9c44ea */
  { uint32_t v = 0x9c44eau; esp -= 4; W32(esp, v); }
/* 729ef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 729efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729efe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 729f05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729f06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729f07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729f08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 729f0c: mov esi, ecx */
  esi = ecx;
/* 729f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729f0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 729f13: call 0x6cbbae */
  esp -= 4; W32(esp, 0x729f18u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 729f18: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 729f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729f1c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 729f1f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 729f27: call 0x6cbbae */
  esp -= 4; W32(esp, 0x729f2cu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 729f2c: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 729f2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729f30: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 729f33: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 729f38: call 0x6c520e */
  esp -= 4; W32(esp, 0x729f3du); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 729f3d: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 729f40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 729f41: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 729f44: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 729f49: call 0x6cbbae */
  esp -= 4; W32(esp, 0x729f4eu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 729f4e: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 729f51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729f52: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 729f55: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 729f5a: call 0x6cbbae */
  esp -= 4; W32(esp, 0x729f5fu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 729f5f: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 729f62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729f63: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 729f66: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 729f6b: call 0x6c520e */
  esp -= 4; W32(esp, 0x729f70u); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 729f70: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 729f73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 729f74: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 729f77: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 729f7c: call 0x6c25ea */
  esp -= 4; W32(esp, 0x729f81u); SPILL(); f_6c25ea(); if (g_unwind) return; RELOAD();
/* 729f81: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 729f84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729f85: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 729f88: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 729f8d: call 0x6c520e */
  esp -= 4; W32(esp, 0x729f92u); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 729f92: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 729f96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 729f97: mov eax, esi */
  eax = esi;
/* 729f99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 729f9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 729fa1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 729fa4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_729fe0(void) {
  LOAD_REGS();
L_729fe0: /* 729fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 729fe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729fe2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 729fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 729fe7: mov esi, ecx */
  esi = ecx;
/* 729fe9: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x729feeu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 729fee: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 729ff1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 729ff2: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 729ff5: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x729ffau); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 729ffa: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 729ffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 729ffe: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 72a001: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x72a006u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 72a006: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 72a009: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72a00a: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 72a00d: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x72a012u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 72a012: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 72a015: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a016: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 72a019: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x72a01eu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 72a01e: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 72a021: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a022: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 72a025: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x72a02au); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 72a02a: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 72a02d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72a02e: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 72a031: call 0x6c4241 */
  esp -= 4; W32(esp, 0x72a036u); SPILL(); f_6c4241(); if (g_unwind) return; RELOAD();
/* 72a036: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72a039: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a03a: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 72a03d: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x72a042u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 72a042: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a043: mov eax, esi */
  eax = esi;
/* 72a045: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a046: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a070(void) {
  LOAD_REGS();
L_72a070: /* 72a070: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72a072: push 0x9c4528 */
  { uint32_t v = 0x9c4528u; esp -= 4; W32(esp, v); }
/* 72a077: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72a07d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a07e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72a085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a087: mov ebx, ecx */
  ebx = ecx;
/* 72a089: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72a08a: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 72a08e: mov dword ptr [ebx], 0x9f8af0 */
  W32((uint32_t)(ebx), 0x9f8af0u);
/* 72a094: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 72a097: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 72a09a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 72a09d: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 72a0a0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 72a0a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a0a4: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 72a0a7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 72a0aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a0ab: lea esi, [ebp + 0x14] */
  esi = (uint32_t)(ebp + 0x14u);
/* 72a0ae: lea edi, [ebx + 0x14] */
  edi = (uint32_t)(ebx + 0x14u);
/* 72a0b1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 72a0b6: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 72a0b9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 72a0bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72a0bf: lea esi, [ebp + 0x54] */
  esi = (uint32_t)(ebp + 0x54u);
/* 72a0c2: lea edi, [ebx + 0x54] */
  edi = (uint32_t)(ebx + 0x54u);
/* 72a0c5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 72a0ca: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 72a0d2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72a0d4: lea ecx, [ebp + 0x94] */
  ecx = (uint32_t)(ebp + 0x94u);
/* 72a0da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a0db: lea ecx, [ebx + 0x94] */
  ecx = (uint32_t)(ebx + 0x94u);
/* 72a0e1: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 72a0e6: call 0x6c5e3e */
  esp -= 4; W32(esp, 0x72a0ebu); SPILL(); f_6c5e3e(); if (g_unwind) return; RELOAD();
/* 72a0eb: mov edx, dword ptr [ebp + 0xa0] */
  edx = R32((uint32_t)(ebp + 0xa0u));
/* 72a0f1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 72a0f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a0f6: mov dword ptr [ebx + 0xa0], edx */
  W32((uint32_t)(ebx + 0xa0u), edx);
/* 72a0fc: mov eax, dword ptr [ebp + 0xa4] */
  eax = R32((uint32_t)(ebp + 0xa4u));
/* 72a102: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a103: mov dword ptr [ebx + 0xa4], eax */
  W32((uint32_t)(ebx + 0xa4u), eax);
/* 72a109: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72a10a: mov eax, ebx */
  eax = ebx;
/* 72a10c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a10d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72a114: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a117: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a150(void) {
  LOAD_REGS();
L_72a150: /* 72a150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a151: mov ebx, ecx */
  ebx = ecx;
/* 72a153: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72a154: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 72a158: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 72a15b: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 72a15e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 72a161: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 72a164: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 72a167: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a168: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a169: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 72a16c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 72a16f: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 72a172: lea esi, [ebp + 0x14] */
  esi = (uint32_t)(ebp + 0x14u);
/* 72a175: lea edi, [ebx + 0x14] */
  edi = (uint32_t)(ebx + 0x14u);
/* 72a178: mov ecx, 0x10 */
  ecx = 0x10u;
/* 72a17d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72a17f: lea esi, [ebp + 0x54] */
  esi = (uint32_t)(ebp + 0x54u);
/* 72a182: lea edi, [ebx + 0x54] */
  edi = (uint32_t)(ebx + 0x54u);
/* 72a185: mov ecx, 0x10 */
  ecx = 0x10u;
/* 72a18a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72a18c: lea ecx, [ebp + 0x94] */
  ecx = (uint32_t)(ebp + 0x94u);
/* 72a192: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a193: lea ecx, [ebx + 0x94] */
  ecx = (uint32_t)(ebx + 0x94u);
/* 72a199: call 0x6cae93 */
  esp -= 4; W32(esp, 0x72a19eu); SPILL(); f_6cae93(); if (g_unwind) return; RELOAD();
/* 72a19e: mov edx, dword ptr [ebp + 0xa0] */
  edx = R32((uint32_t)(ebp + 0xa0u));
/* 72a1a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a1a5: mov dword ptr [ebx + 0xa0], edx */
  W32((uint32_t)(ebx + 0xa0u), edx);
/* 72a1ab: mov eax, dword ptr [ebp + 0xa4] */
  eax = R32((uint32_t)(ebp + 0xa4u));
/* 72a1b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a1b2: mov dword ptr [ebx + 0xa4], eax */
  W32((uint32_t)(ebx + 0xa4u), eax);
/* 72a1b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72a1b9: mov eax, ebx */
  eax = ebx;
/* 72a1bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a1bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a1e0(void) {
  LOAD_REGS();
L_72a1e0: /* 72a1e0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 72a1e3: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_72a200(void) {
  LOAD_REGS();
L_72a200: /* 72a200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a202: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72a206: mov esi, ecx */
  esi = ecx;
/* 72a208: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 72a20b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a20c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72a20f: mov dword ptr [esi], 0x9f8b1c */
  W32((uint32_t)(esi), 0x9f8b1cu);
/* 72a215: call 0x6c520e */
  esp -= 4; W32(esp, 0x72a21au); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 72a21a: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 72a21d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 72a220: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 72a223: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a226: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 72a229: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72a22c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a22d: mov eax, esi */
  eax = esi;
/* 72a22f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a230: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a250(void) {
  LOAD_REGS();
L_72a250: /* 72a250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72a252: push 0x9c4554 */
  { uint32_t v = 0x9c4554u; esp -= 4; W32(esp, v); }
/* 72a257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72a25d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a25e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72a265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a267: mov esi, ecx */
  esi = ecx;
/* 72a269: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72a26d: mov dword ptr [esi], 0x9f8b48 */
  W32((uint32_t)(esi), 0x9f8b48u);
/* 72a273: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72a27b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72a281u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72a281: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72a284: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72a289: call 0x6c678f */
  esp -= 4; W32(esp, 0x72a28eu); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 72a28e: mov ecx, esi */
  ecx = esi;
/* 72a290: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72a298: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x72a29eu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 72a29e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72a2a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a2a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72a2aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a2ad: ret  */
  esp += 4; SPILL(); return;
}

void f_72a2d0(void) {
  LOAD_REGS();
L_72a2d0: /* 72a2d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72a2d2: push 0x9c4579 */
  { uint32_t v = 0x9c4579u; esp -= 4; W32(esp, v); }
/* 72a2d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72a2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a2de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72a2e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a2e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a2e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a2e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72a2ec: mov esi, ecx */
  esi = ecx;
/* 72a2ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a2ef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72a2f3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x72a2f9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 72a2f9: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72a2fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a2fd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72a300: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72a308: mov dword ptr [esi], 0x9f8b48 */
  W32((uint32_t)(esi), 0x9f8b48u);
/* 72a30e: call 0x6c520e */
  esp -= 4; W32(esp, 0x72a313u); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 72a313: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72a317: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a318: mov eax, esi */
  eax = esi;
/* 72a31a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a31b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72a322: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a325: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a350(void) {
  LOAD_REGS();
L_72a350: /* 72a350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a351: mov esi, ecx */
  esi = ecx;
/* 72a353: call 0x6c3314 */
  esp -= 4; W32(esp, 0x72a358u); SPILL(); f_6c3314(); if (g_unwind) return; RELOAD();
/* 72a358: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72a35d: je 0x72a36b */
  if (zf) goto L_72a36b;
L_72a35f: /* 72a35f: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 72a361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a362: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72a368u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72a368: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72a36b: /* 72a36b: mov eax, esi */
  eax = esi;
/* 72a36d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a36e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a390(void) {
  LOAD_REGS();
L_72a390: /* 72a390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a391: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72a395: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72a398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a399: mov esi, ecx */
  esi = ecx;
/* 72a39b: je 0x72a3cd */
  if (zf) goto L_72a3cd;
L_72a39d: /* 72a39d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72a3a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a3a1: push 0x6c3314 */
  { uint32_t v = 0x6c3314u; esp -= 4; W32(esp, v); }
/* 72a3a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72a3a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a3aa: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 72a3ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a3ad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72a3b2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72a3b2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72a3b5: je 0x72a3c5 */
  if (zf) goto L_72a3c5;
L_72a3b7: /* 72a3b7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72a3bd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72a3bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72a3c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a3c2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72a3c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72a3c5: /* 72a3c5: mov eax, edi */
  eax = edi;
/* 72a3c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a3c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a3c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a3ca: ret 4 */
  esp += 8; SPILL(); return;
L_72a3cd: /* 72a3cd: mov ecx, esi */
  ecx = esi;
/* 72a3cf: call 0x6c3314 */
  esp -= 4; W32(esp, 0x72a3d4u); SPILL(); f_6c3314(); if (g_unwind) return; RELOAD();
/* 72a3d4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72a3d7: je 0x72a3e5 */
  if (zf) goto L_72a3e5;
L_72a3d9: /* 72a3d9: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 72a3db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a3dc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72a3e2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72a3e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72a3e5: /* 72a3e5: mov eax, esi */
  eax = esi;
/* 72a3e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a3e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a3e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a410(void) {
  LOAD_REGS();
L_72a410: /* 72a410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72a414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a415: mov esi, ecx */
  esi = ecx;
/* 72a417: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a418: mov ecx, eax */
  ecx = eax;
/* 72a41a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 72a41c: mov edx, esi */
  edx = esi;
/* 72a41e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 72a420: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 72a423: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 72a426: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 72a429: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 72a42c: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 72a42f: lea edi, [eax + 0x10] */
  edi = (uint32_t)(eax + 0x10u);
/* 72a432: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72a434: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 72a437: je 0x72a43e */
  if (zf) goto L_72a43e;
L_72a439: /* 72a439: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 72a43c: jmp 0x72a440 */
  goto L_72a440;
L_72a43e: /* 72a43e: xor eax, eax */
  eax = 0;
L_72a440: /* 72a440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a441: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 72a444: call 0x6cb258 */
  esp -= 4; W32(esp, 0x72a449u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 72a449: mov dword ptr [esi + 0x10], 0x9f401c */
  W32((uint32_t)(esi + 0x10u), 0x9f401cu);
/* 72a450: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 72a453: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a456: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 72a459: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72a45c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a45d: mov dword ptr [esi + 0x10], 0x9f7f0c */
  W32((uint32_t)(esi + 0x10u), 0x9f7f0cu);
/* 72a464: mov eax, esi */
  eax = esi;
/* 72a466: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a467: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a490(void) {
  LOAD_REGS();
L_72a490: /* 72a490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72a494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a495: mov esi, ecx */
  esi = ecx;
/* 72a497: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a498: mov ecx, eax */
  ecx = eax;
/* 72a49a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 72a49c: mov edx, esi */
  edx = esi;
/* 72a49e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 72a4a0: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 72a4a3: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 72a4a6: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 72a4a9: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 72a4ac: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 72a4af: lea edi, [eax + 0x10] */
  edi = (uint32_t)(eax + 0x10u);
/* 72a4b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72a4b4: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 72a4b7: je 0x72a4be */
  if (zf) goto L_72a4be;
L_72a4b9: /* 72a4b9: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 72a4bc: jmp 0x72a4c0 */
  goto L_72a4c0;
L_72a4be: /* 72a4be: xor eax, eax */
  eax = 0;
L_72a4c0: /* 72a4c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a4c1: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 72a4c4: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x72a4c9u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 72a4c9: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 72a4cc: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a4cf: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 72a4d2: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72a4d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a4d6: mov eax, esi */
  eax = esi;
/* 72a4d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a4d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a500(void) {
  LOAD_REGS();
L_72a500: /* 72a500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a501: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72a502: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a503: mov esi, ecx */
  esi = ecx;
/* 72a505: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a506: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72a509: mov dword ptr [esi], 0x9f8bc4 */
  W32((uint32_t)(esi), 0x9f8bc4u);
/* 72a50f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72a515u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72a515: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 72a51b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 72a51e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 72a521: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72a523: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 72a528: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a529: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a52a: call 0x99c910 */
  esp -= 4; W32(esp, 0x72a52fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 72a52f: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 72a534: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 72a537: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 72a53a: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 72a53d: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 72a543: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 72a546: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 72a549: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a54a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 72a54d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a550: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 72a557: mov eax, esi */
  eax = esi;
/* 72a559: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a55a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72a55b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a55c: ret  */
  esp += 4; SPILL(); return;
}

void f_72a580(void) {
  LOAD_REGS();
L_72a580: /* 72a580: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 72a584: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 72a588: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 72a58b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a58c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 72a58f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a590: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72a591: call 0x6c6d98 */
  esp -= 4; W32(esp, 0x72a596u); SPILL(); f_6c6d98(); if (g_unwind) return; RELOAD();
/* 72a596: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a59a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x72a5a0u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 72a5a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a5a3: ret  */
  esp += 4; SPILL(); return;
}

void f_72a5c0(void) {
  LOAD_REGS();
L_72a5c0: /* 72a5c0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 72a5c3: jmp 0x6c770c */
  SPILL(); f_6c770c(); return;
}

void f_72a5e0(void) {
  LOAD_REGS();
L_72a5e0: /* 72a5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a5e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a5e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72a5e6: mov esi, ecx */
  esi = ecx;
/* 72a5e8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 72a5eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a5ec: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72a5ef: mov dword ptr [esi], 0x9f8bc4 */
  W32((uint32_t)(esi), 0x9f8bc4u);
/* 72a5f5: call 0x6c1fc8 */
  esp -= 4; W32(esp, 0x72a5fau); SPILL(); f_6c1fc8(); if (g_unwind) return; RELOAD();
/* 72a5fa: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 72a5fd: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 72a600: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 72a603: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a606: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 72a609: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72a60c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a60d: mov eax, esi */
  eax = esi;
/* 72a60f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a610: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a630(void) {
  LOAD_REGS();
L_72a630: /* 72a630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a631: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a632: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72a636: mov esi, ecx */
  esi = ecx;
/* 72a638: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 72a63b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a63c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72a63f: call 0x6c94cb */
  esp -= 4; W32(esp, 0x72a644u); SPILL(); f_6c94cb(); if (g_unwind) return; RELOAD();
/* 72a644: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 72a647: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 72a64a: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 72a64d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a650: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 72a653: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72a656: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a657: mov eax, esi */
  eax = esi;
/* 72a659: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a65a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a670(void) {
  LOAD_REGS();
L_72a670: /* 72a670: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a671: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72a672: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a673: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a674: push 0x6ccd74 */
  { uint32_t v = 0x6ccd74u; esp -= 4; W32(esp, v); }
/* 72a679: push 0x6cab37 */
  { uint32_t v = 0x6cab37u; esp -= 4; W32(esp, v); }
/* 72a67e: mov esi, ecx */
  esi = ecx;
/* 72a680: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 72a682: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 72a684: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 72a687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a688: mov dword ptr [esi], 0x9f8040 */
  W32((uint32_t)(esi), 0x9f8040u);
/* 72a68e: call 0x99cafe */
  esp -= 4; W32(esp, 0x72a693u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 72a693: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 72a699: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 72a69c: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 72a69f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72a6a1: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 72a6a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a6a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a6a8: call 0x99c910 */
  esp -= 4; W32(esp, 0x72a6adu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 72a6ad: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 72a6b2: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 72a6b5: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 72a6b8: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 72a6bb: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 72a6c1: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 72a6c4: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 72a6c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a6c8: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 72a6cb: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 72a6ce: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
/* 72a6d5: mov eax, esi */
  eax = esi;
/* 72a6d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a6d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72a6d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a6da: ret  */
  esp += 4; SPILL(); return;
}

void f_72a700(void) {
  LOAD_REGS();
L_72a700: /* 72a700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72a702: push 0x9c459b */
  { uint32_t v = 0x9c459bu; esp -= 4; W32(esp, v); }
/* 72a707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72a70d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a70e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72a715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a717: mov esi, ecx */
  esi = ecx;
/* 72a719: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72a71c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72a720: mov dword ptr [esi], 0x9f80a0 */
  W32((uint32_t)(esi), 0x9f80a0u);
/* 72a726: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72a72cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72a72c: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 72a72f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72a737: call 0x6c3e6d */
  esp -= 4; W32(esp, 0x72a73cu); SPILL(); f_6c3e6d(); if (g_unwind) return; RELOAD();
/* 72a73c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72a740: mov eax, esi */
  eax = esi;
/* 72a742: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a743: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72a74a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a74d: ret  */
  esp += 4; SPILL(); return;
}

void f_72a770(void) {
  LOAD_REGS();
L_72a770: /* 72a770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a771: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 72a775: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a776: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 72a77a: lea eax, [edi + 0x68] */
  eax = (uint32_t)(edi + 0x68u);
/* 72a77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a77e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 72a780: lea ecx, [edi + 0x60] */
  ecx = (uint32_t)(edi + 0x60u);
/* 72a783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a784: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 72a787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72a788: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 72a78b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a78c: mov ecx, esi */
  ecx = esi;
/* 72a78e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x72a791u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72a791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a792: call 0x6c90bb */
  esp -= 4; W32(esp, 0x72a797u); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 72a797: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a79b: call dword ptr [0xcfa414] */
  esp -= 4; W32(esp, 0x72a7a1u); SPILL(); f_4e2eaf(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AA_K@Z */ RELOAD();
/* 72a7a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a7a5: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x72a7abu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 72a7ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a7ae: mov ecx, esi */
  ecx = esi;
/* 72a7b0: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x72a7b6u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 72a7b6: cmp eax, 0x74 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72a7b9: jl 0x72a7c8 */
  if ((sf != of)) goto L_72a7c8;
L_72a7bb: /* 72a7bb: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72a7be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a7bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a7c0: call 0x6c7211 */
  esp -= 4; W32(esp, 0x72a7c5u); SPILL(); f_6c7211(); if (g_unwind) return; RELOAD();
/* 72a7c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72a7c8: /* 72a7c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a7c9: mov eax, esi */
  eax = esi;
/* 72a7cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a7cc: ret  */
  esp += 4; SPILL(); return;
}

void f_72a7f0(void) {
  LOAD_REGS();
L_72a7f0: /* 72a7f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a7f1: mov esi, ecx */
  esi = ecx;
/* 72a7f3: call 0x6cd05d */
  esp -= 4; W32(esp, 0x72a7f8u); SPILL(); f_6cd05d(); if (g_unwind) return; RELOAD();
/* 72a7f8: xor eax, eax */
  eax = 0;
/* 72a7fa: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 72a7fd: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 72a800: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 72a803: mov dword ptr [esi + 0x28], 0xffffffff */
  W32((uint32_t)(esi + 0x28u), 0xffffffffu);
/* 72a80a: mov eax, esi */
  eax = esi;
/* 72a80c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a80d: ret  */
  esp += 4; SPILL(); return;
}

void f_72a820(void) {
  LOAD_REGS();
L_72a820: /* 72a820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72a821: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72a822: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a823: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 72a827: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a828: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 72a82c: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 72a82f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a830: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72a833: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a834: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a835: call 0x6c6d98 */
  esp -= 4; W32(esp, 0x72a83au); SPILL(); f_6c6d98(); if (g_unwind) return; RELOAD();
/* 72a83a: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 72a840: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a843: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a844: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72a846u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72a846: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a849: lea ebp, [esi + 0x28] */
  ebp = (uint32_t)(esi + 0x28u);
/* 72a84c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72a84d: lea edx, [esi + 0x24] */
  edx = (uint32_t)(esi + 0x24u);
/* 72a850: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72a851: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72a853: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 72a856: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72a857: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72a85a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a85b: mov ecx, eax */
  ecx = eax;
/* 72a85d: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x72a860u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72a860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a861: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72a863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72a863: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a866: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a867: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x72a86du); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 72a86d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a871: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72a873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72a873: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72a876: mov ecx, edi */
  ecx = edi;
/* 72a878: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x72a87eu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 72a87e: cmp eax, 0x6b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72a881: jge 0x72a89d */
  if ((sf == of)) goto L_72a89d;
L_72a883: /* 72a883: mov ecx, edi */
  ecx = edi;
/* 72a885: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x72a88bu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 72a88b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72a88d: mov eax, edi */
  eax = edi;
/* 72a88f: je 0x72a89f */
  if (zf) goto L_72a89f;
L_72a891: /* 72a891: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a892: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a893: mov dword ptr [ebp], 0xffffffff */
  W32((uint32_t)(ebp), 0xffffffffu);
/* 72a89a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72a89b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a89c: ret  */
  esp += 4; SPILL(); return;
L_72a89d: /* 72a89d: mov eax, edi */
  eax = edi;
L_72a89f: /* 72a89f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a8a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a8a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72a8a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72a8a3: ret  */
  esp += 4; SPILL(); return;
}

void f_72a8e0(void) {
  LOAD_REGS();
L_72a8e0: /* 72a8e0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 72a8e3: jmp 0x6c770c */
  SPILL(); f_6c770c(); return;
}

void f_72a900(void) {
  LOAD_REGS();
L_72a900: /* 72a900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a901: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a902: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72a906: mov esi, ecx */
  esi = ecx;
/* 72a908: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 72a90b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a90c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72a90f: mov dword ptr [esi], 0x9f8bc4 */
  W32((uint32_t)(esi), 0x9f8bc4u);
/* 72a915: call 0x6c1fc8 */
  esp -= 4; W32(esp, 0x72a91au); SPILL(); f_6c1fc8(); if (g_unwind) return; RELOAD();
/* 72a91a: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 72a91d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 72a920: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 72a923: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a926: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 72a929: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72a92c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 72a92f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 72a932: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 72a935: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 72a938: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 72a93b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 72a93e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 72a941: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a942: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 72a945: mov eax, esi */
  eax = esi;
/* 72a947: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a948: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a970(void) {
  LOAD_REGS();
L_72a970: /* 72a970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72a971: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72a972: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72a976: mov esi, ecx */
  esi = ecx;
/* 72a978: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 72a97b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72a97c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 72a97f: call 0x6c94cb */
  esp -= 4; W32(esp, 0x72a984u); SPILL(); f_6c94cb(); if (g_unwind) return; RELOAD();
/* 72a984: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 72a987: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 72a98a: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 72a98d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 72a990: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 72a993: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72a996: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 72a999: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 72a99c: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 72a99f: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 72a9a2: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 72a9a5: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 72a9a8: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 72a9ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72a9ac: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 72a9af: mov eax, esi */
  eax = esi;
/* 72a9b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72a9b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72a9e0(void) {
  LOAD_REGS();
L_72a9e0: /* 72a9e0: jmp 0x6cb839 */
  SPILL(); f_6cb839(); return;
}

void f_72aa00(void) {
  LOAD_REGS();
L_72aa00: /* 72aa00: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_72aa20(void) {
  LOAD_REGS();
L_72aa20: /* 72aa20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72aa21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72aa22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72aa26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72aa27: mov esi, ecx */
  esi = ecx;
/* 72aa29: call 0x6cc1ad */
  esp -= 4; W32(esp, 0x72aa2eu); SPILL(); f_6cc1ad(); if (g_unwind) return; RELOAD();
/* 72aa2e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 72aa31: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 72aa34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72aa35: mov eax, esi */
  eax = esi;
/* 72aa37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72aa38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72aa50(void) {
  LOAD_REGS();
L_72aa50: /* 72aa50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72aa51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72aa52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72aa56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72aa57: mov esi, ecx */
  esi = ecx;
/* 72aa59: call 0x6cbbae */
  esp -= 4; W32(esp, 0x72aa5eu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 72aa5e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 72aa61: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 72aa64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72aa65: mov eax, esi */
  eax = esi;
/* 72aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72aa68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72aa80(void) {
  LOAD_REGS();
L_72aa80: /* 72aa80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72aa82: push 0x9c45c4 */
  { uint32_t v = 0x9c45c4u; esp -= 4; W32(esp, v); }
/* 72aa87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72aa8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72aa8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72aa95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72aa96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72aa97: mov esi, ecx */
  esi = ecx;
/* 72aa99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72aa9d: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 72aaa0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72aaa8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72aaaeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72aaae: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 72aab1: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 72aab6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72aabcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72aabc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72aac0: mov eax, esi */
  eax = esi;
/* 72aac2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72aac3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72aaca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72aacd: ret  */
  esp += 4; SPILL(); return;
}

void f_72aaf0(void) {
  LOAD_REGS();
L_72aaf0: /* 72aaf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 72aaf4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 72aaf8: lea ecx, [eax + 0x40] */
  ecx = (uint32_t)(eax + 0x40u);
/* 72aafb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72aafc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72aafd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72aafe: call 0x6c67da */
  esp -= 4; W32(esp, 0x72ab03u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 72ab03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72ab06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ab07: call 0x6c1505 */
  esp -= 4; W32(esp, 0x72ab0cu); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 72ab0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72ab0f: ret  */
  esp += 4; SPILL(); return;
}

void f_72ab20(void) {
  LOAD_REGS();
L_72ab20: /* 72ab20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72ab22: push 0x9c45f4 */
  { uint32_t v = 0x9c45f4u; esp -= 4; W32(esp, v); }
/* 72ab27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72ab2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ab2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72ab35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72ab36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ab37: mov esi, ecx */
  esi = ecx;
/* 72ab39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72ab3d: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 72ab40: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72ab48: call 0x6c33f0 */
  esp -= 4; W32(esp, 0x72ab4du); SPILL(); f_6c33f0(); if (g_unwind) return; RELOAD();
/* 72ab4d: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 72ab50: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72ab55: call 0x6c9543 */
  esp -= 4; W32(esp, 0x72ab5au); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 72ab5a: mov ecx, esi */
  ecx = esi;
/* 72ab5c: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72ab64: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x72ab6au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 72ab6a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72ab6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ab6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72ab76: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72ab79: ret  */
  esp += 4; SPILL(); return;
}

void f_72aba0(void) {
  LOAD_REGS();
L_72aba0: /* 72aba0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72aba2: push 0x9c4624 */
  { uint32_t v = 0x9c4624u; esp -= 4; W32(esp, v); }
/* 72aba7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72abad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72abae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72abb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72abb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72abb7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72abb8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 72abbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72abbd: mov ebx, ecx */
  ebx = ecx;
/* 72abbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72abc0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 72abc5: mov esi, ebp */
  esi = ebp;
/* 72abc7: mov edi, ebx */
  edi = ebx;
/* 72abc9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 72abcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72abcf: lea eax, [ebp + 0x40] */
  eax = (uint32_t)(ebp + 0x40u);
/* 72abd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72abd3: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* 72abd6: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 72abde: call 0x6cbbae */
  esp -= 4; W32(esp, 0x72abe3u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 72abe3: add ebp, 0x4c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 72abe6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72abe7: lea ecx, [ebx + 0x4c] */
  ecx = (uint32_t)(ebx + 0x4cu);
/* 72abea: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 72abef: call 0x6c58c6 */
  esp -= 4; W32(esp, 0x72abf4u); SPILL(); f_6c58c6(); if (g_unwind) return; RELOAD();
/* 72abf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 72abf8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72abf9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72abfa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72abfb: mov eax, ebx */
  eax = ebx;
/* 72abfd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72abfe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72ac05: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72ac08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ac30(void) {
  LOAD_REGS();
L_72ac30: /* 72ac30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72ac31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72ac32: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 72ac36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ac37: mov ebx, ecx */
  ebx = ecx;
/* 72ac39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ac3a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 72ac3f: mov esi, ebp */
  esi = ebp;
/* 72ac41: mov edi, ebx */
  edi = ebx;
/* 72ac43: lea eax, [ebp + 0x40] */
  eax = (uint32_t)(ebp + 0x40u);
/* 72ac46: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72ac48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ac49: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* 72ac4c: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x72ac51u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 72ac51: add ebp, 0x4c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 72ac54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72ac55: lea ecx, [ebx + 0x4c] */
  ecx = (uint32_t)(ebx + 0x4cu);
/* 72ac58: call 0x6c2f04 */
  esp -= 4; W32(esp, 0x72ac5du); SPILL(); f_6c2f04(); if (g_unwind) return; RELOAD();
/* 72ac5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72ac5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ac5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72ac60: mov eax, ebx */
  eax = ebx;
/* 72ac62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72ac63: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ac80(void) {
  LOAD_REGS();
L_72ac80: /* 72ac80: jmp 0x6c536c */
  SPILL(); f_6c536c(); return;
}

void f_72aca0(void) {
  LOAD_REGS();
L_72aca0: /* 72aca0: jmp 0x6c633e */
  SPILL(); f_6c633e(); return;
}

void f_72acc0(void) {
  LOAD_REGS();
L_72acc0: /* 72acc0: jmp 0x6c80a3 */
  SPILL(); f_6c80a3(); return;
}

void f_72ace0(void) {
  LOAD_REGS();
L_72ace0: /* 72ace0: jmp 0x6cafce */
  SPILL(); f_6cafce(); return;
}

void f_72ad00(void) {
  LOAD_REGS();
L_72ad00: /* 72ad00: jmp 0x6cb474 */
  SPILL(); f_6cb474(); return;
}

void f_72ad20(void) {
  LOAD_REGS();
L_72ad20: /* 72ad20: jmp 0x6c1b7c */
  SPILL(); f_6c1b7c(); return;
}

void f_72ad40(void) {
  LOAD_REGS();
L_72ad40: /* 72ad40: jmp 0x6c3ef4 */
  SPILL(); f_6c3ef4(); return;
}

void f_72ad60(void) {
  LOAD_REGS();
L_72ad60: /* 72ad60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72ad64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ad65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ad66: mov esi, ecx */
  esi = ecx;
/* 72ad68: call 0x6c9d5e */
  esp -= 4; W32(esp, 0x72ad6du); SPILL(); f_6c9d5e(); if (g_unwind) return; RELOAD();
/* 72ad6d: mov eax, esi */
  eax = esi;
/* 72ad6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ad70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ad90(void) {
  LOAD_REGS();
L_72ad90: /* 72ad90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72ad94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ad95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ad96: mov esi, ecx */
  esi = ecx;
/* 72ad98: call 0x6c6253 */
  esp -= 4; W32(esp, 0x72ad9du); SPILL(); f_6c6253(); if (g_unwind) return; RELOAD();
/* 72ad9d: mov eax, esi */
  eax = esi;
/* 72ad9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ada0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72adc0(void) {
  LOAD_REGS();
L_72adc0: /* 72adc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72adc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72adc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72adc6: mov esi, ecx */
  esi = ecx;
/* 72adc8: call 0x6cab5f */
  esp -= 4; W32(esp, 0x72adcdu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 72adcd: mov eax, esi */
  eax = esi;
/* 72adcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72add0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72adf0(void) {
  LOAD_REGS();
L_72adf0: /* 72adf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72adf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72adf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72adf6: mov esi, ecx */
  esi = ecx;
/* 72adf8: call 0x6c8af8 */
  esp -= 4; W32(esp, 0x72adfdu); SPILL(); f_6c8af8(); if (g_unwind) return; RELOAD();
/* 72adfd: mov eax, esi */
  eax = esi;
/* 72adff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ae00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ae20(void) {
  LOAD_REGS();
L_72ae20: /* 72ae20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72ae24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ae25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ae26: mov esi, ecx */
  esi = ecx;
/* 72ae28: call 0x6c3a71 */
  esp -= 4; W32(esp, 0x72ae2du); SPILL(); f_6c3a71(); if (g_unwind) return; RELOAD();
/* 72ae2d: mov eax, esi */
  eax = esi;
/* 72ae2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ae30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ae50(void) {
  LOAD_REGS();
L_72ae50: /* 72ae50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72ae54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ae55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ae56: mov esi, ecx */
  esi = ecx;
/* 72ae58: call 0x6c925f */
  esp -= 4; W32(esp, 0x72ae5du); SPILL(); f_6c925f(); if (g_unwind) return; RELOAD();
/* 72ae5d: mov eax, esi */
  eax = esi;
/* 72ae5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ae60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ae80(void) {
  LOAD_REGS();
L_72ae80: /* 72ae80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72ae84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ae85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ae86: mov esi, ecx */
  esi = ecx;
/* 72ae88: call 0x6c4426 */
  esp -= 4; W32(esp, 0x72ae8du); SPILL(); f_6c4426(); if (g_unwind) return; RELOAD();
/* 72ae8d: mov eax, esi */
  eax = esi;
/* 72ae8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ae90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72aeb0(void) {
  LOAD_REGS();
L_72aeb0: /* 72aeb0: jmp 0x6c9264 */
  SPILL(); f_6c9264(); return;
}

void f_72aed0(void) {
  LOAD_REGS();
L_72aed0: /* 72aed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72aed4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72aed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72aed6: mov esi, ecx */
  esi = ecx;
/* 72aed8: call 0x6c38a0 */
  esp -= 4; W32(esp, 0x72aeddu); SPILL(); f_6c38a0(); if (g_unwind) return; RELOAD();
/* 72aedd: mov eax, esi */
  eax = esi;
/* 72aedf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72aee0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72af00(void) {
  LOAD_REGS();
L_72af00: /* 72af00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 72af04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72af05: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 72af0b: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 72af0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72af0f: lea edx, [eax + 0x1c] */
  edx = (uint32_t)(eax + 0x1cu);
/* 72af12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72af13: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 72af16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72af17: lea edx, [eax + 0x14] */
  edx = (uint32_t)(eax + 0x14u);
/* 72af1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72af1b: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 72af1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72af1f: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 72af22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72af23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af24: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 72af28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af29: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72af2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72af2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72af2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af2f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72af31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72af31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72af34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af35: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x72af3bu); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 72af3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72af3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af3f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72af41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72af41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72af44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af45: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72af47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72af47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72af4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af4b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x72af4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72af4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72af50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af51: call 0x6ca7c2 */
  esp -= 4; W32(esp, 0x72af56u); SPILL(); f_6ca7c2(); if (g_unwind) return; RELOAD();
/* 72af56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72af59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72af5a: ret  */
  esp += 4; SPILL(); return;
}

void f_72af80(void) {
  LOAD_REGS();
L_72af80: /* 72af80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72af82: push 0x9c464c */
  { uint32_t v = 0x9c464cu; esp -= 4; W32(esp, v); }
/* 72af87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72af8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72af8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72af95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72af96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72af97: mov esi, ecx */
  esi = ecx;
/* 72af99: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72af9c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72afa0: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x72afa6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 72afa6: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72afa9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72afb1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72afb7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72afb7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72afbb: mov eax, esi */
  eax = esi;
/* 72afbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72afbe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72afc5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72afc8: ret  */
  esp += 4; SPILL(); return;
}

void f_72aff0(void) {
  LOAD_REGS();
L_72aff0: /* 72aff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72aff2: push 0x9c466c */
  { uint32_t v = 0x9c466cu; esp -= 4; W32(esp, v); }
/* 72aff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72affd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72affe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72b005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72b006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b007: mov esi, ecx */
  esi = ecx;
/* 72b009: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72b00d: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72b010: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72b018: call 0x6ca141 */
  esp -= 4; W32(esp, 0x72b01du); SPILL(); f_6ca141(); if (g_unwind) return; RELOAD();
/* 72b01d: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72b020: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72b028: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72b02eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72b02e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72b032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b033: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72b03a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72b03d: ret  */
  esp += 4; SPILL(); return;
}

void f_72b060(void) {
  LOAD_REGS();
L_72b060: /* 72b060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72b062: push 0x9c468c */
  { uint32_t v = 0x9c468cu; esp -= 4; W32(esp, v); }
/* 72b067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72b06d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b06e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72b075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72b076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b077: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72b078: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72b07c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72b07e: mov esi, ecx */
  esi = ecx;
/* 72b080: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 72b082: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 72b085: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 72b088: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 72b08b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72b08c: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72b08f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72b093: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x72b099u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 72b099: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 72b09c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 72b09f: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 72b0a2: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 72b0a5: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 72b0a8: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72b0ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72b0ac: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72b0af: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72b0b7: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 72b0ba: call 0x6c9b88 */
  esp -= 4; W32(esp, 0x72b0bfu); SPILL(); f_6c9b88(); if (g_unwind) return; RELOAD();
/* 72b0bf: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72b0c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72b0c4: mov eax, esi */
  eax = esi;
/* 72b0c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b0c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72b0ce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72b0d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b100(void) {
  LOAD_REGS();
L_72b100: /* 72b100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b101: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72b102: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72b106: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72b108: mov esi, ecx */
  esi = ecx;
/* 72b10a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 72b10c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 72b10f: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 72b112: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 72b115: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72b116: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72b119: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x72b11fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72b11f: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 72b122: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 72b125: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 72b128: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 72b12b: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 72b12e: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72b131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72b132: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72b135: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 72b138: call 0x6ca5ce */
  esp -= 4; W32(esp, 0x72b13du); SPILL(); f_6ca5ce(); if (g_unwind) return; RELOAD();
/* 72b13d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72b13e: mov eax, esi */
  eax = esi;
/* 72b140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b141: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b170(void) {
  LOAD_REGS();
L_72b170: /* 72b170: jmp 0x6cbd4d */
  SPILL(); f_6cbd4d(); return;
}

void f_72b190(void) {
  LOAD_REGS();
L_72b190: /* 72b190: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_72b1b0(void) {
  LOAD_REGS();
L_72b1b0: /* 72b1b0: jmp 0x6c45fc */
  SPILL(); f_6c45fc(); return;
}

void f_72b1d0(void) {
  LOAD_REGS();
L_72b1d0: /* 72b1d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b1d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b1d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b1d6: mov esi, ecx */
  esi = ecx;
/* 72b1d8: call 0x6c7f13 */
  esp -= 4; W32(esp, 0x72b1ddu); SPILL(); f_6c7f13(); if (g_unwind) return; RELOAD();
/* 72b1dd: mov eax, esi */
  eax = esi;
/* 72b1df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b1e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b200(void) {
  LOAD_REGS();
L_72b200: /* 72b200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b204: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b206: mov esi, ecx */
  esi = ecx;
/* 72b208: call 0x6cbbae */
  esp -= 4; W32(esp, 0x72b20du); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 72b20d: mov eax, esi */
  eax = esi;
/* 72b20f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b210: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b230(void) {
  LOAD_REGS();
L_72b230: /* 72b230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b234: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b236: mov esi, ecx */
  esi = ecx;
/* 72b238: call 0x6c640b */
  esp -= 4; W32(esp, 0x72b23du); SPILL(); f_6c640b(); if (g_unwind) return; RELOAD();
/* 72b23d: mov eax, esi */
  eax = esi;
/* 72b23f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b240: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b260(void) {
  LOAD_REGS();
L_72b260: /* 72b260: jmp 0x6c5899 */
  SPILL(); f_6c5899(); return;
}

void f_72b280(void) {
  LOAD_REGS();
L_72b280: /* 72b280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b285: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b286: mov esi, ecx */
  esi = ecx;
/* 72b288: call 0x6cb2ee */
  esp -= 4; W32(esp, 0x72b28du); SPILL(); f_6cb2ee(); if (g_unwind) return; RELOAD();
/* 72b28d: mov eax, esi */
  eax = esi;
/* 72b28f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b290: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b2b0(void) {
  LOAD_REGS();
L_72b2b0: /* 72b2b0: jmp 0x6c9868 */
  SPILL(); f_6c9868(); return;
}

void f_72b2d0(void) {
  LOAD_REGS();
L_72b2d0: /* 72b2d0: jmp 0x6c41ab */
  SPILL(); f_6c41ab(); return;
}

void f_72b2f0(void) {
  LOAD_REGS();
L_72b2f0: /* 72b2f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b2f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b2f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b2f6: mov esi, ecx */
  esi = ecx;
/* 72b2f8: call 0x6c1217 */
  esp -= 4; W32(esp, 0x72b2fdu); SPILL(); f_6c1217(); if (g_unwind) return; RELOAD();
/* 72b2fd: mov eax, esi */
  eax = esi;
/* 72b2ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b300: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b320(void) {
  LOAD_REGS();
L_72b320: /* 72b320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b324: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b326: mov esi, ecx */
  esi = ecx;
/* 72b328: call 0x6c7ecd */
  esp -= 4; W32(esp, 0x72b32du); SPILL(); f_6c7ecd(); if (g_unwind) return; RELOAD();
/* 72b32d: mov eax, esi */
  eax = esi;
/* 72b32f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b330: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b350(void) {
  LOAD_REGS();
L_72b350: /* 72b350: jmp 0x6c7ddd */
  SPILL(); f_6c7ddd(); return;
}

void f_72b370(void) {
  LOAD_REGS();
L_72b370: /* 72b370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b374: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b376: mov esi, ecx */
  esi = ecx;
/* 72b378: call 0x6cbf0a */
  esp -= 4; W32(esp, 0x72b37du); SPILL(); f_6cbf0a(); if (g_unwind) return; RELOAD();
/* 72b37d: mov eax, esi */
  eax = esi;
/* 72b37f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b380: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b3a0(void) {
  LOAD_REGS();
L_72b3a0: /* 72b3a0: jmp 0x6c6a6e */
  SPILL(); f_6c6a6e(); return;
}

void f_72b3c0(void) {
  LOAD_REGS();
L_72b3c0: /* 72b3c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b3c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b3c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b3c6: mov esi, ecx */
  esi = ecx;
/* 72b3c8: call 0x6c1e15 */
  esp -= 4; W32(esp, 0x72b3cdu); SPILL(); f_6c1e15(); if (g_unwind) return; RELOAD();
/* 72b3cd: mov eax, esi */
  eax = esi;
/* 72b3cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b3d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b3f0(void) {
  LOAD_REGS();
L_72b3f0: /* 72b3f0: jmp 0x6c24cd */
  SPILL(); f_6c24cd(); return;
}

void f_72b410(void) {
  LOAD_REGS();
L_72b410: /* 72b410: jmp 0x6c6bb8 */
  SPILL(); f_6c6bb8(); return;
}

void f_72b430(void) {
  LOAD_REGS();
L_72b430: /* 72b430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b434: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b436: mov esi, ecx */
  esi = ecx;
/* 72b438: call 0x6cbded */
  esp -= 4; W32(esp, 0x72b43du); SPILL(); f_6cbded(); if (g_unwind) return; RELOAD();
/* 72b43d: mov eax, esi */
  eax = esi;
/* 72b43f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b440: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b460(void) {
  LOAD_REGS();
L_72b460: /* 72b460: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b464: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b465: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b466: mov esi, ecx */
  esi = ecx;
/* 72b468: call 0x6ca655 */
  esp -= 4; W32(esp, 0x72b46du); SPILL(); f_6ca655(); if (g_unwind) return; RELOAD();
/* 72b46d: mov eax, esi */
  eax = esi;
/* 72b46f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b470: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b490(void) {
  LOAD_REGS();
L_72b490: /* 72b490: jmp 0x6cc6ee */
  SPILL(); f_6cc6ee(); return;
}

void f_72b4b0(void) {
  LOAD_REGS();
L_72b4b0: /* 72b4b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b4b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b4b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b4b6: mov esi, ecx */
  esi = ecx;
/* 72b4b8: call 0x6c5ca9 */
  esp -= 4; W32(esp, 0x72b4bdu); SPILL(); f_6c5ca9(); if (g_unwind) return; RELOAD();
/* 72b4bd: mov eax, esi */
  eax = esi;
/* 72b4bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b4c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b4e0(void) {
  LOAD_REGS();
L_72b4e0: /* 72b4e0: jmp 0x6c9e80 */
  SPILL(); f_6c9e80(); return;
}

void f_72b500(void) {
  LOAD_REGS();
L_72b500: /* 72b500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b506: mov esi, ecx */
  esi = ecx;
/* 72b508: call 0x6cc685 */
  esp -= 4; W32(esp, 0x72b50du); SPILL(); f_6cc685(); if (g_unwind) return; RELOAD();
/* 72b50d: mov eax, esi */
  eax = esi;
/* 72b50f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b510: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b530(void) {
  LOAD_REGS();
L_72b530: /* 72b530: jmp 0x6c3b9d */
  SPILL(); f_6c3b9d(); return;
}

void f_72b550(void) {
  LOAD_REGS();
L_72b550: /* 72b550: jmp 0x6c582b */
  SPILL(); f_6c582b(); return;
}

void f_72b570(void) {
  LOAD_REGS();
L_72b570: /* 72b570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b574: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b575: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b576: mov esi, ecx */
  esi = ecx;
/* 72b578: call 0x6c5de9 */
  esp -= 4; W32(esp, 0x72b57du); SPILL(); f_6c5de9(); if (g_unwind) return; RELOAD();
/* 72b57d: mov eax, esi */
  eax = esi;
/* 72b57f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b580: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b5a0(void) {
  LOAD_REGS();
L_72b5a0: /* 72b5a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b5a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b5a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b5a6: mov esi, ecx */
  esi = ecx;
/* 72b5a8: call 0x6c671c */
  esp -= 4; W32(esp, 0x72b5adu); SPILL(); f_6c671c(); if (g_unwind) return; RELOAD();
/* 72b5ad: mov eax, esi */
  eax = esi;
/* 72b5af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b5b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b5d0(void) {
  LOAD_REGS();
L_72b5d0: /* 72b5d0: jmp 0x6c55c9 */
  SPILL(); f_6c55c9(); return;
}

void f_72b5f0(void) {
  LOAD_REGS();
L_72b5f0: /* 72b5f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b5f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b5f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b5f6: mov esi, ecx */
  esi = ecx;
/* 72b5f8: call 0x6c6d6b */
  esp -= 4; W32(esp, 0x72b5fdu); SPILL(); f_6c6d6b(); if (g_unwind) return; RELOAD();
/* 72b5fd: mov eax, esi */
  eax = esi;
/* 72b5ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b600: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b620(void) {
  LOAD_REGS();
L_72b620: /* 72b620: jmp 0x6c605a */
  SPILL(); f_6c605a(); return;
}

void f_72b640(void) {
  LOAD_REGS();
L_72b640: /* 72b640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72b644: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b645: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b646: mov esi, ecx */
  esi = ecx;
/* 72b648: call 0x6c545c */
  esp -= 4; W32(esp, 0x72b64du); SPILL(); f_6c545c(); if (g_unwind) return; RELOAD();
/* 72b64d: mov eax, esi */
  eax = esi;
/* 72b64f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72b650: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72b670(void) {
  LOAD_REGS();
L_72b670: /* 72b670: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72b671: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72b672: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 72b676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72b677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72b678: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72b679: mov ebx, ecx */
  ebx = ecx;
/* 72b67b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72b681u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72b681: mov edi, dword ptr [ebx + 0x34] */
  edi = R32((uint32_t)(ebx + 0x34u));
/* 72b684: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 72b687: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72b689: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 72b68c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72b68e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72b691: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72b694: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72b697: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72b69a: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 72b69d: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72b69f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72b6a2: mov edx, edi */
  edx = edi;
/* 72b6a4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b6a6: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 72b6a9: lea edx, [ebp + 0x38] */
  edx = (uint32_t)(ebp + 0x38u);
/* 72b6ac: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72b6ae: lea eax, [ebx + 0x38] */
  eax = (uint32_t)(ebx + 0x38u);
/* 72b6b1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72b6b3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72b6b6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72b6b9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72b6bc: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72b6bf: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 72b6c2: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 72b6c5: mov ecx, 6 */
  ecx = 0x6u;
/* 72b6ca: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72b6cc: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 72b6cf: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 72b6d2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72b6d4: mov esi, ecx */
  esi = ecx;
/* 72b6d6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72b6d9: lea ecx, [ebp + 0x60] */
  ecx = (uint32_t)(ebp + 0x60u);
/* 72b6dc: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 72b6de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72b6df: lea ecx, [ebx + 0x60] */
  ecx = (uint32_t)(ebx + 0x60u);
/* 72b6e2: mov dword ptr [ebx + 0x5c], esi */
  W32((uint32_t)(ebx + 0x5cu), esi);
/* 72b6e5: call 0x6c2f04 */
  esp -= 4; W32(esp, 0x72b6eau); SPILL(); f_6c2f04(); if (g_unwind) return; RELOAD();
/* 72b6ea: mov edx, dword ptr [ebp + 0x6c] */
  edx = R32((uint32_t)(ebp + 0x6cu));
/* 72b6ed: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 72b6f0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b6f2: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72b6f5: mov esi, eax */
  esi = eax;
/* 72b6f7: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 72b6f9: mov dword ptr [ebx + 0x6c], esi */
  W32((uint32_t)(ebx + 0x6cu), esi);
/* 72b6fc: mov eax, dword ptr [ebp + 0x70] */
  eax = R32((uint32_t)(ebp + 0x70u));
/* 72b6ff: mov dword ptr [ebx + 0x70], eax */
  W32((uint32_t)(ebx + 0x70u), eax);
/* 72b702: mov ecx, dword ptr [ebp + 0x74] */
  ecx = R32((uint32_t)(ebp + 0x74u));
/* 72b705: mov dword ptr [ebx + 0x74], ecx */
  W32((uint32_t)(ebx + 0x74u), ecx);
/* 72b708: mov edx, dword ptr [ebp + 0x78] */
  edx = R32((uint32_t)(ebp + 0x78u));
/* 72b70b: mov dword ptr [ebx + 0x78], edx */
  W32((uint32_t)(ebx + 0x78u), edx);
/* 72b70e: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 72b711: mov dword ptr [ebx + 0x7c], eax */
  W32((uint32_t)(ebx + 0x7cu), eax);
/* 72b714: lea esi, [ebp + 0x80] */
  esi = (uint32_t)(ebp + 0x80u);
/* 72b71a: lea edi, [ebx + 0x80] */
  edi = (uint32_t)(ebx + 0x80u);
/* 72b720: mov ecx, 6 */
  ecx = 0x6u;
/* 72b725: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72b727: mov edx, dword ptr [ebp + 0x98] */
  edx = R32((uint32_t)(ebp + 0x98u));
/* 72b72d: mov ecx, dword ptr [ebx + 0x98] */
  ecx = R32((uint32_t)(ebx + 0x98u));
/* 72b733: mov edi, dword ptr [ebx + 0x98] */
  edi = R32((uint32_t)(ebx + 0x98u));
/* 72b739: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72b73b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72b73e: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 72b740: mov dword ptr [ebx + 0x98], edi */
  W32((uint32_t)(ebx + 0x98u), edi);
/* 72b746: mov edx, dword ptr [ebp + 0x98] */
  edx = R32((uint32_t)(ebp + 0x98u));
/* 72b74c: mov eax, edi */
  eax = edi;
/* 72b74e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b750: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72b753: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b755: lea eax, [ebp + 0x9c] */
  eax = (uint32_t)(ebp + 0x9cu);
/* 72b75b: mov dword ptr [ebx + 0x98], edx */
  W32((uint32_t)(ebx + 0x98u), edx);
/* 72b761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72b762: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 72b768: call 0x6c586c */
  esp -= 4; W32(esp, 0x72b76du); SPILL(); f_6c586c(); if (g_unwind) return; RELOAD();
/* 72b76d: mov ecx, dword ptr [ebp + 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xa8u));
/* 72b773: mov dword ptr [ebx + 0xa8], ecx */
  W32((uint32_t)(ebx + 0xa8u), ecx);
/* 72b779: lea esi, [ebp + 0xac] */
  esi = (uint32_t)(ebp + 0xacu);
/* 72b77f: lea edi, [ebx + 0xac] */
  edi = (uint32_t)(ebx + 0xacu);
/* 72b785: mov ecx, 6 */
  ecx = 0x6u;
/* 72b78a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72b78c: lea edx, [ebp + 0xc4] */
  edx = (uint32_t)(ebp + 0xc4u);
/* 72b792: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72b794: lea eax, [ebx + 0xc4] */
  eax = (uint32_t)(ebx + 0xc4u);
/* 72b79a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72b79c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72b79f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72b7a2: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 72b7a5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 72b7a8: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 72b7ab: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 72b7ae: mov eax, dword ptr [ebp + 0xd4] */
  eax = R32((uint32_t)(ebp + 0xd4u));
/* 72b7b4: mov edx, dword ptr [ebx + 0xd8] */
  edx = R32((uint32_t)(ebx + 0xd8u));
/* 72b7ba: mov dword ptr [ebx + 0xd4], eax */
  W32((uint32_t)(ebx + 0xd4u), eax);
/* 72b7c0: mov ecx, dword ptr [ebp + 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xd8u));
/* 72b7c6: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72b7c8: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72b7cb: mov edi, edx */
  edi = edx;
/* 72b7cd: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 72b7cf: mov dword ptr [ebx + 0xd8], edi */
  W32((uint32_t)(ebx + 0xd8u), edi);
/* 72b7d5: lea edx, [ebp + 0xdc] */
  edx = (uint32_t)(ebp + 0xdcu);
/* 72b7db: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72b7dd: lea eax, [ebx + 0xdc] */
  eax = (uint32_t)(ebx + 0xdcu);
/* 72b7e3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72b7e5: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72b7e8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72b7eb: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 72b7ee: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 72b7f1: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 72b7f4: mov ecx, dword ptr [ebx + 0xf0] */
  ecx = R32((uint32_t)(ebx + 0xf0u));
/* 72b7fa: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 72b7fd: mov eax, dword ptr [ebp + 0xec] */
  eax = R32((uint32_t)(ebp + 0xecu));
/* 72b803: mov dword ptr [ebx + 0xec], eax */
  W32((uint32_t)(ebx + 0xecu), eax);
/* 72b809: mov esi, dword ptr [ebp + 0xf0] */
  esi = R32((uint32_t)(ebp + 0xf0u));
/* 72b80f: mov eax, dword ptr [ebx + 0xf0] */
  eax = R32((uint32_t)(ebx + 0xf0u));
/* 72b815: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72b817: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72b81a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72b81c: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 72b822: mov edx, dword ptr [ebp + 0xf0] */
  edx = R32((uint32_t)(ebp + 0xf0u));
/* 72b828: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b82a: mov edi, dword ptr [ebx + 0x104] */
  edi = R32((uint32_t)(ebx + 0x104u));
/* 72b830: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72b833: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b835: mov dword ptr [ebx + 0xf0], edx */
  W32((uint32_t)(ebx + 0xf0u), edx);
/* 72b83b: mov al, byte ptr [ebp + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xf4u))) & 0xffu);
/* 72b841: mov byte ptr [ebx + 0xf4], al */
  W8((uint32_t)(ebx + 0xf4u), (eax & 0xffu));
/* 72b847: mov ecx, dword ptr [ebp + 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xf8u));
/* 72b84d: mov eax, dword ptr [ebx + 0xfc] */
  eax = R32((uint32_t)(ebx + 0xfcu));
/* 72b853: mov dword ptr [ebx + 0xf8], ecx */
  W32((uint32_t)(ebx + 0xf8u), ecx);
/* 72b859: mov edx, dword ptr [ebp + 0xfc] */
  edx = R32((uint32_t)(ebp + 0xfcu));
/* 72b85f: mov ecx, dword ptr [ebx + 0x104] */
  ecx = R32((uint32_t)(ebx + 0x104u));
/* 72b865: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b867: mov esi, eax */
  esi = eax;
/* 72b869: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72b86c: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 72b86e: mov dword ptr [ebx + 0xfc], esi */
  W32((uint32_t)(ebx + 0xfcu), esi);
/* 72b874: mov al, byte ptr [ebp + 0x100] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x100u))) & 0xffu);
/* 72b87a: mov byte ptr [ebx + 0x100], al */
  W8((uint32_t)(ebx + 0x100u), (eax & 0xffu));
/* 72b880: xor ecx, dword ptr [ebp + 0x104] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x104u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72b886: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72b889: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 72b88b: mov dword ptr [ebx + 0x104], edi */
  W32((uint32_t)(ebx + 0x104u), edi);
/* 72b891: mov eax, dword ptr [ebp + 0x104] */
  eax = R32((uint32_t)(ebp + 0x104u));
/* 72b897: mov ecx, edi */
  ecx = edi;
/* 72b899: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72b89b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72b89e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72b8a0: mov dword ptr [ebx + 0x104], eax */
  W32((uint32_t)(ebx + 0x104u), eax);
/* 72b8a6: mov ecx, dword ptr [ebp + 0x104] */
  ecx = R32((uint32_t)(ebp + 0x104u));
/* 72b8ac: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72b8ae: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72b8b1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72b8b3: mov dword ptr [ebx + 0x104], ecx */
  W32((uint32_t)(ebx + 0x104u), ecx);
/* 72b8b9: mov eax, dword ptr [ebp + 0x104] */
  eax = R32((uint32_t)(ebp + 0x104u));
/* 72b8bf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72b8c1: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72b8c4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72b8c6: mov dword ptr [ebx + 0x104], eax */
  W32((uint32_t)(ebx + 0x104u), eax);
/* 72b8cc: mov edx, dword ptr [ebp + 0x104] */
  edx = R32((uint32_t)(ebp + 0x104u));
/* 72b8d2: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b8d4: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72b8d7: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72b8d9: mov dword ptr [ebx + 0x104], edx */
  W32((uint32_t)(ebx + 0x104u), edx);
/* 72b8df: mov eax, dword ptr [ebp + 0x108] */
  eax = R32((uint32_t)(ebp + 0x108u));
/* 72b8e5: mov dword ptr [ebx + 0x108], eax */
  W32((uint32_t)(ebx + 0x108u), eax);
/* 72b8eb: mov ecx, dword ptr [ebp + 0x10c] */
  ecx = R32((uint32_t)(ebp + 0x10cu));
/* 72b8f1: lea edx, [ebp + 0x110] */
  edx = (uint32_t)(ebp + 0x110u);
/* 72b8f7: mov dword ptr [ebx + 0x10c], ecx */
  W32((uint32_t)(ebx + 0x10cu), ecx);
/* 72b8fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72b8fe: lea ecx, [ebx + 0x110] */
  ecx = (uint32_t)(ebx + 0x110u);
/* 72b904: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72b90au); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72b90a: lea eax, [ebp + 0x11c] */
  eax = (uint32_t)(ebp + 0x11cu);
/* 72b910: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72b912: lea ecx, [ebx + 0x11c] */
  ecx = (uint32_t)(ebx + 0x11cu);
/* 72b918: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72b91a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72b91d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72b920: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72b923: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72b926: lea esi, [ebp + 0x128] */
  esi = (uint32_t)(ebp + 0x128u);
/* 72b92c: lea edi, [ebx + 0x128] */
  edi = (uint32_t)(ebx + 0x128u);
/* 72b932: mov ecx, 6 */
  ecx = 0x6u;
/* 72b937: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72b939: mov ecx, dword ptr [ebp + 0x140] */
  ecx = R32((uint32_t)(ebp + 0x140u));
/* 72b93f: mov dword ptr [ebx + 0x140], ecx */
  W32((uint32_t)(ebx + 0x140u), ecx);
/* 72b945: mov dl, byte ptr [ebp + 0x144] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x144u))) & 0xffu);
/* 72b94b: mov byte ptr [ebx + 0x144], dl */
  W8((uint32_t)(ebx + 0x144u), (edx & 0xffu));
/* 72b951: mov eax, dword ptr [ebp + 0x148] */
  eax = R32((uint32_t)(ebp + 0x148u));
/* 72b957: mov dword ptr [ebx + 0x148], eax */
  W32((uint32_t)(ebx + 0x148u), eax);
/* 72b95d: mov ecx, dword ptr [ebp + 0x14c] */
  ecx = R32((uint32_t)(ebp + 0x14cu));
/* 72b963: mov dword ptr [ebx + 0x14c], ecx */
  W32((uint32_t)(ebx + 0x14cu), ecx);
/* 72b969: lea esi, [ebp + 0x150] */
  esi = (uint32_t)(ebp + 0x150u);
/* 72b96f: lea edi, [ebx + 0x150] */
  edi = (uint32_t)(ebx + 0x150u);
/* 72b975: mov ecx, 6 */
  ecx = 0x6u;
/* 72b97a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72b97c: mov edx, dword ptr [ebp + 0x168] */
  edx = R32((uint32_t)(ebp + 0x168u));
/* 72b982: mov dword ptr [ebx + 0x168], edx */
  W32((uint32_t)(ebx + 0x168u), edx);
/* 72b988: mov eax, dword ptr [ebp + 0x16c] */
  eax = R32((uint32_t)(ebp + 0x16cu));
/* 72b98e: mov dword ptr [ebx + 0x16c], eax */
  W32((uint32_t)(ebx + 0x16cu), eax);
/* 72b994: mov ecx, dword ptr [ebp + 0x170] */
  ecx = R32((uint32_t)(ebp + 0x170u));
/* 72b99a: mov dword ptr [ebx + 0x170], ecx */
  W32((uint32_t)(ebx + 0x170u), ecx);
/* 72b9a0: mov dl, byte ptr [ebp + 0x174] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x174u))) & 0xffu);
/* 72b9a6: mov ecx, dword ptr [ebx + 0x178] */
  ecx = R32((uint32_t)(ebx + 0x178u));
/* 72b9ac: mov esi, ecx */
  esi = ecx;
/* 72b9ae: mov byte ptr [ebx + 0x174], dl */
  W8((uint32_t)(ebx + 0x174u), (edx & 0xffu));
/* 72b9b4: mov eax, dword ptr [ebp + 0x178] */
  eax = R32((uint32_t)(ebp + 0x178u));
/* 72b9ba: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72b9bc: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72b9bf: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 72b9c1: mov dword ptr [ebx + 0x178], esi */
  W32((uint32_t)(ebx + 0x178u), esi);
/* 72b9c7: lea esi, [ebp + 0x17c] */
  esi = (uint32_t)(ebp + 0x17cu);
/* 72b9cd: lea edi, [ebx + 0x17c] */
  edi = (uint32_t)(ebx + 0x17cu);
/* 72b9d3: mov ecx, 6 */
  ecx = 0x6u;
/* 72b9d8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72b9da: lea esi, [ebp + 0x194] */
  esi = (uint32_t)(ebp + 0x194u);
/* 72b9e0: lea edi, [ebx + 0x194] */
  edi = (uint32_t)(ebx + 0x194u);
/* 72b9e6: mov ecx, 6 */
  ecx = 0x6u;
/* 72b9eb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72b9ed: mov ecx, dword ptr [ebx + 0x1ac] */
  ecx = R32((uint32_t)(ebx + 0x1acu));
/* 72b9f3: mov edx, dword ptr [ebp + 0x1ac] */
  edx = R32((uint32_t)(ebp + 0x1acu));
/* 72b9f9: mov edi, dword ptr [ebx + 0x1ac] */
  edi = R32((uint32_t)(ebx + 0x1acu));
/* 72b9ff: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72ba01: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72ba04: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 72ba06: mov dword ptr [ebx + 0x1ac], edi */
  W32((uint32_t)(ebx + 0x1acu), edi);
/* 72ba0c: mov eax, dword ptr [ebp + 0x1ac] */
  eax = R32((uint32_t)(ebp + 0x1acu));
/* 72ba12: mov ecx, edi */
  ecx = edi;
/* 72ba14: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72ba16: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72ba19: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72ba1b: mov dword ptr [ebx + 0x1ac], eax */
  W32((uint32_t)(ebx + 0x1acu), eax);
/* 72ba21: mov ecx, dword ptr [ebp + 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0x1acu));
/* 72ba27: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72ba29: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72ba2c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72ba2e: mov dword ptr [ebx + 0x1ac], ecx */
  W32((uint32_t)(ebx + 0x1acu), ecx);
/* 72ba34: mov edx, dword ptr [ebp + 0x1ac] */
  edx = R32((uint32_t)(ebp + 0x1acu));
/* 72ba3a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72ba3c: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72ba3f: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72ba41: mov dword ptr [ebx + 0x1ac], edx */
  W32((uint32_t)(ebx + 0x1acu), edx);
/* 72ba47: lea eax, [ebp + 0x1b0] */
  eax = (uint32_t)(ebp + 0x1b0u);
/* 72ba4d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72ba4f: lea ecx, [ebx + 0x1b0] */
  ecx = (uint32_t)(ebx + 0x1b0u);
/* 72ba55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72ba57: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72ba5a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72ba5d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72ba60: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72ba63: mov ecx, dword ptr [ebp + 0x1bc] */
  ecx = R32((uint32_t)(ebp + 0x1bcu));
/* 72ba69: mov dword ptr [ebx + 0x1bc], ecx */
  W32((uint32_t)(ebx + 0x1bcu), ecx);
/* 72ba6f: mov edx, dword ptr [ebp + 0x1c0] */
  edx = R32((uint32_t)(ebp + 0x1c0u));
/* 72ba75: mov ecx, dword ptr [ebx + 0x1c8] */
  ecx = R32((uint32_t)(ebx + 0x1c8u));
/* 72ba7b: mov dword ptr [ebx + 0x1c0], edx */
  W32((uint32_t)(ebx + 0x1c0u), edx);
/* 72ba81: mov eax, dword ptr [ebp + 0x1c4] */
  eax = R32((uint32_t)(ebp + 0x1c4u));
/* 72ba87: mov dword ptr [ebx + 0x1c4], eax */
  W32((uint32_t)(ebx + 0x1c4u), eax);
/* 72ba8d: mov esi, dword ptr [ebp + 0x1c8] */
  esi = R32((uint32_t)(ebp + 0x1c8u));
/* 72ba93: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 72ba99: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72ba9b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72ba9e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72baa0: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 72baa6: mov ecx, eax */
  ecx = eax;
/* 72baa8: mov eax, dword ptr [ebp + 0x1c8] */
  eax = R32((uint32_t)(ebp + 0x1c8u));
/* 72baae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bab0: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72bab3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bab5: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 72babb: mov ecx, dword ptr [ebp + 0x1c8] */
  ecx = R32((uint32_t)(ebp + 0x1c8u));
/* 72bac1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bac3: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bac6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bac8: mov dword ptr [ebx + 0x1c8], ecx */
  W32((uint32_t)(ebx + 0x1c8u), ecx);
/* 72bace: mov eax, dword ptr [ebp + 0x1c8] */
  eax = R32((uint32_t)(ebp + 0x1c8u));
/* 72bad4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bad6: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72bad9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72badb: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 72bae1: mov edx, dword ptr [ebp + 0x1c8] */
  edx = R32((uint32_t)(ebp + 0x1c8u));
/* 72bae7: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72bae9: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72baec: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72baee: mov dword ptr [ebx + 0x1c8], edx */
  W32((uint32_t)(ebx + 0x1c8u), edx);
/* 72baf4: lea esi, [ebp + 0x1cc] */
  esi = (uint32_t)(ebp + 0x1ccu);
/* 72bafa: lea edi, [ebx + 0x1cc] */
  edi = (uint32_t)(ebx + 0x1ccu);
/* 72bb00: mov ecx, 6 */
  ecx = 0x6u;
/* 72bb05: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bb07: lea esi, [ebp + 0x1e4] */
  esi = (uint32_t)(ebp + 0x1e4u);
/* 72bb0d: lea edi, [ebx + 0x1e4] */
  edi = (uint32_t)(ebx + 0x1e4u);
/* 72bb13: mov ecx, 6 */
  ecx = 0x6u;
/* 72bb18: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bb1a: mov ecx, dword ptr [ebx + 0x1fc] */
  ecx = R32((uint32_t)(ebx + 0x1fcu));
/* 72bb20: mov eax, dword ptr [ebp + 0x1fc] */
  eax = R32((uint32_t)(ebp + 0x1fcu));
/* 72bb26: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bb28: mov esi, ecx */
  esi = ecx;
/* 72bb2a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72bb2d: lea ecx, [ebp + 0x200] */
  ecx = (uint32_t)(ebp + 0x200u);
/* 72bb33: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 72bb35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72bb36: lea ecx, [ebx + 0x200] */
  ecx = (uint32_t)(ebx + 0x200u);
/* 72bb3c: mov dword ptr [ebx + 0x1fc], esi */
  W32((uint32_t)(ebx + 0x1fcu), esi);
/* 72bb42: call 0x6c70bd */
  esp -= 4; W32(esp, 0x72bb47u); SPILL(); f_6c70bd(); if (g_unwind) return; RELOAD();
/* 72bb47: mov edx, dword ptr [ebp + 0x20c] */
  edx = R32((uint32_t)(ebp + 0x20cu));
/* 72bb4d: mov dword ptr [ebx + 0x20c], edx */
  W32((uint32_t)(ebx + 0x20cu), edx);
/* 72bb53: mov al, byte ptr [ebp + 0x210] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x210u))) & 0xffu);
/* 72bb59: mov byte ptr [ebx + 0x210], al */
  W8((uint32_t)(ebx + 0x210u), (eax & 0xffu));
/* 72bb5f: mov eax, dword ptr [ebx + 0x214] */
  eax = R32((uint32_t)(ebx + 0x214u));
/* 72bb65: mov ecx, dword ptr [ebp + 0x214] */
  ecx = R32((uint32_t)(ebp + 0x214u));
/* 72bb6b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bb6d: mov esi, eax */
  esi = eax;
/* 72bb6f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bb72: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 72bb74: mov dword ptr [ebx + 0x214], esi */
  W32((uint32_t)(ebx + 0x214u), esi);
/* 72bb7a: lea edx, [ebp + 0x218] */
  edx = (uint32_t)(ebp + 0x218u);
/* 72bb80: lea eax, [ebx + 0x218] */
  eax = (uint32_t)(ebx + 0x218u);
/* 72bb86: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72bb88: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72bb8a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72bb8d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72bb90: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72bb93: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72bb96: lea eax, [ebp + 0x224] */
  eax = (uint32_t)(ebp + 0x224u);
/* 72bb9c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72bb9e: lea ecx, [ebx + 0x224] */
  ecx = (uint32_t)(ebx + 0x224u);
/* 72bba4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72bba6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72bba9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72bbac: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72bbaf: mov edx, dword ptr [ebx + 0x260] */
  edx = R32((uint32_t)(ebx + 0x260u));
/* 72bbb5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72bbb8: lea esi, [ebp + 0x230] */
  esi = (uint32_t)(ebp + 0x230u);
/* 72bbbe: lea edi, [ebx + 0x230] */
  edi = (uint32_t)(ebx + 0x230u);
/* 72bbc4: mov ecx, 6 */
  ecx = 0x6u;
/* 72bbc9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bbcb: lea esi, [ebp + 0x248] */
  esi = (uint32_t)(ebp + 0x248u);
/* 72bbd1: lea edi, [ebx + 0x248] */
  edi = (uint32_t)(ebx + 0x248u);
/* 72bbd7: mov ecx, 6 */
  ecx = 0x6u;
/* 72bbdc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bbde: mov ecx, dword ptr [ebp + 0x260] */
  ecx = R32((uint32_t)(ebp + 0x260u));
/* 72bbe4: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bbe6: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bbe9: mov edi, edx */
  edi = edx;
/* 72bbeb: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 72bbed: mov dword ptr [ebx + 0x260], edi */
  W32((uint32_t)(ebx + 0x260u), edi);
/* 72bbf3: lea esi, [ebp + 0x264] */
  esi = (uint32_t)(ebp + 0x264u);
/* 72bbf9: lea edi, [ebx + 0x264] */
  edi = (uint32_t)(ebx + 0x264u);
/* 72bbff: mov ecx, 6 */
  ecx = 0x6u;
/* 72bc04: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bc06: lea edx, [ebp + 0x27c] */
  edx = (uint32_t)(ebp + 0x27cu);
/* 72bc0c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72bc0e: lea eax, [ebx + 0x27c] */
  eax = (uint32_t)(ebx + 0x27cu);
/* 72bc14: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72bc16: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72bc19: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72bc1c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72bc1f: mov ecx, dword ptr [ebx + 0x288] */
  ecx = R32((uint32_t)(ebx + 0x288u));
/* 72bc25: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72bc28: mov eax, dword ptr [ebx + 0x288] */
  eax = R32((uint32_t)(ebx + 0x288u));
/* 72bc2e: xor eax, dword ptr [ebp + 0x288] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x288u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bc34: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72bc37: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bc39: mov dword ptr [ebx + 0x288], ecx */
  W32((uint32_t)(ebx + 0x288u), ecx);
/* 72bc3f: mov eax, ecx */
  eax = ecx;
/* 72bc41: mov ecx, dword ptr [ebp + 0x288] */
  ecx = R32((uint32_t)(ebp + 0x288u));
/* 72bc47: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bc49: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bc4c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bc4e: lea edx, [ebp + 0x28c] */
  edx = (uint32_t)(ebp + 0x28cu);
/* 72bc54: mov dword ptr [ebx + 0x288], ecx */
  W32((uint32_t)(ebx + 0x288u), ecx);
/* 72bc5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72bc5b: lea ecx, [ebx + 0x28c] */
  ecx = (uint32_t)(ebx + 0x28cu);
/* 72bc61: call 0x6c9093 */
  esp -= 4; W32(esp, 0x72bc66u); SPILL(); f_6c9093(); if (g_unwind) return; RELOAD();
/* 72bc66: mov eax, dword ptr [ebp + 0x298] */
  eax = R32((uint32_t)(ebp + 0x298u));
/* 72bc6c: mov dword ptr [ebx + 0x298], eax */
  W32((uint32_t)(ebx + 0x298u), eax);
/* 72bc72: lea esi, [ebp + 0x29c] */
  esi = (uint32_t)(ebp + 0x29cu);
/* 72bc78: lea edi, [ebx + 0x29c] */
  edi = (uint32_t)(ebx + 0x29cu);
/* 72bc7e: mov ecx, 6 */
  ecx = 0x6u;
/* 72bc83: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bc85: mov ecx, dword ptr [ebp + 0x2b4] */
  ecx = R32((uint32_t)(ebp + 0x2b4u));
/* 72bc8b: mov esi, dword ptr [ebx + 0x2b4] */
  esi = R32((uint32_t)(ebx + 0x2b4u));
/* 72bc91: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bc93: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bc96: mov eax, esi */
  eax = esi;
/* 72bc98: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bc9a: mov dword ptr [ebx + 0x2b4], eax */
  W32((uint32_t)(ebx + 0x2b4u), eax);
/* 72bca0: mov dl, byte ptr [ebp + 0x2b8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2b8u))) & 0xffu);
/* 72bca6: mov byte ptr [ebx + 0x2b8], dl */
  W8((uint32_t)(ebx + 0x2b8u), (edx & 0xffu));
/* 72bcac: mov eax, dword ptr [ebp + 0x2bc] */
  eax = R32((uint32_t)(ebp + 0x2bcu));
/* 72bcb2: lea ecx, [ebp + 0x2c0] */
  ecx = (uint32_t)(ebp + 0x2c0u);
/* 72bcb8: mov dword ptr [ebx + 0x2bc], eax */
  W32((uint32_t)(ebx + 0x2bcu), eax);
/* 72bcbe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 72bcc0: lea edx, [ebx + 0x2c0] */
  edx = (uint32_t)(ebx + 0x2c0u);
/* 72bcc6: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72bcc8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 72bccb: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 72bcce: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 72bcd1: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72bcd4: mov edx, dword ptr [ebp + 0x2cc] */
  edx = R32((uint32_t)(ebp + 0x2ccu));
/* 72bcda: lea ecx, [ebp + 0x2d4] */
  ecx = (uint32_t)(ebp + 0x2d4u);
/* 72bce0: mov dword ptr [ebx + 0x2cc], edx */
  W32((uint32_t)(ebx + 0x2ccu), edx);
/* 72bce6: mov eax, dword ptr [ebp + 0x2d0] */
  eax = R32((uint32_t)(ebp + 0x2d0u));
/* 72bcec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72bced: lea ecx, [ebx + 0x2d4] */
  ecx = (uint32_t)(ebx + 0x2d4u);
/* 72bcf3: mov dword ptr [ebx + 0x2d0], eax */
  W32((uint32_t)(ebx + 0x2d0u), eax);
/* 72bcf9: call 0x6ca7c7 */
  esp -= 4; W32(esp, 0x72bcfeu); SPILL(); f_6ca7c7(); if (g_unwind) return; RELOAD();
/* 72bcfe: mov dl, byte ptr [ebp + 0x2e0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2e0u))) & 0xffu);
/* 72bd04: mov byte ptr [ebx + 0x2e0], dl */
  W8((uint32_t)(ebx + 0x2e0u), (edx & 0xffu));
/* 72bd0a: mov eax, dword ptr [ebp + 0x2e4] */
  eax = R32((uint32_t)(ebp + 0x2e4u));
/* 72bd10: mov dword ptr [ebx + 0x2e4], eax */
  W32((uint32_t)(ebx + 0x2e4u), eax);
/* 72bd16: mov ecx, dword ptr [ebp + 0x2e8] */
  ecx = R32((uint32_t)(ebp + 0x2e8u));
/* 72bd1c: mov dword ptr [ebx + 0x2e8], ecx */
  W32((uint32_t)(ebx + 0x2e8u), ecx);
/* 72bd22: mov edx, dword ptr [ebp + 0x2ec] */
  edx = R32((uint32_t)(ebp + 0x2ecu));
/* 72bd28: mov dword ptr [ebx + 0x2ec], edx */
  W32((uint32_t)(ebx + 0x2ecu), edx);
/* 72bd2e: mov eax, dword ptr [ebp + 0x2f0] */
  eax = R32((uint32_t)(ebp + 0x2f0u));
/* 72bd34: mov dword ptr [ebx + 0x2f0], eax */
  W32((uint32_t)(ebx + 0x2f0u), eax);
/* 72bd3a: mov cl, byte ptr [ebp + 0x2f4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2f4u))) & 0xffu);
/* 72bd40: mov byte ptr [ebx + 0x2f4], cl */
  W8((uint32_t)(ebx + 0x2f4u), (ecx & 0xffu));
/* 72bd46: mov edx, dword ptr [ebp + 0x2f8] */
  edx = R32((uint32_t)(ebp + 0x2f8u));
/* 72bd4c: mov dword ptr [ebx + 0x2f8], edx */
  W32((uint32_t)(ebx + 0x2f8u), edx);
/* 72bd52: mov eax, dword ptr [ebp + 0x2fc] */
  eax = R32((uint32_t)(ebp + 0x2fcu));
/* 72bd58: mov esi, dword ptr [ebx + 0x310] */
  esi = R32((uint32_t)(ebx + 0x310u));
/* 72bd5e: mov dword ptr [ebx + 0x2fc], eax */
  W32((uint32_t)(ebx + 0x2fcu), eax);
/* 72bd64: mov ecx, dword ptr [ebp + 0x300] */
  ecx = R32((uint32_t)(ebp + 0x300u));
/* 72bd6a: mov dword ptr [ebx + 0x300], ecx */
  W32((uint32_t)(ebx + 0x300u), ecx);
/* 72bd70: mov edx, dword ptr [ebp + 0x304] */
  edx = R32((uint32_t)(ebp + 0x304u));
/* 72bd76: mov dword ptr [ebx + 0x304], edx */
  W32((uint32_t)(ebx + 0x304u), edx);
/* 72bd7c: mov eax, dword ptr [ebp + 0x308] */
  eax = R32((uint32_t)(ebp + 0x308u));
/* 72bd82: mov dword ptr [ebx + 0x308], eax */
  W32((uint32_t)(ebx + 0x308u), eax);
/* 72bd88: mov ecx, dword ptr [ebp + 0x30c] */
  ecx = R32((uint32_t)(ebp + 0x30cu));
/* 72bd8e: mov dword ptr [ebx + 0x30c], ecx */
  W32((uint32_t)(ebx + 0x30cu), ecx);
/* 72bd94: mov edx, dword ptr [ebp + 0x310] */
  edx = R32((uint32_t)(ebp + 0x310u));
/* 72bd9a: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72bd9c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72bd9f: mov eax, esi */
  eax = esi;
/* 72bda1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bda3: mov dword ptr [ebx + 0x310], eax */
  W32((uint32_t)(ebx + 0x310u), eax);
/* 72bda9: mov al, byte ptr [ebp + 0x314] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x314u))) & 0xffu);
/* 72bdaf: mov byte ptr [ebx + 0x314], al */
  W8((uint32_t)(ebx + 0x314u), (eax & 0xffu));
/* 72bdb5: mov ecx, dword ptr [ebp + 0x318] */
  ecx = R32((uint32_t)(ebp + 0x318u));
/* 72bdbb: mov dword ptr [ebx + 0x318], ecx */
  W32((uint32_t)(ebx + 0x318u), ecx);
/* 72bdc1: mov edx, dword ptr [ebp + 0x31c] */
  edx = R32((uint32_t)(ebp + 0x31cu));
/* 72bdc7: mov ecx, dword ptr [ebx + 0x324] */
  ecx = R32((uint32_t)(ebx + 0x324u));
/* 72bdcd: mov dword ptr [ebx + 0x31c], edx */
  W32((uint32_t)(ebx + 0x31cu), edx);
/* 72bdd3: mov eax, dword ptr [ebp + 0x320] */
  eax = R32((uint32_t)(ebp + 0x320u));
/* 72bdd9: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 72bddf: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 72bde5: xor ecx, dword ptr [ebp + 0x324] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x324u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bdeb: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bdee: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72bdf0: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 72bdf6: mov eax, edx */
  eax = edx;
/* 72bdf8: mov edx, dword ptr [ebp + 0x324] */
  edx = R32((uint32_t)(ebp + 0x324u));
/* 72bdfe: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72be00: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72be03: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72be05: lea eax, [ebp + 0x328] */
  eax = (uint32_t)(ebp + 0x328u);
/* 72be0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72be0c: lea ecx, [ebx + 0x328] */
  ecx = (uint32_t)(ebx + 0x328u);
/* 72be12: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 72be18: call 0x6c4246 */
  esp -= 4; W32(esp, 0x72be1du); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 72be1d: mov ecx, dword ptr [ebp + 0x334] */
  ecx = R32((uint32_t)(ebp + 0x334u));
/* 72be23: mov dword ptr [ebx + 0x334], ecx */
  W32((uint32_t)(ebx + 0x334u), ecx);
/* 72be29: mov edx, dword ptr [ebp + 0x338] */
  edx = R32((uint32_t)(ebp + 0x338u));
/* 72be2f: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 72be35: mov dword ptr [ebx + 0x338], edx */
  W32((uint32_t)(ebx + 0x338u), edx);
/* 72be3b: mov eax, dword ptr [ebp + 0x33c] */
  eax = R32((uint32_t)(ebp + 0x33cu));
/* 72be41: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72be43: mov esi, ecx */
  esi = ecx;
/* 72be45: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72be48: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 72be4a: mov dword ptr [ebx + 0x33c], esi */
  W32((uint32_t)(ebx + 0x33cu), esi);
/* 72be50: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 72be56: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 72be5c: mov edx, dword ptr [ebp + 0x344] */
  edx = R32((uint32_t)(ebp + 0x344u));
/* 72be62: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 72be68: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 72be6e: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 72be74: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 72be7a: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 72be80: mov edx, dword ptr [ebp + 0x350] */
  edx = R32((uint32_t)(ebp + 0x350u));
/* 72be86: mov dword ptr [ebx + 0x350], edx */
  W32((uint32_t)(ebx + 0x350u), edx);
/* 72be8c: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 72be92: mov dword ptr [ebx + 0x354], eax */
  W32((uint32_t)(ebx + 0x354u), eax);
/* 72be98: mov ecx, dword ptr [ebp + 0x358] */
  ecx = R32((uint32_t)(ebp + 0x358u));
/* 72be9e: mov eax, dword ptr [ebx + 0x360] */
  eax = R32((uint32_t)(ebx + 0x360u));
/* 72bea4: mov dword ptr [ebx + 0x358], ecx */
  W32((uint32_t)(ebx + 0x358u), ecx);
/* 72beaa: mov edx, dword ptr [ebp + 0x35c] */
  edx = R32((uint32_t)(ebp + 0x35cu));
/* 72beb0: mov edi, dword ptr [ebx + 0x360] */
  edi = R32((uint32_t)(ebx + 0x360u));
/* 72beb6: mov dword ptr [ebx + 0x35c], edx */
  W32((uint32_t)(ebx + 0x35cu), edx);
/* 72bebc: xor eax, dword ptr [ebp + 0x360] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x360u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bec2: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72bec5: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 72bec7: mov dword ptr [ebx + 0x360], edi */
  W32((uint32_t)(ebx + 0x360u), edi);
/* 72becd: mov ecx, dword ptr [ebp + 0x360] */
  ecx = R32((uint32_t)(ebp + 0x360u));
/* 72bed3: mov eax, edi */
  eax = edi;
/* 72bed5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bed7: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72beda: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bedc: mov dword ptr [ebx + 0x360], ecx */
  W32((uint32_t)(ebx + 0x360u), ecx);
/* 72bee2: mov edx, dword ptr [ebp + 0x364] */
  edx = R32((uint32_t)(ebp + 0x364u));
/* 72bee8: mov dword ptr [ebx + 0x364], edx */
  W32((uint32_t)(ebx + 0x364u), edx);
/* 72beee: mov eax, dword ptr [ebp + 0x368] */
  eax = R32((uint32_t)(ebp + 0x368u));
/* 72bef4: mov dword ptr [ebx + 0x368], eax */
  W32((uint32_t)(ebx + 0x368u), eax);
/* 72befa: mov ecx, dword ptr [ebp + 0x36c] */
  ecx = R32((uint32_t)(ebp + 0x36cu));
/* 72bf00: mov dword ptr [ebx + 0x36c], ecx */
  W32((uint32_t)(ebx + 0x36cu), ecx);
/* 72bf06: lea esi, [ebp + 0x370] */
  esi = (uint32_t)(ebp + 0x370u);
/* 72bf0c: lea edi, [ebx + 0x370] */
  edi = (uint32_t)(ebx + 0x370u);
/* 72bf12: mov ecx, 6 */
  ecx = 0x6u;
/* 72bf17: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bf19: mov edx, dword ptr [ebp + 0x388] */
  edx = R32((uint32_t)(ebp + 0x388u));
/* 72bf1f: mov dword ptr [ebx + 0x388], edx */
  W32((uint32_t)(ebx + 0x388u), edx);
/* 72bf25: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 72bf2b: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 72bf31: lea ecx, [ebp + 0x390] */
  ecx = (uint32_t)(ebp + 0x390u);
/* 72bf37: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 72bf39: lea edx, [ebx + 0x390] */
  edx = (uint32_t)(ebx + 0x390u);
/* 72bf3f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72bf41: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 72bf44: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 72bf47: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 72bf4a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72bf4d: lea esi, [ebp + 0x39c] */
  esi = (uint32_t)(ebp + 0x39cu);
/* 72bf53: lea edi, [ebx + 0x39c] */
  edi = (uint32_t)(ebx + 0x39cu);
/* 72bf59: mov ecx, 6 */
  ecx = 0x6u;
/* 72bf5e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bf60: mov edx, dword ptr [ebp + 0x3b4] */
  edx = R32((uint32_t)(ebp + 0x3b4u));
/* 72bf66: mov dword ptr [ebx + 0x3b4], edx */
  W32((uint32_t)(ebx + 0x3b4u), edx);
/* 72bf6c: lea esi, [ebp + 0x3b8] */
  esi = (uint32_t)(ebp + 0x3b8u);
/* 72bf72: lea edi, [ebx + 0x3b8] */
  edi = (uint32_t)(ebx + 0x3b8u);
/* 72bf78: mov ecx, 6 */
  ecx = 0x6u;
/* 72bf7d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72bf7f: mov al, byte ptr [ebp + 0x3d0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3d0u))) & 0xffu);
/* 72bf85: mov esi, dword ptr [ebx + 0x3d4] */
  esi = R32((uint32_t)(ebx + 0x3d4u));
/* 72bf8b: mov byte ptr [ebx + 0x3d0], al */
  W8((uint32_t)(ebx + 0x3d0u), (eax & 0xffu));
/* 72bf91: mov ecx, dword ptr [ebp + 0x3d4] */
  ecx = R32((uint32_t)(ebp + 0x3d4u));
/* 72bf97: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bf99: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bf9c: mov eax, esi */
  eax = esi;
/* 72bf9e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bfa0: lea edx, [ebp + 0x3d8] */
  edx = (uint32_t)(ebp + 0x3d8u);
/* 72bfa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72bfa7: lea ecx, [ebx + 0x3d8] */
  ecx = (uint32_t)(ebx + 0x3d8u);
/* 72bfad: mov dword ptr [ebx + 0x3d4], eax */
  W32((uint32_t)(ebx + 0x3d4u), eax);
/* 72bfb3: call 0x6c498f */
  esp -= 4; W32(esp, 0x72bfb8u); SPILL(); f_6c498f(); if (g_unwind) return; RELOAD();
/* 72bfb8: mov eax, dword ptr [ebp + 0x3e4] */
  eax = R32((uint32_t)(ebp + 0x3e4u));
/* 72bfbe: mov dword ptr [ebx + 0x3e4], eax */
  W32((uint32_t)(ebx + 0x3e4u), eax);
/* 72bfc4: mov ecx, dword ptr [ebp + 0x3e8] */
  ecx = R32((uint32_t)(ebp + 0x3e8u));
/* 72bfca: mov dword ptr [ebx + 0x3e8], ecx */
  W32((uint32_t)(ebx + 0x3e8u), ecx);
/* 72bfd0: mov edx, dword ptr [ebp + 0x3ec] */
  edx = R32((uint32_t)(ebp + 0x3ecu));
/* 72bfd6: mov dword ptr [ebx + 0x3ec], edx */
  W32((uint32_t)(ebx + 0x3ecu), edx);
/* 72bfdc: mov eax, dword ptr [ebp + 0x3f0] */
  eax = R32((uint32_t)(ebp + 0x3f0u));
/* 72bfe2: mov dword ptr [ebx + 0x3f0], eax */
  W32((uint32_t)(ebx + 0x3f0u), eax);
/* 72bfe8: mov ecx, dword ptr [ebx + 0x3f4] */
  ecx = R32((uint32_t)(ebx + 0x3f4u));
/* 72bfee: xor ecx, dword ptr [ebp + 0x3f4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x3f4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72bff4: mov eax, dword ptr [ebx + 0x3f4] */
  eax = R32((uint32_t)(ebx + 0x3f4u));
/* 72bffa: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72bffd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72bfff: mov dword ptr [ebx + 0x3f4], eax */
  W32((uint32_t)(ebx + 0x3f4u), eax);
/* 72c005: mov edx, dword ptr [ebp + 0x3f4] */
  edx = R32((uint32_t)(ebp + 0x3f4u));
/* 72c00b: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72c00d: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72c010: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72c012: mov dword ptr [ebx + 0x3f4], edx */
  W32((uint32_t)(ebx + 0x3f4u), edx);
/* 72c018: mov eax, dword ptr [ebp + 0x3f8] */
  eax = R32((uint32_t)(ebp + 0x3f8u));
/* 72c01e: lea ecx, [ebp + 0x3fc] */
  ecx = (uint32_t)(ebp + 0x3fcu);
/* 72c024: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72c025: lea ecx, [ebx + 0x3fc] */
  ecx = (uint32_t)(ebx + 0x3fcu);
/* 72c02b: mov dword ptr [ebx + 0x3f8], eax */
  W32((uint32_t)(ebx + 0x3f8u), eax);
/* 72c031: call 0x6c42a5 */
  esp -= 4; W32(esp, 0x72c036u); SPILL(); f_6c42a5(); if (g_unwind) return; RELOAD();
/* 72c036: mov edx, dword ptr [ebp + 0x408] */
  edx = R32((uint32_t)(ebp + 0x408u));
/* 72c03c: mov dword ptr [ebx + 0x408], edx */
  W32((uint32_t)(ebx + 0x408u), edx);
/* 72c042: mov eax, dword ptr [ebp + 0x40c] */
  eax = R32((uint32_t)(ebp + 0x40cu));
/* 72c048: mov dword ptr [ebx + 0x40c], eax */
  W32((uint32_t)(ebx + 0x40cu), eax);
/* 72c04e: mov ecx, dword ptr [ebp + 0x410] */
  ecx = R32((uint32_t)(ebp + 0x410u));
/* 72c054: mov dword ptr [ebx + 0x410], ecx */
  W32((uint32_t)(ebx + 0x410u), ecx);
/* 72c05a: lea esi, [ebp + 0x414] */
  esi = (uint32_t)(ebp + 0x414u);
/* 72c060: lea edi, [ebx + 0x414] */
  edi = (uint32_t)(ebx + 0x414u);
/* 72c066: mov ecx, 7 */
  ecx = 0x7u;
/* 72c06b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72c06d: lea edx, [ebp + 0x430] */
  edx = (uint32_t)(ebp + 0x430u);
/* 72c073: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72c075: lea eax, [ebx + 0x430] */
  eax = (uint32_t)(ebx + 0x430u);
/* 72c07b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72c07d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72c080: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72c083: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72c086: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72c089: mov eax, dword ptr [ebx + 0x43c] */
  eax = R32((uint32_t)(ebx + 0x43cu));
/* 72c08f: mov esi, dword ptr [ebp + 0x43c] */
  esi = R32((uint32_t)(ebp + 0x43cu));
/* 72c095: mov ecx, dword ptr [ebx + 0x43c] */
  ecx = R32((uint32_t)(ebx + 0x43cu));
/* 72c09b: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72c09d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72c0a0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72c0a2: mov dword ptr [ebx + 0x43c], ecx */
  W32((uint32_t)(ebx + 0x43cu), ecx);
/* 72c0a8: mov eax, dword ptr [ebp + 0x43c] */
  eax = R32((uint32_t)(ebp + 0x43cu));
/* 72c0ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72c0b0: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72c0b3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72c0b5: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 72c0bb: mov ecx, dword ptr [ebp + 0x43c] */
  ecx = R32((uint32_t)(ebp + 0x43cu));
/* 72c0c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72c0c3: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72c0c6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72c0c8: mov dword ptr [ebx + 0x43c], ecx */
  W32((uint32_t)(ebx + 0x43cu), ecx);
/* 72c0ce: mov edx, dword ptr [ebp + 0x440] */
  edx = R32((uint32_t)(ebp + 0x440u));
/* 72c0d4: mov dword ptr [ebx + 0x440], edx */
  W32((uint32_t)(ebx + 0x440u), edx);
/* 72c0da: mov eax, dword ptr [ebp + 0x444] */
  eax = R32((uint32_t)(ebp + 0x444u));
/* 72c0e0: mov dword ptr [ebx + 0x444], eax */
  W32((uint32_t)(ebx + 0x444u), eax);
/* 72c0e6: lea ecx, [ebp + 0x448] */
  ecx = (uint32_t)(ebp + 0x448u);
/* 72c0ec: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 72c0ee: lea edx, [ebx + 0x448] */
  edx = (uint32_t)(ebx + 0x448u);
/* 72c0f4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72c0f6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 72c0f9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 72c0fc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 72c0ff: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72c102: mov edx, dword ptr [ebp + 0x454] */
  edx = R32((uint32_t)(ebp + 0x454u));
/* 72c108: mov dword ptr [ebx + 0x454], edx */
  W32((uint32_t)(ebx + 0x454u), edx);
/* 72c10e: mov eax, dword ptr [ebp + 0x458] */
  eax = R32((uint32_t)(ebp + 0x458u));
/* 72c114: mov dword ptr [ebx + 0x458], eax */
  W32((uint32_t)(ebx + 0x458u), eax);
/* 72c11a: mov ecx, dword ptr [ebp + 0x45c] */
  ecx = R32((uint32_t)(ebp + 0x45cu));
/* 72c120: mov dword ptr [ebx + 0x45c], ecx */
  W32((uint32_t)(ebx + 0x45cu), ecx);
/* 72c126: mov edx, dword ptr [ebp + 0x460] */
  edx = R32((uint32_t)(ebp + 0x460u));
/* 72c12c: mov dword ptr [ebx + 0x460], edx */
  W32((uint32_t)(ebx + 0x460u), edx);
/* 72c132: mov eax, dword ptr [ebp + 0x464] */
  eax = R32((uint32_t)(ebp + 0x464u));
/* 72c138: mov dword ptr [ebx + 0x464], eax */
  W32((uint32_t)(ebx + 0x464u), eax);
/* 72c13e: mov ecx, dword ptr [ebp + 0x468] */
  ecx = R32((uint32_t)(ebp + 0x468u));
/* 72c144: mov dword ptr [ebx + 0x468], ecx */
  W32((uint32_t)(ebx + 0x468u), ecx);
/* 72c14a: mov edx, dword ptr [ebp + 0x46c] */
  edx = R32((uint32_t)(ebp + 0x46cu));
/* 72c150: mov dword ptr [ebx + 0x46c], edx */
  W32((uint32_t)(ebx + 0x46cu), edx);
/* 72c156: mov eax, dword ptr [ebp + 0x470] */
  eax = R32((uint32_t)(ebp + 0x470u));
/* 72c15c: mov dword ptr [ebx + 0x470], eax */
  W32((uint32_t)(ebx + 0x470u), eax);
/* 72c162: mov ecx, dword ptr [ebp + 0x474] */
  ecx = R32((uint32_t)(ebp + 0x474u));
/* 72c168: mov dword ptr [ebx + 0x474], ecx */
  W32((uint32_t)(ebx + 0x474u), ecx);
/* 72c16e: lea edx, [ebp + 0x478] */
  edx = (uint32_t)(ebp + 0x478u);
/* 72c174: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72c176: lea eax, [ebx + 0x478] */
  eax = (uint32_t)(ebx + 0x478u);
/* 72c17c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72c17e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72c181: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72c184: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72c187: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72c18a: lea eax, [ebp + 0x484] */
  eax = (uint32_t)(ebp + 0x484u);
/* 72c190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c191: lea ecx, [ebx + 0x484] */
  ecx = (uint32_t)(ebx + 0x484u);
/* 72c197: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x72c19cu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 72c19c: mov ecx, dword ptr [ebp + 0x490] */
  ecx = R32((uint32_t)(ebp + 0x490u));
/* 72c1a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72c1a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c1a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72c1a5: mov dword ptr [ebx + 0x490], ecx */
  W32((uint32_t)(ebx + 0x490u), ecx);
/* 72c1ab: mov eax, ebx */
  eax = ebx;
/* 72c1ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72c1ae: ret 4 */
  esp += 8; SPILL(); return;
}
