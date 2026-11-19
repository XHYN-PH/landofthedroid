#include "recomp.h"
#include "rec_mod.h"

void f_805880(void) {
  LOAD_REGS();
L_805880: /* 805880: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 805881: mov ebp, esp */
  ebp = esp;
/* 805883: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 805885: push 0x9d2273 */
  { uint32_t v = 0x9d2273u; esp -= 4; W32(esp, v); }
/* 80588a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 805890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805891: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 805898: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80589b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80589c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80589d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8058a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8058a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8058a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8058a5: mov ebx, ecx */
  ebx = ecx;
/* 8058a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8058ae: call 0x6c974b */
  esp -= 4; W32(esp, 0x8058b3u); SPILL(); f_6c974b(); if (g_unwind) return; RELOAD();
/* 8058b3: lea eax, [ebx + 0x78] */
  eax = (uint32_t)(ebx + 0x78u);
/* 8058b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8058b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8058b8: call 0x6c23e2 */
  esp -= 4; W32(esp, 0x8058bdu); SPILL(); f_6c23e2(); if (g_unwind) return; RELOAD();
/* 8058bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8058c0: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 8058c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8058c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8058c8: call 0x6c23e2 */
  esp -= 4; W32(esp, 0x8058cdu); SPILL(); f_6c23e2(); if (g_unwind) return; RELOAD();
/* 8058cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8058d0: lea edx, [ebx + 0x58] */
  edx = (uint32_t)(ebx + 0x58u);
/* 8058d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8058d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8058d5: call 0x6c39a4 */
  esp -= 4; W32(esp, 0x8058dau); SPILL(); f_6c39a4(); if (g_unwind) return; RELOAD();
/* 8058da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8058dd: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 8058e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8058e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8058e5: call 0x6c1528 */
  esp -= 4; W32(esp, 0x8058eau); SPILL(); f_6c1528(); if (g_unwind) return; RELOAD();
/* 8058ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8058ed: lea edx, [ebx + 0x68] */
  edx = (uint32_t)(ebx + 0x68u);
/* 8058f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8058f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8058f2: call 0x6ca3c1 */
  esp -= 4; W32(esp, 0x8058f7u); SPILL(); f_6ca3c1(); if (g_unwind) return; RELOAD();
/* 8058f7: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 8058fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805900: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 805906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805908: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80590au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80590a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80590d: lea ecx, [ebx + 0x118] */
  ecx = (uint32_t)(ebx + 0x118u);
/* 805913: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805915: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x805917u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 805917: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80591a: xor edi, edi */
  edi = 0;
/* 80591c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_805920: /* 805920: cmp edi, dword ptr [ebx + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805926: jge 0x80593f */
  if ((sf == of)) goto L_80593f;
L_805928: /* 805928: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 80592b: lea eax, [ebx + edx*8 + 0x11c] */
  eax = (uint32_t)(ebx + edx*8 + 0x11cu);
/* 805932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805934: call 0x6ca371 */
  esp -= 4; W32(esp, 0x805939u); SPILL(); f_6ca371(); if (g_unwind) return; RELOAD();
/* 805939: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80593c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80593d: jmp 0x805920 */
  goto L_805920;
L_80593f: /* 80593f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 805941: lea edi, [ebx + 0x54] */
  edi = (uint32_t)(ebx + 0x54u);
/* 805944: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805945: mov ecx, esi */
  ecx = esi;
/* 805947: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x80594au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80594a: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80594d: je 0x805965 */
  if (zf) goto L_805965;
L_80594f: /* 80594f: mov ecx, esi */
  ecx = esi;
/* 805951: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x805957u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 805957: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 805959: jne 0x805965 */
  if (!zf) goto L_805965;
L_80595b: /* 80595b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 80595d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 80595f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805960: mov ecx, esi */
  ecx = esi;
/* 805962: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x805965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_805965: /* 805965: mov ecx, esi */
  ecx = esi;
/* 805967: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x80596du); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 80596d: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805970: jge 0x8059c9 */
  if ((sf == of)) goto L_8059c9;
L_805972: /* 805972: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 805975: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80597bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80597b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80597e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 805982: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805988u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805988: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 80598b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80598c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80598d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 805991: call 0x6cbc71 */
  esp -= 4; W32(esp, 0x805996u); SPILL(); f_6cbc71(); if (g_unwind) return; RELOAD();
/* 805996: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805999: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80599c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80599d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80599e: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x8059a3u); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 8059a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8059a6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8059a9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8059ad: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8059b2u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8059b2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8059b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8059b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8059b8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8059bb: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8059bf: call 0x6cbc30 */
  esp -= 4; W32(esp, 0x8059c4u); SPILL(); f_6cbc30(); if (g_unwind) return; RELOAD();
/* 8059c4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8059c7: jmp 0x805a3e */
  goto L_805a3e;
L_8059c9: /* 8059c9: mov ecx, esi */
  ecx = esi;
/* 8059cb: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8059d1u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8059d1: cmp eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8059d4: jge 0x805a48 */
  if ((sf == of)) goto L_805a48;
L_8059d6: /* 8059d6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8059d9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8059dfu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8059df: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8059e2: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8059e6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8059ecu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8059ec: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8059ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8059f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8059f1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8059f5: call 0x6cbc71 */
  esp -= 4; W32(esp, 0x8059fau); SPILL(); f_6cbc71(); if (g_unwind) return; RELOAD();
/* 8059fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8059fd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 805a00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805a01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805a02: call 0x6c1b2c */
  esp -= 4; W32(esp, 0x805a07u); SPILL(); f_6c1b2c(); if (g_unwind) return; RELOAD();
/* 805a07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805a0a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 805a0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805a10: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 805a13: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 805a17: call 0x6c5560 */
  esp -= 4; W32(esp, 0x805a1cu); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 805a1c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 805a1f: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 805a23: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x805a29u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 805a29: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 805a2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805a2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805a2f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 805a32: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 805a36: call 0x6cbc30 */
  esp -= 4; W32(esp, 0x805a3bu); SPILL(); f_6cbc30(); if (g_unwind) return; RELOAD();
/* 805a3b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
L_805a3e: /* 805a3e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 805a42: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x805a48u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_805a48: /* 805a48: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 805a4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805a4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805a50: call 0x6c526d */
  esp -= 4; W32(esp, 0x805a55u); SPILL(); f_6c526d(); if (g_unwind) return; RELOAD();
/* 805a55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805a58: lea edx, [ebx + 0xb4] */
  edx = (uint32_t)(ebx + 0xb4u);
/* 805a5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805a5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805a60: call 0x6c90bb */
  esp -= 4; W32(esp, 0x805a65u); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 805a65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805a68: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 805a6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805a6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805a70: call 0x6c62e4 */
  esp -= 4; W32(esp, 0x805a75u); SPILL(); f_6c62e4(); if (g_unwind) return; RELOAD();
/* 805a75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805a78: lea edx, [ebx + 0xcc] */
  edx = (uint32_t)(ebx + 0xccu);
/* 805a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805a7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805a80: call 0x6cb6d1 */
  esp -= 4; W32(esp, 0x805a85u); SPILL(); f_6cb6d1(); if (g_unwind) return; RELOAD();
/* 805a85: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 805a8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805a8e: lea eax, [ebx + 0x108] */
  eax = (uint32_t)(ebx + 0x108u);
/* 805a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805a95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805a96: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x805a98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 805a98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805a9b: lea ecx, [ebx + 0x10c] */
  ecx = (uint32_t)(ebx + 0x10cu);
/* 805aa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805aa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805aa3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x805aa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 805aa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805aa8: mov ecx, esi */
  ecx = esi;
/* 805aaa: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805ab0u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805ab0: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805ab3: jl 0x805b3c */
  if ((sf != of)) goto L_805b3c;
L_805ab9: /* 805ab9: mov ecx, esi */
  ecx = esi;
/* 805abb: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805ac1u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805ac1: cmp eax, 0x5d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805ac4: jge 0x805af7 */
  if ((sf == of)) goto L_805af7;
L_805ac6: /* 805ac6: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 805ac9: call 0x6cd05d */
  esp -= 4; W32(esp, 0x805aceu); SPILL(); f_6cd05d(); if (g_unwind) return; RELOAD();
/* 805ace: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 805ad1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805ad2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805ad3: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 805ad7: call 0x6c6d98 */
  esp -= 4; W32(esp, 0x805adcu); SPILL(); f_6c6d98(); if (g_unwind) return; RELOAD();
/* 805adc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805adf: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 805ae2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805ae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805ae4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x805ae6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 805ae6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805ae9: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 805aec: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 805af0: call 0x6c770c */
  esp -= 4; W32(esp, 0x805af5u); SPILL(); f_6c770c(); if (g_unwind) return; RELOAD();
/* 805af5: jmp 0x805b3c */
  goto L_805b3c;
L_805af7: /* 805af7: mov ecx, esi */
  ecx = esi;
/* 805af9: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805affu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805aff: cmp eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805b02: jge 0x805b2c */
  if ((sf == of)) goto L_805b2c;
L_805b04: /* 805b04: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 805b07: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805b0du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805b0d: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 805b10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805b11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805b12: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 805b16: call 0x6c9561 */
  esp -= 4; W32(esp, 0x805b1bu); SPILL(); f_6c9561(); if (g_unwind) return; RELOAD();
/* 805b1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805b1e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 805b21: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 805b25: call 0x6c26fd */
  esp -= 4; W32(esp, 0x805b2au); SPILL(); f_6c26fd(); if (g_unwind) return; RELOAD();
/* 805b2a: jmp 0x805b3c */
  goto L_805b3c;
L_805b2c: /* 805b2c: lea eax, [ebx + 0xd8] */
  eax = (uint32_t)(ebx + 0xd8u);
/* 805b32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805b33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805b34: call 0x6c5a92 */
  esp -= 4; W32(esp, 0x805b39u); SPILL(); f_6c5a92(); if (g_unwind) return; RELOAD();
/* 805b39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_805b3c: /* 805b3c: mov ecx, esi */
  ecx = esi;
/* 805b3e: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805b44u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805b44: cmp eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805b47: jl 0x805b7c */
  if ((sf != of)) goto L_805b7c;
L_805b49: /* 805b49: mov ecx, esi */
  ecx = esi;
/* 805b4b: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805b51u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805b51: cmp eax, 0x6b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805b54: jge 0x805b7c */
  if ((sf == of)) goto L_805b7c;
L_805b56: /* 805b56: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 805b59: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805b5fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805b5f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 805b62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805b63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805b64: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 805b68: call 0x6c8760 */
  esp -= 4; W32(esp, 0x805b6du); SPILL(); f_6c8760(); if (g_unwind) return; RELOAD();
/* 805b6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805b70: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 805b73: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 805b77: call 0x6c9241 */
  esp -= 4; W32(esp, 0x805b7cu); SPILL(); f_6c9241(); if (g_unwind) return; RELOAD();
L_805b7c: /* 805b7c: mov ecx, esi */
  ecx = esi;
/* 805b7e: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805b84u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805b84: cmp eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805b87: jl 0x805bc1 */
  if ((sf != of)) goto L_805bc1;
L_805b89: /* 805b89: lea edi, [ebx + 0xf0] */
  edi = (uint32_t)(ebx + 0xf0u);
/* 805b8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805b91: call 0x6c6460 */
  esp -= 4; W32(esp, 0x805b96u); SPILL(); f_6c6460(); if (g_unwind) return; RELOAD();
/* 805b96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805b99: mov ecx, esi */
  ecx = esi;
/* 805b9b: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805ba1u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805ba1: cmp eax, 0x6b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805ba4: jge 0x805bbb */
  if ((sf == of)) goto L_805bbb;
L_805ba6: /* 805ba6: mov ecx, esi */
  ecx = esi;
/* 805ba8: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x805baeu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 805bae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 805bb0: je 0x805bbb */
  if (zf) goto L_805bbb;
L_805bb2: /* 805bb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805bb4: mov ecx, edi */
  ecx = edi;
/* 805bb6: call 0x6ca77c */
  esp -= 4; W32(esp, 0x805bbbu); SPILL(); f_6ca77c(); if (g_unwind) return; RELOAD();
L_805bbb: /* 805bbb: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
L_805bc1: /* 805bc1: mov ecx, esi */
  ecx = esi;
/* 805bc3: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805bc9u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805bc9: cmp eax, 0x6b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805bcc: jl 0x805bec */
  if ((sf != of)) goto L_805bec;
L_805bce: /* 805bce: mov ecx, esi */
  ecx = esi;
/* 805bd0: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805bd6u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805bd6: cmp eax, 0x6e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805bd9: jge 0x805bec */
  if ((sf == of)) goto L_805bec;
L_805bdb: /* 805bdb: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 805bde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805bdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805be0: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 805be7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x805be9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 805be9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_805bec: /* 805bec: mov ecx, esi */
  ecx = esi;
/* 805bee: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x805bf4u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 805bf4: cmp eax, 0x6e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805bf7: jl 0x805c09 */
  if ((sf != of)) goto L_805c09;
L_805bf9: /* 805bf9: add ebx, 0xe4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 805bff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 805c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805c01: call 0x6c904d */
  esp -= 4; W32(esp, 0x805c06u); SPILL(); f_6c904d(); if (g_unwind) return; RELOAD();
/* 805c06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_805c09: /* 805c09: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 805c0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 805c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 805c0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 805c15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 805c16: mov esp, ebp */
  esp = ebp;
/* 805c18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 805c19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_805c1c(void) {
  LOAD_REGS();
L_805c1c: /* 805c1c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 805c1f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 805c24: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 805c27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805c28: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 805c2b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x805c30u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_805c30(); return;
}

void f_805c30(void) {
  LOAD_REGS();
L_805c30: /* 805c30: push 0xa12c48 */
  { uint32_t v = 0xa12c48u; esp -= 4; W32(esp, v); }
/* 805c35: push 0xae0ce8 */
  { uint32_t v = 0xae0ce8u; esp -= 4; W32(esp, v); }
/* 805c3a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x805c40u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 805c40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805c43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805c45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805c47: call 0x99caf8 */
  esp -= 4; W32(esp, 0x805c4cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_805c4c: guest_badaddr(0x805c4c); return;
}

void f_805d50(void) {
  LOAD_REGS();
L_805d50: /* 805d50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 805d51: mov ebp, esp */
  ebp = esp;
/* 805d53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 805d55: push 0x9d2355 */
  { uint32_t v = 0x9d2355u; esp -= 4; W32(esp, v); }
/* 805d5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 805d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805d61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 805d68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 805d6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 805d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805d6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805d6e: mov esi, ecx */
  esi = ecx;
/* 805d70: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 805d73: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 805d76: call 0x6cc93c */
  esp -= 4; W32(esp, 0x805d7bu); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 805d7b: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 805d7d: lea edi, [esi + 0x58] */
  edi = (uint32_t)(esi + 0x58u);
/* 805d80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805d82: mov ecx, edi */
  ecx = edi;
/* 805d84: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 805d8b: mov dword ptr [esi], 0xa064c0 */
  W32((uint32_t)(esi), 0xa064c0u);
/* 805d91: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x805d97u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 805d97: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 805d9a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 805d9c: lea edi, [esi + 0x68] */
  edi = (uint32_t)(esi + 0x68u);
/* 805d9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805da1: mov ecx, edi */
  ecx = edi;
/* 805da3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 805da7: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x805dadu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 805dad: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 805db0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805db2: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 805db5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805db7: mov ecx, edi */
  ecx = edi;
/* 805db9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 805dbd: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x805dc3u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 805dc3: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 805dc6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805dc8: lea edi, [esi + 0x88] */
  edi = (uint32_t)(esi + 0x88u);
/* 805dce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805dd0: mov ecx, edi */
  ecx = edi;
/* 805dd2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 805dd6: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x805ddcu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 805ddc: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 805ddf: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 805de1: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 805de7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805de9: mov ecx, edi */
  ecx = edi;
/* 805deb: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 805def: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x805df5u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 805df5: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 805df8: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 805dfe: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 805e02: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e08u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e08: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 805e0e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 805e12: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e18u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e18: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 805e1e: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 805e22: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e28u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e28: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 805e2e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 805e32: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e38u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e38: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* 805e3e: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 805e42: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e48u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e48: lea ecx, [esi + 0xe4] */
  ecx = (uint32_t)(esi + 0xe4u);
/* 805e4e: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 805e52: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e58u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e58: lea ecx, [esi + 0xf0] */
  ecx = (uint32_t)(esi + 0xf0u);
/* 805e5e: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 805e62: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e68u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e68: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 805e6e: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 805e72: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x805e78u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 805e78: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 805e7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 805e7d: mov ecx, esi */
  ecx = esi;
/* 805e7f: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 805e85: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 805e89: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x805e8fu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 805e8f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 805e91: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 805e93: mov ecx, esi */
  ecx = esi;
/* 805e95: call 0x6c380f */
  esp -= 4; W32(esp, 0x805e9au); SPILL(); f_6c380f(); if (g_unwind) return; RELOAD();
/* 805e9a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 805e9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 805e9f: je 0x805eaf */
  if (zf) goto L_805eaf;
L_805ea1: /* 805ea1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 805ea3: mov dword ptr [ecx + 0x280], esi */
  W32((uint32_t)(ecx + 0x280u), esi);
/* 805ea9: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x805eafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_805eaf: /* 805eaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 805eb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 805eb3: mov eax, esi */
  eax = esi;
/* 805eb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 805eb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 805ebd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 805ebe: mov esp, ebp */
  esp = ebp;
/* 805ec0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 805ec1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_805ec4(void) {
  LOAD_REGS();
L_805ec4: /* 805ec4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 805ec7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 805ecc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 805ecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805ed0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 805ed3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x805ed8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_805ed8(); return;
}

void f_805ed8(void) {
  LOAD_REGS();
L_805ed8: /* 805ed8: push 0xa12c74 */
  { uint32_t v = 0xa12c74u; esp -= 4; W32(esp, v); }
/* 805edd: push 0xae0d40 */
  { uint32_t v = 0xae0d40u; esp -= 4; W32(esp, v); }
/* 805ee2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x805ee8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 805ee8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805eeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805eed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805eef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x805ef4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_805ef4: guest_badaddr(0x805ef4); return;
}

void f_805f70(void) {
  LOAD_REGS();
L_805f70: /* 805f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805f71: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 805f75: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x805f7bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 805f7b: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 805f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805f80: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 805f83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805f84: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 805f88: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x805f8eu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 805f8e: mov eax, esi */
  eax = esi;
/* 805f90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 805f91: ret  */
  esp += 4; SPILL(); return;
}

void f_805fb0(void) {
  LOAD_REGS();
L_805fb0: /* 805fb0: mov dword ptr [ecx], 0xa12c98 */
  W32((uint32_t)(ecx), 0xa12c98u);
/* 805fb6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 805fb9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 805fbb: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_805fd0(void) {
  LOAD_REGS();
L_805fd0: /* 805fd0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 805fd3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 805fd5: jmp dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); SPILL(); call_ind(t); return; }
}

void f_805ff0(void) {
  LOAD_REGS();
L_805ff0: /* 805ff0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 805ff3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 805ff5: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_806010(void) {
  LOAD_REGS();
L_806010: /* 806010: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806013: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806015: jmp dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); SPILL(); call_ind(t); return; }
}

void f_806030(void) {
  LOAD_REGS();
L_806030: /* 806030: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806033: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806035: jmp dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); SPILL(); call_ind(t); return; }
}

void f_806050(void) {
  LOAD_REGS();
L_806050: /* 806050: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806053: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806055: jmp dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); SPILL(); call_ind(t); return; }
}

void f_806070(void) {
  LOAD_REGS();
L_806070: /* 806070: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806073: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806075: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_806090(void) {
  LOAD_REGS();
L_806090: /* 806090: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806093: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806095: jmp dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); SPILL(); call_ind(t); return; }
}

void f_8060b0(void) {
  LOAD_REGS();
L_8060b0: /* 8060b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8060d0(void) {
  LOAD_REGS();
L_8060d0: /* 8060d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8060f0(void) {
  LOAD_REGS();
L_8060f0: /* 8060f0: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_806110(void) {
  LOAD_REGS();
L_806110: /* 806110: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_806130(void) {
  LOAD_REGS();
L_806130: /* 806130: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806150(void) {
  LOAD_REGS();
L_806150: /* 806150: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_806170(void) {
  LOAD_REGS();
L_806170: /* 806170: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806190(void) {
  LOAD_REGS();
L_806190: /* 806190: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806193: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806195: jmp dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); SPILL(); call_ind(t); return; }
}

void f_8061b0(void) {
  LOAD_REGS();
L_8061b0: /* 8061b0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8061b3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8061b5: jmp dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); SPILL(); call_ind(t); return; }
}

void f_8061d0(void) {
  LOAD_REGS();
L_8061d0: /* 8061d0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8061d3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8061d5: jmp dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); SPILL(); call_ind(t); return; }
}

void f_8061f0(void) {
  LOAD_REGS();
L_8061f0: /* 8061f0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8061f3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8061f5: jmp dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); SPILL(); call_ind(t); return; }
}

void f_806210(void) {
  LOAD_REGS();
L_806210: /* 806210: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806213: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806215: jmp dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); SPILL(); call_ind(t); return; }
}

void f_806230(void) {
  LOAD_REGS();
L_806230: /* 806230: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806233: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806235: jmp dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); SPILL(); call_ind(t); return; }
}

void f_806250(void) {
  LOAD_REGS();
L_806250: /* 806250: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806253: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806255: jmp dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); SPILL(); call_ind(t); return; }
}

void f_806270(void) {
  LOAD_REGS();
L_806270: /* 806270: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806273: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806275: jmp dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); SPILL(); call_ind(t); return; }
}

void f_806290(void) {
  LOAD_REGS();
L_806290: /* 806290: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 806293: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806295: jmp dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); SPILL(); call_ind(t); return; }
}

void f_8062b0(void) {
  LOAD_REGS();
L_8062b0: /* 8062b0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8062b3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8062b5: jmp dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); SPILL(); call_ind(t); return; }
}

void f_8062d0(void) {
  LOAD_REGS();
L_8062d0: /* 8062d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8062d2: push 0x9d2398 */
  { uint32_t v = 0x9d2398u; esp -= 4; W32(esp, v); }
/* 8062d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8062dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8062de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8062e5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8062e8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8062ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8062ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8062ee: mov esi, ecx */
  esi = ecx;
/* 8062f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8062f1: lea ecx, [eax + 0xd0] */
  ecx = (uint32_t)(eax + 0xd0u);
/* 8062f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8062f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8062f9: mov ecx, esi */
  ecx = esi;
/* 8062fb: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8062ff: call 0x6c33d7 */
  esp -= 4; W32(esp, 0x806304u); SPILL(); f_6c33d7(); if (g_unwind) return; RELOAD();
/* 806304: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 806308: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 80630c: mov dword ptr [esi + 0x1d4], edx */
  W32((uint32_t)(esi + 0x1d4u), edx);
/* 806312: mov dword ptr [esi], 0xa12d28 */
  W32((uint32_t)(esi), 0xa12d28u);
/* 806318: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80631b: lea edi, [ebx + 0x170] */
  edi = (uint32_t)(ebx + 0x170u);
/* 806321: mov ecx, esp */
  ecx = esp;
/* 806323: mov eax, edi */
  eax = edi;
/* 806325: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 806327: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 806329: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80632c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80632f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 806332: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 806335: mov ecx, dword ptr [ebx + 0xb0] */
  ecx = R32((uint32_t)(ebx + 0xb0u));
/* 80633b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80633c: mov ecx, dword ptr [esi + 0x1c0] */
  ecx = R32((uint32_t)(esi + 0x1c0u));
/* 806342: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 806346: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 806347: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 80634f: call 0x6c9192 */
  esp -= 4; W32(esp, 0x806354u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 806354: mov dword ptr [esi + 0x1c4], ebx */
  W32((uint32_t)(esi + 0x1c4u), ebx);
/* 80635a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 80635c: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 806362: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 806364: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 806367: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80636a: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 80636d: movzx edx, byte ptr [esp + 0x18] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x18u)));
/* 806372: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 806375: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 806379: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80637a: mov dword ptr [esi + 0x1c8], edx */
  W32((uint32_t)(esi + 0x1c8u), edx);
/* 806380: mov eax, esi */
  eax = esi;
/* 806382: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806383: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80638a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80638b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80638e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8063e0(void) {
  LOAD_REGS();
L_8063e0: /* 8063e0: mov dword ptr [ecx], 0xa12d28 */
  W32((uint32_t)(ecx), 0xa12d28u);
/* 8063e6: jmp 0x6c6474 */
  SPILL(); f_6c6474(); return;
}

void f_806400(void) {
  LOAD_REGS();
L_806400: /* 806400: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 806405: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 806407: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 80640b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80640d: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 806412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806413: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x806415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 806415: ret  */
  esp += 4; SPILL(); return;
}

void f_806430(void) {
  LOAD_REGS();
L_806430: /* 806430: mov dword ptr [ecx], 0xa12d28 */
  W32((uint32_t)(ecx), 0xa12d28u);
/* 806436: jmp 0x6c6474 */
  SPILL(); f_6c6474(); return;
}

void f_806450(void) {
  LOAD_REGS();
L_806450: /* 806450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806451: mov esi, ecx */
  esi = ecx;
/* 806453: call 0x6c3026 */
  esp -= 4; W32(esp, 0x806458u); SPILL(); f_6c3026(); if (g_unwind) return; RELOAD();
/* 806458: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80645d: je 0x80646c */
  if (zf) goto L_80646c;
L_80645f: /* 80645f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 806464: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 806466: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 806468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806469: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80646cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80646c: /* 80646c: mov eax, esi */
  eax = esi;
/* 80646e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80646f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806490(void) {
  LOAD_REGS();
L_806490: /* 806490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 806491: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 806495: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806498: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806499: mov esi, ecx */
  esi = ecx;
/* 80649b: je 0x8064d0 */
  if (zf) goto L_8064d0;
L_80649d: /* 80649d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 8064a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8064a1: push 0x6c3026 */
  { uint32_t v = 0x6c3026u; esp -= 4; W32(esp, v); }
/* 8064a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 8064a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8064aa: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* 8064af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8064b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x8064b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 8064b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8064b8: je 0x8064c8 */
  if (zf) goto L_8064c8;
L_8064ba: /* 8064ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8064c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8064c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8064c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8064c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8064c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8064c8: /* 8064c8: mov eax, edi */
  eax = edi;
/* 8064ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8064cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8064cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8064cd: ret 4 */
  esp += 8; SPILL(); return;
L_8064d0: /* 8064d0: mov ecx, esi */
  ecx = esi;
/* 8064d2: call 0x6c3026 */
  esp -= 4; W32(esp, 0x8064d7u); SPILL(); f_6c3026(); if (g_unwind) return; RELOAD();
/* 8064d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8064da: je 0x8064e9 */
  if (zf) goto L_8064e9;
L_8064dc: /* 8064dc: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8064e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8064e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8064e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8064e6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8064e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8064e9: /* 8064e9: mov eax, esi */
  eax = esi;
/* 8064eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8064ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8064ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806510(void) {
  LOAD_REGS();
L_806510: /* 806510: mov dword ptr [ecx], 0xa12d28 */
  W32((uint32_t)(ecx), 0xa12d28u);
/* 806516: jmp 0x6c6474 */
  SPILL(); f_6c6474(); return;
}

void f_806530(void) {
  LOAD_REGS();
L_806530: /* 806530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806531: mov esi, ecx */
  esi = ecx;
/* 806533: call 0x6c48d6 */
  esp -= 4; W32(esp, 0x806538u); SPILL(); f_6c48d6(); if (g_unwind) return; RELOAD();
/* 806538: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80653d: je 0x80654c */
  if (zf) goto L_80654c;
L_80653f: /* 80653f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 806544: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 806546: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 806548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806549: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80654cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80654c: /* 80654c: mov eax, esi */
  eax = esi;
/* 80654e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80654f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806570(void) {
  LOAD_REGS();
L_806570: /* 806570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 806571: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 806575: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806579: mov esi, ecx */
  esi = ecx;
/* 80657b: je 0x8065b0 */
  if (zf) goto L_8065b0;
L_80657d: /* 80657d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 806580: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806581: push 0x6c48d6 */
  { uint32_t v = 0x6c48d6u; esp -= 4; W32(esp, v); }
/* 806586: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 806589: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80658a: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* 80658f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806590: call 0x99ca3d */
  esp -= 4; W32(esp, 0x806595u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 806595: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806598: je 0x8065a8 */
  if (zf) goto L_8065a8;
L_80659a: /* 80659a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8065a0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8065a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8065a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8065a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8065a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8065a8: /* 8065a8: mov eax, edi */
  eax = edi;
/* 8065aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8065ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8065ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8065ad: ret 4 */
  esp += 8; SPILL(); return;
L_8065b0: /* 8065b0: mov ecx, esi */
  ecx = esi;
/* 8065b2: call 0x6c48d6 */
  esp -= 4; W32(esp, 0x8065b7u); SPILL(); f_6c48d6(); if (g_unwind) return; RELOAD();
/* 8065b7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8065ba: je 0x8065c9 */
  if (zf) goto L_8065c9;
L_8065bc: /* 8065bc: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8065c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8065c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8065c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8065c6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8065c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8065c9: /* 8065c9: mov eax, esi */
  eax = esi;
/* 8065cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8065cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8065cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8065f0(void) {
  LOAD_REGS();
L_8065f0: /* 8065f0: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_806610(void) {
  LOAD_REGS();
L_806610: /* 806610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806611: mov esi, ecx */
  esi = ecx;
/* 806613: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x806619u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 806619: mov eax, esi */
  eax = esi;
/* 80661b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80661c: ret  */
  esp += 4; SPILL(); return;
}

void f_806630(void) {
  LOAD_REGS();
L_806630: /* 806630: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 806632: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 806636: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 806639: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806650(void) {
  LOAD_REGS();
L_806650: /* 806650: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 806654: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 806656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806657: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80665du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80665d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806670(void) {
  LOAD_REGS();
L_806670: /* 806670: mov eax, 1 */
  eax = 0x1u;
/* 806675: ret  */
  esp += 4; SPILL(); return;
}

void f_806690(void) {
  LOAD_REGS();
L_806690: /* 806690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 806691: mov ebp, esp */
  ebp = esp;
/* 806693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 806695: push 0x9d23b0 */
  { uint32_t v = 0x9d23b0u; esp -= 4; W32(esp, v); }
/* 80669a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8066a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8066a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8066a8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8066ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8066ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8066ad: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8066b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8066b1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8066b4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8066b6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8066b9: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8066bc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8066bf: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8066c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8066c3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8066c5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8066c8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8066cf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8066d1: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8066d4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8066d6: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8066d8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8066db: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8066dd: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8066e0: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8066e3: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8066e6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8066e9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8066eb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8066ee: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8066f1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8066f4: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8066fau); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8066fa: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8066fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 806700: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 806703: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 806706: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 806709: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80670b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 80670e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 806711: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806713: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 806719: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 80671c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 80671e: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 806721: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 806724: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806726: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 806729: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 80672c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80672e: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 806731: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 806734: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 806736: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 806739: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 80673b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80673e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 806741: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 806743: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 806746: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 806748: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 80674a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 80674d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 80674f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 806752: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 806754: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 806757: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 806759: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 80675b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 80675e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 806761: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 806763: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 806766: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 806768: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80676a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 80676d: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 806770: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 806773: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 806776: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 806779: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 80677c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80677e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 806781: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 806784: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 806787: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 80678a: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 80678d: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 806790: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806792: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 806795: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 806797: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806799: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80679c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 80679e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8067a1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8067a3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8067a6: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8067a9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8067ab: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8067ae: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8067b0: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8067b2: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8067b5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8067b7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8067ba: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8067bc: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8067bf: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8067c1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8067c3: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8067c6: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8067c9: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8067cc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8067ce: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8067d1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8067d4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8067d6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8067d8: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8067db: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8067dd: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8067e0: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8067e3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8067e6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8067e9: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8067ec: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 8067ef: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8067f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8067f5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8067f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8067f9: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8067fc: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8067ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806801: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 806804: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 806806: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 806809: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 80680b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80680e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 806811: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 806813: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 806816: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 806818: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 80681a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 80681d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 80681f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 806822: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 806825: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 806827: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80682a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80682b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80682d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 80682f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 806832: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 806835: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 806837: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 806839: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80683c: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 80683f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 806842: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806845: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 806848: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 80684b: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 80684d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 806850: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 806853: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 806856: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 806859: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80685c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80685d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 806864: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 806865: mov esp, ebp */
  esp = ebp;
/* 806867: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 806868: ret  */
  esp += 4; SPILL(); return;
}

void f_806869(void) {
  LOAD_REGS();
L_806869: /* 806869: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80686c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 806871: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 806874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806875: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 806878: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80687du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80687d(); return;
}

void f_80687d(void) {
  LOAD_REGS();
L_80687d: /* 80687d: push 0xa12d68 */
  { uint32_t v = 0xa12d68u; esp -= 4; W32(esp, v); }
/* 806882: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 806887: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80688du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80688d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 806890: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 806892: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 806894: call 0x99caf8 */
  esp -= 4; W32(esp, 0x806899u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_806899: guest_badaddr(0x806899); return;
}

void f_806930(void) {
  LOAD_REGS();
L_806930: /* 806930: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 806934: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 806938: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 80693c: mov eax, ecx */
  eax = ecx;
/* 80693e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 806944: xor ecx, ecx */
  ecx = 0;
/* 806946: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 80694a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 80694d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 806950: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 806953: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 806956: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 806959: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 80695c: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 80695f: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 806962: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 806965: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 806968: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 80696b: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 80696e: mov dword ptr [eax + 0x3c], 0x3f800000 */
  W32((uint32_t)(eax + 0x3cu), 0x3f800000u);
/* 806975: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 80697b: fdiv dword ptr [esp + 4] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4u)));
/* 80697f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 806981: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 806984: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 806987: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8069b0(void) {
  LOAD_REGS();
L_8069b0: /* 8069b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8069b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8069b4: mov esi, ecx */
  esi = ecx;
/* 8069b6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8069ba: mov dword ptr [esi], 0xa12c98 */
  W32((uint32_t)(esi), 0xa12c98u);
/* 8069c0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8069c3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8069c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8069c6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8069c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8069c8: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8069cb: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8069cd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8069d0: mov ecx, esp */
  ecx = esp;
/* 8069d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8069d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8069d7: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8069df: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8069e3: mov edx, esp */
  edx = esp;
/* 8069e5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8069e7: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 8069ef: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8069f3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8069f6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 8069fe: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 806a02: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 806a05: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x806a0bu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 806a0b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 806a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 806a10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 806a12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 806a14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 806a16: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 806a18: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x806a1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 806a1b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 806a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 806a20: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* 806a25: mov byte ptr [esp + 0x19], 0 */
  W8((uint32_t)(esp + 0x19u), 0x0u);
/* 806a2a: mov byte ptr [esp + 0x1a], 0 */
  W8((uint32_t)(esp + 0x1au), 0x0u);
/* 806a2f: mov byte ptr [esp + 0x1b], 0xff */
  W8((uint32_t)(esp + 0x1bu), 0xffu);
/* 806a34: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 806a38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806a39: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x806a3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 806a3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 806a3d: mov eax, esi */
  eax = esi;
/* 806a3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806a40: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 806a43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806a80(void) {
  LOAD_REGS();
L_806a80: /* 806a80: mov eax, dword ptr [0xb19088] */
  eax = R32((uint32_t)(0xb19088u));
/* 806a85: test byte ptr [eax + 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x10u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806a89: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 806a8d: je 0x806aa0 */
  if (zf) goto L_806aa0;
L_806a8f: /* 806a8f: test dword ptr [eax + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 806a99: je 0x806aa0 */
  if (zf) goto L_806aa0;
L_806a9b: /* 806a9b: xor eax, eax */
  eax = 0;
/* 806a9d: ret 4 */
  esp += 8; SPILL(); return;
L_806aa0: /* 806aa0: mov eax, dword ptr [eax + 0x84] */
  eax = R32((uint32_t)(eax + 0x84u));
/* 806aa6: shr eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 806aa9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 806aac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806ac0(void) {
  LOAD_REGS();
L_806ac0: /* 806ac0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 806ac6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 806ac8: push 0x9d23c8 */
  { uint32_t v = 0x9d23c8u; esp -= 4; W32(esp, v); }
/* 806acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806ace: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 806ad5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 806ad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806ad9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806ada: mov edi, ecx */
  edi = ecx;
/* 806adc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 806adf: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 806ae2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 806ae4: je 0x806af6 */
  if (zf) goto L_806af6;
L_806ae6: /* 806ae6: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 806aed: jne 0x806af6 */
  if (!zf) goto L_806af6;
L_806aef: /* 806aef: mov eax, 1 */
  eax = 0x1u;
/* 806af4: jmp 0x806af8 */
  goto L_806af8;
L_806af6: /* 806af6: xor eax, eax */
  eax = 0;
L_806af8: /* 806af8: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 806afc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 806afe: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 806b00: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 806b02: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 806b05: not eax */
  eax = ~eax;
/* 806b07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806b08: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 806b0a: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 806b0c: push 0x3f7fff00 */
  { uint32_t v = 0x3f7fff00u; esp -= 4; W32(esp, v); }
/* 806b11: mov byte ptr [esp + 0x14], cl */
  W8((uint32_t)(esp + 0x14u), (ecx & 0xffu));
/* 806b15: mov byte ptr [esp + 0x15], cl */
  W8((uint32_t)(esp + 0x15u), (ecx & 0xffu));
/* 806b19: mov byte ptr [esp + 0x16], cl */
  W8((uint32_t)(esp + 0x16u), (ecx & 0xffu));
/* 806b1d: mov byte ptr [esp + 0x17], cl */
  W8((uint32_t)(esp + 0x17u), (ecx & 0xffu));
/* 806b21: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 806b25: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 806b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806b28: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 806b2a: mov ecx, esi */
  ecx = esi;
/* 806b2c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x806b2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 806b2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806b30: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 806b34: call 0x6c54f7 */
  esp -= 4; W32(esp, 0x806b39u); SPILL(); f_6c54f7(); if (g_unwind) return; RELOAD();
/* 806b39: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 806b3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 806b3e: mov ecx, edi */
  ecx = edi;
/* 806b40: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 806b48: call 0x6c5efc */
  esp -= 4; W32(esp, 0x806b4du); SPILL(); f_6c5efc(); if (g_unwind) return; RELOAD();
/* 806b4d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 806b51: mov dword ptr [esp + 8], 0xa12c98 */
  W32((uint32_t)(esp + 0x8u), 0xa12c98u);
/* 806b59: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 806b5b: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 806b63: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x806b66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 806b66: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 806b6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 806b6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806b6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 806b73: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 806b76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806bb0(void) {
  LOAD_REGS();
L_806bb0: /* 806bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806bb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806bb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 806bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806bb7: mov esi, ecx */
  esi = ecx;
/* 806bb9: call 0x6c29cd */
  esp -= 4; W32(esp, 0x806bbeu); SPILL(); f_6c29cd(); if (g_unwind) return; RELOAD();
/* 806bbe: mov dword ptr [esi], 0xa12d28 */
  W32((uint32_t)(esi), 0xa12d28u);
/* 806bc4: mov eax, dword ptr [edi + 0x1d4] */
  eax = R32((uint32_t)(edi + 0x1d4u));
/* 806bca: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 806bd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 806bd1: mov eax, esi */
  eax = esi;
/* 806bd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806bd4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806bf0(void) {
  LOAD_REGS();
L_806bf0: /* 806bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806bf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806bf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 806bf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806bf7: mov esi, ecx */
  esi = ecx;
/* 806bf9: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x806bfeu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 806bfe: mov eax, dword ptr [edi + 0x1d4] */
  eax = R32((uint32_t)(edi + 0x1d4u));
/* 806c04: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 806c0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 806c0b: mov eax, esi */
  eax = esi;
/* 806c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806c0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806c30(void) {
  LOAD_REGS();
L_806c30: /* 806c30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806c31: mov esi, ecx */
  esi = ecx;
/* 806c33: call 0x6c5d5d */
  esp -= 4; W32(esp, 0x806c38u); SPILL(); f_6c5d5d(); if (g_unwind) return; RELOAD();
/* 806c38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806c3d: je 0x806c4c */
  if (zf) goto L_806c4c;
L_806c3f: /* 806c3f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 806c44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 806c46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 806c48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806c49: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x806c4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_806c4c: /* 806c4c: mov eax, esi */
  eax = esi;
/* 806c4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806c4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806c70(void) {
  LOAD_REGS();
L_806c70: /* 806c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 806c71: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 806c75: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806c78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806c79: mov esi, ecx */
  esi = ecx;
/* 806c7b: je 0x806cb0 */
  if (zf) goto L_806cb0;
L_806c7d: /* 806c7d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 806c80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806c81: push 0x6c5d5d */
  { uint32_t v = 0x6c5d5du; esp -= 4; W32(esp, v); }
/* 806c86: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 806c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806c8a: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* 806c8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806c90: call 0x99ca3d */
  esp -= 4; W32(esp, 0x806c95u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 806c95: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806c98: je 0x806ca8 */
  if (zf) goto L_806ca8;
L_806c9a: /* 806c9a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 806ca0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 806ca2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 806ca4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806ca5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x806ca8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_806ca8: /* 806ca8: mov eax, edi */
  eax = edi;
/* 806caa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 806cab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806cac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 806cad: ret 4 */
  esp += 8; SPILL(); return;
L_806cb0: /* 806cb0: mov ecx, esi */
  ecx = esi;
/* 806cb2: call 0x6c5d5d */
  esp -= 4; W32(esp, 0x806cb7u); SPILL(); f_6c5d5d(); if (g_unwind) return; RELOAD();
/* 806cb7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806cba: je 0x806cc9 */
  if (zf) goto L_806cc9;
L_806cbc: /* 806cbc: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 806cc1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 806cc3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 806cc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806cc6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x806cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_806cc9: /* 806cc9: mov eax, esi */
  eax = esi;
/* 806ccb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 806ccc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 806ccd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_806cf0(void) {
  LOAD_REGS();
L_806cf0: /* 806cf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 806cf1: mov ebp, esp */
  ebp = esp;
/* 806cf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 806cf5: push 0x9d243b */
  { uint32_t v = 0x9d243bu; esp -= 4; W32(esp, v); }
/* 806cfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 806d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806d01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 806d08: sub esp, 0x1cc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 806d0e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 806d11: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 806d14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 806d15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 806d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 806d17: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 806d1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806d1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 806d1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 806d1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 806d20: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 806d23: call 0x6cc3ec */
  esp -= 4; W32(esp, 0x806d28u); SPILL(); f_6cc3ec(); if (g_unwind) return; RELOAD();
/* 806d28: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 806d2b: mov dword ptr [ecx], 0xa12e20 */
  W32((uint32_t)(ecx), 0xa12e20u);
/* 806d31: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 806d34: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 806d37: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 806d3a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 806d3d: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 806d43: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 806d45: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 806d46: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 806d49: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 806d4c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 806d4d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 806d50: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 806d53: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 806d56: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 806d5d: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 806d63: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 806d67: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 806d6a: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 806d71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806d73: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 806d79: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 806d7c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806d7e: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* 806d81: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 806d87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 806d89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 806d8c: je 0x806d95 */
  if (zf) goto L_806d95;
L_806d8e: /* 806d8e: mov dword ptr [ebp - 0x4c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0xbf800000u);
L_806d95: /* 806d95: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 806d98: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 806d9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 806d9f: mov ecx, dword ptr [edx + 0x1d4] */
  ecx = R32((uint32_t)(edx + 0x1d4u));
/* 806da5: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 806da8: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x806daeu); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 806dae: fild dword ptr [ebp - 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 806db1: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 806db4: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 806dba: fst dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0);
/* 806dc0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 806dc4: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 806dca: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 806dd1: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 806dd8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 806ddb: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 806de1: fiadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x18u)));
/* 806de4: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 806de7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 806dea: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 806ded: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 806df3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 806df9: fiadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x1cu)));
/* 806dfc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 806dfe: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 806e01: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 806e04: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 806e07: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 806e0a: lea edi, [ebp - 0x2c] */
  edi = (uint32_t)(ebp + 0xffffffd4u);
/* 806e0d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806e0f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 806e11: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806e13: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 806e16: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806e18: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 806e1b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806e1d: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 806e20: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806e23: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 806e26: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806e29: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 806e2c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806e2f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 806e32: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806e35: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 806e38: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806e3a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 806e3c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806e3e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806e40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806e42: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806e45: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 806e48: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806e4b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 806e4e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806e51: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 806e54: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806e57: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 806e5a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806e5c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 806e5e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806e60: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806e62: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806e64: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806e67: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 806e6a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806e6d: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 806e70: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806e73: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 806e76: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806e79: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 806e7c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806e7e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 806e80: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806e82: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806e84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806e86: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806e88: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 806e8a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 806e8c: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 806e8f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 806e92: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 806e95: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 806e98: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 806e9e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 806ea1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 806ea7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 806eaa: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 806eb0: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 806eb6: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 806eb9: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 806ebc: lea eax, [ebp - 0x154] */
  eax = (uint32_t)(ebp + 0xfffffeacu);
/* 806ec2: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 806ec8: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 806ecf: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 806ed6: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 806edd: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 806ee0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 806ee3: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 806ee6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 806ee9: lea edi, [ebp - 0x2c] */
  edi = (uint32_t)(ebp + 0xffffffd4u);
/* 806eec: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806eee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 806ef0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806ef2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 806ef5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806ef7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 806efa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806efc: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 806eff: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806f02: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 806f05: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806f08: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 806f0b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806f0e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 806f11: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806f14: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 806f17: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806f19: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 806f1b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806f1d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806f1f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806f21: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806f24: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 806f27: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806f2a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 806f2d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806f30: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 806f33: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 806f36: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 806f39: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806f3b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 806f3d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806f3f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806f41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806f43: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806f46: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 806f49: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806f4c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 806f4f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806f52: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 806f55: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 806f58: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 806f5b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806f5d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 806f5f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806f61: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806f63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806f65: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806f67: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 806f69: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 806f6b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 806f6e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 806f71: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 806f74: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 806f77: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 806f7a: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 806f80: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 806f83: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 806f86: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* 806f8c: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 806f8f: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* 806f95: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 806f98: lea edx, [ebp - 0x154] */
  edx = (uint32_t)(ebp + 0xfffffeacu);
/* 806f9e: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 806fa4: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 806fab: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 806fb2: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 806fb9: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 806fbc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 806fbf: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 806fc2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 806fc5: lea edi, [ebp - 0x2c] */
  edi = (uint32_t)(ebp + 0xffffffd4u);
/* 806fc8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806fca: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 806fcc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806fce: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 806fd1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806fd3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 806fd6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 806fd8: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 806fdb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806fde: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 806fe1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806fe4: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 806fe7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806fea: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 806fed: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 806ff0: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 806ff3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 806ff5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 806ff7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806ff9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 806ffb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 806ffd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807000: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 807003: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807006: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 807009: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80700c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80700f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807012: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 807015: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807017: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 807019: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80701b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80701d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80701f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807022: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 807025: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807028: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80702b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80702e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 807031: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807034: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 807037: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807039: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80703b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80703d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80703f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 807041: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807043: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 807045: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 807047: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80704a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80704d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 807050: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 807053: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 807056: fchs  */
  ST0 = -ST0;
/* 807058: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 80705b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80705e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80705f: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 807065: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 807068: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 80706b: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 807071: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 807074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 807075: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 807078: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 80707e: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x807084u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 807084: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 807086: mov dword ptr [ebp - 0xe0], ebx */
  W32((uint32_t)(ebp + 0xffffff20u), ebx);
/* 80708c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80708f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 807092: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 807095: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 80709b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80709e: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8070a1: mov dword ptr [ebp - 0xdc], ecx */
  W32((uint32_t)(ebp + 0xffffff24u), ecx);
/* 8070a7: mov ecx, esp */
  ecx = esp;
/* 8070a9: mov edx, eax */
  edx = eax;
/* 8070ab: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8070ad: mov esi, ecx */
  esi = ecx;
/* 8070af: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8070b1: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8070b4: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8070b7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8070ba: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8070bd: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8070c0: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8070c3: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8070c6: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8070cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8070cd: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 8070d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8070d4: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 8070da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8070db: call 0x6cae57 */
  esp -= 4; W32(esp, 0x8070e0u); SPILL(); f_6cae57(); if (g_unwind) return; RELOAD();
/* 8070e0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8070e3: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 8070e9: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8070ec: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8070f1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8070f3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8070f6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8070f9: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 8070ff: fchs  */
  ST0 = -ST0;
/* 807101: fld dword ptr [eax + 0x198] */
  { double v = F32((uint32_t)(eax + 0x198u)); FPUSH(v); }
/* 807107: fchs  */
  ST0 = -ST0;
/* 807109: fld dword ptr [eax + 0x194] */
  { double v = F32((uint32_t)(eax + 0x194u)); FPUSH(v); }
/* 80710f: mov dword ptr [ebp - 0x9c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f800000u);
/* 807119: fchs  */
  ST0 = -ST0;
/* 80711b: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 807125: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 807128: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 807132: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 80713c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 80713f: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 807149: mov dword ptr [ebp - 0x88], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x3f800000u);
/* 807153: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 807156: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 807160: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 807167: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 80716e: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 807175: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 80717c: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 807183: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 80718a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80718f: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 807195: lea edi, [ebp - 0x194] */
  edi = (uint32_t)(ebp + 0xfffffe6cu);
/* 80719b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80719d: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8071a0: mov edi, esp */
  edi = esp;
/* 8071a2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8071a7: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 8071ad: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8071af: lea ecx, [ebp - 0x1d8] */
  ecx = (uint32_t)(ebp + 0xfffffe28u);
/* 8071b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8071b6: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 8071b9: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8071bd: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8071c3u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8071c3: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8071c6: mov esi, eax */
  esi = eax;
/* 8071c8: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8071cb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8071d0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8071d2: lea ecx, [ebp - 0x1d8] */
  ecx = (uint32_t)(ebp + 0xfffffe28u);
/* 8071d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8071deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8071de: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8071e4: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8071e8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8071eeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8071ee: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8071f4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8071f8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8071feu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8071fe: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 807204: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* 80720a: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 807210: mov dword ptr [ebp - 0xfc], ebx */
  W32((uint32_t)(ebp + 0xffffff04u), ebx);
/* 807216: mov dword ptr [ebp - 0xf8], edx */
  W32((uint32_t)(ebp + 0xffffff08u), edx);
/* 80721c: mov dword ptr [ebp - 0xf4], eax */
  W32((uint32_t)(ebp + 0xffffff0cu), eax);
/* 807222: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x807228u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 807228: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 80722b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80722e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80722f: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 807235: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 807236: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 80723c: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x807242u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 807242: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 807248: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 80724e: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 807254: mov dword ptr [ebp - 0x104], ecx */
  W32((uint32_t)(ebp + 0xfffffefcu), ecx);
/* 80725a: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 807260: mov dword ptr [ebp - 0x108], eax */
  W32((uint32_t)(ebp + 0xfffffef8u), eax);
/* 807266: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 80726c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x807272u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 807272: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 807275: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 807278: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 807279: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 80727c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80727d: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 807283: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x807289u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 807289: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 80728f: mov edx, dword ptr [ebp - 0xc4] */
  edx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 807295: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 80729b: mov dword ptr [ebp - 0xe8], ecx */
  W32((uint32_t)(ebp + 0xffffff18u), ecx);
/* 8072a1: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8072a7: mov dword ptr [ebp - 0xf0], edx */
  W32((uint32_t)(ebp + 0xffffff10u), edx);
/* 8072ad: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 8072b3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8072b9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8072b9: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8072bc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8072bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8072c0: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8072c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8072c4: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8072ca: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8072d0u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8072d0: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8072d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8072d7: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8072da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8072db: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8072de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8072df: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 8072e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8072e6: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 8072ec: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 8072f6: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 807300: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 80730a: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x807310u); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 807310: lea edx, [ebp - 0x1d8] */
  edx = (uint32_t)(ebp + 0xfffffe28u);
/* 807316: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 807317: mov ecx, eax */
  ecx = eax;
/* 807319: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x80731fu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 80731f: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807322: mov esi, eax */
  esi = eax;
/* 807324: mov edi, esp */
  edi = esp;
/* 807326: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80732b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80732d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 807330: lea eax, [ebp - 0x194] */
  eax = (uint32_t)(ebp + 0xfffffe6cu);
/* 807336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 807337: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80733a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 80733e: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x807344u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 807344: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 807347: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80734a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80734f: mov esi, eax */
  esi = eax;
/* 807351: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 807353: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 807359: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80735fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80735f: lea ecx, [ebp - 0x1d8] */
  ecx = (uint32_t)(ebp + 0xfffffe28u);
/* 807365: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 807369: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80736fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80736f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 807372: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 807378: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 80737e: add ecx, 0x1d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 807384: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 807386: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 80738c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 80738f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 807392: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 807395: lea eax, [ebp - 0x194] */
  eax = (uint32_t)(ebp + 0xfffffe6cu);
/* 80739b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80739c: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80739f: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x8073a5u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 8073a5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8073a8: mov esi, eax */
  esi = eax;
/* 8073aa: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8073ad: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8073b2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8073b4: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8073ba: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8073c0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8073c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8073c3: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 8073c9: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 8073cf: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8073d2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8073d5: mov ecx, dword ptr [ebp - 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xffffff38u));
/* 8073db: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8073de: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8073e1: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8073e4: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8073e7: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 8073ee: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8073f1: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8073f4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8073f7: lea edi, [ebp - 0x3c] */
  edi = (uint32_t)(ebp + 0xffffffc4u);
/* 8073fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8073fc: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8073fe: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 807400: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 807403: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 807405: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 807408: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80740a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80740d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 807410: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 807413: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 807416: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 807419: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80741c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80741f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 807422: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 807425: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807427: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 807429: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80742b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80742d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80742f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807432: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 807435: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807438: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80743b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80743e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 807441: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807444: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 807447: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807449: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80744b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80744d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80744f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 807451: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807454: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 807457: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80745a: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80745d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807460: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 807463: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807466: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 807469: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80746b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80746d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80746f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 807471: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 807473: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807475: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 807477: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 807479: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80747c: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80747f: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 807482: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 807485: mov ecx, dword ptr [ebp - 0xc4] */
  ecx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 80748b: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 807491: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 807494: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 807497: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 80749d: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8074a0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8074a3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8074a6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8074a9: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8074b0: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8074b3: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8074b6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8074b9: lea edi, [ebp - 0xac] */
  edi = (uint32_t)(ebp + 0xffffff54u);
/* 8074bf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8074c1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8074c3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8074c5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8074c8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8074ca: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8074cd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8074cf: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8074d2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8074d5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8074d8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8074db: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8074de: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8074e1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8074e4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8074e7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8074ea: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8074ec: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8074ee: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8074f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8074f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8074f4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8074f7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8074fa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8074fd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 807500: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807503: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 807506: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 807509: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80750c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80750e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 807510: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 807512: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 807514: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 807516: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807519: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80751c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80751f: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 807522: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807525: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 807528: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80752b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80752e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807530: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 807532: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 807534: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 807536: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 807538: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80753a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80753c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80753e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 807541: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 807544: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 807547: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 80754d: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 807553: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 807559: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 80755c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80755f: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 807562: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 807568: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80756b: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 80756e: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 807574: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 807577: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 80757d: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 807580: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 807583: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 807586: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 807589: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 807590: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 807593: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 807596: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 807599: lea edi, [ebp - 0xac] */
  edi = (uint32_t)(ebp + 0xffffff54u);
/* 80759f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8075a1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8075a3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8075a5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8075a8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8075aa: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8075ad: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8075af: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8075b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8075b5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8075b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8075bb: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8075be: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8075c1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8075c4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8075c7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8075ca: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8075cc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8075ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8075d0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8075d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8075d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8075d7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8075da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8075dd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8075e0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8075e3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8075e6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8075e9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8075ec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8075ee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8075f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8075f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8075f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8075f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8075f9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8075fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8075ff: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 807602: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 807605: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 807608: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80760b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80760e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 807610: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 807612: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 807614: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 807616: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 807618: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80761a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80761c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80761e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 807621: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 807624: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 807627: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 80762d: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 807633: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 807639: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 80763c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80763f: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 807642: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 807645: mov edx, ebx */
  edx = ebx;
/* 807647: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 80764a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 80764d: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 807650: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 807656: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 80765c: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 80765f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 807662: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 807665: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 80766c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 80766f: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 807672: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 807675: lea edi, [ebp - 0xac] */
  edi = (uint32_t)(ebp + 0xffffff54u);
/* 80767b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80767d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 80767f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 807681: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 807684: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 807686: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 807689: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80768b: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80768e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 807691: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 807694: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 807697: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80769a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80769d: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8076a0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8076a3: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8076a6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8076a8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8076aa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8076ac: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8076ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8076b0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8076b3: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8076b6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8076b9: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8076bc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8076bf: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8076c2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8076c5: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8076c8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8076ca: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8076cc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8076ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8076d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8076d2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8076d5: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8076d8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8076db: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8076de: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8076e1: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8076e4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8076e7: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8076ea: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8076ec: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8076ee: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8076f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8076f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8076f4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8076f6: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8076f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8076fa: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8076fd: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 807700: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 807703: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 807709: fdiv dword ptr [ebp - 0x34] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffccu)));
/* 80770c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 80770f: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 807715: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80771b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 807720: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 807722: mov dword ptr [ebp - 0x9c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f800000u);
/* 80772c: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 807736: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 807740: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 80774a: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 807754: mov dword ptr [ebp - 0x88], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x3f800000u);
/* 80775e: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 807768: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 80776f: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 807776: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 80777d: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 807784: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 80778b: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 807792: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 807799: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 80779c: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 80779f: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8077a2: fchs  */
  ST0 = -ST0;
/* 8077a4: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8077a7: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8077aa: fchs  */
  ST0 = -ST0;
/* 8077ac: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8077af: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8077b2: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8077b5: mov edi, esp */
  edi = esp;
/* 8077b7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8077bc: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 8077c2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8077c4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8077c7: lea eax, [ebp - 0x194] */
  eax = (uint32_t)(ebp + 0xfffffe6cu);
/* 8077cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8077ce: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8077d4: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8077d8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8077deu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8077de: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8077e1: mov esi, eax */
  esi = eax;
/* 8077e3: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8077e9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8077ee: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8077f0: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8077f6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8077fcu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8077fc: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 807802: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 807806: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80780cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80780c: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 80780f: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x807815u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 807815: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 807818: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 80781b: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 80781e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 807821: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x807827u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 807827: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80782a: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 80782d: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 807830: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 80783a: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 807844: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 80784e: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 807854: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 80785e: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 807864: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 80786e: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 807875: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 80787c: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 807883: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 80788a: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 807891: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 807898: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 80789f: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8078a6: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 8078ad: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8078b0: mov edi, esp */
  edi = esp;
/* 8078b2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8078b7: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 8078bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8078bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8078c2: lea edx, [ebp - 0x194] */
  edx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8078c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8078c9: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8078cf: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8078d3: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8078d9u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8078d9: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8078dc: mov esi, eax */
  esi = eax;
/* 8078de: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8078e4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8078e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8078eb: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8078f1: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8078f7u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8078f7: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8078fd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 807901: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x807907u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 807907: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 80790a: mov dword ptr [ebp - 0x9c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f800000u);
/* 807914: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 80791a: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 807924: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 80792e: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 807938: fdivr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) / ST0;
/* 80793b: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 807945: mov dword ptr [ebp - 0x88], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffff78u), 0xbf800000u);
/* 80794f: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 807959: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 807960: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 807967: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 80796e: mov dword ptr [ebp - 0x70], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x3f800000u);
/* 807975: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 80797c: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 807983: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 80798a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 80798c: fchs  */
  ST0 = -ST0;
/* 80798e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 807990: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 807993: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 807996: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807999: mov edi, esp */
  edi = esp;
/* 80799b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8079a0: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 8079a6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8079a8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8079ab: lea eax, [ebp - 0x194] */
  eax = (uint32_t)(ebp + 0xfffffe6cu);
/* 8079b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8079b2: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8079b8: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8079bc: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8079c2u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8079c2: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8079c5: mov esi, eax */
  esi = eax;
/* 8079c7: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8079cd: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8079d2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8079d4: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8079da: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8079e0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8079e0: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8079e6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8079ea: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8079f0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8079f0: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8079f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8079f7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8079fa: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 807a00: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x807a06u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 807a06: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 807a09: add edi, 0xd4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 807a0f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 807a14: mov esi, eax */
  esi = eax;
/* 807a16: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 807a18: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 807a1e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x807a24u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 807a24: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 807a27: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807a2a: mov edi, esp */
  edi = esp;
/* 807a2c: lea esi, [eax + 0x94] */
  esi = (uint32_t)(eax + 0x94u);
/* 807a32: mov ecx, 0x10 */
  ecx = 0x10u;
/* 807a37: lea edx, [ebp - 0x194] */
  edx = (uint32_t)(ebp + 0xfffffe6cu);
/* 807a3d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 807a3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 807a40: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 807a43: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x807a49u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 807a49: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 807a4c: mov esi, eax */
  esi = eax;
/* 807a4e: add edi, 0x114 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 807a54: mov ecx, 0x10 */
  ecx = 0x10u;
/* 807a59: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 807a5b: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 807a61: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x807a67u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 807a67: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 807a6a: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807a6d: mov edi, esp */
  edi = esp;
/* 807a6f: lea esi, [eax + 0x54] */
  esi = (uint32_t)(eax + 0x54u);
/* 807a72: mov ecx, 0x10 */
  ecx = 0x10u;
/* 807a77: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 807a79: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 807a7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 807a80: lea ecx, [eax + 0xd4] */
  ecx = (uint32_t)(eax + 0xd4u);
/* 807a86: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x807a8cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 807a8c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 807a8f: mov esi, eax */
  esi = eax;
/* 807a91: add edi, 0x154 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 807a97: mov ecx, 0x10 */
  ecx = 0x10u;
/* 807a9c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 807a9e: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 807aa4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x807aaau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 807aaa: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 807ab0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 807ab4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x807abau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 807aba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 807abd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 807ac0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 807ac1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 807ac2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 807ac9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 807aca: mov esp, ebp */
  esp = ebp;
/* 807acc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 807acd: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_807ad0(void) {
  LOAD_REGS();
L_807ad0: /* 807ad0: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 807ad6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 807adb: lea eax, [ebp - 0xe4] */
  eax = (uint32_t)(ebp + 0xffffff1cu);
/* 807ae1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 807ae2: mov dword ptr [ebp - 0xe4], edx */
  W32((uint32_t)(ebp + 0xffffff1cu), edx);
/* 807ae8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x807aedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_807aed(); return;
}

void f_807aed(void) {
  LOAD_REGS();
L_807aed: /* 807aed: push 0xa12da8 */
  { uint32_t v = 0xa12da8u; esp -= 4; W32(esp, v); }
/* 807af2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 807af7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x807afdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 807afd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 807b00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 807b02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 807b04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x807b09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_807b09: guest_badaddr(0x807b09); return;
}

void f_807ea0(void) {
  LOAD_REGS();
L_807ea0: /* 807ea0: sub esp, 0x260 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807ea6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 807ea7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 807ea8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 807ea9: mov ebx, ecx */
  ebx = ecx;
/* 807eab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 807eac: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 807eb0: call 0x6cc784 */
  esp -= 4; W32(esp, 0x807eb5u); SPILL(); f_6cc784(); if (g_unwind) return; RELOAD();
/* 807eb5: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 807eb9: mov edi, 4 */
  edi = 0x4u;
/* 807ebe: mov edi, edi */
  edi = edi;
L_807ec0: /* 807ec0: mov ecx, esi */
  ecx = esi;
/* 807ec2: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x807ec8u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 807ec8: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 807ecb: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 807ecc: jne 0x807ec0 */
  if (!zf) goto L_807ec0;
L_807ece: /* 807ece: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807ed1: lea eax, [ebx + 0x1d8] */
  eax = (uint32_t)(ebx + 0x1d8u);
/* 807ed7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 807ed9: mov ecx, esp */
  ecx = esp;
/* 807edb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 807edd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 807ee0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 807ee3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 807ee6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 807ee9: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 807eed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 807eee: mov ecx, ebx */
  ecx = ebx;
/* 807ef0: mov dword ptr [esp + 0x64], 0xbf800000 */
  W32((uint32_t)(esp + 0x64u), 0xbf800000u);
/* 807ef8: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* 807f00: call 0x6c6221 */
  esp -= 4; W32(esp, 0x807f05u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 807f05: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 807f09: lea ebp, [esp + 0x54] */
  ebp = (uint32_t)(esp + 0x54u);
/* 807f0d: mov dword ptr [esp + 0x40], 2 */
  W32((uint32_t)(esp + 0x40u), 0x2u);
L_807f15: /* 807f15: xor esi, esi */
  esi = 0;
/* 807f17: jmp 0x807f20 */
  goto L_807f20;
L_807f20: /* 807f20: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 807f24: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 807f27: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 807f2b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807f2e: fld dword ptr [esp + esi*4 + 0x64] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x64u)); FPUSH(v); }
/* 807f32: mov eax, esp */
  eax = esp;
/* 807f34: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 807f37: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 807f39: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 807f3c: mov ecx, ebx */
  ecx = ebx;
/* 807f3e: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 807f41: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 807f45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 807f46: call 0x6c7018 */
  esp -= 4; W32(esp, 0x807f4bu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 807f4b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 807f4d: mov ecx, edi */
  ecx = edi;
/* 807f4f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 807f51: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 807f54: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 807f57: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 807f5a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 807f5b: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 807f5e: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 807f61: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 807f64: jl 0x807f20 */
  if ((sf != of)) goto L_807f20;
L_807f66: /* 807f66: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 807f6a: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 807f6d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 807f6e: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 807f72: jne 0x807f15 */
  if (!zf) goto L_807f15;
L_807f74: /* 807f74: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 807f7a: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x807f80u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 807f80: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 807f86: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807f89: lea esi, [ebx + 0x194] */
  esi = (uint32_t)(ebx + 0x194u);
/* 807f8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 807f91: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 807f94: jp 0x80819f */
  if (pf) goto L_80819f;
L_807f9a: /* 807f9a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 807f9e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 807fa2: mov ecx, esp */
  ecx = esp;
/* 807fa4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 807fa6: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 807faa: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 807fad: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 807fb0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 807fb4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 807fb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807fbb: mov eax, esp */
  eax = esp;
/* 807fbd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 807fbf: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 807fc3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 807fc6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 807fc9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807fcc: mov edx, esi */
  edx = esi;
/* 807fce: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 807fd0: mov eax, esp */
  eax = esp;
/* 807fd2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 807fd4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 807fd7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 807fda: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 807fdd: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 807fe1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 807fe4: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x807feau); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 807fea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 807fec: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* 807ff0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 807ff3: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 807ff7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 807ffa: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 807ffe: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 808001: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 808005: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 808009: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 80800d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808010: mov eax, esp */
  eax = esp;
/* 808012: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808014: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808018: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80801b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80801e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 808022: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 808026: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808029: mov edx, esp */
  edx = esp;
/* 80802b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80802d: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 808031: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 808034: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 808037: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80803a: mov ecx, esi */
  ecx = esi;
/* 80803c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80803e: mov edx, esp */
  edx = esp;
/* 808040: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 808042: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 808045: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 808048: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 80804b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 80804e: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808052: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x808058u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 808058: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80805a: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 80805e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 808061: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 808068: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 80806b: mov dword ptr [esp + 0x84], edx */
  W32((uint32_t)(esp + 0x84u), edx);
/* 808072: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 808075: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 808079: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80807c: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 808083: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 808087: mov ecx, esp */
  ecx = esp;
/* 808089: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80808b: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 80808f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 808092: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 808095: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 808099: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80809c: mov eax, esp */
  eax = esp;
/* 80809e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8080a0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8080a4: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8080a8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8080ab: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8080ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8080b1: mov edx, esi */
  edx = esi;
/* 8080b3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8080b5: mov eax, esp */
  eax = esp;
/* 8080b7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8080b9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8080bc: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8080bf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8080c2: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8080c6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8080c9: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8080cfu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8080cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8080d1: mov dword ptr [esp + 0x8c], ecx */
  W32((uint32_t)(esp + 0x8cu), ecx);
/* 8080d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8080db: mov dword ptr [esp + 0x90], edx */
  W32((uint32_t)(esp + 0x90u), edx);
/* 8080e2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8080e5: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 8080ec: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8080ef: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8080f3: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* 8080fa: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8080fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808101: mov eax, esp */
  eax = esp;
/* 808103: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808105: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 808109: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80810c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80810f: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 808113: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 808117: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80811a: mov edx, esp */
  edx = esp;
/* 80811c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80811e: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 808122: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 808125: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 808128: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80812a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 80812d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808130: mov ecx, esp */
  ecx = esp;
/* 808132: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 808134: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 808137: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 80813a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 80813d: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808141: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x808147u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 808147: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 808149: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 808150: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 808153: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
/* 80815a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 80815d: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* 808164: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 808167: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 80816b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80816e: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 808175: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 808179: mov eax, esp */
  eax = esp;
/* 80817b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80817d: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808181: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808184: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 808187: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 80818b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 80818f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808192: mov edx, esp */
  edx = esp;
/* 808194: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 808196: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 80819a: jmp 0x80839f */
  goto L_80839f;
L_80819f: /* 80819f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8081a3: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8081a7: mov eax, esp */
  eax = esp;
/* 8081a9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8081ab: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8081af: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8081b2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8081b5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8081b9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8081bd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8081c0: mov edx, esp */
  edx = esp;
/* 8081c2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8081c4: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8081c8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8081cb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8081ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8081d1: mov ecx, esi */
  ecx = esi;
/* 8081d3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8081d5: mov edx, esp */
  edx = esp;
/* 8081d7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8081d9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8081dc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8081df: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8081e2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8081e5: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8081e9: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8081efu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8081ef: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8081f1: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 8081f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8081f8: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 8081fc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8081ff: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 808203: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 808206: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 80820a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 80820e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 808212: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808215: mov ecx, esp */
  ecx = esp;
/* 808217: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 808219: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 80821d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 808220: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 808223: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 808227: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 80822b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80822e: mov eax, esp */
  eax = esp;
/* 808230: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808232: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 808236: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808239: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80823c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80823f: mov edx, esi */
  edx = esi;
/* 808241: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 808243: mov eax, esp */
  eax = esp;
/* 808245: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808247: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 80824a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 80824d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 808250: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808254: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 808257: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x80825du); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 80825d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80825f: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 808263: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 808266: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 80826d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 808270: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 808277: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 80827a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 80827e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808281: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 808288: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 80828c: mov eax, esp */
  eax = esp;
/* 80828e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808290: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808294: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808297: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80829a: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 80829e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8082a1: mov edx, esp */
  edx = esp;
/* 8082a3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8082a5: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8082a9: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8082ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8082b0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8082b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8082b6: mov ecx, esi */
  ecx = esi;
/* 8082b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8082ba: mov edx, esp */
  edx = esp;
/* 8082bc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8082be: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8082c1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8082c4: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8082c7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8082ca: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8082ce: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8082d4u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8082d4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8082d6: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 8082dd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8082e0: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 8082e7: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8082ea: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 8082f1: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8082f4: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 8082f8: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 8082ff: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 808303: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808306: mov ecx, esp */
  ecx = esp;
/* 808308: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80830a: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 80830e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 808311: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 808314: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 808318: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 80831c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80831f: mov eax, esp */
  eax = esp;
/* 808321: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808323: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808327: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80832a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80832d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 80832f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 808332: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808335: mov edx, esp */
  edx = esp;
/* 808337: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 808339: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 80833c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80833f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808343: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 808346: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x80834cu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 80834c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80834e: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 808355: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 808358: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
/* 80835f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 808362: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* 808369: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 80836c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 808370: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808373: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 80837a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 80837e: mov eax, esp */
  eax = esp;
/* 808380: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808382: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 808386: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808389: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80838c: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 808390: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 808394: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808397: mov edx, esp */
  edx = esp;
/* 808399: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80839b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
L_80839f: /* 80839f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8083a2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8083a5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8083a9: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8083ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8083b0: mov ecx, esp */
  ecx = esp;
/* 8083b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8083b4: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8083b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8083bb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8083be: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8083c2: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8083c8u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8083c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8083ca: mov esi, dword ptr [esp + 0x274] */
  esi = R32((uint32_t)(esp + 0x274u));
/* 8083d1: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 8083d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8083db: mov dword ptr [esp + 0xb0], edx */
  W32((uint32_t)(esp + 0xb0u), edx);
/* 8083e2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8083e5: mov dword ptr [esp + 0xb4], ecx */
  W32((uint32_t)(esp + 0xb4u), ecx);
/* 8083ec: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8083ef: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 8083f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8083f4: mov ecx, esi */
  ecx = esi;
/* 8083f6: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 8083fd: mov dword ptr [esp + 0x270], 5 */
  W32((uint32_t)(esp + 0x270u), 0x5u);
/* 808408: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x80840du); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 80840d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80840e: mov eax, esi */
  eax = esi;
/* 808410: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 808411: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 808412: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 808413: add esp, 0x260 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 808419: ret 4 */
  esp += 8; SPILL(); return;
}

void f_807f19(void) {
  LOAD_REGS();
  goto L_807f19;
L_807f15: /* 807f15: xor esi, esi */
  esi = 0;
/* 807f17: jmp 0x807f20 */
  goto L_807f20;
L_807f19: /* 807f19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_807f20: /* 807f20: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 807f24: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 807f27: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 807f2b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807f2e: fld dword ptr [esp + esi*4 + 0x64] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x64u)); FPUSH(v); }
/* 807f32: mov eax, esp */
  eax = esp;
/* 807f34: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 807f37: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 807f39: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 807f3c: mov ecx, ebx */
  ecx = ebx;
/* 807f3e: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 807f41: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 807f45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 807f46: call 0x6c7018 */
  esp -= 4; W32(esp, 0x807f4bu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 807f4b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 807f4d: mov ecx, edi */
  ecx = edi;
/* 807f4f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 807f51: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 807f54: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 807f57: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 807f5a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 807f5b: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 807f5e: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 807f61: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 807f64: jl 0x807f20 */
  if ((sf != of)) goto L_807f20;
L_807f66: /* 807f66: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 807f6a: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 807f6d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 807f6e: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 807f72: jne 0x807f15 */
  if (!zf) goto L_807f15;
L_807f74: /* 807f74: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 807f7a: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x807f80u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 807f80: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 807f86: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807f89: lea esi, [ebx + 0x194] */
  esi = (uint32_t)(ebx + 0x194u);
/* 807f8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 807f91: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 807f94: jp 0x80819f */
  if (pf) goto L_80819f;
L_807f9a: /* 807f9a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 807f9e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 807fa2: mov ecx, esp */
  ecx = esp;
/* 807fa4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 807fa6: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 807faa: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 807fad: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 807fb0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 807fb4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 807fb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807fbb: mov eax, esp */
  eax = esp;
/* 807fbd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 807fbf: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 807fc3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 807fc6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 807fc9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 807fcc: mov edx, esi */
  edx = esi;
/* 807fce: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 807fd0: mov eax, esp */
  eax = esp;
/* 807fd2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 807fd4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 807fd7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 807fda: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 807fdd: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 807fe1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 807fe4: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x807feau); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 807fea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 807fec: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* 807ff0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 807ff3: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 807ff7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 807ffa: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 807ffe: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 808001: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 808005: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 808009: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 80800d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808010: mov eax, esp */
  eax = esp;
/* 808012: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808014: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808018: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80801b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80801e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 808022: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 808026: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808029: mov edx, esp */
  edx = esp;
/* 80802b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80802d: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 808031: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 808034: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 808037: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80803a: mov ecx, esi */
  ecx = esi;
/* 80803c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80803e: mov edx, esp */
  edx = esp;
/* 808040: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 808042: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 808045: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 808048: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 80804b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 80804e: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808052: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x808058u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 808058: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80805a: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 80805e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 808061: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 808068: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 80806b: mov dword ptr [esp + 0x84], edx */
  W32((uint32_t)(esp + 0x84u), edx);
/* 808072: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 808075: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 808079: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80807c: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 808083: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 808087: mov ecx, esp */
  ecx = esp;
/* 808089: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80808b: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 80808f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 808092: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 808095: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 808099: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80809c: mov eax, esp */
  eax = esp;
/* 80809e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8080a0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8080a4: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8080a8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8080ab: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8080ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8080b1: mov edx, esi */
  edx = esi;
/* 8080b3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8080b5: mov eax, esp */
  eax = esp;
/* 8080b7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8080b9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8080bc: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8080bf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8080c2: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8080c6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8080c9: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8080cfu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8080cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8080d1: mov dword ptr [esp + 0x8c], ecx */
  W32((uint32_t)(esp + 0x8cu), ecx);
/* 8080d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8080db: mov dword ptr [esp + 0x90], edx */
  W32((uint32_t)(esp + 0x90u), edx);
/* 8080e2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8080e5: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 8080ec: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8080ef: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8080f3: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* 8080fa: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8080fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808101: mov eax, esp */
  eax = esp;
/* 808103: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808105: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 808109: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80810c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80810f: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 808113: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 808117: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80811a: mov edx, esp */
  edx = esp;
/* 80811c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80811e: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 808122: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 808125: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 808128: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80812a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 80812d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808130: mov ecx, esp */
  ecx = esp;
/* 808132: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 808134: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 808137: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 80813a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 80813d: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808141: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x808147u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 808147: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 808149: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 808150: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 808153: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
/* 80815a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 80815d: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* 808164: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 808167: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 80816b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80816e: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 808175: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 808179: mov eax, esp */
  eax = esp;
/* 80817b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80817d: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808181: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808184: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 808187: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 80818b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 80818f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808192: mov edx, esp */
  edx = esp;
/* 808194: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 808196: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 80819a: jmp 0x80839f */
  goto L_80839f;
L_80819f: /* 80819f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8081a3: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8081a7: mov eax, esp */
  eax = esp;
/* 8081a9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8081ab: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8081af: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8081b2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8081b5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8081b9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8081bd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8081c0: mov edx, esp */
  edx = esp;
/* 8081c2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8081c4: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8081c8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8081cb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8081ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8081d1: mov ecx, esi */
  ecx = esi;
/* 8081d3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8081d5: mov edx, esp */
  edx = esp;
/* 8081d7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8081d9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8081dc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8081df: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8081e2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8081e5: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8081e9: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8081efu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8081ef: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8081f1: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 8081f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8081f8: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 8081fc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8081ff: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 808203: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 808206: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 80820a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 80820e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 808212: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808215: mov ecx, esp */
  ecx = esp;
/* 808217: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 808219: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 80821d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 808220: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 808223: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 808227: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 80822b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80822e: mov eax, esp */
  eax = esp;
/* 808230: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808232: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 808236: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808239: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80823c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80823f: mov edx, esi */
  edx = esi;
/* 808241: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 808243: mov eax, esp */
  eax = esp;
/* 808245: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808247: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 80824a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 80824d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 808250: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808254: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 808257: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x80825du); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 80825d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80825f: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 808263: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 808266: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 80826d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 808270: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 808277: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 80827a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 80827e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808281: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 808288: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 80828c: mov eax, esp */
  eax = esp;
/* 80828e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808290: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808294: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808297: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80829a: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 80829e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8082a1: mov edx, esp */
  edx = esp;
/* 8082a3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8082a5: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8082a9: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8082ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8082b0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8082b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8082b6: mov ecx, esi */
  ecx = esi;
/* 8082b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8082ba: mov edx, esp */
  edx = esp;
/* 8082bc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8082be: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8082c1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8082c4: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8082c7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8082ca: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8082ce: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8082d4u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8082d4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8082d6: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 8082dd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8082e0: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 8082e7: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8082ea: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 8082f1: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8082f4: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 8082f8: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 8082ff: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 808303: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808306: mov ecx, esp */
  ecx = esp;
/* 808308: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80830a: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 80830e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 808311: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 808314: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 808318: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 80831c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80831f: mov eax, esp */
  eax = esp;
/* 808321: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808323: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 808327: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80832a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80832d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 80832f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 808332: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808335: mov edx, esp */
  edx = esp;
/* 808337: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 808339: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 80833c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80833f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 808343: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 808346: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x80834cu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 80834c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80834e: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 808355: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 808358: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
/* 80835f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 808362: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* 808369: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 80836c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 808370: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808373: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 80837a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 80837e: mov eax, esp */
  eax = esp;
/* 808380: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 808382: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 808386: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 808389: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80838c: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 808390: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 808394: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808397: mov edx, esp */
  edx = esp;
/* 808399: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80839b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
L_80839f: /* 80839f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8083a2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8083a5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8083a9: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8083ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8083b0: mov ecx, esp */
  ecx = esp;
/* 8083b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8083b4: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8083b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8083bb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8083be: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8083c2: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8083c8u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8083c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8083ca: mov esi, dword ptr [esp + 0x274] */
  esi = R32((uint32_t)(esp + 0x274u));
/* 8083d1: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 8083d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8083db: mov dword ptr [esp + 0xb0], edx */
  W32((uint32_t)(esp + 0xb0u), edx);
/* 8083e2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8083e5: mov dword ptr [esp + 0xb4], ecx */
  W32((uint32_t)(esp + 0xb4u), ecx);
/* 8083ec: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8083ef: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 8083f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8083f4: mov ecx, esi */
  ecx = esi;
/* 8083f6: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 8083fd: mov dword ptr [esp + 0x270], 5 */
  W32((uint32_t)(esp + 0x270u), 0x5u);
/* 808408: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x80840du); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 80840d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80840e: mov eax, esi */
  eax = esi;
/* 808410: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 808411: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 808412: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 808413: add esp, 0x260 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 808419: ret 4 */
  esp += 8; SPILL(); return;
}

void f_808580(void) {
  LOAD_REGS();
L_808580: /* 808580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 808581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 808582: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 808586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 808587: mov esi, ecx */
  esi = ecx;
/* 808589: call 0x6cbc85 */
  esp -= 4; W32(esp, 0x80858eu); SPILL(); f_6cbc85(); if (g_unwind) return; RELOAD();
/* 80858e: mov dword ptr [esi], 0xa12e20 */
  W32((uint32_t)(esi), 0xa12e20u);
/* 808594: add edi, 0x1d8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80859a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 80859c: lea eax, [esi + 0x1d8] */
  eax = (uint32_t)(esi + 0x1d8u);
/* 8085a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8085a4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8085a7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8085aa: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8085ad: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8085b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8085b1: mov eax, esi */
  eax = esi;
/* 8085b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8085b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8085d0(void) {
  LOAD_REGS();
L_8085d0: /* 8085d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8085d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8085d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 8085d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8085d7: mov esi, ecx */
  esi = ecx;
/* 8085d9: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x8085deu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 8085de: mov eax, dword ptr [edi + 0x1d4] */
  eax = R32((uint32_t)(edi + 0x1d4u));
/* 8085e4: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 8085ea: add edi, 0x1d8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8085f0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8085f2: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* 8085f8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8085fa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8085fd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 808600: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 808603: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 808604: mov eax, esi */
  eax = esi;
/* 808606: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 808609: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80860a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_808620(void) {
  LOAD_REGS();
L_808620: /* 808620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 808621: mov ebp, esp */
  ebp = esp;
/* 808623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 808625: push 0x9d24c6 */
  { uint32_t v = 0x9d24c6u; esp -= 4; W32(esp, v); }
/* 80862a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 808630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 808631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 808638: sub esp, 0x1cc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80863e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 808641: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 808644: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 808645: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 808646: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 808647: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80864a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80864b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80864e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80864f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 808650: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 808653: call 0x6cc3ec */
  esp -= 4; W32(esp, 0x808658u); SPILL(); f_6cc3ec(); if (g_unwind) return; RELOAD();
/* 808658: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80865b: mov dword ptr [ecx], 0xa12ef4 */
  W32((uint32_t)(ecx), 0xa12ef4u);
/* 808661: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 808664: mov ecx, dword ptr [eax + 0x1d4] */
  ecx = R32((uint32_t)(eax + 0x1d4u));
/* 80866a: lea edx, [ebp - 0x154] */
  edx = (uint32_t)(ebp + 0xfffffeacu);
/* 808670: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 808677: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 808678: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80867b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80867f: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x808685u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 808685: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 808688: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808689: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 80868c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 808692: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 808696: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x80869cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 80869c: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 80869f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8086a0: mov ecx, eax */
  ecx = eax;
/* 8086a2: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8086a8u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8086a8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8086ab: fchs  */
  ST0 = -ST0;
/* 8086ad: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 8086b4: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8086ba: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8086bd: fchs  */
  ST0 = -ST0;
/* 8086bf: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8086c5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8086c7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8086ca: fchs  */
  ST0 = -ST0;
/* 8086cc: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8086d2: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 8086d8: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 8086db: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 8086e1: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 8086e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8086e6: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 8086ec: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 8086ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8086f1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8086f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8086f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8086fc: je 0x808705 */
  if (zf) goto L_808705;
L_8086fe: /* 8086fe: mov dword ptr [ebp - 0x30], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xbf800000u);
L_808705: /* 808705: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 808708: mov eax, dword ptr [eax + 0x1d4] */
  eax = R32((uint32_t)(eax + 0x1d4u));
/* 80870e: fild dword ptr [eax + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 808711: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 808714: lea edx, [ebp - 0x154] */
  edx = (uint32_t)(ebp + 0xfffffeacu);
/* 80871a: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 808721: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 808727: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 80872e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 808731: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 808734: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 80873a: fild dword ptr [eax + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 80873d: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 808743: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 808749: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80874c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80874f: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 808752: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 808755: lea edi, [ebp - 0x40] */
  edi = (uint32_t)(ebp + 0xffffffc0u);
/* 808758: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80875a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 80875c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80875e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 808761: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808763: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 808766: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808768: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80876b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80876e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 808771: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808774: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 808777: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80877a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80877d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808780: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 808783: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808785: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808787: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808789: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80878b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80878d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808790: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 808793: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808796: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 808799: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80879c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80879f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8087a2: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8087a5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8087a7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8087a9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8087ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8087ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8087af: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8087b2: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8087b5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8087b8: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8087bb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8087be: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8087c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8087c4: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8087c7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8087c9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8087cb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8087cd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8087cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8087d1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8087d3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8087d5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8087d7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8087da: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8087dd: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8087e0: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8087e3: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8087e6: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8087e9: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 8087ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8087f2: mov dword ptr [ebp - 0xd0], ecx */
  W32((uint32_t)(ebp + 0xffffff30u), ecx);
/* 8087f8: mov ecx, dword ptr [eax + 0x1d4] */
  ecx = R32((uint32_t)(eax + 0x1d4u));
/* 8087fe: fild dword ptr [ecx + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 808801: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 808807: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 80880a: lea eax, [ebp - 0x154] */
  eax = (uint32_t)(ebp + 0xfffffeacu);
/* 808810: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 808816: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 80881d: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 808824: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 80882b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80882e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 808831: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 808834: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 808837: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80883a: lea edi, [ebp - 0x40] */
  edi = (uint32_t)(ebp + 0xffffffc0u);
/* 80883d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80883f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 808841: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808843: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 808846: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808848: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80884b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80884d: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 808850: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808853: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 808856: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808859: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80885c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80885f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 808862: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808865: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 808868: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80886a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80886c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80886e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808870: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808872: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808875: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 808878: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80887b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80887e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808881: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 808884: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808887: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80888a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80888c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80888e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808890: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808892: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808894: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808897: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80889a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80889d: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8088a0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8088a3: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8088a6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8088a9: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8088ac: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8088ae: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8088b0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8088b2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8088b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8088b6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8088b8: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8088ba: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8088bc: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8088bf: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8088c2: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8088c5: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8088c8: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8088cb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8088ce: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 8088d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8088d7: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 8088dd: mov edx, dword ptr [ecx + 0x1d4] */
  edx = R32((uint32_t)(ecx + 0x1d4u));
/* 8088e3: fild dword ptr [edx + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 8088e6: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 8088ec: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8088ef: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 8088f5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8088fb: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 808902: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 808909: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 808910: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 808913: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 808916: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 808919: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80891c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80891f: lea edi, [ebp - 0x40] */
  edi = (uint32_t)(ebp + 0xffffffc0u);
/* 808922: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808924: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 808926: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808928: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80892b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80892d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 808930: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808932: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 808935: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808938: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80893b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80893e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 808941: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808944: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 808947: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80894a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80894d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80894f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808951: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808953: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808955: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808957: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80895a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80895d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808960: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 808963: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808966: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 808969: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80896c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80896f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808971: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808973: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808975: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808979: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80897c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80897f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808982: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 808985: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808988: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80898b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80898e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 808991: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808993: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808995: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808997: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808999: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80899b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80899d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80899f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8089a1: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8089a4: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8089a7: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8089aa: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8089ad: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8089b0: fchs  */
  ST0 = -ST0;
/* 8089b2: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8089b5: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8089b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8089b9: mov dword ptr [ebp - 0xd8], ecx */
  W32((uint32_t)(ebp + 0xffffff28u), ecx);
/* 8089bf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8089c2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8089c5: mov dword ptr [ebp - 0xe0], edx */
  W32((uint32_t)(ebp + 0xffffff20u), edx);
/* 8089cb: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8089ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8089cf: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8089d2: mov dword ptr [ebp - 0xdc], eax */
  W32((uint32_t)(ebp + 0xffffff24u), eax);
/* 8089d8: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8089deu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8089de: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8089e1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8089e4: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8089e6: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 8089ec: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 8089f2: mov dword ptr [ebp - 0xb8], ecx */
  W32((uint32_t)(ebp + 0xffffff48u), ecx);
/* 8089f8: fchs  */
  ST0 = -ST0;
/* 8089fa: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 808a00: mov dword ptr [ebp - 0xbc], ebx */
  W32((uint32_t)(ebp + 0xffffff44u), ebx);
/* 808a06: fchs  */
  ST0 = -ST0;
/* 808a08: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 808a0b: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
/* 808a11: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808a14: fchs  */
  ST0 = -ST0;
/* 808a16: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 808a19: fmul dword ptr [ebp - 0xec] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff14u)));
/* 808a1f: mov ecx, esp */
  ecx = esp;
/* 808a21: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 808a23: mov edx, eax */
  edx = eax;
/* 808a25: fmul dword ptr [ebp - 0xac] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff54u)));
/* 808a2b: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 808a2d: mov esi, ecx */
  esi = ecx;
/* 808a2f: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 808a31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808a33: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 808a36: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 808a38: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 808a3b: fmul dword ptr [ebp - 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff50u)));
/* 808a41: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 808a44: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 808a47: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 808a4a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808a4c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 808a4f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 808a52: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 808a58: fdivr dword ptr [0xa110a4] */
  ST0 = (F32((uint32_t)(0xa110a4u))) / ST0;
/* 808a5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808a5f: lea edx, [ebp - 0xc8] */
  edx = (uint32_t)(ebp + 0xffffff38u);
/* 808a65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 808a66: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 808a6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 808a6d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 808a70: call 0x6cae57 */
  esp -= 4; W32(esp, 0x808a75u); SPILL(); f_6cae57(); if (g_unwind) return; RELOAD();
/* 808a75: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 808a7b: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 808a7e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 808a81: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 808a87: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 808a8d: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 808a90: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 808a93: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 808a99: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 808a9c: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 808a9f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 808aa4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 808aa6: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 808aac: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 808ab2: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 808ab4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 808ab7: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 808abd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 808abf: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 808ac9: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 808ad3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 808ad6: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 808ae0: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 808aea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 808aec: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 808af6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 808af8: mov dword ptr [ebp - 0x84], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x3f800000u);
/* 808b02: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 808b08: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 808b0f: fadd dword ptr [ebp - 0xd4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 808b15: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 808b1c: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 808b23: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 808b2a: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 808b30: mov dword ptr [ebp - 0x70], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x3f800000u);
/* 808b37: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 808b3a: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 808b41: fchs  */
  ST0 = -ST0;
/* 808b43: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 808b4a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 808b4d: fchs  */
  ST0 = -ST0;
/* 808b4f: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 808b55: fchs  */
  ST0 = -ST0;
/* 808b57: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 808b5a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 808b5d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 808b60: mov ecx, 0x10 */
  ecx = 0x10u;
/* 808b65: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 808b6b: lea edi, [ebp - 0x194] */
  edi = (uint32_t)(ebp + 0xfffffe6cu);
/* 808b71: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 808b73: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808b76: mov edi, esp */
  edi = esp;
/* 808b78: mov ecx, 0x10 */
  ecx = 0x10u;
/* 808b7d: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 808b83: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 808b85: lea ecx, [ebp - 0x1d8] */
  ecx = (uint32_t)(ebp + 0xfffffe28u);
/* 808b8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808b8c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 808b8f: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 808b92: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 808b96: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x808b9cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 808b9c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 808b9f: mov esi, eax */
  esi = eax;
/* 808ba1: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 808ba4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 808ba9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 808bab: lea ecx, [ebp - 0x1d8] */
  ecx = (uint32_t)(ebp + 0xfffffe28u);
/* 808bb1: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x808bb7u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 808bb7: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 808bbd: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 808bc1: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x808bc7u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 808bc7: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 808bcd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 808bd1: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x808bd7u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 808bd7: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 808bdd: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 808be3: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 808be9: mov dword ptr [ebp - 0x108], ebx */
  W32((uint32_t)(ebp + 0xfffffef8u), ebx);
/* 808bef: mov dword ptr [ebp - 0x104], edx */
  W32((uint32_t)(ebp + 0xfffffefcu), edx);
/* 808bf5: mov dword ptr [ebp - 0x100], eax */
  W32((uint32_t)(ebp + 0xffffff00u), eax);
/* 808bfb: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x808c01u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 808c01: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 808c04: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 808c07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808c08: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 808c0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 808c0f: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 808c15: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x808c1bu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 808c1b: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 808c21: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 808c27: mov edx, dword ptr [ebp - 0xd8] */
  edx = R32((uint32_t)(ebp + 0xffffff28u));
/* 808c2d: mov dword ptr [ebp - 0x110], ecx */
  W32((uint32_t)(ebp + 0xfffffef0u), ecx);
/* 808c33: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 808c39: mov dword ptr [ebp - 0x114], eax */
  W32((uint32_t)(ebp + 0xfffffeecu), eax);
/* 808c3f: mov dword ptr [ebp - 0x10c], edx */
  W32((uint32_t)(ebp + 0xfffffef4u), edx);
/* 808c45: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x808c4bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 808c4b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 808c4e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 808c51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 808c52: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 808c55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808c56: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 808c5c: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x808c62u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 808c62: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 808c68: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 808c6e: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 808c74: mov dword ptr [ebp - 0xe4], ecx */
  W32((uint32_t)(ebp + 0xffffff1cu), ecx);
/* 808c7a: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 808c80: mov dword ptr [ebp - 0xec], edx */
  W32((uint32_t)(ebp + 0xffffff14u), edx);
/* 808c86: mov dword ptr [ebp - 0xe8], eax */
  W32((uint32_t)(ebp + 0xffffff18u), eax);
/* 808c8c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x808c92u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 808c92: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 808c95: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 808c98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 808c99: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 808c9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 808c9d: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 808ca3: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x808ca9u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 808ca9: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 808caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808cb0: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 808cb3: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
/* 808cbd: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 808cc7: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 808cd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 808cd2: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 808cd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 808cd6: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 808cdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808cdd: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 808ce3: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x808ce9u); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 808ce9: lea edx, [ebp - 0x1d8] */
  edx = (uint32_t)(ebp + 0xfffffe28u);
/* 808cef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 808cf0: mov ecx, eax */
  ecx = eax;
/* 808cf2: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x808cf8u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 808cf8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 808cfb: mov esi, eax */
  esi = eax;
/* 808cfd: mov edi, esp */
  edi = esp;
/* 808cff: mov ecx, 0x10 */
  ecx = 0x10u;
/* 808d04: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 808d06: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 808d09: lea eax, [ebp - 0x194] */
  eax = (uint32_t)(ebp + 0xfffffe6cu);
/* 808d0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 808d10: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 808d13: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 808d17: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x808d1du); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 808d1d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 808d20: mov esi, eax */
  esi = eax;
/* 808d22: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 808d25: mov ecx, 0x10 */
  ecx = 0x10u;
/* 808d2a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 808d2c: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 808d32: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x808d38u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 808d38: lea ecx, [ebp - 0x1d8] */
  ecx = (uint32_t)(ebp + 0xfffffe28u);
/* 808d3e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 808d42: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x808d48u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 808d48: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 808d4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 808d4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 808d52: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 808d55: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x808d5bu); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 808d5b: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 808d5e: mov esi, eax */
  esi = eax;
/* 808d60: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 808d63: mov ecx, 0x10 */
  ecx = 0x10u;
/* 808d68: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 808d6a: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 808d70: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x808d76u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 808d76: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 808d79: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 808d7f: mov ecx, dword ptr [ebp - 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xffffff30u));
/* 808d85: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 808d88: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 808d8b: mov edx, dword ptr [ebp - 0xcc] */
  edx = R32((uint32_t)(ebp + 0xffffff34u));
/* 808d91: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 808d94: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 808d97: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 808d9a: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 808d9d: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 808da4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 808da7: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 808daa: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 808dad: lea edi, [ebp - 0x40] */
  edi = (uint32_t)(ebp + 0xffffffc0u);
/* 808db0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808db2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 808db4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808db6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 808db9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808dbb: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 808dbe: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808dc0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 808dc3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808dc6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 808dc9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808dcc: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 808dcf: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808dd2: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 808dd5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808dd8: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 808ddb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808ddd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808ddf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808de1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808de3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808de5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808de8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 808deb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808dee: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 808df1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808df4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 808df7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808dfa: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 808dfd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808dff: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808e01: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808e03: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808e05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808e07: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808e0a: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 808e0d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808e10: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 808e13: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808e16: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 808e19: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808e1c: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 808e1f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808e21: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808e23: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808e25: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808e27: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808e29: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808e2b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 808e2d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 808e2f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 808e32: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 808e35: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 808e38: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 808e3b: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 808e41: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 808e47: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 808e4a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 808e4d: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 808e53: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 808e56: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 808e59: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 808e5c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 808e5f: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 808e66: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 808e69: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 808e6c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 808e6f: lea edi, [ebp - 0xa8] */
  edi = (uint32_t)(ebp + 0xffffff58u);
/* 808e75: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808e77: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 808e79: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808e7b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 808e7e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808e80: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 808e83: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808e85: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 808e88: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808e8b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 808e8e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808e91: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 808e94: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808e97: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 808e9a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808e9d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 808ea0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808ea2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808ea4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808ea6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808ea8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808eaa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808ead: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 808eb0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808eb3: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 808eb6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808eb9: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 808ebc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808ebf: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 808ec2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808ec4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808ec6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808ec8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808eca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808ecc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808ecf: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 808ed2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808ed5: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 808ed8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808edb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 808ede: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808ee1: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 808ee4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808ee6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808ee8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808eea: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808eec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808eee: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808ef0: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 808ef2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 808ef4: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 808ef7: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 808efa: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 808efd: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 808f03: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 808f09: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 808f0f: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 808f12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 808f15: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 808f18: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 808f1e: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 808f21: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 808f24: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 808f27: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 808f2a: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 808f30: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* 808f36: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 808f39: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 808f3c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 808f3f: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 808f46: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 808f49: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 808f4c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 808f4f: lea edi, [ebp - 0xa8] */
  edi = (uint32_t)(ebp + 0xffffff58u);
/* 808f55: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808f57: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 808f59: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808f5b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 808f5e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808f60: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 808f63: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 808f65: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 808f68: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808f6b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 808f6e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808f71: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 808f74: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808f77: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 808f7a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 808f7d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 808f80: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808f82: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808f84: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808f86: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808f88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808f8a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808f8d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 808f90: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808f93: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 808f96: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808f99: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 808f9c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 808f9f: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 808fa2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808fa4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808fa6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808fa8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808faa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808fac: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808faf: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 808fb2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808fb5: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 808fb8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808fbb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 808fbe: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 808fc1: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 808fc4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808fc6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 808fc8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808fca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 808fcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 808fce: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 808fd0: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 808fd2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 808fd4: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 808fd7: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 808fda: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 808fdd: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 808fe3: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 808fe9: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 808fef: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 808ff2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 808ff5: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 808ff8: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 808ffb: mov eax, ebx */
  eax = ebx;
/* 808ffd: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 809000: mov ecx, dword ptr [ebp - 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xffffff48u));
/* 809006: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 809009: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 80900f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 809012: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 809015: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 809018: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 80901b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 809022: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 809025: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 809028: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80902b: lea edi, [ebp - 0xa8] */
  edi = (uint32_t)(ebp + 0xffffff58u);
/* 809031: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 809033: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 809035: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 809037: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80903a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80903c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80903f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 809041: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 809044: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 809047: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80904a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80904d: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 809050: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 809053: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 809056: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 809059: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80905c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80905e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 809060: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 809062: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 809064: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 809066: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 809069: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80906c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80906f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 809072: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 809075: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 809078: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80907b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80907e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 809080: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 809082: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 809084: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 809086: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 809088: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80908b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80908e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 809091: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 809094: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 809097: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80909a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80909d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8090a0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8090a2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8090a4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8090a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8090a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8090aa: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8090ac: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8090ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8090b0: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8090b3: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8090b6: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8090b9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8090bf: fdiv dword ptr [ebp - 0x38] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8090c2: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8090c5: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 8090cb: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8090d1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8090d6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8090d8: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 8090e2: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8090ec: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 8090f6: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 809100: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 80910a: mov dword ptr [ebp - 0x84], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x3f800000u);
/* 809114: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 80911b: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 809122: mov dword ptr [ebp - 0x70], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x3f800000u);
/* 809129: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 809130: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 809137: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 80913e: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 809145: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 80914c: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 80914f: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 809152: fchs  */
  ST0 = -ST0;
/* 809154: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 809157: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 80915a: fchs  */
  ST0 = -ST0;
/* 80915c: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 80915f: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 809162: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809165: mov edi, esp */
  edi = esp;
/* 809167: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80916c: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 809172: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 809174: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 80917a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80917b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80917e: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 809184: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 809188: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x80918eu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 80918e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 809191: mov esi, eax */
  esi = eax;
/* 809193: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 809199: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80919e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8091a0: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8091a6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8091acu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8091ac: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8091b2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8091b6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8091bcu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8091bc: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8091bf: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8091c5u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8091c5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8091c8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8091ce: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8091d1: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8091d4: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8091d7: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8091ddu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8091dd: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8091e0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8091e6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8091e9: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8091ec: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8091f6: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 809200: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 80920a: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 809214: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 80921a: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 809221: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 809228: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 80922f: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 809236: mov dword ptr [ebp - 0x70], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x3f800000u);
/* 80923d: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 809244: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 80924b: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 809252: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 809259: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 809260: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 809266: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809269: mov edi, esp */
  edi = esp;
/* 80926b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 809270: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 809276: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 809278: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80927b: lea eax, [ebp - 0x194] */
  eax = (uint32_t)(ebp + 0xfffffe6cu);
/* 809281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 809282: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 809288: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 80928c: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x809292u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 809292: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 809295: mov esi, eax */
  esi = eax;
/* 809297: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80929d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8092a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8092a4: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8092aa: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8092b0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8092b0: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8092b6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8092ba: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8092c0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8092c0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8092c3: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 8092cd: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8092d3: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8092dd: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 8092e7: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 8092f1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8092f7: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 809301: mov dword ptr [ebp - 0x84], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0xbf800000u);
/* 80930b: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 809312: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 809319: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 809320: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 809327: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 80932e: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 809335: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 80933c: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 809343: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 809345: fchs  */
  ST0 = -ST0;
/* 809347: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 809349: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 80934c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 80934f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 809354: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 80935a: lea edi, [ebp - 0x1d8] */
  edi = (uint32_t)(ebp + 0xfffffe28u);
/* 809360: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 809362: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809365: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 809369: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80936e: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 809374: mov edi, esp */
  edi = esp;
/* 809376: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 809378: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 80937e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80937f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 809382: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 809388: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x80938eu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 80938e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 809391: mov esi, eax */
  esi = eax;
/* 809393: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 809399: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80939e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8093a0: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8093a6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8093acu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8093ac: lea ecx, [ebp - 0x1d8] */
  ecx = (uint32_t)(ebp + 0xfffffe28u);
/* 8093b2: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8093b6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8093bcu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8093bc: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8093c2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8093c6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8093ccu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8093cc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8093cf: lea edx, [ebp - 0x194] */
  edx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8093d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8093d6: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8093dc: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x8093e2u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 8093e2: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8093e5: mov esi, eax */
  esi = eax;
/* 8093e7: add edi, 0xd4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8093ed: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8093f2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8093f4: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 8093fa: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x809400u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 809400: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 809403: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809406: mov edi, esp */
  edi = esp;
/* 809408: lea esi, [eax + 0x94] */
  esi = (uint32_t)(eax + 0x94u);
/* 80940e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 809413: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 809415: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 80941b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80941c: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 80941f: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x809425u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 809425: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 809428: mov esi, eax */
  esi = eax;
/* 80942a: add edi, 0x114 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 809430: mov ecx, 0x10 */
  ecx = 0x10u;
/* 809435: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 809437: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 80943d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x809443u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 809443: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 809446: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809449: mov edi, esp */
  edi = esp;
/* 80944b: lea esi, [eax + 0x54] */
  esi = (uint32_t)(eax + 0x54u);
/* 80944e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 809453: lea edx, [ebp - 0x194] */
  edx = (uint32_t)(ebp + 0xfffffe6cu);
/* 809459: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80945b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80945c: lea ecx, [eax + 0xd4] */
  ecx = (uint32_t)(eax + 0xd4u);
/* 809462: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x809468u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 809468: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 80946b: mov esi, eax */
  esi = eax;
/* 80946d: add edi, 0x154 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 809473: mov ecx, 0x10 */
  ecx = 0x10u;
/* 809478: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80947a: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 809480: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x809486u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 809486: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 809489: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 80948f: mov dword ptr [eax + 0x1c8], 0 */
  W32((uint32_t)(eax + 0x1c8u), 0x0u);
/* 809499: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80949d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8094a3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8094a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8094a6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8094a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8094aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8094ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8094b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8094b3: mov esp, ebp */
  esp = ebp;
/* 8094b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8094b6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8094b9(void) {
  LOAD_REGS();
L_8094b9: /* 8094b9: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 8094bf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8094c4: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 8094ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8094cb: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 8094d1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8094d6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8094d6(); return;
}

void f_8094d6(void) {
  LOAD_REGS();
L_8094d6: /* 8094d6: push 0xa12e60 */
  { uint32_t v = 0xa12e60u; esp -= 4; W32(esp, v); }
/* 8094db: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8094e0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8094e6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8094e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8094e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8094eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8094ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8094f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8094f2: guest_badaddr(0x8094f2); return;
}

void f_8098c0(void) {
  LOAD_REGS();
L_8098c0: /* 8098c0: sub esp, 0x284 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x284u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8098c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8098c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8098c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8098c9: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 8098cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8098ce: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 8098d5: call 0x6cc784 */
  esp -= 4; W32(esp, 0x8098dau); SPILL(); f_6cc784(); if (g_unwind) return; RELOAD();
/* 8098da: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 8098de: mov edi, 8 */
  edi = 0x8u;
L_8098e3: /* 8098e3: mov ecx, esi */
  ecx = esi;
/* 8098e5: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8098ebu); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8098eb: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8098ee: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8098ef: jne 0x8098e3 */
  if (!zf) goto L_8098e3;
L_8098f1: /* 8098f1: mov dword ptr [esp + 0x88], 0xbf800000 */
  W32((uint32_t)(esp + 0x88u), 0xbf800000u);
/* 8098fc: mov dword ptr [esp + 0x8c], 0x3f800000 */
  W32((uint32_t)(esp + 0x8cu), 0x3f800000u);
/* 809907: xor edi, edi */
  edi = 0;
/* 809909: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_809910: /* 809910: lea ebp, [esp + edi + 0x88] */
  ebp = (uint32_t)(esp + edi + 0x88u);
/* 809917: lea ebx, [esp + 0x88] */
  ebx = (uint32_t)(esp + 0x88u);
/* 80991e: mov dword ptr [esp + 0x84], 2 */
  W32((uint32_t)(esp + 0x84u), 0x2u);
/* 809929: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_809930: /* 809930: xor esi, esi */
  esi = 0;
L_809932: /* 809932: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 809934: je 0x80993e */
  if (zf) goto L_80993e;
L_809936: /* 809936: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 80993c: jmp 0x809944 */
  goto L_809944;
L_80993e: /* 80993e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_809944: /* 809944: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 809947: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 809949: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80994c: mov eax, esp */
  eax = esp;
/* 80994e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809950: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 809953: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 80995a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80995d: mov dword ptr [eax + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + 0xcu), 0x3f800000u);
/* 809964: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 80996b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80996c: call 0x6c7018 */
  esp -= 4; W32(esp, 0x809971u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 809971: lea ecx, [edi + esi] */
  ecx = (uint32_t)(edi + esi);
/* 809974: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 809977: lea edx, [esp + ecx*4 + 0x10] */
  edx = (uint32_t)(esp + ecx*4 + 0x10u);
/* 80997b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80997d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80997f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 809982: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809985: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 809988: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 809989: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80998c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80998f: jl 0x809932 */
  if ((sf != of)) goto L_809932;
L_809991: /* 809991: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 809998: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80999b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 80999e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 80999f: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 8099a6: jne 0x809930 */
  if (!zf) goto L_809930;
L_8099a8: /* 8099a8: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8099ab: jl 0x809910 */
  if ((sf != of)) goto L_809910;
L_8099b1: /* 8099b1: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 8099b8: add ecx, 0x114 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8099be: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x8099c4u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 8099c4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8099ca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8099cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8099cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8099d2: jp 0x809c8a */
  if (pf) goto L_809c8a;
L_8099d8: /* 8099d8: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8099dc: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 8099e0: mov ecx, esp */
  ecx = esp;
/* 8099e2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8099e4: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 8099e8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8099eb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8099ee: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8099f2: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8099f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8099f9: mov eax, esp */
  eax = esp;
/* 8099fb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8099fd: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 809a01: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809a04: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809a07: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 809a0b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 809a0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809a12: mov edx, esp */
  edx = esp;
/* 809a14: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809a16: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 809a1a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809a1d: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809a24: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809a27: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809a2du); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809a2d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809a2f: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 809a36: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809a39: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 809a40: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809a43: mov dword ptr [esp + 0x98], ecx */
  W32((uint32_t)(esp + 0x98u), ecx);
/* 809a4a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809a4d: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 809a51: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 809a58: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 809a5c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809a5f: mov eax, esp */
  eax = esp;
/* 809a61: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809a63: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 809a67: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809a6a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809a6d: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 809a71: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 809a75: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809a78: mov edx, esp */
  edx = esp;
/* 809a7a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809a7c: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 809a80: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809a83: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809a86: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 809a8a: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 809a8e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809a91: mov ecx, esp */
  ecx = esp;
/* 809a93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809a95: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 809a99: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809a9c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809a9f: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809aa6: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809aacu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809aac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809aae: mov dword ptr [esp + 0xa0], ecx */
  W32((uint32_t)(esp + 0xa0u), ecx);
/* 809ab5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809ab8: mov dword ptr [esp + 0xa4], edx */
  W32((uint32_t)(esp + 0xa4u), edx);
/* 809abf: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809ac2: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 809ac9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809acc: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 809ad0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809ad3: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 809ada: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 809ade: mov eax, esp */
  eax = esp;
/* 809ae0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809ae2: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 809ae6: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809ae9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809aec: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 809af0: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 809af4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809af7: mov edx, esp */
  edx = esp;
/* 809af9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809afb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809afe: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 809b05: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809b08: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 809b0c: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 809b10: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809b13: mov ecx, esp */
  ecx = esp;
/* 809b15: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809b17: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 809b1e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809b21: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809b24: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809b2b: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809b31u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809b31: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809b33: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 809b3a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809b3d: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 809b44: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809b47: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 809b4e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809b51: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 809b55: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 809b5c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 809b60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809b63: mov eax, esp */
  eax = esp;
/* 809b65: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809b67: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 809b6b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809b6e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809b71: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 809b75: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 809b79: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809b7c: mov edx, esp */
  edx = esp;
/* 809b7e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809b80: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 809b84: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809b87: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809b8a: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 809b8e: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 809b92: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809b95: mov ecx, esp */
  ecx = esp;
/* 809b97: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809b99: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 809b9d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809ba0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809ba3: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809baa: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809bb0u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809bb0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809bb2: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 809bb9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809bbc: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 809bc3: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809bc6: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 809bcd: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809bd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 809bd4: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 809bdb: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 809bdf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809be2: mov eax, esp */
  eax = esp;
/* 809be4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809be6: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 809bea: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809bed: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809bf0: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 809bf4: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 809bf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809bfb: mov edx, esp */
  edx = esp;
/* 809bfd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809bff: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 809c03: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809c06: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809c09: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 809c0d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 809c11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809c14: mov ecx, esp */
  ecx = esp;
/* 809c16: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809c18: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 809c1c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809c1f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809c22: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809c29: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809c2fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809c2f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809c31: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 809c38: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809c3b: mov dword ptr [esp + 0xd4], edx */
  W32((uint32_t)(esp + 0xd4u), edx);
/* 809c42: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809c45: mov dword ptr [esp + 0xd8], ecx */
  W32((uint32_t)(esp + 0xd8u), ecx);
/* 809c4c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809c4f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 809c53: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809c56: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 809c5d: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 809c61: mov eax, esp */
  eax = esp;
/* 809c63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809c65: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 809c69: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809c6c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809c6f: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 809c73: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 809c77: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809c7a: mov edx, esp */
  edx = esp;
/* 809c7c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809c7e: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 809c85: jmp 0x809f34 */
  goto L_809f34;
L_809c8a: /* 809c8a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 809c8e: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 809c92: mov eax, esp */
  eax = esp;
/* 809c94: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809c96: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 809c9a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809c9d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809ca0: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 809ca4: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 809ca8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809cab: mov edx, esp */
  edx = esp;
/* 809cad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809caf: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 809cb3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809cb6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809cb9: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 809cbd: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 809cc1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809cc4: mov ecx, esp */
  ecx = esp;
/* 809cc6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809cc8: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 809ccc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809ccf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809cd2: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809cd9: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809cdfu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809cdf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809ce1: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 809ce8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809ceb: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 809cf2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809cf5: mov dword ptr [esp + 0x98], ecx */
  W32((uint32_t)(esp + 0x98u), ecx);
/* 809cfc: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809cff: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 809d03: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 809d0a: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 809d0e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809d11: mov eax, esp */
  eax = esp;
/* 809d13: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809d15: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 809d19: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809d1c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809d1f: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 809d23: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 809d27: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809d2a: mov edx, esp */
  edx = esp;
/* 809d2c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809d2e: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 809d35: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809d38: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809d3b: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 809d3f: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 809d43: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809d46: mov ecx, esp */
  ecx = esp;
/* 809d48: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809d4a: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 809d4e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809d51: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809d54: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809d5b: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809d61u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809d61: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809d63: mov dword ptr [esp + 0xa0], ecx */
  W32((uint32_t)(esp + 0xa0u), ecx);
/* 809d6a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809d6d: mov dword ptr [esp + 0xa4], edx */
  W32((uint32_t)(esp + 0xa4u), edx);
/* 809d74: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809d77: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 809d7e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809d81: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 809d85: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809d88: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 809d8f: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 809d93: mov eax, esp */
  eax = esp;
/* 809d95: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809d97: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 809d9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809d9e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809da1: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 809da5: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 809da9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809dac: mov edx, esp */
  edx = esp;
/* 809dae: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809db0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809db3: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 809db7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809dba: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 809dbe: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 809dc2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809dc5: mov ecx, esp */
  ecx = esp;
/* 809dc7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809dc9: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 809dd0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809dd3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809dd6: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809ddd: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809de3u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809de3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809de5: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 809dec: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809def: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 809df6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809df9: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 809e00: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809e03: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 809e07: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 809e0e: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 809e12: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809e15: mov eax, esp */
  eax = esp;
/* 809e17: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809e19: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 809e1d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809e20: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809e23: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 809e27: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 809e2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809e2e: mov edx, esp */
  edx = esp;
/* 809e30: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809e32: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 809e36: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809e39: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809e3c: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 809e40: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 809e44: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809e47: mov ecx, esp */
  ecx = esp;
/* 809e49: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809e4b: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 809e4f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809e52: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809e55: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809e5c: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809e62u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809e62: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809e64: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 809e6b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809e6e: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 809e75: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809e78: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 809e7f: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809e82: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 809e86: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 809e8d: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 809e91: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809e94: mov eax, esp */
  eax = esp;
/* 809e96: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809e98: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 809e9c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809e9f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809ea2: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 809ea6: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 809eaa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809ead: mov edx, esp */
  edx = esp;
/* 809eaf: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809eb1: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 809eb5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809eb8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809ebb: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 809ebf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 809ec3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809ec6: mov ecx, esp */
  ecx = esp;
/* 809ec8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809eca: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 809ece: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809ed1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809ed4: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809edb: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809ee1u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809ee1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809ee3: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 809eea: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809eed: mov dword ptr [esp + 0xd4], edx */
  W32((uint32_t)(esp + 0xd4u), edx);
/* 809ef4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809ef7: mov dword ptr [esp + 0xd8], ecx */
  W32((uint32_t)(esp + 0xd8u), ecx);
/* 809efe: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809f01: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 809f05: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809f08: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 809f0f: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 809f13: mov eax, esp */
  eax = esp;
/* 809f15: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 809f17: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 809f1b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 809f1e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 809f21: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 809f25: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 809f29: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809f2c: mov edx, esp */
  edx = esp;
/* 809f2e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 809f30: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
L_809f34: /* 809f34: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 809f37: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 809f3a: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 809f3e: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 809f42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 809f45: mov ecx, esp */
  ecx = esp;
/* 809f47: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 809f49: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 809f4d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 809f50: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 809f53: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 809f5a: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x809f60u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 809f60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 809f62: mov esi, dword ptr [esp + 0x298] */
  esi = R32((uint32_t)(esp + 0x298u));
/* 809f69: mov dword ptr [esp + 0xe0], ecx */
  W32((uint32_t)(esp + 0xe0u), ecx);
/* 809f70: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 809f73: mov dword ptr [esp + 0xe4], edx */
  W32((uint32_t)(esp + 0xe4u), edx);
/* 809f7a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 809f7d: mov dword ptr [esp + 0xe8], ecx */
  W32((uint32_t)(esp + 0xe8u), ecx);
/* 809f84: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 809f87: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* 809f8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 809f8f: mov ecx, esi */
  ecx = esi;
/* 809f91: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 809f98: mov dword ptr [esp + 0x294], 6 */
  W32((uint32_t)(esp + 0x294u), 0x6u);
/* 809fa3: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x809fa8u); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 809fa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 809fa9: mov eax, esi */
  eax = esi;
/* 809fab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 809fac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 809fad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 809fae: add esp, 0x284 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x284u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 809fb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80a180(void) {
  LOAD_REGS();
L_80a180: /* 80a180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 80a184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a185: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a186: mov esi, ecx */
  esi = ecx;
/* 80a188: call 0x6cbc85 */
  esp -= 4; W32(esp, 0x80a18du); SPILL(); f_6cbc85(); if (g_unwind) return; RELOAD();
/* 80a18d: mov dword ptr [esi], 0xa12ef4 */
  W32((uint32_t)(esi), 0xa12ef4u);
/* 80a193: mov eax, esi */
  eax = esi;
/* 80a195: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a196: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80a1b0(void) {
  LOAD_REGS();
L_80a1b0: /* 80a1b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a1b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a1b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 80a1b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a1b7: mov esi, ecx */
  esi = ecx;
/* 80a1b9: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x80a1beu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 80a1be: mov eax, dword ptr [edi + 0x1d4] */
  eax = R32((uint32_t)(edi + 0x1d4u));
/* 80a1c4: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 80a1ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a1cb: mov eax, esi */
  eax = esi;
/* 80a1cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a1ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80a1f0(void) {
  LOAD_REGS();
L_80a1f0: /* 80a1f0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80a1f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a1f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80a1f5: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 80a1f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a1fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a1fb: mov edi, ecx */
  edi = ecx;
/* 80a1fd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 80a200: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 80a202: mov eax, ecx */
  eax = ecx;
/* 80a204: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 80a207: mov edx, ecx */
  edx = ecx;
/* 80a209: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 80a20b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 80a20f: xor eax, eax */
  eax = 0;
/* 80a211: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80a213: mov ebx, esi */
  ebx = esi;
/* 80a215: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 80a219: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 80a21d: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 80a221: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 80a225: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 80a229: jle 0x80a2a5 */
  if ((zf || sf != of)) goto L_80a2a5;
L_80a22b: /* 80a22b: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 80a22f: mov edx, esi */
  edx = esi;
/* 80a231: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 80a233: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_80a237: /* 80a237: xor edx, edx */
  edx = 0;
/* 80a239: xor ebx, ebx */
  ebx = 0;
/* 80a23b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80a23d: jle 0x80a27a */
  if ((zf || sf != of)) goto L_80a27a;
L_80a23f: /* 80a23f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 80a242: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 80a245: mov esi, eax */
  esi = eax;
L_80a247: /* 80a247: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 80a249: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a24b: jl 0x80a24f */
  if ((sf != of)) goto L_80a24f;
L_80a24d: /* 80a24d: mov edx, edi */
  edx = edi;
L_80a24f: /* 80a24f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80a252: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 80a253: jne 0x80a247 */
  if (!zf) goto L_80a247;
L_80a255: /* 80a255: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 80a259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80a260: /* 80a260: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 80a262: mov edi, edx */
  edi = edx;
/* 80a264: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 80a266: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 80a268: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80a26b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 80a26c: jne 0x80a260 */
  if (!zf) goto L_80a260;
L_80a26e: /* 80a26e: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 80a272: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 80a276: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_80a27a: /* 80a27a: cmp edx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a27e: jg 0x80a290 */
  if ((!zf && sf == of)) goto L_80a290;
L_80a280: /* 80a280: cmp ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a284: jge 0x80a290 */
  if ((sf == of)) goto L_80a290;
L_80a286: /* 80a286: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 80a28a: mov ecx, eax */
  ecx = eax;
/* 80a28c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_80a290: /* 80a290: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 80a294: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 80a298: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80a299: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a29b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 80a29f: jl 0x80a237 */
  if ((sf != of)) goto L_80a237;
L_80a2a1: /* 80a2a1: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_80a2a5: /* 80a2a5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 80a2a9: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 80a2ab: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a2ad: jg 0x80a2eb */
  if ((!zf && sf == of)) goto L_80a2eb;
L_80a2af: /* 80a2af: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a2b1: jg 0x80a2eb */
  if ((!zf && sf == of)) goto L_80a2eb;
L_80a2b3: /* 80a2b3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80a2b5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 80a2b9: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 80a2bb: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 80a2bf: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80a2c1: jle 0x80a2dc */
  if ((zf || sf != of)) goto L_80a2dc;
L_80a2c3: /* 80a2c3: lea esi, [ebx + eax] */
  esi = (uint32_t)(ebx + eax);
/* 80a2c6: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 80a2cd: mov edx, ebp */
  edx = ebp;
/* 80a2cf: nop  */
L_80a2d0: /* 80a2d0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 80a2d3: mov dword ptr [eax + ecx], esi */
  W32((uint32_t)(eax + ecx), esi);
/* 80a2d6: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80a2d9: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 80a2da: jne 0x80a2d0 */
  if (!zf) goto L_80a2d0;
L_80a2dc: /* 80a2dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a2dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a2de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80a2df: mov eax, 1 */
  eax = 0x1u;
/* 80a2e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80a2e5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a2e8: ret 0x10 */
  esp += 20; SPILL(); return;
L_80a2eb: /* 80a2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a2ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80a2ee: xor eax, eax */
  eax = 0;
/* 80a2f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80a2f1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a2f4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_80a350(void) {
  LOAD_REGS();
L_80a350: /* 80a350: mov ecx, dword ptr [0xb92230] */
  ecx = R32((uint32_t)(0xb92230u));
/* 80a356: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a358: je 0x80a3a9 */
  if (zf) goto L_80a3a9;
L_80a35a: /* 80a35a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 80a35e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a361: jge 0x80a3a9 */
  if ((sf == of)) goto L_80a3a9;
L_80a363: /* 80a363: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a364: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a365: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 80a369: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 80a36c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a36d: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 80a370: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a372: lea ecx, [esi + ecx + 0x10] */
  ecx = (uint32_t)(esi + ecx + 0x10u);
/* 80a376: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80a37cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80a37c: mov eax, dword ptr [0xb92230] */
  eax = R32((uint32_t)(0xb92230u));
/* 80a381: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a384: lea ecx, [esi + eax + 0x10] */
  ecx = (uint32_t)(esi + eax + 0x10u);
/* 80a388: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80a38eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80a38e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 80a392: mov edx, dword ptr [0xb92230] */
  edx = R32((uint32_t)(0xb92230u));
/* 80a398: mov eax, dword ptr [esi + edx + 0x10] */
  eax = R32((uint32_t)(esi + edx + 0x10u));
/* 80a39c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a39d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80a39e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a39f: call 0x6ca83f */
  esp -= 4; W32(esp, 0x80a3a4u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 80a3a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a3a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a3a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_80a3a9: /* 80a3a9: xor eax, eax */
  eax = 0;
/* 80a3ab: ret  */
  esp += 4; SPILL(); return;
}

void f_80a3d0(void) {
  LOAD_REGS();
L_80a3d0: /* 80a3d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80a3d1: mov ebp, esp */
  ebp = esp;
/* 80a3d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80a3d5: push 0x9d24f0 */
  { uint32_t v = 0x9d24f0u; esp -= 4; W32(esp, v); }
/* 80a3da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80a3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a3e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80a3e8: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80a3eb: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 80a3f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a3f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a3f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a3f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80a3f6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80a3f9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80a3fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80a3fd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a3ff: xor edi, edi */
  edi = 0;
/* 80a401: push 0xae1168 */
  { uint32_t v = 0xae1168u; esp -= 4; W32(esp, v); }
/* 80a406: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 80a409: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80a40cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80a40c: /* 80a40c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80a40f: cmp edi, dword ptr [eax + 0xe8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a415: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 80a418: jge 0x80a628 */
  if ((sf == of)) goto L_80a628;
L_80a41e: /* 80a41e: mov edx, dword ptr [eax + 0xe4] */
  edx = R32((uint32_t)(eax + 0xe4u));
/* 80a424: mov esi, edi */
  esi = edi;
/* 80a426: imul esi, esi, 0x6c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x6cu);
  esi = (uint32_t)r;
  }
/* 80a429: mov eax, dword ptr [esi + edx + 0x5c] */
  eax = R32((uint32_t)(esi + edx + 0x5cu));
/* 80a42d: mov ecx, dword ptr [esi + edx + 0x68] */
  ecx = R32((uint32_t)(esi + edx + 0x68u));
/* 80a431: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80a433: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80a435: je 0x80a622 */
  if (zf) goto L_80a622;
L_80a43b: /* 80a43b: mov ecx, dword ptr [0xb19088] */
  ecx = R32((uint32_t)(0xb19088u));
/* 80a441: cmp dword ptr [ecx + 0x1c], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80a445: jne 0x80a466 */
  if (!zf) goto L_80a466;
L_80a447: /* 80a447: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a449: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 80a44c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a44e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80a454u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80a454: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a456: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80a459: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a45b: mov ecx, esi */
  ecx = esi;
/* 80a45d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80a463u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80a463: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a464: jmp 0x80a40c */
  goto L_80a40c;
L_80a466: /* 80a466: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 80a46c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80a46e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80a470: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 80a475: push 0x100000 */
  { uint32_t v = 0x100000u; esp -= 4; W32(esp, v); }
/* 80a47a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x80a47cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a47c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a47e: je 0x80a49e */
  if (zf) goto L_80a49e;
L_80a480: /* 80a480: mov ebx, 0x40000 */
  ebx = 0x40000u;
/* 80a485: mov edx, 4 */
  edx = 0x4u;
/* 80a48a: mov ecx, eax */
  ecx = eax;
/* 80a48c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80a490: /* 80a490: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 80a491: js 0x80a497 */
  if (sf) goto L_80a497;
L_80a493: /* 80a493: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80a495: jmp 0x80a490 */
  goto L_80a490;
L_80a497: /* 80a497: mov ebx, eax */
  ebx = eax;
/* 80a499: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 80a49c: jmp 0x80a4a8 */
  goto L_80a4a8;
L_80a49e: /* 80a49e: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 80a4a5: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_80a4a8: /* 80a4a8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80a4ab: mov ecx, dword ptr [ecx + 0xe8] */
  ecx = R32((uint32_t)(ecx + 0xe8u));
/* 80a4b1: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 80a4b7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 80a4b9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80a4bb: push 0xae119c */
  { uint32_t v = 0xae119cu; esp -= 4; W32(esp, v); }
/* 80a4c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80a4c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a4c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a4c3: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x80a4c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a4c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a4c9: xor edi, edi */
  edi = 0;
/* 80a4cb: jmp 0x80a4d0 */
  goto L_80a4d0;
L_80a4d0: /* 80a4d0: cmp edi, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a4d3: jge 0x80a50f */
  if ((sf == of)) goto L_80a50f;
L_80a4d5: /* 80a4d5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 80a4d8: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 80a4db: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80a4de: imul ecx, ecx, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0xa4u);
  ecx = (uint32_t)r;
  }
/* 80a4e4: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 80a4ea: mov edx, dword ptr [ecx + eax + 0x14] */
  edx = R32((uint32_t)(ecx + eax + 0x14u));
/* 80a4ee: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80a4f0: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 80a4f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a4f5: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 80a4f8: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 80a4fa: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80a4fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80a4fe: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 80a503: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 80a506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a509: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x80a50cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a50c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a50d: jmp 0x80a4d0 */
  goto L_80a4d0;
L_80a50f: /* 80a50f: mov eax, dword ptr [0xb19088] */
  eax = R32((uint32_t)(0xb19088u));
/* 80a514: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 80a517: xor ecx, ecx */
  ecx = 0;
/* 80a519: cmp edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80a51c: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 80a51f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 80a522: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 80a525: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 80a528: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a52a: je 0x80a54e */
  if (zf) goto L_80a54e;
L_80a52c: /* 80a52c: mov edx, dword ptr [0xcfa3b0] */
  edx = R32((uint32_t)(0xcfa3b0u));
/* 80a532: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 80a534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a535: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a536: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a53b: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a540: push 0xae11d0 */
  { uint32_t v = 0xae11d0u; esp -= 4; W32(esp, v); }
/* 80a545: call dword ptr [0xcfa7ac] */
  esp -= 4; W32(esp, 0x80a54bu); SPILL(); f_4e3620(); if (g_unwind) return; /* Core!?appCreateBitmap@@YAHPBGHHPAKPAVFFileManager@@@Z */ RELOAD();
/* 80a54b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80a54e: /* 80a54e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 80a551: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 80a554: mov ecx, 0x38 */
  ecx = 0x38u;
/* 80a559: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80a55c: xor eax, eax */
  eax = 0;
/* 80a55e: mov ebx, ecx */
  ebx = ecx;
/* 80a560: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 80a563: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 80a566: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 80a568: mov ecx, ebx */
  ecx = ebx;
/* 80a56a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 80a56c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80a56f: mov byte ptr [ebp - 0x64], 0 */
  W8((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 80a573: mov word ptr [ebp - 0x62], 0x1e */
  W16((uint32_t)(ebp + 0xffffff9eu), 0x1eu);
/* 80a579: mov word ptr [ebp - 0x5e], 0x86 */
  W16((uint32_t)(ebp + 0xffffffa2u), 0x86u);
/* 80a57f: mov ebx, dword ptr [eax + 0x20] */
  ebx = R32((uint32_t)(eax + 0x20u));
/* 80a582: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a584: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80a587: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a58a: mov byte ptr [ebp - 0x3c], dl */
  W8((uint32_t)(ebp + 0xffffffc4u), (edx & 0xffu));
/* 80a58d: mov edi, dword ptr [eax + 0x20] */
  edi = R32((uint32_t)(eax + 0x20u));
/* 80a590: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a592: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80a595: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a598: mov byte ptr [ebp - 0x3b], cl */
  W8((uint32_t)(ebp + 0xffffffc5u), (ecx & 0xffu));
/* 80a59b: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 80a59e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a5a0: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a5a3: push 0x80a350 */
  { uint32_t v = 0x80a350u; esp -= 4; W32(esp, v); }
/* 80a5a8: xor eax, eax */
  eax = 0;
/* 80a5aa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80a5ac: mov byte ptr [ebp - 0x3a], dl */
  W8((uint32_t)(ebp + 0xffffffc6u), (edx & 0xffu));
/* 80a5af: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a5b1: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 80a5b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80a5b5: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a5b8: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 80a5bd: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a5c2: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 80a5c5: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a5ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a5cb: mov word ptr [ebp - 0x38], 0x50 */
  W16((uint32_t)(ebp + 0xffffffc8u), 0x50u);
/* 80a5d1: lea eax, [eax + eax + 0xa] */
  eax = (uint32_t)(eax + eax + 0xau);
/* 80a5d5: mov word ptr [ebp - 0x36], ax */
  W16((uint32_t)(ebp + 0xffffffcau), (eax & 0xffffu));
/* 80a5d9: mov dword ptr [0xb92230], ecx */
  W32((uint32_t)(0xb92230u), ecx);
/* 80a5df: call 0x985990 */
  esp -= 4; W32(esp, 0x80a5e4u); SPILL(); f_985990(); if (g_unwind) return; RELOAD();
/* 80a5e4: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 80a5e7: mov eax, 0x200 */
  eax = 0x200u;
/* 80a5ec: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 80a5ef: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 80a5f2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a5f5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a5f7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a5fa: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 80a5fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a5fe: mov dword ptr [0xb92230], 0 */
  W32((uint32_t)(0xb92230u), 0x0u);
/* 80a608: lea eax, [eax*4 + 3] */
  eax = (uint32_t)(eax*4 + 0x3u);
/* 80a60f: mov byte ptr [esi + 0x48], al */
  W8((uint32_t)(esi + 0x48u), (eax & 0xffu));
/* 80a612: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 80a618: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80a61a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80a61c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80a61fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a61f: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_80a622: /* 80a622: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a623: jmp 0x80a40c */
  goto L_80a40c;
L_80a628: /* 80a628: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80a62e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80a630: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80a632: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x80a635u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a635: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80a638: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a639: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a63a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80a641: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80a642: mov esp, ebp */
  esp = ebp;
/* 80a644: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80a645: ret  */
  esp += 4; SPILL(); return;
}

void f_80a4cd(void) {
  LOAD_REGS();
  goto L_80a4cd;
L_80a40c: /* 80a40c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80a40f: cmp edi, dword ptr [eax + 0xe8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a415: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 80a418: jge 0x80a628 */
  if ((sf == of)) goto L_80a628;
L_80a41e: /* 80a41e: mov edx, dword ptr [eax + 0xe4] */
  edx = R32((uint32_t)(eax + 0xe4u));
/* 80a424: mov esi, edi */
  esi = edi;
/* 80a426: imul esi, esi, 0x6c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x6cu);
  esi = (uint32_t)r;
  }
/* 80a429: mov eax, dword ptr [esi + edx + 0x5c] */
  eax = R32((uint32_t)(esi + edx + 0x5cu));
/* 80a42d: mov ecx, dword ptr [esi + edx + 0x68] */
  ecx = R32((uint32_t)(esi + edx + 0x68u));
/* 80a431: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80a433: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80a435: je 0x80a622 */
  if (zf) goto L_80a622;
L_80a43b: /* 80a43b: mov ecx, dword ptr [0xb19088] */
  ecx = R32((uint32_t)(0xb19088u));
/* 80a441: cmp dword ptr [ecx + 0x1c], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80a445: jne 0x80a466 */
  if (!zf) goto L_80a466;
L_80a447: /* 80a447: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a449: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 80a44c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a44e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80a454u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80a454: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a456: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80a459: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a45b: mov ecx, esi */
  ecx = esi;
/* 80a45d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80a463u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80a463: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a464: jmp 0x80a40c */
  goto L_80a40c;
L_80a466: /* 80a466: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 80a46c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80a46e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80a470: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 80a475: push 0x100000 */
  { uint32_t v = 0x100000u; esp -= 4; W32(esp, v); }
/* 80a47a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x80a47cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a47c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a47e: je 0x80a49e */
  if (zf) goto L_80a49e;
L_80a480: /* 80a480: mov ebx, 0x40000 */
  ebx = 0x40000u;
/* 80a485: mov edx, 4 */
  edx = 0x4u;
/* 80a48a: mov ecx, eax */
  ecx = eax;
/* 80a48c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80a490: /* 80a490: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 80a491: js 0x80a497 */
  if (sf) goto L_80a497;
L_80a493: /* 80a493: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80a495: jmp 0x80a490 */
  goto L_80a490;
L_80a497: /* 80a497: mov ebx, eax */
  ebx = eax;
/* 80a499: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 80a49c: jmp 0x80a4a8 */
  goto L_80a4a8;
L_80a49e: /* 80a49e: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 80a4a5: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_80a4a8: /* 80a4a8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80a4ab: mov ecx, dword ptr [ecx + 0xe8] */
  ecx = R32((uint32_t)(ecx + 0xe8u));
/* 80a4b1: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 80a4b7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 80a4b9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80a4bb: push 0xae119c */
  { uint32_t v = 0xae119cu; esp -= 4; W32(esp, v); }
/* 80a4c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80a4c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a4c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a4c3: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x80a4c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a4c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a4c9: xor edi, edi */
  edi = 0;
/* 80a4cb: jmp 0x80a4d0 */
  goto L_80a4d0;
L_80a4cd: /* 80a4cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80a4d0: /* 80a4d0: cmp edi, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a4d3: jge 0x80a50f */
  if ((sf == of)) goto L_80a50f;
L_80a4d5: /* 80a4d5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 80a4d8: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 80a4db: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80a4de: imul ecx, ecx, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0xa4u);
  ecx = (uint32_t)r;
  }
/* 80a4e4: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 80a4ea: mov edx, dword ptr [ecx + eax + 0x14] */
  edx = R32((uint32_t)(ecx + eax + 0x14u));
/* 80a4ee: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80a4f0: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 80a4f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a4f5: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 80a4f8: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 80a4fa: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80a4fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80a4fe: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 80a503: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 80a506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a509: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x80a50cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a50c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a50d: jmp 0x80a4d0 */
  goto L_80a4d0;
L_80a50f: /* 80a50f: mov eax, dword ptr [0xb19088] */
  eax = R32((uint32_t)(0xb19088u));
/* 80a514: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 80a517: xor ecx, ecx */
  ecx = 0;
/* 80a519: cmp edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80a51c: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 80a51f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 80a522: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 80a525: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 80a528: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a52a: je 0x80a54e */
  if (zf) goto L_80a54e;
L_80a52c: /* 80a52c: mov edx, dword ptr [0xcfa3b0] */
  edx = R32((uint32_t)(0xcfa3b0u));
/* 80a532: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 80a534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a535: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a536: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a53b: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a540: push 0xae11d0 */
  { uint32_t v = 0xae11d0u; esp -= 4; W32(esp, v); }
/* 80a545: call dword ptr [0xcfa7ac] */
  esp -= 4; W32(esp, 0x80a54bu); SPILL(); f_4e3620(); if (g_unwind) return; /* Core!?appCreateBitmap@@YAHPBGHHPAKPAVFFileManager@@@Z */ RELOAD();
/* 80a54b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80a54e: /* 80a54e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 80a551: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 80a554: mov ecx, 0x38 */
  ecx = 0x38u;
/* 80a559: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80a55c: xor eax, eax */
  eax = 0;
/* 80a55e: mov ebx, ecx */
  ebx = ecx;
/* 80a560: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 80a563: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 80a566: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 80a568: mov ecx, ebx */
  ecx = ebx;
/* 80a56a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 80a56c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80a56f: mov byte ptr [ebp - 0x64], 0 */
  W8((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 80a573: mov word ptr [ebp - 0x62], 0x1e */
  W16((uint32_t)(ebp + 0xffffff9eu), 0x1eu);
/* 80a579: mov word ptr [ebp - 0x5e], 0x86 */
  W16((uint32_t)(ebp + 0xffffffa2u), 0x86u);
/* 80a57f: mov ebx, dword ptr [eax + 0x20] */
  ebx = R32((uint32_t)(eax + 0x20u));
/* 80a582: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a584: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80a587: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a58a: mov byte ptr [ebp - 0x3c], dl */
  W8((uint32_t)(ebp + 0xffffffc4u), (edx & 0xffu));
/* 80a58d: mov edi, dword ptr [eax + 0x20] */
  edi = R32((uint32_t)(eax + 0x20u));
/* 80a590: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a592: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80a595: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a598: mov byte ptr [ebp - 0x3b], cl */
  W8((uint32_t)(ebp + 0xffffffc5u), (ecx & 0xffu));
/* 80a59b: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 80a59e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a5a0: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a5a3: push 0x80a350 */
  { uint32_t v = 0x80a350u; esp -= 4; W32(esp, v); }
/* 80a5a8: xor eax, eax */
  eax = 0;
/* 80a5aa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80a5ac: mov byte ptr [ebp - 0x3a], dl */
  W8((uint32_t)(ebp + 0xffffffc6u), (edx & 0xffu));
/* 80a5af: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a5b1: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 80a5b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80a5b5: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a5b8: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 80a5bd: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a5c2: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 80a5c5: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80a5ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a5cb: mov word ptr [ebp - 0x38], 0x50 */
  W16((uint32_t)(ebp + 0xffffffc8u), 0x50u);
/* 80a5d1: lea eax, [eax + eax + 0xa] */
  eax = (uint32_t)(eax + eax + 0xau);
/* 80a5d5: mov word ptr [ebp - 0x36], ax */
  W16((uint32_t)(ebp + 0xffffffcau), (eax & 0xffffu));
/* 80a5d9: mov dword ptr [0xb92230], ecx */
  W32((uint32_t)(0xb92230u), ecx);
/* 80a5df: call 0x985990 */
  esp -= 4; W32(esp, 0x80a5e4u); SPILL(); f_985990(); if (g_unwind) return; RELOAD();
/* 80a5e4: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 80a5e7: mov eax, 0x200 */
  eax = 0x200u;
/* 80a5ec: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 80a5ef: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 80a5f2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a5f5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a5f7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80a5fa: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 80a5fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a5fe: mov dword ptr [0xb92230], 0 */
  W32((uint32_t)(0xb92230u), 0x0u);
/* 80a608: lea eax, [eax*4 + 3] */
  eax = (uint32_t)(eax*4 + 0x3u);
/* 80a60f: mov byte ptr [esi + 0x48], al */
  W8((uint32_t)(esi + 0x48u), (eax & 0xffu));
/* 80a612: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 80a618: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80a61a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80a61c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80a61fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a61f: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_80a622: /* 80a622: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a623: jmp 0x80a40c */
  goto L_80a40c;
L_80a628: /* 80a628: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80a62e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80a630: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80a632: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x80a635u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a635: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80a638: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a639: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a63a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80a641: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80a642: mov esp, ebp */
  esp = ebp;
/* 80a644: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80a645: ret  */
  esp += 4; SPILL(); return;
}

void f_80a646(void) {
  LOAD_REGS();
L_80a646: /* 80a646: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80a649: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80a64e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 80a651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80a652: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 80a655: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80a65au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80a65a(); return;
}

void f_80a65a(void) {
  LOAD_REGS();
L_80a65a: /* 80a65a: push 0xa12f34 */
  { uint32_t v = 0xa12f34u; esp -= 4; W32(esp, v); }
/* 80a65f: push 0xae11d8 */
  { uint32_t v = 0xae11d8u; esp -= 4; W32(esp, v); }
/* 80a664: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80a66au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80a66a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a66d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a66f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80a671: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80a676u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80a676: guest_badaddr(0x80a676); return;
}

void f_80a730(void) {
  LOAD_REGS();
L_80a730: /* 80a730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 80a734: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a735: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80a737: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80a73du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80a73d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80a750(void) {
  LOAD_REGS();
L_80a750: /* 80a750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a751: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80a753: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a755: mov esi, ecx */
  esi = ecx;
/* 80a757: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80a75du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80a75d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80a75f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 80a763: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 80a765: mov dword ptr [edx + eax*8], esi */
  W32((uint32_t)(edx + eax*8), esi);
/* 80a768: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 80a76b: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 80a76f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a770: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80a790(void) {
  LOAD_REGS();
L_80a790: /* 80a790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a791: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80a792: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 80a798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a799: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a79a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 80a79e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80a7a0: mov esi, ecx */
  esi = ecx;
/* 80a7a2: jge 0x80a7b8 */
  if ((sf == of)) goto L_80a7b8;
L_80a7a4: /* 80a7a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 80a7a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80a7ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 80a7b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x80a7b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a7b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80a7b8: /* 80a7b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a7bb: jle 0x80a7d1 */
  if ((zf || sf != of)) goto L_80a7d1;
L_80a7bd: /* 80a7bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 80a7c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80a7c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 80a7cc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x80a7ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a7ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80a7d1: /* 80a7d1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 80a7d5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80a7d8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 80a7db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80a7dd: jle 0x80a7f3 */
  if ((zf || sf != of)) goto L_80a7f3;
L_80a7df: /* 80a7df: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 80a7e4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80a7e9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 80a7ee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x80a7f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80a7f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80a7f3: /* 80a7f3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80a7f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a7f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a7f7: mov ecx, esi */
  ecx = esi;
/* 80a7f9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x80a7ffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 80a7ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a801: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80a802: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80a803: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80a830(void) {
  LOAD_REGS();
L_80a830: /* 80a830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a831: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 80a835: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a837: je 0x80a84e */
  if (zf) goto L_80a84e;
L_80a839: /* 80a839: push 0xb5f348 */
  { uint32_t v = 0xb5f348u; esp -= 4; W32(esp, v); }
/* 80a83e: mov ecx, esi */
  ecx = esi;
/* 80a840: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x80a846u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 80a846: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a848: je 0x80a84e */
  if (zf) goto L_80a84e;
L_80a84a: /* 80a84a: mov eax, esi */
  eax = esi;
/* 80a84c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a84d: ret  */
  esp += 4; SPILL(); return;
L_80a84e: /* 80a84e: xor eax, eax */
  eax = 0;
/* 80a850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a851: ret  */
  esp += 4; SPILL(); return;
}

void f_80a870(void) {
  LOAD_REGS();
L_80a870: /* 80a870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a871: mov esi, ecx */
  esi = ecx;
/* 80a873: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 80a876: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80a87cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80a87c: mov eax, esi */
  eax = esi;
/* 80a87e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a87f: ret  */
  esp += 4; SPILL(); return;
}

void f_80a890(void) {
  LOAD_REGS();
L_80a890: /* 80a890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80a892: push 0x9d250b */
  { uint32_t v = 0x9d250bu; esp -= 4; W32(esp, v); }
/* 80a897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80a89d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a89e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80a8a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80a8a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a8a7: mov esi, ecx */
  esi = ecx;
/* 80a8a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a8aa: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 80a8ad: mov ecx, edi */
  ecx = edi;
/* 80a8af: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 80a8b3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80a8b9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80a8b9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 80a8bd: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 80a8bf: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 80a8c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a8c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80a8c6: mov ecx, edi */
  ecx = edi;
/* 80a8c8: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 80a8d0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 80a8d3: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x80a8d9u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 80a8d9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 80a8dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80a8de: mov eax, esi */
  eax = esi;
/* 80a8e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a8e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80a8e8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80a8eb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80a910(void) {
  LOAD_REGS();
L_80a910: /* 80a910: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80a913: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_80a930(void) {
  LOAD_REGS();
L_80a930: /* 80a930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 80a934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a935: mov esi, ecx */
  esi = ecx;
/* 80a937: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80a939: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 80a93b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80a93e: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80a941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a942: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 80a945: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 80a948: call 0x6c5eac */
  esp -= 4; W32(esp, 0x80a94du); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 80a94d: mov eax, esi */
  eax = esi;
/* 80a94f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80a950: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80a970(void) {
  LOAD_REGS();
L_80a970: /* 80a970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80a971: mov ebp, esp */
  ebp = esp;
/* 80a973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80a975: push 0x9d2520 */
  { uint32_t v = 0x9d2520u; esp -= 4; W32(esp, v); }
/* 80a97a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80a980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80a981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80a988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80a98b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80a98e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 80a991: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 80a997: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 80a99a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80a99b: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 80a99e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 80a9a1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80a9a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80a9a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80a9a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80a9a9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80a9b0: je 0x80aa1f */
  if (zf) goto L_80aa1f;
L_80a9b2: /* 80a9b2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 80a9b5: mov edi, eax */
  edi = eax;
/* 80a9b7: jmp 0x80a9c0 */
  goto L_80a9c0;
L_80a9c0: /* 80a9c0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80a9c3: mov ecx, dword ptr [eax + 0xcc] */
  ecx = R32((uint32_t)(eax + 0xccu));
/* 80a9c9: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 80a9cc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a9ce: je 0x80aa1f */
  if (zf) goto L_80aa1f;
L_80a9d0: /* 80a9d0: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 80a9d6: test ah, 0xa */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80a9d9: jne 0x80a9ec */
  if (!zf) goto L_80a9ec;
L_80a9db: /* 80a9db: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80a9dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a9df: mov ecx, ebx */
  ecx = ebx;
/* 80a9e1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80a9e7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80a9e7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80a9e9: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_80a9ec: /* 80a9ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a9ed: jmp 0x80a9c0 */
  goto L_80a9c0;
L_80aa1f: /* 80aa1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80aa22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80aa23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80aa24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80aa2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80aa2c: mov esp, ebp */
  esp = ebp;
/* 80aa2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80aa2f: ret  */
  esp += 4; SPILL(); return;
}

void f_80a9b9(void) {
  LOAD_REGS();
L_80a9b9: /* 80a9b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80a9c0: /* 80a9c0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80a9c3: mov ecx, dword ptr [eax + 0xcc] */
  ecx = R32((uint32_t)(eax + 0xccu));
/* 80a9c9: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 80a9cc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80a9ce: je 0x80aa1f */
  if (zf) goto L_80aa1f;
L_80a9d0: /* 80a9d0: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 80a9d6: test ah, 0xa */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80a9d9: jne 0x80a9ec */
  if (!zf) goto L_80a9ec;
L_80a9db: /* 80a9db: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80a9dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80a9df: mov ecx, ebx */
  ecx = ebx;
/* 80a9e1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80a9e7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80a9e7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80a9e9: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_80a9ec: /* 80a9ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80a9ed: jmp 0x80a9c0 */
  goto L_80a9c0;
L_80aa1f: /* 80aa1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80aa22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80aa23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80aa24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80aa2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80aa2c: mov esp, ebp */
  esp = ebp;
/* 80aa2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80aa2f: ret  */
  esp += 4; SPILL(); return;
}

void f_80a9ef(void) {
  LOAD_REGS();
L_80a9ef: /* 80a9ef: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80a9f2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80a9f7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80a9fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80a9fb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80a9fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80aa03u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80aa03(); return;
}

void f_80aa03(void) {
  LOAD_REGS();
L_80aa03: /* 80aa03: push 0xa12f74 */
  { uint32_t v = 0xa12f74u; esp -= 4; W32(esp, v); }
/* 80aa08: push 0xae108c */
  { uint32_t v = 0xae108cu; esp -= 4; W32(esp, v); }
/* 80aa0d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80aa13u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80aa13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80aa16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80aa18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80aa1a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80aa1fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 80aa1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80aa22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80aa23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80aa24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80aa2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80aa2c: mov esp, ebp */
  esp = ebp;
/* 80aa2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80aa2f: ret  */
  esp += 4; SPILL(); return;
}

void f_80aa60(void) {
  LOAD_REGS();
L_80aa60: /* 80aa60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80aa61: mov ebp, esp */
  ebp = esp;
/* 80aa63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80aa65: push 0x9d2530 */
  { uint32_t v = 0x9d2530u; esp -= 4; W32(esp, v); }
/* 80aa6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80aa70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80aa71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80aa78: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80aa7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80aa7e: mov edx, dword ptr [eax + 0x98] */
  edx = R32((uint32_t)(eax + 0x98u));
/* 80aa84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80aa85: mov ebx, dword ptr [eax + 0x58] */
  ebx = R32((uint32_t)(eax + 0x58u));
/* 80aa88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80aa89: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 80aa8c: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 80aa8f: mov ecx, dword ptr [esi + ebx + 0x1c] */
  ecx = R32((uint32_t)(esi + ebx + 0x1cu));
/* 80aa93: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80aa95: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 80aa98: mov ebx, dword ptr [ecx + edx + 4] */
  ebx = R32((uint32_t)(ecx + edx + 0x4u));
/* 80aa9c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80aa9e: shr ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 80aaa1: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 80aaa4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80aaa5: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 80aaa8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80aaab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80aab2: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 80aab5: xor ecx, ecx */
  ecx = 0;
L_80aab7: /* 80aab7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 80aaba: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80aabd: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 80aac0: jge 0x80acca */
  if ((sf == of)) goto L_80acca;
L_80aac6: /* 80aac6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80aac8: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 80aacb: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 80aad1: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 80aad4: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80aad6: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 80aad9: jne 0x80abe3 */
  if (!zf) goto L_80abe3;
L_80aadf: /* 80aadf: cmp byte ptr [edi + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80aae3: jne 0x80abec */
  if (!zf) goto L_80abec;
L_80aae9: /* 80aae9: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 80aaef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80aaf1: je 0x80ab02 */
  if (zf) goto L_80ab02;
L_80aaf3: /* 80aaf3: push 0xb5f348 */
  { uint32_t v = 0xb5f348u; esp -= 4; W32(esp, v); }
/* 80aaf8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x80aafeu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 80aafe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ab00: jne 0x80ab0d */
  if (!zf) goto L_80ab0d;
L_80ab02: /* 80ab02: mov dl, byte ptr [esi + 0x55] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x55u))) & 0xffu);
/* 80ab05: cmp dl, byte ptr [edi + 0xc8] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0xc8u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80ab0b: jne 0x80ab48 */
  if (!zf) goto L_80ab48;
L_80ab0d: /* 80ab0d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 80ab10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ab11: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 80ab17: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x80ab1du); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 80ab1d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 80ab20: fchs  */
  ST0 = -ST0;
/* 80ab22: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 80ab25: fchs  */
  ST0 = -ST0;
/* 80ab27: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 80ab29: fchs  */
  ST0 = -ST0;
/* 80ab2b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80ab2d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 80ab30: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 80ab32: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 80ab35: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 80ab37: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 80ab39: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ab3b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 80ab41: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80ab43: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80ab46: je 0x80abb2 */
  if (zf) goto L_80abb2;
L_80ab48: /* 80ab48: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 80ab4e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ab50: je 0x80ab61 */
  if (zf) goto L_80ab61;
L_80ab52: /* 80ab52: push 0xb5f348 */
  { uint32_t v = 0xb5f348u; esp -= 4; W32(esp, v); }
/* 80ab57: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x80ab5du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 80ab5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ab5f: jne 0x80ab6c */
  if (!zf) goto L_80ab6c;
L_80ab61: /* 80ab61: mov cl, byte ptr [esi + 0x54] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x54u))) & 0xffu);
/* 80ab64: cmp cl, byte ptr [edi + 0xc8] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0xc8u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80ab6a: jne 0x80abe3 */
  if (!zf) goto L_80abe3;
L_80ab6c: /* 80ab6c: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 80ab6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80ab70: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 80ab76: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x80ab7cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 80ab7c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 80ab7f: fchs  */
  ST0 = -ST0;
/* 80ab81: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 80ab84: fchs  */
  ST0 = -ST0;
/* 80ab86: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 80ab88: fchs  */
  ST0 = -ST0;
/* 80ab8a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80ab8c: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 80ab8f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 80ab91: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 80ab94: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 80ab96: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 80ab98: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ab9a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 80aba0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80aba2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80aba5: jp 0x80abe3 */
  if (pf) goto L_80abe3;
L_80aba7: /* 80aba7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80abaa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80abad: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80abb0: je 0x80abe3 */
  if (zf) goto L_80abe3;
L_80abb2: /* 80abb2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 80abb5: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 80abb8: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 80abbb: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 80abbe: xor eax, eax */
  eax = 0;
L_80abc0: /* 80abc0: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80abc3: jge 0x80abcf */
  if ((sf == of)) goto L_80abcf;
L_80abc5: /* 80abc5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 80abc7: cmp dword ptr [ecx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80abca: je 0x80abe0 */
  if (zf) goto L_80abe0;
L_80abcc: /* 80abcc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80abcd: jmp 0x80abc0 */
  goto L_80abc0;
L_80abcf: /* 80abcf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80abd1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80abd3: mov ecx, ebx */
  ecx = ebx;
/* 80abd5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80abdbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80abdb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80abdd: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_80abe0: /* 80abe0: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_80abe3: /* 80abe3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80abe6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80abe7: jmp 0x80aab7 */
  goto L_80aab7;
L_80abec: /* 80abec: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 80abf2: mov ecx, edi */
  ecx = edi;
/* 80abf4: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 80abf7: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 80abfd: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 80ac00: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 80ac06: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 80ac09: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 80ac0c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 80ac0f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80ac12: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 80ac14: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x80ac1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80ac1a: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 80ac1d: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 80ac20: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 80ac23: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 80ac26: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x80ac2cu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 80ac2c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80ac2f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80ac32: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 80ac35: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 80ac38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80ac3a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80ac3d: jne 0x80abe3 */
  if (!zf) goto L_80abe3;
L_80ac3f: /* 80ac3f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 80ac42: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 80ac45: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80ac48: jne 0x80ac7c */
  if (!zf) goto L_80ac7c;
L_80ac4a: /* 80ac4a: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 80ac50: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 80ac53: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 80ac59: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 80ac5c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ac5e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80ac60: fmul dword ptr [edi + 0x170] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x170u)));
/* 80ac66: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ac68: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 80ac6b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 80ac71: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80ac73: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80ac76: jne 0x80abe3 */
  if (!zf) goto L_80abe3;
L_80ac7c: /* 80ac7c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 80ac7f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 80ac82: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 80ac85: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 80ac88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80ac89: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 80ac8c: call 0x6ca00b */
  esp -= 4; W32(esp, 0x80ac91u); SPILL(); f_6ca00b(); if (g_unwind) return; RELOAD();
/* 80ac91: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80ac94: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80ac95: jmp 0x80aab7 */
  goto L_80aab7;
L_80acca: /* 80acca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80accd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80acce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80accf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80acd6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80acd7: mov esp, ebp */
  esp = ebp;
/* 80acd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80acda: ret  */
  esp += 4; SPILL(); return;
}

void f_80ac9a(void) {
  LOAD_REGS();
L_80ac9a: /* 80ac9a: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80ac9d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80aca2: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 80aca5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80aca6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 80aca9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80acaeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80acae(); return;
}

void f_80acae(void) {
  LOAD_REGS();
L_80acae: /* 80acae: push 0xa12fa4 */
  { uint32_t v = 0xa12fa4u; esp -= 4; W32(esp, v); }
/* 80acb3: push 0xae1094 */
  { uint32_t v = 0xae1094u; esp -= 4; W32(esp, v); }
/* 80acb8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80acbeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80acbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80acc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80acc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80acc5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80accau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 80acca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80accd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80acce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80accf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80acd6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80acd7: mov esp, ebp */
  esp = ebp;
/* 80acd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80acda: ret  */
  esp += 4; SPILL(); return;
}

void f_80ad80(void) {
  LOAD_REGS();
L_80ad80: /* 80ad80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ad81: mov esi, ecx */
  esi = ecx;
/* 80ad83: call 0x6c55a1 */
  esp -= 4; W32(esp, 0x80ad88u); SPILL(); f_6c55a1(); if (g_unwind) return; RELOAD();
/* 80ad88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80ad8d: je 0x80ad9c */
  if (zf) goto L_80ad9c;
L_80ad8f: /* 80ad8f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 80ad94: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80ad96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80ad98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ad99: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80ad9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80ad9c: /* 80ad9c: mov eax, esi */
  eax = esi;
/* 80ad9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ad9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80adc0(void) {
  LOAD_REGS();
L_80adc0: /* 80adc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80adc2: push 0x9d2549 */
  { uint32_t v = 0x9d2549u; esp -= 4; W32(esp, v); }
/* 80adc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80adcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80adce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80add5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80add6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80add7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80add8: mov esi, ecx */
  esi = ecx;
/* 80adda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80addb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 80addf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 80ade2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80ade4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 80adea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 80adf2: jge 0x80ae08 */
  if ((sf == of)) goto L_80ae08;
L_80adf4: /* 80adf4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 80adf9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80adfe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 80ae03: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x80ae05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80ae05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80ae08: /* 80ae08: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ae0b: jle 0x80ae21 */
  if ((zf || sf != of)) goto L_80ae21;
L_80ae0d: /* 80ae0d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 80ae12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80ae17: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 80ae1c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x80ae1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80ae1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80ae21: /* 80ae21: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80ae23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ae24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ae26: mov ecx, esi */
  ecx = esi;
/* 80ae28: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x80ae2eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 80ae2e: mov ecx, esi */
  ecx = esi;
/* 80ae30: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 80ae38: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x80ae3eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 80ae3e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 80ae42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ae43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ae44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ae45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ae4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80ae4f: ret  */
  esp += 4; SPILL(); return;
}

void f_80ae80(void) {
  LOAD_REGS();
L_80ae80: /* 80ae80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80ae82: push 0x9d256b */
  { uint32_t v = 0x9d256bu; esp -= 4; W32(esp, v); }
/* 80ae87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80ae8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ae8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80ae95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80ae96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80ae97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ae98: mov esi, ecx */
  esi = ecx;
/* 80ae9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ae9b: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 80ae9e: mov ecx, edi */
  ecx = edi;
/* 80aea0: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 80aea4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80aeaau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80aeaa: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 80aeae: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 80aeb2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 80aeb6: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 80aeba: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 80aebd: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 80aebf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80aec0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 80aec2: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 80aec6: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 80aeca: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 80aece: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 80aed1: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 80aed3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80aed4: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 80aeda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80aedb: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 80aee3: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 80aee6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80aee9: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 80aeec: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 80aeef: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 80aef2: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x80aef8u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 80aef8: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 80aefb: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 80aefe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80af01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80af02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80af04: mov ecx, edi */
  ecx = edi;
/* 80af06: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 80af09: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x80af0fu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 80af0f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 80af13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80af14: mov eax, esi */
  eax = esi;
/* 80af16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80af17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80af18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80af1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80af22: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_80af60(void) {
  LOAD_REGS();
L_80af60: /* 80af60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80af61: mov ebp, esp */
  ebp = esp;
/* 80af63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80af65: push 0x9d2588 */
  { uint32_t v = 0x9d2588u; esp -= 4; W32(esp, v); }
/* 80af6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80af70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80af71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80af78: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80af7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80af7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80af7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80af7e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80af81: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80af86: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80af8b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 80af8e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80af95: call 0x6c554c */
  esp -= 4; W32(esp, 0x80af9au); SPILL(); f_6c554c(); if (g_unwind) return; RELOAD();
/* 80af9a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80af9c: mov dword ptr [0xb92234], ecx */
  W32((uint32_t)(0xb92234u), ecx);
/* 80afa2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80afa5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80afa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80afa9: mov ecx, 0xb9223c */
  ecx = 0xb9223cu;
/* 80afae: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80afb2: mov dword ptr [0xb92238], edx */
  W32((uint32_t)(0xb92238u), edx);
/* 80afb8: call 0x6c5eac */
  esp -= 4; W32(esp, 0x80afbdu); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 80afbd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80afc0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80afc4: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x80afc9u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 80afc9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 80afcc: mov esi, dword ptr [edi + 0x8c] */
  esi = R32((uint32_t)(edi + 0x8cu));
/* 80afd2: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 80afd4: add esi, 0xe4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80afda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80afdc: mov ecx, esi */
  ecx = esi;
/* 80afde: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80afe4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80afe4: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 80afe7: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 80afe9: je 0x80aff5 */
  if (zf) goto L_80aff5;
L_80afeb: /* 80afeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80afec: mov ecx, eax */
  ecx = eax;
/* 80afee: call 0x6cafb5 */
  esp -= 4; W32(esp, 0x80aff3u); SPILL(); f_6cafb5(); if (g_unwind) return; RELOAD();
/* 80aff3: jmp 0x80aff7 */
  goto L_80aff7;
L_80aff5: /* 80aff5: xor eax, eax */
  eax = 0;
L_80aff7: /* 80aff7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 80affa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80affb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80affc: mov dword ptr [eax + 0x68], ecx */
  W32((uint32_t)(eax + 0x68u), ecx);
/* 80afff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80b002: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80b003: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80b00a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80b00b: mov esp, ebp */
  esp = ebp;
/* 80b00d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80b00e: ret  */
  esp += 4; SPILL(); return;
}

void f_80b00f(void) {
  LOAD_REGS();
L_80b00f: /* 80b00f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80b012: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80b017: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80b01a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b01b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80b01e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80b023u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80b023(); return;
}

void f_80b023(void) {
  LOAD_REGS();
L_80b023: /* 80b023: push 0xa12fdc */
  { uint32_t v = 0xa12fdcu; esp -= 4; W32(esp, v); }
/* 80b028: push 0xae1000 */
  { uint32_t v = 0xae1000u; esp -= 4; W32(esp, v); }
/* 80b02d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80b033u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80b033: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80b036: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80b038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80b03a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80b03fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80b03f: guest_badaddr(0x80b03f); return;
}

void f_80b080(void) {
  LOAD_REGS();
L_80b080: /* 80b080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80b081: mov ebp, esp */
  ebp = esp;
/* 80b083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80b085: push 0x9d25f2 */
  { uint32_t v = 0x9d25f2u; esp -= 4; W32(esp, v); }
/* 80b08a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80b090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80b091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80b098: sub esp, 0x2ac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2acu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80b09e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 80b0a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80b0a2: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 80b0a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80b0a6: mov esi, dword ptr [ecx + 0x8c] */
  esi = R32((uint32_t)(ecx + 0x8cu));
/* 80b0ac: mov ecx, dword ptr [esi + 0x98] */
  ecx = R32((uint32_t)(esi + 0x98u));
/* 80b0b2: mov edx, ebx */
  edx = ebx;
/* 80b0b4: xor eax, eax */
  eax = 0;
/* 80b0b6: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 80b0b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80b0ba: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80b0bc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80b0bf: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 80b0c2: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
L_80b0c5: /* 80b0c5: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80b0cb: jge 0x80b0f1 */
  if ((sf == of)) goto L_80b0f1;
L_80b0cd: /* 80b0cd: mov edi, dword ptr [esi + 0xf0] */
  edi = R32((uint32_t)(esi + 0xf0u));
/* 80b0d3: mov ecx, eax */
  ecx = eax;
/* 80b0d5: imul ecx, ecx, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0xa4u);
  ecx = (uint32_t)r;
  }
/* 80b0db: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80b0dd: cmp dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80b0e0: jne 0x80b0ee */
  if (!zf) goto L_80b0ee;
L_80b0e2: /* 80b0e2: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 80b0e5: cmp dword ptr [ecx + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80b0e8: je 0x80b978 */
  if (zf) goto L_80b978;
L_80b0ee: /* 80b0ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80b0ef: jmp 0x80b0c5 */
  goto L_80b0c5;
L_80b0f1: /* 80b0f1: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 80b0f4: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 80b0f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80b0f8: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 80b0fb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 80b0fe: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 80b101: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b102: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 80b105: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x80b10bu); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 80b10b: mov dword ptr [ebp - 0x40], 0x4b189680 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x4b189680u);
/* 80b112: mov dword ptr [ebp - 0x58], 0x4b189680 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x4b189680u);
/* 80b119: mov dword ptr [ebp - 0x44], 0xcb189680 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xcb189680u);
/* 80b120: mov dword ptr [ebp - 0x5c], 0xcb189680 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0xcb189680u);
/* 80b127: xor edi, edi */
  edi = 0;
/* 80b129: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80b130: /* 80b130: cmp edi, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80b133: jge 0x80b1f5 */
  if ((sf == of)) goto L_80b1f5;
L_80b139: /* 80b139: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 80b13c: mov ecx, edi */
  ecx = edi;
/* 80b13e: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 80b141: mov eax, dword ptr [ecx + edx + 0x1c] */
  eax = R32((uint32_t)(ecx + edx + 0x1cu));
/* 80b145: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80b147: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80b149: jne 0x80b1ef */
  if (!zf) goto L_80b1ef;
L_80b14f: /* 80b14f: xor edx, edx */
  edx = 0;
L_80b151: /* 80b151: movzx eax, byte ptr [ecx + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x56u)));
/* 80b155: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80b157: jge 0x80b1ef */
  if ((sf == of)) goto L_80b1ef;
L_80b15d: /* 80b15d: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 80b160: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 80b163: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 80b166: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80b168: mov eax, dword ptr [ebx + eax*8] */
  eax = R32((uint32_t)(ebx + eax*8));
/* 80b16b: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 80b171: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 80b174: fmul dword ptr [ebx + eax*4 + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + eax*4 + 0x8u)));
/* 80b178: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 80b17b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 80b17e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 80b181: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b183: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 80b186: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 80b188: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b18a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80b18d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 80b190: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 80b193: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 80b196: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b198: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 80b19b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 80b19d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b19f: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 80b1a2: fcom dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
/* 80b1a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80b1a7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80b1aa: jp 0x80b1af */
  if (pf) goto L_80b1af;
L_80b1ac: /* 80b1ac: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
L_80b1af: /* 80b1af: fcom dword ptr [ebp - 0x44] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffbcu)));
/* 80b1b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80b1b4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80b1b7: jne 0x80b1be */
  if (!zf) goto L_80b1be;
L_80b1b9: /* 80b1b9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 80b1bc: jmp 0x80b1c0 */
  goto L_80b1c0;
L_80b1be: /* 80b1be: fstp st(0) */
  STI(0) = ST0; FPOP();
L_80b1c0: /* 80b1c0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80b1c3: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 80b1c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80b1c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80b1cb: jp 0x80b1d3 */
  if (pf) goto L_80b1d3;
L_80b1cd: /* 80b1cd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80b1d0: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
L_80b1d3: /* 80b1d3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80b1d6: fcomp dword ptr [ebp - 0x5c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa4u)));
  FPOP();
/* 80b1d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80b1db: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80b1de: jne 0x80b1e6 */
  if (!zf) goto L_80b1e6;
L_80b1e0: /* 80b1e0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80b1e3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
L_80b1e6: /* 80b1e6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 80b1e9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80b1ea: jmp 0x80b151 */
  goto L_80b151;
L_80b1ef: /* 80b1ef: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80b1f0: jmp 0x80b130 */
  goto L_80b130;
L_80b1f5: /* 80b1f5: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 80b1fa: lea edi, [esi + 0xf0] */
  edi = (uint32_t)(esi + 0xf0u);
/* 80b200: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80b202: mov ecx, edi */
  ecx = edi;
/* 80b204: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80b20au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80b20a: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 80b210: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 80b212: je 0x80b228 */
  if (zf) goto L_80b228;
L_80b214: /* 80b214: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 80b217: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 80b21a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b21b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80b21c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80b21d: mov ecx, eax */
  ecx = eax;
/* 80b21f: call 0x6c9575 */
  esp -= 4; W32(esp, 0x80b224u); SPILL(); f_6c9575(); if (g_unwind) return; RELOAD();
/* 80b224: mov ebx, eax */
  ebx = eax;
/* 80b226: jmp 0x80b22a */
  goto L_80b22a;
L_80b228: /* 80b228: xor ebx, ebx */
  ebx = 0;
L_80b22a: /* 80b22a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 80b22c: mov edi, dword ptr [ebx + 0x24] */
  edi = R32((uint32_t)(ebx + 0x24u));
/* 80b22f: mov ecx, ebx */
  ecx = ebx;
/* 80b231: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 80b233: mov eax, 0x63e7063f */
  eax = 0x63e7063fu;
/* 80b238: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 80b23a: sar edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 80b23d: mov eax, edx */
  eax = edx;
/* 80b23f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 80b242: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80b244: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 80b247: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80b248: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
/* 80b24b: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 80b24e: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 80b251: mov edx, ecx */
  edx = ecx;
/* 80b253: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 80b256: mov ecx, dword ptr [0xb19088] */
  ecx = R32((uint32_t)(0xb19088u));
/* 80b25c: xor eax, eax */
  eax = 0;
/* 80b25e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 80b261: cmp dword ptr [ecx + 0x1c], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80b265: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 80b268: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 80b269: and eax, 0xfffffff9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff9u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80b26c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80b26f: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
L_80b272: /* 80b272: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 80b275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b276: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 80b279: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 80b27c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80b27f: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x80b285u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 80b285: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 80b288: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 80b28b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80b28e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 80b28f: not edi */
  edi = ~edi;
/* 80b291: lea eax, [eax + edx + 1] */
  eax = (uint32_t)(eax + edx + 0x1u);
/* 80b295: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80b297: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80b29c: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 80b29f: jg 0x80b99e */
  if ((!zf && sf == of)) goto L_80b99e;
L_80b2a5: /* 80b2a5: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 80b2a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b2a9: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 80b2ac: fst dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0);
/* 80b2af: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 80b2b2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80b2b5: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x80b2bbu); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 80b2bb: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 80b2be: lea eax, [eax + ecx + 1] */
  eax = (uint32_t)(eax + ecx + 0x1u);
/* 80b2c2: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80b2c4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80b2c7: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80b2cc: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 80b2cf: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 80b2d2: jg 0x80b989 */
  if ((!zf && sf == of)) goto L_80b989;
L_80b2d8: /* 80b2d8: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 80b2db: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 80b2de: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 80b2e1: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 80b2e4: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80b2e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80b2e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b2e9: fsub dword ptr [0xa0b130] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b130u)));
/* 80b2ef: lea edi, [ebx + 0x18] */
  edi = (uint32_t)(ebx + 0x18u);
/* 80b2f2: lea edx, [ebx + 0x14] */
  edx = (uint32_t)(ebx + 0x14u);
/* 80b2f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80b2f6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 80b2f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80b2f9: mov ecx, 0xb92234 */
  ecx = 0xb92234u;
/* 80b2fe: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 80b301: fild dword ptr [ebp - 0x6c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 80b304: fsub dword ptr [0xa0b130] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b130u)));
/* 80b30a: fdivr dword ptr [ebp - 0x70] */
  ST0 = (F32((uint32_t)(ebp + 0xffffff90u))) / ST0;
/* 80b30d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 80b310: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 80b313: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 80b316: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 80b319: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 80b31c: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 80b31f: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 80b322: call 0x6ca060 */
  esp -= 4; W32(esp, 0x80b327u); SPILL(); f_6ca060(); if (g_unwind) return; RELOAD();
/* 80b327: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80b329: jne 0x80b36a */
  if (!zf) goto L_80b36a;
L_80b32b: /* 80b32b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 80b32e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80b32f: call 0x6c6195 */
  esp -= 4; W32(esp, 0x80b334u); SPILL(); f_6c6195(); if (g_unwind) return; RELOAD();
/* 80b334: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 80b337: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 80b33a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80b33d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80b33e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b33f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80b340: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 80b343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80b344: mov ecx, 0xb92234 */
  ecx = 0xb92234u;
/* 80b349: call 0x6ca060 */
  esp -= 4; W32(esp, 0x80b34eu); SPILL(); f_6ca060(); if (g_unwind) return; RELOAD();
/* 80b34e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80b350: jne 0x80b36a */
  if (!zf) goto L_80b36a;
L_80b352: /* 80b352: push 0x2b8 */
  { uint32_t v = 0x2b8u; esp -= 4; W32(esp, v); }
/* 80b357: push 0xae1008 */
  { uint32_t v = 0xae1008u; esp -= 4; W32(esp, v); }
/* 80b35c: push 0xae1020 */
  { uint32_t v = 0xae1020u; esp -= 4; W32(esp, v); }
/* 80b361: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x80b367u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 80b367: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80b36a: /* 80b36a: mov eax, dword ptr [esi + 0xe8] */
  eax = R32((uint32_t)(esi + 0xe8u));
/* 80b370: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 80b371: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 80b374: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 80b377: mov edx, dword ptr [esi + 0xe4] */
  edx = R32((uint32_t)(esi + 0xe4u));
/* 80b37d: lea esi, [eax + edx + 8] */
  esi = (uint32_t)(eax + edx + 0x8u);
/* 80b381: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80b383: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80b385: mov ecx, esi */
  ecx = esi;
/* 80b387: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80b38du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80b38d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80b38f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 80b395: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 80b398: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 80b39b: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 80b39e: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 80b3a8: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 80b3b2: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 80b3bc: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 80b3c6: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 80b3d0: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 80b3da: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 80b3e4: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 80b3ee: mov dword ptr [ebp - 0x8c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x3f800000u);
/* 80b3f8: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 80b402: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 80b40c: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 80b413: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 80b41a: mov dword ptr [ebp - 0x78], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x3f800000u);
/* 80b421: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 80b427: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 80b42a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80b42c: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 80b432: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 80b438: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80b43d: lea esi, [ebp - 0xb4] */
  esi = (uint32_t)(ebp + 0xffffff4cu);
/* 80b443: lea edi, [ebp - 0x2b8] */
  edi = (uint32_t)(ebp + 0xfffffd48u);
/* 80b449: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80b44b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80b450: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 80b453: lea esi, [ebp - 0xb4] */
  esi = (uint32_t)(ebp + 0xffffff4cu);
/* 80b459: fchs  */
  ST0 = -ST0;
/* 80b45b: lea edi, [ebp - 0x1b8] */
  edi = (uint32_t)(ebp + 0xfffffe48u);
/* 80b461: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 80b464: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80b466: fchs  */
  ST0 = -ST0;
/* 80b468: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 80b46e: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 80b474: mov dword ptr [ebp - 0xf4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x3f800000u);
/* 80b47e: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 80b488: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 80b492: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 80b49c: mov dword ptr [ebp - 0xe4], 0 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x0u);
/* 80b4a6: mov dword ptr [ebp - 0xe0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x3f800000u);
/* 80b4b0: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 80b4ba: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 80b4c4: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 80b4ce: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* 80b4d8: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 80b4e2: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 80b4ec: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 80b4f6: mov dword ptr [ebp - 0xb8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f800000u);
/* 80b500: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80b505: lea esi, [ebp - 0xf4] */
  esi = (uint32_t)(ebp + 0xffffff0cu);
/* 80b50b: lea edi, [ebp - 0x238] */
  edi = (uint32_t)(ebp + 0xfffffdc8u);
/* 80b511: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80b513: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 80b516: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 80b519: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 80b51c: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 80b51f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 80b521: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 80b524: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80b527: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 80b52a: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 80b52d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80b530: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 80b533: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 80b535: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 80b538: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 80b53b: mov ecx, eax */
  ecx = eax;
/* 80b53d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 80b540: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 80b543: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80b546: mov dword ptr [ebp - 0x130], ecx */
  W32((uint32_t)(ebp + 0xfffffed0u), ecx);
/* 80b54c: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 80b54f: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 80b559: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 80b55c: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 80b566: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80b569: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 80b573: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 80b57d: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 80b587: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 80b589: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 80b593: mov dword ptr [ebp - 0xf8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x3f800000u);
/* 80b59d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 80b5a0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 80b5a3: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 80b5a6: mov dword ptr [ebp - 0x12c], edx */
  W32((uint32_t)(ebp + 0xfffffed4u), edx);
/* 80b5ac: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 80b5b2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80b5b4: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 80b5ba: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 80b5c0: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 80b5c6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80b5c8: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 80b5ce: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 80b5d4: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 80b5da: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80b5dd: mov edi, esp */
  edi = esp;
/* 80b5df: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80b5e4: lea esi, [ebp - 0xf4] */
  esi = (uint32_t)(ebp + 0xffffff0cu);
/* 80b5ea: lea eax, [ebp - 0x1f8] */
  eax = (uint32_t)(ebp + 0xfffffe08u);
/* 80b5f0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80b5f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80b5f3: lea ecx, [ebp - 0x134] */
  ecx = (uint32_t)(ebp + 0xfffffeccu);
/* 80b5f9: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 80b5fd: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x80b603u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 80b603: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80b606: mov edi, esp */
  edi = esp;
/* 80b608: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80b60d: lea esi, [ebp - 0x1b8] */
  esi = (uint32_t)(ebp + 0xfffffe48u);
/* 80b613: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80b615: lea ecx, [ebp - 0x278] */
  ecx = (uint32_t)(ebp + 0xfffffd88u);
/* 80b61b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b61c: mov ecx, eax */
  ecx = eax;
/* 80b61e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 80b622: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x80b628u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 80b628: mov esi, eax */
  esi = eax;
/* 80b62a: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 80b62d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 80b632: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80b634: lea ecx, [ebp - 0x278] */
  ecx = (uint32_t)(ebp + 0xfffffd88u);
/* 80b63a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b640u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b640: lea ecx, [ebp - 0x1f8] */
  ecx = (uint32_t)(ebp + 0xfffffe08u);
/* 80b646: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 80b64a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b650u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b650: lea ecx, [ebp - 0x134] */
  ecx = (uint32_t)(ebp + 0xfffffeccu);
/* 80b656: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 80b65a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b660u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b660: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 80b666: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 80b66a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b670u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b670: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 80b676: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 80b67a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b680u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b680: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 80b686: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80b68a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b690u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b690: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 80b696: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80b69a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b6a0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b6a0: lea edx, [ebp - 0x178] */
  edx = (uint32_t)(ebp + 0xfffffe88u);
/* 80b6a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80b6a7: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 80b6aa: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x80b6b0u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 80b6b0: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 80b6b3: lea ecx, [ebp - 0x178] */
  ecx = (uint32_t)(ebp + 0xfffffe88u);
/* 80b6b9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 80b6bd: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 80b6c4: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 80b6cb: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 80b6d2: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 80b6d9: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 80b6dc: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 80b6df: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 80b6e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 80b6e5: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 80b6e8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b6ea: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 80b6ec: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b6ee: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80b6f1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b6f3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80b6f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b6f8: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80b6fb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b6fe: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80b701: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b704: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80b707: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b70a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80b70d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b710: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80b713: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b715: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b717: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b719: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b71b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b71d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b720: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80b723: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b726: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80b729: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b72c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80b72f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b732: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80b735: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b737: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b739: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b73b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b73d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b73f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b742: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80b745: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b748: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80b74b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b74e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80b751: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b754: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80b757: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b759: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b75b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b75d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b75f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b761: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b763: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80b765: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80b767: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80b76a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80b76d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80b770: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 80b773: lea eax, [ebx + 0x68] */
  eax = (uint32_t)(ebx + 0x68u);
/* 80b776: mov edx, eax */
  edx = eax;
/* 80b778: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80b77a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 80b77d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80b780: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 80b783: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 80b786: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 80b789: lea ecx, [ebp - 0x178] */
  ecx = (uint32_t)(ebp + 0xfffffe88u);
/* 80b78f: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 80b796: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 80b79d: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 80b7a4: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 80b7ab: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 80b7ae: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 80b7b1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 80b7b4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 80b7b7: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 80b7ba: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b7bc: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 80b7be: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b7c0: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80b7c3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b7c5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80b7c8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b7ca: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80b7cd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b7d0: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80b7d3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b7d6: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80b7d9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b7dc: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80b7df: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b7e2: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80b7e5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b7e7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b7e9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b7eb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b7ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b7ef: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b7f2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80b7f5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b7f8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80b7fb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b7fe: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80b801: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b804: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80b807: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b809: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b80b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b80d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b80f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b811: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b814: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80b817: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b81a: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80b81d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b820: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80b823: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b826: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80b829: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b82b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b82d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b82f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b831: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b833: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b835: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80b837: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80b839: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80b83c: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80b83f: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80b842: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 80b845: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* 80b848: mov edx, ecx */
  edx = ecx;
/* 80b84a: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 80b84c: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 80b84f: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 80b852: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 80b855: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 80b858: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 80b85b: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 80b85e: lea edx, [ebp - 0x178] */
  edx = (uint32_t)(ebp + 0xfffffe88u);
/* 80b864: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 80b86b: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 80b872: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 80b879: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 80b880: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 80b883: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 80b886: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 80b889: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 80b88c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b88e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 80b890: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b892: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80b895: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b897: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80b89a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80b89c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80b89f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b8a2: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80b8a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b8a8: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80b8ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b8ae: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80b8b1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80b8b4: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80b8b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b8b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b8bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b8bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b8bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b8c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b8c4: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80b8c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b8ca: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80b8cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b8d0: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80b8d3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80b8d6: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80b8d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b8db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b8dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b8df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b8e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b8e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b8e6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80b8e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b8ec: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80b8ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b8f2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80b8f5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80b8f8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80b8fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b8fd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80b8ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b901: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80b903: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80b905: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80b907: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80b909: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80b90b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80b90e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80b911: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80b914: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 80b917: lea edx, [ebx + 0x80] */
  edx = (uint32_t)(ebx + 0x80u);
/* 80b91d: mov esi, edx */
  esi = edx;
/* 80b91f: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 80b921: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 80b924: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 80b927: mov edi, dword ptr [ebp - 0x4c] */
  edi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 80b92a: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 80b92d: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 80b930: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80b933: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80b936: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 80b939: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 80b93b: mov edi, esp */
  edi = esp;
/* 80b93d: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 80b940: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 80b943: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 80b945: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 80b948: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 80b94b: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 80b94e: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 80b951: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 80b954: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 80b957: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80b958: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80b95a: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 80b95d: call 0x6cae57 */
  esp -= 4; W32(esp, 0x80b962u); SPILL(); f_6cae57(); if (g_unwind) return; RELOAD();
/* 80b962: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80b965: lea ecx, [ebp - 0x178] */
  ecx = (uint32_t)(ebp + 0xfffffe88u);
/* 80b96b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80b96f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80b975u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80b975: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
L_80b978: /* 80b978: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80b97b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80b97c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80b97d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80b984: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80b985: mov esp, ebp */
  esp = ebp;
/* 80b987: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80b988: ret  */
  esp += 4; SPILL(); return;
L_80b989: /* 80b989: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80b98c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 80b98e: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 80b991: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80b994: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 80b996: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 80b999: jmp 0x80b2a5 */
  goto L_80b2a5;
L_80b99e: /* 80b99e: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80b9a1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 80b9a3: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 80b9a6: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80b9a9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 80b9ab: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 80b9ae: jmp 0x80b272 */
  goto L_80b272;
}
