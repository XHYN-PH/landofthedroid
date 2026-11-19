#include "recomp.h"
#include "rec_mod.h"

void f_8fa607(void) {
  LOAD_REGS();
L_8fa607: /* 8fa607: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fa60a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fa60f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8fa612: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa613: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa616: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa61bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fa61b(); return;
}

void f_8fa61b(void) {
  LOAD_REGS();
L_8fa61b: /* 8fa61b: push 0xa1f74c */
  { uint32_t v = 0xa1f74cu; esp -= 4; W32(esp, v); }
/* 8fa620: push 0xaef924 */
  { uint32_t v = 0xaef924u; esp -= 4; W32(esp, v); }
/* 8fa625: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fa62bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fa62b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa62e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa632: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa637u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fa637: guest_badaddr(0x8fa637); return;
}

void f_8fa6b0(void) {
  LOAD_REGS();
L_8fa6b0: /* 8fa6b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fa6b1: mov ebp, esp */
  ebp = esp;
/* 8fa6b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fa6b5: push 0x9d9652 */
  { uint32_t v = 0x9d9652u; esp -= 4; W32(esp, v); }
/* 8fa6ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fa6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa6c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fa6c8: sub esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa6ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa6d0: mov ebx, ecx */
  ebx = ecx;
/* 8fa6d2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8fa6d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa6d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fa6d8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8fa6db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa6e2: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x8fa6e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa6e5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fa6e8: mov ecx, edi */
  ecx = edi;
/* 8fa6ea: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa6f0u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa6f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa6f2: je 0x8fa6fe */
  if (zf) goto L_8fa6fe;
L_8fa6f4: /* 8fa6f4: push 0xaefc30 */
  { uint32_t v = 0xaefc30u; esp -= 4; W32(esp, v); }
/* 8fa6f9: jmp 0x8fa7f4 */
  goto L_8fa7f4;
L_8fa6fe: /* 8fa6fe: mov eax, dword ptr [ebx + 0x68] */
  eax = R32((uint32_t)(ebx + 0x68u));
/* 8fa701: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8fa704: mov esi, dword ptr [ebx + 0xea8] */
  esi = R32((uint32_t)(ebx + 0xea8u));
/* 8fa70a: mov dword ptr [ebx + 0xf8], ecx */
  W32((uint32_t)(ebx + 0xf8u), ecx);
/* 8fa710: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 8fa713: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fa718: mov ecx, edi */
  ecx = edi;
/* 8fa71a: mov dword ptr [ebx + 0xfc], edx */
  W32((uint32_t)(ebx + 0xfcu), edx);
/* 8fa720: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8fa726u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8fa726: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa728: sub eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa72d: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa732: lea esi, [eax + esi - 0x2000] */
  esi = (uint32_t)(eax + esi + 0xffffe000u);
/* 8fa739: mov eax, dword ptr [ebx + 0xea8] */
  eax = R32((uint32_t)(ebx + 0xea8u));
/* 8fa73f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa741: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8fa744: jle 0x8fa761 */
  if ((zf || sf != of)) goto L_8fa761;
L_8fa746: /* 8fa746: mov ecx, esi */
  ecx = esi;
/* 8fa748: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8fa74a: mov eax, dword ptr [ebx + 0x200] */
  eax = R32((uint32_t)(ebx + 0x200u));
/* 8fa750: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8fa751: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8fa753: mov dword ptr [ebx + 0x200], eax */
  W32((uint32_t)(ebx + 0x200u), eax);
/* 8fa759: mov dword ptr [ebx + 0xea8], esi */
  W32((uint32_t)(ebx + 0xea8u), esi);
/* 8fa75f: jmp 0x8fa767 */
  goto L_8fa767;
L_8fa761: /* 8fa761: inc dword ptr [ebx + 0x220] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x220u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x220u), r);
  }
L_8fa767: /* 8fa767: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8fa769: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa76b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa76c: mov ecx, ebx */
  ecx = ebx;
/* 8fa76e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8fa774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fa774: /* 8fa774: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8fa776: mov ecx, edi */
  ecx = edi;
/* 8fa778: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x8fa77bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa77b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa77d: jne 0x8fa806 */
  if (!zf) goto L_8fa806;
L_8fa783: /* 8fa783: cmp dword ptr [ebx + 0x6c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x6cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa787: je 0x8fa806 */
  if (zf) goto L_8fa806;
L_8fa789: /* 8fa789: mov ecx, edi */
  ecx = edi;
/* 8fa78b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa791u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa791: mov ecx, edi */
  ecx = edi;
/* 8fa793: mov ebx, eax */
  ebx = eax;
/* 8fa795: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8fa79bu); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8fa79b: mov ecx, edi */
  ecx = edi;
/* 8fa79d: movzx esi, al */
  esi = (uint32_t)((eax & 0xffu));
/* 8fa7a0: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7a6u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7a8: je 0x8fa7b1 */
  if (zf) goto L_8fa7b1;
L_8fa7aa: /* 8fa7aa: push 0xaefc54 */
  { uint32_t v = 0xaefc54u; esp -= 4; W32(esp, v); }
/* 8fa7af: jmp 0x8fa7f4 */
  goto L_8fa7f4;
L_8fa7b1: /* 8fa7b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7b3: je 0x8fa9e5 */
  if (zf) goto L_8fa9e5;
L_8fa7b9: /* 8fa7b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa7bc: mov esi, dword ptr [eax + 0xeb0] */
  esi = R32((uint32_t)(eax + 0xeb0u));
/* 8fa7c2: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fa7c7: mov ecx, edi */
  ecx = edi;
/* 8fa7c9: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8fa7cfu); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8fa7cf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa7d2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d4: sub eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d9: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa7de: lea edi, [eax + esi - 0x2000] */
  edi = (uint32_t)(eax + esi + 0xffffe000u);
/* 8fa7e5: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7ebu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7ed: je 0x8fa819 */
  if (zf) goto L_8fa819;
L_8fa7ef: /* 8fa7ef: push 0xaefc84 */
  { uint32_t v = 0xaefc84u; esp -= 4; W32(esp, v); }
L_8fa7f4: /* 8fa7f4: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fa7fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa7fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fa7fd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fa803u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fa803: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa806: /* 8fa806: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa809: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa810: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa811: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa812: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa813: mov esp, ebp */
  esp = ebp;
/* 8fa815: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa816: ret 4 */
  esp += 8; SPILL(); return;
L_8fa819: /* 8fa819: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa81c: mov eax, dword ptr [ecx + 0xeb0] */
  eax = R32((uint32_t)(ecx + 0xeb0u));
/* 8fa822: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa824: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fa828: jle 0x8fa8c9 */
  if ((zf || sf != of)) goto L_8fa8c9;
L_8fa82e: /* 8fa82e: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_8fa831: /* 8fa831: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa833: jge 0x8fa8c3 */
  if ((sf == of)) goto L_8fa8c3;
L_8fa839: /* 8fa839: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa83c: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa842u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa842: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa844: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa847: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa84a: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa84f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa851: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa854: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa85a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa85d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa85e: push 0xaefca8 */
  { uint32_t v = 0xaefca8u; esp -= 4; W32(esp, v); }
/* 8fa863: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa869: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa86fu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa86f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa872: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa875: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa876: call 0x6cb587 */
  esp -= 4; W32(esp, 0x8fa87bu); SPILL(); f_6cb587(); if (g_unwind) return; RELOAD();
/* 8fa87b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa87e: mov ecx, dword ptr [eax + 0x204] */
  ecx = R32((uint32_t)(eax + 0x204u));
/* 8fa884: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fa885: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8fa886: mov dword ptr [eax + 0x204], ecx */
  W32((uint32_t)(eax + 0x204u), ecx);
/* 8fa88c: mov ecx, eax */
  ecx = eax;
/* 8fa88e: jmp 0x8fa831 */
  goto L_8fa831;
L_8fa8c3: /* 8fa8c3: mov dword ptr [ecx + 0xeb0], edi */
  W32((uint32_t)(ecx + 0xeb0u), edi);
L_8fa8c9: /* 8fa8c9: mov eax, edi */
  eax = edi;
/* 8fa8cb: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa8d0: cmp dword ptr [ecx + eax*4 + 0xaa8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xaa8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa8d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa8de: jne 0x8fa914 */
  if (!zf) goto L_8fa914;
L_8fa8e0: /* 8fa8e0: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8fa8e3: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 8fa8e6: fsub qword ptr [ecx + eax*8 + 0x2a8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + eax*8 + 0x2a8u)));
/* 8fa8ed: mov eax, dword ptr [ecx + 0x228] */
  eax = R32((uint32_t)(ecx + 0x228u));
/* 8fa8f3: fld qword ptr [ecx + 0x238] */
  { double v = F64((uint32_t)(ecx + 0x238u)); FPUSH(v); }
/* 8fa8f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8fa8fa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 8fa900: mov dword ptr [ecx + 0x228], eax */
  W32((uint32_t)(ecx + 0x228u), eax);
/* 8fa906: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8fa908: fadd dword ptr [ecx + 0x1f8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1f8u)));
/* 8fa90e: fstp dword ptr [ecx + 0x1f8] */
  WF32((uint32_t)(ecx + 0x1f8u), ST0); FPOP();
L_8fa914: /* 8fa914: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa917: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fa91b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa921u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa921: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa923: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa926: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa929: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa92e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa930: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa933: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa939: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa93c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa93d: push 0xaefcf4 */
  { uint32_t v = 0xaefcf4u; esp -= 4; W32(esp, v); }
/* 8fa942: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa948: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa94eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa94e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa951: mov eax, dword ptr [edx + 0x3ec4] */
  eax = R32((uint32_t)(edx + 0x3ec4u));
/* 8fa957: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa95a: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 8fa95d: mov ebx, 1 */
  ebx = 0x1u;
L_8fa962: /* 8fa962: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fa964: jl 0x8fa9a0 */
  if ((sf != of)) goto L_8fa9a0;
L_8fa966: /* 8fa966: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa969: mov ecx, dword ptr [eax + 0x3ec0] */
  ecx = R32((uint32_t)(eax + 0x3ec0u));
/* 8fa96f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8fa972: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
L_8fa975: /* 8fa975: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa977: je 0x8fa990 */
  if (zf) goto L_8fa990;
L_8fa979: /* 8fa979: cmp dword ptr [eax + 0x74], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x74u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa97c: jne 0x8fa98b */
  if (!zf) goto L_8fa98b;
L_8fa97e: /* 8fa97e: mov dl, byte ptr [eax + 0x78] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x78u))) & 0xffu);
/* 8fa981: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa983: mov dword ptr [eax + 0x64], ebx */
  W32((uint32_t)(eax + 0x64u), ebx);
/* 8fa986: je 0x8fa98b */
  if (zf) goto L_8fa98b;
L_8fa988: /* 8fa988: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa98b: /* 8fa98b: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8fa98e: jmp 0x8fa975 */
  goto L_8fa975;
L_8fa990: /* 8fa990: cmp dword ptr [ecx + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa993: jne 0x8fa998 */
  if (!zf) goto L_8fa998;
L_8fa995: /* 8fa995: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa998: /* 8fa998: call 0x6c913d */
  esp -= 4; W32(esp, 0x8fa99du); SPILL(); f_6c913d(); if (g_unwind) return; RELOAD();
/* 8fa99d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8fa99e: jmp 0x8fa962 */
  goto L_8fa962;
L_8fa9a0: /* 8fa9a0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fa9a3: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa9ad: jmp 0x8fa774 */
  goto L_8fa774;
L_8fa9e5: /* 8fa9e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa9e9: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fa9ef: call 0x6c9e12 */
  esp -= 4; W32(esp, 0x8fa9f4u); SPILL(); f_6c9e12(); if (g_unwind) return; RELOAD();
/* 8fa9f4: mov ecx, edi */
  ecx = edi;
/* 8fa9f6: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8fa9fa: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faa00u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faa00: mov esi, dword ptr [0xcfacb4] */
  esi = R32((uint32_t)(0xcfacb4u));
/* 8faa06: mov ecx, edi */
  ecx = edi;
/* 8faa08: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8faa0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa0f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faa12: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8faa15: je 0x8faa27 */
  if (zf) goto L_8faa27;
L_8faa17: /* 8faa17: mov ecx, edi */
  ecx = edi;
/* 8faa19: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa1b: mov ecx, edi */
  ecx = edi;
/* 8faa1d: mov byte ptr [ebp - 0x44], al */
  W8((uint32_t)(ebp + 0xffffffbcu), (eax & 0xffu));
/* 8faa20: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa22: mov byte ptr [ebp - 0x43], al */
  W8((uint32_t)(ebp + 0xffffffbdu), (eax & 0xffu));
/* 8faa25: jmp 0x8faa2f */
  goto L_8faa2f;
L_8faa27: /* 8faa27: mov byte ptr [ebp - 0x44], 0 */
  W8((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8faa2b: mov byte ptr [ebp - 0x43], 0 */
  W8((uint32_t)(ebp + 0xffffffbdu), 0x0u);
L_8faa2f: /* 8faa2f: mov ecx, edi */
  ecx = edi;
/* 8faa31: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa33: mov ebx, dword ptr [0xcfacbc] */
  ebx = R32((uint32_t)(0xcfacbcu));
/* 8faa39: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 8faa3e: mov ecx, edi */
  ecx = edi;
/* 8faa40: mov byte ptr [ebp - 0x42], al */
  W8((uint32_t)(ebp + 0xffffffbeu), (eax & 0xffu));
/* 8faa43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa45: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa48: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa4a: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8faa4d: je 0x8faa8f */
  if (zf) goto L_8faa8f;
L_8faa4f: /* 8faa4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faa52: mov esi, dword ptr [ecx + eax*4 + 0x2eac] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x2eacu));
/* 8faa59: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 8faa5e: mov ecx, edi */
  ecx = edi;
/* 8faa60: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa62: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa64: sub eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa69: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8faa6e: lea edx, [eax + esi - 0x200] */
  edx = (uint32_t)(eax + esi + 0xfffffe00u);
/* 8faa75: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa78: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa7a: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8faa7d: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa7f: /* 8faa7f: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faa82: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa84: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa86: /* 8faa86: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8faa8d: jmp 0x8faaa1 */
  goto L_8faaa1;
L_8faa8f: /* 8faa8f: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8faa96: jmp 0x8faa7f */
  goto L_8faa7f;
L_8faa98: /* 8faa98: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8faa9a: mov ecx, edi */
  ecx = edi;
/* 8faa9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa9e: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_8faaa1: /* 8faaa1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faaa4: mov ecx, dword ptr [eax + 0xbc] */
  ecx = R32((uint32_t)(eax + 0xbcu));
/* 8faaaa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8faaad: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8faab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8faab1: mov ecx, ebx */
  ecx = ebx;
/* 8faab3: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8faab9u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8faab9: mov ecx, ebx */
  ecx = ebx;
/* 8faabb: mov edi, eax */
  edi = eax;
/* 8faabd: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faac3u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faac3: mov ecx, ebx */
  ecx = ebx;
/* 8faac5: mov esi, eax */
  esi = eax;
/* 8faac7: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8faacdu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8faacd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faacf: je 0x8fab0b */
  if (zf) goto L_8fab0b;
L_8faad1: /* 8faad1: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8faad7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8faad9: push 0xaefd30 */
  { uint32_t v = 0xaefd30u; esp -= 4; W32(esp, v); }
/* 8faade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faadf: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8faae5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8faae5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faae8: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faaee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faaf2: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faaf8u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faaf8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8faafb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab05: mov esp, ebp */
  esp = ebp;
/* 8fab07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab08: ret 4 */
  esp += 8; SPILL(); return;
L_8fab0b: /* 8fab0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fab0d: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab13: call dword ptr [0xcfaccc] */
  esp -= 4; W32(esp, 0x8fab19u); SPILL(); f_4e21d0(); if (g_unwind) return; /* Core!?SetData@FBitReader@@QAEXAAU1@H@Z */ RELOAD();
/* 8fab19: mov ecx, ebx */
  ecx = ebx;
/* 8fab1b: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fab21u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fab21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab23: mov ecx, ebx */
  ecx = ebx;
/* 8fab25: je 0x8fab6e */
  if (zf) goto L_8fab6e;
L_8fab27: /* 8fab27: call dword ptr [0xcfacc8] */
  esp -= 4; W32(esp, 0x8fab2du); SPILL(); f_4e1ff0(); if (g_unwind) return; /* Core!?GetNumBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab2d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab30: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fab36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fab39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fab3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fab3c: push 0xaefd60 */
  { uint32_t v = 0xaefd60u; esp -= 4; W32(esp, v); }
/* 8fab41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab42: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fab48u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fab48: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fab4b: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab51: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fab55: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fab5bu); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fab5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fab5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab68: mov esp, ebp */
  esp = ebp;
/* 8fab6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab6b: ret 4 */
  esp += 8; SPILL(); return;
L_8fab6e: /* 8fab6e: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fab71: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab73: je 0x8fabcb */
  if (zf) goto L_8fabcb;
L_8fab75: /* 8fab75: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fab7bu); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab7b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab7e: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8fab81: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fab83: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fab89: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fab8c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fab8f: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fab94: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fab97: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fab99: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fab9f: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8faba2: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8faba5: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8faba9: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabac: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabb2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fabb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabb6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fabb9: push 0xaefda8 */
  { uint32_t v = 0xaefda8u; esp -= 4; W32(esp, v); }
/* 8fabbe: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fabc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabc4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fabc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fabc6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fabc9: jmp 0x8fac1b */
  goto L_8fac1b;
L_8fabcb: /* 8fabcb: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fabd1u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fabd1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fabd4: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fabd7: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fabdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fabdf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fabe2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabe5: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fabea: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fabed: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fabef: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabf7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8fabfa: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8fabfe: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fac01: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fac07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fac0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fac0b: push 0xaefe20 */
  { uint32_t v = 0xaefe20u; esp -= 4; W32(esp, v); }
/* 8fac10: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fac16: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fac1b: /* 8fac1b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac1e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fac21: mov ecx, dword ptr [edi + eax*4 + 0xeb4] */
  ecx = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac2a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8fac31: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac33: /* 8fac33: mov ecx, dword ptr [edi + 0xeb4] */
  ecx = R32((uint32_t)(edi + 0xeb4u));
/* 8fac39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3b: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac3d: /* 8fac3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3f: jne 0x8fac47 */
  if (!zf) goto L_8fac47;
L_8fac41: /* 8fac41: cmp dword ptr [ebp - 0x4c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fac45: je 0x8fac61 */
  if (zf) goto L_8fac61;
L_8fac47: /* 8fac47: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fac4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fac4f: push 0xaefe88 */
  { uint32_t v = 0xaefe88u; esp -= 4; W32(esp, v); }
/* 8fac54: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac5a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac5c: jmp 0x8fad15 */
  goto L_8fad15;
L_8fac61: /* 8fac61: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fac64: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac66: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac69: mov esi, dword ptr [edi + eax*4 + 0xeb4] */
  esi = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac70: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8fac74: je 0x8fac8a */
  if (zf) goto L_8fac8a;
L_8fac76: /* 8fac76: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8fac7d: cmp dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fac80: jg 0x8face1 */
  if ((!zf && sf == of)) goto L_8face1;
L_8fac82: /* 8fac82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac83: push 0xaefec8 */
  { uint32_t v = 0xaefec8u; esp -= 4; W32(esp, v); }
/* 8fac88: jmp 0x8facaf */
  goto L_8facaf;
L_8fac8a: /* 8fac8a: mov cl, byte ptr [ebp - 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8fac8d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac8f: je 0x8fac98 */
  if (zf) goto L_8fac98;
L_8fac91: /* 8fac91: mov cl, byte ptr [ebp - 0x43] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbdu))) & 0xffu);
/* 8fac94: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac96: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8fac98: /* 8fac98: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac9a: je 0x8faca2 */
  if (zf) goto L_8faca2;
L_8fac9c: /* 8fac9c: cmp dword ptr [esi + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8faca0: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8faca2: /* 8faca2: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8faca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8facaa: push 0xaeff30 */
  { uint32_t v = 0xaeff30u; esp -= 4; W32(esp, v); }
L_8facaf: /* 8facaf: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8facb5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8facb7: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8facbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8facbd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8facbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8facbf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facc2: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8facc8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faccc: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8facd2u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8facd2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8facd5: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8facd8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8facdc: jmp 0x8fa774 */
  goto L_8fa774;
L_8face1: /* 8face1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8face3: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8face9: /* 8face9: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faced: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8facf1: call 0x6c82ab */
  esp -= 4; W32(esp, 0x8facf6u); SPILL(); f_6c82ab(); if (g_unwind) return; RELOAD();
/* 8facf6: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facf9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8facfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8facff: jne 0x8fad3b */
  if (!zf) goto L_8fad3b;
L_8fad01: /* 8fad01: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fad07: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fad09: push 0xaeffb8 */
  { uint32_t v = 0xaeffb8u; esp -= 4; W32(esp, v); }
/* 8fad0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad0f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fad15u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
L_8fad15: /* 8fad15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad18: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fad1e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fad22: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fad28u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fad28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fad2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fad2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fad2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fad34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fad35: mov esp, ebp */
  esp = ebp;
/* 8fad37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fad38: ret 4 */
  esp += 8; SPILL(); return;
L_8fad3b: /* 8fad3b: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad3e: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fad43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fad45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad46: push 0xaf0008 */
  { uint32_t v = 0xaf0008u; esp -= 4; W32(esp, v); }
/* 8fad4b: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fad50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fad51: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fad53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad53: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad56: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8fad59: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fad5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad60: mov ecx, edi */
  ecx = edi;
/* 8fad62: call 0x6c74cd */
  esp -= 4; W32(esp, 0x8fad67u); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 8fad67: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8fad6a: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 8fad6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fad6f: mov esi, eax */
  esi = eax;
/* 8fad71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad72: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8fad75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fad77: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8fad7d: /* 8fad7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fad7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad80: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad86: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fad8a: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8fad8fu); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8fad8f: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad95: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8fad99: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fad9fu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fad9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fada1: je 0x8fadbb */
  if (zf) goto L_8fadbb;
L_8fada3: /* 8fada3: push 0x227 */
  { uint32_t v = 0x227u; esp -= 4; W32(esp, v); }
/* 8fada8: push 0xaf004c */
  { uint32_t v = 0xaf004cu; esp -= 4; W32(esp, v); }
/* 8fadad: push 0xaf0058 */
  { uint32_t v = 0xaf0058u; esp -= 4; W32(esp, v); }
/* 8fadb2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fadb8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fadbb: /* 8fadbb: mov al, byte ptr [ebp - 0xdf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff21u))) & 0xffu);
/* 8fadc1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fadc3: jne 0x8faddd */
  if (!zf) goto L_8faddd;
L_8fadc5: /* 8fadc5: push 0x228 */
  { uint32_t v = 0x228u; esp -= 4; W32(esp, v); }
/* 8fadca: push 0xaf0070 */
  { uint32_t v = 0xaf0070u; esp -= 4; W32(esp, v); }
/* 8fadcf: push 0xaf007c */
  { uint32_t v = 0xaf007cu; esp -= 4; W32(esp, v); }
/* 8fadd4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8faddau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8faddd: /* 8faddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8faddf: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 8fade5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fade6: mov ecx, esi */
  ecx = esi;
/* 8fade8: mov byte ptr [ebp - 0xde], 1 */
  W8((uint32_t)(ebp + 0xffffff22u), 0x1u);
/* 8fadef: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8fadf4u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8fadf4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8fadf6: mov ecx, edi */
  ecx = edi;
/* 8fadf8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8fadfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fadfe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae00: je 0x8fae0b */
  if (zf) goto L_8fae0b;
L_8fae02: /* 8fae02: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fae04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fae06: mov ecx, esi */
  ecx = esi;
/* 8fae08: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8fae0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fae0b: /* 8fae0b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fae0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae10: jne 0x8fae31 */
  if (!zf) goto L_8fae31;
L_8fae12: /* 8fae12: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fae18: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fae1a: push 0xaf0090 */
  { uint32_t v = 0xaf0090u; esp -= 4; W32(esp, v); }
/* 8fae1f: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fae24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fae25: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fae27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fae27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fae2a: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8fae31: /* 8fae31: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fae37: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fae3b: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8fae41u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8fae41: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fae47: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae4b: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fae51u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fae51: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fae54: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fae57: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae5b: jmp 0x8fa774 */
  goto L_8fa774;
L_8faec6: /* 8faec6: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faec9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faecb: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8faed2: je 0x8faee1 */
  if (zf) goto L_8faee1;
L_8faed4: /* 8faed4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faed7: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 8faede: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_8faee1: /* 8faee1: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 8faee7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faee8: mov ecx, esi */
  ecx = esi;
/* 8faeea: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faeee: call 0x6c1483 */
  esp -= 4; W32(esp, 0x8faef3u); SPILL(); f_6c1483(); if (g_unwind) return; RELOAD();
/* 8faef3: mov edx, dword ptr [edi + 0x210] */
  edx = R32((uint32_t)(edi + 0x210u));
/* 8faef9: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8faefc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8faefd: mov dword ptr [edi + 0x210], edx */
  W32((uint32_t)(edi + 0x210u), edx);
/* 8faf03: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8faf06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf08: jne 0x8faf64 */
  if (!zf) goto L_8faf64;
L_8faf0a: /* 8faf0a: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf10: call dword ptr [0xcfacc4] */
  esp -= 4; W32(esp, 0x8faf16u); SPILL(); f_4e3b16(); if (g_unwind) return; /* Core!?IsCriticalError@FArchive@@QAEHXZ */ RELOAD();
/* 8faf16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf18: je 0x8faf64 */
  if (zf) goto L_8faf64;
L_8faf1a: /* 8faf1a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8faf1c: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 8faf22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf23: mov ecx, edi */
  ecx = edi;
/* 8faf25: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8faf28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf28: mov ecx, eax */
  ecx = eax;
/* 8faf2a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8faf2e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8faf34u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8faf34: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8faf3a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8faf3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf3d: push 0xaf00d0 */
  { uint32_t v = 0xaf00d0u; esp -= 4; W32(esp, v); }
/* 8faf42: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8faf47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faf48: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faf4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faf4d: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 8faf53: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faf57: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8faf5du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8faf5d: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8faf64: /* 8faf64: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faf71: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faf77u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faf77: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8faf7a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faf7d: jmp 0x8fa774 */
  goto L_8fa774;
}

void f_8fa890(void) {
  LOAD_REGS();
L_8fa890: /* 8fa890: mov edx, dword ptr [ebp - 0xcc] */
  edx = R32((uint32_t)(ebp + 0xffffff34u));
/* 8fa896: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fa89b: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8fa89e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa89f: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8fa8a2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa8a7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fa8a7(); return;
}

void f_8fa8a7(void) {
  LOAD_REGS();
  goto L_8fa8a7;
L_8fa774: /* 8fa774: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8fa776: mov ecx, edi */
  ecx = edi;
/* 8fa778: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x8fa77bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa77b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa77d: jne 0x8fa806 */
  if (!zf) goto L_8fa806;
L_8fa783: /* 8fa783: cmp dword ptr [ebx + 0x6c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x6cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa787: je 0x8fa806 */
  if (zf) goto L_8fa806;
L_8fa789: /* 8fa789: mov ecx, edi */
  ecx = edi;
/* 8fa78b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa791u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa791: mov ecx, edi */
  ecx = edi;
/* 8fa793: mov ebx, eax */
  ebx = eax;
/* 8fa795: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8fa79bu); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8fa79b: mov ecx, edi */
  ecx = edi;
/* 8fa79d: movzx esi, al */
  esi = (uint32_t)((eax & 0xffu));
/* 8fa7a0: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7a6u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7a8: je 0x8fa7b1 */
  if (zf) goto L_8fa7b1;
L_8fa7aa: /* 8fa7aa: push 0xaefc54 */
  { uint32_t v = 0xaefc54u; esp -= 4; W32(esp, v); }
/* 8fa7af: jmp 0x8fa7f4 */
  goto L_8fa7f4;
L_8fa7b1: /* 8fa7b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7b3: je 0x8fa9e5 */
  if (zf) goto L_8fa9e5;
L_8fa7b9: /* 8fa7b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa7bc: mov esi, dword ptr [eax + 0xeb0] */
  esi = R32((uint32_t)(eax + 0xeb0u));
/* 8fa7c2: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fa7c7: mov ecx, edi */
  ecx = edi;
/* 8fa7c9: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8fa7cfu); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8fa7cf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa7d2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d4: sub eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d9: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa7de: lea edi, [eax + esi - 0x2000] */
  edi = (uint32_t)(eax + esi + 0xffffe000u);
/* 8fa7e5: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7ebu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7ed: je 0x8fa819 */
  if (zf) goto L_8fa819;
L_8fa7ef: /* 8fa7ef: push 0xaefc84 */
  { uint32_t v = 0xaefc84u; esp -= 4; W32(esp, v); }
L_8fa7f4: /* 8fa7f4: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fa7fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa7fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fa7fd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fa803u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fa803: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa806: /* 8fa806: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa809: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa810: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa811: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa812: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa813: mov esp, ebp */
  esp = ebp;
/* 8fa815: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa816: ret 4 */
  esp += 8; SPILL(); return;
L_8fa819: /* 8fa819: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa81c: mov eax, dword ptr [ecx + 0xeb0] */
  eax = R32((uint32_t)(ecx + 0xeb0u));
/* 8fa822: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa824: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fa828: jle 0x8fa8c9 */
  if ((zf || sf != of)) goto L_8fa8c9;
L_8fa82e: /* 8fa82e: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_8fa831: /* 8fa831: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa833: jge 0x8fa8c3 */
  if ((sf == of)) goto L_8fa8c3;
L_8fa839: /* 8fa839: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa83c: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa842u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa842: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa844: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa847: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa84a: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa84f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa851: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa854: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa85a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa85d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa85e: push 0xaefca8 */
  { uint32_t v = 0xaefca8u; esp -= 4; W32(esp, v); }
/* 8fa863: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa869: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa86fu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa86f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa872: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa875: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa876: call 0x6cb587 */
  esp -= 4; W32(esp, 0x8fa87bu); SPILL(); f_6cb587(); if (g_unwind) return; RELOAD();
/* 8fa87b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa87e: mov ecx, dword ptr [eax + 0x204] */
  ecx = R32((uint32_t)(eax + 0x204u));
/* 8fa884: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fa885: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8fa886: mov dword ptr [eax + 0x204], ecx */
  W32((uint32_t)(eax + 0x204u), ecx);
/* 8fa88c: mov ecx, eax */
  ecx = eax;
/* 8fa88e: jmp 0x8fa831 */
  goto L_8fa831;
L_8fa8a7: /* 8fa8a7: push 0xa1f8b8 */
  { uint32_t v = 0xa1f8b8u; esp -= 4; W32(esp, v); }
/* 8fa8ac: push 0xaefcec */
  { uint32_t v = 0xaefcecu; esp -= 4; W32(esp, v); }
/* 8fa8b1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fa8b7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fa8b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa8ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa8bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa8be: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa8c3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fa8c3: /* 8fa8c3: mov dword ptr [ecx + 0xeb0], edi */
  W32((uint32_t)(ecx + 0xeb0u), edi);
L_8fa8c9: /* 8fa8c9: mov eax, edi */
  eax = edi;
/* 8fa8cb: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa8d0: cmp dword ptr [ecx + eax*4 + 0xaa8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xaa8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa8d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa8de: jne 0x8fa914 */
  if (!zf) goto L_8fa914;
L_8fa8e0: /* 8fa8e0: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8fa8e3: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 8fa8e6: fsub qword ptr [ecx + eax*8 + 0x2a8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + eax*8 + 0x2a8u)));
/* 8fa8ed: mov eax, dword ptr [ecx + 0x228] */
  eax = R32((uint32_t)(ecx + 0x228u));
/* 8fa8f3: fld qword ptr [ecx + 0x238] */
  { double v = F64((uint32_t)(ecx + 0x238u)); FPUSH(v); }
/* 8fa8f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8fa8fa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 8fa900: mov dword ptr [ecx + 0x228], eax */
  W32((uint32_t)(ecx + 0x228u), eax);
/* 8fa906: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8fa908: fadd dword ptr [ecx + 0x1f8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1f8u)));
/* 8fa90e: fstp dword ptr [ecx + 0x1f8] */
  WF32((uint32_t)(ecx + 0x1f8u), ST0); FPOP();
L_8fa914: /* 8fa914: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa917: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fa91b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa921u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa921: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa923: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa926: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa929: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa92e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa930: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa933: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa939: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa93c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa93d: push 0xaefcf4 */
  { uint32_t v = 0xaefcf4u; esp -= 4; W32(esp, v); }
/* 8fa942: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa948: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa94eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa94e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa951: mov eax, dword ptr [edx + 0x3ec4] */
  eax = R32((uint32_t)(edx + 0x3ec4u));
/* 8fa957: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa95a: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 8fa95d: mov ebx, 1 */
  ebx = 0x1u;
L_8fa962: /* 8fa962: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fa964: jl 0x8fa9a0 */
  if ((sf != of)) goto L_8fa9a0;
L_8fa966: /* 8fa966: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa969: mov ecx, dword ptr [eax + 0x3ec0] */
  ecx = R32((uint32_t)(eax + 0x3ec0u));
/* 8fa96f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8fa972: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
L_8fa975: /* 8fa975: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa977: je 0x8fa990 */
  if (zf) goto L_8fa990;
L_8fa979: /* 8fa979: cmp dword ptr [eax + 0x74], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x74u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa97c: jne 0x8fa98b */
  if (!zf) goto L_8fa98b;
L_8fa97e: /* 8fa97e: mov dl, byte ptr [eax + 0x78] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x78u))) & 0xffu);
/* 8fa981: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa983: mov dword ptr [eax + 0x64], ebx */
  W32((uint32_t)(eax + 0x64u), ebx);
/* 8fa986: je 0x8fa98b */
  if (zf) goto L_8fa98b;
L_8fa988: /* 8fa988: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa98b: /* 8fa98b: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8fa98e: jmp 0x8fa975 */
  goto L_8fa975;
L_8fa990: /* 8fa990: cmp dword ptr [ecx + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa993: jne 0x8fa998 */
  if (!zf) goto L_8fa998;
L_8fa995: /* 8fa995: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa998: /* 8fa998: call 0x6c913d */
  esp -= 4; W32(esp, 0x8fa99du); SPILL(); f_6c913d(); if (g_unwind) return; RELOAD();
/* 8fa99d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8fa99e: jmp 0x8fa962 */
  goto L_8fa962;
L_8fa9a0: /* 8fa9a0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fa9a3: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa9ad: jmp 0x8fa774 */
  goto L_8fa774;
L_8fa9e5: /* 8fa9e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa9e9: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fa9ef: call 0x6c9e12 */
  esp -= 4; W32(esp, 0x8fa9f4u); SPILL(); f_6c9e12(); if (g_unwind) return; RELOAD();
/* 8fa9f4: mov ecx, edi */
  ecx = edi;
/* 8fa9f6: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8fa9fa: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faa00u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faa00: mov esi, dword ptr [0xcfacb4] */
  esi = R32((uint32_t)(0xcfacb4u));
/* 8faa06: mov ecx, edi */
  ecx = edi;
/* 8faa08: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8faa0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa0f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faa12: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8faa15: je 0x8faa27 */
  if (zf) goto L_8faa27;
L_8faa17: /* 8faa17: mov ecx, edi */
  ecx = edi;
/* 8faa19: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa1b: mov ecx, edi */
  ecx = edi;
/* 8faa1d: mov byte ptr [ebp - 0x44], al */
  W8((uint32_t)(ebp + 0xffffffbcu), (eax & 0xffu));
/* 8faa20: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa22: mov byte ptr [ebp - 0x43], al */
  W8((uint32_t)(ebp + 0xffffffbdu), (eax & 0xffu));
/* 8faa25: jmp 0x8faa2f */
  goto L_8faa2f;
L_8faa27: /* 8faa27: mov byte ptr [ebp - 0x44], 0 */
  W8((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8faa2b: mov byte ptr [ebp - 0x43], 0 */
  W8((uint32_t)(ebp + 0xffffffbdu), 0x0u);
L_8faa2f: /* 8faa2f: mov ecx, edi */
  ecx = edi;
/* 8faa31: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa33: mov ebx, dword ptr [0xcfacbc] */
  ebx = R32((uint32_t)(0xcfacbcu));
/* 8faa39: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 8faa3e: mov ecx, edi */
  ecx = edi;
/* 8faa40: mov byte ptr [ebp - 0x42], al */
  W8((uint32_t)(ebp + 0xffffffbeu), (eax & 0xffu));
/* 8faa43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa45: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa48: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa4a: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8faa4d: je 0x8faa8f */
  if (zf) goto L_8faa8f;
L_8faa4f: /* 8faa4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faa52: mov esi, dword ptr [ecx + eax*4 + 0x2eac] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x2eacu));
/* 8faa59: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 8faa5e: mov ecx, edi */
  ecx = edi;
/* 8faa60: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa62: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa64: sub eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa69: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8faa6e: lea edx, [eax + esi - 0x200] */
  edx = (uint32_t)(eax + esi + 0xfffffe00u);
/* 8faa75: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa78: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa7a: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8faa7d: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa7f: /* 8faa7f: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faa82: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa84: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa86: /* 8faa86: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8faa8d: jmp 0x8faaa1 */
  goto L_8faaa1;
L_8faa8f: /* 8faa8f: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8faa96: jmp 0x8faa7f */
  goto L_8faa7f;
L_8faa98: /* 8faa98: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8faa9a: mov ecx, edi */
  ecx = edi;
/* 8faa9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa9e: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_8faaa1: /* 8faaa1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faaa4: mov ecx, dword ptr [eax + 0xbc] */
  ecx = R32((uint32_t)(eax + 0xbcu));
/* 8faaaa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8faaad: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8faab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8faab1: mov ecx, ebx */
  ecx = ebx;
/* 8faab3: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8faab9u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8faab9: mov ecx, ebx */
  ecx = ebx;
/* 8faabb: mov edi, eax */
  edi = eax;
/* 8faabd: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faac3u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faac3: mov ecx, ebx */
  ecx = ebx;
/* 8faac5: mov esi, eax */
  esi = eax;
/* 8faac7: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8faacdu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8faacd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faacf: je 0x8fab0b */
  if (zf) goto L_8fab0b;
L_8faad1: /* 8faad1: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8faad7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8faad9: push 0xaefd30 */
  { uint32_t v = 0xaefd30u; esp -= 4; W32(esp, v); }
/* 8faade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faadf: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8faae5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8faae5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faae8: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faaee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faaf2: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faaf8u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faaf8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8faafb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab05: mov esp, ebp */
  esp = ebp;
/* 8fab07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab08: ret 4 */
  esp += 8; SPILL(); return;
L_8fab0b: /* 8fab0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fab0d: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab13: call dword ptr [0xcfaccc] */
  esp -= 4; W32(esp, 0x8fab19u); SPILL(); f_4e21d0(); if (g_unwind) return; /* Core!?SetData@FBitReader@@QAEXAAU1@H@Z */ RELOAD();
/* 8fab19: mov ecx, ebx */
  ecx = ebx;
/* 8fab1b: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fab21u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fab21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab23: mov ecx, ebx */
  ecx = ebx;
/* 8fab25: je 0x8fab6e */
  if (zf) goto L_8fab6e;
L_8fab27: /* 8fab27: call dword ptr [0xcfacc8] */
  esp -= 4; W32(esp, 0x8fab2du); SPILL(); f_4e1ff0(); if (g_unwind) return; /* Core!?GetNumBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab2d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab30: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fab36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fab39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fab3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fab3c: push 0xaefd60 */
  { uint32_t v = 0xaefd60u; esp -= 4; W32(esp, v); }
/* 8fab41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab42: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fab48u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fab48: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fab4b: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab51: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fab55: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fab5bu); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fab5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fab5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab68: mov esp, ebp */
  esp = ebp;
/* 8fab6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab6b: ret 4 */
  esp += 8; SPILL(); return;
L_8fab6e: /* 8fab6e: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fab71: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab73: je 0x8fabcb */
  if (zf) goto L_8fabcb;
L_8fab75: /* 8fab75: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fab7bu); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab7b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab7e: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8fab81: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fab83: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fab89: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fab8c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fab8f: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fab94: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fab97: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fab99: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fab9f: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8faba2: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8faba5: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8faba9: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabac: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabb2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fabb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabb6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fabb9: push 0xaefda8 */
  { uint32_t v = 0xaefda8u; esp -= 4; W32(esp, v); }
/* 8fabbe: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fabc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabc4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fabc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fabc6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fabc9: jmp 0x8fac1b */
  goto L_8fac1b;
L_8fabcb: /* 8fabcb: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fabd1u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fabd1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fabd4: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fabd7: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fabdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fabdf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fabe2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabe5: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fabea: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fabed: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fabef: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabf7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8fabfa: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8fabfe: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fac01: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fac07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fac0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fac0b: push 0xaefe20 */
  { uint32_t v = 0xaefe20u; esp -= 4; W32(esp, v); }
/* 8fac10: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fac16: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fac1b: /* 8fac1b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac1e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fac21: mov ecx, dword ptr [edi + eax*4 + 0xeb4] */
  ecx = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac2a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8fac31: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac33: /* 8fac33: mov ecx, dword ptr [edi + 0xeb4] */
  ecx = R32((uint32_t)(edi + 0xeb4u));
/* 8fac39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3b: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac3d: /* 8fac3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3f: jne 0x8fac47 */
  if (!zf) goto L_8fac47;
L_8fac41: /* 8fac41: cmp dword ptr [ebp - 0x4c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fac45: je 0x8fac61 */
  if (zf) goto L_8fac61;
L_8fac47: /* 8fac47: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fac4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fac4f: push 0xaefe88 */
  { uint32_t v = 0xaefe88u; esp -= 4; W32(esp, v); }
/* 8fac54: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac5a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac5c: jmp 0x8fad15 */
  goto L_8fad15;
L_8fac61: /* 8fac61: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fac64: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac66: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac69: mov esi, dword ptr [edi + eax*4 + 0xeb4] */
  esi = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac70: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8fac74: je 0x8fac8a */
  if (zf) goto L_8fac8a;
L_8fac76: /* 8fac76: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8fac7d: cmp dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fac80: jg 0x8face1 */
  if ((!zf && sf == of)) goto L_8face1;
L_8fac82: /* 8fac82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac83: push 0xaefec8 */
  { uint32_t v = 0xaefec8u; esp -= 4; W32(esp, v); }
/* 8fac88: jmp 0x8facaf */
  goto L_8facaf;
L_8fac8a: /* 8fac8a: mov cl, byte ptr [ebp - 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8fac8d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac8f: je 0x8fac98 */
  if (zf) goto L_8fac98;
L_8fac91: /* 8fac91: mov cl, byte ptr [ebp - 0x43] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbdu))) & 0xffu);
/* 8fac94: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac96: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8fac98: /* 8fac98: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac9a: je 0x8faca2 */
  if (zf) goto L_8faca2;
L_8fac9c: /* 8fac9c: cmp dword ptr [esi + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8faca0: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8faca2: /* 8faca2: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8faca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8facaa: push 0xaeff30 */
  { uint32_t v = 0xaeff30u; esp -= 4; W32(esp, v); }
L_8facaf: /* 8facaf: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8facb5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8facb7: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8facbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8facbd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8facbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8facbf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facc2: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8facc8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faccc: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8facd2u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8facd2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8facd5: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8facd8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8facdc: jmp 0x8fa774 */
  goto L_8fa774;
L_8face1: /* 8face1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8face3: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8face9: /* 8face9: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faced: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8facf1: call 0x6c82ab */
  esp -= 4; W32(esp, 0x8facf6u); SPILL(); f_6c82ab(); if (g_unwind) return; RELOAD();
/* 8facf6: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facf9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8facfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8facff: jne 0x8fad3b */
  if (!zf) goto L_8fad3b;
L_8fad01: /* 8fad01: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fad07: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fad09: push 0xaeffb8 */
  { uint32_t v = 0xaeffb8u; esp -= 4; W32(esp, v); }
/* 8fad0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad0f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fad15u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
L_8fad15: /* 8fad15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad18: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fad1e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fad22: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fad28u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fad28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fad2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fad2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fad2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fad34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fad35: mov esp, ebp */
  esp = ebp;
/* 8fad37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fad38: ret 4 */
  esp += 8; SPILL(); return;
L_8fad3b: /* 8fad3b: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad3e: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fad43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fad45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad46: push 0xaf0008 */
  { uint32_t v = 0xaf0008u; esp -= 4; W32(esp, v); }
/* 8fad4b: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fad50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fad51: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fad53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad53: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad56: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8fad59: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fad5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad60: mov ecx, edi */
  ecx = edi;
/* 8fad62: call 0x6c74cd */
  esp -= 4; W32(esp, 0x8fad67u); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 8fad67: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8fad6a: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 8fad6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fad6f: mov esi, eax */
  esi = eax;
/* 8fad71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad72: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8fad75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fad77: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8fad7d: /* 8fad7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fad7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad80: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad86: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fad8a: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8fad8fu); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8fad8f: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad95: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8fad99: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fad9fu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fad9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fada1: je 0x8fadbb */
  if (zf) goto L_8fadbb;
L_8fada3: /* 8fada3: push 0x227 */
  { uint32_t v = 0x227u; esp -= 4; W32(esp, v); }
/* 8fada8: push 0xaf004c */
  { uint32_t v = 0xaf004cu; esp -= 4; W32(esp, v); }
/* 8fadad: push 0xaf0058 */
  { uint32_t v = 0xaf0058u; esp -= 4; W32(esp, v); }
/* 8fadb2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fadb8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fadbb: /* 8fadbb: mov al, byte ptr [ebp - 0xdf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff21u))) & 0xffu);
/* 8fadc1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fadc3: jne 0x8faddd */
  if (!zf) goto L_8faddd;
L_8fadc5: /* 8fadc5: push 0x228 */
  { uint32_t v = 0x228u; esp -= 4; W32(esp, v); }
/* 8fadca: push 0xaf0070 */
  { uint32_t v = 0xaf0070u; esp -= 4; W32(esp, v); }
/* 8fadcf: push 0xaf007c */
  { uint32_t v = 0xaf007cu; esp -= 4; W32(esp, v); }
/* 8fadd4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8faddau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8faddd: /* 8faddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8faddf: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 8fade5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fade6: mov ecx, esi */
  ecx = esi;
/* 8fade8: mov byte ptr [ebp - 0xde], 1 */
  W8((uint32_t)(ebp + 0xffffff22u), 0x1u);
/* 8fadef: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8fadf4u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8fadf4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8fadf6: mov ecx, edi */
  ecx = edi;
/* 8fadf8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8fadfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fadfe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae00: je 0x8fae0b */
  if (zf) goto L_8fae0b;
L_8fae02: /* 8fae02: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fae04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fae06: mov ecx, esi */
  ecx = esi;
/* 8fae08: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8fae0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fae0b: /* 8fae0b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fae0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae10: jne 0x8fae31 */
  if (!zf) goto L_8fae31;
L_8fae12: /* 8fae12: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fae18: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fae1a: push 0xaf0090 */
  { uint32_t v = 0xaf0090u; esp -= 4; W32(esp, v); }
/* 8fae1f: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fae24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fae25: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fae27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fae27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fae2a: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8fae31: /* 8fae31: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fae37: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fae3b: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8fae41u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8fae41: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fae47: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae4b: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fae51u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fae51: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fae54: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fae57: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae5b: jmp 0x8fa774 */
  goto L_8fa774;
L_8faec6: /* 8faec6: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faec9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faecb: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8faed2: je 0x8faee1 */
  if (zf) goto L_8faee1;
L_8faed4: /* 8faed4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faed7: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 8faede: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_8faee1: /* 8faee1: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 8faee7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faee8: mov ecx, esi */
  ecx = esi;
/* 8faeea: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faeee: call 0x6c1483 */
  esp -= 4; W32(esp, 0x8faef3u); SPILL(); f_6c1483(); if (g_unwind) return; RELOAD();
/* 8faef3: mov edx, dword ptr [edi + 0x210] */
  edx = R32((uint32_t)(edi + 0x210u));
/* 8faef9: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8faefc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8faefd: mov dword ptr [edi + 0x210], edx */
  W32((uint32_t)(edi + 0x210u), edx);
/* 8faf03: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8faf06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf08: jne 0x8faf64 */
  if (!zf) goto L_8faf64;
L_8faf0a: /* 8faf0a: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf10: call dword ptr [0xcfacc4] */
  esp -= 4; W32(esp, 0x8faf16u); SPILL(); f_4e3b16(); if (g_unwind) return; /* Core!?IsCriticalError@FArchive@@QAEHXZ */ RELOAD();
/* 8faf16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf18: je 0x8faf64 */
  if (zf) goto L_8faf64;
L_8faf1a: /* 8faf1a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8faf1c: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 8faf22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf23: mov ecx, edi */
  ecx = edi;
/* 8faf25: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8faf28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf28: mov ecx, eax */
  ecx = eax;
/* 8faf2a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8faf2e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8faf34u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8faf34: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8faf3a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8faf3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf3d: push 0xaf00d0 */
  { uint32_t v = 0xaf00d0u; esp -= 4; W32(esp, v); }
/* 8faf42: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8faf47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faf48: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faf4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faf4d: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 8faf53: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faf57: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8faf5du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8faf5d: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8faf64: /* 8faf64: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faf71: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faf77u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faf77: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8faf7a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faf7d: jmp 0x8fa774 */
  goto L_8fa774;
}

void f_8fa9b2(void) {
  LOAD_REGS();
L_8fa9b2: /* 8fa9b2: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8fa9b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fa9bd: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8fa9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa9c1: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8fa9c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa9c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fa9c9(); return;
}

void f_8fa9c9(void) {
  LOAD_REGS();
  goto L_8fa9c9;
L_8fa774: /* 8fa774: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8fa776: mov ecx, edi */
  ecx = edi;
/* 8fa778: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x8fa77bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa77b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa77d: jne 0x8fa806 */
  if (!zf) goto L_8fa806;
L_8fa783: /* 8fa783: cmp dword ptr [ebx + 0x6c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x6cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa787: je 0x8fa806 */
  if (zf) goto L_8fa806;
L_8fa789: /* 8fa789: mov ecx, edi */
  ecx = edi;
/* 8fa78b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa791u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa791: mov ecx, edi */
  ecx = edi;
/* 8fa793: mov ebx, eax */
  ebx = eax;
/* 8fa795: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8fa79bu); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8fa79b: mov ecx, edi */
  ecx = edi;
/* 8fa79d: movzx esi, al */
  esi = (uint32_t)((eax & 0xffu));
/* 8fa7a0: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7a6u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7a8: je 0x8fa7b1 */
  if (zf) goto L_8fa7b1;
L_8fa7aa: /* 8fa7aa: push 0xaefc54 */
  { uint32_t v = 0xaefc54u; esp -= 4; W32(esp, v); }
/* 8fa7af: jmp 0x8fa7f4 */
  goto L_8fa7f4;
L_8fa7b1: /* 8fa7b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7b3: je 0x8fa9e5 */
  if (zf) goto L_8fa9e5;
L_8fa7b9: /* 8fa7b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa7bc: mov esi, dword ptr [eax + 0xeb0] */
  esi = R32((uint32_t)(eax + 0xeb0u));
/* 8fa7c2: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fa7c7: mov ecx, edi */
  ecx = edi;
/* 8fa7c9: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8fa7cfu); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8fa7cf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa7d2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d4: sub eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d9: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa7de: lea edi, [eax + esi - 0x2000] */
  edi = (uint32_t)(eax + esi + 0xffffe000u);
/* 8fa7e5: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7ebu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7ed: je 0x8fa819 */
  if (zf) goto L_8fa819;
L_8fa7ef: /* 8fa7ef: push 0xaefc84 */
  { uint32_t v = 0xaefc84u; esp -= 4; W32(esp, v); }
L_8fa7f4: /* 8fa7f4: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fa7fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa7fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fa7fd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fa803u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fa803: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa806: /* 8fa806: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa809: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa810: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa811: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa812: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa813: mov esp, ebp */
  esp = ebp;
/* 8fa815: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa816: ret 4 */
  esp += 8; SPILL(); return;
L_8fa819: /* 8fa819: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa81c: mov eax, dword ptr [ecx + 0xeb0] */
  eax = R32((uint32_t)(ecx + 0xeb0u));
/* 8fa822: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa824: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fa828: jle 0x8fa8c9 */
  if ((zf || sf != of)) goto L_8fa8c9;
L_8fa82e: /* 8fa82e: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_8fa831: /* 8fa831: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa833: jge 0x8fa8c3 */
  if ((sf == of)) goto L_8fa8c3;
L_8fa839: /* 8fa839: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa83c: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa842u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa842: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa844: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa847: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa84a: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa84f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa851: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa854: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa85a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa85d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa85e: push 0xaefca8 */
  { uint32_t v = 0xaefca8u; esp -= 4; W32(esp, v); }
/* 8fa863: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa869: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa86fu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa86f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa872: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa875: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa876: call 0x6cb587 */
  esp -= 4; W32(esp, 0x8fa87bu); SPILL(); f_6cb587(); if (g_unwind) return; RELOAD();
/* 8fa87b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa87e: mov ecx, dword ptr [eax + 0x204] */
  ecx = R32((uint32_t)(eax + 0x204u));
/* 8fa884: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fa885: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8fa886: mov dword ptr [eax + 0x204], ecx */
  W32((uint32_t)(eax + 0x204u), ecx);
/* 8fa88c: mov ecx, eax */
  ecx = eax;
/* 8fa88e: jmp 0x8fa831 */
  goto L_8fa831;
L_8fa8c3: /* 8fa8c3: mov dword ptr [ecx + 0xeb0], edi */
  W32((uint32_t)(ecx + 0xeb0u), edi);
L_8fa8c9: /* 8fa8c9: mov eax, edi */
  eax = edi;
/* 8fa8cb: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa8d0: cmp dword ptr [ecx + eax*4 + 0xaa8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xaa8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa8d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa8de: jne 0x8fa914 */
  if (!zf) goto L_8fa914;
L_8fa8e0: /* 8fa8e0: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8fa8e3: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 8fa8e6: fsub qword ptr [ecx + eax*8 + 0x2a8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + eax*8 + 0x2a8u)));
/* 8fa8ed: mov eax, dword ptr [ecx + 0x228] */
  eax = R32((uint32_t)(ecx + 0x228u));
/* 8fa8f3: fld qword ptr [ecx + 0x238] */
  { double v = F64((uint32_t)(ecx + 0x238u)); FPUSH(v); }
/* 8fa8f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8fa8fa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 8fa900: mov dword ptr [ecx + 0x228], eax */
  W32((uint32_t)(ecx + 0x228u), eax);
/* 8fa906: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8fa908: fadd dword ptr [ecx + 0x1f8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1f8u)));
/* 8fa90e: fstp dword ptr [ecx + 0x1f8] */
  WF32((uint32_t)(ecx + 0x1f8u), ST0); FPOP();
L_8fa914: /* 8fa914: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa917: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fa91b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa921u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa921: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa923: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa926: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa929: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa92e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa930: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa933: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa939: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa93c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa93d: push 0xaefcf4 */
  { uint32_t v = 0xaefcf4u; esp -= 4; W32(esp, v); }
/* 8fa942: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa948: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa94eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa94e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa951: mov eax, dword ptr [edx + 0x3ec4] */
  eax = R32((uint32_t)(edx + 0x3ec4u));
/* 8fa957: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa95a: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 8fa95d: mov ebx, 1 */
  ebx = 0x1u;
L_8fa962: /* 8fa962: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fa964: jl 0x8fa9a0 */
  if ((sf != of)) goto L_8fa9a0;
L_8fa966: /* 8fa966: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa969: mov ecx, dword ptr [eax + 0x3ec0] */
  ecx = R32((uint32_t)(eax + 0x3ec0u));
/* 8fa96f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8fa972: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
L_8fa975: /* 8fa975: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa977: je 0x8fa990 */
  if (zf) goto L_8fa990;
L_8fa979: /* 8fa979: cmp dword ptr [eax + 0x74], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x74u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa97c: jne 0x8fa98b */
  if (!zf) goto L_8fa98b;
L_8fa97e: /* 8fa97e: mov dl, byte ptr [eax + 0x78] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x78u))) & 0xffu);
/* 8fa981: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa983: mov dword ptr [eax + 0x64], ebx */
  W32((uint32_t)(eax + 0x64u), ebx);
/* 8fa986: je 0x8fa98b */
  if (zf) goto L_8fa98b;
L_8fa988: /* 8fa988: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa98b: /* 8fa98b: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8fa98e: jmp 0x8fa975 */
  goto L_8fa975;
L_8fa990: /* 8fa990: cmp dword ptr [ecx + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa993: jne 0x8fa998 */
  if (!zf) goto L_8fa998;
L_8fa995: /* 8fa995: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa998: /* 8fa998: call 0x6c913d */
  esp -= 4; W32(esp, 0x8fa99du); SPILL(); f_6c913d(); if (g_unwind) return; RELOAD();
/* 8fa99d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8fa99e: jmp 0x8fa962 */
  goto L_8fa962;
L_8fa9a0: /* 8fa9a0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fa9a3: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa9ad: jmp 0x8fa774 */
  goto L_8fa774;
L_8fa9c9: /* 8fa9c9: push 0xa1f89c */
  { uint32_t v = 0xa1f89cu; esp -= 4; W32(esp, v); }
/* 8fa9ce: push 0xaefd28 */
  { uint32_t v = 0xaefd28u; esp -= 4; W32(esp, v); }
/* 8fa9d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fa9d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fa9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa9dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa9de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa9e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa9e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fa9e5: /* 8fa9e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa9e9: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fa9ef: call 0x6c9e12 */
  esp -= 4; W32(esp, 0x8fa9f4u); SPILL(); f_6c9e12(); if (g_unwind) return; RELOAD();
/* 8fa9f4: mov ecx, edi */
  ecx = edi;
/* 8fa9f6: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8fa9fa: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faa00u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faa00: mov esi, dword ptr [0xcfacb4] */
  esi = R32((uint32_t)(0xcfacb4u));
/* 8faa06: mov ecx, edi */
  ecx = edi;
/* 8faa08: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8faa0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa0f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faa12: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8faa15: je 0x8faa27 */
  if (zf) goto L_8faa27;
L_8faa17: /* 8faa17: mov ecx, edi */
  ecx = edi;
/* 8faa19: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa1b: mov ecx, edi */
  ecx = edi;
/* 8faa1d: mov byte ptr [ebp - 0x44], al */
  W8((uint32_t)(ebp + 0xffffffbcu), (eax & 0xffu));
/* 8faa20: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa22: mov byte ptr [ebp - 0x43], al */
  W8((uint32_t)(ebp + 0xffffffbdu), (eax & 0xffu));
/* 8faa25: jmp 0x8faa2f */
  goto L_8faa2f;
L_8faa27: /* 8faa27: mov byte ptr [ebp - 0x44], 0 */
  W8((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8faa2b: mov byte ptr [ebp - 0x43], 0 */
  W8((uint32_t)(ebp + 0xffffffbdu), 0x0u);
L_8faa2f: /* 8faa2f: mov ecx, edi */
  ecx = edi;
/* 8faa31: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa33: mov ebx, dword ptr [0xcfacbc] */
  ebx = R32((uint32_t)(0xcfacbcu));
/* 8faa39: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 8faa3e: mov ecx, edi */
  ecx = edi;
/* 8faa40: mov byte ptr [ebp - 0x42], al */
  W8((uint32_t)(ebp + 0xffffffbeu), (eax & 0xffu));
/* 8faa43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa45: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa48: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa4a: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8faa4d: je 0x8faa8f */
  if (zf) goto L_8faa8f;
L_8faa4f: /* 8faa4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faa52: mov esi, dword ptr [ecx + eax*4 + 0x2eac] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x2eacu));
/* 8faa59: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 8faa5e: mov ecx, edi */
  ecx = edi;
/* 8faa60: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa62: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa64: sub eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa69: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8faa6e: lea edx, [eax + esi - 0x200] */
  edx = (uint32_t)(eax + esi + 0xfffffe00u);
/* 8faa75: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa78: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa7a: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8faa7d: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa7f: /* 8faa7f: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faa82: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa84: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa86: /* 8faa86: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8faa8d: jmp 0x8faaa1 */
  goto L_8faaa1;
L_8faa8f: /* 8faa8f: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8faa96: jmp 0x8faa7f */
  goto L_8faa7f;
L_8faa98: /* 8faa98: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8faa9a: mov ecx, edi */
  ecx = edi;
/* 8faa9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa9e: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_8faaa1: /* 8faaa1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faaa4: mov ecx, dword ptr [eax + 0xbc] */
  ecx = R32((uint32_t)(eax + 0xbcu));
/* 8faaaa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8faaad: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8faab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8faab1: mov ecx, ebx */
  ecx = ebx;
/* 8faab3: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8faab9u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8faab9: mov ecx, ebx */
  ecx = ebx;
/* 8faabb: mov edi, eax */
  edi = eax;
/* 8faabd: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faac3u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faac3: mov ecx, ebx */
  ecx = ebx;
/* 8faac5: mov esi, eax */
  esi = eax;
/* 8faac7: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8faacdu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8faacd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faacf: je 0x8fab0b */
  if (zf) goto L_8fab0b;
L_8faad1: /* 8faad1: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8faad7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8faad9: push 0xaefd30 */
  { uint32_t v = 0xaefd30u; esp -= 4; W32(esp, v); }
/* 8faade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faadf: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8faae5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8faae5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faae8: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faaee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faaf2: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faaf8u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faaf8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8faafb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab05: mov esp, ebp */
  esp = ebp;
/* 8fab07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab08: ret 4 */
  esp += 8; SPILL(); return;
L_8fab0b: /* 8fab0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fab0d: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab13: call dword ptr [0xcfaccc] */
  esp -= 4; W32(esp, 0x8fab19u); SPILL(); f_4e21d0(); if (g_unwind) return; /* Core!?SetData@FBitReader@@QAEXAAU1@H@Z */ RELOAD();
/* 8fab19: mov ecx, ebx */
  ecx = ebx;
/* 8fab1b: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fab21u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fab21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab23: mov ecx, ebx */
  ecx = ebx;
/* 8fab25: je 0x8fab6e */
  if (zf) goto L_8fab6e;
L_8fab27: /* 8fab27: call dword ptr [0xcfacc8] */
  esp -= 4; W32(esp, 0x8fab2du); SPILL(); f_4e1ff0(); if (g_unwind) return; /* Core!?GetNumBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab2d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab30: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fab36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fab39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fab3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fab3c: push 0xaefd60 */
  { uint32_t v = 0xaefd60u; esp -= 4; W32(esp, v); }
/* 8fab41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab42: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fab48u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fab48: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fab4b: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab51: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fab55: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fab5bu); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fab5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fab5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab68: mov esp, ebp */
  esp = ebp;
/* 8fab6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab6b: ret 4 */
  esp += 8; SPILL(); return;
L_8fab6e: /* 8fab6e: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fab71: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab73: je 0x8fabcb */
  if (zf) goto L_8fabcb;
L_8fab75: /* 8fab75: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fab7bu); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab7b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab7e: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8fab81: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fab83: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fab89: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fab8c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fab8f: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fab94: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fab97: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fab99: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fab9f: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8faba2: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8faba5: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8faba9: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabac: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabb2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fabb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabb6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fabb9: push 0xaefda8 */
  { uint32_t v = 0xaefda8u; esp -= 4; W32(esp, v); }
/* 8fabbe: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fabc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabc4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fabc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fabc6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fabc9: jmp 0x8fac1b */
  goto L_8fac1b;
L_8fabcb: /* 8fabcb: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fabd1u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fabd1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fabd4: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fabd7: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fabdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fabdf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fabe2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabe5: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fabea: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fabed: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fabef: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabf7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8fabfa: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8fabfe: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fac01: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fac07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fac0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fac0b: push 0xaefe20 */
  { uint32_t v = 0xaefe20u; esp -= 4; W32(esp, v); }
/* 8fac10: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fac16: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fac1b: /* 8fac1b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac1e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fac21: mov ecx, dword ptr [edi + eax*4 + 0xeb4] */
  ecx = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac2a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8fac31: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac33: /* 8fac33: mov ecx, dword ptr [edi + 0xeb4] */
  ecx = R32((uint32_t)(edi + 0xeb4u));
/* 8fac39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3b: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac3d: /* 8fac3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3f: jne 0x8fac47 */
  if (!zf) goto L_8fac47;
L_8fac41: /* 8fac41: cmp dword ptr [ebp - 0x4c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fac45: je 0x8fac61 */
  if (zf) goto L_8fac61;
L_8fac47: /* 8fac47: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fac4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fac4f: push 0xaefe88 */
  { uint32_t v = 0xaefe88u; esp -= 4; W32(esp, v); }
/* 8fac54: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac5a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac5c: jmp 0x8fad15 */
  goto L_8fad15;
L_8fac61: /* 8fac61: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fac64: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac66: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac69: mov esi, dword ptr [edi + eax*4 + 0xeb4] */
  esi = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac70: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8fac74: je 0x8fac8a */
  if (zf) goto L_8fac8a;
L_8fac76: /* 8fac76: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8fac7d: cmp dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fac80: jg 0x8face1 */
  if ((!zf && sf == of)) goto L_8face1;
L_8fac82: /* 8fac82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac83: push 0xaefec8 */
  { uint32_t v = 0xaefec8u; esp -= 4; W32(esp, v); }
/* 8fac88: jmp 0x8facaf */
  goto L_8facaf;
L_8fac8a: /* 8fac8a: mov cl, byte ptr [ebp - 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8fac8d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac8f: je 0x8fac98 */
  if (zf) goto L_8fac98;
L_8fac91: /* 8fac91: mov cl, byte ptr [ebp - 0x43] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbdu))) & 0xffu);
/* 8fac94: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac96: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8fac98: /* 8fac98: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac9a: je 0x8faca2 */
  if (zf) goto L_8faca2;
L_8fac9c: /* 8fac9c: cmp dword ptr [esi + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8faca0: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8faca2: /* 8faca2: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8faca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8facaa: push 0xaeff30 */
  { uint32_t v = 0xaeff30u; esp -= 4; W32(esp, v); }
L_8facaf: /* 8facaf: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8facb5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8facb7: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8facbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8facbd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8facbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8facbf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facc2: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8facc8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faccc: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8facd2u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8facd2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8facd5: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8facd8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8facdc: jmp 0x8fa774 */
  goto L_8fa774;
L_8face1: /* 8face1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8face3: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8face9: /* 8face9: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faced: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8facf1: call 0x6c82ab */
  esp -= 4; W32(esp, 0x8facf6u); SPILL(); f_6c82ab(); if (g_unwind) return; RELOAD();
/* 8facf6: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facf9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8facfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8facff: jne 0x8fad3b */
  if (!zf) goto L_8fad3b;
L_8fad01: /* 8fad01: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fad07: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fad09: push 0xaeffb8 */
  { uint32_t v = 0xaeffb8u; esp -= 4; W32(esp, v); }
/* 8fad0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad0f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fad15u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
L_8fad15: /* 8fad15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad18: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fad1e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fad22: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fad28u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fad28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fad2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fad2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fad2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fad34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fad35: mov esp, ebp */
  esp = ebp;
/* 8fad37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fad38: ret 4 */
  esp += 8; SPILL(); return;
L_8fad3b: /* 8fad3b: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad3e: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fad43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fad45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad46: push 0xaf0008 */
  { uint32_t v = 0xaf0008u; esp -= 4; W32(esp, v); }
/* 8fad4b: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fad50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fad51: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fad53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad53: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad56: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8fad59: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fad5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad60: mov ecx, edi */
  ecx = edi;
/* 8fad62: call 0x6c74cd */
  esp -= 4; W32(esp, 0x8fad67u); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 8fad67: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8fad6a: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 8fad6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fad6f: mov esi, eax */
  esi = eax;
/* 8fad71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad72: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8fad75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fad77: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8fad7d: /* 8fad7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fad7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad80: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad86: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fad8a: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8fad8fu); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8fad8f: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad95: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8fad99: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fad9fu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fad9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fada1: je 0x8fadbb */
  if (zf) goto L_8fadbb;
L_8fada3: /* 8fada3: push 0x227 */
  { uint32_t v = 0x227u; esp -= 4; W32(esp, v); }
/* 8fada8: push 0xaf004c */
  { uint32_t v = 0xaf004cu; esp -= 4; W32(esp, v); }
/* 8fadad: push 0xaf0058 */
  { uint32_t v = 0xaf0058u; esp -= 4; W32(esp, v); }
/* 8fadb2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fadb8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fadbb: /* 8fadbb: mov al, byte ptr [ebp - 0xdf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff21u))) & 0xffu);
/* 8fadc1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fadc3: jne 0x8faddd */
  if (!zf) goto L_8faddd;
L_8fadc5: /* 8fadc5: push 0x228 */
  { uint32_t v = 0x228u; esp -= 4; W32(esp, v); }
/* 8fadca: push 0xaf0070 */
  { uint32_t v = 0xaf0070u; esp -= 4; W32(esp, v); }
/* 8fadcf: push 0xaf007c */
  { uint32_t v = 0xaf007cu; esp -= 4; W32(esp, v); }
/* 8fadd4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8faddau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8faddd: /* 8faddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8faddf: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 8fade5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fade6: mov ecx, esi */
  ecx = esi;
/* 8fade8: mov byte ptr [ebp - 0xde], 1 */
  W8((uint32_t)(ebp + 0xffffff22u), 0x1u);
/* 8fadef: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8fadf4u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8fadf4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8fadf6: mov ecx, edi */
  ecx = edi;
/* 8fadf8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8fadfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fadfe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae00: je 0x8fae0b */
  if (zf) goto L_8fae0b;
L_8fae02: /* 8fae02: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fae04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fae06: mov ecx, esi */
  ecx = esi;
/* 8fae08: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8fae0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fae0b: /* 8fae0b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fae0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae10: jne 0x8fae31 */
  if (!zf) goto L_8fae31;
L_8fae12: /* 8fae12: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fae18: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fae1a: push 0xaf0090 */
  { uint32_t v = 0xaf0090u; esp -= 4; W32(esp, v); }
/* 8fae1f: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fae24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fae25: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fae27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fae27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fae2a: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8fae31: /* 8fae31: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fae37: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fae3b: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8fae41u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8fae41: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fae47: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae4b: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fae51u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fae51: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fae54: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fae57: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae5b: jmp 0x8fa774 */
  goto L_8fa774;
L_8faec6: /* 8faec6: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faec9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faecb: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8faed2: je 0x8faee1 */
  if (zf) goto L_8faee1;
L_8faed4: /* 8faed4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faed7: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 8faede: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_8faee1: /* 8faee1: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 8faee7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faee8: mov ecx, esi */
  ecx = esi;
/* 8faeea: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faeee: call 0x6c1483 */
  esp -= 4; W32(esp, 0x8faef3u); SPILL(); f_6c1483(); if (g_unwind) return; RELOAD();
/* 8faef3: mov edx, dword ptr [edi + 0x210] */
  edx = R32((uint32_t)(edi + 0x210u));
/* 8faef9: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8faefc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8faefd: mov dword ptr [edi + 0x210], edx */
  W32((uint32_t)(edi + 0x210u), edx);
/* 8faf03: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8faf06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf08: jne 0x8faf64 */
  if (!zf) goto L_8faf64;
L_8faf0a: /* 8faf0a: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf10: call dword ptr [0xcfacc4] */
  esp -= 4; W32(esp, 0x8faf16u); SPILL(); f_4e3b16(); if (g_unwind) return; /* Core!?IsCriticalError@FArchive@@QAEHXZ */ RELOAD();
/* 8faf16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf18: je 0x8faf64 */
  if (zf) goto L_8faf64;
L_8faf1a: /* 8faf1a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8faf1c: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 8faf22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf23: mov ecx, edi */
  ecx = edi;
/* 8faf25: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8faf28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf28: mov ecx, eax */
  ecx = eax;
/* 8faf2a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8faf2e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8faf34u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8faf34: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8faf3a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8faf3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf3d: push 0xaf00d0 */
  { uint32_t v = 0xaf00d0u; esp -= 4; W32(esp, v); }
/* 8faf42: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8faf47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faf48: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faf4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faf4d: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 8faf53: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faf57: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8faf5du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8faf5d: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8faf64: /* 8faf64: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faf71: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faf77u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faf77: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8faf7a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faf7d: jmp 0x8fa774 */
  goto L_8fa774;
}

void f_8fae60(void) {
  LOAD_REGS();
L_8fae60: /* 8fae60: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 8fae66: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fae6b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8fae6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fae6f: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8fae72: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fae77u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fae77(); return;
}

void f_8fae77(void) {
  LOAD_REGS();
L_8fae77: /* 8fae77: push 0xa1f864 */
  { uint32_t v = 0xa1f864u; esp -= 4; W32(esp, v); }
/* 8fae7c: push 0xaf00c0 */
  { uint32_t v = 0xaf00c0u; esp -= 4; W32(esp, v); }
/* 8fae81: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fae87u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fae87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fae8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fae8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fae8e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fae93u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fae93(); return;
}

void f_8fae93(void) {
  LOAD_REGS();
L_8fae93: /* 8fae93: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 8fae99: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fae9e: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8faea1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faea2: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8faea5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8faeaau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8faeaa(); return;
}

void f_8faeaa(void) {
  LOAD_REGS();
  goto L_8faeaa;
L_8fa774: /* 8fa774: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8fa776: mov ecx, edi */
  ecx = edi;
/* 8fa778: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x8fa77bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa77b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa77d: jne 0x8fa806 */
  if (!zf) goto L_8fa806;
L_8fa783: /* 8fa783: cmp dword ptr [ebx + 0x6c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x6cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa787: je 0x8fa806 */
  if (zf) goto L_8fa806;
L_8fa789: /* 8fa789: mov ecx, edi */
  ecx = edi;
/* 8fa78b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa791u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa791: mov ecx, edi */
  ecx = edi;
/* 8fa793: mov ebx, eax */
  ebx = eax;
/* 8fa795: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8fa79bu); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8fa79b: mov ecx, edi */
  ecx = edi;
/* 8fa79d: movzx esi, al */
  esi = (uint32_t)((eax & 0xffu));
/* 8fa7a0: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7a6u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7a8: je 0x8fa7b1 */
  if (zf) goto L_8fa7b1;
L_8fa7aa: /* 8fa7aa: push 0xaefc54 */
  { uint32_t v = 0xaefc54u; esp -= 4; W32(esp, v); }
/* 8fa7af: jmp 0x8fa7f4 */
  goto L_8fa7f4;
L_8fa7b1: /* 8fa7b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7b3: je 0x8fa9e5 */
  if (zf) goto L_8fa9e5;
L_8fa7b9: /* 8fa7b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa7bc: mov esi, dword ptr [eax + 0xeb0] */
  esi = R32((uint32_t)(eax + 0xeb0u));
/* 8fa7c2: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fa7c7: mov ecx, edi */
  ecx = edi;
/* 8fa7c9: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8fa7cfu); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8fa7cf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa7d2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d4: sub eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa7d9: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa7de: lea edi, [eax + esi - 0x2000] */
  edi = (uint32_t)(eax + esi + 0xffffe000u);
/* 8fa7e5: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fa7ebu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fa7eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa7ed: je 0x8fa819 */
  if (zf) goto L_8fa819;
L_8fa7ef: /* 8fa7ef: push 0xaefc84 */
  { uint32_t v = 0xaefc84u; esp -= 4; W32(esp, v); }
L_8fa7f4: /* 8fa7f4: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fa7fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa7fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fa7fd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fa803u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fa803: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa806: /* 8fa806: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa809: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa810: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa811: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa812: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa813: mov esp, ebp */
  esp = ebp;
/* 8fa815: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa816: ret 4 */
  esp += 8; SPILL(); return;
L_8fa819: /* 8fa819: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa81c: mov eax, dword ptr [ecx + 0xeb0] */
  eax = R32((uint32_t)(ecx + 0xeb0u));
/* 8fa822: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa824: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fa828: jle 0x8fa8c9 */
  if ((zf || sf != of)) goto L_8fa8c9;
L_8fa82e: /* 8fa82e: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_8fa831: /* 8fa831: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa833: jge 0x8fa8c3 */
  if ((sf == of)) goto L_8fa8c3;
L_8fa839: /* 8fa839: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa83c: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa842u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa842: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa844: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa847: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa84a: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa84f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa851: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa854: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa85a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa85d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa85e: push 0xaefca8 */
  { uint32_t v = 0xaefca8u; esp -= 4; W32(esp, v); }
/* 8fa863: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa869: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa86fu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa86f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa872: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa875: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa876: call 0x6cb587 */
  esp -= 4; W32(esp, 0x8fa87bu); SPILL(); f_6cb587(); if (g_unwind) return; RELOAD();
/* 8fa87b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa87e: mov ecx, dword ptr [eax + 0x204] */
  ecx = R32((uint32_t)(eax + 0x204u));
/* 8fa884: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fa885: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8fa886: mov dword ptr [eax + 0x204], ecx */
  W32((uint32_t)(eax + 0x204u), ecx);
/* 8fa88c: mov ecx, eax */
  ecx = eax;
/* 8fa88e: jmp 0x8fa831 */
  goto L_8fa831;
L_8fa8c3: /* 8fa8c3: mov dword ptr [ecx + 0xeb0], edi */
  W32((uint32_t)(ecx + 0xeb0u), edi);
L_8fa8c9: /* 8fa8c9: mov eax, edi */
  eax = edi;
/* 8fa8cb: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fa8d0: cmp dword ptr [ecx + eax*4 + 0xaa8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xaa8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa8d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa8de: jne 0x8fa914 */
  if (!zf) goto L_8fa914;
L_8fa8e0: /* 8fa8e0: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8fa8e3: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 8fa8e6: fsub qword ptr [ecx + eax*8 + 0x2a8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + eax*8 + 0x2a8u)));
/* 8fa8ed: mov eax, dword ptr [ecx + 0x228] */
  eax = R32((uint32_t)(ecx + 0x228u));
/* 8fa8f3: fld qword ptr [ecx + 0x238] */
  { double v = F64((uint32_t)(ecx + 0x238u)); FPUSH(v); }
/* 8fa8f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8fa8fa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 8fa900: mov dword ptr [ecx + 0x228], eax */
  W32((uint32_t)(ecx + 0x228u), eax);
/* 8fa906: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8fa908: fadd dword ptr [ecx + 0x1f8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1f8u)));
/* 8fa90e: fstp dword ptr [ecx + 0x1f8] */
  WF32((uint32_t)(ecx + 0x1f8u), ST0); FPOP();
L_8fa914: /* 8fa914: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa917: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fa91b: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fa921u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fa921: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa923: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fa926: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fa929: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fa92e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fa930: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa933: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fa939: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fa93c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa93d: push 0xaefcf4 */
  { uint32_t v = 0xaefcf4u; esp -= 4; W32(esp, v); }
/* 8fa942: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fa947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa948: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa94eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa94e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa951: mov eax, dword ptr [edx + 0x3ec4] */
  eax = R32((uint32_t)(edx + 0x3ec4u));
/* 8fa957: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa95a: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 8fa95d: mov ebx, 1 */
  ebx = 0x1u;
L_8fa962: /* 8fa962: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fa964: jl 0x8fa9a0 */
  if ((sf != of)) goto L_8fa9a0;
L_8fa966: /* 8fa966: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa969: mov ecx, dword ptr [eax + 0x3ec0] */
  ecx = R32((uint32_t)(eax + 0x3ec0u));
/* 8fa96f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8fa972: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
L_8fa975: /* 8fa975: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa977: je 0x8fa990 */
  if (zf) goto L_8fa990;
L_8fa979: /* 8fa979: cmp dword ptr [eax + 0x74], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x74u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa97c: jne 0x8fa98b */
  if (!zf) goto L_8fa98b;
L_8fa97e: /* 8fa97e: mov dl, byte ptr [eax + 0x78] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x78u))) & 0xffu);
/* 8fa981: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa983: mov dword ptr [eax + 0x64], ebx */
  W32((uint32_t)(eax + 0x64u), ebx);
/* 8fa986: je 0x8fa98b */
  if (zf) goto L_8fa98b;
L_8fa988: /* 8fa988: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa98b: /* 8fa98b: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8fa98e: jmp 0x8fa975 */
  goto L_8fa975;
L_8fa990: /* 8fa990: cmp dword ptr [ecx + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa993: jne 0x8fa998 */
  if (!zf) goto L_8fa998;
L_8fa995: /* 8fa995: mov dword ptr [ecx + 0x2c], ebx */
  W32((uint32_t)(ecx + 0x2cu), ebx);
L_8fa998: /* 8fa998: call 0x6c913d */
  esp -= 4; W32(esp, 0x8fa99du); SPILL(); f_6c913d(); if (g_unwind) return; RELOAD();
/* 8fa99d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8fa99e: jmp 0x8fa962 */
  goto L_8fa962;
L_8fa9a0: /* 8fa9a0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fa9a3: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa9ad: jmp 0x8fa774 */
  goto L_8fa774;
L_8fa9e5: /* 8fa9e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fa9e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa9e9: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fa9ef: call 0x6c9e12 */
  esp -= 4; W32(esp, 0x8fa9f4u); SPILL(); f_6c9e12(); if (g_unwind) return; RELOAD();
/* 8fa9f4: mov ecx, edi */
  ecx = edi;
/* 8fa9f6: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8fa9fa: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faa00u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faa00: mov esi, dword ptr [0xcfacb4] */
  esi = R32((uint32_t)(0xcfacb4u));
/* 8faa06: mov ecx, edi */
  ecx = edi;
/* 8faa08: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8faa0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa0f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faa12: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8faa15: je 0x8faa27 */
  if (zf) goto L_8faa27;
L_8faa17: /* 8faa17: mov ecx, edi */
  ecx = edi;
/* 8faa19: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa1b: mov ecx, edi */
  ecx = edi;
/* 8faa1d: mov byte ptr [ebp - 0x44], al */
  W8((uint32_t)(ebp + 0xffffffbcu), (eax & 0xffu));
/* 8faa20: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa22: mov byte ptr [ebp - 0x43], al */
  W8((uint32_t)(ebp + 0xffffffbdu), (eax & 0xffu));
/* 8faa25: jmp 0x8faa2f */
  goto L_8faa2f;
L_8faa27: /* 8faa27: mov byte ptr [ebp - 0x44], 0 */
  W8((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8faa2b: mov byte ptr [ebp - 0x43], 0 */
  W8((uint32_t)(ebp + 0xffffffbdu), 0x0u);
L_8faa2f: /* 8faa2f: mov ecx, edi */
  ecx = edi;
/* 8faa31: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8faa33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa33: mov ebx, dword ptr [0xcfacbc] */
  ebx = R32((uint32_t)(0xcfacbcu));
/* 8faa39: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 8faa3e: mov ecx, edi */
  ecx = edi;
/* 8faa40: mov byte ptr [ebp - 0x42], al */
  W8((uint32_t)(ebp + 0xffffffbeu), (eax & 0xffu));
/* 8faa43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa45: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa48: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa4a: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8faa4d: je 0x8faa8f */
  if (zf) goto L_8faa8f;
L_8faa4f: /* 8faa4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faa52: mov esi, dword ptr [ecx + eax*4 + 0x2eac] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x2eacu));
/* 8faa59: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 8faa5e: mov ecx, edi */
  ecx = edi;
/* 8faa60: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa62: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa64: sub eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8faa69: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8faa6e: lea edx, [eax + esi - 0x200] */
  edx = (uint32_t)(eax + esi + 0xfffffe00u);
/* 8faa75: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8faa78: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa7a: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8faa7d: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa7f: /* 8faa7f: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faa82: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faa84: jne 0x8faa98 */
  if (!zf) goto L_8faa98;
L_8faa86: /* 8faa86: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8faa8d: jmp 0x8faaa1 */
  goto L_8faaa1;
L_8faa8f: /* 8faa8f: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8faa96: jmp 0x8faa7f */
  goto L_8faa7f;
L_8faa98: /* 8faa98: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8faa9a: mov ecx, edi */
  ecx = edi;
/* 8faa9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faa9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faa9e: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_8faaa1: /* 8faaa1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faaa4: mov ecx, dword ptr [eax + 0xbc] */
  ecx = R32((uint32_t)(eax + 0xbcu));
/* 8faaaa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8faaad: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8faab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8faab1: mov ecx, ebx */
  ecx = ebx;
/* 8faab3: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8faab9u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8faab9: mov ecx, ebx */
  ecx = ebx;
/* 8faabb: mov edi, eax */
  edi = eax;
/* 8faabd: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8faac3u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8faac3: mov ecx, ebx */
  ecx = ebx;
/* 8faac5: mov esi, eax */
  esi = eax;
/* 8faac7: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8faacdu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8faacd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faacf: je 0x8fab0b */
  if (zf) goto L_8fab0b;
L_8faad1: /* 8faad1: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8faad7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8faad9: push 0xaefd30 */
  { uint32_t v = 0xaefd30u; esp -= 4; W32(esp, v); }
/* 8faade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faadf: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8faae5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8faae5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faae8: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faaee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faaf2: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faaf8u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faaf8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8faafb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab05: mov esp, ebp */
  esp = ebp;
/* 8fab07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab08: ret 4 */
  esp += 8; SPILL(); return;
L_8fab0b: /* 8fab0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fab0d: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab13: call dword ptr [0xcfaccc] */
  esp -= 4; W32(esp, 0x8fab19u); SPILL(); f_4e21d0(); if (g_unwind) return; /* Core!?SetData@FBitReader@@QAEXAAU1@H@Z */ RELOAD();
/* 8fab19: mov ecx, ebx */
  ecx = ebx;
/* 8fab1b: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fab21u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fab21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab23: mov ecx, ebx */
  ecx = ebx;
/* 8fab25: je 0x8fab6e */
  if (zf) goto L_8fab6e;
L_8fab27: /* 8fab27: call dword ptr [0xcfacc8] */
  esp -= 4; W32(esp, 0x8fab2du); SPILL(); f_4e1ff0(); if (g_unwind) return; /* Core!?GetNumBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab2d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab30: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fab36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fab39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fab3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fab3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fab3c: push 0xaefd60 */
  { uint32_t v = 0xaefd60u; esp -= 4; W32(esp, v); }
/* 8fab41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fab42: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fab48u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fab48: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fab4b: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fab51: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fab55: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fab5bu); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fab5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fab5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fab65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fab66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fab67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fab68: mov esp, ebp */
  esp = ebp;
/* 8fab6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fab6b: ret 4 */
  esp += 8; SPILL(); return;
L_8fab6e: /* 8fab6e: mov al, byte ptr [ebp - 0x42] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fab71: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fab73: je 0x8fabcb */
  if (zf) goto L_8fabcb;
L_8fab75: /* 8fab75: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fab7bu); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fab7b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fab7e: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8fab81: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fab83: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fab89: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fab8c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fab8f: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fab94: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fab97: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fab99: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fab9f: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8faba2: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8faba5: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8faba9: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabac: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabb2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fabb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabb6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fabb9: push 0xaefda8 */
  { uint32_t v = 0xaefda8u; esp -= 4; W32(esp, v); }
/* 8fabbe: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fabc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fabc4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fabc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fabc6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fabc9: jmp 0x8fac1b */
  goto L_8fac1b;
L_8fabcb: /* 8fabcb: call dword ptr [0xcfacd0] */
  esp -= 4; W32(esp, 0x8fabd1u); SPILL(); f_4e35df(); if (g_unwind) return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */ RELOAD();
/* 8fabd1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fabd4: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fabd7: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 8fabdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fabdf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fabe2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fabe5: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fabea: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fabed: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8fabef: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fabf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fabf7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8fabfa: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8fabfe: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fac01: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 8fac07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fac0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fac0b: push 0xaefe20 */
  { uint32_t v = 0xaefe20u; esp -= 4; W32(esp, v); }
/* 8fac10: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fac16: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fac1b: /* 8fac1b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac1e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fac21: mov ecx, dword ptr [edi + eax*4 + 0xeb4] */
  ecx = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac2a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8fac31: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac33: /* 8fac33: mov ecx, dword ptr [edi + 0xeb4] */
  ecx = R32((uint32_t)(edi + 0xeb4u));
/* 8fac39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3b: jne 0x8fac61 */
  if (!zf) goto L_8fac61;
L_8fac3d: /* 8fac3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac3f: jne 0x8fac47 */
  if (!zf) goto L_8fac47;
L_8fac41: /* 8fac41: cmp dword ptr [ebp - 0x4c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fac45: je 0x8fac61 */
  if (zf) goto L_8fac61;
L_8fac47: /* 8fac47: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fac4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fac4f: push 0xaefe88 */
  { uint32_t v = 0xaefe88u; esp -= 4; W32(esp, v); }
/* 8fac54: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fac59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac5a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fac5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fac5c: jmp 0x8fad15 */
  goto L_8fad15;
L_8fac61: /* 8fac61: mov cl, byte ptr [ebp - 0x42] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu))) & 0xffu);
/* 8fac64: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac66: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fac69: mov esi, dword ptr [edi + eax*4 + 0xeb4] */
  esi = R32((uint32_t)(edi + eax*4 + 0xeb4u));
/* 8fac70: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8fac74: je 0x8fac8a */
  if (zf) goto L_8fac8a;
L_8fac76: /* 8fac76: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8fac7d: cmp dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fac80: jg 0x8face1 */
  if ((!zf && sf == of)) goto L_8face1;
L_8fac82: /* 8fac82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fac83: push 0xaefec8 */
  { uint32_t v = 0xaefec8u; esp -= 4; W32(esp, v); }
/* 8fac88: jmp 0x8facaf */
  goto L_8facaf;
L_8fac8a: /* 8fac8a: mov cl, byte ptr [ebp - 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8fac8d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac8f: je 0x8fac98 */
  if (zf) goto L_8fac98;
L_8fac91: /* 8fac91: mov cl, byte ptr [ebp - 0x43] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbdu))) & 0xffu);
/* 8fac94: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac96: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8fac98: /* 8fac98: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fac9a: je 0x8faca2 */
  if (zf) goto L_8faca2;
L_8fac9c: /* 8fac9c: cmp dword ptr [esi + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8faca0: jne 0x8face1 */
  if (!zf) goto L_8face1;
L_8faca2: /* 8faca2: mov eax, dword ptr [edi + eax*4 + 0x2eac] */
  eax = R32((uint32_t)(edi + eax*4 + 0x2eacu));
/* 8faca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8facaa: push 0xaeff30 */
  { uint32_t v = 0xaeff30u; esp -= 4; W32(esp, v); }
L_8facaf: /* 8facaf: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8facb5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8facb7: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8facbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8facbd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8facbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8facbf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facc2: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8facc8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faccc: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8facd2u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8facd2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8facd5: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8facd8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8facdc: jmp 0x8fa774 */
  goto L_8fa774;
L_8face1: /* 8face1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8face3: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8face9: /* 8face9: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faced: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8facf1: call 0x6c82ab */
  esp -= 4; W32(esp, 0x8facf6u); SPILL(); f_6c82ab(); if (g_unwind) return; RELOAD();
/* 8facf6: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8facf9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8facfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8facfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8facff: jne 0x8fad3b */
  if (!zf) goto L_8fad3b;
L_8fad01: /* 8fad01: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fad07: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fad09: push 0xaeffb8 */
  { uint32_t v = 0xaeffb8u; esp -= 4; W32(esp, v); }
/* 8fad0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad0f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fad15u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
L_8fad15: /* 8fad15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad18: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fad1e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fad22: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fad28u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fad28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fad2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fad2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fad2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fad34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fad35: mov esp, ebp */
  esp = ebp;
/* 8fad37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fad38: ret 4 */
  esp += 8; SPILL(); return;
L_8fad3b: /* 8fad3b: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad3e: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fad43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fad45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad46: push 0xaf0008 */
  { uint32_t v = 0xaf0008u; esp -= 4; W32(esp, v); }
/* 8fad4b: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fad50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fad51: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fad53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad53: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fad56: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8fad59: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fad5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fad5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fad5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fad60: mov ecx, edi */
  ecx = edi;
/* 8fad62: call 0x6c74cd */
  esp -= 4; W32(esp, 0x8fad67u); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 8fad67: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8fad6a: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 8fad6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fad6f: mov esi, eax */
  esi = eax;
/* 8fad71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad72: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8fad75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fad75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fad77: jne 0x8faec6 */
  if (!zf) goto L_8faec6;
L_8fad7d: /* 8fad7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fad7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fad80: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad86: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fad8a: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8fad8fu); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8fad8f: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fad95: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8fad99: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fad9fu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fad9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fada1: je 0x8fadbb */
  if (zf) goto L_8fadbb;
L_8fada3: /* 8fada3: push 0x227 */
  { uint32_t v = 0x227u; esp -= 4; W32(esp, v); }
/* 8fada8: push 0xaf004c */
  { uint32_t v = 0xaf004cu; esp -= 4; W32(esp, v); }
/* 8fadad: push 0xaf0058 */
  { uint32_t v = 0xaf0058u; esp -= 4; W32(esp, v); }
/* 8fadb2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fadb8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fadbb: /* 8fadbb: mov al, byte ptr [ebp - 0xdf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff21u))) & 0xffu);
/* 8fadc1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fadc3: jne 0x8faddd */
  if (!zf) goto L_8faddd;
L_8fadc5: /* 8fadc5: push 0x228 */
  { uint32_t v = 0x228u; esp -= 4; W32(esp, v); }
/* 8fadca: push 0xaf0070 */
  { uint32_t v = 0xaf0070u; esp -= 4; W32(esp, v); }
/* 8fadcf: push 0xaf007c */
  { uint32_t v = 0xaf007cu; esp -= 4; W32(esp, v); }
/* 8fadd4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8faddau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fadda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8faddd: /* 8faddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8faddf: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 8fade5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fade6: mov ecx, esi */
  ecx = esi;
/* 8fade8: mov byte ptr [ebp - 0xde], 1 */
  W8((uint32_t)(ebp + 0xffffff22u), 0x1u);
/* 8fadef: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8fadf4u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8fadf4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8fadf6: mov ecx, edi */
  ecx = edi;
/* 8fadf8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8fadfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fadfe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae00: je 0x8fae0b */
  if (zf) goto L_8fae0b;
L_8fae02: /* 8fae02: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fae04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fae06: mov ecx, esi */
  ecx = esi;
/* 8fae08: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8fae0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fae0b: /* 8fae0b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fae0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fae10: jne 0x8fae31 */
  if (!zf) goto L_8fae31;
L_8fae12: /* 8fae12: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8fae18: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fae1a: push 0xaf0090 */
  { uint32_t v = 0xaf0090u; esp -= 4; W32(esp, v); }
/* 8fae1f: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fae24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fae25: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fae27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fae27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fae2a: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8fae31: /* 8fae31: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8fae37: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fae3b: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8fae41u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8fae41: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8fae47: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae4b: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fae51u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fae51: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fae54: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fae57: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fae5b: jmp 0x8fa774 */
  goto L_8fa774;
L_8faeaa: /* 8faeaa: push 0xa1f83c */
  { uint32_t v = 0xa1f83cu; esp -= 4; W32(esp, v); }
/* 8faeaf: push 0xaf00c8 */
  { uint32_t v = 0xaf00c8u; esp -= 4; W32(esp, v); }
/* 8faeb4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8faebau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8faeba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faebd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8faebf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8faec1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8faec6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8faec6: /* 8faec6: mov al, byte ptr [ebp - 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbcu))) & 0xffu);
/* 8faec9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8faecb: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8faed2: je 0x8faee1 */
  if (zf) goto L_8faee1;
L_8faed4: /* 8faed4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8faed7: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 8faede: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_8faee1: /* 8faee1: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 8faee7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faee8: mov ecx, esi */
  ecx = esi;
/* 8faeea: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faeee: call 0x6c1483 */
  esp -= 4; W32(esp, 0x8faef3u); SPILL(); f_6c1483(); if (g_unwind) return; RELOAD();
/* 8faef3: mov edx, dword ptr [edi + 0x210] */
  edx = R32((uint32_t)(edi + 0x210u));
/* 8faef9: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8faefc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8faefd: mov dword ptr [edi + 0x210], edx */
  W32((uint32_t)(edi + 0x210u), edx);
/* 8faf03: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8faf06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf08: jne 0x8faf64 */
  if (!zf) goto L_8faf64;
L_8faf0a: /* 8faf0a: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf10: call dword ptr [0xcfacc4] */
  esp -= 4; W32(esp, 0x8faf16u); SPILL(); f_4e3b16(); if (g_unwind) return; /* Core!?IsCriticalError@FArchive@@QAEHXZ */ RELOAD();
/* 8faf16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8faf18: je 0x8faf64 */
  if (zf) goto L_8faf64;
L_8faf1a: /* 8faf1a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8faf1c: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 8faf22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf23: mov ecx, edi */
  ecx = edi;
/* 8faf25: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8faf28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf28: mov ecx, eax */
  ecx = eax;
/* 8faf2a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8faf2e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8faf34u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8faf34: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8faf3a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8faf3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8faf3d: push 0xaf00d0 */
  { uint32_t v = 0xaf00d0u; esp -= 4; W32(esp, v); }
/* 8faf42: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8faf47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faf48: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8faf4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8faf4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8faf4d: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 8faf53: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8faf57: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8faf5du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8faf5d: mov dword ptr [edi + 0x6c], 1 */
  W32((uint32_t)(edi + 0x6cu), 0x1u);
L_8faf64: /* 8faf64: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8faf6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8faf71: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8faf77u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8faf77: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8faf7a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8faf7d: jmp 0x8fa774 */
  goto L_8fa774;
}

void f_8faf82(void) {
  LOAD_REGS();
L_8faf82: /* 8faf82: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8faf88: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8faf8d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8faf90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8faf91: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8faf94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8faf99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8faf99(); return;
}

void f_8faf99(void) {
  LOAD_REGS();
L_8faf99: /* 8faf99: push 0xa1f808 */
  { uint32_t v = 0xa1f808u; esp -= 4; W32(esp, v); }
/* 8faf9e: push 0xaf0150 */
  { uint32_t v = 0xaf0150u; esp -= 4; W32(esp, v); }
/* 8fafa3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fafa9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fafa9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fafac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fafae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fafb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fafb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fafb5(); return;
}

void f_8fafb5(void) {
  LOAD_REGS();
L_8fafb5: /* 8fafb5: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 8fafbb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fafc0: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8fafc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fafc4: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8fafc7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fafccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fafcc(); return;
}

void f_8fafcc(void) {
  LOAD_REGS();
L_8fafcc: /* 8fafcc: push 0xa1f7f0 */
  { uint32_t v = 0xa1f7f0u; esp -= 4; W32(esp, v); }
/* 8fafd1: push 0xaf0158 */
  { uint32_t v = 0xaf0158u; esp -= 4; W32(esp, v); }
/* 8fafd6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fafdcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fafdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fafdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fafe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fafe3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fafe8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fafe8(); return;
}

void f_8fafe8(void) {
  LOAD_REGS();
L_8fafe8: /* 8fafe8: mov ecx, dword ptr [ebp - 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xffffff48u));
/* 8fafee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8faff3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8faff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8faff7: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8faffa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fafffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fafff(); return;
}

void f_8fafff(void) {
  LOAD_REGS();
L_8fafff: /* 8fafff: push 0xa1f7d4 */
  { uint32_t v = 0xa1f7d4u; esp -= 4; W32(esp, v); }
/* 8fb004: push 0xaefe80 */
  { uint32_t v = 0xaefe80u; esp -= 4; W32(esp, v); }
/* 8fb009: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fb00fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fb00f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb012: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fb014: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fb016: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fb01bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fb01b(); return;
}

void f_8fb01b(void) {
  LOAD_REGS();
L_8fb01b: /* 8fb01b: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 8fb021: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fb026: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8fb029: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fb02a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8fb02d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fb032u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fb032(); return;
}

void f_8fb032(void) {
  LOAD_REGS();
L_8fb032: /* 8fb032: push 0xa1f788 */
  { uint32_t v = 0xa1f788u; esp -= 4; W32(esp, v); }
/* 8fb037: push 0xaf0160 */
  { uint32_t v = 0xaf0160u; esp -= 4; W32(esp, v); }
/* 8fb03c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fb042u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fb042: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb045: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fb047: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fb049: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fb04eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fb04e: guest_badaddr(0x8fb04e); return;
}

void f_8fb2c0(void) {
  LOAD_REGS();
L_8fb2c0: /* 8fb2c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fb2c2: push 0x9d9678 */
  { uint32_t v = 0x9d9678u; esp -= 4; W32(esp, v); }
/* 8fb2c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fb2cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb2ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fb2d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fb2d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fb2d7: mov esi, ecx */
  esi = ecx;
/* 8fb2d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8fb2dd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fb2e3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fb2e3: xor eax, eax */
  eax = 0;
/* 8fb2e5: mov ecx, esi */
  ecx = esi;
/* 8fb2e7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8fb2eb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8fb2ee: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 8fb2f5: call 0x6c69ce */
  esp -= 4; W32(esp, 0x8fb2fau); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 8fb2fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8fb2fe: mov eax, esi */
  eax = esi;
/* 8fb300: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fb301: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fb308: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb30b: ret  */
  esp += 4; SPILL(); return;
}

void f_8fb330(void) {
  LOAD_REGS();
L_8fb330: /* 8fb330: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fb332: push 0x9d9698 */
  { uint32_t v = 0x9d9698u; esp -= 4; W32(esp, v); }
/* 8fb337: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fb33d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb33e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fb345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fb346: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fb347: mov esi, ecx */
  esi = ecx;
/* 8fb349: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8fb34d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fb353u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fb353: xor eax, eax */
  eax = 0;
/* 8fb355: mov ecx, esi */
  ecx = esi;
/* 8fb357: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8fb35b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8fb35e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 8fb365: call 0x6c69ce */
  esp -= 4; W32(esp, 0x8fb36au); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 8fb36a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8fb36e: mov eax, esi */
  eax = esi;
/* 8fb370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fb371: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fb378: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb37b: ret  */
  esp += 4; SPILL(); return;
}

void f_8fb3a0(void) {
  LOAD_REGS();
L_8fb3a0: /* 8fb3a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fb3a1: mov ebp, esp */
  ebp = esp;
/* 8fb3a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fb3a5: push 0x9d96b9 */
  { uint32_t v = 0x9d96b9u; esp -= 4; W32(esp, v); }
/* 8fb3aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fb3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb3b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fb3b8: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fb3bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fb3bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fb3bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8fb3c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fb3c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fb3c4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8fb3c7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fb3ce: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fb3d0: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fb3d3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8fb3d6: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fb3d9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fb3dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fb3de: jge 0x8fb3e6 */
  if ((sf == of)) goto L_8fb3e6;
L_8fb3e0: /* 8fb3e0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fb3e6: /* 8fb3e6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fb3e9: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fb3ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fb3f1: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fb3f4: jge 0x8fb3fc */
  if ((sf == of)) goto L_8fb3fc;
L_8fb3f6: /* 8fb3f6: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fb3fc: /* 8fb3fc: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8fb402: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fb404: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fb407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb408: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8fb40a: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fb410: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8fb416: call 0x99c958 */
  esp -= 4; W32(esp, 0x8fb41bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8fb41b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8fb41c: mov ecx, 0x3e8 */
  ecx = 0x3e8u;
/* 8fb421: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8fb421);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8fb423: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fb424: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fb42a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fb42c: push 0xaefb08 */
  { uint32_t v = 0xaefb08u; esp -= 4; W32(esp, v); }
/* 8fb431: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8fb436: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb437: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fb43du); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fb43d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb440: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 8fb446: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8fb449: mov edx, dword ptr [eax + 0x218] */
  edx = R32((uint32_t)(eax + 0x218u));
/* 8fb44f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb451: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8fb453: mov dword ptr [eax + 0x218], edx */
  W32((uint32_t)(eax + 0x218u), edx);
/* 8fb459: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb45c: mov ecx, dword ptr [eax + 0x208] */
  ecx = R32((uint32_t)(eax + 0x208u));
/* 8fb462: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb465: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8fb466: mov dword ptr [eax + 0x208], ecx */
  W32((uint32_t)(eax + 0x208u), ecx);
/* 8fb46c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8fb46f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fb471: jle 0x8fb4ef */
  if ((zf || sf != of)) goto L_8fb4ef;
L_8fb473: /* 8fb473: mov al, byte ptr [esi + ecx - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx + 0xffffffffu))) & 0xffu);
/* 8fb477: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fb479: je 0x8fb4c6 */
  if (zf) goto L_8fb4c6;
L_8fb47b: /* 8fb47b: lea ecx, [ecx*8 - 1] */
  ecx = (uint32_t)(ecx*8 + 0xffffffffu);
L_8fb482: /* 8fb482: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8fb484: js 0x8fb48b */
  if (sf) goto L_8fb48b;
L_8fb486: /* 8fb486: shl al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8fb488: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8fb489: jmp 0x8fb482 */
  goto L_8fb482;
L_8fb48b: /* 8fb48b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fb48c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fb48d: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8fb490: call dword ptr [0xcfac74] */
  esp -= 4; W32(esp, 0x8fb496u); SPILL(); f_4e2441(); if (g_unwind) return; /* Core!??0FBitReader@@QAE@PAEH@Z */ RELOAD();
/* 8fb496: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb499: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 8fb49c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fb49d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fb4a1: call 0x6c34ef */
  esp -= 4; W32(esp, 0x8fb4a6u); SPILL(); f_6c34ef(); if (g_unwind) return; RELOAD();
/* 8fb4a6: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8fb4a9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fb4ad: call dword ptr [0xcfa4e4] */
  esp -= 4; W32(esp, 0x8fb4b3u); SPILL(); f_4e1bf4(); if (g_unwind) return; /* Core!??1FBitReader@@UAE@XZ */ RELOAD();
/* 8fb4b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fb4b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fb4bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fb4be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fb4bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fb4c0: mov esp, ebp */
  esp = ebp;
/* 8fb4c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fb4c3: ret 8 */
  esp += 12; SPILL(); return;
L_8fb4c6: /* 8fb4c6: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8fb4cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fb4cd: push 0xaefb2c */
  { uint32_t v = 0xaefb2cu; esp -= 4; W32(esp, v); }
/* 8fb4d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_8fb4d3: /* 8fb4d3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fb4d9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fb4d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fb4dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb4df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fb4e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fb4e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fb4e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fb4e9: mov esp, ebp */
  esp = ebp;
/* 8fb4eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fb4ec: ret 8 */
  esp += 12; SPILL(); return;
L_8fb4ef: /* 8fb4ef: mov edx, dword ptr [0xcfa3b4] */
  edx = R32((uint32_t)(0xcfa3b4u));
/* 8fb4f5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fb4f7: push 0xaefb60 */
  { uint32_t v = 0xaefb60u; esp -= 4; W32(esp, v); }
/* 8fb4fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb4fd: jmp 0x8fb4d3 */
  goto L_8fb4d3;
}

void f_8fb4ff(void) {
  LOAD_REGS();
L_8fb4ff: /* 8fb4ff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8fb502: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fb507: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8fb50a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fb50b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8fb50e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fb513u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fb513(); return;
}

void f_8fb513(void) {
  LOAD_REGS();
L_8fb513: /* 8fb513: push 0xa1f8e8 */
  { uint32_t v = 0xa1f8e8u; esp -= 4; W32(esp, v); }
/* 8fb518: push 0xaefb94 */
  { uint32_t v = 0xaefb94u; esp -= 4; W32(esp, v); }
/* 8fb51d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fb523u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fb523: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb526: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fb528: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fb52a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fb52fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fb52f: guest_badaddr(0x8fb52f); return;
}

void f_8fb5a0(void) {
  LOAD_REGS();
L_8fb5a0: /* 8fb5a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fb5a1: mov ebp, esp */
  ebp = esp;
/* 8fb5a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fb5a5: push 0x9d96d0 */
  { uint32_t v = 0x9d96d0u; esp -= 4; W32(esp, v); }
/* 8fb5aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fb5b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb5b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fb5b8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fb5bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fb5bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fb5bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fb5be: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8fb5c1: xor ebx, ebx */
  ebx = 0;
/* 8fb5c3: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb5c9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fb5cc: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8fb5cf: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fb5d5u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fb5d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb5d7: je 0x8fb5f1 */
  if (zf) goto L_8fb5f1;
L_8fb5d9: /* 8fb5d9: push 0xf2 */
  { uint32_t v = 0xf2u; esp -= 4; W32(esp, v); }
/* 8fb5de: push 0xaefb9c */
  { uint32_t v = 0xaefb9cu; esp -= 4; W32(esp, v); }
/* 8fb5e3: push 0xaefba8 */
  { uint32_t v = 0xaefba8u; esp -= 4; W32(esp, v); }
/* 8fb5e8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fb5eeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fb5ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fb5f1: /* 8fb5f1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8fb5f4: call dword ptr [0xcfacd4] */
  esp -= 4; W32(esp, 0x8fb5fau); SPILL(); f_4e23e2(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@XZ */ RELOAD();
/* 8fb5fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fb5fc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb5ff: mov edi, dword ptr [0xcfac94] */
  edi = R32((uint32_t)(0xcfac94u));
/* 8fb605: mov dword ptr [edx + 0x12c], ecx */
  W32((uint32_t)(edx + 0x12cu), ecx);
/* 8fb60b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb60e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8fb611: mov dword ptr [ecx + 0x130], eax */
  W32((uint32_t)(ecx + 0x130u), eax);
/* 8fb617: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb61a: mov dword ptr [edx + 0x138], ebx */
  W32((uint32_t)(edx + 0x138u), ebx);
/* 8fb620: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb623: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb629: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fb62bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb62b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb62d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb630: jne 0x8fb65f */
  if (!zf) goto L_8fb65f;
L_8fb632: /* 8fb632: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8fb635: cmp dword ptr [eax + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb638: jne 0x8fb646 */
  if (!zf) goto L_8fb646;
L_8fb63a: /* 8fb63a: cmp dword ptr [ecx + 0x120], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x120u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb640: je 0x8fb99d */
  if (zf) goto L_8fb99d;
L_8fb646: /* 8fb646: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 8fb649: fsub qword ptr [ecx + 0x100] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x100u)));
/* 8fb64f: fld dword ptr [eax + 0x54] */
  { double v = F32((uint32_t)(eax + 0x54u)); FPUSH(v); }
/* 8fb652: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fb654: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fb656: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fb659: jp 0x8fb99d */
  if (pf) goto L_8fb99d;
L_8fb65f: /* 8fb65f: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb665: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fb667u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb667: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb669: jne 0x8fb674 */
  if (!zf) goto L_8fb674;
L_8fb66b: /* 8fb66b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb66e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fb66f: call 0x6c6348 */
  esp -= 4; W32(esp, 0x8fb674u); SPILL(); f_6c6348(); if (g_unwind) return; RELOAD();
L_8fb674: /* 8fb674: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb677: mov esi, dword ptr [0xcfab74] */
  esi = R32((uint32_t)(0xcfab74u));
/* 8fb67d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fb67f: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb685: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fb687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb687: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb68a: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb690: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fb696u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fb696: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb698: je 0x8fb6b2 */
  if (zf) goto L_8fb6b2;
L_8fb69a: /* 8fb69a: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8fb69f: push 0xaefbb8 */
  { uint32_t v = 0xaefbb8u; esp -= 4; W32(esp, v); }
/* 8fb6a4: push 0xaefbc4 */
  { uint32_t v = 0xaefbc4u; esp -= 4; W32(esp, v); }
/* 8fb6a9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fb6afu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fb6af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fb6b2: /* 8fb6b2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb6b5: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb6bb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fb6bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb6bd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb6c0: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb6c6: test al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fb6c8: je 0x8fb6cf */
  if (zf) goto L_8fb6cf;
L_8fb6ca: /* 8fb6ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fb6cb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fb6cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb6cd: jmp 0x8fb6b2 */
  goto L_8fb6b2;
L_8fb6cf: /* 8fb6cf: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fb6d5u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fb6d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb6d7: je 0x8fb6f1 */
  if (zf) goto L_8fb6f1;
L_8fb6d9: /* 8fb6d9: push 0x102 */
  { uint32_t v = 0x102u; esp -= 4; W32(esp, v); }
/* 8fb6de: push 0xaefbd4 */
  { uint32_t v = 0xaefbd4u; esp -= 4; W32(esp, v); }
/* 8fb6e3: push 0xaefbe0 */
  { uint32_t v = 0xaefbe0u; esp -= 4; W32(esp, v); }
/* 8fb6e8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fb6eeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fb6ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fb6f1: /* 8fb6f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb6f4: cmp dword ptr [ecx + 0x3f18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3f18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb6fa: je 0x8fb7f3 */
  if (zf) goto L_8fb7f3;
L_8fb700: /* 8fb700: lea esi, [ecx + 0x3f24] */
  esi = (uint32_t)(ecx + 0x3f24u);
/* 8fb706: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8fb708: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fb70a: mov ecx, esi */
  ecx = esi;
/* 8fb70c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fb712u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fb712: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8fb714: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8fb717: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8fb71a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb71c: je 0x8fb728 */
  if (zf) goto L_8fb728;
L_8fb71e: /* 8fb71e: mov ecx, esi */
  ecx = esi;
/* 8fb720: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fb726u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fb726: jmp 0x8fb72a */
  goto L_8fb72a;
L_8fb728: /* 8fb728: xor esi, esi */
  esi = 0;
L_8fb72a: /* 8fb72a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb72d: mov ebx, dword ptr [0xcfac90] */
  ebx = R32((uint32_t)(0xcfac90u));
/* 8fb733: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb739: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fb73bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb73b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fb73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb73e: mov ecx, esi */
  ecx = esi;
/* 8fb740: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fb746u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fb746: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb749: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8fb74b: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb751: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fb753u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb753: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb756: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb75c: mov edi, eax */
  edi = eax;
/* 8fb75e: call dword ptr [0xcfac8c] */
  esp -= 4; W32(esp, 0x8fb764u); SPILL(); f_4e21ee(); if (g_unwind) return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */ RELOAD();
/* 8fb764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fb765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fb767: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8fb76cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8fb76c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb76f: mov esi, dword ptr [ecx + 0x3f28] */
  esi = R32((uint32_t)(ecx + 0x3f28u));
/* 8fb775: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fb778: /* 8fb778: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8fb779: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fb77b: jl 0x8fb8fc */
  if ((sf != of)) goto L_8fb8fc;
L_8fb781: /* 8fb781: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x8fb787u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 8fb787: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8fb78a: fcomp qword ptr [0xa07e30] */
  fpu_com(ST0, F64((uint32_t)(0xa07e30u)));
  FPOP();
/* 8fb790: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fb792: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fb795: jne 0x8fb7ee */
  if (!zf) goto L_8fb7ee;
L_8fb797: /* 8fb797: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb79a: mov eax, dword ptr [ecx + 0x3f14] */
  eax = R32((uint32_t)(ecx + 0x3f14u));
/* 8fb7a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fb7a2: je 0x8fb7c5 */
  if (zf) goto L_8fb7c5;
L_8fb7a4: /* 8fb7a4: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x8fb7aau); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 8fb7aa: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8fb7ad: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 8fb7b3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb7b6: fild dword ptr [ecx + 0x3f14] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x3f14u)); FPUSH(v); }
/* 8fb7bc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fb7be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fb7c0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fb7c3: jp 0x8fb7e0 */
  if (pf) goto L_8fb7e0;
L_8fb7c5: /* 8fb7c5: mov eax, dword ptr [ecx + 0x3f24] */
  eax = R32((uint32_t)(ecx + 0x3f24u));
/* 8fb7cb: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8fb7cd: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 8fb7d0: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8fb7d3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8fb7d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fb7d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8fb7d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fb7da: call dword ptr [edi + 0x74] */
  { uint32_t t = R32((uint32_t)(edi + 0x74u)); esp -= 4; W32(esp, 0x8fb7ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb7dd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8fb7e0: /* 8fb7e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fb7e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fb7e3: add ecx, 0x3f24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb7e9: call 0x6c227a */
  esp -= 4; W32(esp, 0x8fb7eeu); SPILL(); f_6c227a(); if (g_unwind) return; RELOAD();
L_8fb7ee: /* 8fb7ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb7f1: jmp 0x8fb778 */
  goto L_8fb778;
L_8fb7f3: /* 8fb7f3: cmp dword ptr [ecx + 0x3f20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3f20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb7f9: mov eax, dword ptr [ecx + 0x3f14] */
  eax = R32((uint32_t)(ecx + 0x3f14u));
/* 8fb7ff: je 0x8fb9d4 */
  if (zf) goto L_8fb9d4;
L_8fb805: /* 8fb805: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb807: je 0x8fb82e */
  if (zf) goto L_8fb82e;
L_8fb809: /* 8fb809: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x8fb80fu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 8fb80f: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8fb812: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 8fb818: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb81b: fild dword ptr [ecx + 0x3f14] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x3f14u)); FPUSH(v); }
/* 8fb821: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fb823: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fb825: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fb828: jp 0x8fba82 */
  if (pf) goto L_8fba82;
L_8fb82e: /* 8fb82e: lea esi, [ecx + 0x3f24] */
  esi = (uint32_t)(ecx + 0x3f24u);
/* 8fb834: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8fb836: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fb838: mov ecx, esi */
  ecx = esi;
/* 8fb83a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fb840u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fb840: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8fb842: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8fb845: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8fb848: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb84a: je 0x8fb856 */
  if (zf) goto L_8fb856;
L_8fb84c: /* 8fb84c: mov ecx, esi */
  ecx = esi;
/* 8fb84e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fb854u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fb854: jmp 0x8fb858 */
  goto L_8fb858;
L_8fb856: /* 8fb856: xor esi, esi */
  esi = 0;
L_8fb858: /* 8fb858: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb85b: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb861: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x8fb867u); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 8fb867: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fb869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb86a: mov ecx, esi */
  ecx = esi;
/* 8fb86c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fb872u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fb872: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb875: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8fb877: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb87d: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x8fb883u); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 8fb883: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb886: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb88c: mov ebx, eax */
  ebx = eax;
/* 8fb88e: call dword ptr [0xcfac8c] */
  esp -= 4; W32(esp, 0x8fb894u); SPILL(); f_4e21ee(); if (g_unwind) return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */ RELOAD();
/* 8fb894: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fb895: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fb896: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fb897: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8fb89cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8fb89c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fb89f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fb8a1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fb8a4: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8fb8a7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fb8aa: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fb8ad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fb8af: jge 0x8fb8b7 */
  if ((sf == of)) goto L_8fb8b7;
L_8fb8b1: /* 8fb8b1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fb8b7: /* 8fb8b7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fb8ba: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fb8c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fb8c2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fb8c5: jge 0x8fb8cd */
  if ((sf == of)) goto L_8fb8cd;
L_8fb8c7: /* 8fb8c7: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fb8cd: /* 8fb8cd: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8fb8d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fb8d5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb8d8: mov ebx, dword ptr [0xcfac90] */
  ebx = R32((uint32_t)(0xcfac90u));
/* 8fb8de: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8fb8e0: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fb8e6: fild dword ptr [edx + 0x3f20] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x3f20u)); FPUSH(v); }
/* 8fb8ec: fmul qword ptr [0xa1f978] */
  ST0 = ST0 * (F64((uint32_t)(0xa1f978u)));
/* 8fb8f2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8fb8f4: fstp qword ptr [esi + 0xc] */
  WF64((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 8fb8f7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8fb8f9: /* 8fb8f9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8fb8fc: /* 8fb8fc: mov edx, dword ptr [ecx + 0xeac] */
  edx = R32((uint32_t)(ecx + 0xeacu));
/* 8fb902: mov eax, edx */
  eax = edx;
/* 8fb904: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fb909: mov dword ptr [ecx + eax*4 + 0xaa8], edx */
  W32((uint32_t)(ecx + eax*4 + 0xaa8u), edx);
/* 8fb910: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb913: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8fb916: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 8fb919: mov dword ptr [ecx + eax*8 + 0x2a8], esi */
  W32((uint32_t)(ecx + eax*8 + 0x2a8u), esi);
/* 8fb920: mov ecx, dword ptr [edx + 0x48] */
  ecx = R32((uint32_t)(edx + 0x48u));
/* 8fb923: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb926: mov dword ptr [edx + eax*8 + 0x2ac], ecx */
  W32((uint32_t)(edx + eax*8 + 0x2acu), ecx);
/* 8fb92d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb930: inc dword ptr [eax + 0xeac] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xeacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xeacu), r);
  }
/* 8fb936: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb939: inc dword ptr [eax + 0x20c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x20cu), r);
  }
/* 8fb93f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb942: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8fb945: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8fb948: mov dword ptr [eax + 0x100], edx */
  W32((uint32_t)(eax + 0x100u), edx);
/* 8fb94e: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 8fb951: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb954: mov dword ptr [ecx + 0x104], eax */
  W32((uint32_t)(ecx + 0x104u), eax);
/* 8fb95a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb95d: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb963: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fb965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb965: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb968: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 8fb96e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8fb970: add dword ptr [ecx + 0x118], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x118u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x118u), r);
  }
/* 8fb976: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb979: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fb97f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fb981u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb981: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb984: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 8fb98a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8fb98c: add dword ptr [ecx + 0x21c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x21cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x21cu), r);
  }
/* 8fb992: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb995: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fb997: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8fb99au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fb99a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8fb99d: /* 8fb99d: xor edi, edi */
  edi = 0;
/* 8fb99f: nop  */
L_8fb9a0: /* 8fb9a0: cmp edi, dword ptr [ecx + 0x3eac] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3eacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fb9a6: jge 0x8fba8d */
  if ((sf == of)) goto L_8fba8d;
L_8fb9ac: /* 8fb9ac: mov edx, dword ptr [ecx + 0x3ea8] */
  edx = R32((uint32_t)(ecx + 0x3ea8u));
/* 8fb9b2: lea esi, [ecx + 0x3eb4] */
  esi = (uint32_t)(ecx + 0x3eb4u);
/* 8fb9b8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fb9ba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fb9bc: mov ecx, esi */
  ecx = esi;
/* 8fb9be: lea ebx, [edx + edi*4] */
  ebx = (uint32_t)(edx + edi*4);
/* 8fb9c1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fb9c7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fb9c7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8fb9c9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8fb9cb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8fb9ce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb9d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8fb9d2: jmp 0x8fb9a0 */
  goto L_8fb9a0;
L_8fb9d4: /* 8fb9d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fb9d6: je 0x8fb9fd */
  if (zf) goto L_8fb9fd;
L_8fb9d8: /* 8fb9d8: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x8fb9deu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 8fb9de: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8fb9e1: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 8fb9e7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fb9ea: fild dword ptr [ecx + 0x3f14] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x3f14u)); FPUSH(v); }
/* 8fb9f0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fb9f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fb9f4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fb9f7: jp 0x8fba82 */
  if (pf) goto L_8fba82;
L_8fb9fd: /* 8fb9fd: mov ebx, dword ptr [0xcfac90] */
  ebx = R32((uint32_t)(0xcfac90u));
/* 8fba03: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fba09: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fba0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fba0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fba0e: mov edi, dword ptr [0xcfac8c] */
  edi = R32((uint32_t)(0xcfac8cu));
/* 8fba14: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fba1a: mov esi, eax */
  esi = eax;
/* 8fba1c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fba1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fba1e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fba21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fba23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fba24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fba25: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8fba28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fba28: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fba2b: mov eax, dword ptr [ecx + 0x3f1c] */
  eax = R32((uint32_t)(ecx + 0x3f1cu));
/* 8fba31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fba33: je 0x8fb8fc */
  if (zf) goto L_8fb8fc;
L_8fba39: /* 8fba39: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x8fba3fu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 8fba3f: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8fba42: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 8fba48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fba4b: fild dword ptr [ecx + 0x3f1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x3f1cu)); FPUSH(v); }
/* 8fba51: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fba53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fba55: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fba58: jne 0x8fb8fc */
  if (!zf) goto L_8fb8fc;
L_8fba5e: /* 8fba5e: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fba64: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fba66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fba66: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fba69: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fba6f: mov esi, eax */
  esi = eax;
/* 8fba71: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fba73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fba73: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fba76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fba78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fba79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fba7a: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8fba7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fba7d: jmp 0x8fb8f9 */
  goto L_8fb8f9;
L_8fba82: /* 8fba82: mov ebx, dword ptr [0xcfac90] */
  ebx = R32((uint32_t)(0xcfac90u));
/* 8fba88: jmp 0x8fb8fc */
  goto L_8fb8fc;
L_8fba8d: /* 8fba8d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8fba8f: add ecx, 0x3ea8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ea8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fba95: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fba97: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8fba9du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8fba9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fbaa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fbaa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fbaa2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fbaa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fbaaa: mov esp, ebp */
  esp = ebp;
/* 8fbaac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fbaad: ret  */
  esp += 4; SPILL(); return;
}

void f_8fbaae(void) {
  LOAD_REGS();
L_8fbaae: /* 8fbaae: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8fbab1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fbab6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8fbab9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fbaba: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8fbabd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fbac2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fbac2(); return;
}

void f_8fbac2(void) {
  LOAD_REGS();
L_8fbac2: /* 8fbac2: push 0xa1f93c */
  { uint32_t v = 0xa1f93cu; esp -= 4; W32(esp, v); }
/* 8fbac7: push 0xaefbf0 */
  { uint32_t v = 0xaefbf0u; esp -= 4; W32(esp, v); }
/* 8fbacc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fbad2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fbad2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fbad5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fbad7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fbad9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fbadeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fbade: guest_badaddr(0x8fbade); return;
}

void f_8fbc30(void) {
  LOAD_REGS();
L_8fbc30: /* 8fbc30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fbc31: mov ebp, esp */
  ebp = esp;
/* 8fbc33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fbc35: push 0x9d96e0 */
  { uint32_t v = 0x9d96e0u; esp -= 4; W32(esp, v); }
/* 8fbc3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fbc40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fbc41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fbc48: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fbc4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fbc4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fbc4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fbc4e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8fbc51: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fbc53: xor ebx, ebx */
  ebx = 0;
/* 8fbc55: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fbc58: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8fbc5b: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x8fbc5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fbc5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbc61: cmp dword ptr [ecx + 0x3f20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3f20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fbc67: je 0x8fbcf5 */
  if (zf) goto L_8fbcf5;
L_8fbc6d: /* 8fbc6d: xor esi, esi */
  esi = 0;
/* 8fbc6f: nop  */
L_8fbc70: /* 8fbc70: cmp esi, dword ptr [ecx + 0x3f28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3f28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fbc76: jge 0x8fbcf5 */
  if ((sf == of)) goto L_8fbcf5;
L_8fbc78: /* 8fbc78: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fbc7a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fbc7d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8fbc80: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fbc83: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fbc86: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fbc88: jge 0x8fbc90 */
  if ((sf == of)) goto L_8fbc90;
L_8fbc8a: /* 8fbc8a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fbc90: /* 8fbc90: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fbc93: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fbc99: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fbc9b: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fbc9e: jge 0x8fbca6 */
  if ((sf == of)) goto L_8fbca6;
L_8fbca0: /* 8fbca0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fbca6: /* 8fbca6: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8fbcab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fbcad: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbcb0: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 8fbcb3: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8fbcb5: mov eax, dword ptr [ecx + 0x3f24] */
  eax = R32((uint32_t)(ecx + 0x3f24u));
/* 8fbcbb: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8fbcbe: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fbcc4: fcomp qword ptr [edx + 0xc] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcu)));
  FPOP();
/* 8fbcc7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbcc9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fbccc: jne 0x8fbcef */
  if (!zf) goto L_8fbcef;
L_8fbcce: /* 8fbcce: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8fbcd1: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8fbcd3: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8fbcd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fbcd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fbcd7: call dword ptr [edi + 0x74] */
  { uint32_t t = R32((uint32_t)(edi + 0x74u)); esp -= 4; W32(esp, 0x8fbcdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fbcda: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbcdd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fbcdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fbce0: add ecx, 0x3f24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fbce6: call 0x6c227a */
  esp -= 4; W32(esp, 0x8fbcebu); SPILL(); f_6c227a(); if (g_unwind) return; RELOAD();
/* 8fbceb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbcee: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8fbcef: /* 8fbcef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fbcf0: jmp 0x8fbc70 */
  goto L_8fbc70;
L_8fbcf5: /* 8fbcf5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fbcf7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fbcfa: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8fbcfd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fbd00: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fbd03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fbd05: jge 0x8fbd0d */
  if ((sf == of)) goto L_8fbd0d;
L_8fbd07: /* 8fbd07: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fbd0d: /* 8fbd0d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fbd10: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fbd16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fbd18: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fbd1b: jge 0x8fbd23 */
  if ((sf == of)) goto L_8fbd23;
L_8fbd1d: /* 8fbd1d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fbd23: /* 8fbd23: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8fbd29: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fbd2b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbd2e: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8fbd30: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fbd36: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8fbd38: fsub qword ptr [eax + 0x230] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x230u)));
/* 8fbd3e: fstp qword ptr [eax + 0x238] */
  WF64((uint32_t)(eax + 0x238u), ST0); FPOP();
/* 8fbd44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbd47: fstp qword ptr [eax + 0x230] */
  WF64((uint32_t)(eax + 0x230u), ST0); FPOP();
/* 8fbd4d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbd50: fld qword ptr [eax + 0x238] */
  { double v = F64((uint32_t)(eax + 0x238u)); FPUSH(v); }
/* 8fbd56: fadd qword ptr [eax + 0x240] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x240u)));
/* 8fbd5c: fstp qword ptr [eax + 0x240] */
  WF64((uint32_t)(eax + 0x240u), ST0); FPOP();
/* 8fbd62: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbd65: inc dword ptr [eax + 0x250] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x250u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x250u), r);
  }
/* 8fbd6b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbd6e: fld qword ptr [ecx + 0x240] */
  { double v = F64((uint32_t)(ecx + 0x240u)); FPUSH(v); }
/* 8fbd74: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8fbd7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbd7c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fbd7f: jne 0x8fbdb1 */
  if (!zf) goto L_8fbdb1;
L_8fbd81: /* 8fbd81: fild dword ptr [ecx + 0x250] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x250u)); FPUSH(v); }
/* 8fbd87: fdivr qword ptr [ecx + 0x240] */
  ST0 = (F64((uint32_t)(ecx + 0x240u))) / ST0;
/* 8fbd8d: fstp qword ptr [ecx + 0x248] */
  WF64((uint32_t)(ecx + 0x248u), ST0); FPOP();
/* 8fbd93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbd96: mov dword ptr [ecx + 0x240], ebx */
  W32((uint32_t)(ecx + 0x240u), ebx);
/* 8fbd9c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbd9f: mov dword ptr [edx + 0x244], ebx */
  W32((uint32_t)(edx + 0x244u), ebx);
/* 8fbda5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbda8: mov dword ptr [eax + 0x250], ebx */
  W32((uint32_t)(eax + 0x250u), ebx);
/* 8fbdae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8fbdb1: /* 8fbdb1: cmp dword ptr [ecx + 0xc4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fbdb7: je 0x8fbe12 */
  if (zf) goto L_8fbe12;
L_8fbdb9: /* 8fbdb9: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8fbdbc: mov eax, dword ptr [edx + 0x44] */
  eax = R32((uint32_t)(edx + 0x44u));
/* 8fbdbf: mov dword ptr [ecx + 0xf8], eax */
  W32((uint32_t)(ecx + 0xf8u), eax);
/* 8fbdc5: mov ecx, dword ptr [edx + 0x48] */
  ecx = R32((uint32_t)(edx + 0x48u));
/* 8fbdc8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbdcb: mov dword ptr [edx + 0xfc], ecx */
  W32((uint32_t)(edx + 0xfcu), ecx);
/* 8fbdd1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbdd4: mov eax, dword ptr [ecx + 0x3ec4] */
  eax = R32((uint32_t)(ecx + 0x3ec4u));
/* 8fbdda: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 8fbddd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8fbde0: /* 8fbde0: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fbde2: jl 0x8fbe12 */
  if ((sf != of)) goto L_8fbe12;
L_8fbde4: /* 8fbde4: mov eax, dword ptr [ecx + 0x3ec0] */
  eax = R32((uint32_t)(ecx + 0x3ec0u));
/* 8fbdea: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8fbded: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
L_8fbdf0: /* 8fbdf0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fbdf2: je 0x8fbe00 */
  if (zf) goto L_8fbe00;
L_8fbdf4: /* 8fbdf4: mov dword ptr [eax + 0x64], 1 */
  W32((uint32_t)(eax + 0x64u), 0x1u);
/* 8fbdfb: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8fbdfe: jmp 0x8fbdf0 */
  goto L_8fbdf0;
L_8fbe00: /* 8fbe00: mov dword ptr [ecx + 0x2c], 1 */
  W32((uint32_t)(ecx + 0x2cu), 0x1u);
/* 8fbe07: call 0x6c913d */
  esp -= 4; W32(esp, 0x8fbe0cu); SPILL(); f_6c913d(); if (g_unwind) return; RELOAD();
/* 8fbe0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbe0f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8fbe10: jmp 0x8fbde0 */
  goto L_8fbde0;
L_8fbe12: /* 8fbe12: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8fbe15: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 8fbe18: fsub qword ptr [ecx + 0x1bc] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x1bcu)));
/* 8fbe1e: fld dword ptr [ecx + 0x1c4] */
  { double v = F32((uint32_t)(ecx + 0x1c4u)); FPUSH(v); }
/* 8fbe24: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fbe26: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbe28: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fbe2b: jp 0x8fc145 */
  if (pf) goto L_8fc145;
L_8fbe31: /* 8fbe31: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbe34: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8fbe37: fld qword ptr [ecx + 0x44] */
  { double v = F64((uint32_t)(ecx + 0x44u)); FPUSH(v); }
/* 8fbe3a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fbe3e: fsub qword ptr [eax + 0x1bc] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x1bcu)));
/* 8fbe44: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8fbe4a: fild dword ptr [eax + 0x218] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x218u)); FPUSH(v); }
/* 8fbe50: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbe52: fstp dword ptr [eax + 0x1c8] */
  WF32((uint32_t)(eax + 0x1c8u), ST0); FPOP();
/* 8fbe58: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbe5b: fild dword ptr [eax + 0x21c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x21cu)); FPUSH(v); }
/* 8fbe61: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbe63: fstp dword ptr [eax + 0x1cc] */
  WF32((uint32_t)(eax + 0x1ccu), ST0); FPOP();
/* 8fbe69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbe6c: fild dword ptr [eax + 0x208] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x208u)); FPUSH(v); }
/* 8fbe72: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbe74: fstp dword ptr [eax + 0x1d0] */
  WF32((uint32_t)(eax + 0x1d0u), ST0); FPOP();
/* 8fbe7a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbe7d: fild dword ptr [eax + 0x20c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x20cu)); FPUSH(v); }
/* 8fbe83: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbe85: fstp dword ptr [eax + 0x1d4] */
  WF32((uint32_t)(eax + 0x1d4u), ST0); FPOP();
/* 8fbe8b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbe8e: fild dword ptr [eax + 0x210] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x210u)); FPUSH(v); }
/* 8fbe94: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbe96: fstp dword ptr [eax + 0x1d8] */
  WF32((uint32_t)(eax + 0x1d8u), ST0); FPOP();
/* 8fbe9c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbe9f: fild dword ptr [eax + 0x214] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x214u)); FPUSH(v); }
/* 8fbea5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbea7: fstp dword ptr [eax + 0x1dc] */
  WF32((uint32_t)(eax + 0x1dcu), ST0); FPOP();
/* 8fbead: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbeb0: fild dword ptr [eax + 0x220] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x220u)); FPUSH(v); }
/* 8fbeb6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbeb8: fstp dword ptr [eax + 0x1e8] */
  WF32((uint32_t)(eax + 0x1e8u), ST0); FPOP();
/* 8fbebe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbec1: fild dword ptr [eax + 0x224] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x224u)); FPUSH(v); }
/* 8fbec7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8fbec9: fstp dword ptr [eax + 0x1ec] */
  WF32((uint32_t)(eax + 0x1ecu), ST0); FPOP();
/* 8fbecf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbed2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fbed4: fld dword ptr [ecx + 0x1d4] */
  { double v = F32((uint32_t)(ecx + 0x1d4u)); FPUSH(v); }
/* 8fbeda: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8fbee0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbee2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fbee5: je 0x8fbeef */
  if (zf) goto L_8fbeef;
L_8fbee7: /* 8fbee7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fbee9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8fbeef: /* 8fbeef: fild dword ptr [ecx + 0x204] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x204u)); FPUSH(v); }
/* 8fbef5: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8fbef7: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 8fbefd: fstp dword ptr [ecx + 0x1e4] */
  WF32((uint32_t)(ecx + 0x1e4u), ST0); FPOP();
/* 8fbf03: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbf06: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fbf08: fild dword ptr [ecx + 0x200] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x200u)); FPUSH(v); }
/* 8fbf0e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8fbf10: fadd dword ptr [ecx + 0x1d0] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1d0u)));
/* 8fbf16: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8fbf1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbf1e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fbf21: je 0x8fbf2b */
  if (zf) goto L_8fbf2b;
L_8fbf23: /* 8fbf23: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fbf25: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8fbf2b: /* 8fbf2b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8fbf2d: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8fbf2f: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 8fbf35: fstp dword ptr [ecx + 0x1e0] */
  WF32((uint32_t)(ecx + 0x1e0u), ST0); FPOP();
/* 8fbf3b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbf3e: mov ecx, dword ptr [eax + 0x228] */
  ecx = R32((uint32_t)(eax + 0x228u));
/* 8fbf44: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fbf46: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fbf48: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8fbf4b: je 0x8fbf5f */
  if (zf) goto L_8fbf5f;
L_8fbf4d: /* 8fbf4d: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fbf50: fdivr dword ptr [eax + 0x1f8] */
  ST0 = (F32((uint32_t)(eax + 0x1f8u))) / ST0;
/* 8fbf56: fstp dword ptr [eax + 0x1f4] */
  WF32((uint32_t)(eax + 0x1f4u), ST0); FPOP();
/* 8fbf5c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_8fbf5f: /* 8fbf5f: mov edx, dword ptr [eax + 0x1f4] */
  edx = R32((uint32_t)(eax + 0x1f4u));
/* 8fbf65: mov dword ptr [eax + 0x1f0], edx */
  W32((uint32_t)(eax + 0x1f0u), edx);
/* 8fbf6b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbf6e: fld dword ptr [ecx + 0x1e4] */
  { double v = F32((uint32_t)(ecx + 0x1e4u)); FPUSH(v); }
/* 8fbf74: fcomp dword ptr [0xa105c0] */
  fpu_com(ST0, F32((uint32_t)(0xa105c0u)));
  FPOP();
/* 8fbf7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbf7c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fbf7f: je 0x8fbf9c */
  if (zf) goto L_8fbf9c;
L_8fbf81: /* 8fbf81: fld dword ptr [ecx + 0x1e0] */
  { double v = F32((uint32_t)(ecx + 0x1e0u)); FPUSH(v); }
/* 8fbf87: fcomp dword ptr [0xa105c0] */
  fpu_com(ST0, F32((uint32_t)(0xa105c0u)));
  FPOP();
/* 8fbf8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbf8f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fbf92: je 0x8fbf9c */
  if (zf) goto L_8fbf9c;
L_8fbf94: /* 8fbf94: mov dword ptr [ecx + 0x22c], ebx */
  W32((uint32_t)(ecx + 0x22cu), ebx);
/* 8fbf9a: jmp 0x8fbfa2 */
  goto L_8fbfa2;
L_8fbf9c: /* 8fbf9c: inc dword ptr [ecx + 0x22c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x22cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x22cu), r);
  }
L_8fbfa2: /* 8fbfa2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fbfa5: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8fbfa8: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fbfaa: je 0x8fc0b1 */
  if (zf) goto L_8fc0b1;
L_8fbfb0: /* 8fbfb0: fld dword ptr [ecx + 0x1e4] */
  { double v = F32((uint32_t)(ecx + 0x1e4u)); FPUSH(v); }
/* 8fbfb6: fld dword ptr [ecx + 0x1e0] */
  { double v = F32((uint32_t)(ecx + 0x1e0u)); FPUSH(v); }
/* 8fbfbc: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8fbfbf: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8fbfc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fbfc3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fbfc6: jne 0x8fbfcd */
  if (!zf) goto L_8fbfcd;
L_8fbfc8: /* 8fbfc8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fbfca: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
L_8fbfcd: /* 8fbfcd: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8fbfd3: mov eax, dword ptr [edx + 0x648] */
  eax = R32((uint32_t)(edx + 0x648u));
/* 8fbfd9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fbfdb: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8fbfde: fmul qword ptr [0xa14820] */
  ST0 = ST0 * (F64((uint32_t)(0xa14820u)));
/* 8fbfe4: fadd dword ptr [ecx + 0x1f0] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1f0u)));
/* 8fbfea: je 0x8fc0af */
  if (zf) goto L_8fc0af;
L_8fbff0: /* 8fbff0: cmp dword ptr [ecx + 0xc4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fbff6: jne 0x8fc096 */
  if (!zf) goto L_8fc096;
L_8fbffc: /* 8fbffc: fcomp qword ptr [0xa0d188] */
  fpu_com(ST0, F64((uint32_t)(0xa0d188u)));
  FPOP();
/* 8fc002: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc004: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fc007: je 0x8fc022 */
  if (zf) goto L_8fc022;
L_8fc009: /* 8fc009: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8fc00f: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8fc012: fimul dword ptr [ecx + 0x44] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ecx + 0x44u)));
/* 8fc015: fcomp dword ptr [0xa1f9f4] */
  fpu_com(ST0, F32((uint32_t)(0xa1f9f4u)));
  FPOP();
/* 8fc01b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc01d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fc020: jp 0x8fc098 */
  if (pf) goto L_8fc098;
L_8fc022: /* 8fc022: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8fc025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc026: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fc02c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8fc02f: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x8fc034u); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 8fc034: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc036: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc039: je 0x8fc098 */
  if (zf) goto L_8fc098;
L_8fc03b: /* 8fc03b: mov eax, 1 */
  eax = 0x1u;
L_8fc040: /* 8fc040: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 8fc043: mov ecx, dword ptr [ecx + 0x648] */
  ecx = R32((uint32_t)(ecx + 0x648u));
/* 8fc049: mov edi, dword ptr [ecx + 0x37c] */
  edi = R32((uint32_t)(ecx + 0x37cu));
/* 8fc04f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8fc052: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8fc054: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fc057: mov edx, edi */
  edx = edi;
/* 8fc059: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8fc05b: mov dword ptr [ecx + 0x37c], edx */
  W32((uint32_t)(ecx + 0x37cu), edx);
/* 8fc061: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc064: jmp 0x8fc0b1 */
  goto L_8fc0b1;
L_8fc096: /* 8fc096: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8fc098: /* 8fc098: fld dword ptr [ecx + 0x1d0] */
  { double v = F32((uint32_t)(ecx + 0x1d0u)); FPUSH(v); }
/* 8fc09e: fcomp dword ptr [0xa0b130] */
  fpu_com(ST0, F32((uint32_t)(0xa0b130u)));
  FPOP();
/* 8fc0a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc0a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fc0a9: jnp 0x8fc03b */
  if (!pf) goto L_8fc03b;
L_8fc0ab: /* 8fc0ab: xor eax, eax */
  eax = 0;
/* 8fc0ad: jmp 0x8fc040 */
  goto L_8fc040;
L_8fc0af: /* 8fc0af: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8fc0b1: /* 8fc0b1: mov dword ptr [ecx + 0x1f8], ebx */
  W32((uint32_t)(ecx + 0x1f8u), ebx);
/* 8fc0b7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0ba: mov dword ptr [edx + 0x1fc], 0x461c3c00 */
  W32((uint32_t)(edx + 0x1fcu), 0x461c3c00u);
/* 8fc0c4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0c7: mov dword ptr [eax + 0x218], ebx */
  W32((uint32_t)(eax + 0x218u), ebx);
/* 8fc0cd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0d0: mov dword ptr [ecx + 0x21c], ebx */
  W32((uint32_t)(ecx + 0x21cu), ebx);
/* 8fc0d6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0d9: mov dword ptr [edx + 0x208], ebx */
  W32((uint32_t)(edx + 0x208u), ebx);
/* 8fc0df: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0e2: mov dword ptr [eax + 0x20c], ebx */
  W32((uint32_t)(eax + 0x20cu), ebx);
/* 8fc0e8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0eb: mov dword ptr [ecx + 0x210], ebx */
  W32((uint32_t)(ecx + 0x210u), ebx);
/* 8fc0f1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0f4: mov dword ptr [edx + 0x214], ebx */
  W32((uint32_t)(edx + 0x214u), ebx);
/* 8fc0fa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0fd: mov dword ptr [eax + 0x200], ebx */
  W32((uint32_t)(eax + 0x200u), ebx);
/* 8fc103: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc106: mov dword ptr [ecx + 0x204], ebx */
  W32((uint32_t)(ecx + 0x204u), ebx);
/* 8fc10c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc10f: mov dword ptr [edx + 0x220], ebx */
  W32((uint32_t)(edx + 0x220u), ebx);
/* 8fc115: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc118: mov dword ptr [eax + 0x224], ebx */
  W32((uint32_t)(eax + 0x224u), ebx);
/* 8fc11e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc121: mov dword ptr [ecx + 0x228], ebx */
  W32((uint32_t)(ecx + 0x228u), ebx);
/* 8fc127: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc12a: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8fc12d: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* 8fc130: mov dword ptr [eax + 0x1bc], ecx */
  W32((uint32_t)(eax + 0x1bcu), ecx);
/* 8fc136: mov edx, dword ptr [edx + 0x48] */
  edx = R32((uint32_t)(edx + 0x48u));
/* 8fc139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc13c: mov dword ptr [eax + 0x1c0], edx */
  W32((uint32_t)(eax + 0x1c0u), edx);
/* 8fc142: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8fc145: /* 8fc145: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8fc148: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 8fc14b: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8fc14e: fsub qword ptr [ecx + 0x108] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x108u)));
/* 8fc154: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fc15a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8fc15c: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8fc15f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8fc162: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc165: fimul dword ptr [esi + 0x44] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esi + 0x44u)));
/* 8fc168: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8fc16b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8fc16d: call 0x99c958 */
  esp -= 4; W32(esp, 0x8fc172u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8fc172: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8fc174: mov ecx, dword ptr [esi + 0x118] */
  ecx = R32((uint32_t)(esi + 0x118u));
/* 8fc17a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8fc17c: mov dword ptr [esi + 0x118], ecx */
  W32((uint32_t)(esi + 0x118u), ecx);
/* 8fc182: fchs  */
  ST0 = -ST0;
/* 8fc184: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc187: fild dword ptr [esi + 0x118] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x118u)); FPUSH(v); }
/* 8fc18d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8fc18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fc194: jp 0x8fc1a6 */
  if (pf) goto L_8fc1a6;
L_8fc196: /* 8fc196: call 0x99c958 */
  esp -= 4; W32(esp, 0x8fc19bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8fc19b: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* 8fc1a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc1a4: jmp 0x8fc1a8 */
  goto L_8fc1a8;
L_8fc1a6: /* 8fc1a6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8fc1a8: /* 8fc1a8: mov edi, dword ptr [esi + 0x6c] */
  edi = R32((uint32_t)(esi + 0x6cu));
/* 8fc1ab: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc1ae: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8fc1b1: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 8fc1b4: je 0x8fc1e6 */
  if (zf) goto L_8fc1e6;
L_8fc1b6: /* 8fc1b6: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8fc1b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc1bb: je 0x8fc1e6 */
  if (zf) goto L_8fc1e6;
L_8fc1bd: /* 8fc1bd: mov ecx, dword ptr [eax + 0x4c4] */
  ecx = R32((uint32_t)(eax + 0x4c4u));
/* 8fc1c3: mov eax, ecx */
  eax = ecx;
/* 8fc1c5: shr eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8fc1c8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 8fc1cb: jne 0x8fc1d5 */
  if (!zf) goto L_8fc1d5;
L_8fc1cd: /* 8fc1cd: test ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fc1d3: je 0x8fc1e6 */
  if (zf) goto L_8fc1e6;
L_8fc1d5: /* 8fc1d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc1d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fc1d9: je 0x8fc1e3 */
  if (zf) goto L_8fc1e3;
L_8fc1db: /* 8fc1db: fld dword ptr [0xa0b130] */
  { double v = F32((uint32_t)(0xa0b130u)); FPUSH(v); }
/* 8fc1e1: jmp 0x8fc1e6 */
  goto L_8fc1e6;
L_8fc1e3: /* 8fc1e3: fld dword ptr [edx + 0x4c] */
  { double v = F32((uint32_t)(edx + 0x4cu)); FPUSH(v); }
L_8fc1e6: /* 8fc1e6: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 8fc1e9: fsub qword ptr [esi + 0xf8] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xf8u)));
/* 8fc1ef: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8fc1f2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8fc1f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8fc1f6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fc1f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc1fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fc1fd: jne 0x8fc236 */
  if (!zf) goto L_8fc236;
L_8fc1ff: /* 8fc1ff: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc202: je 0x8fc232 */
  if (zf) goto L_8fc232;
L_8fc204: /* 8fc204: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8fc207: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8fc20a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8fc20f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc210: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fc212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fc213: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fc216: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fc219: push 0xaf0320 */
  { uint32_t v = 0xaf0320u; esp -= 4; W32(esp, v); }
/* 8fc21e: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8fc223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc224: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fc22au); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fc22a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc22d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc230: jmp 0x8fc274 */
  goto L_8fc274;
L_8fc232: /* 8fc232: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fc234: jmp 0x8fc274 */
  goto L_8fc274;
L_8fc236: /* 8fc236: mov eax, dword ptr [esi + 0x3ec4] */
  eax = R32((uint32_t)(esi + 0x3ec4u));
/* 8fc23c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fc23e: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_8fc241: /* 8fc241: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fc243: jl 0x8fc25c */
  if ((sf != of)) goto L_8fc25c;
L_8fc245: /* 8fc245: mov edx, dword ptr [esi + 0x3ec0] */
  edx = R32((uint32_t)(esi + 0x3ec0u));
/* 8fc24b: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 8fc24e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fc250: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8fc256u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fc256: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc259: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8fc25a: jmp 0x8fc241 */
  goto L_8fc241;
L_8fc25c: /* 8fc25c: cmp dword ptr [esi + 0xeb4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xeb4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc262: jne 0x8fc27e */
  if (!zf) goto L_8fc27e;
L_8fc264: /* 8fc264: cmp dword ptr [esi + 0x1eb0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1eb0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc26a: jne 0x8fc274 */
  if (!zf) goto L_8fc274;
L_8fc26c: /* 8fc26c: cmp dword ptr [esi + 0x2eac], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2eacu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc272: je 0x8fc27e */
  if (zf) goto L_8fc27e;
L_8fc274: /* 8fc274: mov dword ptr [esi + 0x6c], 1 */
  W32((uint32_t)(esi + 0x6cu), 0x1u);
/* 8fc27b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_8fc27e: /* 8fc27e: mov ecx, esi */
  ecx = esi;
/* 8fc280: call 0x6c6375 */
  esp -= 4; W32(esp, 0x8fc285u); SPILL(); f_6c6375(); if (g_unwind) return; RELOAD();
/* 8fc285: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc288: cmp dword ptr [ecx + 0x138], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x138u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc28e: jne 0x8fc2a8 */
  if (!zf) goto L_8fc2a8;
L_8fc290: /* 8fc290: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8fc293: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 8fc296: fsub qword ptr [ecx + 0x100] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x100u)));
/* 8fc29c: fld dword ptr [eax + 0x54] */
  { double v = F32((uint32_t)(eax + 0x54u)); FPUSH(v); }
/* 8fc29f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fc2a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc2a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fc2a6: jp 0x8fc2b0 */
  if (pf) goto L_8fc2b0;
L_8fc2a8: /* 8fc2a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fc2aa: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8fc2b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fc2b0: /* 8fc2b0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc2b3: mov ecx, dword ptr [eax + 0x3eec] */
  ecx = R32((uint32_t)(eax + 0x3eecu));
/* 8fc2b9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc2bb: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fc2bf: je 0x8fc2c6 */
  if (zf) goto L_8fc2c6;
L_8fc2c1: /* 8fc2c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fc2c3: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8fc2c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fc2c6: /* 8fc2c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fc2c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fc2ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fc2cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fc2d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fc2d3: mov esp, ebp */
  esp = ebp;
/* 8fc2d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fc2d6: ret  */
  esp += 4; SPILL(); return;
}

void f_8fc066(void) {
  LOAD_REGS();
L_8fc066: /* 8fc066: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8fc069: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fc06e: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8fc071: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fc072: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8fc075: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fc07au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fc07a(); return;
}

void f_8fc07a(void) {
  LOAD_REGS();
  goto L_8fc07a;
L_8fc03b: /* 8fc03b: mov eax, 1 */
  eax = 0x1u;
L_8fc040: /* 8fc040: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 8fc043: mov ecx, dword ptr [ecx + 0x648] */
  ecx = R32((uint32_t)(ecx + 0x648u));
/* 8fc049: mov edi, dword ptr [ecx + 0x37c] */
  edi = R32((uint32_t)(ecx + 0x37cu));
/* 8fc04f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8fc052: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8fc054: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8fc057: mov edx, edi */
  edx = edi;
/* 8fc059: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8fc05b: mov dword ptr [ecx + 0x37c], edx */
  W32((uint32_t)(ecx + 0x37cu), edx);
/* 8fc061: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc064: jmp 0x8fc0b1 */
  goto L_8fc0b1;
L_8fc07a: /* 8fc07a: push 0xa1f9d8 */
  { uint32_t v = 0xa1f9d8u; esp -= 4; W32(esp, v); }
/* 8fc07f: push 0xaf0314 */
  { uint32_t v = 0xaf0314u; esp -= 4; W32(esp, v); }
/* 8fc084: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fc08au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fc08a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc08d: xor ebx, ebx */
  ebx = 0;
/* 8fc08f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc091: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fc096u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8fc096: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fc098: fld dword ptr [ecx + 0x1d0] */
  { double v = F32((uint32_t)(ecx + 0x1d0u)); FPUSH(v); }
/* 8fc09e: fcomp dword ptr [0xa0b130] */
  fpu_com(ST0, F32((uint32_t)(0xa0b130u)));
  FPOP();
/* 8fc0a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc0a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fc0a9: jnp 0x8fc03b */
  if (!pf) goto L_8fc03b;
L_8fc0ab: /* 8fc0ab: xor eax, eax */
  eax = 0;
/* 8fc0ad: jmp 0x8fc040 */
  goto L_8fc040;
L_8fc0b1: /* 8fc0b1: mov dword ptr [ecx + 0x1f8], ebx */
  W32((uint32_t)(ecx + 0x1f8u), ebx);
/* 8fc0b7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0ba: mov dword ptr [edx + 0x1fc], 0x461c3c00 */
  W32((uint32_t)(edx + 0x1fcu), 0x461c3c00u);
/* 8fc0c4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0c7: mov dword ptr [eax + 0x218], ebx */
  W32((uint32_t)(eax + 0x218u), ebx);
/* 8fc0cd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0d0: mov dword ptr [ecx + 0x21c], ebx */
  W32((uint32_t)(ecx + 0x21cu), ebx);
/* 8fc0d6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0d9: mov dword ptr [edx + 0x208], ebx */
  W32((uint32_t)(edx + 0x208u), ebx);
/* 8fc0df: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0e2: mov dword ptr [eax + 0x20c], ebx */
  W32((uint32_t)(eax + 0x20cu), ebx);
/* 8fc0e8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0eb: mov dword ptr [ecx + 0x210], ebx */
  W32((uint32_t)(ecx + 0x210u), ebx);
/* 8fc0f1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0f4: mov dword ptr [edx + 0x214], ebx */
  W32((uint32_t)(edx + 0x214u), ebx);
/* 8fc0fa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc0fd: mov dword ptr [eax + 0x200], ebx */
  W32((uint32_t)(eax + 0x200u), ebx);
/* 8fc103: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc106: mov dword ptr [ecx + 0x204], ebx */
  W32((uint32_t)(ecx + 0x204u), ebx);
/* 8fc10c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc10f: mov dword ptr [edx + 0x220], ebx */
  W32((uint32_t)(edx + 0x220u), ebx);
/* 8fc115: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc118: mov dword ptr [eax + 0x224], ebx */
  W32((uint32_t)(eax + 0x224u), ebx);
/* 8fc11e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc121: mov dword ptr [ecx + 0x228], ebx */
  W32((uint32_t)(ecx + 0x228u), ebx);
/* 8fc127: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc12a: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8fc12d: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* 8fc130: mov dword ptr [eax + 0x1bc], ecx */
  W32((uint32_t)(eax + 0x1bcu), ecx);
/* 8fc136: mov edx, dword ptr [edx + 0x48] */
  edx = R32((uint32_t)(edx + 0x48u));
/* 8fc139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc13c: mov dword ptr [eax + 0x1c0], edx */
  W32((uint32_t)(eax + 0x1c0u), edx);
/* 8fc142: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc145: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8fc148: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 8fc14b: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8fc14e: fsub qword ptr [ecx + 0x108] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x108u)));
/* 8fc154: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fc15a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8fc15c: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8fc15f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8fc162: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc165: fimul dword ptr [esi + 0x44] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esi + 0x44u)));
/* 8fc168: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8fc16b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8fc16d: call 0x99c958 */
  esp -= 4; W32(esp, 0x8fc172u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8fc172: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8fc174: mov ecx, dword ptr [esi + 0x118] */
  ecx = R32((uint32_t)(esi + 0x118u));
/* 8fc17a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8fc17c: mov dword ptr [esi + 0x118], ecx */
  W32((uint32_t)(esi + 0x118u), ecx);
/* 8fc182: fchs  */
  ST0 = -ST0;
/* 8fc184: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc187: fild dword ptr [esi + 0x118] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x118u)); FPUSH(v); }
/* 8fc18d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8fc18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fc194: jp 0x8fc1a6 */
  if (pf) goto L_8fc1a6;
L_8fc196: /* 8fc196: call 0x99c958 */
  esp -= 4; W32(esp, 0x8fc19bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8fc19b: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* 8fc1a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc1a4: jmp 0x8fc1a8 */
  goto L_8fc1a8;
L_8fc1a6: /* 8fc1a6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8fc1a8: /* 8fc1a8: mov edi, dword ptr [esi + 0x6c] */
  edi = R32((uint32_t)(esi + 0x6cu));
/* 8fc1ab: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc1ae: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8fc1b1: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 8fc1b4: je 0x8fc1e6 */
  if (zf) goto L_8fc1e6;
L_8fc1b6: /* 8fc1b6: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8fc1b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc1bb: je 0x8fc1e6 */
  if (zf) goto L_8fc1e6;
L_8fc1bd: /* 8fc1bd: mov ecx, dword ptr [eax + 0x4c4] */
  ecx = R32((uint32_t)(eax + 0x4c4u));
/* 8fc1c3: mov eax, ecx */
  eax = ecx;
/* 8fc1c5: shr eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8fc1c8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 8fc1cb: jne 0x8fc1d5 */
  if (!zf) goto L_8fc1d5;
L_8fc1cd: /* 8fc1cd: test ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fc1d3: je 0x8fc1e6 */
  if (zf) goto L_8fc1e6;
L_8fc1d5: /* 8fc1d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc1d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fc1d9: je 0x8fc1e3 */
  if (zf) goto L_8fc1e3;
L_8fc1db: /* 8fc1db: fld dword ptr [0xa0b130] */
  { double v = F32((uint32_t)(0xa0b130u)); FPUSH(v); }
/* 8fc1e1: jmp 0x8fc1e6 */
  goto L_8fc1e6;
L_8fc1e3: /* 8fc1e3: fld dword ptr [edx + 0x4c] */
  { double v = F32((uint32_t)(edx + 0x4cu)); FPUSH(v); }
L_8fc1e6: /* 8fc1e6: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 8fc1e9: fsub qword ptr [esi + 0xf8] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xf8u)));
/* 8fc1ef: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8fc1f2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8fc1f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8fc1f6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fc1f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc1fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fc1fd: jne 0x8fc236 */
  if (!zf) goto L_8fc236;
L_8fc1ff: /* 8fc1ff: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc202: je 0x8fc232 */
  if (zf) goto L_8fc232;
L_8fc204: /* 8fc204: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8fc207: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8fc20a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8fc20f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc210: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fc212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fc213: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fc216: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fc219: push 0xaf0320 */
  { uint32_t v = 0xaf0320u; esp -= 4; W32(esp, v); }
/* 8fc21e: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8fc223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc224: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fc22au); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fc22a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc22d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc230: jmp 0x8fc274 */
  goto L_8fc274;
L_8fc232: /* 8fc232: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fc234: jmp 0x8fc274 */
  goto L_8fc274;
L_8fc236: /* 8fc236: mov eax, dword ptr [esi + 0x3ec4] */
  eax = R32((uint32_t)(esi + 0x3ec4u));
/* 8fc23c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fc23e: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_8fc241: /* 8fc241: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fc243: jl 0x8fc25c */
  if ((sf != of)) goto L_8fc25c;
L_8fc245: /* 8fc245: mov edx, dword ptr [esi + 0x3ec0] */
  edx = R32((uint32_t)(esi + 0x3ec0u));
/* 8fc24b: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 8fc24e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fc250: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8fc256u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fc256: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc259: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8fc25a: jmp 0x8fc241 */
  goto L_8fc241;
L_8fc25c: /* 8fc25c: cmp dword ptr [esi + 0xeb4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xeb4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc262: jne 0x8fc27e */
  if (!zf) goto L_8fc27e;
L_8fc264: /* 8fc264: cmp dword ptr [esi + 0x1eb0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1eb0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc26a: jne 0x8fc274 */
  if (!zf) goto L_8fc274;
L_8fc26c: /* 8fc26c: cmp dword ptr [esi + 0x2eac], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2eacu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc272: je 0x8fc27e */
  if (zf) goto L_8fc27e;
L_8fc274: /* 8fc274: mov dword ptr [esi + 0x6c], 1 */
  W32((uint32_t)(esi + 0x6cu), 0x1u);
/* 8fc27b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_8fc27e: /* 8fc27e: mov ecx, esi */
  ecx = esi;
/* 8fc280: call 0x6c6375 */
  esp -= 4; W32(esp, 0x8fc285u); SPILL(); f_6c6375(); if (g_unwind) return; RELOAD();
/* 8fc285: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc288: cmp dword ptr [ecx + 0x138], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x138u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc28e: jne 0x8fc2a8 */
  if (!zf) goto L_8fc2a8;
L_8fc290: /* 8fc290: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8fc293: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 8fc296: fsub qword ptr [ecx + 0x100] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x100u)));
/* 8fc29c: fld dword ptr [eax + 0x54] */
  { double v = F32((uint32_t)(eax + 0x54u)); FPUSH(v); }
/* 8fc29f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fc2a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fc2a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fc2a6: jp 0x8fc2b0 */
  if (pf) goto L_8fc2b0;
L_8fc2a8: /* 8fc2a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fc2aa: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8fc2b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fc2b0: /* 8fc2b0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fc2b3: mov ecx, dword ptr [eax + 0x3eec] */
  ecx = R32((uint32_t)(eax + 0x3eecu));
/* 8fc2b9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc2bb: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fc2bf: je 0x8fc2c6 */
  if (zf) goto L_8fc2c6;
L_8fc2c1: /* 8fc2c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fc2c3: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8fc2c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fc2c6: /* 8fc2c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fc2c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fc2ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fc2cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fc2d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fc2d3: mov esp, ebp */
  esp = ebp;
/* 8fc2d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fc2d6: ret  */
  esp += 4; SPILL(); return;
}

void f_8fc2d7(void) {
  LOAD_REGS();
L_8fc2d7: /* 8fc2d7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8fc2da: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fc2df: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8fc2e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc2e3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8fc2e6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fc2ebu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fc2eb(); return;
}

void f_8fc2eb(void) {
  LOAD_REGS();
L_8fc2eb: /* 8fc2eb: push 0xa1f9b8 */
  { uint32_t v = 0xa1f9b8u; esp -= 4; W32(esp, v); }
/* 8fc2f0: push 0xaf0378 */
  { uint32_t v = 0xaf0378u; esp -= 4; W32(esp, v); }
/* 8fc2f5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fc2fbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fc2fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc2fe: xor ebx, ebx */
  ebx = 0;
/* 8fc300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc301: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc302: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fc307u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fc307(); return;
}

void f_8fc307(void) {
  LOAD_REGS();
L_8fc307: /* 8fc307: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8fc30a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fc30f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8fc312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc313: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8fc316: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fc31bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fc31b(); return;
}

void f_8fc31b(void) {
  LOAD_REGS();
L_8fc31b: /* 8fc31b: push 0xa1f984 */
  { uint32_t v = 0xa1f984u; esp -= 4; W32(esp, v); }
/* 8fc320: push 0xaf0380 */
  { uint32_t v = 0xaf0380u; esp -= 4; W32(esp, v); }
/* 8fc325: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fc32bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fc32b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc32e: xor ebx, ebx */
  ebx = 0;
/* 8fc330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc331: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc332: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fc337u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fc337: guest_badaddr(0x8fc337); return;
}

void f_8fc510(void) {
  LOAD_REGS();
L_8fc510: /* 8fc510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fc512: push 0x9d97a9 */
  { uint32_t v = 0x9d97a9u; esp -= 4; W32(esp, v); }
/* 8fc517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fc51d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc51e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fc525: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fc528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fc529: mov esi, ecx */
  esi = ecx;
/* 8fc52b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fc52c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8fc530: call 0x6cb8bb */
  esp -= 4; W32(esp, 0x8fc535u); SPILL(); f_6cb8bb(); if (g_unwind) return; RELOAD();
/* 8fc535: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fc537: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 8fc53a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8fc542: mov dword ptr [esi], 0xa07118 */
  W32((uint32_t)(esi), 0xa07118u);
/* 8fc548: mov dword ptr [esi + 0x28], 0xa07108 */
  W32((uint32_t)(esi + 0x28u), 0xa07108u);
/* 8fc54f: mov dword ptr [esi + 0x2c], 0xa07104 */
  W32((uint32_t)(esi + 0x2cu), 0xa07104u);
/* 8fc556: call 0x6c321a */
  esp -= 4; W32(esp, 0x8fc55bu); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 8fc55b: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* 8fc561: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 8fc566: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x8fc56cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 8fc56c: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 8fc572: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 8fc577: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8fc57du); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8fc57d: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 8fc583: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 8fc588: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8fc58eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8fc58e: lea ecx, [esi + 0x124] */
  ecx = (uint32_t)(esi + 0x124u);
/* 8fc594: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 8fc599: call dword ptr [0xcfacd4] */
  esp -= 4; W32(esp, 0x8fc59fu); SPILL(); f_4e23e2(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@XZ */ RELOAD();
/* 8fc59f: lea ecx, [esi + 0x12c] */
  ecx = (uint32_t)(esi + 0x12cu);
/* 8fc5a5: call dword ptr [0xcfacd4] */
  esp -= 4; W32(esp, 0x8fc5abu); SPILL(); f_4e23e2(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@XZ */ RELOAD();
/* 8fc5ab: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 8fc5b1: call 0x6c256d */
  esp -= 4; W32(esp, 0x8fc5b6u); SPILL(); f_6c256d(); if (g_unwind) return; RELOAD();
/* 8fc5b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fc5b8: lea ecx, [esi + 0x254] */
  ecx = (uint32_t)(esi + 0x254u);
/* 8fc5be: mov byte ptr [esp + 0x1c], 5 */
  W8((uint32_t)(esp + 0x1cu), 0x5u);
/* 8fc5c3: call dword ptr [0xcfac78] */
  esp -= 4; W32(esp, 0x8fc5c9u); SPILL(); f_4e149c(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@H@Z */ RELOAD();
/* 8fc5c9: lea ecx, [esi + 0x3ea8] */
  ecx = (uint32_t)(esi + 0x3ea8u);
/* 8fc5cf: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 8fc5d4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc5dau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc5da: lea ecx, [esi + 0x3eb4] */
  ecx = (uint32_t)(esi + 0x3eb4u);
/* 8fc5e0: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 8fc5e5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc5ebu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc5eb: lea ecx, [esi + 0x3ec0] */
  ecx = (uint32_t)(esi + 0x3ec0u);
/* 8fc5f1: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 8fc5f6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc5fcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc5fc: lea ecx, [esi + 0x3ecc] */
  ecx = (uint32_t)(esi + 0x3eccu);
/* 8fc602: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 8fc607: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc60du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc60d: lea edi, [esi + 0x3ed8] */
  edi = (uint32_t)(esi + 0x3ed8u);
/* 8fc613: mov ecx, edi */
  ecx = edi;
/* 8fc615: mov byte ptr [esp + 0x18], 0xa */
  W8((uint32_t)(esp + 0x18u), 0xau);
/* 8fc61a: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 8fc61e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc624u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc624: mov ecx, edi */
  ecx = edi;
/* 8fc626: mov byte ptr [esp + 0x18], 0xb */
  W8((uint32_t)(esp + 0x18u), 0xbu);
/* 8fc62b: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 8fc632: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 8fc639: call 0x6c69ce */
  esp -= 4; W32(esp, 0x8fc63eu); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 8fc63e: lea ecx, [esi + 0x3ef0] */
  ecx = (uint32_t)(esi + 0x3ef0u);
/* 8fc644: mov byte ptr [esp + 0x18], 0xc */
  W8((uint32_t)(esp + 0x18u), 0xcu);
/* 8fc649: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc64fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc64f: lea ecx, [esi + 0x3f24] */
  ecx = (uint32_t)(esi + 0x3f24u);
/* 8fc655: mov byte ptr [esp + 0x18], 0xd */
  W8((uint32_t)(esp + 0x18u), 0xdu);
/* 8fc65a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc660u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc660: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8fc664: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fc665: mov eax, esi */
  eax = esi;
/* 8fc667: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fc668: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fc66f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc672: ret  */
  esp += 4; SPILL(); return;
}

void f_8fc6e0(void) {
  LOAD_REGS();
L_8fc6e0: /* 8fc6e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fc6e1: mov ebp, esp */
  ebp = esp;
/* 8fc6e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fc6e5: push 0x9d98b7 */
  { uint32_t v = 0x9d98b7u; esp -= 4; W32(esp, v); }
/* 8fc6ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fc6f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc6f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fc6f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fc6fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc6fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fc6fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fc6fe: mov esi, ecx */
  esi = ecx;
/* 8fc700: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fc703: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8fc706: call 0x6cb8bb */
  esp -= 4; W32(esp, 0x8fc70bu); SPILL(); f_6cb8bb(); if (g_unwind) return; RELOAD();
/* 8fc70b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fc70e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8fc711: xor ebx, ebx */
  ebx = 0;
/* 8fc713: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 8fc716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fc717: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8fc71a: mov dword ptr [esi], 0xa07118 */
  W32((uint32_t)(esi), 0xa07118u);
/* 8fc720: mov dword ptr [esi + 0x28], 0xa07108 */
  W32((uint32_t)(esi + 0x28u), 0xa07108u);
/* 8fc727: mov dword ptr [esi + 0x2c], 0xa07104 */
  W32((uint32_t)(esi + 0x2cu), 0xa07104u);
/* 8fc72e: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 8fc731: mov dword ptr [esi + 0x6c], ebx */
  W32((uint32_t)(esi + 0x6cu), ebx);
/* 8fc734: call 0x6c1870 */
  esp -= 4; W32(esp, 0x8fc739u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 8fc739: mov eax, 1 */
  eax = 0x1u;
/* 8fc73e: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* 8fc744: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 8fc747: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 8fc74d: mov dword ptr [esi + 0xbc], ebx */
  W32((uint32_t)(esi + 0xbcu), ebx);
/* 8fc753: mov dword ptr [esi + 0xcc], 0x7d0 */
  W32((uint32_t)(esi + 0xccu), 0x7d0u);
/* 8fc75d: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x8fc763u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 8fc763: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 8fc769: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8fc76d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8fc773u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8fc773: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 8fc779: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fc77d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8fc783u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8fc783: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8fc786: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8fc789: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* 8fc78f: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 8fc792: mov dword ptr [esi + 0xfc], edx */
  W32((uint32_t)(esi + 0xfcu), edx);
/* 8fc798: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8fc79b: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 8fc7a1: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 8fc7a4: mov dword ptr [esi + 0x104], edx */
  W32((uint32_t)(esi + 0x104u), edx);
/* 8fc7aa: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8fc7ad: mov dword ptr [esi + 0x108], ecx */
  W32((uint32_t)(esi + 0x108u), ecx);
/* 8fc7b3: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 8fc7b6: lea ecx, [esi + 0x124] */
  ecx = (uint32_t)(esi + 0x124u);
/* 8fc7bc: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8fc7c0: mov dword ptr [esi + 0x10c], edx */
  W32((uint32_t)(esi + 0x10cu), edx);
/* 8fc7c6: mov dword ptr [esi + 0x110], ebx */
  W32((uint32_t)(esi + 0x110u), ebx);
/* 8fc7cc: mov dword ptr [esi + 0x114], ebx */
  W32((uint32_t)(esi + 0x114u), ebx);
/* 8fc7d2: mov dword ptr [esi + 0x118], ebx */
  W32((uint32_t)(esi + 0x118u), ebx);
/* 8fc7d8: call dword ptr [0xcfacd4] */
  esp -= 4; W32(esp, 0x8fc7deu); SPILL(); f_4e23e2(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@XZ */ RELOAD();
/* 8fc7de: lea ecx, [esi + 0x12c] */
  ecx = (uint32_t)(esi + 0x12cu);
/* 8fc7e4: call dword ptr [0xcfacd4] */
  esp -= 4; W32(esp, 0x8fc7eau); SPILL(); f_4e23e2(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@XZ */ RELOAD();
/* 8fc7ea: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 8fc7f0: call 0x6c256d */
  esp -= 4; W32(esp, 0x8fc7f5u); SPILL(); f_6c256d(); if (g_unwind) return; RELOAD();
/* 8fc7f5: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8fc7f8: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8fc7fb: mov dword ptr [esi + 0x1bc], ecx */
  W32((uint32_t)(esi + 0x1bcu), ecx);
/* 8fc801: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 8fc804: mov eax, 0x461c3c00 */
  eax = 0x461c3c00u;
/* 8fc809: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc80a: lea ecx, [esi + 0x254] */
  ecx = (uint32_t)(esi + 0x254u);
/* 8fc810: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8fc814: mov dword ptr [esi + 0x1c0], edx */
  W32((uint32_t)(esi + 0x1c0u), edx);
/* 8fc81a: mov dword ptr [esi + 0x1c4], 0x3f800000 */
  W32((uint32_t)(esi + 0x1c4u), 0x3f800000u);
/* 8fc824: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* 8fc82a: mov dword ptr [esi + 0x1f4], eax */
  W32((uint32_t)(esi + 0x1f4u), eax);
/* 8fc830: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* 8fc836: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* 8fc83c: call dword ptr [0xcfac78] */
  esp -= 4; W32(esp, 0x8fc842u); SPILL(); f_4e149c(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@H@Z */ RELOAD();
/* 8fc842: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8fc845: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8fc849: mov dword ptr [esi + 0xea8], eax */
  W32((uint32_t)(esi + 0xea8u), eax);
/* 8fc84f: mov dword ptr [esi + 0xeb0], eax */
  W32((uint32_t)(esi + 0xeb0u), eax);
/* 8fc855: lea ecx, [esi + 0x3ea8] */
  ecx = (uint32_t)(esi + 0x3ea8u);
/* 8fc85b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc861u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc861: lea ecx, [esi + 0x3eb4] */
  ecx = (uint32_t)(esi + 0x3eb4u);
/* 8fc867: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8fc86b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc871u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc871: lea ecx, [esi + 0x3ec0] */
  ecx = (uint32_t)(esi + 0x3ec0u);
/* 8fc877: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8fc87b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc881u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc881: lea ecx, [esi + 0x3ecc] */
  ecx = (uint32_t)(esi + 0x3eccu);
/* 8fc887: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8fc88b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc891u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc891: lea edi, [esi + 0x3ed8] */
  edi = (uint32_t)(esi + 0x3ed8u);
/* 8fc897: mov ecx, edi */
  ecx = edi;
/* 8fc899: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8fc89d: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8fc8a0: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc8a6u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc8a6: mov ecx, edi */
  ecx = edi;
/* 8fc8a8: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8fc8ac: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 8fc8af: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 8fc8b6: call 0x6c69ce */
  esp -= 4; W32(esp, 0x8fc8bbu); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 8fc8bb: lea ecx, [esi + 0x3ef0] */
  ecx = (uint32_t)(esi + 0x3ef0u);
/* 8fc8c1: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8fc8c5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc8cbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc8cb: lea ecx, [esi + 0x3f24] */
  ecx = (uint32_t)(esi + 0x3f24u);
/* 8fc8d1: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8fc8d5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fc8dbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fc8db: mov edi, dword ptr [0xcfa810] */
  edi = R32((uint32_t)(0xcfa810u));
/* 8fc8e1: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8fc8e5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fc8e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fc8e7: lea ecx, [esi + 0x3f14] */
  ecx = (uint32_t)(esi + 0x3f14u);
/* 8fc8ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc8ee: push 0xaef810 */
  { uint32_t v = 0xaef810u; esp -= 4; W32(esp, v); }
/* 8fc8f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc8f4: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x8fc8fau); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 8fc8fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc8fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fc8ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fc8ff: lea edx, [esi + 0x3f18] */
  edx = (uint32_t)(esi + 0x3f18u);
/* 8fc905: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fc906: push 0xaef824 */
  { uint32_t v = 0xaef824u; esp -= 4; W32(esp, v); }
/* 8fc90b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc90c: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x8fc912u); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 8fc912: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc915: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fc917u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fc917: lea ecx, [esi + 0x3f1c] */
  ecx = (uint32_t)(esi + 0x3f1cu);
/* 8fc91d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc91e: push 0xaef838 */
  { uint32_t v = 0xaef838u; esp -= 4; W32(esp, v); }
/* 8fc923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc924: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x8fc92au); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 8fc92a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc92d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fc92fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fc92f: lea edx, [esi + 0x3f20] */
  edx = (uint32_t)(esi + 0x3f20u);
/* 8fc935: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fc936: push 0xaef848 */
  { uint32_t v = 0xaef848u; esp -= 4; W32(esp, v); }
/* 8fc93b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc93c: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x8fc942u); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 8fc942: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc945: push 0xaef858 */
  { uint32_t v = 0xaef858u; esp -= 4; W32(esp, v); }
/* 8fc94a: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 8fc94d: call 0x6c991c */
  esp -= 4; W32(esp, 0x8fc952u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 8fc952: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc954: je 0x8fc960 */
  if (zf) goto L_8fc960;
L_8fc956: /* 8fc956: mov eax, dword ptr [0xcc7fe8] */
  eax = R32((uint32_t)(0xcc7fe8u));
/* 8fc95b: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* 8fc95e: jmp 0x8fc969 */
  goto L_8fc969;
L_8fc960: /* 8fc960: mov ecx, dword ptr [0xcc7fe8] */
  ecx = R32((uint32_t)(0xcc7fe8u));
/* 8fc966: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
L_8fc969: /* 8fc969: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc96b: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 8fc96e: jne 0x8fc979 */
  if (!zf) goto L_8fc979;
L_8fc970: /* 8fc970: mov dword ptr [esi + 0x44], 0xa28 */
  W32((uint32_t)(esi + 0x44u), 0xa28u);
/* 8fc977: jmp 0x8fc988 */
  goto L_8fc988;
L_8fc979: /* 8fc979: cmp eax, 0x708 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x708u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fc97e: jge 0x8fc985 */
  if ((sf == of)) goto L_8fc985;
L_8fc980: /* 8fc980: mov eax, 0x708 */
  eax = 0x708u;
L_8fc985: /* 8fc985: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
L_8fc988: /* 8fc988: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc989: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8fc98c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fc992u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fc992: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8fc998: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fc99a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fc99d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc99e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc99f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc9a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc9a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fc9a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fc9a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fc9a4: push 0xcf1560 */
  { uint32_t v = 0xcf1560u; esp -= 4; W32(esp, v); }
/* 8fc9a9: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x8fc9afu); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 8fc9af: mov edi, eax */
  edi = eax;
/* 8fc9b1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fc9b4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fc9b6: je 0x8fc9cb */
  if (zf) goto L_8fc9cb;
L_8fc9b8: /* 8fc9b8: mov ecx, edi */
  ecx = edi;
/* 8fc9ba: call dword ptr [0xcfa480] */
  esp -= 4; W32(esp, 0x8fc9c0u); SPILL(); f_4e1f46(); if (g_unwind) return; /* Core!??0UPackageMap@@QAE@XZ */ RELOAD();
/* 8fc9c0: mov dword ptr [edi], 0xa068a8 */
  W32((uint32_t)(edi), 0xa068a8u);
/* 8fc9c6: mov dword ptr [edi + 0x70], esi */
  W32((uint32_t)(edi + 0x70u), esi);
/* 8fc9c9: jmp 0x8fc9cd */
  goto L_8fc9cd;
L_8fc9cb: /* 8fc9cb: xor edi, edi */
  edi = 0;
L_8fc9cd: /* 8fc9cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fc9d0: mov dword ptr [esi + 0xb4], edi */
  W32((uint32_t)(esi + 0xb4u), edi);
/* 8fc9d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fc9d7: mov eax, esi */
  eax = esi;
/* 8fc9d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fc9da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fc9e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fc9e2: mov esp, ebp */
  esp = ebp;
/* 8fc9e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fc9e5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8fc9e8(void) {
  LOAD_REGS();
L_8fc9e8: /* 8fc9e8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fc9eb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fc9f0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8fc9f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fc9f4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8fc9f7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fc9fcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fc9fc(); return;
}

void f_8fc9fc(void) {
  LOAD_REGS();
L_8fc9fc: /* 8fc9fc: push 0xa1f9f8 */
  { uint32_t v = 0xa1f9f8u; esp -= 4; W32(esp, v); }
/* 8fca01: push 0xaef860 */
  { uint32_t v = 0xaef860u; esp -= 4; W32(esp, v); }
/* 8fca06: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fca0cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fca0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fca0f: xor ebx, ebx */
  ebx = 0;
/* 8fca11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fca12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fca13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fca18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fca18: guest_badaddr(0x8fca18); return;
}

void f_8fcaf0(void) {
  LOAD_REGS();
L_8fcaf0: /* 8fcaf0: mov eax, 0xcf21f8 */
  eax = 0xcf21f8u;
/* 8fcaf5: ret  */
  esp += 4; SPILL(); return;
}

void f_8fcb10(void) {
  LOAD_REGS();
L_8fcb10: /* 8fcb10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8fcb14: ret  */
  esp += 4; SPILL(); return;
}

void f_8fcb30(void) {
  LOAD_REGS();
L_8fcb30: /* 8fcb30: xor eax, eax */
  eax = 0;
/* 8fcb32: ret  */
  esp += 4; SPILL(); return;
}

void f_8fcb50(void) {
  LOAD_REGS();
L_8fcb50: /* 8fcb50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fcb51: mov ebp, esp */
  ebp = esp;
/* 8fcb53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fcb55: push 0x9d9900 */
  { uint32_t v = 0x9d9900u; esp -= 4; W32(esp, v); }
/* 8fcb5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fcb60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcb61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fcb68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fcb6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fcb6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fcb6d: mov esi, ecx */
  esi = ecx;
/* 8fcb6f: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 8fcb75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fcb77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fcb78: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fcb7b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fcb82: jne 0x8fcb99 */
  if (!zf) goto L_8fcb99;
L_8fcb84: /* 8fcb84: push 0x67 */
  { uint32_t v = 0x67u; esp -= 4; W32(esp, v); }
/* 8fcb86: push 0xaf0a48 */
  { uint32_t v = 0xaf0a48u; esp -= 4; W32(esp, v); }
/* 8fcb8b: push 0xaf0a5c */
  { uint32_t v = 0xaf0a5cu; esp -= 4; W32(esp, v); }
/* 8fcb90: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fcb96u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fcb96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fcb99: /* 8fcb99: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 8fcb9f: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8fcba2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fcba4: jne 0x8fcbbb */
  if (!zf) goto L_8fcbbb;
L_8fcba6: /* 8fcba6: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8fcba8: push 0xaf0a6c */
  { uint32_t v = 0xaf0a6cu; esp -= 4; W32(esp, v); }
/* 8fcbad: push 0xaf0a80 */
  { uint32_t v = 0xaf0a80u; esp -= 4; W32(esp, v); }
/* 8fcbb2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fcbb8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fcbb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fcbbb: /* 8fcbbb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8fcbbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fcbbf: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 8fcbc5: call 0x6c1bea */
  esp -= 4; W32(esp, 0x8fcbcau); SPILL(); f_6c1bea(); if (g_unwind) return; RELOAD();
/* 8fcbca: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 8fcbd0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8fcbd3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fcbd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcbd6: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8fcbdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fcbdc: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 8fcbe2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fcbe4: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8fcbeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fcbea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fcbed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fcbee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fcbef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fcbf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fcbf7: mov esp, ebp */
  esp = ebp;
/* 8fcbf9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fcbfa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fcbfd(void) {
  LOAD_REGS();
L_8fcbfd: /* 8fcbfd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fcc00: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fcc05: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fcc08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fcc09: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fcc0c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fcc11u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fcc11(); return;
}

void f_8fcc11(void) {
  LOAD_REGS();
L_8fcc11: /* 8fcc11: push 0xa1fa44 */
  { uint32_t v = 0xa1fa44u; esp -= 4; W32(esp, v); }
/* 8fcc16: push 0xaf0aa0 */
  { uint32_t v = 0xaf0aa0u; esp -= 4; W32(esp, v); }
/* 8fcc1b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fcc21u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fcc21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcc24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fcc26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fcc28: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fcc2du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fcc2d: guest_badaddr(0x8fcc2d); return;
}

void f_8fcc70(void) {
  LOAD_REGS();
L_8fcc70: /* 8fcc70: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 8fcc76: ret  */
  esp += 4; SPILL(); return;
}

void f_8fcc90(void) {
  LOAD_REGS();
L_8fcc90: /* 8fcc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fcc91: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8fcc95: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 8fcc97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fcc99: mov ecx, esi */
  ecx = esi;
/* 8fcc9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fcca1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fcca1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8fcca3: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8fcca6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8fcca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fccaa: ret  */
  esp += 4; SPILL(); return;
}

void f_8fccc0(void) {
  LOAD_REGS();
L_8fccc0: /* 8fccc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fccc1: mov ebp, esp */
  ebp = esp;
/* 8fccc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fccc5: push 0x9d9936 */
  { uint32_t v = 0x9d9936u; esp -= 4; W32(esp, v); }
/* 8fccca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fccd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fccd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fccd8: sub esp, 0x2bc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2bcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fccde: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fcce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fcce2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fcce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fcce4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fcce7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8fccea: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8fccf0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fccf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fccf3: push 0xaf08e0 */
  { uint32_t v = 0xaf08e0u; esp -= 4; W32(esp, v); }
/* 8fccf8: xor edi, edi */
  edi = 0;
/* 8fccfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fccfb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8fccfe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fcd04u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fcd04: mov esi, dword ptr [0xcfa5b8] */
  esi = R32((uint32_t)(0xcfa5b8u));
/* 8fcd0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcd0d: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 8fcd10: push 0xaf0924 */
  { uint32_t v = 0xaf0924u; esp -= 4; W32(esp, v); }
/* 8fcd15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcd16: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fcd18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fcd18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcd1b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fcd1d: je 0x8fce11 */
  if (zf) goto L_8fce11;
L_8fcd23: /* 8fcd23: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fcd26: mov esi, dword ptr [ecx + 0xb4] */
  esi = R32((uint32_t)(ecx + 0xb4u));
/* 8fcd2c: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 8fcd2e: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8fcd31: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fcd33: mov ecx, esi */
  ecx = esi;
/* 8fcd35: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fcd3bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fcd3b: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 8fcd3e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fcd40: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 8fcd43: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fcd45: je 0x8fcd52 */
  if (zf) goto L_8fcd52;
L_8fcd47: /* 8fcd47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fcd48: call dword ptr [0xcface0] */
  esp -= 4; W32(esp, 0x8fcd4eu); SPILL(); f_4e2b12(); if (g_unwind) return; /* Core!??0FPackageInfo@@QAE@PAVULinkerLoad@@@Z */ RELOAD();
/* 8fcd4e: mov esi, eax */
  esi = eax;
/* 8fcd50: jmp 0x8fcd54 */
  goto L_8fcd54;
L_8fcd52: /* 8fcd52: xor esi, esi */
  esi = 0;
L_8fcd54: /* 8fcd54: mov cx, word ptr [0xcef610] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xcef610u))) & 0xffffu);
/* 8fcd5b: mov word ptr [ebp - 0xc8], cx */
  W16((uint32_t)(ebp + 0xffffff38u), (ecx & 0xffffu));
/* 8fcd62: xor eax, eax */
  eax = 0;
/* 8fcd64: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 8fcd69: lea edi, [ebp - 0xc6] */
  edi = (uint32_t)(ebp + 0xffffff3au);
/* 8fcd6f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8fcd71: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 8fcd74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fcd75: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 8fcd77: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fcd7a: push 0xaf0930 */
  { uint32_t v = 0xaf0930u; esp -= 4; W32(esp, v); }
/* 8fcd7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcd80: call dword ptr [0xcfaaa8] */
  esp -= 4; W32(esp, 0x8fcd86u); SPILL(); f_4e3f35(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFGuid@@@Z */ RELOAD();
/* 8fcd86: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fcd89: mov ebx, dword ptr [0xcfaa54] */
  ebx = R32((uint32_t)(0xcfaa54u));
/* 8fcd8f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcd92: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 8fcd95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fcd96: push 0xaf093c */
  { uint32_t v = 0xaf093cu; esp -= 4; W32(esp, v); }
/* 8fcd9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fcd9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fcd9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fcd9e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fcda1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcda4: lea edi, [esi + 0x24] */
  edi = (uint32_t)(esi + 0x24u);
/* 8fcda7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fcda8: push 0xaf0948 */
  { uint32_t v = 0xaf0948u; esp -= 4; W32(esp, v); }
/* 8fcdad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcdae: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fcdb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fcdb0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8fcdb2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcdb5: lea edx, [esi + 0x44] */
  edx = (uint32_t)(esi + 0x44u);
/* 8fcdb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fcdb9: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 8fcdbc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fcdbf: push 0xaf0954 */
  { uint32_t v = 0xaf0954u; esp -= 4; W32(esp, v); }
/* 8fcdc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcdc5: call dword ptr [0xcfacdc] */
  esp -= 4; W32(esp, 0x8fcdcbu); SPILL(); f_4e44cb(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAK@Z */ RELOAD();
/* 8fcdcb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fcdce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcdd1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8fcdd3: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 8fcdd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fcdda: push 0xaf0964 */
  { uint32_t v = 0xaf0964u; esp -= 4; W32(esp, v); }
/* 8fcddf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fcde0: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x8fcde6u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 8fcde6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcde9: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 8fcdef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcdf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fcdf2: call dword ptr [0xcfa844] */
  esp -= 4; W32(esp, 0x8fcdf8u); SPILL(); f_4e1cb2(); if (g_unwind) return; /* Core!?CreatePackage@UObject@@SAPAVUPackage@@PAV1@PBG@Z */ RELOAD();
/* 8fcdf8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcdfb: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
L_8fcdfe: /* 8fcdfe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fce01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fce08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fce09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fce0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fce0b: mov esp, ebp */
  esp = ebp;
/* 8fce0d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fce0e: ret 8 */
  esp += 12; SPILL(); return;
L_8fce11: /* 8fce11: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8fce14: push 0xaf0970 */
  { uint32_t v = 0xaf0970u; esp -= 4; W32(esp, v); }
/* 8fce19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fce1a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fce1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fce1c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fce1f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fce21: je 0x8fcdfe */
  if (zf) goto L_8fcdfe;
L_8fce23: /* 8fce23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fce24: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 8fce2a: call 0x6c321a */
  esp -= 4; W32(esp, 0x8fce2fu); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 8fce2f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fce32: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8fce35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fce36: push 0xaf0980 */
  { uint32_t v = 0xaf0980u; esp -= 4; W32(esp, v); }
/* 8fce3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fce3c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fce40: call dword ptr [0xcfabc8] */
  esp -= 4; W32(esp, 0x8fce46u); SPILL(); f_4e1a5a(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFString@@@Z */ RELOAD();
/* 8fce46: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fce49: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8fce4c: xor ebx, ebx */
  ebx = 0;
/* 8fce4e: mov edi, edi */
  edi = edi;
L_8fce50: /* 8fce50: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fce53: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 8fce59: cmp ebx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fce5c: jge 0x8fcf6e */
  if ((sf == of)) goto L_8fcf6e;
L_8fce62: /* 8fce62: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8fce65: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 8fce68: mov ecx, dword ptr [eax + edx*8 + 0x10] */
  ecx = R32((uint32_t)(eax + edx*8 + 0x10u));
/* 8fce6c: lea edi, [eax + edx*8] */
  edi = (uint32_t)(eax + edx*8);
/* 8fce6f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8fce75u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8fce75: lea ecx, [ebp - 0x2c8] */
  ecx = (uint32_t)(ebp + 0xfffffd38u);
/* 8fce7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fce7c: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* 8fce7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fce80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fce81: call dword ptr [0xcfacd8] */
  esp -= 4; W32(esp, 0x8fce87u); SPILL(); f_4e368e(); if (g_unwind) return; /* Core!?appFindPackageFile@@YAHPBGPBVFGuid@@PAG@Z */ RELOAD();
/* 8fce87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fce8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fce8c: jne 0x8fcf66 */
  if (!zf) goto L_8fcf66;
L_8fce92: /* 8fce92: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fce95: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8fce98: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8fce9b: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 8fce9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fcea0: je 0x8fcf1a */
  if (zf) goto L_8fcf1a;
L_8fcea2: /* 8fcea2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 8fcea5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8fceabu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8fceab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fceac: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fceaf: push 0xaf0990 */
  { uint32_t v = 0xaf0990u; esp -= 4; W32(esp, v); }
/* 8fceb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fceb5: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8fcebbu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8fcebb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcebe: mov ecx, eax */
  ecx = eax;
/* 8fcec0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8fcec4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fcecau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fceca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcecb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8fcece: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8fced4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8fced4: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8fced7: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8fceda: mov esi, dword ptr [ecx + 0x2c] */
  esi = R32((uint32_t)(ecx + 0x2cu));
/* 8fcedd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fcede: mov ecx, esp */
  ecx = esp;
/* 8fcee0: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8fcee3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fcee5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fcee9: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fceefu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fceef: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fcef1: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8fcef4: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8fcef7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fcef8: call 0x6ca91b */
  esp -= 4; W32(esp, 0x8fcefdu); SPILL(); f_6ca91b(); if (g_unwind) return; RELOAD();
/* 8fcefd: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8fcf00: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8fcf04: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fcf0au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fcf0a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fcf0d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fcf11: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fcf17u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fcf17: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_8fcf1a: /* 8fcf1a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fcf1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fcf1f: jne 0x8fcf66 */
  if (!zf) goto L_8fcf66;
L_8fcf21: /* 8fcf21: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 8fcf24: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8fcf2au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8fcf2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcf2b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8fcf2e: push 0xaf09f0 */
  { uint32_t v = 0xaf09f0u; esp -= 4; W32(esp, v); }
/* 8fcf33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fcf34: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8fcf3au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8fcf3a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcf3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcf3e: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 8fcf41: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8fcf45: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8fcf4bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8fcf4b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8fcf4e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fcf52: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fcf58u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fcf58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8fcf5b: mov eax, 1 */
  eax = 0x1u;
/* 8fcf60: mov dword ptr [edx + 0x6c], eax */
  W32((uint32_t)(edx + 0x6cu), eax);
/* 8fcf63: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8fcf66: /* 8fcf66: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8fcf67: xor edi, edi */
  edi = 0;
/* 8fcf69: jmp 0x8fce50 */
  goto L_8fce50;
L_8fcf6e: /* 8fcf6e: cmp dword ptr [ebp - 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fcf71: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fcf75: jne 0x8fcf8a */
  if (!zf) goto L_8fcf8a;
L_8fcf77: /* 8fcf77: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fcf7a: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 8fcf7d: mov dword ptr [ecx + 0x44], edi */
  W32((uint32_t)(ecx + 0x44u), edi);
/* 8fcf80: mov dword ptr [ecx + 0x48], edi */
  W32((uint32_t)(ecx + 0x48u), edi);
/* 8fcf83: mov dword ptr [eax + 0x64], 1 */
  W32((uint32_t)(eax + 0x64u), 0x1u);
L_8fcf8a: /* 8fcf8a: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 8fcf90: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x8fcf95u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 8fcf95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fcf98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fcf99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fcf9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fcfa1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fcfa2: mov esp, ebp */
  esp = ebp;
/* 8fcfa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fcfa5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8fcfa8(void) {
  LOAD_REGS();
L_8fcfa8: /* 8fcfa8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8fcfab: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fcfb0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8fcfb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fcfb4: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8fcfb7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fcfbcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fcfbc(); return;
}

void f_8fcfbc(void) {
  LOAD_REGS();
L_8fcfbc: /* 8fcfbc: push 0xa1fa88 */
  { uint32_t v = 0xa1fa88u; esp -= 4; W32(esp, v); }
/* 8fcfc1: push 0xaf0a40 */
  { uint32_t v = 0xaf0a40u; esp -= 4; W32(esp, v); }
/* 8fcfc6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fcfccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fcfcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fcfcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fcfd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fcfd3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fcfd8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fcfd8: guest_badaddr(0x8fcfd8); return;
}

void f_8fd0b0(void) {
  LOAD_REGS();
L_8fd0b0: /* 8fd0b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd0b2: push 0x9d9967 */
  { uint32_t v = 0x9d9967u; esp -= 4; W32(esp, v); }
/* 8fd0b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd0be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd0c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd0c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd0c7: mov esi, ecx */
  esi = ecx;
/* 8fd0c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8fd0cd: mov dword ptr [esi], 0xa1fb18 */
  W32((uint32_t)(esi), 0xa1fb18u);
/* 8fd0d3: mov dword ptr [esi + 0x28], 0xa1faec */
  W32((uint32_t)(esi + 0x28u), 0xa1faecu);
/* 8fd0da: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 8fd0e2: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x8fd0e8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 8fd0e8: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8fd0ee: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 8fd0f3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fd0f9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fd0f9: mov ecx, esi */
  ecx = esi;
/* 8fd0fb: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8fd103: call 0x6ca5ba */
  esp -= 4; W32(esp, 0x8fd108u); SPILL(); f_6ca5ba(); if (g_unwind) return; RELOAD();
/* 8fd108: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8fd10c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd10d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd114: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd117: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd140(void) {
  LOAD_REGS();
L_8fd140: /* 8fd140: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd142: push 0x9d9988 */
  { uint32_t v = 0x9d9988u; esp -= 4; W32(esp, v); }
/* 8fd147: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd14e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd156: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd157: mov esi, ecx */
  esi = ecx;
/* 8fd159: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8fd15d: call 0x6c5376 */
  esp -= 4; W32(esp, 0x8fd162u); SPILL(); f_6c5376(); if (g_unwind) return; RELOAD();
/* 8fd162: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8fd168: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8fd170: mov dword ptr [esi], 0xa1fb18 */
  W32((uint32_t)(esi), 0xa1fb18u);
/* 8fd176: mov dword ptr [esi + 0x28], 0xa1faec */
  W32((uint32_t)(esi + 0x28u), 0xa1faecu);
/* 8fd17d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8fd183u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8fd183: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8fd187: mov eax, esi */
  eax = esi;
/* 8fd189: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd18a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd191: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd194: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd1c0(void) {
  LOAD_REGS();
L_8fd1c0: /* 8fd1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd1c1: mov esi, ecx */
  esi = ecx;
/* 8fd1c3: call 0x6cc824 */
  esp -= 4; W32(esp, 0x8fd1c8u); SPILL(); f_6cc824(); if (g_unwind) return; RELOAD();
/* 8fd1c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd1cd: je 0x8fd1de */
  if (zf) goto L_8fd1de;
L_8fd1cf: /* 8fd1cf: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 8fd1d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd1d5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x8fd1dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 8fd1db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fd1de: /* 8fd1de: mov eax, esi */
  eax = esi;
/* 8fd1e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd1e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd200(void) {
  LOAD_REGS();
L_8fd200: /* 8fd200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd201: mov esi, ecx */
  esi = ecx;
/* 8fd203: call 0x6c7d6a */
  esp -= 4; W32(esp, 0x8fd208u); SPILL(); f_6c7d6a(); if (g_unwind) return; RELOAD();
/* 8fd208: mov dword ptr [esi], 0xa1fbd0 */
  W32((uint32_t)(esi), 0xa1fbd0u);
/* 8fd20e: mov dword ptr [esi + 0x28], 0xa1fba8 */
  W32((uint32_t)(esi + 0x28u), 0xa1fba8u);
/* 8fd215: mov eax, esi */
  eax = esi;
/* 8fd217: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd218: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd230(void) {
  LOAD_REGS();
L_8fd230: /* 8fd230: xor eax, eax */
  eax = 0;
/* 8fd232: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd250(void) {
  LOAD_REGS();
L_8fd250: /* 8fd250: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd270(void) {
  LOAD_REGS();
L_8fd270: /* 8fd270: mov eax, 1 */
  eax = 0x1u;
/* 8fd275: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd290(void) {
  LOAD_REGS();
L_8fd290: /* 8fd290: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8fd2b0(void) {
  LOAD_REGS();
L_8fd2b0: /* 8fd2b0: xor eax, eax */
  eax = 0;
/* 8fd2b2: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8fd2d0(void) {
  LOAD_REGS();
L_8fd2d0: /* 8fd2d0: mov dword ptr [ecx + 0x90], 1 */
  W32((uint32_t)(ecx + 0x90u), 0x1u);
/* 8fd2da: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd2f0(void) {
  LOAD_REGS();
L_8fd2f0: /* 8fd2f0: xor eax, eax */
  eax = 0;
/* 8fd2f2: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd310(void) {
  LOAD_REGS();
L_8fd310: /* 8fd310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd311: mov esi, ecx */
  esi = ecx;
/* 8fd313: call 0x6c6e01 */
  esp -= 4; W32(esp, 0x8fd318u); SPILL(); f_6c6e01(); if (g_unwind) return; RELOAD();
/* 8fd318: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd31d: je 0x8fd32e */
  if (zf) goto L_8fd32e;
L_8fd31f: /* 8fd31f: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 8fd324: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd325: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x8fd32bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 8fd32b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fd32e: /* 8fd32e: mov eax, esi */
  eax = esi;
/* 8fd330: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd331: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd350(void) {
  LOAD_REGS();
L_8fd350: /* 8fd350: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd352: push 0x9d99a8 */
  { uint32_t v = 0x9d99a8u; esp -= 4; W32(esp, v); }
/* 8fd357: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd35e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd366: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd367: mov esi, ecx */
  esi = ecx;
/* 8fd369: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8fd36d: mov dword ptr [esi], 0xa1fbd0 */
  W32((uint32_t)(esi), 0xa1fbd0u);
/* 8fd373: mov dword ptr [esi + 0x28], 0xa1fba8 */
  W32((uint32_t)(esi + 0x28u), 0xa1fba8u);
/* 8fd37a: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8fd382: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x8fd388u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 8fd388: mov ecx, esi */
  ecx = esi;
/* 8fd38a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8fd392: call 0x6cc824 */
  esp -= 4; W32(esp, 0x8fd397u); SPILL(); f_6cc824(); if (g_unwind) return; RELOAD();
/* 8fd397: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8fd39b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd39c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd3a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd3a6: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd3d0(void) {
  LOAD_REGS();
L_8fd3d0: /* 8fd3d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fd3d1: mov ebp, esp */
  ebp = esp;
/* 8fd3d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd3d5: push 0x9d99c8 */
  { uint32_t v = 0x9d99c8u; esp -= 4; W32(esp, v); }
/* 8fd3da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd3e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd3e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fd3eb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fd3ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fd3ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd3f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd3f1: mov esi, ecx */
  esi = ecx;
/* 8fd3f3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fd3f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fd3f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd3fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd3fb: mov ecx, esi */
  ecx = esi;
/* 8fd3fd: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8fd400: call 0x6c648d */
  esp -= 4; W32(esp, 0x8fd405u); SPILL(); f_6c648d(); if (g_unwind) return; RELOAD();
/* 8fd405: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd407: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fd409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd40b: push 0xaf0880 */
  { uint32_t v = 0xaf0880u; esp -= 4; W32(esp, v); }
/* 8fd410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd412: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fd419: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8fd41c: push 0xcf0190 */
  { uint32_t v = 0xcf0190u; esp -= 4; W32(esp, v); }
/* 8fd421: mov dword ptr [esi], 0xa1fbd0 */
  W32((uint32_t)(esi), 0xa1fbd0u);
/* 8fd427: mov dword ptr [ebx], 0xa1fba8 */
  W32((uint32_t)(ebx), 0xa1fba8u);
/* 8fd42d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fd431: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x8fd437u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 8fd437: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd43a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd43c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8fd43f: mov edi, eax */
  edi = eax;
/* 8fd441: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fd447u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fd447: push 0xcf0190 */
  { uint32_t v = 0xcf0190u; esp -= 4; W32(esp, v); }
/* 8fd44c: mov ecx, edi */
  ecx = edi;
/* 8fd44e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8fd454u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8fd454: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd456: jne 0x8fd470 */
  if (!zf) goto L_8fd470;
L_8fd458: /* 8fd458: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8fd45d: push 0xaf0ad8 */
  { uint32_t v = 0xaf0ad8u; esp -= 4; W32(esp, v); }
/* 8fd462: push 0xaf0b1c */
  { uint32_t v = 0xaf0b1cu; esp -= 4; W32(esp, v); }
/* 8fd467: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fd46du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fd46d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fd470: /* 8fd470: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8fd476u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8fd476: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8fd47c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8fd47e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fd481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd483: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd484: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd486: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fd489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd48a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd48b: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8fd491u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8fd491: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd494: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8fd49a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd49b: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8fd49e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd49f: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 8fd4a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8fd4a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fd4a8: mov ecx, eax */
  ecx = eax;
/* 8fd4aa: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x8fd4adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fd4ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd4af: jne 0x8fd4cc */
  if (!zf) goto L_8fd4cc;
L_8fd4b1: /* 8fd4b1: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 8fd4b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd4b9: je 0x8fd4c2 */
  if (zf) goto L_8fd4c2;
L_8fd4bb: /* 8fd4bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fd4bd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fd4bf: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fd4c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fd4c2: /* 8fd4c2: mov dword ptr [esi + 0x88], 0 */
  W32((uint32_t)(esi + 0x88u), 0x0u);
L_8fd4cc: /* 8fd4cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fd4cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fd4d0: mov eax, esi */
  eax = esi;
/* 8fd4d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd4d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd4da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fd4db: mov esp, ebp */
  esp = ebp;
/* 8fd4dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fd4de: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8fd4e1(void) {
  LOAD_REGS();
L_8fd4e1: /* 8fd4e1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8fd4e4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fd4e9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fd4ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd4ed: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fd4f0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd4f5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fd4f5(); return;
}

void f_8fd4f5(void) {
  LOAD_REGS();
L_8fd4f5: /* 8fd4f5: push 0xa1fc60 */
  { uint32_t v = 0xa1fc60u; esp -= 4; W32(esp, v); }
/* 8fd4fa: push 0xaf08cc */
  { uint32_t v = 0xaf08ccu; esp -= 4; W32(esp, v); }
/* 8fd4ff: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fd505u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fd505: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd508: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd50a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd50c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd511u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fd511: guest_badaddr(0x8fd511); return;
}

void f_8fd580(void) {
  LOAD_REGS();
L_8fd580: /* 8fd580: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8fd584: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd586: je 0x8fd58d */
  if (zf) goto L_8fd58d;
L_8fd588: /* 8fd588: jmp 0x6cb316 */
  SPILL(); f_6cb316(); return;
L_8fd58d: /* 8fd58d: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd5a0(void) {
  LOAD_REGS();
L_8fd5a0: /* 8fd5a0: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd5c0(void) {
  LOAD_REGS();
L_8fd5c0: /* 8fd5c0: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8fd5c3: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd5e0(void) {
  LOAD_REGS();
L_8fd5e0: /* 8fd5e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fd5e1: mov ebp, esp */
  ebp = esp;
/* 8fd5e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd5e5: push 0x9d99e0 */
  { uint32_t v = 0x9d99e0u; esp -= 4; W32(esp, v); }
/* 8fd5ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd5f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd5f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd5f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fd5fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fd5fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd5fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8fd600: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd601: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fd604: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8fd60b: push 0xcefc58 */
  { uint32_t v = 0xcefc58u; esp -= 4; W32(esp, v); }
/* 8fd610: mov ecx, esi */
  ecx = esi;
/* 8fd612: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fd619: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8fd61fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8fd61f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fd622: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fd623: mov eax, esi */
  eax = esi;
/* 8fd625: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd626: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd62d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fd62e: mov esp, ebp */
  esp = ebp;
/* 8fd630: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fd631: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd634(void) {
  LOAD_REGS();
L_8fd634: /* 8fd634: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fd637: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fd63c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fd63f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd640: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fd643: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd648u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fd648(); return;
}

void f_8fd648(void) {
  LOAD_REGS();
L_8fd648: /* 8fd648: push 0xa1fcd0 */
  { uint32_t v = 0xa1fcd0u; esp -= 4; W32(esp, v); }
/* 8fd64d: push 0xaf0be0 */
  { uint32_t v = 0xaf0be0u; esp -= 4; W32(esp, v); }
/* 8fd652: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fd658u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fd658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd65b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd65d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd65f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd664u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fd664: guest_badaddr(0x8fd664); return;
}

void f_8fd6a0(void) {
  LOAD_REGS();
L_8fd6a0: /* 8fd6a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fd6a1: mov ebp, esp */
  ebp = esp;
/* 8fd6a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd6a5: push 0x9d99f0 */
  { uint32_t v = 0x9d99f0u; esp -= 4; W32(esp, v); }
/* 8fd6aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd6b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd6b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fd6bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fd6bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd6bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd6be: mov edi, ecx */
  edi = ecx;
/* 8fd6c0: mov esi, dword ptr [edi + 0x68] */
  esi = R32((uint32_t)(edi + 0x68u));
/* 8fd6c3: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8fd6c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd6c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fd6cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fd6d2: jne 0x8fd71e */
  if (!zf) goto L_8fd71e;
L_8fd6d4: /* 8fd6d4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8fd6da: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 8fd6e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd6e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd6e2: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8fd6e8u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8fd6e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd6eb: add esi, 0xd4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8fd6f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd6f2: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 8fd6f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd6f9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fd6fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fd6fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd6fe: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8fd701: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fd702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd703: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fd705u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fd705: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fd708: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8fd70b: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8fd711: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fd713: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fd717: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8fd71a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fd71b: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x8fd71eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fd71e: /* 8fd71e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fd721: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fd722: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd72a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fd72b: mov esp, ebp */
  esp = ebp;
/* 8fd72d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fd72e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8fd731(void) {
  LOAD_REGS();
L_8fd731: /* 8fd731: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fd734: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fd739: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fd73c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd73d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fd740: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd745u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fd745(); return;
}

void f_8fd745(void) {
  LOAD_REGS();
L_8fd745: /* 8fd745: push 0xa1fd40 */
  { uint32_t v = 0xa1fd40u; esp -= 4; W32(esp, v); }
/* 8fd74a: push 0xaf0be8 */
  { uint32_t v = 0xaf0be8u; esp -= 4; W32(esp, v); }
/* 8fd74f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fd755u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fd755: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd758: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd75a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd75c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd761u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fd761: guest_badaddr(0x8fd761); return;
}

void f_8fd7b0(void) {
  LOAD_REGS();
L_8fd7b0: /* 8fd7b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fd7b1: mov ebp, esp */
  ebp = esp;
/* 8fd7b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd7b5: push 0x9d9a00 */
  { uint32_t v = 0x9d9a00u; esp -= 4; W32(esp, v); }
/* 8fd7ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd7c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd7c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd7c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fd7cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fd7cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd7cd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8fd7d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd7d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fd7d4: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8fd7db: push 0xaf0bf0 */
  { uint32_t v = 0xaf0bf0u; esp -= 4; W32(esp, v); }
/* 8fd7e0: mov ecx, esi */
  ecx = esi;
/* 8fd7e2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fd7e9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8fd7efu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8fd7ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fd7f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fd7f3: mov eax, esi */
  eax = esi;
/* 8fd7f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd7f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd7fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fd7fe: mov esp, ebp */
  esp = ebp;
/* 8fd800: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fd801: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd804(void) {
  LOAD_REGS();
L_8fd804: /* 8fd804: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fd807: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fd80c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fd80f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd810: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fd813: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd818u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fd818(); return;
}

void f_8fd818(void) {
  LOAD_REGS();
L_8fd818: /* 8fd818: push 0xa1fd90 */
  { uint32_t v = 0xa1fd90u; esp -= 4; W32(esp, v); }
/* 8fd81d: push 0xaf0c34 */
  { uint32_t v = 0xaf0c34u; esp -= 4; W32(esp, v); }
/* 8fd822: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fd828u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fd828: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd82b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd82d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd82f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd834u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fd834: guest_badaddr(0x8fd834); return;
}

void f_8fd870(void) {
  LOAD_REGS();
L_8fd870: /* 8fd870: mov eax, 1 */
  eax = 0x1u;
/* 8fd875: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd890(void) {
  LOAD_REGS();
L_8fd890: /* 8fd890: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8fd893: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 8fd896: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fd898: jne 0x8fd89f */
  if (!zf) goto L_8fd89f;
L_8fd89a: /* 8fd89a: jmp 0x6c5f33 */
  SPILL(); f_6c5f33(); return;
L_8fd89f: /* 8fd89f: ret  */
  esp += 4; SPILL(); return;
}

void f_8fd8b0(void) {
  LOAD_REGS();
L_8fd8b0: /* 8fd8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fd8b1: mov ebp, esp */
  ebp = esp;
/* 8fd8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd8b5: push 0x9d9a10 */
  { uint32_t v = 0x9d9a10u; esp -= 4; W32(esp, v); }
/* 8fd8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd8c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fd8cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fd8cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd8cd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8fd8d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd8d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fd8d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd8d5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fd8dc: call 0x6c5191 */
  esp -= 4; W32(esp, 0x8fd8e1u); SPILL(); f_6c5191(); if (g_unwind) return; RELOAD();
/* 8fd8e1: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 8fd8e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fd8ea: or eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8fd8ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fd8f0: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 8fd8f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd8f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd8fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fd8ff: mov esp, ebp */
  esp = ebp;
/* 8fd901: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fd902: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fd905(void) {
  LOAD_REGS();
L_8fd905: /* 8fd905: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fd908: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fd90d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fd910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fd911: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fd914: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd919u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fd919(); return;
}

void f_8fd919(void) {
  LOAD_REGS();
L_8fd919: /* 8fd919: push 0xa1fdd8 */
  { uint32_t v = 0xa1fdd8u; esp -= 4; W32(esp, v); }
/* 8fd91e: push 0xaf0c3c */
  { uint32_t v = 0xaf0c3cu; esp -= 4; W32(esp, v); }
/* 8fd923: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fd929u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fd929: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd92c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd92e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fd930: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd935u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fd935: guest_badaddr(0x8fd935); return;
}

void f_8fd970(void) {
  LOAD_REGS();
L_8fd970: /* 8fd970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fd971: mov ebp, esp */
  ebp = esp;
/* 8fd973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fd975: push 0x9d9a20 */
  { uint32_t v = 0x9d9a20u; esp -= 4; W32(esp, v); }
/* 8fd97a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fd980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fd988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fd98b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8fd98e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fd98f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fd990: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd991: mov esi, ecx */
  esi = ecx;
/* 8fd993: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8fd996: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fd999: xor edi, edi */
  edi = 0;
/* 8fd99b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fd99c: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8fd9a2: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8fd9a5: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8fd9abu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8fd9ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fd9ae: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 8fd9b1: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 8fd9b4: mov dword ptr [esi + 0xd4], edi */
  W32((uint32_t)(esi + 0xd4u), edi);
/* 8fd9ba: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
/* 8fd9c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fd9c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fd9c2: mov eax, 1 */
  eax = 0x1u;
/* 8fd9c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fd9ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fd9cf: mov esp, ebp */
  esp = ebp;
/* 8fd9d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fd9d2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8fd9d5(void) {
  LOAD_REGS();
L_8fd9d5: /* 8fd9d5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fd9d8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fd9dd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8fd9e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fd9e1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8fd9e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fd9e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fd9e9(); return;
}

void f_8fd9e9(void) {
  LOAD_REGS();
L_8fd9e9: /* 8fd9e9: push 0xa1fe38 */
  { uint32_t v = 0xa1fe38u; esp -= 4; W32(esp, v); }
/* 8fd9ee: push 0xaf0c6c */
  { uint32_t v = 0xaf0c6cu; esp -= 4; W32(esp, v); }
/* 8fd9f3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fd9f9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fd9f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fd9fc: xor edi, edi */
  edi = 0;
/* 8fd9fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fd9ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fda00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fda05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fda05: guest_badaddr(0x8fda05); return;
}

void f_8fda40(void) {
  LOAD_REGS();
L_8fda40: /* 8fda40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fda41: mov ebp, esp */
  ebp = esp;
/* 8fda43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fda45: push 0x9d9a30 */
  { uint32_t v = 0x9d9a30u; esp -= 4; W32(esp, v); }
/* 8fda4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fda50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fda51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fda58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fda5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fda5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fda5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fda5e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fda61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fda63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fda64: mov esi, ecx */
  esi = ecx;
/* 8fda66: mov ecx, esp */
  ecx = esp;
/* 8fda68: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8fda6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fda6d: push 0xaf0db0 */
  { uint32_t v = 0xaf0db0u; esp -= 4; W32(esp, v); }
/* 8fda72: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fda79: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x8fda7fu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 8fda7f: mov ecx, esi */
  ecx = esi;
/* 8fda81: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8fda87u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8fda87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fda88: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 8fda8a: call dword ptr [0xcfaa28] */
  esp -= 4; W32(esp, 0x8fda90u); SPILL(); f_4e16bd(); if (g_unwind) return; /* Core!??2UStrProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8fda90: mov esi, eax */
  esi = eax;
/* 8fda92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fda95: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fda97: je 0x8fdab8 */
  if (zf) goto L_8fdab8;
L_8fda99: /* 8fda99: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fda9e: push 0xaf0dd8 */
  { uint32_t v = 0xaf0dd8u; esp -= 4; W32(esp, v); }
/* 8fdaa3: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 8fdaa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdaaa: mov ecx, esi */
  ecx = esi;
/* 8fdaac: call dword ptr [0xcfaa24] */
  esp -= 4; W32(esp, 0x8fdab2u); SPILL(); f_4e44c1(); if (g_unwind) return; /* Core!??0UStrProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8fdab2: mov dword ptr [esi], 0xa101d0 */
  W32((uint32_t)(esi), 0xa101d0u);
L_8fdab8: /* 8fdab8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fdabb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fdabc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fdabd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fdac4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fdac5: mov esp, ebp */
  esp = ebp;
/* 8fdac7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fdac8: ret  */
  esp += 4; SPILL(); return;
}

void f_8fdac9(void) {
  LOAD_REGS();
L_8fdac9: /* 8fdac9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fdacc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fdad1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fdad4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fdad5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fdad8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdaddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fdadd(); return;
}

void f_8fdadd(void) {
  LOAD_REGS();
L_8fdadd: /* 8fdadd: push 0xa1fe70 */
  { uint32_t v = 0xa1fe70u; esp -= 4; W32(esp, v); }
/* 8fdae2: push 0xaf0de8 */
  { uint32_t v = 0xaf0de8u; esp -= 4; W32(esp, v); }
/* 8fdae7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fdaedu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fdaed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdaf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdaf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdaf4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdaf9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fdaf9: guest_badaddr(0x8fdaf9); return;
}

void f_8fdb30(void) {
  LOAD_REGS();
L_8fdb30: /* 8fdb30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fdb31: mov ebp, esp */
  ebp = esp;
/* 8fdb33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fdb35: push 0x9d9a40 */
  { uint32_t v = 0x9d9a40u; esp -= 4; W32(esp, v); }
/* 8fdb3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fdb40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fdb41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fdb48: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fdb4b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8fdb50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fdb51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fdb52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fdb53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fdb56: mov esi, ecx */
  esi = ecx;
/* 8fdb58: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fdb5a: push 0xaf0df0 */
  { uint32_t v = 0xaf0df0u; esp -= 4; W32(esp, v); }
/* 8fdb5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fdb60: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fdb67: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fdb6du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fdb6d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8fdb73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdb76: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fdb78: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fdb7c: je 0x8fdb8e */
  if (zf) goto L_8fdb8e;
L_8fdb7e: /* 8fdb7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fdb80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fdb82: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8fdb84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fdb84: mov dword ptr [esi + 0xb4], 0 */
  W32((uint32_t)(esi + 0xb4u), 0x0u);
L_8fdb8e: /* 8fdb8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fdb91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fdb92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fdb93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fdb9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fdb9b: mov esp, ebp */
  esp = ebp;
/* 8fdb9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fdb9e: ret  */
  esp += 4; SPILL(); return;
}

void f_8fdb9f(void) {
  LOAD_REGS();
L_8fdb9f: /* 8fdb9f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fdba2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fdba7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fdbaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fdbab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fdbae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdbb3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fdbb3(); return;
}

void f_8fdbb3(void) {
  LOAD_REGS();
L_8fdbb3: /* 8fdbb3: push 0xa1ff14 */
  { uint32_t v = 0xa1ff14u; esp -= 4; W32(esp, v); }
/* 8fdbb8: push 0xaf0e24 */
  { uint32_t v = 0xaf0e24u; esp -= 4; W32(esp, v); }
/* 8fdbbd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fdbc3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fdbc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdbc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdbc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdbca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdbcfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fdbcf(); return;
}

void f_8fdbcf(void) {
  LOAD_REGS();
L_8fdbcf: /* 8fdbcf: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8fdbd2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fdbd7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8fdbda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fdbdb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8fdbde: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdbe3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fdbe3(); return;
}

void f_8fdbe3(void) {
  LOAD_REGS();
L_8fdbe3: /* 8fdbe3: push 0xa1fec8 */
  { uint32_t v = 0xa1fec8u; esp -= 4; W32(esp, v); }
/* 8fdbe8: push 0xaf0e2c */
  { uint32_t v = 0xaf0e2cu; esp -= 4; W32(esp, v); }
/* 8fdbed: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fdbf3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fdbf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdbf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdbf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdbfa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdbffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fdbff: guest_badaddr(0x8fdbff); return;
}

void f_8fdc40(void) {
  LOAD_REGS();
L_8fdc40: /* 8fdc40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fdc41: mov ebp, esp */
  ebp = esp;
/* 8fdc43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fdc45: push 0x9d9a50 */
  { uint32_t v = 0x9d9a50u; esp -= 4; W32(esp, v); }
/* 8fdc4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fdc50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fdc51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fdc58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fdc5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fdc5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fdc5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8fdc60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fdc61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fdc64: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8fdc6b: push 0xcefc5c */
  { uint32_t v = 0xcefc5cu; esp -= 4; W32(esp, v); }
/* 8fdc70: mov ecx, esi */
  ecx = esi;
/* 8fdc72: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fdc79: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8fdc7fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8fdc7f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fdc82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fdc83: mov eax, esi */
  eax = esi;
/* 8fdc85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fdc86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fdc8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fdc8e: mov esp, ebp */
  esp = ebp;
/* 8fdc90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fdc91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fdc94(void) {
  LOAD_REGS();
L_8fdc94: /* 8fdc94: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fdc97: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fdc9c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fdc9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fdca0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fdca3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdca8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fdca8(); return;
}

void f_8fdca8(void) {
  LOAD_REGS();
L_8fdca8: /* 8fdca8: push 0xa1ff30 */
  { uint32_t v = 0xa1ff30u; esp -= 4; W32(esp, v); }
/* 8fdcad: push 0xaf0f58 */
  { uint32_t v = 0xaf0f58u; esp -= 4; W32(esp, v); }
/* 8fdcb2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fdcb8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fdcb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdcbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdcbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdcbf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdcc4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fdcc4: guest_badaddr(0x8fdcc4); return;
}

void f_8fdd00(void) {
  LOAD_REGS();
L_8fdd00: /* 8fdd00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fdd01: mov ebp, esp */
  ebp = esp;
/* 8fdd03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fdd05: push 0x9d9a60 */
  { uint32_t v = 0x9d9a60u; esp -= 4; W32(esp, v); }
/* 8fdd0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fdd10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fdd11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fdd18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fdd1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fdd1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fdd1d: mov esi, ecx */
  esi = ecx;
/* 8fdd1f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 8fdd22: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fdd24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fdd25: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fdd28: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fdd2f: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8fdd32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fdd32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fdd34: jne 0x8fdd4e */
  if (!zf) goto L_8fdd4e;
L_8fdd36: /* 8fdd36: push 0x17d */
  { uint32_t v = 0x17du; esp -= 4; W32(esp, v); }
/* 8fdd3b: push 0xaf106c */
  { uint32_t v = 0xaf106cu; esp -= 4; W32(esp, v); }
/* 8fdd40: push 0xaf107c */
  { uint32_t v = 0xaf107cu; esp -= 4; W32(esp, v); }
/* 8fdd45: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fdd4bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fdd4b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fdd4e: /* 8fdd4e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 8fdd51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fdd53: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fdd56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fdd56: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fdd59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fdd5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fdd5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fdd62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fdd63: mov esp, ebp */
  esp = ebp;
/* 8fdd65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fdd66: ret  */
  esp += 4; SPILL(); return;
}

void f_8fdd67(void) {
  LOAD_REGS();
L_8fdd67: /* 8fdd67: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fdd6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fdd6f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fdd72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fdd73: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fdd76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdd7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fdd7b(); return;
}

void f_8fdd7b(void) {
  LOAD_REGS();
L_8fdd7b: /* 8fdd7b: push 0xa1ff94 */
  { uint32_t v = 0xa1ff94u; esp -= 4; W32(esp, v); }
/* 8fdd80: push 0xaf1098 */
  { uint32_t v = 0xaf1098u; esp -= 4; W32(esp, v); }
/* 8fdd85: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fdd8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fdd8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdd8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdd90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fdd92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdd97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fdd97: guest_badaddr(0x8fdd97); return;
}

void f_8fddd0(void) {
  LOAD_REGS();
L_8fddd0: /* 8fddd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8fddd4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fddd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fddd7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fddddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fdddd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fddf0(void) {
  LOAD_REGS();
L_8fddf0: /* 8fddf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fddf1: mov ebp, esp */
  ebp = esp;
/* 8fddf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fddf5: push 0x9d9a70 */
  { uint32_t v = 0x9d9a70u; esp -= 4; W32(esp, v); }
/* 8fddfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fde00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fde01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fde08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fde0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fde0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fde0d: mov esi, ecx */
  esi = ecx;
/* 8fde0f: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 8fde15: xor ebx, ebx */
  ebx = 0;
/* 8fde17: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fde19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fde1a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fde1d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8fde20: je 0x8fde37 */
  if (zf) goto L_8fde37;
L_8fde22: /* 8fde22: xor eax, eax */
  eax = 0;
/* 8fde24: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fde27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fde2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fde2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fde30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fde31: mov esp, ebp */
  esp = ebp;
/* 8fde33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fde34: ret 8 */
  esp += 12; SPILL(); return;
L_8fde37: /* 8fde37: mov edi, dword ptr [0xcfa5b8] */
  edi = R32((uint32_t)(0xcfa5b8u));
/* 8fde3d: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8fde40: push 0xaf0f60 */
  { uint32_t v = 0xaf0f60u; esp -= 4; W32(esp, v); }
/* 8fde45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fde46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fde48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fde48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fde4b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fde4d: jne 0x8fdee9 */
  if (!zf) goto L_8fdee9;
L_8fde53: /* 8fde53: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8fde56: push 0xaf0f70 */
  { uint32_t v = 0xaf0f70u; esp -= 4; W32(esp, v); }
/* 8fde5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fde5c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fde5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fde5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fde61: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fde63: jne 0x8fdee9 */
  if (!zf) goto L_8fdee9;
L_8fde69: /* 8fde69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8fde6c: push 0xaf1018 */
  { uint32_t v = 0xaf1018u; esp -= 4; W32(esp, v); }
/* 8fde71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fde72: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fde74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fde74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fde77: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fde79: je 0x8fde22 */
  if (zf) goto L_8fde22;
L_8fde7b: /* 8fde7b: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 8fde7e: mov dword ptr [esi + 0x98], ebx */
  W32((uint32_t)(esi + 0x98u), ebx);
/* 8fde84: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fde8au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fde8a: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 8fde90: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fde93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fde94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fde95: push 0xaf102c */
  { uint32_t v = 0xaf102cu; esp -= 4; W32(esp, v); }
/* 8fde9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fde9b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fdea1u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fdea1: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8fdea4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdea7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fdea9: jne 0x8fdee0 */
  if (!zf) goto L_8fdee0;
L_8fdeab: /* 8fdeab: add esi, -0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8fdeae: mov ecx, esi */
  ecx = esi;
/* 8fdeb0: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8fdeb5u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8fdeb5: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fdeb7: mov dword ptr [eax + 0x88], ebx */
  W32((uint32_t)(eax + 0x88u), ebx);
/* 8fdebd: je 0x8fdec8 */
  if (zf) goto L_8fdec8;
L_8fdebf: /* 8fdebf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fdec1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fdec3: mov ecx, esi */
  ecx = esi;
/* 8fdec5: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8fdec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fdec8: /* 8fdec8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fdecb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fdecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fdecd: mov eax, 1 */
  eax = 0x1u;
/* 8fded2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fded9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fdeda: mov esp, ebp */
  esp = ebp;
/* 8fdedc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fdedd: ret 8 */
  esp += 12; SPILL(); return;
L_8fdee0: /* 8fdee0: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
/* 8fdee7: jmp 0x8fdec8 */
  goto L_8fdec8;
L_8fdee9: /* 8fdee9: cmp dword ptr [esi + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fdeec: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 8fdeef: je 0x8fdf0c */
  if (zf) goto L_8fdf0c;
L_8fdef1: /* 8fdef1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fdef7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fdef7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8fdefa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fdefb: push 0xaf0f88 */
  { uint32_t v = 0xaf0f88u; esp -= 4; W32(esp, v); }
/* 8fdf00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fdf01: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fdf07u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fdf07: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdf0a: jmp 0x8fdec8 */
  goto L_8fdec8;
L_8fdf0c: /* 8fdf0c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fdf12u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fdf12: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fdf15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fdf16: push 0xaf0fd0 */
  { uint32_t v = 0xaf0fd0u; esp -= 4; W32(esp, v); }
/* 8fdf1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fdf1c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fdf22u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fdf22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdf25: jmp 0x8fdec8 */
  goto L_8fdec8;
}

void f_8fdf27(void) {
  LOAD_REGS();
L_8fdf27: /* 8fdf27: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fdf2a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fdf2f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fdf32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fdf33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fdf36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdf3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fdf3b(); return;
}

void f_8fdf3b(void) {
  LOAD_REGS();
L_8fdf3b: /* 8fdf3b: push 0xa1ffd0 */
  { uint32_t v = 0xa1ffd0u; esp -= 4; W32(esp, v); }
/* 8fdf40: push 0xaf1064 */
  { uint32_t v = 0xaf1064u; esp -= 4; W32(esp, v); }
/* 8fdf45: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fdf4bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fdf4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fdf4e: xor ebx, ebx */
  ebx = 0;
/* 8fdf50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fdf51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fdf52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fdf57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fdf57: guest_badaddr(0x8fdf57); return;
}

void f_8fdfc0(void) {
  LOAD_REGS();
L_8fdfc0: /* 8fdfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fdfc1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fdfc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fdfc5: mov esi, ecx */
  esi = ecx;
/* 8fdfc7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fdfcdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fdfcd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8fdfd1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8fdfd3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8fdfd5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8fdfd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fdfd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fdff0(void) {
  LOAD_REGS();
L_8fdff0: /* 8fdff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fdff1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8fdff5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fdff7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fdff8: je 0x8fe018 */
  if (zf) goto L_8fe018;
L_8fdffa: /* 8fdffa: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 8fdfff: mov ecx, esi */
  ecx = esi;
/* 8fe001: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8fe007u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8fe007: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe009: jne 0x8fe040 */
  if (!zf) goto L_8fe040;
L_8fe00b: /* 8fe00b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe00c: mov ecx, esi */
  ecx = esi;
/* 8fe00e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8fe014u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8fe014: mov edi, eax */
  edi = eax;
/* 8fe016: jmp 0x8fe01d */
  goto L_8fe01d;
L_8fe018: /* 8fe018: mov edi, 0xaf110c */
  edi = 0xaf110cu;
L_8fe01d: /* 8fe01d: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 8fe022: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8fe028u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8fe028: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe029: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8fe02e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fe030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fe031: push 0xaf1118 */
  { uint32_t v = 0xaf1118u; esp -= 4; W32(esp, v); }
/* 8fe036: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe037: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8fe03du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8fe03d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fe040: /* 8fe040: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fe041: mov eax, esi */
  eax = esi;
/* 8fe043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fe044: ret  */
  esp += 4; SPILL(); return;
}

void f_8fe070(void) {
  LOAD_REGS();
L_8fe070: /* 8fe070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fe071: mov ebp, esp */
  ebp = esp;
/* 8fe073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fe075: push 0x9d9a80 */
  { uint32_t v = 0x9d9a80u; esp -= 4; W32(esp, v); }
/* 8fe07a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fe080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fe088: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fe08b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fe08c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fe08d: mov eax, ecx */
  eax = ecx;
/* 8fe08f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fe090: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8fe093: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8fe096: xor esi, esi */
  esi = 0;
/* 8fe098: xor edi, edi */
  edi = 0;
/* 8fe09a: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe09c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fe09f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8fe0a2: je 0x8fe2b4 */
  if (zf) goto L_8fe2b4;
L_8fe0a8: /* 8fe0a8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fe0aa: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8fe0ad: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8fe0b0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fe0b3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fe0b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe0b8: jge 0x8fe0c0 */
  if ((sf == of)) goto L_8fe0c0;
L_8fe0ba: /* 8fe0ba: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe0c0: /* 8fe0c0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fe0c3: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fe0c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe0cb: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fe0ce: jge 0x8fe0d6 */
  if ((sf == of)) goto L_8fe0d6;
L_8fe0d0: /* 8fe0d0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe0d6: /* 8fe0d6: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8fe0dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fe0de: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8fe0e0: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fe0e6: fstp qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8fe0e9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fe0eb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fe0ee: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8fe0f1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fe0f4: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fe0f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe0f9: jge 0x8fe101 */
  if ((sf == of)) goto L_8fe101;
L_8fe0fb: /* 8fe0fb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe101: /* 8fe101: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fe104: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fe10a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe10c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fe10f: jge 0x8fe117 */
  if ((sf == of)) goto L_8fe117;
L_8fe111: /* 8fe111: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe117: /* 8fe117: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8fe11d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fe11f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe122: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8fe124: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fe12a: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 8fe130: fld qword ptr [ecx + 0xcc] */
  { double v = F64((uint32_t)(ecx + 0xccu)); FPUSH(v); }
/* 8fe136: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8fe139: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8fe13b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fe13d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fe140: jnp 0x8fe159 */
  if (!pf) goto L_8fe159;
L_8fe142: /* 8fe142: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8fe144: fld qword ptr [ebp - 0x20] */
  { double v = F64((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8fe147: fcomp qword ptr [ebp - 0x30] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0xffffffd0u)));
  FPOP();
/* 8fe14a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fe14c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fe14f: jp 0x8fe156 */
  if (pf) goto L_8fe156;
L_8fe151: /* 8fe151: fld qword ptr [ebp - 0x20] */
  { double v = F64((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8fe154: jmp 0x8fe159 */
  goto L_8fe159;
L_8fe156: /* 8fe156: fld qword ptr [ebp - 0x30] */
  { double v = F64((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
L_8fe159: /* 8fe159: fstp qword ptr [ecx + 0xcc] */
  WF64((uint32_t)(ecx + 0xccu), ST0); FPOP();
/* 8fe15f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe162: inc dword ptr [eax + 0xd4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xd4u), r);
  }
/* 8fe168: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe16b: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 8fe16e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe170: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fe173u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe173: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe175: je 0x8fe1b2 */
  if (zf) goto L_8fe1b2;
L_8fe177: /* 8fe177: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe17a: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 8fe17d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe17f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fe182u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe182: cmp dword ptr [eax + 0x100], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x100u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe188: je 0x8fe1b2 */
  if (zf) goto L_8fe1b2;
L_8fe18a: /* 8fe18a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe18d: cmp dword ptr [eax + 0xd8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xd8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe193: jne 0x8fe1b2 */
  if (!zf) goto L_8fe1b2;
L_8fe195: /* 8fe195: call 0x6c44ad */
  esp -= 4; W32(esp, 0x8fe19au); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 8fe19a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe19d: fstp qword ptr [ecx + 0xc4] */
  WF64((uint32_t)(ecx + 0xc4u), ST0); FPOP();
/* 8fe1a3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe1a6: mov edx, dword ptr [eax + 0xd4] */
  edx = R32((uint32_t)(eax + 0xd4u));
/* 8fe1ac: mov dword ptr [eax + 0xd8], edx */
  W32((uint32_t)(eax + 0xd8u), edx);
L_8fe1b2: /* 8fe1b2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe1b5: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8fe1b8: cmp dword ptr [ecx + 0x6c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x6cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe1bc: jne 0x8fe25a */
  if (!zf) goto L_8fe25a;
L_8fe1c2: /* 8fe1c2: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8fe1c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe1ca: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x8fe1cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe1cd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe1cf: jne 0x8fe25a */
  if (!zf) goto L_8fe25a;
L_8fe1d5: /* 8fe1d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe1d8: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8fe1de: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fe1e4u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fe1e4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe1e6: jne 0x8fe25a */
  if (!zf) goto L_8fe25a;
L_8fe1e8: /* 8fe1e8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe1eb: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8fe1f1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8fe1f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe1f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe1f6: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8fe1fcu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8fe1fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe1ff: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8fe202: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe204: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8fe20au); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8fe20a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe20d: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8fe213: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fe215: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe218: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x8fe21bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe21b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe21e: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8fe224: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe226: add eax, -8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8fe229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe22a: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8fe22du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe22d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe230: cmp dword ptr [eax + 0xb8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe236: jne 0x8fe252 */
  if (!zf) goto L_8fe252;
L_8fe238: /* 8fe238: call 0x6c44ad */
  esp -= 4; W32(esp, 0x8fe23du); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 8fe23d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fe240: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe243: fadd qword ptr [ecx + 0xcc] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xccu)));
/* 8fe249: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fe24b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fe24d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe250: je 0x8fe238 */
  if (zf) goto L_8fe238;
L_8fe252: /* 8fe252: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fe255: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8fe258: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
L_8fe25a: /* 8fe25a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8fe25d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8fe25f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe262: mov dword ptr [edx + 0xdc], ecx */
  W32((uint32_t)(edx + 0xdcu), ecx);
/* 8fe268: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fe26a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fe26d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8fe270: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8fe273: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fe276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe278: jge 0x8fe280 */
  if ((sf == of)) goto L_8fe280;
L_8fe27a: /* 8fe27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe280: /* 8fe280: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fe283: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fe289: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe28b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fe28e: jge 0x8fe296 */
  if ((sf == of)) goto L_8fe296;
L_8fe290: /* 8fe290: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe296: /* 8fe296: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8fe29c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fe29e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe2a1: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8fe2a3: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fe2a9: fstp qword ptr [eax + 0xcc] */
  WF64((uint32_t)(eax + 0xccu), ST0); FPOP();
/* 8fe2af: jmp 0x8fe372 */
  goto L_8fe372;
L_8fe2b4: /* 8fe2b4: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 8fe2b7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe2b9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fe2bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe2bc: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8fe2bf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8fe2c2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe2c5: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8fe2c7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8fe2c9: fadd dword ptr [ecx + 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x12cu)));
/* 8fe2cf: mov al, byte ptr [eax + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 8fe2d5: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe2d7: fstp dword ptr [ecx + 0x12c] */
  WF32((uint32_t)(ecx + 0x12cu), ST0); FPOP();
/* 8fe2dd: je 0x8fe301 */
  if (zf) goto L_8fe301;
L_8fe2df: /* 8fe2df: call 0x6c44ad */
  esp -= 4; W32(esp, 0x8fe2e4u); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 8fe2e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe2e7: fsub qword ptr [ecx + 0x124] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x124u)));
/* 8fe2ed: fild dword ptr [ecx + 0x6c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x6cu)); FPUSH(v); }
/* 8fe2f0: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8fe2f6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8fe2f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8fe2fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8fe2fd: jp 0x8fe372 */
  if (pf) goto L_8fe372;
L_8fe2ff: /* 8fe2ff: jmp 0x8fe304 */
  goto L_8fe304;
L_8fe301: /* 8fe301: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8fe304: /* 8fe304: inc dword ptr [ecx + 0xd4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0xd4u), r);
  }
/* 8fe30a: call 0x6c44ad */
  esp -= 4; W32(esp, 0x8fe30fu); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 8fe30f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe312: fstp qword ptr [eax + 0x124] */
  WF64((uint32_t)(eax + 0x124u), ST0); FPOP();
/* 8fe318: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe31b: mov ecx, dword ptr [eax + 0x12c] */
  ecx = R32((uint32_t)(eax + 0x12cu));
/* 8fe321: mov dword ptr [eax + 0xdc], ecx */
  W32((uint32_t)(eax + 0xdcu), ecx);
/* 8fe327: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe32a: mov dword ptr [edx + 0x12c], esi */
  W32((uint32_t)(edx + 0x12cu), esi);
/* 8fe330: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe333: lea ecx, [eax + 0xdc] */
  ecx = (uint32_t)(eax + 0xdcu);
/* 8fe339: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8fe33c: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 8fe342: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe343: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe344: mov edi, 1 */
  edi = 0x1u;
/* 8fe349: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8fe34fu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8fe34f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe352: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 8fe358: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe35b: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fe361: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe363: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fe365u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe365: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe368: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8fe36b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe36c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe36d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8fe36fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe36f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fe372: /* 8fe372: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fe375: mov eax, edi */
  eax = edi;
/* 8fe377: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fe378: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fe379: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fe380: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fe381: mov esp, ebp */
  esp = ebp;
/* 8fe383: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fe384: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fe387(void) {
  LOAD_REGS();
L_8fe387: /* 8fe387: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8fe38a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fe38f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8fe392: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe393: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8fe396: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fe39bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fe39b(); return;
}

void f_8fe39b(void) {
  LOAD_REGS();
L_8fe39b: /* 8fe39b: push 0xa20004 */
  { uint32_t v = 0xa20004u; esp -= 4; W32(esp, v); }
/* 8fe3a0: push 0xaf0e34 */
  { uint32_t v = 0xaf0e34u; esp -= 4; W32(esp, v); }
/* 8fe3a5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fe3abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fe3ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe3ae: xor esi, esi */
  esi = 0;
/* 8fe3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fe3b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fe3b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fe3b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fe3b7: guest_badaddr(0x8fe3b7); return;
}

void f_8fe4a0(void) {
  LOAD_REGS();
L_8fe4a0: /* 8fe4a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fe4a1: mov ebp, esp */
  ebp = esp;
/* 8fe4a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fe4a5: push 0x9d9acf */
  { uint32_t v = 0x9d9acfu; esp -= 4; W32(esp, v); }
/* 8fe4aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fe4b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe4b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fe4b8: sub esp, 0x24c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fe4be: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8fe4c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fe4c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fe4c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fe4c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fe4c7: xor esi, esi */
  esi = 0;
/* 8fe4c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe4ca: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8fe4cd: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8fe4d0: call 0x6cc77a */
  esp -= 4; W32(esp, 0x8fe4d5u); SPILL(); f_6cc77a(); if (g_unwind) return; RELOAD();
/* 8fe4d5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe4d8: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8fe4db: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe4dd: je 0x8fe581 */
  if (zf) goto L_8fe581;
L_8fe4e3: /* 8fe4e3: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 8fe4e6: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe4e9: je 0x8fe4f4 */
  if (zf) goto L_8fe4f4;
L_8fe4eb: /* 8fe4eb: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe4ee: jne 0x8fe581 */
  if (!zf) goto L_8fe581;
L_8fe4f4: /* 8fe4f4: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 8fe4fa: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
L_8fe500: /* 8fe500: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8fe506: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe508: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x8fe50bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe50b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe50d: jne 0x8fe5f8 */
  if (!zf) goto L_8fe5f8;
L_8fe513: /* 8fe513: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe516: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8fe51c: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fe522u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fe522: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe524: jne 0x8fe5f8 */
  if (!zf) goto L_8fe5f8;
L_8fe52a: /* 8fe52a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe52d: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8fe533: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8fe536: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe537: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe538: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8fe53au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe53a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe53d: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8fe543: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe546: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8fe549: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe54a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe54b: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8fe551u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8fe551: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe554: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8fe557: mov edx, dword ptr [eax + 0xd4] */
  edx = R32((uint32_t)(eax + 0xd4u));
/* 8fe55d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe560: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fe562: jle 0x8fe594 */
  if ((zf || sf != of)) goto L_8fe594;
L_8fe564: /* 8fe564: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8fe56a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe56c: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8fe56fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe56f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe572: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8fe578: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe57a: add eax, -8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8fe57d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe57e: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8fe581u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fe581: /* 8fe581: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fe584: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fe58b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fe58c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fe58d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fe58e: mov esp, ebp */
  esp = ebp;
/* 8fe590: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fe591: ret 4 */
  esp += 8; SPILL(); return;
L_8fe594: /* 8fe594: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 8fe59a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8fe59d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe59e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe59f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8fe5a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe5a1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fe5a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe5a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe5a9: je 0x8fe704 */
  if (zf) goto L_8fe704;
L_8fe5af: /* 8fe5af: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe5b2: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8fe5b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fe5ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe5bb: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 8fe5c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe5c2: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8fe5c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe5c5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe5c8: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8fe5ce: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8fe5d4u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8fe5d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe5d6: je 0x8fe6ed */
  if (zf) goto L_8fe6ed;
L_8fe5dc: /* 8fe5dc: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8fe5e2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fe5e4: push 0xaf0f10 */
  { uint32_t v = 0xaf0f10u; esp -= 4; W32(esp, v); }
/* 8fe5e9: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8fe5ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe5ef: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fe5f5u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fe5f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fe5f8: /* 8fe5f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe5fb: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8fe5fe: mov ebx, 1 */
  ebx = 0x1u;
/* 8fe603: mov dword ptr [edx + 0x6c], ebx */
  W32((uint32_t)(edx + 0x6cu), ebx);
/* 8fe606: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe609: mov dword ptr [eax + 0xbc], ebx */
  W32((uint32_t)(eax + 0xbcu), ebx);
/* 8fe60f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8fe611: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8fe614: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8fe617: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8fe61a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8fe61d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe61f: jge 0x8fe627 */
  if ((sf == of)) goto L_8fe627;
L_8fe621: /* 8fe621: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe627: /* 8fe627: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fe62a: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8fe630: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fe632: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fe635: jge 0x8fe63d */
  if ((sf == of)) goto L_8fe63d;
L_8fe637: /* 8fe637: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8fe63d: /* 8fe63d: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8fe642: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8fe644: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8fe646: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe649: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8fe64f: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8fe655: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe657: lea ecx, [eax + 0x9c] */
  ecx = (uint32_t)(eax + 0x9cu);
/* 8fe65d: fsub qword ptr [eax + 0xc4] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0xc4u)));
/* 8fe663: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8fe666: je 0x8fe730 */
  if (zf) goto L_8fe730;
L_8fe66c: /* 8fe66c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fe672u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fe672: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe675: mov ecx, dword ptr [edx + 0xd4] */
  ecx = R32((uint32_t)(edx + 0xd4u));
/* 8fe67b: sub ecx, dword ptr [edx + 0xd8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xd8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8fe681: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8fe684: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8fe687: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8fe68a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fe68d: fdiv qword ptr [ebp - 0x28] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffd8u)));
/* 8fe690: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8fe693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe694: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8fe697: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe698: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe69a: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 8fe69d: push 0xaf0e40 */
  { uint32_t v = 0xaf0e40u; esp -= 4; W32(esp, v); }
/* 8fe6a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe6a3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8fe6a9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8fe6a9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe6ac: mov ecx, eax */
  ecx = eax;
/* 8fe6ae: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8fe6b1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fe6b7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fe6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe6b8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fe6bb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8fe6c1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8fe6c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe6c2: mov ecx, esp */
  ecx = esp;
/* 8fe6c4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8fe6c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe6c9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8fe6cd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fe6d3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fe6d3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe6d6: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8fe6d9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fe6dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe6dd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8fe6e0: call 0x6ca91b */
  esp -= 4; W32(esp, 0x8fe6e5u); SPILL(); f_6ca91b(); if (g_unwind) return; RELOAD();
/* 8fe6e5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8fe6e8: jmp 0x8fe7a1 */
  goto L_8fe7a1;
L_8fe6ed: /* 8fe6ed: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8fe6f0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe6f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe6f4: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8fe6f7: lea edx, [ebp - 0x258] */
  edx = (uint32_t)(ebp + 0xfffffda8u);
/* 8fe6fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe6fe: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fe6ff: call 0x6c6adc */
  esp -= 4; W32(esp, 0x8fe704u); SPILL(); f_6c6adc(); if (g_unwind) return; RELOAD();
L_8fe704: /* 8fe704: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe707: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8fe70a: cmp dword ptr [edx + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fe70e: jne 0x8fe500 */
  if (!zf) goto L_8fe500;
L_8fe714: /* 8fe714: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8fe717: mov dword ptr [ecx + 0xd4], eax */
  W32((uint32_t)(ecx + 0xd4u), eax);
/* 8fe71d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fe720: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fe727: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fe728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fe729: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fe72a: mov esp, ebp */
  esp = ebp;
/* 8fe72c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fe72d: ret 4 */
  esp += 8; SPILL(); return;
L_8fe730: /* 8fe730: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fe736u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fe736: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8fe739: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8fe73c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe73d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe740: mov esi, dword ptr [ecx + 0xd8] */
  esi = R32((uint32_t)(ecx + 0xd8u));
/* 8fe746: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe747: mov edx, dword ptr [ecx + 0xd4] */
  edx = R32((uint32_t)(ecx + 0xd4u));
/* 8fe74d: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8fe74f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe751: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 8fe754: push 0xaf0ea8 */
  { uint32_t v = 0xaf0ea8u; esp -= 4; W32(esp, v); }
/* 8fe759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe75a: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8fe760u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8fe760: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe763: mov ecx, eax */
  ecx = eax;
/* 8fe765: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8fe769: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fe76fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fe76f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe770: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fe773: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8fe779u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8fe779: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe77a: mov ecx, esp */
  ecx = esp;
/* 8fe77c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8fe77f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe781: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8fe785: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fe78bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fe78b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe78e: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8fe791: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fe794: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe795: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8fe798: call 0x6ca91b */
  esp -= 4; W32(esp, 0x8fe79du); SPILL(); f_6ca91b(); if (g_unwind) return; RELOAD();
/* 8fe79d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_8fe7a1: /* 8fe7a1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fe7a4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fe7aau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fe7aa: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8fe7ad: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fe7b1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fe7b7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fe7b7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe7ba: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 8fe7c0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fe7c2: je 0x8fe581 */
  if (zf) goto L_8fe581;
L_8fe7c8: /* 8fe7c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe7ca: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8fe7cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe7ce: lea ecx, [eax + 0xe0] */
  ecx = (uint32_t)(eax + 0xe0u);
/* 8fe7d4: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x8fe7d9u); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 8fe7d9: mov esi, eax */
  esi = eax;
/* 8fe7db: push 0xaf0ef8 */
  { uint32_t v = 0xaf0ef8u; esp -= 4; W32(esp, v); }
/* 8fe7e0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fe7e3: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8fe7e7: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8fe7edu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8fe7ed: mov edi, eax */
  edi = eax;
/* 8fe7ef: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 8fe7f1: mov ecx, esi */
  ecx = esi;
/* 8fe7f3: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8fe7f6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fe7fcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fe7fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe7fd: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 8fe800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fe801: mov ecx, edi */
  ecx = edi;
/* 8fe803: call dword ptr [0xcfa3d0] */
  esp -= 4; W32(esp, 0x8fe809u); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 8fe809: mov esi, eax */
  esi = eax;
/* 8fe80b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8fe80e: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8fe812: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8fe817u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8fe817: mov ecx, esi */
  ecx = esi;
/* 8fe819: mov edi, eax */
  edi = eax;
/* 8fe81b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fe821u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fe821: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8fe827: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8fe829: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8fe82b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fe82c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe82d: mov ecx, edi */
  ecx = edi;
/* 8fe82f: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8fe835u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fe835: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8fe838: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8fe83b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fe841u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fe841: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8fe844: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8fe848: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fe84eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fe84e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8fe851: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fe855: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fe85bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fe85b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fe85e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fe85f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fe860: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fe867: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fe868: mov esp, ebp */
  esp = ebp;
/* 8fe86a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fe86b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fe86e(void) {
  LOAD_REGS();
L_8fe86e: /* 8fe86e: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8fe871: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fe876: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8fe879: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe87a: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8fe87d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fe882u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fe882(); return;
}

void f_8fe882(void) {
  LOAD_REGS();
L_8fe882: /* 8fe882: push 0xa20050 */
  { uint32_t v = 0xa20050u; esp -= 4; W32(esp, v); }
/* 8fe887: push 0xaf0f50 */
  { uint32_t v = 0xaf0f50u; esp -= 4; W32(esp, v); }
/* 8fe88c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fe892u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fe892: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe895: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe897: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe899: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fe89eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fe89e: guest_badaddr(0x8fe89e); return;
}

void f_8fe9a0(void) {
  LOAD_REGS();
L_8fe9a0: /* 8fe9a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fe9a1: mov ebp, esp */
  ebp = esp;
/* 8fe9a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fe9a5: push 0x9d9af0 */
  { uint32_t v = 0x9d9af0u; esp -= 4; W32(esp, v); }
/* 8fe9aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fe9b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe9b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fe9b8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fe9bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fe9bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fe9bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fe9be: mov edi, ecx */
  edi = ecx;
/* 8fe9c0: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 8fe9c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fe9c9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fe9d0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fe9d6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fe9d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe9d8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fe9da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe9dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fe9dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe9df: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 8fe9e4: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x8fe9eau); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 8fe9ea: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fe9ed: mov ecx, edi */
  ecx = edi;
/* 8fe9ef: mov ebx, eax */
  ebx = eax;
/* 8fe9f1: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8fe9f6u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8fe9f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe9f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe9fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe9fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fe9fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fea00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fea02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fea04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fea06: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8fea09: mov esi, eax */
  esi = eax;
/* 8fea0b: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8fea12: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8fea19: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8fea20: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8fea26u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8fea26: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8fea28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fea2b: mov ecx, esp */
  ecx = esp;
/* 8fea2d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8fea2f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8fea32: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8fea35: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8fea38: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8fea3b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8fea3e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8fea41: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fea44: mov ecx, esp */
  ecx = esp;
/* 8fea46: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8fea48: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8fea4b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8fea4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fea4f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8fea52: mov ecx, esp */
  ecx = esp;
/* 8fea54: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8fea57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fea59: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fea5fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fea5f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fea61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fea62: mov ecx, esi */
  ecx = esi;
/* 8fea64: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8fea6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fea6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fea6b: call 0x6c11f9 */
  esp -= 4; W32(esp, 0x8fea70u); SPILL(); f_6c11f9(); if (g_unwind) return; RELOAD();
/* 8fea70: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fea73: mov ebx, eax */
  ebx = eax;
/* 8fea75: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fea79: xor esi, esi */
  esi = 0;
/* 8fea7b: jmp 0x8fea80 */
  goto L_8fea80;
L_8fea80: /* 8fea80: mov ecx, edi */
  ecx = edi;
/* 8fea82: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8fea87u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8fea87: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fea8a: jge 0x8feb11 */
  if ((sf == of)) goto L_8feb11;
L_8fea90: /* 8fea90: mov ecx, edi */
  ecx = edi;
/* 8fea92: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8fea97u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8fea97: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8fea9a: cmp dword ptr [ecx + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fea9e: je 0x8feb24 */
  if (zf) goto L_8feb24;
L_8feaa4: /* 8feaa4: mov ecx, edi */
  ecx = edi;
/* 8feaa6: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8feaabu); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8feaab: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8feaae: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 8feab1: push 0xb62c58 */
  { uint32_t v = 0xb62c58u; esp -= 4; W32(esp, v); }
/* 8feab6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8feabcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8feabc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8feabe: je 0x8feb24 */
  if (zf) goto L_8feb24;
L_8feac0: /* 8feac0: mov ecx, edi */
  ecx = edi;
/* 8feac2: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8feac7u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8feac7: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8feaca: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8feacd: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fead3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fead5: lea edx, [ebx + 0x170] */
  edx = (uint32_t)(ebx + 0x170u);
/* 8feadb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8feadd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8feae0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8feae3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8feae6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8feae9: mov ecx, edi */
  ecx = edi;
/* 8feaeb: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8feaf0u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8feaf0: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8feaf3: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8feaf6: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8feafb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8feafd: add ebx, 0x17c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8feb03: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 8feb05: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8feb08: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 8feb0b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8feb0e: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_8feb11: /* 8feb11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8feb14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8feb15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8feb16: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8feb1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8feb1e: mov esp, ebp */
  esp = ebp;
/* 8feb20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8feb21: ret 4 */
  esp += 8; SPILL(); return;
L_8feb24: /* 8feb24: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8feb25: jmp 0x8fea80 */
  goto L_8fea80;
}

void f_8fea7d(void) {
  LOAD_REGS();
L_8fea7d: /* 8fea7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8fea80: /* 8fea80: mov ecx, edi */
  ecx = edi;
/* 8fea82: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8fea87u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8fea87: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fea8a: jge 0x8feb11 */
  if ((sf == of)) goto L_8feb11;
L_8fea90: /* 8fea90: mov ecx, edi */
  ecx = edi;
/* 8fea92: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8fea97u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8fea97: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8fea9a: cmp dword ptr [ecx + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fea9e: je 0x8feb24 */
  if (zf) goto L_8feb24;
L_8feaa4: /* 8feaa4: mov ecx, edi */
  ecx = edi;
/* 8feaa6: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8feaabu); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8feaab: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8feaae: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 8feab1: push 0xb62c58 */
  { uint32_t v = 0xb62c58u; esp -= 4; W32(esp, v); }
/* 8feab6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8feabcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8feabc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8feabe: je 0x8feb24 */
  if (zf) goto L_8feb24;
L_8feac0: /* 8feac0: mov ecx, edi */
  ecx = edi;
/* 8feac2: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8feac7u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8feac7: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8feaca: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8feacd: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8fead3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fead5: lea edx, [ebx + 0x170] */
  edx = (uint32_t)(ebx + 0x170u);
/* 8feadb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8feadd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8feae0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8feae3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8feae6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8feae9: mov ecx, edi */
  ecx = edi;
/* 8feaeb: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8feaf0u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8feaf0: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8feaf3: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8feaf6: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8feafb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8feafd: add ebx, 0x17c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8feb03: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 8feb05: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8feb08: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 8feb0b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8feb0e: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_8feb11: /* 8feb11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8feb14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8feb15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8feb16: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8feb1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8feb1e: mov esp, ebp */
  esp = ebp;
/* 8feb20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8feb21: ret 4 */
  esp += 8; SPILL(); return;
L_8feb24: /* 8feb24: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8feb25: jmp 0x8fea80 */
  goto L_8fea80;
}

void f_8feb2a(void) {
  LOAD_REGS();
L_8feb2a: /* 8feb2a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8feb2d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8feb32: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8feb35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8feb36: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8feb39: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8feb3eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8feb3e(); return;
}

void f_8feb3e(void) {
  LOAD_REGS();
L_8feb3e: /* 8feb3e: push 0xa200f4 */
  { uint32_t v = 0xa200f4u; esp -= 4; W32(esp, v); }
/* 8feb43: push 0xaf10a0 */
  { uint32_t v = 0xaf10a0u; esp -= 4; W32(esp, v); }
/* 8feb48: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8feb4eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8feb4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8feb51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8feb53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8feb55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8feb5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8feb5a(); return;
}

void f_8feb5a(void) {
  LOAD_REGS();
L_8feb5a: /* 8feb5a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8feb5d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8feb62: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8feb65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8feb66: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8feb69: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8feb6eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8feb6e(); return;
}

void f_8feb6e(void) {
  LOAD_REGS();
L_8feb6e: /* 8feb6e: push 0xa20098 */
  { uint32_t v = 0xa20098u; esp -= 4; W32(esp, v); }
/* 8feb73: push 0xaf10a8 */
  { uint32_t v = 0xaf10a8u; esp -= 4; W32(esp, v); }
/* 8feb78: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8feb7eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8feb7e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8feb81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8feb83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8feb85: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8feb8au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8feb8a: guest_badaddr(0x8feb8a); return;
}

void f_8fec10(void) {
  LOAD_REGS();
L_8fec10: /* 8fec10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fec12: push 0x9d9b26 */
  { uint32_t v = 0x9d9b26u; esp -= 4; W32(esp, v); }
/* 8fec17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fec1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fec1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fec25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fec26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fec27: mov esi, ecx */
  esi = ecx;
/* 8fec29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8fec2d: call 0x6c1780 */
  esp -= 4; W32(esp, 0x8fec32u); SPILL(); f_6c1780(); if (g_unwind) return; RELOAD();
/* 8fec32: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8fec38: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8fec40: mov dword ptr [esi], 0xa07058 */
  W32((uint32_t)(esi), 0xa07058u);
/* 8fec46: mov dword ptr [esi + 0x28], 0xa07050 */
  W32((uint32_t)(esi + 0x28u), 0xa07050u);
/* 8fec4d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8fec53u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8fec53: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 8fec59: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 8fec5e: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x8fec64u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 8fec64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fec66: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 8fec6c: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 8fec71: call 0x6c321a */
  esp -= 4; W32(esp, 0x8fec76u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 8fec76: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8fec7a: mov eax, esi */
  eax = esi;
/* 8fec7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fec7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fec84: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fec87: ret  */
  esp += 4; SPILL(); return;
}

void f_8fecb0(void) {
  LOAD_REGS();
L_8fecb0: /* 8fecb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fecb2: push 0x9d9b48 */
  { uint32_t v = 0x9d9b48u; esp -= 4; W32(esp, v); }
/* 8fecb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fecbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fecbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fecc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fecc6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8fecca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8feccb: mov esi, ecx */
  esi = ecx;
/* 8feccd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8fecd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fecd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fecd3: mov ecx, esi */
  ecx = esi;
/* 8fecd5: call 0x6cc19e */
  esp -= 4; W32(esp, 0x8fecdau); SPILL(); f_6cc19e(); if (g_unwind) return; RELOAD();
/* 8fecda: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8fecde: mov dword ptr [esi], 0xa071e0 */
  W32((uint32_t)(esi), 0xa071e0u);
/* 8fece4: mov dword ptr [esi + 0x28], 0xa071d0 */
  W32((uint32_t)(esi + 0x28u), 0xa071d0u);
/* 8feceb: mov dword ptr [esi + 0x2c], 0xa071cc */
  W32((uint32_t)(esi + 0x2cu), 0xa071ccu);
/* 8fecf2: mov dword ptr [esi + 0xbc], 0x200 */
  W32((uint32_t)(esi + 0xbcu), 0x200u);
/* 8fecfc: mov dword ptr [esi + 0xc4], 1 */
  W32((uint32_t)(esi + 0xc4u), 0x1u);
/* 8fed06: mov eax, esi */
  eax = esi;
/* 8fed08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fed09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fed10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fed13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8fed40(void) {
  LOAD_REGS();
L_8fed40: /* 8fed40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fed41: mov ebp, esp */
  ebp = esp;
/* 8fed43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fed45: push 0x9d9b69 */
  { uint32_t v = 0x9d9b69u; esp -= 4; W32(esp, v); }
/* 8fed4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fed50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fed51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fed58: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fed5b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8fed5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fed5f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8fed62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fed63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fed64: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8fed67: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fed6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fed6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fed6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fed6d: mov esi, ecx */
  esi = ecx;
/* 8fed6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fed76: call 0x6cb3c0 */
  esp -= 4; W32(esp, 0x8fed7bu); SPILL(); f_6cb3c0(); if (g_unwind) return; RELOAD();
/* 8fed7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fed7d: je 0x8fee5d */
  if (zf) goto L_8fee5d;
L_8fed83: /* 8fed83: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8fed86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fed87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fed88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fed89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fed8b: mov ecx, esi */
  ecx = esi;
/* 8fed8d: call 0x6c132f */
  esp -= 4; W32(esp, 0x8fed92u); SPILL(); f_6c132f(); if (g_unwind) return; RELOAD();
/* 8fed92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fed94: je 0x8fee5d */
  if (zf) goto L_8fee5d;
L_8fed9a: /* 8fed9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fed9c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8fed9f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8feda5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8feda5: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8fedabu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8fedab: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8fedb1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8fedb3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8fedb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fedb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fedba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fedbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fedbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fedbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fedc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fedc1: push 0xcefc60 */
  { uint32_t v = 0xcefc60u; esp -= 4; W32(esp, v); }
/* 8fedc6: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x8fedccu); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 8fedcc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fedcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fedd1: je 0x8fedde */
  if (zf) goto L_8fedde;
L_8fedd3: /* 8fedd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fedd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fedd5: mov ecx, eax */
  ecx = eax;
/* 8fedd7: call 0x6c1983 */
  esp -= 4; W32(esp, 0x8feddcu); SPILL(); f_6c1983(); if (g_unwind) return; RELOAD();
/* 8feddc: jmp 0x8fede0 */
  goto L_8fede0;
L_8fedde: /* 8fedde: xor eax, eax */
  eax = 0;
L_8fede0: /* 8fede0: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 8fede3: mov dword ptr [eax + 0x44], 0xf4240 */
  W32((uint32_t)(eax + 0x44u), 0xf4240u);
/* 8fedea: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8feded: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8fedf3: mov dword ptr [eax + 0x6c], 2 */
  W32((uint32_t)(eax + 0x6cu), 0x2u);
/* 8fedfa: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8fedfd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fee03u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fee03: mov ebx, dword ptr [0xcfa3b4] */
  ebx = R32((uint32_t)(0xcfa3b4u));
/* 8fee09: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8fee0b: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 8fee11: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8fee13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fee15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fee16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fee18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fee19: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8fee1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fee1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fee1e: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8fee24: jne 0x8fee72 */
  if (!zf) goto L_8fee72;
L_8fee26: /* 8fee26: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8fee29: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fee2fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fee2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fee30: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8fee33: push 0xaf0c78 */
  { uint32_t v = 0xaf0c78u; esp -= 4; W32(esp, v); }
/* 8fee38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fee39: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8fee3fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8fee3f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fee42: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8fee45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fee46: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fee4a: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8fee50u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8fee50: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8fee53: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fee57: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fee5du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8fee5d: /* 8fee5d: xor eax, eax */
  eax = 0;
/* 8fee5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fee62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fee69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fee6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fee6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fee6c: mov esp, ebp */
  esp = ebp;
/* 8fee6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fee6f: ret 0xc */
  esp += 16; SPILL(); return;
L_8fee72: /* 8fee72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fee73: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 8fee79: call 0x6ca50b */
  esp -= 4; W32(esp, 0x8fee7eu); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 8fee7e: push 0xaf0cc8 */
  { uint32_t v = 0xaf0cc8u; esp -= 4; W32(esp, v); }
/* 8fee83: mov ecx, edi */
  ecx = edi;
/* 8fee85: call 0x6c991c */
  esp -= 4; W32(esp, 0x8fee8au); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 8fee8a: push 0xaf0cdc */
  { uint32_t v = 0xaf0cdcu; esp -= 4; W32(esp, v); }
/* 8fee8f: mov ecx, edi */
  ecx = edi;
/* 8fee91: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 8fee97: call 0x6c991c */
  esp -= 4; W32(esp, 0x8fee9cu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 8fee9c: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 8feea2: call 0x6c44ad */
  esp -= 4; W32(esp, 0x8feea7u); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 8feea7: fstp qword ptr [esi + 0xcc] */
  WF64((uint32_t)(esi + 0xccu), ST0); FPOP();
/* 8feead: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8feeb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8feeb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8feeb2: mov eax, 1 */
  eax = 0x1u;
/* 8feeb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8feebe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8feebf: mov esp, ebp */
  esp = ebp;
/* 8feec1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8feec2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8feec5(void) {
  LOAD_REGS();
L_8feec5: /* 8feec5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8feec8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8feecd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8feed0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8feed1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8feed4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8feed9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8feed9(); return;
}

void f_8feed9(void) {
  LOAD_REGS();
L_8feed9: /* 8feed9: push 0xa2011c */
  { uint32_t v = 0xa2011cu; esp -= 4; W32(esp, v); }
/* 8feede: push 0xaf0ce8 */
  { uint32_t v = 0xaf0ce8u; esp -= 4; W32(esp, v); }
/* 8feee3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8feee9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8feee9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8feeec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8feeee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8feef0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8feef5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8feef5: guest_badaddr(0x8feef5); return;
}

void f_8fef70(void) {
  LOAD_REGS();
L_8fef70: /* 8fef70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fef71: mov ebp, esp */
  ebp = esp;
/* 8fef73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fef75: push 0x9d9ba4 */
  { uint32_t v = 0x9d9ba4u; esp -= 4; W32(esp, v); }
/* 8fef7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fef80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fef81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fef88: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fef8b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8fef8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fef8f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8fef92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fef93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fef94: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fef97: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fef9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fef9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fef9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fef9d: mov esi, ecx */
  esi = ecx;
/* 8fef9f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fefa6: call 0x6cac6d */
  esp -= 4; W32(esp, 0x8fefabu); SPILL(); f_6cac6d(); if (g_unwind) return; RELOAD();
/* 8fefab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fefad: je 0x8ff0b4 */
  if (zf) goto L_8ff0b4;
L_8fefb3: /* 8fefb3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8fefb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fefb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fefb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fefb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fefbb: mov ecx, esi */
  ecx = esi;
/* 8fefbd: call 0x6c132f */
  esp -= 4; W32(esp, 0x8fefc2u); SPILL(); f_6c132f(); if (g_unwind) return; RELOAD();
/* 8fefc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fefc4: je 0x8ff0b4 */
  if (zf) goto L_8ff0b4;
L_8fefca: /* 8fefca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fefcc: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8fefcf: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fefd5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fefd5: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8fefdbu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8fefdb: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8fefe1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8fefe3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8fefe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fefe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fefea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fefeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fefed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fefef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8feff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8feff1: push 0xcefc60 */
  { uint32_t v = 0xcefc60u; esp -= 4; W32(esp, v); }
/* 8feff6: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x8feffcu); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 8feffc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fefff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff001: je 0x8ff011 */
  if (zf) goto L_8ff011;
L_8ff003: /* 8ff003: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ff004: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff005: mov ecx, eax */
  ecx = eax;
/* 8ff007: call 0x6c1983 */
  esp -= 4; W32(esp, 0x8ff00cu); SPILL(); f_6c1983(); if (g_unwind) return; RELOAD();
/* 8ff00c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8ff00f: jmp 0x8ff01b */
  goto L_8ff01b;
L_8ff011: /* 8ff011: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8ff018: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_8ff01b: /* 8ff01b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ff01d: mov ecx, eax */
  ecx = eax;
/* 8ff01f: mov dword ptr [eax + 0x44], 0xf4240 */
  W32((uint32_t)(eax + 0x44u), 0xf4240u);
/* 8ff026: mov dword ptr [eax + 0x6c], 3 */
  W32((uint32_t)(eax + 0x6cu), 0x3u);
/* 8ff02d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x8ff030u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff030: lea ebx, [esi + 0x9c] */
  ebx = (uint32_t)(esi + 0x9cu);
/* 8ff036: mov ecx, ebx */
  ecx = ebx;
/* 8ff038: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ff03eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ff03e: mov edi, dword ptr [0xcfa3b4] */
  edi = R32((uint32_t)(0xcfa3b4u));
/* 8ff044: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 8ff046: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 8ff04c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8ff04e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ff050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ff051: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff054: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8ff057u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff057: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ff059: lea edi, [esi + 0x2c] */
  edi = (uint32_t)(esi + 0x2cu);
/* 8ff05c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ff05e: mov ecx, edi */
  ecx = edi;
/* 8ff060: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8ff066: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ff06cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ff06c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8ff06e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8ff071: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8ff074: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8ff07a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff07c: jne 0x8ff0c9 */
  if (!zf) goto L_8ff0c9;
L_8ff07e: /* 8ff07e: mov ecx, ebx */
  ecx = ebx;
/* 8ff080: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ff086u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ff086: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff087: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8ff08a: push 0xaf0cf0 */
  { uint32_t v = 0xaf0cf0u; esp -= 4; W32(esp, v); }
/* 8ff08f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff090: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ff096u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ff096: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff099: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ff09c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff09d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ff0a1: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8ff0a7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8ff0a7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ff0aa: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ff0ae: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ff0b4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8ff0b4: /* 8ff0b4: xor eax, eax */
  eax = 0;
/* 8ff0b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff0b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff0c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff0c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff0c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff0c3: mov esp, ebp */
  esp = ebp;
/* 8ff0c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff0c6: ret 0xc */
  esp += 16; SPILL(); return;
L_8ff0c9: /* 8ff0c9: mov ecx, esi */
  ecx = esi;
/* 8ff0cb: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff0d0u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff0d0: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8ff0d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff0d4: call 0x6c9610 */
  esp -= 4; W32(esp, 0x8ff0d9u); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 8ff0d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff0dc: mov ecx, esi */
  ecx = esi;
/* 8ff0de: mov edi, eax */
  edi = eax;
/* 8ff0e0: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff0e5u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff0e5: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8ff0e8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8ff0ea: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 8ff0f0: xor ecx, ecx */
  ecx = 0;
/* 8ff0f2: cmp dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ff0f5: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8ff0f8: mov eax, ecx */
  eax = ecx;
/* 8ff0fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff0fc: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8ff0ff: mov ecx, esi */
  ecx = esi;
/* 8ff101: je 0x8ff120 */
  if (zf) goto L_8ff120;
L_8ff103: /* 8ff103: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff108u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff108: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 8ff10b: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8ff10e: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8ff114: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff115: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ff118: call dword ptr [0xcface4] */
  esp -= 4; W32(esp, 0x8ff11eu); SPILL(); f_4e43cc(); if (g_unwind) return; /* Core!?CopyLinkers@UPackageMap@@QAEXPAV1@@Z */ RELOAD();
/* 8ff11e: jmp 0x8ff131 */
  goto L_8ff131;
L_8ff120: /* 8ff120: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff125u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff125: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8ff127: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ff129: mov ecx, edi */
  ecx = edi;
/* 8ff12b: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x8ff131u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ff131: /* 8ff131: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8ff134: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ff136: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ff138: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ff13a: mov ecx, ebx */
  ecx = ebx;
/* 8ff13c: call 0x6c74cd */
  esp -= 4; W32(esp, 0x8ff141u); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 8ff141: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff144: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8ff14au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8ff14a: mov ecx, esi */
  ecx = esi;
/* 8ff14c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ff150: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff155u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff155: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8ff158: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ff15a: cmp byte ptr [eax + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ff161: jne 0x8ff16a */
  if (!zf) goto L_8ff16a;
L_8ff163: /* 8ff163: push 0xaf0d40 */
  { uint32_t v = 0xaf0d40u; esp -= 4; W32(esp, v); }
/* 8ff168: jmp 0x8ff18c */
  goto L_8ff18c;
L_8ff16a: /* 8ff16a: mov ecx, esi */
  ecx = esi;
/* 8ff16c: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff171u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff171: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8ff174: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ff176: mov cl, byte ptr [eax + 0x4c8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 8ff17c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff17e: jne 0x8ff187 */
  if (!zf) goto L_8ff187;
L_8ff180: /* 8ff180: push 0xaf0d5c */
  { uint32_t v = 0xaf0d5cu; esp -= 4; W32(esp, v); }
/* 8ff185: jmp 0x8ff18c */
  goto L_8ff18c;
L_8ff187: /* 8ff187: push 0xaf0d74 */
  { uint32_t v = 0xaf0d74u; esp -= 4; W32(esp, v); }
L_8ff18c: /* 8ff18c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff18f: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8ff195u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8ff195: mov ecx, esi */
  ecx = esi;
/* 8ff197: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff19cu); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff19c: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8ff19f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8ff1a1: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ff1a8: jne 0x8ff1bd */
  if (!zf) goto L_8ff1bd;
L_8ff1aa: /* 8ff1aa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ff1ac: mov ecx, edi */
  ecx = edi;
/* 8ff1ae: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x8ff1b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff1b4: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8ff1b7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ff1ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff1bb: jmp 0x8ff1c4 */
  goto L_8ff1c4;
L_8ff1bd: /* 8ff1bd: fild dword ptr [esi + 0x6c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ff1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ff1c1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_8ff1c4: /* 8ff1c4: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8ff1cau); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8ff1ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff1ce: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ff1d1: push 0xaf0d8c */
  { uint32_t v = 0xaf0d8cu; esp -= 4; W32(esp, v); }
/* 8ff1d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ff1d7: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ff1ddu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ff1dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ff1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff1e1: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8ff1e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff1e5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff1e8: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8ff1ec: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8ff1f2u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ff1f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff1f3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff1f6: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8ff1fa: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8ff200u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8ff200: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ff203: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8ff207: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ff20du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ff20d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ff210: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ff214: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ff21au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ff21a: mov ecx, esi */
  ecx = esi;
/* 8ff21c: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff221u); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff221: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff224: mov edi, eax */
  edi = eax;
/* 8ff226: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ff22cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ff22c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8ff22e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ff22f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ff230: mov ecx, edi */
  ecx = edi;
/* 8ff232: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0x8ff238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ff238: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ff23b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ff23d: mov ecx, esi */
  ecx = esi;
/* 8ff23f: jne 0x8ff249 */
  if (!zf) goto L_8ff249;
L_8ff241: /* 8ff241: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ff242: call 0x6c6c76 */
  esp -= 4; W32(esp, 0x8ff247u); SPILL(); f_6c6c76(); if (g_unwind) return; RELOAD();
/* 8ff247: jmp 0x8ff25c */
  goto L_8ff25c;
L_8ff249: /* 8ff249: call 0x6c83d7 */
  esp -= 4; W32(esp, 0x8ff24eu); SPILL(); f_6c83d7(); if (g_unwind) return; RELOAD();
/* 8ff24e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 8ff251: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8ff254: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 8ff257: call 0x6ca498 */
  esp -= 4; W32(esp, 0x8ff25cu); SPILL(); f_6ca498(); if (g_unwind) return; RELOAD();
L_8ff25c: /* 8ff25c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ff25f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ff263: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ff269u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ff269: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ff26c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ff26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ff26e: mov eax, 1 */
  eax = 0x1u;
/* 8ff273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ff27a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ff27b: mov esp, ebp */
  esp = ebp;
/* 8ff27d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ff27e: ret 0xc */
  esp += 16; SPILL(); return;
}
