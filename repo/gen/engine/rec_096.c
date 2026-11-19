#include "recomp.h"
#include "rec_mod.h"

void f_89dcdf(void) {
  LOAD_REGS();
L_89dcdf: /* 89dcdf: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 89dce2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89dce7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 89dcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89dceb: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89dcee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89dcf3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89dcf3(); return;
}

void f_89dcf3(void) {
  LOAD_REGS();
L_89dcf3: /* 89dcf3: push 0xa1a8f0 */
  { uint32_t v = 0xa1a8f0u; esp -= 4; W32(esp, v); }
/* 89dcf8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 89dcfd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x89dd03u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 89dd03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89dd06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89dd08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89dd0a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89dd0fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89dd0f: guest_badaddr(0x89dd0f); return;
}

void f_89dd90(void) {
  LOAD_REGS();
L_89dd90: /* 89dd90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 89dd92: push 0x9d5c0b */
  { uint32_t v = 0x9d5c0bu; esp -= 4; W32(esp, v); }
/* 89dd97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 89dd9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89dd9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 89dda5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89dda6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89dda7: mov esi, ecx */
  esi = ecx;
/* 89dda9: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 89ddac: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 89ddb0: call 0x6c3873 */
  esp -= 4; W32(esp, 0x89ddb5u); SPILL(); f_6c3873(); if (g_unwind) return; RELOAD();
/* 89ddb5: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 89ddb8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 89ddc0: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x89ddc5u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 89ddc5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 89ddc9: mov eax, esi */
  eax = esi;
/* 89ddcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89ddcc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89ddd3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89ddd6: ret  */
  esp += 4; SPILL(); return;
}

void f_89de00(void) {
  LOAD_REGS();
L_89de00: /* 89de00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89de01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89de02: mov esi, ecx */
  esi = ecx;
/* 89de04: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 89de0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89de0b: xor edi, edi */
  edi = 0;
/* 89de0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89de0f: jle 0x89de35 */
  if ((zf || sf != of)) goto L_89de35;
L_89de11: /* 89de11: xor ebx, ebx */
  ebx = 0;
L_89de13: /* 89de13: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 89de19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89de1b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89de1d: lea ecx, [ebx + eax + 0xc] */
  ecx = (uint32_t)(ebx + eax + 0xcu);
/* 89de21: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89de27u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89de27: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 89de2d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89de2e: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89de31: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89de33: jl 0x89de13 */
  if ((sf != of)) goto L_89de13;
L_89de35: /* 89de35: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 89de3b: add esi, 0xa8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89de41: xor edi, edi */
  edi = 0;
/* 89de43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89de45: jle 0x89de64 */
  if ((zf || sf != of)) goto L_89de64;
L_89de47: /* 89de47: xor ebx, ebx */
  ebx = 0;
/* 89de49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_89de50: /* 89de50: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89de52: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89de54: call 0x6c1f41 */
  esp -= 4; W32(esp, 0x89de59u); SPILL(); f_6c1f41(); if (g_unwind) return; RELOAD();
/* 89de59: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 89de5c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89de5d: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89de60: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89de62: jl 0x89de50 */
  if ((sf != of)) goto L_89de50;
L_89de64: /* 89de64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89de66: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 89de68: mov ecx, esi */
  ecx = esi;
/* 89de6a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89de70u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89de70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89de71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89de72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89de73: ret  */
  esp += 4; SPILL(); return;
}

void f_89dea0(void) {
  LOAD_REGS();
L_89dea0: /* 89dea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 89dea1: mov ebp, esp */
  ebp = esp;
/* 89dea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 89dea5: push 0x9d5c28 */
  { uint32_t v = 0x9d5c28u; esp -= 4; W32(esp, v); }
/* 89deaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 89deb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89deb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 89deb8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89debb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89debc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89debd: mov esi, ecx */
  esi = ecx;
/* 89debf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89dec1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89dec2: xor ebx, ebx */
  ebx = 0;
/* 89dec4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 89dec7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 89deca: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x89ded0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ded0: mov edi, eax */
  edi = eax;
/* 89ded2: cmp dword ptr [edi + 0x1f0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1f0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ded8: je 0x89df97 */
  if (zf) goto L_89df97;
L_89dede: /* 89dede: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 89dee1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89dee7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89dee7: mov ecx, dword ptr [edi + 0x1ec] */
  ecx = R32((uint32_t)(edi + 0x1ecu));
/* 89deed: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 89def0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89def1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89def3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 89def6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89defa: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89df00u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89df00: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 89df03: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89df05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89df07: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 89df0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89df0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89df0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89df0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89df0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89df0f: mov ecx, esi */
  ecx = esi;
/* 89df11: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 89df14: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x89df1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89df1a: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 89df1d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 89df1f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89df22: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89df24: jle 0x89df28 */
  if ((zf || sf != of)) goto L_89df28;
L_89df26: /* 89df26: mov eax, ecx */
  eax = ecx;
L_89df28: /* 89df28: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 89df2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89df2c: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 89df2e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89df31: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89df33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89df34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89df35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89df36: mov dword ptr [esi + 0xf0], 0 */
  W32((uint32_t)(esi + 0xf0u), 0x0u);
/* 89df40: call 0x6c78e2 */
  esp -= 4; W32(esp, 0x89df45u); SPILL(); f_6c78e2(); if (g_unwind) return; RELOAD();
/* 89df45: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 89df48: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 89df4b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89df4e: xor eax, eax */
  eax = 0;
L_89df50: /* 89df50: cmp eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89df52: jge 0x89df78 */
  if ((sf == of)) goto L_89df78;
L_89df54: /* 89df54: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89df57: mov esi, eax */
  esi = eax;
/* 89df59: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89df5c: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89df5e: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 89df60: mov edi, ecx */
  edi = ecx;
/* 89df62: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 89df64: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 89df67: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 89df6a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 89df6d: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 89df70: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89df72: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 89df75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89df76: jmp 0x89df50 */
  goto L_89df50;
L_89df78: /* 89df78: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 89df7b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 89df7f: call 0x6ccbee */
  esp -= 4; W32(esp, 0x89df84u); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
/* 89df84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89df87: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89df8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89df8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89df90: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89df91: mov esp, ebp */
  esp = ebp;
/* 89df93: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89df94: ret 0x10 */
  esp += 20; SPILL(); return;
L_89df97: /* 89df97: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 89df9a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 89df9c: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 89dfa2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89dfa4: push 0xae7c38 */
  { uint32_t v = 0xae7c38u; esp -= 4; W32(esp, v); }
/* 89dfa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89dfaa: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x89dfb0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 89dfb0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89dfb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89dfb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89dfb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89dfb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89dfbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89dfc0: mov esp, ebp */
  esp = ebp;
/* 89dfc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89dfc3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_89dfc6(void) {
  LOAD_REGS();
L_89dfc6: /* 89dfc6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89dfc9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89dfce: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 89dfd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89dfd2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 89dfd5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89dfdau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89dfda(); return;
}

void f_89dfda(void) {
  LOAD_REGS();
L_89dfda: /* 89dfda: push 0xa1a910 */
  { uint32_t v = 0xa1a910u; esp -= 4; W32(esp, v); }
/* 89dfdf: push 0xae7cc8 */
  { uint32_t v = 0xae7cc8u; esp -= 4; W32(esp, v); }
/* 89dfe4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x89dfeau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 89dfea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89dfed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89dfef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89dff1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89dff6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89dff6: guest_badaddr(0x89dff6); return;
}

void f_89e060(void) {
  LOAD_REGS();
L_89e060: /* 89e060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 89e061: mov ebp, esp */
  ebp = esp;
/* 89e063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 89e065: push 0x9d5c48 */
  { uint32_t v = 0x9d5c48u; esp -= 4; W32(esp, v); }
/* 89e06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 89e070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 89e078: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89e07b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89e07c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89e07d: mov esi, ecx */
  esi = ecx;
/* 89e07f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89e081: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e082: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 89e085: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 89e08c: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x89e092u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89e092: mov edi, eax */
  edi = eax;
/* 89e094: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89e097: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e099: je 0x89e203 */
  if (zf) goto L_89e203;
L_89e09f: /* 89e09f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e0a1: je 0x89e203 */
  if (zf) goto L_89e203;
L_89e0a7: /* 89e0a7: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* 89e0ad: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 89e0b3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e0b5: jge 0x89e203 */
  if ((sf == of)) goto L_89e203;
L_89e0bb: /* 89e0bb: mov ecx, dword ptr [edi + 0x1ec] */
  ecx = R32((uint32_t)(edi + 0x1ecu));
/* 89e0c1: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 89e0c7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89e0c9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e0cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 89e0ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89e0d0: mov ebx, eax */
  ebx = eax;
/* 89e0d2: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 89e0d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e0d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e0d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e0da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e0dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e0dd: mov ecx, esi */
  ecx = esi;
/* 89e0df: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 89e0e6: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x89e0ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89e0ec: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 89e0ef: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89e0f5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89e0f5: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 89e0f8: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89e0fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e0fb: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 89e0fe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89e102: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89e108u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89e108: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89e10b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 89e10e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e10f: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89e111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89e113: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e114: call 0x6c78e2 */
  esp -= 4; W32(esp, 0x89e119u); SPILL(); f_6c78e2(); if (g_unwind) return; RELOAD();
/* 89e119: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 89e11c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 89e11f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89e122: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e124: je 0x89e13b */
  if (zf) goto L_89e13b;
L_89e126: /* 89e126: xor eax, eax */
  eax = 0;
L_89e128: /* 89e128: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e12a: jge 0x89e12f */
  if ((sf == of)) goto L_89e12f;
L_89e12c: /* 89e12c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89e12d: jmp 0x89e128 */
  goto L_89e128;
L_89e12f: /* 89e12f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e131: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89e133: mov ecx, esi */
  ecx = esi;
/* 89e135: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e13bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_89e13b: /* 89e13b: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 89e13e: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 89e141: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89e143: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e144: mov ecx, esi */
  ecx = esi;
/* 89e146: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89e14cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89e14c: mov ecx, esi */
  ecx = esi;
/* 89e14e: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x89e154u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 89e154: mov ecx, ebx */
  ecx = ebx;
/* 89e156: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 89e159: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x89e15fu); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 89e15f: mov edi, eax */
  edi = eax;
/* 89e161: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 89e163: xor ebx, ebx */
  ebx = 0;
/* 89e165: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 89e168: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 89e16b: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x89e171u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
L_89e171: /* 89e171: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 89e174: jae 0x89e1d9 */
  if (!cf) goto L_89e1d9;
L_89e176: /* 89e176: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 89e179: cmp ebx, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e17c: jge 0x89e1d9 */
  if ((sf == of)) goto L_89e1d9;
L_89e17e: /* 89e17e: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e181: cmp esi, 0xf0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 89e187: jae 0x89e1d2 */
  if (!cf) goto L_89e1d2;
L_89e189: /* 89e189: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 89e18c: mov ecx, eax */
  ecx = eax;
/* 89e18e: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 89e190: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 89e192: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 89e195: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 89e198: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89e19b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89e19e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 89e1a1: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 89e1a4: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 89e1a6: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e1a9: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 89e1ab: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 89e1ae: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 89e1b1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89e1b4: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89e1b7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89e1ba: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 89e1bd: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89e1c0: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89e1c3: shr esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 89e1c6: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89e1c9: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 89e1cc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 89e1cf: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
L_89e1d2: /* 89e1d2: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 89e1d4: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e1d7: jmp 0x89e171 */
  goto L_89e171;
L_89e1d9: /* 89e1d9: mov eax, ebx */
  eax = ebx;
/* 89e1db: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 89e1dc: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 89e1de: mov esi, eax */
  esi = eax;
/* 89e1e0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 89e1e3: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 89e1e5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 89e1e9: call 0x6ccbee */
  esp -= 4; W32(esp, 0x89e1eeu); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
/* 89e1ee: mov eax, esi */
  eax = esi;
/* 89e1f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89e1f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89e1fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89e1fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89e1fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89e1fd: mov esp, ebp */
  esp = ebp;
/* 89e1ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89e200: ret 8 */
  esp += 12; SPILL(); return;
L_89e203: /* 89e203: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89e206: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89e207: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89e208: xor eax, eax */
  eax = 0;
/* 89e20a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89e211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89e212: mov esp, ebp */
  esp = ebp;
/* 89e214: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89e215: ret 8 */
  esp += 12; SPILL(); return;
}

void f_89e218(void) {
  LOAD_REGS();
L_89e218: /* 89e218: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 89e21b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89e220: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89e223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e224: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89e227: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89e22cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89e22c(); return;
}

void f_89e22c(void) {
  LOAD_REGS();
L_89e22c: /* 89e22c: push 0xa1a968 */
  { uint32_t v = 0xa1a968u; esp -= 4; W32(esp, v); }
/* 89e231: push 0xae7cd0 */
  { uint32_t v = 0xae7cd0u; esp -= 4; W32(esp, v); }
/* 89e236: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x89e23cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 89e23c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89e23f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e241: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e243: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89e248u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89e248: guest_badaddr(0x89e248); return;
}

void f_89e2d0(void) {
  LOAD_REGS();
L_89e2d0: /* 89e2d0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 89e2d4: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 89e2d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e2d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89e2db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e2dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e2de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e2df: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x89e2e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89e2e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e2e6: call 0x6c78e2 */
  esp -= 4; W32(esp, 0x89e2ebu); SPILL(); f_6c78e2(); if (g_unwind) return; RELOAD();
/* 89e2eb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89e2ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_89e310(void) {
  LOAD_REGS();
L_89e310: /* 89e310: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 89e312: push 0x9d5cd1 */
  { uint32_t v = 0x9d5cd1u; esp -= 4; W32(esp, v); }
/* 89e317: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 89e31d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e31e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 89e325: sub esp, 0x378 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89e32b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89e32c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 89e32d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89e32e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e32f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 89e333: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89e335: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e339: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 89e33b: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 89e342: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 89e348: xor edi, edi */
  edi = 0;
/* 89e34a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e34c: jg 0x89e37e */
  if ((!zf && sf == of)) goto L_89e37e;
L_89e34e: /* 89e34e: mov edi, edi */
  edi = edi;
L_89e350: /* 89e350: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89e352: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 89e354: add ecx, 0xf8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e35a: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89e360u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89e360: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e364: cmp dword ptr [ecx + 0xfc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xfcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e36a: jle 0x89e350 */
  if ((zf || sf != of)) goto L_89e350;
L_89e36c: /* 89e36c: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 89e36e: add ecx, 0xf8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e374: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x89e37au); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 89e37a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89e37e: /* 89e37e: mov esi, dword ptr [esp + 0x398] */
  esi = R32((uint32_t)(esp + 0x398u));
/* 89e385: test dword ptr [esi + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e38f: je 0x89e39a */
  if (zf) goto L_89e39a;
L_89e391: /* 89e391: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 89e394: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e396: je 0x89e39a */
  if (zf) goto L_89e39a;
L_89e398: /* 89e398: mov esi, eax */
  esi = eax;
L_89e39a: /* 89e39a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89e39c: mov dword ptr [esp + 0xa4], esi */
  W32((uint32_t)(esp + 0xa4u), esi);
/* 89e3a3: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x89e3a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89e3a9: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 89e3af: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e3b1: mov ebp, eax */
  ebp = eax;
/* 89e3b3: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 89e3b7: je 0x89e3d0 */
  if (zf) goto L_89e3d0;
L_89e3b9: /* 89e3b9: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 89e3be: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x89e3c4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 89e3c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e3c6: je 0x89e3d0 */
  if (zf) goto L_89e3d0;
L_89e3c8: /* 89e3c8: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 89e3ce: jmp 0x89e3d2 */
  goto L_89e3d2;
L_89e3d0: /* 89e3d0: mov ecx, ebp */
  ecx = ebp;
L_89e3d2: /* 89e3d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89e3d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89e3d5: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 89e3d9: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x89e3dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89e3df: mov edx, dword ptr [esp + 0x398] */
  edx = R32((uint32_t)(esp + 0x398u));
/* 89e3e6: xor ecx, ecx */
  ecx = 0;
/* 89e3e8: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e3ea: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 89e3ed: mov ebx, eax */
  ebx = eax;
/* 89e3ef: cmp dword ptr [ebx + 0xfc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xfcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e3f5: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 89e3f9: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 89e400: je 0x89e411 */
  if (zf) goto L_89e411;
L_89e402: /* 89e402: mov eax, dword ptr [ebx + 0xf8] */
  eax = R32((uint32_t)(ebx + 0xf8u));
/* 89e408: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 89e40b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 89e40f: jmp 0x89e419 */
  goto L_89e419;
L_89e411: /* 89e411: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
L_89e419: /* 89e419: mov edx, dword ptr [ebx + 0x60] */
  edx = R32((uint32_t)(ebx + 0x60u));
/* 89e41c: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 89e421: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e423: jne 0x89e442 */
  if (!zf) goto L_89e442;
L_89e425: /* 89e425: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 89e428: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e42b: jne 0x89e442 */
  if (!zf) goto L_89e442;
L_89e42d: /* 89e42d: fld dword ptr [ebx + 0x68] */
  { double v = F32((uint32_t)(ebx + 0x68u)); FPUSH(v); }
/* 89e430: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 89e434: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89e436: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89e439: jp 0x89e442 */
  if (pf) goto L_89e442;
L_89e43b: /* 89e43b: mov eax, 1 */
  eax = 0x1u;
/* 89e440: jmp 0x89e444 */
  goto L_89e444;
L_89e442: /* 89e442: xor eax, eax */
  eax = 0;
L_89e444: /* 89e444: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e446: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 89e44a: je 0x89e485 */
  if (zf) goto L_89e485;
L_89e44c: /* 89e44c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e44e: jne 0x89e485 */
  if (!zf) goto L_89e485;
L_89e450: /* 89e450: mov edx, dword ptr [esp + 0x3ac] */
  edx = R32((uint32_t)(esp + 0x3acu));
/* 89e457: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e45b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89e45d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e45e: mov edx, dword ptr [esp + 0x3ac] */
  edx = R32((uint32_t)(esp + 0x3acu));
/* 89e465: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e466: mov edx, dword ptr [esp + 0x3ac] */
  edx = R32((uint32_t)(esp + 0x3acu));
/* 89e46d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e46e: mov edx, dword ptr [esp + 0x3ac] */
  edx = R32((uint32_t)(esp + 0x3acu));
/* 89e475: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e476: mov edx, dword ptr [esp + 0x3ac] */
  edx = R32((uint32_t)(esp + 0x3acu));
/* 89e47d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e47e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89e47f: call dword ptr [eax + 0x114] */
  { uint32_t t = R32((uint32_t)(eax + 0x114u)); esp -= 4; W32(esp, 0x89e485u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89e485: /* 89e485: mov edx, dword ptr [esp + 0x3ac] */
  edx = R32((uint32_t)(esp + 0x3acu));
/* 89e48c: xor eax, eax */
  eax = 0;
/* 89e48e: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e491: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 89e494: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e496: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 89e49a: jne 0x89e4c0 */
  if (!zf) goto L_89e4c0;
L_89e49c: /* 89e49c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89e4a0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 89e4a4: fstp dword ptr [eax + 0x68] */
  WF32((uint32_t)(eax + 0x68u), ST0); FPOP();
/* 89e4a7: mov ecx, dword ptr [0xcfa92c] */
  ecx = R32((uint32_t)(0xcfa92cu));
/* 89e4ad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89e4af: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89e4b3: mov dword ptr [eax + 0x60], edx */
  W32((uint32_t)(eax + 0x60u), edx);
/* 89e4b6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 89e4b9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89e4bd: mov dword ptr [edx + 0x64], ecx */
  W32((uint32_t)(edx + 0x64u), ecx);
L_89e4c0: /* 89e4c0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89e4c4: mov ecx, dword ptr [eax + 0x134] */
  ecx = R32((uint32_t)(eax + 0x134u));
/* 89e4ca: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e4cc: jne 0x89e55c */
  if (!zf) goto L_89e55c;
L_89e4d2: /* 89e4d2: add eax, 0x130 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x130u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e4d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e4d8: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89e4da: mov ecx, eax */
  ecx = eax;
/* 89e4dc: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 89e4e0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e4e6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89e4e6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e4ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e4eb: add ecx, 0x13c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x13cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e4f1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89e4f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e4f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89e4f9: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89e4ff: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e503: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89e505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e506: add ecx, 0x130 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x130u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e50c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89e512u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89e512: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89e518: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e51c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89e51e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e51f: add ecx, 0x13c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x13cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e525: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89e52bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89e52b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89e52f: mov edx, dword ptr [eax + 0xfc] */
  edx = R32((uint32_t)(eax + 0xfcu));
/* 89e535: xor ecx, ecx */
  ecx = 0;
/* 89e537: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e539: jle 0x89e55c */
  if ((zf || sf != of)) goto L_89e55c;
L_89e53b: /* 89e53b: xor edx, edx */
  edx = 0;
/* 89e53d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89e540: /* 89e540: mov eax, dword ptr [eax + 0xf8] */
  eax = R32((uint32_t)(eax + 0xf8u));
/* 89e546: mov dword ptr [eax + edx + 0x68], edi */
  W32((uint32_t)(eax + edx + 0x68u), edi);
/* 89e54a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89e54e: mov esi, dword ptr [eax + 0xfc] */
  esi = R32((uint32_t)(eax + 0xfcu));
/* 89e554: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 89e555: add edx, 0x70 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89e558: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e55a: jl 0x89e540 */
  if ((sf != of)) goto L_89e540;
L_89e55c: /* 89e55c: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 89e562: mov edx, dword ptr [ebp + 0x1e0] */
  edx = R32((uint32_t)(ebp + 0x1e0u));
/* 89e568: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e56a: je 0x89e599 */
  if (zf) goto L_89e599;
L_89e56c: /* 89e56c: add eax, 0xb4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e571: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e572: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 89e574: mov ecx, eax */
  ecx = eax;
/* 89e576: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 89e57a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e580u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89e580: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89e586: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e58a: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 89e58c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e58d: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e593: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89e599u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_89e599: /* 89e599: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 89e5a0: fld dword ptr [eax + 0x284] */
  { double v = F32((uint32_t)(eax + 0x284u)); FPUSH(v); }
/* 89e5a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e5a7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89e5a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89e5aa: fmul dword ptr [ebp + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x80u)));
/* 89e5b0: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 89e5b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e5b5: lea ecx, [esp + 0x158] */
  ecx = (uint32_t)(esp + 0x158u);
/* 89e5bc: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 89e5c0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89e5c2: fmul dword ptr [ebp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x7cu)));
/* 89e5c5: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 89e5c9: fmul dword ptr [ebp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x78u)));
/* 89e5cc: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 89e5d3: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 89e5d7: fmul dword ptr [eax + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x290u)));
/* 89e5dd: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89e5e1: fmul dword ptr [eax + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28cu)));
/* 89e5e7: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 89e5ee: fmul dword ptr [eax + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x288u)));
/* 89e5f4: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 89e5f8: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 89e5fc: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 89e600: call dword ptr [0xcfab94] */
  esp -= 4; W32(esp, 0x89e606u); SPILL(); f_4e2653(); if (g_unwind) return; /* Core!??0FScale@@QAE@ABVFVector@@MW4ESheerAxis@@@Z */ RELOAD();
/* 89e606: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89e60a: cmp dword ptr [edx + 0x78], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x78u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e60d: je 0x89e67a */
  if (zf) goto L_89e67a;
L_89e60f: /* 89e60f: lea eax, [esp + 0x14c] */
  eax = (uint32_t)(esp + 0x14cu);
/* 89e616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e617: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 89e61e: lea ecx, [esp + 0x1d0] */
  ecx = (uint32_t)(esp + 0x1d0u);
/* 89e625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e626: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 89e62c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e62d: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 89e634: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e635: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89e63b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e641: lea edx, [esp + 0x210] */
  edx = (uint32_t)(esp + 0x210u);
/* 89e648: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e649: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e64c: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x89e652u); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 89e652: mov ecx, eax */
  ecx = eax;
/* 89e654: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x89e65au); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 89e65a: mov ecx, eax */
  ecx = eax;
/* 89e65c: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x89e662u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 89e662: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89e666: add edi, 0xc0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e66c: mov ecx, 0xc */
  ecx = 0xcu;
/* 89e671: mov esi, eax */
  esi = eax;
/* 89e673: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89e675: jmp 0x89e753 */
  goto L_89e753;
L_89e67a: /* 89e67a: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 89e681: fld dword ptr [eax + 0x29c] */
  { double v = F32((uint32_t)(eax + 0x29cu)); FPUSH(v); }
/* 89e687: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* 89e68e: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 89e694: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e695: fld dword ptr [eax + 0x298] */
  { double v = F32((uint32_t)(eax + 0x298u)); FPUSH(v); }
/* 89e69b: lea edx, [esp + 0x1d0] */
  edx = (uint32_t)(esp + 0x1d0u);
/* 89e6a2: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 89e6a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e6a9: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 89e6af: lea ecx, [ebp + 0x90] */
  ecx = (uint32_t)(ebp + 0x90u);
/* 89e6b5: fadd dword ptr [eax + 0x294] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x294u)));
/* 89e6bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e6bc: lea edx, [esp + 0x1a8] */
  edx = (uint32_t)(esp + 0x1a8u);
/* 89e6c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e6c4: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e6c9: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 89e6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e6ce: lea eax, [esp + 0x210] */
  eax = (uint32_t)(esp + 0x210u);
/* 89e6d5: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 89e6d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e6da: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 89e6de: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 89e6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e6e6: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89e6ec: lea edx, [esp + 0x108] */
  edx = (uint32_t)(esp + 0x108u);
/* 89e6f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e6f4: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e6f7: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x89e6fdu); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 89e6fd: mov ecx, eax */
  ecx = eax;
/* 89e6ff: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x89e705u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 89e705: mov ecx, eax */
  ecx = eax;
/* 89e707: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x89e70du); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 89e70d: mov ecx, eax */
  ecx = eax;
/* 89e70f: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x89e715u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 89e715: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89e719: mov esi, eax */
  esi = eax;
/* 89e71b: add edi, 0xc0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e721: mov ecx, 0xc */
  ecx = 0xcu;
/* 89e726: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89e728: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89e72c: add eax, 0xc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e731: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 89e733: fadd dword ptr [ebp + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x84u)));
/* 89e739: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89e73b: fld dword ptr [ebp + 0x88] */
  { double v = F32((uint32_t)(ebp + 0x88u)); FPUSH(v); }
/* 89e741: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 89e744: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89e747: fld dword ptr [ebp + 0x8c] */
  { double v = F32((uint32_t)(ebp + 0x8cu)); FPUSH(v); }
/* 89e74d: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 89e750: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_89e753: /* 89e753: mov eax, dword ptr [ebp + 0x2d8] */
  eax = R32((uint32_t)(ebp + 0x2d8u));
/* 89e759: xor esi, esi */
  esi = 0;
/* 89e75b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e75d: jne 0x89e87e */
  if (!zf) goto L_89e87e;
L_89e763: /* 89e763: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 89e767: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 89e76b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89e771u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89e771: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89e777: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 89e779: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e77a: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 89e77e: mov dword ptr [esp + 0x398], esi */
  W32((uint32_t)(esp + 0x398u), esi);
/* 89e785: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89e78bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89e78b: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89e791: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 89e793: lea ecx, [ebp + 0x2d4] */
  ecx = (uint32_t)(ebp + 0x2d4u);
/* 89e799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e79a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89e7a0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89e7a0: cmp dword ptr [ebp + 0x1e0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1e0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e7a6: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 89e7aa: jle 0x89e866 */
  if ((zf || sf != of)) goto L_89e866;
L_89e7b0: /* 89e7b0: xor ebx, ebx */
  ebx = 0;
/* 89e7b2: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 89e7b6: jmp 0x89e7c0 */
  goto L_89e7c0;
L_89e7b8: /* 89e7b8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 89e7bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_89e7c0: /* 89e7c0: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 89e7c4: mov eax, dword ptr [ebp + 0x1dc] */
  eax = R32((uint32_t)(ebp + 0x1dcu));
/* 89e7ca: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e7cc: lea edx, [ebx + ecx] */
  edx = (uint32_t)(ebx + ecx);
/* 89e7cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e7d0: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 89e7d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e7d4: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e7d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e7d8: call 0x6c96dd */
  esp -= 4; W32(esp, 0x89e7ddu); SPILL(); f_6c96dd(); if (g_unwind) return; RELOAD();
/* 89e7dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89e7e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e7e2: jle 0x89e81b */
  if ((zf || sf != of)) goto L_89e81b;
L_89e7e4: /* 89e7e4: mov edx, dword ptr [ebp + 0x1dc] */
  edx = R32((uint32_t)(ebp + 0x1dcu));
/* 89e7ea: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89e7ee: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 89e7f2: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 89e7f6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 89e7f9: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89e7fc: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89e7fe: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 89e801: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e802: lea eax, [esp + 0x1d0] */
  eax = (uint32_t)(esp + 0x1d0u);
/* 89e809: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e80a: mov ecx, edi */
  ecx = edi;
/* 89e80c: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x89e812u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 89e812: mov ecx, 0xc */
  ecx = 0xcu;
/* 89e817: mov esi, eax */
  esi = eax;
/* 89e819: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_89e81b: /* 89e81b: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 89e81f: mov edi, dword ptr [ebp + 0x2d4] */
  edi = R32((uint32_t)(ebp + 0x2d4u));
/* 89e825: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 89e82c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89e82d: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 89e830: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e832: call dword ptr [0xcfabb0] */
  esp -= 4; W32(esp, 0x89e838u); SPILL(); f_4e44bc(); if (g_unwind) return; /* Core!?PivotInverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89e838: mov esi, eax */
  esi = eax;
/* 89e83a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 89e83e: mov ecx, 0xc */
  ecx = 0xcu;
/* 89e843: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89e845: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 89e849: mov ecx, dword ptr [ebp + 0x1e0] */
  ecx = R32((uint32_t)(ebp + 0x1e0u));
/* 89e84f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89e850: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89e853: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89e856: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e858: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 89e85c: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 89e860: jl 0x89e7b8 */
  if ((sf != of)) goto L_89e7b8;
L_89e866: /* 89e866: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 89e86a: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 89e875: call 0x6c31ac */
  esp -= 4; W32(esp, 0x89e87au); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 89e87a: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
L_89e87e: /* 89e87e: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 89e885: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e887: je 0x89ea0c */
  if (zf) goto L_89ea0c;
L_89e88d: /* 89e88d: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 89e893: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e895: je 0x89ea0c */
  if (zf) goto L_89ea0c;
L_89e89b: /* 89e89b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e89f: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 89e8a5: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e8a8: jne 0x89e8bd */
  if (!zf) goto L_89e8bd;
L_89e8aa: /* 89e8aa: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 89e8b0: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 89e8b3: cmp edx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89e8b7: je 0x89e981 */
  if (zf) goto L_89e981;
L_89e8bd: /* 89e8bd: xor esi, esi */
  esi = 0;
/* 89e8bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e8c1: jle 0x89e8f6 */
  if ((zf || sf != of)) goto L_89e8f6;
L_89e8c3: /* 89e8c3: xor edi, edi */
  edi = 0;
/* 89e8c5: jmp 0x89e8d0 */
  goto L_89e8d0;
L_89e8d0: /* 89e8d0: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 89e8d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e8d8: lea ecx, [eax + edi + 0xc] */
  ecx = (uint32_t)(eax + edi + 0xcu);
/* 89e8dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89e8de: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e8e4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89e8e4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e8e8: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 89e8ee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89e8ef: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e8f2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e8f4: jl 0x89e8d0 */
  if ((sf != of)) goto L_89e8d0;
L_89e8f6: /* 89e8f6: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 89e8fc: lea esi, [ecx + 0xa8] */
  esi = (uint32_t)(ecx + 0xa8u);
/* 89e902: xor edi, edi */
  edi = 0;
/* 89e904: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e906: jle 0x89e927 */
  if ((zf || sf != of)) goto L_89e927;
L_89e908: /* 89e908: xor ebx, ebx */
  ebx = 0;
/* 89e90a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89e910: /* 89e910: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89e912: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e914: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 89e917: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x89e91cu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 89e91c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 89e91f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89e920: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89e923: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e925: jl 0x89e910 */
  if ((sf != of)) goto L_89e910;
L_89e927: /* 89e927: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e929: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 89e92b: mov ecx, esi */
  ecx = esi;
/* 89e92d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e933u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89e933: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89e939: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 89e93b: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e941: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89e947u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89e947: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e94b: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 89e951: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89e955: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89e958: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e95c: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 89e962: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 89e968: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e96c: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 89e972: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e974: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 89e975: call 0x6c2667 */
  esp -= 4; W32(esp, 0x89e97au); SPILL(); f_6c2667(); if (g_unwind) return; RELOAD();
/* 89e97a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 89e97e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_89e981: /* 89e981: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 89e987: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e989: je 0x89ea10 */
  if (zf) goto L_89ea10;
L_89e98f: /* 89e98f: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89e995: xor edx, edx */
  edx = 0;
/* 89e997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e999: jle 0x8a0787 */
  if ((zf || sf != of)) goto L_8a0787;
L_89e99f: /* 89e99f: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 89e9a3: xor ebx, ebx */
  ebx = 0;
/* 89e9a5: jmp 0x89e9b0 */
  goto L_89e9b0;
L_89e9a7: /* 89e9a7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e9ab: jmp 0x89e9b0 */
  goto L_89e9b0;
L_89e9b0: /* 89e9b0: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 89e9b6: cmp dword ptr [eax + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e9b9: jle 0x89e9dd */
  if ((zf || sf != of)) goto L_89e9dd;
L_89e9bb: /* 89e9bb: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 89e9be: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 89e9c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e9c3: jl 0x89e9dd */
  if ((sf != of)) goto L_89e9dd;
L_89e9c5: /* 89e9c5: cmp dword ptr [ebp + 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e9cb: jle 0x89e9dd */
  if ((zf || sf != of)) goto L_89e9dd;
L_89e9cd: /* 89e9cd: mov edi, dword ptr [ebp + 0xb4] */
  edi = R32((uint32_t)(ebp + 0xb4u));
/* 89e9d3: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 89e9d6: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89e9d9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89e9db: jmp 0x89e9e6 */
  goto L_89e9e6;
L_89e9dd: /* 89e9dd: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 89e9e3: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_89e9e6: /* 89e9e6: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 89e9ec: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e9ee: mov ecx, 0xc */
  ecx = 0xcu;
/* 89e9f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89e9f5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89e9f9: mov eax, dword ptr [ecx + 0x1e0] */
  eax = R32((uint32_t)(ecx + 0x1e0u));
/* 89e9ff: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 89ea00: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89ea03: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ea05: jl 0x89e9a7 */
  if ((sf != of)) goto L_89e9a7;
L_89ea07: /* 89ea07: jmp 0x8a0787 */
  goto L_8a0787;
L_89ea0c: /* 89ea0c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89ea10: /* 89ea10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89ea12: call dword ptr [edx + 0x12c] */
  { uint32_t t = R32((uint32_t)(edx + 0x12cu)); esp -= 4; W32(esp, 0x89ea18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ea18: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 89ea1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ea1e: je 0x89ea2e */
  if (zf) goto L_89ea2e;
L_89ea20: /* 89ea20: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 89ea25: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ea28: je 0x8a0384 */
  if (zf) goto L_8a0384;
L_89ea2e: /* 89ea2e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89ea32: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89ea34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ea36: call dword ptr [edx + 0x138] */
  { uint32_t t = R32((uint32_t)(edx + 0x138u)); esp -= 4; W32(esp, 0x89ea3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ea3c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 89ea40: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89ea46u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89ea46: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 89ea4a: mov dword ptr [esp + 0x390], 1 */
  W32((uint32_t)(esp + 0x390u), 0x1u);
/* 89ea55: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89ea5bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89ea5b: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89ea62: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 89ea6a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89ea70u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89ea70: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89ea76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ea77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ea79: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 89ea80: mov byte ptr [esp + 0x398], 3 */
  W8((uint32_t)(esp + 0x398u), 0x3u);
/* 89ea88: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89ea8eu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89ea8e: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 89ea92: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 89ea9a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89eaa0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89eaa0: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 89eaa7: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 89eaaf: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89eab5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89eab5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89eab9: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 89eabf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eac1: mov byte ptr [esp + 0x390], 5 */
  W8((uint32_t)(esp + 0x390u), 0x5u);
/* 89eac9: je 0x89f339 */
  if (zf) goto L_89f339;
L_89eacf: /* 89eacf: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89ead3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ead5: jne 0x89f339 */
  if (!zf) goto L_89f339;
L_89eadb: /* 89eadb: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 89eadf: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89eae5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89eae5: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89eae9: mov eax, dword ptr [eax + 0x1e0] */
  eax = R32((uint32_t)(eax + 0x1e0u));
/* 89eaef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89eaf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89eaf2: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 89eaf6: mov byte ptr [esp + 0x398], 6 */
  W8((uint32_t)(esp + 0x398u), 0x6u);
/* 89eafe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89eb04u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89eb04: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89eb08: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 89eb0e: xor ebp, ebp */
  ebp = 0;
/* 89eb10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89eb12: jle 0x89f312 */
  if ((zf || sf != of)) goto L_89f312;
L_89eb18: /* 89eb18: jmp 0x89eb20 */
  goto L_89eb20;
L_89eb20: /* 89eb20: mov esi, dword ptr [edx + 0xf8] */
  esi = R32((uint32_t)(edx + 0xf8u));
/* 89eb26: mov eax, ebp */
  eax = ebp;
/* 89eb28: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 89eb2b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89eb2d: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 89eb33: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89eb36: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb38: mov ecx, 0xc */
  ecx = 0xcu;
/* 89eb3d: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 89eb44: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 89eb48: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89eb4a: jne 0x89eb59 */
  if (!zf) goto L_89eb59;
L_89eb4c: /* 89eb4c: mov dword ptr [esp + 0x84], 0x3f800000 */
  W32((uint32_t)(esp + 0x84u), 0x3f800000u);
/* 89eb57: jmp 0x89eb63 */
  goto L_89eb63;
L_89eb59: /* 89eb59: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 89eb5c: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
L_89eb63: /* 89eb63: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89eb66: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89eb69: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89eb6f: /* 89eb6f: mov ecx, dword ptr [edx + 0xac] */
  ecx = R32((uint32_t)(edx + 0xacu));
/* 89eb75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb77: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eb7d: /* 89eb7d: mov ecx, dword ptr [edx + 0xa8] */
  ecx = R32((uint32_t)(edx + 0xa8u));
/* 89eb83: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89eb86: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 89eb89: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 89eb8c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb8e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89eb92: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eb98: /* 89eb98: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89eb9f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89eba5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89eba7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebaa: jne 0x89f303 */
  if (!zf) goto L_89f303;
L_89ebb0: /* 89ebb0: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 89ebb4: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 89ebb7: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89ebbb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ebc1: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 89ebc3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ebc5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ebc8: jp 0x89ebdc */
  if (pf) goto L_89ebdc;
L_89ebca: /* 89ebca: mov eax, dword ptr [edx + 0x164] */
  eax = R32((uint32_t)(edx + 0x164u));
/* 89ebd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebd2: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 89ebda: jne 0x89ebe4 */
  if (!zf) goto L_89ebe4;
L_89ebdc: /* 89ebdc: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_89ebe4: /* 89ebe4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebe6: je 0x89ec0c */
  if (zf) goto L_89ec0c;
L_89ebe8: /* 89ebe8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89ebeb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89ebed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ebee: mov ecx, esi */
  ecx = esi;
/* 89ebf0: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x89ebf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ebf3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89ebf5: mov ebx, eax */
  ebx = eax;
/* 89ebf7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89ebfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ebfb: mov ecx, esi */
  ecx = esi;
/* 89ebfd: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 89ec01: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x89ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ec04: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89ec08: mov ecx, eax */
  ecx = eax;
/* 89ec0a: jmp 0x89ec14 */
  goto L_89ec14;
L_89ec0c: /* 89ec0c: xor ebx, ebx */
  ebx = 0;
/* 89ec0e: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 89ec12: xor ecx, ecx */
  ecx = 0;
L_89ec14: /* 89ec14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec16: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 89ec21: je 0x89ec72 */
  if (zf) goto L_89ec72;
L_89ec23: /* 89ec23: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 89ec26: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 89ec2d: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 89ec34: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ec3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ec3c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec3f: jne 0x89ecdb */
  if (!zf) goto L_89ecdb;
L_89ec45: /* 89ec45: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 89ec4c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 89ec52: fcomp dword ptr [esp + 0xa0] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xa0u)));
  FPOP();
/* 89ec59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ec5b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ec5e: jp 0x89ec68 */
  if (pf) goto L_89ec68;
L_89ec60: /* 89ec60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89ec62: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_89ec68: /* 89ec68: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 89ec6b: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
L_89ec72: /* 89ec72: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ec76: je 0x89f303 */
  if (zf) goto L_89f303;
L_89ec7c: /* 89ec7c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 89ec80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec82: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ec86: jne 0x89ece3 */
  if (!zf) goto L_89ece3;
L_89ec88: /* 89ec88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec8a: je 0x89f303 */
  if (zf) goto L_89f303;
L_89ec90: /* 89ec90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec92: jne 0x89ef36 */
  if (!zf) goto L_89ef36;
L_89ec98: /* 89ec98: mov eax, dword ptr [edx + 0x164] */
  eax = R32((uint32_t)(edx + 0x164u));
/* 89ec9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eca0: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eca6: /* 89eca6: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89ecaa: mov esi, dword ptr [ecx + 0x1e0] */
  esi = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecb0: xor eax, eax */
  eax = 0;
/* 89ecb2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ecb4: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89ecba: /* 89ecba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89ecc0: /* 89ecc0: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 89ecc7: mov byte ptr [eax + edx], 2 */
  W8((uint32_t)(eax + edx), 0x2u);
/* 89eccb: mov edx, dword ptr [ecx + 0x1e0] */
  edx = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89ecd2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ecd4: jl 0x89ecc0 */
  if ((sf != of)) goto L_89ecc0;
L_89ecd6: /* 89ecd6: jmp 0x89f2ff */
  goto L_89f2ff;
L_89ecdb: /* 89ecdb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89ece1: jmp 0x89ec68 */
  goto L_89ec68;
L_89ece3: /* 89ece3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ece5: jne 0x89ec90 */
  if (!zf) goto L_89ec90;
L_89ece7: /* 89ece7: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89eceb: mov eax, dword ptr [ecx + 0x1e0] */
  eax = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecf1: xor ebx, ebx */
  ebx = 0;
/* 89ecf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ecf5: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89ecfb: /* 89ecfb: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 89ecff: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 89ed03: xor eax, eax */
  eax = 0;
/* 89ed05: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 89ed09: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 89ed0d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_89ed11: /* 89ed11: cmp dword ptr [esi + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed14: jne 0x89ed23 */
  if (!zf) goto L_89ed23;
L_89ed16: /* 89ed16: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89ed1a: mov dword ptr [edx + ebx*4], 1 */
  W32((uint32_t)(edx + ebx*4), 0x1u);
/* 89ed21: jmp 0x89ed4f */
  goto L_89ed4f;
L_89ed23: /* 89ed23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ed25: je 0x89ed46 */
  if (zf) goto L_89ed46;
L_89ed27: /* 89ed27: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89ed2b: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 89ed31: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89ed35: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 89ed39: cmp dword ptr [ecx + eax*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed3d: jne 0x89ed46 */
  if (!zf) goto L_89ed46;
L_89ed3f: /* 89ed3f: mov eax, 1 */
  eax = 0x1u;
/* 89ed44: jmp 0x89ed48 */
  goto L_89ed48;
L_89ed46: /* 89ed46: xor eax, eax */
  eax = 0;
L_89ed48: /* 89ed48: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89ed4c: mov dword ptr [edx + ebx*4], eax */
  W32((uint32_t)(edx + ebx*4), eax);
L_89ed4f: /* 89ed4f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 89ed53: cmp dword ptr [eax + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed57: je 0x89eefd */
  if (zf) goto L_89eefd;
L_89ed5d: /* 89ed5d: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 89ed60: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ed64: jl 0x89eefd */
  if ((sf != of)) goto L_89eefd;
L_89ed6a: /* 89ed6a: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 89ed6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ed6f: jne 0x89edd4 */
  if (!zf) goto L_89edd4;
L_89ed71: /* 89ed71: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89ed73: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ed75: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89ed79: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ed7fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ed7f: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89ed83: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 89ed86: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89ed89: mov dword ptr [esi + edx + 0x24], 0 */
  W32((uint32_t)(esi + edx + 0x24u), 0x0u);
/* 89ed91: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 89ed95: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89ed99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ed9b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89ed9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ed9e: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 89eda1: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 89eda4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89eda5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 89eda8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89eda9: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 89edb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edb1: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89edb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89edb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edb7: call 0x6c9f4d */
  esp -= 4; W32(esp, 0x89edbcu); SPILL(); f_6c9f4d(); if (g_unwind) return; RELOAD();
/* 89edbc: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 89edc0: mov dword ptr [esi + ecx + 0x20], ebp */
  W32((uint32_t)(esi + ecx + 0x20u), ebp);
/* 89edc4: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 89edc8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89edcb: mov dword ptr [esi + edx + 0x1c], ebx */
  W32((uint32_t)(esi + edx + 0x1cu), ebx);
/* 89edcf: jmp 0x89eef9 */
  goto L_89eef9;
L_89edd4: /* 89edd4: cmp dword ptr [esp + 0x14], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89edd8: je 0x89ee17 */
  if (zf) goto L_89ee17;
L_89edda: /* 89edda: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89edde: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 89ede5: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89ede9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89edeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89edec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89eded: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 89edf0: lea eax, [esp + 0xe0] */
  eax = (uint32_t)(esp + 0xe0u);
/* 89edf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edf8: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89edfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89edfd: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89ee01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ee02: lea eax, [esp + 0x108] */
  eax = (uint32_t)(esp + 0x108u);
/* 89ee09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ee0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ee0b: call 0x6c8369 */
  esp -= 4; W32(esp, 0x89ee10u); SPILL(); f_6c8369(); if (g_unwind) return; RELOAD();
/* 89ee10: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89ee13: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_89ee17: /* 89ee17: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ee1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ee1d: jle 0x89ee7e */
  if ((zf || sf != of)) goto L_89ee7e;
L_89ee1f: /* 89ee1f: cmp dword ptr [esi + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ee22: jne 0x89ee7e */
  if (!zf) goto L_89ee7e;
L_89ee24: /* 89ee24: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 89ee26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ee28: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89ee2c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ee32u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ee32: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89ee39: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee3d: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ee40: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* 89ee43: mov ecx, 0xc */
  ecx = 0xcu;
/* 89ee48: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89ee4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89ee51: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89ee55: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 89ee59: mov dword ptr [eax + ecx + 0x34], ebp */
  W32((uint32_t)(eax + ecx + 0x34u), ebp);
/* 89ee5d: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee61: mov dword ptr [eax + edx + 0x30], ebx */
  W32((uint32_t)(eax + edx + 0x30u), ebx);
/* 89ee65: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89ee69: mov dword ptr [eax + ecx + 0x38], 0 */
  W32((uint32_t)(eax + ecx + 0x38u), 0x0u);
/* 89ee71: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee75: fstp dword ptr [eax + edx + 0x3c] */
  WF32((uint32_t)(eax + edx + 0x3cu), ST0); FPOP();
/* 89ee79: jmp 0x89eef9 */
  goto L_89eef9;
L_89ee7e: /* 89ee7e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89ee80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ee82: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89ee86: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ee8cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ee8c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89ee90: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 89ee93: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ee96: mov dword ptr [ecx + eax + 0x24], 0 */
  W32((uint32_t)(ecx + eax + 0x24u), 0x0u);
/* 89ee9e: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 89eea2: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89eea6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89eea8: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 89eeaa: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eeae: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89eeb0: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89eeb2: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 89eeb5: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 89eeb8: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 89eebb: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 89eebe: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89eec1: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89eec4: mov edx, dword ptr [esp + 0xd0] */
  edx = R32((uint32_t)(esp + 0xd0u));
/* 89eecb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 89eecf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89eed1: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eed5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 89eed7: lea edx, [edx + eax + 0x10] */
  edx = (uint32_t)(edx + eax + 0x10u);
/* 89eedb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89eedd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 89eee0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 89eee3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89eee6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89eee9: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eeed: mov dword ptr [edx + eax + 0x20], ebp */
  W32((uint32_t)(edx + eax + 0x20u), ebp);
/* 89eef1: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89eef5: mov dword ptr [ecx + eax + 0x1c], ebx */
  W32((uint32_t)(ecx + eax + 0x1cu), ebx);
L_89eef9: /* 89eef9: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_89eefd: /* 89eefd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 89ef01: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89ef05: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ef09: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89ef0c: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89ef0f: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 89ef13: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89ef17: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 89ef1b: mov ecx, dword ptr [edx + 0x1e0] */
  ecx = R32((uint32_t)(edx + 0x1e0u));
/* 89ef21: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89ef22: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89ef25: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ef27: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 89ef2b: jl 0x89ed11 */
  if ((sf != of)) goto L_89ed11;
L_89ef31: /* 89ef31: jmp 0x89f2ff */
  goto L_89f2ff;
L_89ef36: /* 89ef36: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 89ef3a: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89ef3d: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 89ef40: fdiv dword ptr [esi + 0x68] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x68u)));
/* 89ef43: lea ebx, [esi + 0x6c] */
  ebx = (uint32_t)(esi + 0x6cu);
/* 89ef46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89ef47: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 89ef4d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 89ef51: fild dword ptr [ecx + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 89ef54: mov ecx, ebx */
  ecx = ebx;
/* 89ef56: fdivr dword ptr [0xa08220] */
  ST0 = (F32((uint32_t)(0xa08220u))) / ST0;
/* 89ef5c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 89ef60: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x89ef66u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 89ef66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ef68: jne 0x89efa7 */
  if (!zf) goto L_89efa7;
L_89ef6a: /* 89ef6a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 89ef6e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ef74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ef76: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ef79: jnp 0x89efa7 */
  if (!pf) goto L_89efa7;
L_89ef7b: /* 89ef7b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 89ef7f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89ef85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ef87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ef8a: je 0x89efa7 */
  if (zf) goto L_89efa7;
L_89ef8c: /* 89ef8c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 89ef92: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 89ef95: fsub dword ptr [esi + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x60u)));
/* 89ef98: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 89ef9b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89ef9f: fadd dword ptr [esi + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x60u)));
/* 89efa2: fstp dword ptr [esi + 0x60] */
  WF32((uint32_t)(esi + 0x60u), ST0); FPOP();
/* 89efa5: jmp 0x89efc1 */
  goto L_89efc1;
L_89efa7: /* 89efa7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 89efab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89efad: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 89efb0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 89efb8: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 89efba: mov dword ptr [esi + 0x60], 0 */
  W32((uint32_t)(esi + 0x60u), 0x0u);
L_89efc1: /* 89efc1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89efc5: mov ecx, dword ptr [eax + 0x1e0] */
  ecx = R32((uint32_t)(eax + 0x1e0u));
/* 89efcb: xor edi, edi */
  edi = 0;
/* 89efcd: xor ebx, ebx */
  ebx = 0;
/* 89efcf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89efd1: jle 0x89f2ff */
  if ((zf || sf != of)) goto L_89f2ff;
L_89efd7: /* 89efd7: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 89efdb: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 89efdf: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 89efe3: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
L_89efe7: /* 89efe7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89efeb: cmp dword ptr [ecx + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89efee: jne 0x89effd */
  if (!zf) goto L_89effd;
L_89eff0: /* 89eff0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89eff4: mov dword ptr [edx + ebx*4], 1 */
  W32((uint32_t)(edx + ebx*4), 0x1u);
/* 89effb: jmp 0x89f029 */
  goto L_89f029;
L_89effd: /* 89effd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89efff: je 0x89f020 */
  if (zf) goto L_89f020;
L_89f001: /* 89f001: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89f005: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 89f00b: mov edx, dword ptr [ecx + edi + 0x34] */
  edx = R32((uint32_t)(ecx + edi + 0x34u));
/* 89f00f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 89f013: cmp dword ptr [eax + edx*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f017: jne 0x89f020 */
  if (!zf) goto L_89f020;
L_89f019: /* 89f019: mov eax, 1 */
  eax = 0x1u;
/* 89f01e: jmp 0x89f022 */
  goto L_89f022;
L_89f020: /* 89f020: xor eax, eax */
  eax = 0;
L_89f022: /* 89f022: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 89f026: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
L_89f029: /* 89f029: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89f02d: cmp dword ptr [edx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f031: je 0x89f2cf */
  if (zf) goto L_89f2cf;
L_89f037: /* 89f037: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 89f03e: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f044u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f044: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f04b: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f051u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f051: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89f055: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 89f058: lea eax, [ecx + ebx*4] */
  eax = (uint32_t)(ecx + ebx*4);
/* 89f05b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f05e: jl 0x89f2cf */
  if ((sf != of)) goto L_89f2cf;
L_89f064: /* 89f064: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f068: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 89f06b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f06d: je 0x89f11e */
  if (zf) goto L_89f11e;
L_89f073: /* 89f073: mov ecx, dword ptr [ecx + 0x64] */
  ecx = R32((uint32_t)(ecx + 0x64u));
/* 89f076: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f078: jne 0x89f11e */
  if (!zf) goto L_89f11e;
L_89f07e: /* 89f07e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f080: je 0x89f11e */
  if (zf) goto L_89f11e;
L_89f086: /* 89f086: cmp dword ptr [esp + 0x14], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f08a: je 0x89f0c0 */
  if (zf) goto L_89f0c0;
L_89f08c: /* 89f08c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f090: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89f094: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f095: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89f099: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 89f0a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f0a1: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 89f0a5: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* 89f0a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f0aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f0ab: lea ecx, [esp + 0x108] */
  ecx = (uint32_t)(esp + 0x108u);
/* 89f0b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f0b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f0b4: call 0x6c8369 */
  esp -= 4; W32(esp, 0x89f0b9u); SPILL(); f_6c8369(); if (g_unwind) return; RELOAD();
/* 89f0b9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f0bc: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_89f0c0: /* 89f0c0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 89f0c2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89f0c4: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89f0c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89f0ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89f0ce: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f0d2: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f0d5: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 89f0d8: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f0dd: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89f0e4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f0e6: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89f0ea: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 89f0ee: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 89f0f2: mov dword ptr [edx + eax + 0x34], ebp */
  W32((uint32_t)(edx + eax + 0x34u), ebp);
/* 89f0f6: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f0fa: mov dword ptr [ecx + eax + 0x30], ebx */
  W32((uint32_t)(ecx + eax + 0x30u), ebx);
/* 89f0fe: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89f102: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f106: mov dword ptr [edx + eax + 0x38], 1 */
  W32((uint32_t)(edx + eax + 0x38u), 0x1u);
/* 89f10e: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 89f111: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f115: mov dword ptr [ecx + eax + 0x3c], edx */
  W32((uint32_t)(ecx + eax + 0x3cu), edx);
/* 89f119: jmp 0x89f2cf */
  goto L_89f2cf;
L_89f11e: /* 89f11e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f122: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 89f124: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f126: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f127: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89f12e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f12f: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* 89f136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f13a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89f13b: call 0x6c9f4d */
  esp -= 4; W32(esp, 0x89f140u); SPILL(); f_6c9f4d(); if (g_unwind) return; RELOAD();
/* 89f140: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89f144: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f14a: add ecx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f14e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89f150: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 89f157: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89f15a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89f15d: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* 89f164: mov edx, dword ptr [eax + 0x130] */
  edx = R32((uint32_t)(eax + 0x130u));
/* 89f16a: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 89f171: add edx, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f175: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89f177: mov dword ptr [esp + 0xdc], eax */
  W32((uint32_t)(esp + 0xdcu), eax);
/* 89f17e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f181: mov dword ptr [esp + 0xe0], ecx */
  W32((uint32_t)(esp + 0xe0u), ecx);
/* 89f188: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 89f18b: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 89f192: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 89f195: mov dword ptr [esp + 0xe8], ecx */
  W32((uint32_t)(esp + 0xe8u), ecx);
/* 89f19c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f19f: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 89f1a6: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f1acu); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f1ac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89f1b0: lea edx, [esp + 0x160] */
  edx = (uint32_t)(esp + 0x160u);
/* 89f1b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f1b9: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 89f1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f1c1: lea edx, [esp + 0xcc] */
  edx = (uint32_t)(esp + 0xccu);
/* 89f1c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f1c9: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89f1ceu); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89f1ce: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 89f1d5: fsub dword ptr [esp + 0x90] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x90u)));
/* 89f1dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f1df: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 89f1e6: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89f1e8: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f1ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89f1f1: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 89f1f8: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89f1fc: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f203: fstp dword ptr [esp + 0x178] */
  WF32((uint32_t)(esp + 0x178u), ST0); FPOP();
/* 89f20a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f20e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 89f210: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 89f214: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f218: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89f21a: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 89f221: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f223: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f225: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f229: fmul dword ptr [esp + 0x178] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x178u)));
/* 89f230: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 89f237: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 89f23e: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 89f242: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89f249: fadd dword ptr [esp + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x90u)));
/* 89f250: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 89f257: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 89f25e: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 89f262: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 89f266: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 89f26a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89f270u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89f270: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f274: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 89f277: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f27a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f27c: mov edx, dword ptr [esp + 0x160] */
  edx = R32((uint32_t)(esp + 0x160u));
/* 89f283: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f285: mov edx, dword ptr [esp + 0x164] */
  edx = R32((uint32_t)(esp + 0x164u));
/* 89f28c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f28f: mov edx, dword ptr [esp + 0x168] */
  edx = R32((uint32_t)(esp + 0x168u));
/* 89f296: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f299: mov edx, dword ptr [esp + 0x16c] */
  edx = R32((uint32_t)(esp + 0x16cu));
/* 89f2a0: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 89f2a3: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f2a7: lea edx, [ecx + eax + 0x10] */
  edx = (uint32_t)(ecx + eax + 0x10u);
/* 89f2ab: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 89f2af: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89f2b1: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 89f2b5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f2b8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89f2bc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89f2bf: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89f2c3: mov dword ptr [edx + eax + 0x20], ebp */
  W32((uint32_t)(edx + eax + 0x20u), ebp);
/* 89f2c7: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f2cb: mov dword ptr [ecx + eax + 0x1c], ebx */
  W32((uint32_t)(ecx + eax + 0x1cu), ebx);
L_89f2cf: /* 89f2cf: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 89f2d3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89f2d7: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f2da: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 89f2de: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89f2e2: mov eax, dword ptr [edx + 0x1e0] */
  eax = R32((uint32_t)(edx + 0x1e0u));
/* 89f2e8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89f2e9: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f2ec: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f2ef: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f2f1: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 89f2f5: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 89f2f9: jl 0x89efe7 */
  if ((sf != of)) goto L_89efe7;
L_89f2ff: /* 89f2ff: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_89f303: /* 89f303: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 89f309: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 89f30a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f30c: jl 0x89eb20 */
  if ((sf != of)) goto L_89eb20;
L_89f312: /* 89f312: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f314: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89f316: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 89f31a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89f320u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89f320: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 89f324: mov byte ptr [esp + 0x390], 5 */
  W8((uint32_t)(esp + 0x390u), 0x5u);
/* 89f32c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x89f331u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 89f331: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f335: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_89f339: /* 89f339: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 89f33d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89f33f: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 89f343: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 89f34b: jle 0x89f68a */
  if ((zf || sf != of)) goto L_89f68a;
L_89f351: /* 89f351: jmp 0x89f360 */
  goto L_89f360;
L_89f353: /* 89f353: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 89f35a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89f360: /* 89f360: mov edi, eax */
  edi = eax;
/* 89f362: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* 89f365: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f368: mov dword ptr [esp + 0x88], eax */
  W32((uint32_t)(esp + 0x88u), eax);
/* 89f36f: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 89f372: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f374: jne 0x89f3ce */
  if (!zf) goto L_89f3ce;
L_89f376: /* 89f376: mov edx, dword ptr [ecx + 0x130] */
  edx = R32((uint32_t)(ecx + 0x130u));
/* 89f37c: mov eax, esi */
  eax = esi;
/* 89f37e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f381: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f383: mov ecx, edi */
  ecx = edi;
/* 89f385: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89f387: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89f389: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89f38c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89f38f: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 89f392: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89f395: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89f398: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 89f39b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f39f: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f3a5: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f3a8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 89f3aa: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f3ad: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 89f3b0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f3b2: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 89f3b5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f3b8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89f3bb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f3be: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 89f3c5: mov byte ptr [esi + ecx], 1 */
  W8((uint32_t)(esi + ecx), 0x1u);
/* 89f3c9: jmp 0x89f671 */
  goto L_89f671;
L_89f3ce: /* 89f3ce: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 89f3d4: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 89f3d7: fld dword ptr [edx + eax + 0x50] */
  { double v = F32((uint32_t)(edx + eax + 0x50u)); FPUSH(v); }
/* 89f3db: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f3e1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f3e3: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89f3e6: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 89f3ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f3ec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89f3ef: jne 0x89f426 */
  if (!zf) goto L_89f426;
L_89f3f1: /* 89f3f1: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f3f4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f3fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f3fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f3ff: jp 0x89f40b */
  if (pf) goto L_89f40b;
L_89f401: /* 89f401: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 89f409: jmp 0x89f437 */
  goto L_89f437;
L_89f40b: /* 89f40b: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f40e: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89f411: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f413: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f416: jp 0x89f426 */
  if (pf) goto L_89f426;
L_89f418: /* 89f418: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f41b: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89f41e: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 89f422: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
L_89f426: /* 89f426: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f42a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89f430: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f432: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f435: jp 0x89f444 */
  if (pf) goto L_89f444;
L_89f437: /* 89f437: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 89f43e: cmp byte ptr [esi + edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 89f442: je 0x89f44e */
  if (zf) goto L_89f44e;
L_89f444: /* 89f444: mov eax, dword ptr [ecx + 0x198] */
  eax = R32((uint32_t)(ecx + 0x198u));
/* 89f44a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f44c: je 0x89f4b7 */
  if (zf) goto L_89f4b7;
L_89f44e: /* 89f44e: mov edx, dword ptr [ebp + 0x1dc] */
  edx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f454: mov eax, esi */
  eax = esi;
/* 89f456: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f459: lea edx, [edx + eax + 8] */
  edx = (uint32_t)(edx + eax + 0x8u);
/* 89f45d: mov ebx, esi */
  ebx = esi;
/* 89f45f: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89f462: add ebx, dword ptr [ecx + 0x130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x130u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89f468: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f46a: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 89f46c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f46f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 89f472: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 89f475: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 89f478: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 89f47b: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 89f47e: mov ecx, dword ptr [ebp + 0x1dc] */
  ecx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f484: lea edx, [ecx + eax + 0x18] */
  edx = (uint32_t)(ecx + eax + 0x18u);
/* 89f488: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f48c: mov ecx, dword ptr [ecx + 0x13c] */
  ecx = R32((uint32_t)(ecx + 0x13cu));
/* 89f492: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 89f495: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 89f498: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f49a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89f49c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f49f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 89f4a2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f4a5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89f4a8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 89f4af: mov byte ptr [esi + eax], 1 */
  W8((uint32_t)(esi + eax), 0x1u);
/* 89f4b3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89f4b7: /* 89f4b7: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f4bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f4c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f4c3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f4c6: jnp 0x89f675 */
  if (!pf) goto L_89f675;
L_89f4cc: /* 89f4cc: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f4d0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89f4d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f4d8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89f4db: jne 0x89f535 */
  if (!zf) goto L_89f535;
L_89f4dd: /* 89f4dd: mov eax, dword ptr [ecx + 0x130] */
  eax = R32((uint32_t)(ecx + 0x130u));
/* 89f4e3: mov edx, esi */
  edx = esi;
/* 89f4e5: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f4e8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f4ea: mov eax, edi */
  eax = edi;
/* 89f4ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89f4ee: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89f4f0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89f4f3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f4f6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89f4f9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89f4fc: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 89f4ff: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 89f502: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f506: mov eax, dword ptr [edx + 0x13c] */
  eax = R32((uint32_t)(edx + 0x13cu));
/* 89f50c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f50f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89f511: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 89f514: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 89f517: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f519: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 89f51c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89f51f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 89f522: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f525: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 89f52c: mov byte ptr [esi + eax], 1 */
  W8((uint32_t)(esi + eax), 0x1u);
/* 89f530: jmp 0x89f671 */
  goto L_89f671;
L_89f535: /* 89f535: mov eax, dword ptr [ecx + 0x130] */
  eax = R32((uint32_t)(ecx + 0x130u));
/* 89f53b: mov ebx, esi */
  ebx = esi;
/* 89f53d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89f540: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f542: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f549: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 89f54d: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f553u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f553: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 89f557: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 89f55b: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f562: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f563: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89f565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f566: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89f56bu); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89f56b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f56f: mov edx, dword ptr [ecx + 0x130] */
  edx = R32((uint32_t)(ecx + 0x130u));
/* 89f575: mov eax, dword ptr [esp + 0xd0] */
  eax = R32((uint32_t)(esp + 0xd0u));
/* 89f57c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f57e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f580: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 89f587: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f58a: mov eax, dword ptr [esp + 0xd8] */
  eax = R32((uint32_t)(esp + 0xd8u));
/* 89f591: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f594: mov ecx, dword ptr [esp + 0xdc] */
  ecx = R32((uint32_t)(esp + 0xdcu));
/* 89f59b: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89f59e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 89f5a2: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f5a8: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f5ab: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 89f5ae: mov edx, eax */
  edx = eax;
/* 89f5b0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f5b2: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 89f5b9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f5bc: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f5bf: mov dword ptr [esp + 0x8c], ecx */
  W32((uint32_t)(esp + 0x8cu), ecx);
/* 89f5c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f5c9: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 89f5d0: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f5d3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 89f5d5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 89f5d8: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 89f5dc: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 89f5df: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 89f5e3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 89f5e7: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f5ee: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 89f5f2: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 89f5f6: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 89f5fa: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 89f5fe: fsub dword ptr [esp + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x78u)));
/* 89f602: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 89f609: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f60d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 89f60f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 89f613: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f617: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89f619: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 89f61d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f61f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f621: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f625: fmul dword ptr [esp + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa8u)));
/* 89f62c: fstp dword ptr [esp + 0x170] */
  WF32((uint32_t)(esp + 0x170u), ST0); FPOP();
/* 89f633: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 89f63a: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 89f63e: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 89f642: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 89f646: fld dword ptr [esp + 0x170] */
  { double v = F32((uint32_t)(esp + 0x170u)); FPUSH(v); }
/* 89f64d: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 89f651: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 89f655: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89f659: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89f65b: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 89f65f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 89f663: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 89f666: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 89f66a: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 89f66e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_89f671: /* 89f671: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89f675: /* 89f675: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 89f679: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 89f67d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89f67e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f680: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 89f684: jl 0x89f353 */
  if ((sf != of)) goto L_89f353;
L_89f68a: /* 89f68a: xor ebx, ebx */
  ebx = 0;
/* 89f68c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f68d: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89f68f: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89f693: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89f699u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89f699: cmp dword ptr [esp + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f69d: je 0x89f835 */
  if (zf) goto L_89f835;
L_89f6a3: /* 89f6a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f6a7: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f6ad: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89f6af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89f6b2: mov edx, esp */
  edx = esp;
/* 89f6b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f6b6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 89f6b9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89f6bc: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 89f6bf: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89f6c2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f6c5: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89f6c8: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* 89f6cf: call 0x6c867a */
  esp -= 4; W32(esp, 0x89f6d4u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89f6d4: mov esi, eax */
  esi = eax;
/* 89f6d6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f6da: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f6df: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 89f6e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f6e8: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 89f6ee: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f6f0: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 89f6f7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f6fa: add eax, 0x1d8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f6ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f700: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 89f707: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f70a: lea eax, [esp + 0x120] */
  eax = (uint32_t)(esp + 0x120u);
/* 89f711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f712: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 89f719: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 89f720: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89f726u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89f726: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89f72a: add edi, 0x270 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x270u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f730: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f735: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89f73c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f73e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89f742: add edi, 0x2a0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2a0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f748: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f74d: lea esi, [esp + 0x11c] */
  esi = (uint32_t)(esp + 0x11cu);
/* 89f754: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f756: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f75a: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 89f761: add ecx, 0x1a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f767: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f769: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 89f770: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89f773: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 89f77a: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 89f781: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f785: lea ecx, [esp + 0x120] */
  ecx = (uint32_t)(esp + 0x120u);
/* 89f78c: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x89f792u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 89f792: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f796: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f798: add ecx, 0x1b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f79e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f7a0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f7a3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f7a6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89f7a9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89f7ac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f7b0: mov dword ptr [ecx + 0x208], ebx */
  W32((uint32_t)(ecx + 0x208u), ebx);
/* 89f7b6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89f7b8: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 89f7bf: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 89f7c5: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 89f7c9: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 89f7cf: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 89f7d2: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 89f7d9: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 89f7e1: call 0x6c9543 */
  esp -= 4; W32(esp, 0x89f7e6u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 89f7e6: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 89f7ea: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 89f7f2: call 0x6c4499 */
  esp -= 4; W32(esp, 0x89f7f7u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 89f7f7: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89f7fe: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 89f806: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x89f80bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 89f80b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 89f80f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 89f817: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x89f81cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 89f81c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 89f820: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 89f82b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x89f830u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 89f830: jmp 0x8a0787 */
  goto L_8a0787;
L_89f835: /* 89f835: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89f83b: xor esi, esi */
  esi = 0;
/* 89f83d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f83f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f843: jle 0x89f9c4 */
  if ((zf || sf != of)) goto L_89f9c4;
L_89f849: /* 89f849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_89f850: /* 89f850: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 89f857: cmp byte ptr [esi + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 89f85b: je 0x89f869 */
  if (zf) goto L_89f869;
L_89f85d: /* 89f85d: cmp dword ptr [eax + 0x198], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x198u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f863: je 0x89f954 */
  if (zf) goto L_89f954;
L_89f869: /* 89f869: cmp dword ptr [eax + 0x2d4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2d4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f86f: je 0x89f8f6 */
  if (zf) goto L_89f8f6;
L_89f875: /* 89f875: mov edx, dword ptr [eax + 0x2d0] */
  edx = R32((uint32_t)(eax + 0x2d0u));
/* 89f87b: cmp dword ptr [edx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f87e: je 0x89f8f6 */
  if (zf) goto L_89f8f6;
L_89f880: /* 89f880: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f886: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 89f88b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f88c: mov edi, esi */
  edi = esi;
/* 89f88e: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 89f891: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f892: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f894: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f895: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 89f89c: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x89f8a2u); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 89f8a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89f8a4: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 89f8a6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f8a9: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 89f8ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89f8af: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 89f8b2: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89f8b5: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 89f8b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f8bc: mov edx, dword ptr [ecx + 0x13c] */
  edx = R32((uint32_t)(ecx + 0x13cu));
/* 89f8c2: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 89f8c5: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 89f8c8: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 89f8d0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 89f8d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89f8d6: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 89f8de: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 89f8e2: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 89f8ea: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89f8ee: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89f8f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89f8f4: jmp 0x89f950 */
  goto L_89f950;
L_89f8f6: /* 89f8f6: mov edx, dword ptr [ebp + 0x1dc] */
  edx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f8fc: mov ecx, esi */
  ecx = esi;
/* 89f8fe: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89f901: lea edx, [ecx + edx + 8] */
  edx = (uint32_t)(ecx + edx + 0x8u);
/* 89f905: mov edi, esi */
  edi = esi;
/* 89f907: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 89f90a: add edi, dword ptr [eax + 0x130] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x130u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f910: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89f912: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 89f914: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 89f917: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 89f91a: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 89f91d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 89f920: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 89f923: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 89f926: mov eax, dword ptr [ebp + 0x1dc] */
  eax = R32((uint32_t)(ebp + 0x1dcu));
/* 89f92c: lea ecx, [ecx + eax + 0x18] */
  ecx = (uint32_t)(ecx + eax + 0x18u);
/* 89f930: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f934: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* 89f93a: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f93d: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 89f940: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89f942: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f944: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 89f947: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89f94a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89f94d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_89f950: /* 89f950: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_89f954: /* 89f954: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89f95a: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f95d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f960: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f963: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 89f969: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 89f96c: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 89f96f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f970: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f976: mov edx, esi */
  edx = esi;
/* 89f978: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f97b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f97d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f97e: call 0x6c1cd5 */
  esp -= 4; W32(esp, 0x89f983u); SPILL(); f_6c1cd5(); if (g_unwind) return; RELOAD();
/* 89f983: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 89f987: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f98a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f98c: jne 0x89f9b5 */
  if (!zf) goto L_89f9b5;
L_89f98e: /* 89f98e: cmp dword ptr [eax + 0x1a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f994: je 0x89f9b5 */
  if (zf) goto L_89f9b5;
L_89f996: /* 89f996: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89f99c: add eax, 0x210 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f9a1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f9a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f9a5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f9a8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f9ab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89f9ae: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89f9b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_89f9b5: /* 89f9b5: mov ecx, dword ptr [ebp + 0x1e0] */
  ecx = R32((uint32_t)(ebp + 0x1e0u));
/* 89f9bb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89f9bc: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9be: jl 0x89f850 */
  if ((sf != of)) goto L_89f850;
L_89f9c4: /* 89f9c4: mov dword ptr [eax + 0x164], 1 */
  W32((uint32_t)(eax + 0x164u), 0x1u);
/* 89f9ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f9d2: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 89f9d8: xor edi, edi */
  edi = 0;
/* 89f9da: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9dc: jle 0x89fa8c */
  if ((zf || sf != of)) goto L_89fa8c;
L_89f9e2: /* 89f9e2: xor esi, esi */
  esi = 0;
L_89f9e4: /* 89f9e4: mov edx, dword ptr [ecx + 0x104] */
  edx = R32((uint32_t)(ecx + 0x104u));
/* 89f9ea: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 89f9ed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f9ef: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9f1: jl 0x89fa7a */
  if ((sf != of)) goto L_89fa7a;
L_89f9f7: /* 89f9f7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 89f9fa: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 89fa00: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa02: jle 0x89fa78 */
  if ((zf || sf != of)) goto L_89fa78;
L_89fa04: /* 89fa04: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa0a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa0c: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 89fa0f: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89fa12: fmul dword ptr [eax + edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + edx + 0xcu)));
/* 89fa16: lea eax, [eax + edx + 0xc] */
  eax = (uint32_t)(eax + edx + 0xcu);
/* 89fa1a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa1c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa1e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa21: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa24: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa26: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa29: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa30: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa36: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa38: lea eax, [eax + edx + 0x18] */
  eax = (uint32_t)(eax + edx + 0x18u);
/* 89fa3c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89fa3e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa40: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa42: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa45: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa48: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa4a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa4d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa50: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa54: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa5c: lea eax, [eax + edx + 0x24] */
  eax = (uint32_t)(eax + edx + 0x24u);
/* 89fa60: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89fa62: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa64: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa66: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa69: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa6c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa6f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa72: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa76: jmp 0x89fa7a */
  goto L_89fa7a;
L_89fa78: /* 89fa78: fstp st(0) */
  STI(0) = ST0; FPOP();
L_89fa7a: /* 89fa7a: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 89fa80: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89fa81: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fa84: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa86: jl 0x89f9e4 */
  if ((sf != of)) goto L_89f9e4;
L_89fa8c: /* 89fa8c: mov eax, dword ptr [ecx + 0x114] */
  eax = R32((uint32_t)(ecx + 0x114u));
/* 89fa92: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa94: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 89fa98: jle 0x89fc45 */
  if ((zf || sf != of)) goto L_89fc45;
L_89fa9e: /* 89fa9e: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 89faa6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 89faaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89fab0: /* 89fab0: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 89fab6: mov ebp, dword ptr [esi + edx] */
  ebp = R32((uint32_t)(esi + edx));
/* 89fab9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89fabb: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* 89fabe: jl 0x89fc27 */
  if ((sf != of)) goto L_89fc27;
L_89fac4: /* 89fac4: cmp dword ptr [ecx + 0xb8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89faca: jle 0x89fc27 */
  if ((zf || sf != of)) goto L_89fc27;
L_89fad0: /* 89fad0: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 89fad3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fad9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fadb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fade: jne 0x89fbd4 */
  if (!zf) goto L_89fbd4;
L_89fae4: /* 89fae4: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 89faea: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 89faee: mov edx, dword ptr [eax + ecx + 0x24] */
  edx = R32((uint32_t)(eax + ecx + 0x24u));
/* 89faf2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89faf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89faf5: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89fafc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fafd: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 89fb00: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x89fb06u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 89fb06: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89fb0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb0d: lea edx, [esp + 0x1a0] */
  edx = (uint32_t)(esp + 0x1a0u);
/* 89fb14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fb15: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fb18: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x89fb1eu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 89fb1e: lea eax, [esp + 0x19c] */
  eax = (uint32_t)(esp + 0x19cu);
/* 89fb25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb26: lea ecx, [esp + 0x1d0] */
  ecx = (uint32_t)(esp + 0x1d0u);
/* 89fb2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fb2e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89fb34: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fb37: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89fb3du); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89fb3d: mov esi, eax */
  esi = eax;
/* 89fb3f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fb43: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fb48: lea edi, [esp + 0x19c] */
  edi = (uint32_t)(esp + 0x19cu);
/* 89fb4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fb51: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89fb57: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 89fb5d: lea ebx, [ebp + ebp*2] */
  ebx = (uint32_t)(ebp + ebp*2);
/* 89fb61: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89fb64: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fb66: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89fb68: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 89fb6c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89fb6f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89fb72: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 89fb76: lea ecx, [esp + 0x1fc] */
  ecx = (uint32_t)(esp + 0x1fcu);
/* 89fb7d: lea edi, [eax + ebx] */
  edi = (uint32_t)(eax + ebx);
/* 89fb80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fb81: mov ecx, edi */
  ecx = edi;
/* 89fb83: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 89fb87: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89fb8du); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89fb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb8e: lea edx, [esp + 0xf0] */
  edx = (uint32_t)(esp + 0xf0u);
/* 89fb95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fb96: lea ecx, [esp + 0x1a4] */
  ecx = (uint32_t)(esp + 0x1a4u);
/* 89fb9d: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89fba3u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89fba3: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 89fba7: mov esi, eax */
  esi = eax;
/* 89fba9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fbae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fbb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fbb4: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89fbba: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 89fbbe: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 89fbc2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fbc4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fbc6: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 89fbca: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fbcd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fbd0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89fbd4: /* 89fbd4: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 89fbda: fld dword ptr [eax + esi + 0x28] */
  { double v = F32((uint32_t)(eax + esi + 0x28u)); FPUSH(v); }
/* 89fbde: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* 89fbe1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fbec: jne 0x89fc27 */
  if (!zf) goto L_89fc27;
L_89fbee: /* 89fbee: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 89fbf1: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fbf7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fbf9: lea ebp, [ebp + ebp*2] */
  ebp = (uint32_t)(ebp + ebp*2);
/* 89fbfd: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89fc00: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 89fc03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 89fc05: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 89fc07: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89fc0a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 89fc0c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89fc0f: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 89fc12: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89fc15: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89fc17: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 89fc1a: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 89fc1d: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 89fc20: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 89fc23: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89fc27: /* 89fc27: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89fc2b: mov edx, dword ptr [ecx + 0x114] */
  edx = R32((uint32_t)(ecx + 0x114u));
/* 89fc31: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89fc32: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fc35: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fc37: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 89fc3b: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 89fc3f: jl 0x89fab0 */
  if ((sf != of)) goto L_89fab0;
L_89fc45: /* 89fc45: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 89fc4b: mov eax, 1 */
  eax = 0x1u;
/* 89fc50: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fc52: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 89fc56: jle 0x8a0322 */
  if ((zf || sf != of)) goto L_8a0322;
L_89fc5c: /* 89fc5c: mov ebx, 0x30 */
  ebx = 0x30u;
/* 89fc61: mov dword ptr [esp + 0x18], 0x10 */
  W32((uint32_t)(esp + 0x18u), 0x10u);
/* 89fc69: mov dword ptr [esp + 0x24], 0x40 */
  W32((uint32_t)(esp + 0x24u), 0x40u);
L_89fc71: /* 89fc71: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fc75: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 89fc7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89fc7f: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89fc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89fc89: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89fc8c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89fc8f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89fc91: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 89fc94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fc95: lea ecx, [esp + 0x26c] */
  ecx = (uint32_t)(esp + 0x26cu);
/* 89fc9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fc9d: mov ecx, edi */
  ecx = edi;
/* 89fc9f: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x89fca5u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 89fca5: mov esi, eax */
  esi = eax;
/* 89fca7: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fcac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fcae: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 89fcb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fcb6: xor esi, esi */
  esi = 0;
/* 89fcb8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fcba: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 89fcbe: jle 0x8a0083 */
  if ((zf || sf != of)) goto L_8a0083;
L_89fcc4: /* 89fcc4: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 89fcc8: jmp 0x89fcd0 */
  goto L_89fcd0;
L_89fcd0: /* 89fcd0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89fcd4: mov eax, dword ptr [esi + edx + 0x30] */
  eax = R32((uint32_t)(esi + edx + 0x30u));
/* 89fcd8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fcda: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89fcde: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fce4: /* 89fce4: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 89fce7: mov edi, dword ptr [ecx + 0xf8] */
  edi = R32((uint32_t)(ecx + 0xf8u));
/* 89fced: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89fcf0: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 89fcf3: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fcf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89fcf7: jne 0x89fd3d */
  if (!zf) goto L_89fd3d;
L_89fcf9: /* 89fcf9: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fcfc: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89fcff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd05: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89fd09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd0b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd0e: jne 0x89fd86 */
  if (!zf) goto L_89fd86;
L_89fd10: /* 89fd10: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd1e: jnp 0x8a0063 */
  if (!pf) goto L_8a0063;
L_89fd24: /* 89fd24: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd27: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd2c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd2f: jp 0x89fd86 */
  if (pf) goto L_89fd86;
L_89fd31: /* 89fd31: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd34: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd37: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 89fd3b: jmp 0x89fd82 */
  goto L_89fd82;
L_89fd3d: /* 89fd3d: fld dword ptr [edx + 0x4c] */
  { double v = F32((uint32_t)(edx + 0x4cu)); FPUSH(v); }
/* 89fd40: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fd43: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd4e: jne 0x89fd7f */
  if (!zf) goto L_89fd7f;
L_89fd50: /* 89fd50: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd53: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd5b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd5e: jp 0x89fd6a */
  if (pf) goto L_89fd6a;
L_89fd60: /* 89fd60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89fd62: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89fd68: jmp 0x89fd7f */
  goto L_89fd7f;
L_89fd6a: /* 89fd6a: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd6d: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd75: jp 0x89fd7f */
  if (pf) goto L_89fd7f;
L_89fd77: /* 89fd77: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd7a: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd7d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_89fd7f: /* 89fd7f: fmul dword ptr [esi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3cu)));
L_89fd82: /* 89fd82: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_89fd86: /* 89fd86: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89fd8a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd95: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fd9b: /* 89fd9b: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fd9e: mov edi, esp */
  edi = esp;
/* 89fda0: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fda5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fda7: lea ecx, [esp + 0x288] */
  ecx = (uint32_t)(esp + 0x288u);
/* 89fdae: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdb3u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fdb5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fdb8: mov dword ptr [esp + 0x18c], ecx */
  W32((uint32_t)(esp + 0x18cu), ecx);
/* 89fdbf: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fdc2: mov dword ptr [esp + 0x190], edx */
  W32((uint32_t)(esp + 0x190u), edx);
/* 89fdc9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fdcc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fdd0: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 89fdd6: mov dword ptr [esp + 0x194], ecx */
  W32((uint32_t)(esp + 0x194u), ecx);
/* 89fddd: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fde0: mov edi, esp */
  edi = esp;
/* 89fde2: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fde4: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fde9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fdeb: lea ecx, [esp + 0x278] */
  ecx = (uint32_t)(esp + 0x278u);
/* 89fdf2: mov dword ptr [esp + 0x1c8], edx */
  W32((uint32_t)(esp + 0x1c8u), edx);
/* 89fdf9: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdfeu); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fe00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fe03: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 89fe0a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fe0d: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 89fe14: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fe17: mov dword ptr [esp + 0xe4], ecx */
  W32((uint32_t)(esp + 0xe4u), ecx);
/* 89fe1e: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 89fe25: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 89fe2c: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89fe32u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89fe32: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 89fe36: lea eax, [esp + 0x17c] */
  eax = (uint32_t)(esp + 0x17cu);
/* 89fe3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fe3f: lea edx, [esp + 0x194] */
  edx = (uint32_t)(esp + 0x194u);
/* 89fe46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fe47: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 89fe4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe4f: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89fe54u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89fe54: mov edx, dword ptr [esp + 0x18c] */
  edx = R32((uint32_t)(esp + 0x18cu));
/* 89fe5b: mov eax, dword ptr [esp + 0x190] */
  eax = R32((uint32_t)(esp + 0x190u));
/* 89fe62: mov ecx, esp */
  ecx = esp;
/* 89fe64: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fe66: mov edx, dword ptr [esp + 0x194] */
  edx = R32((uint32_t)(esp + 0x194u));
/* 89fe6d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fe70: mov eax, dword ptr [esp + 0x198] */
  eax = R32((uint32_t)(esp + 0x198u));
/* 89fe77: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fe7a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 89fe7d: lea ecx, [esp + 0x2d8] */
  ecx = (uint32_t)(esp + 0x2d8u);
/* 89fe84: call 0x6c867a */
  esp -= 4; W32(esp, 0x89fe89u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89fe89: mov esi, eax */
  esi = eax;
/* 89fe8b: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fe90: lea edi, [esp + 0x1fc] */
  edi = (uint32_t)(esp + 0x1fcu);
/* 89fe97: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fe99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fe9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 89fea3: lea edi, [edx + ebx] */
  edi = (uint32_t)(edx + ebx);
/* 89fea6: mov eax, edi */
  eax = edi;
/* 89fea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89feaa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fead: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89feb0: mov dword ptr [esp + 0x1fc], ecx */
  W32((uint32_t)(esp + 0x1fcu), ecx);
/* 89feb7: mov dword ptr [esp + 0x200], edx */
  W32((uint32_t)(esp + 0x200u), edx);
/* 89febe: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fec2: mov dword ptr [esp + 0x204], eax */
  W32((uint32_t)(esp + 0x204u), eax);
/* 89fec9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fece: lea esi, [esp + 0x1fc] */
  esi = (uint32_t)(esp + 0x1fcu);
/* 89fed5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fed7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fedb: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fee1: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 89fee7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89feeb: mov esi, dword ptr [edx + ecx + 0x34] */
  esi = R32((uint32_t)(edx + ecx + 0x34u));
/* 89feef: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 89fef2: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89fef5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fef7: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 89fefa: lea eax, [esp + 0x1cc] */
  eax = (uint32_t)(esp + 0x1ccu);
/* 89ff01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff02: mov ecx, edi */
  ecx = edi;
/* 89ff04: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89ff0au); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89ff0a: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* 89ff11: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x89ff17u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 89ff17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff18: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89ff1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff20: lea ecx, [esp + 0x1e0] */
  ecx = (uint32_t)(esp + 0x1e0u);
/* 89ff27: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff2du); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff2d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff2f: mov dword ptr [esp + 0x128], edx */
  W32((uint32_t)(esp + 0x128u), edx);
/* 89ff36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ff39: mov dword ptr [esp + 0x12c], ecx */
  W32((uint32_t)(esp + 0x12cu), ecx);
/* 89ff40: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ff43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff44: lea eax, [esp + 0x174] */
  eax = (uint32_t)(esp + 0x174u);
/* 89ff4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff4c: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* 89ff53: mov dword ptr [esp + 0x138], edx */
  W32((uint32_t)(esp + 0x138u), edx);
/* 89ff5a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff60u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ff62: mov dword ptr [esp + 0x134], ecx */
  W32((uint32_t)(esp + 0x134u), ecx);
/* 89ff69: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89ff6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff6d: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 89ff71: mov dword ptr [esp + 0x13c], edx */
  W32((uint32_t)(esp + 0x13cu), edx);
/* 89ff78: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89ff7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff7c: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 89ff83: mov dword ptr [esp + 0x144], eax */
  W32((uint32_t)(esp + 0x144u), eax);
/* 89ff8a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff90u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff90: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 89ff93: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 89ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff98: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 89ff9b: mov dword ptr [esp + 0x140], edx */
  W32((uint32_t)(esp + 0x140u), edx);
/* 89ffa2: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 89ffa5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ffa8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 89ffaa: mov dword ptr [esp + 0x144], ecx */
  W32((uint32_t)(esp + 0x144u), ecx);
/* 89ffb1: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 89ffb3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ffb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ffb7: lea eax, [esp + 0x230] */
  eax = (uint32_t)(esp + 0x230u);
/* 89ffbe: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 89ffc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ffc6: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89ffcd: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 89ffd4: mov dword ptr [esp + 0x150], edx */
  W32((uint32_t)(esp + 0x150u), edx);
/* 89ffdb: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 89ffe2: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ffe8u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ffe8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ffea: mov dword ptr [esp + 0x11c], ecx */
  W32((uint32_t)(esp + 0x11cu), ecx);
/* 89fff1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fff4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fff8: mov dword ptr [esp + 0x120], edx */
  W32((uint32_t)(esp + 0x120u), edx);
/* 89ffff: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a0002: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8a0006: mov dword ptr [esp + 0x124], eax */
  W32((uint32_t)(esp + 0x124u), eax);
/* 8a000d: mov ebp, dword ptr [ecx + 0x130] */
  ebp = R32((uint32_t)(ecx + 0x130u));
/* 8a0013: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a0016: mov edi, esp */
  edi = esp;
/* 8a0018: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a001d: lea esi, [esp + 0x14c] */
  esi = (uint32_t)(esp + 0x14cu);
/* 8a0024: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0026: lea ecx, [esp + 0x268] */
  ecx = (uint32_t)(esp + 0x268u);
/* 8a002d: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a002f: call 0x6c775c */
  esp -= 4; W32(esp, 0x8a0034u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 8a0034: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0036: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 8a0039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a003c: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 8a003f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0042: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8a0045: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a0048: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8a004b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a004f: mov ecx, dword ptr [ecx + 0x130] */
  ecx = R32((uint32_t)(ecx + 0x130u));
/* 8a0055: add ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0059: call dword ptr [0xcfa35c] */
  esp -= 4; W32(esp, 0x8a005fu); SPILL(); f_4e39c7(); if (g_unwind) return; /* Core!?Normalize@FQuat@@QAEHXZ */ RELOAD();
/* 8a005f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a0063: /* 8a0063: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a0067: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a006b: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8a006f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0070: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0073: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0075: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a0079: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 8a007d: jl 0x89fcd0 */
  if ((sf != of)) goto L_89fcd0;
L_8a0083: /* 8a0083: mov eax, dword ptr [ecx + 0x120] */
  eax = R32((uint32_t)(ecx + 0x120u));
/* 8a0089: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a008b: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8a0093: jle 0x8a02f2 */
  if ((zf || sf != of)) goto L_8a02f2;
L_8a0099: /* 8a0099: xor ebp, ebp */
  ebp = 0;
/* 8a009b: jmp 0x8a00a0 */
  goto L_8a00a0;
L_8a00a0: /* 8a00a0: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a00a6: mov esi, dword ptr [edx + ebp] */
  esi = R32((uint32_t)(edx + ebp));
/* 8a00a9: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* 8a00ac: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a00b0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a00b2: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a00b8: /* 8a00b8: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8a00bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a00c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a00c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a00c6: jne 0x8a022a */
  if (!zf) goto L_8a022a;
L_8a00cc: /* 8a00cc: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00d2: lea edx, [eax + ebp + 8] */
  edx = (uint32_t)(eax + ebp + 0x8u);
/* 8a00d6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a00d8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8a00dc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a00df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8a00e3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a00e6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8a00ea: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00f0: mov ecx, dword ptr [eax + ebp + 0x24] */
  ecx = R32((uint32_t)(eax + ebp + 0x24u));
/* 8a00f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a00f5: lea edx, [esp + 0x164] */
  edx = (uint32_t)(esp + 0x164u);
/* 8a00fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a00fd: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8a0101: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x8a0107u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 8a0107: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8a010d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a010e: lea eax, [esp + 0xf0] */
  eax = (uint32_t)(esp + 0xf0u);
/* 8a0115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0116: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0119: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8a011fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8a011f: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 8a0126: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a012cu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a012c: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8a0133: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0139u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0139: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8a0140: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0146u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0146: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a014a: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a0150: mov edx, dword ptr [ecx + ebp + 0x20] */
  edx = R32((uint32_t)(ecx + ebp + 0x20u));
/* 8a0154: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a0156: jne 0x8a017f */
  if (!zf) goto L_8a017f;
L_8a0158: /* 8a0158: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a015e: lea edx, [esp + 0x328] */
  edx = (uint32_t)(esp + 0x328u);
/* 8a0165: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0166: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0168: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a016eu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a016e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a016f: lea eax, [esp + 0x29c] */
  eax = (uint32_t)(esp + 0x29cu);
/* 8a0176: lea ecx, [esp + 0xf0] */
  ecx = (uint32_t)(esp + 0xf0u);
/* 8a017d: jmp 0x8a01d0 */
  goto L_8a01d0;
L_8a017f: /* 8a017f: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 8a0186: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0187: lea ecx, [eax + 0xc0] */
  ecx = (uint32_t)(eax + 0xc0u);
/* 8a018d: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a0193u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0193: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 8a019a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01a0u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01a0: lea ecx, [esp + 0x1b4] */
  ecx = (uint32_t)(esp + 0x1b4u);
/* 8a01a7: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01adu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ad: lea ecx, [esp + 0x1c0] */
  ecx = (uint32_t)(esp + 0x1c0u);
/* 8a01b4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01bau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ba: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 8a01c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a01c2: lea eax, [esp + 0x2fc] */
  eax = (uint32_t)(esp + 0x2fcu);
/* 8a01c9: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
L_8a01d0: /* 8a01d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a01d1: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x8a01d7u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8a01d7: mov esi, eax */
  esi = eax;
/* 8a01d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a01dd: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 8a01e4: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a01e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a01eb: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a01f1: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a01f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a01f5: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
/* 8a01fc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a01ff: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 8a0206: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a0209: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 8a0210: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 8a0216: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a0218: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a021d: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 8a0224: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0226: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a022a: /* 8a022a: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a0230: fld dword ptr [edx + ebp + 0x28] */
  { double v = F32((uint32_t)(edx + ebp + 0x28u)); FPUSH(v); }
/* 8a0234: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a023a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a023c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a023f: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a0245: /* 8a0245: mov eax, edx */
  eax = edx;
/* 8a0247: lea edx, [eax + ebp + 0x14] */
  edx = (uint32_t)(eax + ebp + 0x14u);
/* 8a024b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a024d: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8a0251: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a0254: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8a0258: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a025b: lea eax, [esp + 0x358] */
  eax = (uint32_t)(esp + 0x358u);
/* 8a0262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0263: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0269: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 8a026d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a0273u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0274: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8a027b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a027c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8a0280: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8a0286u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a0286: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0288: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8a028c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a028f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8a0293: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0296: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a029a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 8a029e: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a02a4: fld dword ptr [ecx + ebp + 0x28] */
  { double v = F32((uint32_t)(ecx + ebp + 0x28u)); FPUSH(v); }
/* 8a02a8: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8a02ae: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8a02b2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a02b4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8a02b6: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8a02ba: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a02bc: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8a02c0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a02c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a02c4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a02c6: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a02c9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a02cc: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a02cf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a02d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a02d6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8a02d8: /* 8a02d8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a02dc: mov edx, dword ptr [ecx + 0x120] */
  edx = R32((uint32_t)(ecx + 0x120u));
/* 8a02e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a02e3: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a02e6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a02e8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a02ec: jl 0x8a00a0 */
  if ((sf != of)) goto L_8a00a0;
L_8a02f2: /* 8a02f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8a02f6: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 8a02fa: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8a02fe: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0304: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0305: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a0308: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a030b: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a030e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0310: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8a0314: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8a0318: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8a031c: jl 0x89fc71 */
  if ((sf != of)) goto L_89fc71;
L_8a0322: /* 8a0322: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 8a0329: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 8a0331: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a0336u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a0336: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8a033a: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 8a0342: call 0x6c4499 */
  esp -= 4; W32(esp, 0x8a0347u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 8a0347: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 8a034e: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 8a0356: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8a035bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8a035b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 8a035f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 8a0367: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x8a036cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 8a036c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8a0370: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a037b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x8a0380u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 8a0380: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_8a0384: /* 8a0384: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a038b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a038d: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a0393: /* 8a0393: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a0396: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 8a039c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a039e: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a03a4: /* 8a03a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03aa: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03b0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03b2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03b8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03bc: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03c5: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 8a03cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03d1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03d7: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03df: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03e5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03e9: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03ef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03f2: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 8a03f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0402: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0408: xor eax, eax */
  eax = 0;
/* 8a040a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a040c: jle 0x8a047b */
  if ((zf || sf != of)) goto L_8a047b;
L_8a040e: /* 8a040e: xor edx, edx */
  edx = 0;
/* 8a0410: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a0414: xor esi, esi */
  esi = 0;
/* 8a0416: jmp 0x8a0420 */
  goto L_8a0420;
L_8a0420: /* 8a0420: mov ecx, dword ptr [ecx + 0x17c] */
  ecx = R32((uint32_t)(ecx + 0x17cu));
/* 8a0426: mov edi, dword ptr [ebp + 0x1dc] */
  edi = R32((uint32_t)(ebp + 0x1dcu));
/* 8a042c: mov edi, dword ptr [edx + edi + 0x34] */
  edi = R32((uint32_t)(edx + edi + 0x34u));
/* 8a0430: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a0434: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a0437: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a043b: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 8a0441: mov ecx, dword ptr [ecx + 0x170] */
  ecx = R32((uint32_t)(ecx + 0x170u));
/* 8a0447: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0449: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a044b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a044d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8a044f: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8a0452: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8a0455: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8a0458: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a045c: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8a045f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0463: mov edi, dword ptr [ecx + 0xb8] */
  edi = R32((uint32_t)(ecx + 0xb8u));
/* 8a0469: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a046a: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a046d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a0470: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0473: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0475: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8a0479: jl 0x8a0420 */
  if ((sf != of)) goto L_8a0420;
L_8a047b: /* 8a047b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8a047d: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 8a0484: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8a048a: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 8a048e: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 8a0494: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8a0497: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a049e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04a0: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04a6: /* 8a04a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a04a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04ab: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04b1: /* 8a04b1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8a04b4: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 8a04ba: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 8a04bd: mov esi, dword ptr [edx + 0x50] */
  esi = R32((uint32_t)(edx + 0x50u));
/* 8a04c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04c2: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04c8: /* 8a04c8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a04cc: mov esi, dword ptr [edx + 0xfc] */
  esi = R32((uint32_t)(edx + 0xfcu));
/* 8a04d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04d4: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04da: /* 8a04da: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8a04dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04df: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04e5: /* 8a04e5: mov eax, ecx */
  eax = ecx;
/* 8a04e7: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8a04ea: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a04ee: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8a04f4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8a04f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a04f8: mov dword ptr [esp + 0x390], 7 */
  W32((uint32_t)(esp + 0x390u), 0x7u);
/* 8a0503: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0509u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0509: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 8a0510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0511: mov ecx, esi */
  ecx = esi;
/* 8a0513: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0519u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a051a: mov ecx, ebp */
  ecx = ebp;
/* 8a051c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0522u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0523: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8a052a: push 0xae7e40 */
  { uint32_t v = 0xae7e40u; esp -= 4; W32(esp, v); }
/* 8a052f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0530: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a0536u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a0536: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a0539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a053a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a053e: mov byte ptr [esp + 0x394], 8 */
  W8((uint32_t)(esp + 0x394u), 0x8u);
/* 8a0546: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a054cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a054c: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0553: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a055b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0561u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0561: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a0564: fadd dword ptr [0x9f7fc4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7fc4u)));
/* 8a056a: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8a056c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0570: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a0575: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a0578: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a057c: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0580: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0584: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a058au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a058a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a058f: push 0xae7eac */
  { uint32_t v = 0xae7eacu; esp -= 4; W32(esp, v); }
/* 8a0594: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a0596: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a0598: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a059du); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a059d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05a0: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05a9: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a05ac: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 8a05b3: test dword ptr [eax + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a05bd: je 0x8a05fa */
  if (zf) goto L_8a05fa;
L_8a05bf: /* 8a05bf: mov ecx, esi */
  ecx = esi;
/* 8a05c1: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a05c6: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a05ca: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a05ce: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a05d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a05d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a05d8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a05dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a05dd: push 0xae7eb4 */
  { uint32_t v = 0xae7eb4u; esp -= 4; W32(esp, v); }
/* 8a05e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a05e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a05e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a05e6: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a05ebu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a05eb: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05ee: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05f7: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_8a05fa: /* 8a05fa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a05fe: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 8a0604: xor ebp, ebp */
  ebp = 0;
/* 8a0606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a0608: jle 0x8a0772 */
  if ((zf || sf != of)) goto L_8a0772;
L_8a060e: /* 8a060e: xor esi, esi */
  esi = 0;
/* 8a0610: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a0614: jmp 0x8a0620 */
  goto L_8a0620;
L_8a0620: /* 8a0620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a0622: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8a0629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8a062fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8a062f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0633: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a0639: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 8a0640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0641: lea ecx, [edx + esi + 8] */
  ecx = (uint32_t)(edx + esi + 0x8u);
/* 8a0645: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8a064bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8a064b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a064d: je 0x8a0758 */
  if (zf) goto L_8a0758;
L_8a0653: /* 8a0653: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0657: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a065d: mov edx, dword ptr [edx + esi + 8] */
  edx = R32((uint32_t)(edx + esi + 0x8u));
/* 8a0661: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a0663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0664: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8a066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a066a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a066c: je 0x8a067d */
  if (zf) goto L_8a067d;
L_8a066e: /* 8a066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0672: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0675: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8a067bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a067b: jmp 0x8a0683 */
  goto L_8a0683;
L_8a067d: /* 8a067d: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_8a0683: /* 8a0683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0687: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8a068e: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 8a0694: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8a0698: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8a069c: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8a069f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a06a1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8a06a8: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8a06ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06af: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x8a06b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a06b5: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8a06bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06bd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a06c2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a06c2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8a06c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06c6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06c9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8a06cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06cf: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a06d5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a06d5: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 8a06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06dd: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a06e3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a06e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06e5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 8a06ec: push 0xae7ed8 */
  { uint32_t v = 0xae7ed8u; esp -= 4; W32(esp, v); }
/* 8a06f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a06f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a06f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a06f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a06fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06fc: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a0700: mov byte ptr [esp + 0x394], 9 */
  W8((uint32_t)(esp + 0x394u), 0x9u);
/* 8a0708: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a070eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a070e: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0715: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a071d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0723u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0723: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0727: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a072c: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a0730: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0734: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a073eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a073e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a0742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0743: push 0xae7f70 */
  { uint32_t v = 0xae7f70u; esp -= 4; W32(esp, v); }
/* 8a0748: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a074a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a074b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a074c: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a0751u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a0751: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a0755: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a0758: /* 8a0758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a075c: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 8a0762: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a0763: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0766: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0768: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a076c: jl 0x8a0620 */
  if ((sf != of)) goto L_8a0620;
L_8a0772: /* 8a0772: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0776: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a0781: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0787u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8a0787: /* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_89e8c7(void) {
  LOAD_REGS();
L_89e8c7: /* 89e8c7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 89e8ce: mov edi, edi */
  edi = edi;
L_89e8d0: /* 89e8d0: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 89e8d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e8d8: lea ecx, [eax + edi + 0xc] */
  ecx = (uint32_t)(eax + edi + 0xcu);
/* 89e8dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89e8de: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e8e4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89e8e4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e8e8: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 89e8ee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89e8ef: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e8f2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e8f4: jl 0x89e8d0 */
  if ((sf != of)) goto L_89e8d0;
L_89e8f6: /* 89e8f6: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 89e8fc: lea esi, [ecx + 0xa8] */
  esi = (uint32_t)(ecx + 0xa8u);
/* 89e902: xor edi, edi */
  edi = 0;
/* 89e904: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e906: jle 0x89e927 */
  if ((zf || sf != of)) goto L_89e927;
L_89e908: /* 89e908: xor ebx, ebx */
  ebx = 0;
/* 89e90a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89e910: /* 89e910: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89e912: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89e914: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 89e917: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x89e91cu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 89e91c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 89e91f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89e920: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89e923: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e925: jl 0x89e910 */
  if ((sf != of)) goto L_89e910;
L_89e927: /* 89e927: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89e929: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 89e92b: mov ecx, esi */
  ecx = esi;
/* 89e92d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89e933u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89e933: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89e939: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 89e93b: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89e941: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89e947u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89e947: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e94b: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 89e951: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89e955: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89e958: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e95c: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 89e962: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 89e968: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e96c: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 89e972: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89e973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89e974: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 89e975: call 0x6c2667 */
  esp -= 4; W32(esp, 0x89e97au); SPILL(); f_6c2667(); if (g_unwind) return; RELOAD();
/* 89e97a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 89e97e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89e981: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 89e987: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89e989: je 0x89ea10 */
  if (zf) goto L_89ea10;
L_89e98f: /* 89e98f: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89e995: xor edx, edx */
  edx = 0;
/* 89e997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e999: jle 0x8a0787 */
  if ((zf || sf != of)) goto L_8a0787;
L_89e99f: /* 89e99f: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 89e9a3: xor ebx, ebx */
  ebx = 0;
/* 89e9a5: jmp 0x89e9b0 */
  goto L_89e9b0;
L_89e9a7: /* 89e9a7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e9ab: jmp 0x89e9b0 */
  goto L_89e9b0;
L_89e9b0: /* 89e9b0: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 89e9b6: cmp dword ptr [eax + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e9b9: jle 0x89e9dd */
  if ((zf || sf != of)) goto L_89e9dd;
L_89e9bb: /* 89e9bb: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 89e9be: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 89e9c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e9c3: jl 0x89e9dd */
  if ((sf != of)) goto L_89e9dd;
L_89e9c5: /* 89e9c5: cmp dword ptr [ebp + 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e9cb: jle 0x89e9dd */
  if ((zf || sf != of)) goto L_89e9dd;
L_89e9cd: /* 89e9cd: mov edi, dword ptr [ebp + 0xb4] */
  edi = R32((uint32_t)(ebp + 0xb4u));
/* 89e9d3: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 89e9d6: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89e9d9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89e9db: jmp 0x89e9e6 */
  goto L_89e9e6;
L_89e9dd: /* 89e9dd: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 89e9e3: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_89e9e6: /* 89e9e6: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 89e9ec: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e9ee: mov ecx, 0xc */
  ecx = 0xcu;
/* 89e9f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89e9f5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89e9f9: mov eax, dword ptr [ecx + 0x1e0] */
  eax = R32((uint32_t)(ecx + 0x1e0u));
/* 89e9ff: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 89ea00: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89ea03: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ea05: jl 0x89e9a7 */
  if ((sf != of)) goto L_89e9a7;
L_89ea07: /* 89ea07: jmp 0x8a0787 */
  goto L_8a0787;
L_89ea10: /* 89ea10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89ea12: call dword ptr [edx + 0x12c] */
  { uint32_t t = R32((uint32_t)(edx + 0x12cu)); esp -= 4; W32(esp, 0x89ea18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ea18: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 89ea1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ea1e: je 0x89ea2e */
  if (zf) goto L_89ea2e;
L_89ea20: /* 89ea20: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 89ea25: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ea28: je 0x8a0384 */
  if (zf) goto L_8a0384;
L_89ea2e: /* 89ea2e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89ea32: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89ea34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ea36: call dword ptr [edx + 0x138] */
  { uint32_t t = R32((uint32_t)(edx + 0x138u)); esp -= 4; W32(esp, 0x89ea3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ea3c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 89ea40: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89ea46u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89ea46: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 89ea4a: mov dword ptr [esp + 0x390], 1 */
  W32((uint32_t)(esp + 0x390u), 0x1u);
/* 89ea55: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89ea5bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89ea5b: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89ea62: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 89ea6a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89ea70u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89ea70: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89ea76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ea77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ea79: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 89ea80: mov byte ptr [esp + 0x398], 3 */
  W8((uint32_t)(esp + 0x398u), 0x3u);
/* 89ea88: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89ea8eu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89ea8e: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 89ea92: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 89ea9a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89eaa0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89eaa0: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 89eaa7: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 89eaaf: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89eab5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89eab5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89eab9: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 89eabf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eac1: mov byte ptr [esp + 0x390], 5 */
  W8((uint32_t)(esp + 0x390u), 0x5u);
/* 89eac9: je 0x89f339 */
  if (zf) goto L_89f339;
L_89eacf: /* 89eacf: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89ead3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ead5: jne 0x89f339 */
  if (!zf) goto L_89f339;
L_89eadb: /* 89eadb: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 89eadf: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89eae5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89eae5: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89eae9: mov eax, dword ptr [eax + 0x1e0] */
  eax = R32((uint32_t)(eax + 0x1e0u));
/* 89eaef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89eaf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89eaf2: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 89eaf6: mov byte ptr [esp + 0x398], 6 */
  W8((uint32_t)(esp + 0x398u), 0x6u);
/* 89eafe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89eb04u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89eb04: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89eb08: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 89eb0e: xor ebp, ebp */
  ebp = 0;
/* 89eb10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89eb12: jle 0x89f312 */
  if ((zf || sf != of)) goto L_89f312;
L_89eb18: /* 89eb18: jmp 0x89eb20 */
  goto L_89eb20;
L_89eb20: /* 89eb20: mov esi, dword ptr [edx + 0xf8] */
  esi = R32((uint32_t)(edx + 0xf8u));
/* 89eb26: mov eax, ebp */
  eax = ebp;
/* 89eb28: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 89eb2b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89eb2d: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 89eb33: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89eb36: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb38: mov ecx, 0xc */
  ecx = 0xcu;
/* 89eb3d: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 89eb44: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 89eb48: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89eb4a: jne 0x89eb59 */
  if (!zf) goto L_89eb59;
L_89eb4c: /* 89eb4c: mov dword ptr [esp + 0x84], 0x3f800000 */
  W32((uint32_t)(esp + 0x84u), 0x3f800000u);
/* 89eb57: jmp 0x89eb63 */
  goto L_89eb63;
L_89eb59: /* 89eb59: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 89eb5c: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
L_89eb63: /* 89eb63: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89eb66: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89eb69: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89eb6f: /* 89eb6f: mov ecx, dword ptr [edx + 0xac] */
  ecx = R32((uint32_t)(edx + 0xacu));
/* 89eb75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb77: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eb7d: /* 89eb7d: mov ecx, dword ptr [edx + 0xa8] */
  ecx = R32((uint32_t)(edx + 0xa8u));
/* 89eb83: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89eb86: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 89eb89: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 89eb8c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb8e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89eb92: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eb98: /* 89eb98: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89eb9f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89eba5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89eba7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebaa: jne 0x89f303 */
  if (!zf) goto L_89f303;
L_89ebb0: /* 89ebb0: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 89ebb4: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 89ebb7: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89ebbb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ebc1: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 89ebc3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ebc5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ebc8: jp 0x89ebdc */
  if (pf) goto L_89ebdc;
L_89ebca: /* 89ebca: mov eax, dword ptr [edx + 0x164] */
  eax = R32((uint32_t)(edx + 0x164u));
/* 89ebd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebd2: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 89ebda: jne 0x89ebe4 */
  if (!zf) goto L_89ebe4;
L_89ebdc: /* 89ebdc: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_89ebe4: /* 89ebe4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebe6: je 0x89ec0c */
  if (zf) goto L_89ec0c;
L_89ebe8: /* 89ebe8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89ebeb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89ebed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ebee: mov ecx, esi */
  ecx = esi;
/* 89ebf0: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x89ebf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ebf3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89ebf5: mov ebx, eax */
  ebx = eax;
/* 89ebf7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89ebfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ebfb: mov ecx, esi */
  ecx = esi;
/* 89ebfd: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 89ec01: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x89ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ec04: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89ec08: mov ecx, eax */
  ecx = eax;
/* 89ec0a: jmp 0x89ec14 */
  goto L_89ec14;
L_89ec0c: /* 89ec0c: xor ebx, ebx */
  ebx = 0;
/* 89ec0e: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 89ec12: xor ecx, ecx */
  ecx = 0;
L_89ec14: /* 89ec14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec16: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 89ec21: je 0x89ec72 */
  if (zf) goto L_89ec72;
L_89ec23: /* 89ec23: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 89ec26: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 89ec2d: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 89ec34: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ec3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ec3c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec3f: jne 0x89ecdb */
  if (!zf) goto L_89ecdb;
L_89ec45: /* 89ec45: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 89ec4c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 89ec52: fcomp dword ptr [esp + 0xa0] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xa0u)));
  FPOP();
/* 89ec59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ec5b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ec5e: jp 0x89ec68 */
  if (pf) goto L_89ec68;
L_89ec60: /* 89ec60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89ec62: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_89ec68: /* 89ec68: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 89ec6b: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
L_89ec72: /* 89ec72: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ec76: je 0x89f303 */
  if (zf) goto L_89f303;
L_89ec7c: /* 89ec7c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 89ec80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec82: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ec86: jne 0x89ece3 */
  if (!zf) goto L_89ece3;
L_89ec88: /* 89ec88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec8a: je 0x89f303 */
  if (zf) goto L_89f303;
L_89ec90: /* 89ec90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec92: jne 0x89ef36 */
  if (!zf) goto L_89ef36;
L_89ec98: /* 89ec98: mov eax, dword ptr [edx + 0x164] */
  eax = R32((uint32_t)(edx + 0x164u));
/* 89ec9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eca0: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eca6: /* 89eca6: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89ecaa: mov esi, dword ptr [ecx + 0x1e0] */
  esi = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecb0: xor eax, eax */
  eax = 0;
/* 89ecb2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ecb4: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89ecba: /* 89ecba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89ecc0: /* 89ecc0: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 89ecc7: mov byte ptr [eax + edx], 2 */
  W8((uint32_t)(eax + edx), 0x2u);
/* 89eccb: mov edx, dword ptr [ecx + 0x1e0] */
  edx = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89ecd2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ecd4: jl 0x89ecc0 */
  if ((sf != of)) goto L_89ecc0;
L_89ecd6: /* 89ecd6: jmp 0x89f2ff */
  goto L_89f2ff;
L_89ecdb: /* 89ecdb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89ece1: jmp 0x89ec68 */
  goto L_89ec68;
L_89ece3: /* 89ece3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ece5: jne 0x89ec90 */
  if (!zf) goto L_89ec90;
L_89ece7: /* 89ece7: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89eceb: mov eax, dword ptr [ecx + 0x1e0] */
  eax = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecf1: xor ebx, ebx */
  ebx = 0;
/* 89ecf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ecf5: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89ecfb: /* 89ecfb: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 89ecff: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 89ed03: xor eax, eax */
  eax = 0;
/* 89ed05: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 89ed09: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 89ed0d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_89ed11: /* 89ed11: cmp dword ptr [esi + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed14: jne 0x89ed23 */
  if (!zf) goto L_89ed23;
L_89ed16: /* 89ed16: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89ed1a: mov dword ptr [edx + ebx*4], 1 */
  W32((uint32_t)(edx + ebx*4), 0x1u);
/* 89ed21: jmp 0x89ed4f */
  goto L_89ed4f;
L_89ed23: /* 89ed23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ed25: je 0x89ed46 */
  if (zf) goto L_89ed46;
L_89ed27: /* 89ed27: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89ed2b: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 89ed31: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89ed35: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 89ed39: cmp dword ptr [ecx + eax*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed3d: jne 0x89ed46 */
  if (!zf) goto L_89ed46;
L_89ed3f: /* 89ed3f: mov eax, 1 */
  eax = 0x1u;
/* 89ed44: jmp 0x89ed48 */
  goto L_89ed48;
L_89ed46: /* 89ed46: xor eax, eax */
  eax = 0;
L_89ed48: /* 89ed48: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89ed4c: mov dword ptr [edx + ebx*4], eax */
  W32((uint32_t)(edx + ebx*4), eax);
L_89ed4f: /* 89ed4f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 89ed53: cmp dword ptr [eax + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed57: je 0x89eefd */
  if (zf) goto L_89eefd;
L_89ed5d: /* 89ed5d: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 89ed60: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ed64: jl 0x89eefd */
  if ((sf != of)) goto L_89eefd;
L_89ed6a: /* 89ed6a: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 89ed6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ed6f: jne 0x89edd4 */
  if (!zf) goto L_89edd4;
L_89ed71: /* 89ed71: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89ed73: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ed75: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89ed79: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ed7fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ed7f: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89ed83: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 89ed86: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89ed89: mov dword ptr [esi + edx + 0x24], 0 */
  W32((uint32_t)(esi + edx + 0x24u), 0x0u);
/* 89ed91: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 89ed95: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89ed99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ed9b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89ed9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ed9e: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 89eda1: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 89eda4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89eda5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 89eda8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89eda9: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 89edb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edb1: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89edb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89edb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edb7: call 0x6c9f4d */
  esp -= 4; W32(esp, 0x89edbcu); SPILL(); f_6c9f4d(); if (g_unwind) return; RELOAD();
/* 89edbc: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 89edc0: mov dword ptr [esi + ecx + 0x20], ebp */
  W32((uint32_t)(esi + ecx + 0x20u), ebp);
/* 89edc4: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 89edc8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89edcb: mov dword ptr [esi + edx + 0x1c], ebx */
  W32((uint32_t)(esi + edx + 0x1cu), ebx);
/* 89edcf: jmp 0x89eef9 */
  goto L_89eef9;
L_89edd4: /* 89edd4: cmp dword ptr [esp + 0x14], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89edd8: je 0x89ee17 */
  if (zf) goto L_89ee17;
L_89edda: /* 89edda: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89edde: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 89ede5: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89ede9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89edeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89edec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89eded: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 89edf0: lea eax, [esp + 0xe0] */
  eax = (uint32_t)(esp + 0xe0u);
/* 89edf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edf8: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89edfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89edfd: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89ee01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ee02: lea eax, [esp + 0x108] */
  eax = (uint32_t)(esp + 0x108u);
/* 89ee09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ee0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ee0b: call 0x6c8369 */
  esp -= 4; W32(esp, 0x89ee10u); SPILL(); f_6c8369(); if (g_unwind) return; RELOAD();
/* 89ee10: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89ee13: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_89ee17: /* 89ee17: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ee1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ee1d: jle 0x89ee7e */
  if ((zf || sf != of)) goto L_89ee7e;
L_89ee1f: /* 89ee1f: cmp dword ptr [esi + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ee22: jne 0x89ee7e */
  if (!zf) goto L_89ee7e;
L_89ee24: /* 89ee24: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 89ee26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ee28: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89ee2c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ee32u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ee32: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89ee39: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee3d: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ee40: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* 89ee43: mov ecx, 0xc */
  ecx = 0xcu;
/* 89ee48: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89ee4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89ee51: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89ee55: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 89ee59: mov dword ptr [eax + ecx + 0x34], ebp */
  W32((uint32_t)(eax + ecx + 0x34u), ebp);
/* 89ee5d: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee61: mov dword ptr [eax + edx + 0x30], ebx */
  W32((uint32_t)(eax + edx + 0x30u), ebx);
/* 89ee65: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89ee69: mov dword ptr [eax + ecx + 0x38], 0 */
  W32((uint32_t)(eax + ecx + 0x38u), 0x0u);
/* 89ee71: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee75: fstp dword ptr [eax + edx + 0x3c] */
  WF32((uint32_t)(eax + edx + 0x3cu), ST0); FPOP();
/* 89ee79: jmp 0x89eef9 */
  goto L_89eef9;
L_89ee7e: /* 89ee7e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89ee80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ee82: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89ee86: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ee8cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ee8c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89ee90: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 89ee93: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ee96: mov dword ptr [ecx + eax + 0x24], 0 */
  W32((uint32_t)(ecx + eax + 0x24u), 0x0u);
/* 89ee9e: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 89eea2: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89eea6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89eea8: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 89eeaa: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eeae: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89eeb0: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89eeb2: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 89eeb5: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 89eeb8: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 89eebb: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 89eebe: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89eec1: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89eec4: mov edx, dword ptr [esp + 0xd0] */
  edx = R32((uint32_t)(esp + 0xd0u));
/* 89eecb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 89eecf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89eed1: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eed5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 89eed7: lea edx, [edx + eax + 0x10] */
  edx = (uint32_t)(edx + eax + 0x10u);
/* 89eedb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89eedd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 89eee0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 89eee3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89eee6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89eee9: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eeed: mov dword ptr [edx + eax + 0x20], ebp */
  W32((uint32_t)(edx + eax + 0x20u), ebp);
/* 89eef1: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89eef5: mov dword ptr [ecx + eax + 0x1c], ebx */
  W32((uint32_t)(ecx + eax + 0x1cu), ebx);
L_89eef9: /* 89eef9: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_89eefd: /* 89eefd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 89ef01: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89ef05: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ef09: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89ef0c: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89ef0f: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 89ef13: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89ef17: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 89ef1b: mov ecx, dword ptr [edx + 0x1e0] */
  ecx = R32((uint32_t)(edx + 0x1e0u));
/* 89ef21: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89ef22: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89ef25: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ef27: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 89ef2b: jl 0x89ed11 */
  if ((sf != of)) goto L_89ed11;
L_89ef31: /* 89ef31: jmp 0x89f2ff */
  goto L_89f2ff;
L_89ef36: /* 89ef36: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 89ef3a: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89ef3d: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 89ef40: fdiv dword ptr [esi + 0x68] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x68u)));
/* 89ef43: lea ebx, [esi + 0x6c] */
  ebx = (uint32_t)(esi + 0x6cu);
/* 89ef46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89ef47: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 89ef4d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 89ef51: fild dword ptr [ecx + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 89ef54: mov ecx, ebx */
  ecx = ebx;
/* 89ef56: fdivr dword ptr [0xa08220] */
  ST0 = (F32((uint32_t)(0xa08220u))) / ST0;
/* 89ef5c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 89ef60: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x89ef66u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 89ef66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ef68: jne 0x89efa7 */
  if (!zf) goto L_89efa7;
L_89ef6a: /* 89ef6a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 89ef6e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ef74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ef76: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ef79: jnp 0x89efa7 */
  if (!pf) goto L_89efa7;
L_89ef7b: /* 89ef7b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 89ef7f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89ef85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ef87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ef8a: je 0x89efa7 */
  if (zf) goto L_89efa7;
L_89ef8c: /* 89ef8c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 89ef92: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 89ef95: fsub dword ptr [esi + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x60u)));
/* 89ef98: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 89ef9b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89ef9f: fadd dword ptr [esi + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x60u)));
/* 89efa2: fstp dword ptr [esi + 0x60] */
  WF32((uint32_t)(esi + 0x60u), ST0); FPOP();
/* 89efa5: jmp 0x89efc1 */
  goto L_89efc1;
L_89efa7: /* 89efa7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 89efab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89efad: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 89efb0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 89efb8: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 89efba: mov dword ptr [esi + 0x60], 0 */
  W32((uint32_t)(esi + 0x60u), 0x0u);
L_89efc1: /* 89efc1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89efc5: mov ecx, dword ptr [eax + 0x1e0] */
  ecx = R32((uint32_t)(eax + 0x1e0u));
/* 89efcb: xor edi, edi */
  edi = 0;
/* 89efcd: xor ebx, ebx */
  ebx = 0;
/* 89efcf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89efd1: jle 0x89f2ff */
  if ((zf || sf != of)) goto L_89f2ff;
L_89efd7: /* 89efd7: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 89efdb: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 89efdf: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 89efe3: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
L_89efe7: /* 89efe7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89efeb: cmp dword ptr [ecx + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89efee: jne 0x89effd */
  if (!zf) goto L_89effd;
L_89eff0: /* 89eff0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89eff4: mov dword ptr [edx + ebx*4], 1 */
  W32((uint32_t)(edx + ebx*4), 0x1u);
/* 89effb: jmp 0x89f029 */
  goto L_89f029;
L_89effd: /* 89effd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89efff: je 0x89f020 */
  if (zf) goto L_89f020;
L_89f001: /* 89f001: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89f005: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 89f00b: mov edx, dword ptr [ecx + edi + 0x34] */
  edx = R32((uint32_t)(ecx + edi + 0x34u));
/* 89f00f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 89f013: cmp dword ptr [eax + edx*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f017: jne 0x89f020 */
  if (!zf) goto L_89f020;
L_89f019: /* 89f019: mov eax, 1 */
  eax = 0x1u;
/* 89f01e: jmp 0x89f022 */
  goto L_89f022;
L_89f020: /* 89f020: xor eax, eax */
  eax = 0;
L_89f022: /* 89f022: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 89f026: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
L_89f029: /* 89f029: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89f02d: cmp dword ptr [edx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f031: je 0x89f2cf */
  if (zf) goto L_89f2cf;
L_89f037: /* 89f037: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 89f03e: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f044u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f044: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f04b: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f051u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f051: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89f055: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 89f058: lea eax, [ecx + ebx*4] */
  eax = (uint32_t)(ecx + ebx*4);
/* 89f05b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f05e: jl 0x89f2cf */
  if ((sf != of)) goto L_89f2cf;
L_89f064: /* 89f064: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f068: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 89f06b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f06d: je 0x89f11e */
  if (zf) goto L_89f11e;
L_89f073: /* 89f073: mov ecx, dword ptr [ecx + 0x64] */
  ecx = R32((uint32_t)(ecx + 0x64u));
/* 89f076: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f078: jne 0x89f11e */
  if (!zf) goto L_89f11e;
L_89f07e: /* 89f07e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f080: je 0x89f11e */
  if (zf) goto L_89f11e;
L_89f086: /* 89f086: cmp dword ptr [esp + 0x14], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f08a: je 0x89f0c0 */
  if (zf) goto L_89f0c0;
L_89f08c: /* 89f08c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f090: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89f094: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f095: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89f099: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 89f0a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f0a1: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 89f0a5: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* 89f0a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f0aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f0ab: lea ecx, [esp + 0x108] */
  ecx = (uint32_t)(esp + 0x108u);
/* 89f0b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f0b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f0b4: call 0x6c8369 */
  esp -= 4; W32(esp, 0x89f0b9u); SPILL(); f_6c8369(); if (g_unwind) return; RELOAD();
/* 89f0b9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f0bc: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_89f0c0: /* 89f0c0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 89f0c2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89f0c4: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89f0c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89f0ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89f0ce: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f0d2: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f0d5: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 89f0d8: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f0dd: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89f0e4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f0e6: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89f0ea: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 89f0ee: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 89f0f2: mov dword ptr [edx + eax + 0x34], ebp */
  W32((uint32_t)(edx + eax + 0x34u), ebp);
/* 89f0f6: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f0fa: mov dword ptr [ecx + eax + 0x30], ebx */
  W32((uint32_t)(ecx + eax + 0x30u), ebx);
/* 89f0fe: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89f102: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f106: mov dword ptr [edx + eax + 0x38], 1 */
  W32((uint32_t)(edx + eax + 0x38u), 0x1u);
/* 89f10e: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 89f111: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f115: mov dword ptr [ecx + eax + 0x3c], edx */
  W32((uint32_t)(ecx + eax + 0x3cu), edx);
/* 89f119: jmp 0x89f2cf */
  goto L_89f2cf;
L_89f11e: /* 89f11e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f122: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 89f124: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f126: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f127: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89f12e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f12f: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* 89f136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f13a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89f13b: call 0x6c9f4d */
  esp -= 4; W32(esp, 0x89f140u); SPILL(); f_6c9f4d(); if (g_unwind) return; RELOAD();
/* 89f140: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89f144: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f14a: add ecx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f14e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89f150: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 89f157: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89f15a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89f15d: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* 89f164: mov edx, dword ptr [eax + 0x130] */
  edx = R32((uint32_t)(eax + 0x130u));
/* 89f16a: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 89f171: add edx, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f175: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89f177: mov dword ptr [esp + 0xdc], eax */
  W32((uint32_t)(esp + 0xdcu), eax);
/* 89f17e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f181: mov dword ptr [esp + 0xe0], ecx */
  W32((uint32_t)(esp + 0xe0u), ecx);
/* 89f188: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 89f18b: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 89f192: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 89f195: mov dword ptr [esp + 0xe8], ecx */
  W32((uint32_t)(esp + 0xe8u), ecx);
/* 89f19c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f19f: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 89f1a6: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f1acu); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f1ac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89f1b0: lea edx, [esp + 0x160] */
  edx = (uint32_t)(esp + 0x160u);
/* 89f1b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f1b9: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 89f1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f1c1: lea edx, [esp + 0xcc] */
  edx = (uint32_t)(esp + 0xccu);
/* 89f1c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f1c9: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89f1ceu); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89f1ce: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 89f1d5: fsub dword ptr [esp + 0x90] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x90u)));
/* 89f1dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f1df: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 89f1e6: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89f1e8: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f1ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89f1f1: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 89f1f8: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89f1fc: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f203: fstp dword ptr [esp + 0x178] */
  WF32((uint32_t)(esp + 0x178u), ST0); FPOP();
/* 89f20a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f20e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 89f210: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 89f214: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f218: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89f21a: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 89f221: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f223: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f225: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f229: fmul dword ptr [esp + 0x178] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x178u)));
/* 89f230: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 89f237: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 89f23e: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 89f242: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89f249: fadd dword ptr [esp + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x90u)));
/* 89f250: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 89f257: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 89f25e: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 89f262: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 89f266: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 89f26a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89f270u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89f270: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f274: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 89f277: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f27a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f27c: mov edx, dword ptr [esp + 0x160] */
  edx = R32((uint32_t)(esp + 0x160u));
/* 89f283: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f285: mov edx, dword ptr [esp + 0x164] */
  edx = R32((uint32_t)(esp + 0x164u));
/* 89f28c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f28f: mov edx, dword ptr [esp + 0x168] */
  edx = R32((uint32_t)(esp + 0x168u));
/* 89f296: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f299: mov edx, dword ptr [esp + 0x16c] */
  edx = R32((uint32_t)(esp + 0x16cu));
/* 89f2a0: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 89f2a3: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f2a7: lea edx, [ecx + eax + 0x10] */
  edx = (uint32_t)(ecx + eax + 0x10u);
/* 89f2ab: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 89f2af: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89f2b1: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 89f2b5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f2b8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89f2bc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89f2bf: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89f2c3: mov dword ptr [edx + eax + 0x20], ebp */
  W32((uint32_t)(edx + eax + 0x20u), ebp);
/* 89f2c7: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f2cb: mov dword ptr [ecx + eax + 0x1c], ebx */
  W32((uint32_t)(ecx + eax + 0x1cu), ebx);
L_89f2cf: /* 89f2cf: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 89f2d3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89f2d7: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f2da: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 89f2de: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89f2e2: mov eax, dword ptr [edx + 0x1e0] */
  eax = R32((uint32_t)(edx + 0x1e0u));
/* 89f2e8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89f2e9: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f2ec: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f2ef: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f2f1: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 89f2f5: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 89f2f9: jl 0x89efe7 */
  if ((sf != of)) goto L_89efe7;
L_89f2ff: /* 89f2ff: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_89f303: /* 89f303: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 89f309: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 89f30a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f30c: jl 0x89eb20 */
  if ((sf != of)) goto L_89eb20;
L_89f312: /* 89f312: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f314: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89f316: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 89f31a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89f320u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89f320: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 89f324: mov byte ptr [esp + 0x390], 5 */
  W8((uint32_t)(esp + 0x390u), 0x5u);
/* 89f32c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x89f331u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 89f331: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f335: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_89f339: /* 89f339: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 89f33d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89f33f: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 89f343: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 89f34b: jle 0x89f68a */
  if ((zf || sf != of)) goto L_89f68a;
L_89f351: /* 89f351: jmp 0x89f360 */
  goto L_89f360;
L_89f353: /* 89f353: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 89f35a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89f360: /* 89f360: mov edi, eax */
  edi = eax;
/* 89f362: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* 89f365: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f368: mov dword ptr [esp + 0x88], eax */
  W32((uint32_t)(esp + 0x88u), eax);
/* 89f36f: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 89f372: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f374: jne 0x89f3ce */
  if (!zf) goto L_89f3ce;
L_89f376: /* 89f376: mov edx, dword ptr [ecx + 0x130] */
  edx = R32((uint32_t)(ecx + 0x130u));
/* 89f37c: mov eax, esi */
  eax = esi;
/* 89f37e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f381: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f383: mov ecx, edi */
  ecx = edi;
/* 89f385: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89f387: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89f389: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89f38c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89f38f: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 89f392: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89f395: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89f398: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 89f39b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f39f: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f3a5: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f3a8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 89f3aa: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f3ad: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 89f3b0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f3b2: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 89f3b5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f3b8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89f3bb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f3be: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 89f3c5: mov byte ptr [esi + ecx], 1 */
  W8((uint32_t)(esi + ecx), 0x1u);
/* 89f3c9: jmp 0x89f671 */
  goto L_89f671;
L_89f3ce: /* 89f3ce: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 89f3d4: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 89f3d7: fld dword ptr [edx + eax + 0x50] */
  { double v = F32((uint32_t)(edx + eax + 0x50u)); FPUSH(v); }
/* 89f3db: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f3e1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f3e3: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89f3e6: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 89f3ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f3ec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89f3ef: jne 0x89f426 */
  if (!zf) goto L_89f426;
L_89f3f1: /* 89f3f1: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f3f4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f3fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f3fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f3ff: jp 0x89f40b */
  if (pf) goto L_89f40b;
L_89f401: /* 89f401: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 89f409: jmp 0x89f437 */
  goto L_89f437;
L_89f40b: /* 89f40b: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f40e: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89f411: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f413: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f416: jp 0x89f426 */
  if (pf) goto L_89f426;
L_89f418: /* 89f418: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f41b: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89f41e: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 89f422: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
L_89f426: /* 89f426: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f42a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89f430: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f432: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f435: jp 0x89f444 */
  if (pf) goto L_89f444;
L_89f437: /* 89f437: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 89f43e: cmp byte ptr [esi + edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 89f442: je 0x89f44e */
  if (zf) goto L_89f44e;
L_89f444: /* 89f444: mov eax, dword ptr [ecx + 0x198] */
  eax = R32((uint32_t)(ecx + 0x198u));
/* 89f44a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f44c: je 0x89f4b7 */
  if (zf) goto L_89f4b7;
L_89f44e: /* 89f44e: mov edx, dword ptr [ebp + 0x1dc] */
  edx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f454: mov eax, esi */
  eax = esi;
/* 89f456: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f459: lea edx, [edx + eax + 8] */
  edx = (uint32_t)(edx + eax + 0x8u);
/* 89f45d: mov ebx, esi */
  ebx = esi;
/* 89f45f: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89f462: add ebx, dword ptr [ecx + 0x130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x130u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89f468: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f46a: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 89f46c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f46f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 89f472: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 89f475: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 89f478: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 89f47b: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 89f47e: mov ecx, dword ptr [ebp + 0x1dc] */
  ecx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f484: lea edx, [ecx + eax + 0x18] */
  edx = (uint32_t)(ecx + eax + 0x18u);
/* 89f488: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f48c: mov ecx, dword ptr [ecx + 0x13c] */
  ecx = R32((uint32_t)(ecx + 0x13cu));
/* 89f492: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 89f495: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 89f498: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f49a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89f49c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f49f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 89f4a2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f4a5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89f4a8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 89f4af: mov byte ptr [esi + eax], 1 */
  W8((uint32_t)(esi + eax), 0x1u);
/* 89f4b3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89f4b7: /* 89f4b7: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f4bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f4c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f4c3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f4c6: jnp 0x89f675 */
  if (!pf) goto L_89f675;
L_89f4cc: /* 89f4cc: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f4d0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89f4d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f4d8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89f4db: jne 0x89f535 */
  if (!zf) goto L_89f535;
L_89f4dd: /* 89f4dd: mov eax, dword ptr [ecx + 0x130] */
  eax = R32((uint32_t)(ecx + 0x130u));
/* 89f4e3: mov edx, esi */
  edx = esi;
/* 89f4e5: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f4e8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f4ea: mov eax, edi */
  eax = edi;
/* 89f4ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89f4ee: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89f4f0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89f4f3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f4f6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89f4f9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89f4fc: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 89f4ff: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 89f502: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f506: mov eax, dword ptr [edx + 0x13c] */
  eax = R32((uint32_t)(edx + 0x13cu));
/* 89f50c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f50f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89f511: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 89f514: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 89f517: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f519: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 89f51c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89f51f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 89f522: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f525: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 89f52c: mov byte ptr [esi + eax], 1 */
  W8((uint32_t)(esi + eax), 0x1u);
/* 89f530: jmp 0x89f671 */
  goto L_89f671;
L_89f535: /* 89f535: mov eax, dword ptr [ecx + 0x130] */
  eax = R32((uint32_t)(ecx + 0x130u));
/* 89f53b: mov ebx, esi */
  ebx = esi;
/* 89f53d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89f540: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f542: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f549: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 89f54d: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f553u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f553: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 89f557: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 89f55b: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f562: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f563: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89f565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f566: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89f56bu); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89f56b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f56f: mov edx, dword ptr [ecx + 0x130] */
  edx = R32((uint32_t)(ecx + 0x130u));
/* 89f575: mov eax, dword ptr [esp + 0xd0] */
  eax = R32((uint32_t)(esp + 0xd0u));
/* 89f57c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f57e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f580: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 89f587: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f58a: mov eax, dword ptr [esp + 0xd8] */
  eax = R32((uint32_t)(esp + 0xd8u));
/* 89f591: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f594: mov ecx, dword ptr [esp + 0xdc] */
  ecx = R32((uint32_t)(esp + 0xdcu));
/* 89f59b: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89f59e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 89f5a2: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f5a8: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f5ab: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 89f5ae: mov edx, eax */
  edx = eax;
/* 89f5b0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f5b2: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 89f5b9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f5bc: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f5bf: mov dword ptr [esp + 0x8c], ecx */
  W32((uint32_t)(esp + 0x8cu), ecx);
/* 89f5c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f5c9: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 89f5d0: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f5d3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 89f5d5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 89f5d8: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 89f5dc: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 89f5df: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 89f5e3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 89f5e7: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f5ee: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 89f5f2: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 89f5f6: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 89f5fa: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 89f5fe: fsub dword ptr [esp + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x78u)));
/* 89f602: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 89f609: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f60d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 89f60f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 89f613: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f617: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89f619: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 89f61d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f61f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f621: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f625: fmul dword ptr [esp + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa8u)));
/* 89f62c: fstp dword ptr [esp + 0x170] */
  WF32((uint32_t)(esp + 0x170u), ST0); FPOP();
/* 89f633: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 89f63a: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 89f63e: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 89f642: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 89f646: fld dword ptr [esp + 0x170] */
  { double v = F32((uint32_t)(esp + 0x170u)); FPUSH(v); }
/* 89f64d: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 89f651: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 89f655: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89f659: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89f65b: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 89f65f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 89f663: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 89f666: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 89f66a: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 89f66e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_89f671: /* 89f671: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89f675: /* 89f675: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 89f679: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 89f67d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89f67e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f680: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 89f684: jl 0x89f353 */
  if ((sf != of)) goto L_89f353;
L_89f68a: /* 89f68a: xor ebx, ebx */
  ebx = 0;
/* 89f68c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f68d: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89f68f: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89f693: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89f699u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89f699: cmp dword ptr [esp + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f69d: je 0x89f835 */
  if (zf) goto L_89f835;
L_89f6a3: /* 89f6a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f6a7: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f6ad: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89f6af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89f6b2: mov edx, esp */
  edx = esp;
/* 89f6b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f6b6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 89f6b9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89f6bc: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 89f6bf: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89f6c2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f6c5: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89f6c8: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* 89f6cf: call 0x6c867a */
  esp -= 4; W32(esp, 0x89f6d4u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89f6d4: mov esi, eax */
  esi = eax;
/* 89f6d6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f6da: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f6df: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 89f6e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f6e8: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 89f6ee: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f6f0: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 89f6f7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f6fa: add eax, 0x1d8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f6ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f700: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 89f707: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f70a: lea eax, [esp + 0x120] */
  eax = (uint32_t)(esp + 0x120u);
/* 89f711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f712: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 89f719: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 89f720: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89f726u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89f726: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89f72a: add edi, 0x270 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x270u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f730: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f735: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89f73c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f73e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89f742: add edi, 0x2a0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2a0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f748: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f74d: lea esi, [esp + 0x11c] */
  esi = (uint32_t)(esp + 0x11cu);
/* 89f754: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f756: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f75a: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 89f761: add ecx, 0x1a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f767: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f769: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 89f770: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89f773: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 89f77a: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 89f781: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f785: lea ecx, [esp + 0x120] */
  ecx = (uint32_t)(esp + 0x120u);
/* 89f78c: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x89f792u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 89f792: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f796: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f798: add ecx, 0x1b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f79e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f7a0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f7a3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f7a6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89f7a9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89f7ac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f7b0: mov dword ptr [ecx + 0x208], ebx */
  W32((uint32_t)(ecx + 0x208u), ebx);
/* 89f7b6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89f7b8: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 89f7bf: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 89f7c5: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 89f7c9: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 89f7cf: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 89f7d2: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 89f7d9: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 89f7e1: call 0x6c9543 */
  esp -= 4; W32(esp, 0x89f7e6u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 89f7e6: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 89f7ea: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 89f7f2: call 0x6c4499 */
  esp -= 4; W32(esp, 0x89f7f7u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 89f7f7: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89f7fe: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 89f806: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x89f80bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 89f80b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 89f80f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 89f817: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x89f81cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 89f81c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 89f820: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 89f82b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x89f830u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 89f830: jmp 0x8a0787 */
  goto L_8a0787;
L_89f835: /* 89f835: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89f83b: xor esi, esi */
  esi = 0;
/* 89f83d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f83f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f843: jle 0x89f9c4 */
  if ((zf || sf != of)) goto L_89f9c4;
L_89f849: /* 89f849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_89f850: /* 89f850: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 89f857: cmp byte ptr [esi + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 89f85b: je 0x89f869 */
  if (zf) goto L_89f869;
L_89f85d: /* 89f85d: cmp dword ptr [eax + 0x198], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x198u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f863: je 0x89f954 */
  if (zf) goto L_89f954;
L_89f869: /* 89f869: cmp dword ptr [eax + 0x2d4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2d4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f86f: je 0x89f8f6 */
  if (zf) goto L_89f8f6;
L_89f875: /* 89f875: mov edx, dword ptr [eax + 0x2d0] */
  edx = R32((uint32_t)(eax + 0x2d0u));
/* 89f87b: cmp dword ptr [edx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f87e: je 0x89f8f6 */
  if (zf) goto L_89f8f6;
L_89f880: /* 89f880: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f886: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 89f88b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f88c: mov edi, esi */
  edi = esi;
/* 89f88e: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 89f891: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f892: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f894: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f895: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 89f89c: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x89f8a2u); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 89f8a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89f8a4: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 89f8a6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f8a9: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 89f8ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89f8af: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 89f8b2: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89f8b5: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 89f8b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f8bc: mov edx, dword ptr [ecx + 0x13c] */
  edx = R32((uint32_t)(ecx + 0x13cu));
/* 89f8c2: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 89f8c5: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 89f8c8: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 89f8d0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 89f8d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89f8d6: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 89f8de: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 89f8e2: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 89f8ea: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89f8ee: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89f8f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89f8f4: jmp 0x89f950 */
  goto L_89f950;
L_89f8f6: /* 89f8f6: mov edx, dword ptr [ebp + 0x1dc] */
  edx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f8fc: mov ecx, esi */
  ecx = esi;
/* 89f8fe: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89f901: lea edx, [ecx + edx + 8] */
  edx = (uint32_t)(ecx + edx + 0x8u);
/* 89f905: mov edi, esi */
  edi = esi;
/* 89f907: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 89f90a: add edi, dword ptr [eax + 0x130] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x130u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f910: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89f912: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 89f914: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 89f917: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 89f91a: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 89f91d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 89f920: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 89f923: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 89f926: mov eax, dword ptr [ebp + 0x1dc] */
  eax = R32((uint32_t)(ebp + 0x1dcu));
/* 89f92c: lea ecx, [ecx + eax + 0x18] */
  ecx = (uint32_t)(ecx + eax + 0x18u);
/* 89f930: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f934: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* 89f93a: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f93d: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 89f940: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89f942: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f944: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 89f947: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89f94a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89f94d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_89f950: /* 89f950: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_89f954: /* 89f954: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89f95a: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f95d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f960: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f963: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 89f969: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 89f96c: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 89f96f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f970: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f976: mov edx, esi */
  edx = esi;
/* 89f978: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f97b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f97d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f97e: call 0x6c1cd5 */
  esp -= 4; W32(esp, 0x89f983u); SPILL(); f_6c1cd5(); if (g_unwind) return; RELOAD();
/* 89f983: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 89f987: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f98a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f98c: jne 0x89f9b5 */
  if (!zf) goto L_89f9b5;
L_89f98e: /* 89f98e: cmp dword ptr [eax + 0x1a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f994: je 0x89f9b5 */
  if (zf) goto L_89f9b5;
L_89f996: /* 89f996: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89f99c: add eax, 0x210 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f9a1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f9a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f9a5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f9a8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f9ab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89f9ae: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89f9b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_89f9b5: /* 89f9b5: mov ecx, dword ptr [ebp + 0x1e0] */
  ecx = R32((uint32_t)(ebp + 0x1e0u));
/* 89f9bb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89f9bc: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9be: jl 0x89f850 */
  if ((sf != of)) goto L_89f850;
L_89f9c4: /* 89f9c4: mov dword ptr [eax + 0x164], 1 */
  W32((uint32_t)(eax + 0x164u), 0x1u);
/* 89f9ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f9d2: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 89f9d8: xor edi, edi */
  edi = 0;
/* 89f9da: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9dc: jle 0x89fa8c */
  if ((zf || sf != of)) goto L_89fa8c;
L_89f9e2: /* 89f9e2: xor esi, esi */
  esi = 0;
L_89f9e4: /* 89f9e4: mov edx, dword ptr [ecx + 0x104] */
  edx = R32((uint32_t)(ecx + 0x104u));
/* 89f9ea: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 89f9ed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f9ef: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9f1: jl 0x89fa7a */
  if ((sf != of)) goto L_89fa7a;
L_89f9f7: /* 89f9f7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 89f9fa: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 89fa00: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa02: jle 0x89fa78 */
  if ((zf || sf != of)) goto L_89fa78;
L_89fa04: /* 89fa04: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa0a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa0c: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 89fa0f: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89fa12: fmul dword ptr [eax + edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + edx + 0xcu)));
/* 89fa16: lea eax, [eax + edx + 0xc] */
  eax = (uint32_t)(eax + edx + 0xcu);
/* 89fa1a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa1c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa1e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa21: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa24: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa26: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa29: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa30: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa36: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa38: lea eax, [eax + edx + 0x18] */
  eax = (uint32_t)(eax + edx + 0x18u);
/* 89fa3c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89fa3e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa40: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa42: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa45: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa48: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa4a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa4d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa50: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa54: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa5c: lea eax, [eax + edx + 0x24] */
  eax = (uint32_t)(eax + edx + 0x24u);
/* 89fa60: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89fa62: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa64: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa66: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa69: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa6c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa6f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa72: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa76: jmp 0x89fa7a */
  goto L_89fa7a;
L_89fa78: /* 89fa78: fstp st(0) */
  STI(0) = ST0; FPOP();
L_89fa7a: /* 89fa7a: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 89fa80: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89fa81: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fa84: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa86: jl 0x89f9e4 */
  if ((sf != of)) goto L_89f9e4;
L_89fa8c: /* 89fa8c: mov eax, dword ptr [ecx + 0x114] */
  eax = R32((uint32_t)(ecx + 0x114u));
/* 89fa92: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa94: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 89fa98: jle 0x89fc45 */
  if ((zf || sf != of)) goto L_89fc45;
L_89fa9e: /* 89fa9e: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 89faa6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 89faaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89fab0: /* 89fab0: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 89fab6: mov ebp, dword ptr [esi + edx] */
  ebp = R32((uint32_t)(esi + edx));
/* 89fab9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89fabb: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* 89fabe: jl 0x89fc27 */
  if ((sf != of)) goto L_89fc27;
L_89fac4: /* 89fac4: cmp dword ptr [ecx + 0xb8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89faca: jle 0x89fc27 */
  if ((zf || sf != of)) goto L_89fc27;
L_89fad0: /* 89fad0: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 89fad3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fad9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fadb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fade: jne 0x89fbd4 */
  if (!zf) goto L_89fbd4;
L_89fae4: /* 89fae4: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 89faea: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 89faee: mov edx, dword ptr [eax + ecx + 0x24] */
  edx = R32((uint32_t)(eax + ecx + 0x24u));
/* 89faf2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89faf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89faf5: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89fafc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fafd: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 89fb00: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x89fb06u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 89fb06: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89fb0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb0d: lea edx, [esp + 0x1a0] */
  edx = (uint32_t)(esp + 0x1a0u);
/* 89fb14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fb15: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fb18: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x89fb1eu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 89fb1e: lea eax, [esp + 0x19c] */
  eax = (uint32_t)(esp + 0x19cu);
/* 89fb25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb26: lea ecx, [esp + 0x1d0] */
  ecx = (uint32_t)(esp + 0x1d0u);
/* 89fb2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fb2e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89fb34: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fb37: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89fb3du); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89fb3d: mov esi, eax */
  esi = eax;
/* 89fb3f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fb43: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fb48: lea edi, [esp + 0x19c] */
  edi = (uint32_t)(esp + 0x19cu);
/* 89fb4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fb51: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89fb57: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 89fb5d: lea ebx, [ebp + ebp*2] */
  ebx = (uint32_t)(ebp + ebp*2);
/* 89fb61: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89fb64: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fb66: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89fb68: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 89fb6c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89fb6f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89fb72: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 89fb76: lea ecx, [esp + 0x1fc] */
  ecx = (uint32_t)(esp + 0x1fcu);
/* 89fb7d: lea edi, [eax + ebx] */
  edi = (uint32_t)(eax + ebx);
/* 89fb80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fb81: mov ecx, edi */
  ecx = edi;
/* 89fb83: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 89fb87: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89fb8du); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89fb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb8e: lea edx, [esp + 0xf0] */
  edx = (uint32_t)(esp + 0xf0u);
/* 89fb95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fb96: lea ecx, [esp + 0x1a4] */
  ecx = (uint32_t)(esp + 0x1a4u);
/* 89fb9d: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89fba3u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89fba3: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 89fba7: mov esi, eax */
  esi = eax;
/* 89fba9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fbae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fbb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fbb4: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89fbba: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 89fbbe: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 89fbc2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fbc4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fbc6: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 89fbca: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fbcd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fbd0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89fbd4: /* 89fbd4: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 89fbda: fld dword ptr [eax + esi + 0x28] */
  { double v = F32((uint32_t)(eax + esi + 0x28u)); FPUSH(v); }
/* 89fbde: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* 89fbe1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fbec: jne 0x89fc27 */
  if (!zf) goto L_89fc27;
L_89fbee: /* 89fbee: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 89fbf1: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fbf7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fbf9: lea ebp, [ebp + ebp*2] */
  ebp = (uint32_t)(ebp + ebp*2);
/* 89fbfd: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89fc00: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 89fc03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 89fc05: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 89fc07: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89fc0a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 89fc0c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89fc0f: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 89fc12: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89fc15: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89fc17: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 89fc1a: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 89fc1d: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 89fc20: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 89fc23: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89fc27: /* 89fc27: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89fc2b: mov edx, dword ptr [ecx + 0x114] */
  edx = R32((uint32_t)(ecx + 0x114u));
/* 89fc31: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89fc32: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fc35: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fc37: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 89fc3b: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 89fc3f: jl 0x89fab0 */
  if ((sf != of)) goto L_89fab0;
L_89fc45: /* 89fc45: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 89fc4b: mov eax, 1 */
  eax = 0x1u;
/* 89fc50: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fc52: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 89fc56: jle 0x8a0322 */
  if ((zf || sf != of)) goto L_8a0322;
L_89fc5c: /* 89fc5c: mov ebx, 0x30 */
  ebx = 0x30u;
/* 89fc61: mov dword ptr [esp + 0x18], 0x10 */
  W32((uint32_t)(esp + 0x18u), 0x10u);
/* 89fc69: mov dword ptr [esp + 0x24], 0x40 */
  W32((uint32_t)(esp + 0x24u), 0x40u);
L_89fc71: /* 89fc71: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fc75: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 89fc7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89fc7f: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89fc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89fc89: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89fc8c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89fc8f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89fc91: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 89fc94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fc95: lea ecx, [esp + 0x26c] */
  ecx = (uint32_t)(esp + 0x26cu);
/* 89fc9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fc9d: mov ecx, edi */
  ecx = edi;
/* 89fc9f: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x89fca5u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 89fca5: mov esi, eax */
  esi = eax;
/* 89fca7: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fcac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fcae: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 89fcb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fcb6: xor esi, esi */
  esi = 0;
/* 89fcb8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fcba: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 89fcbe: jle 0x8a0083 */
  if ((zf || sf != of)) goto L_8a0083;
L_89fcc4: /* 89fcc4: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 89fcc8: jmp 0x89fcd0 */
  goto L_89fcd0;
L_89fcd0: /* 89fcd0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89fcd4: mov eax, dword ptr [esi + edx + 0x30] */
  eax = R32((uint32_t)(esi + edx + 0x30u));
/* 89fcd8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fcda: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89fcde: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fce4: /* 89fce4: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 89fce7: mov edi, dword ptr [ecx + 0xf8] */
  edi = R32((uint32_t)(ecx + 0xf8u));
/* 89fced: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89fcf0: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 89fcf3: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fcf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89fcf7: jne 0x89fd3d */
  if (!zf) goto L_89fd3d;
L_89fcf9: /* 89fcf9: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fcfc: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89fcff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd05: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89fd09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd0b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd0e: jne 0x89fd86 */
  if (!zf) goto L_89fd86;
L_89fd10: /* 89fd10: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd1e: jnp 0x8a0063 */
  if (!pf) goto L_8a0063;
L_89fd24: /* 89fd24: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd27: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd2c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd2f: jp 0x89fd86 */
  if (pf) goto L_89fd86;
L_89fd31: /* 89fd31: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd34: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd37: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 89fd3b: jmp 0x89fd82 */
  goto L_89fd82;
L_89fd3d: /* 89fd3d: fld dword ptr [edx + 0x4c] */
  { double v = F32((uint32_t)(edx + 0x4cu)); FPUSH(v); }
/* 89fd40: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fd43: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd4e: jne 0x89fd7f */
  if (!zf) goto L_89fd7f;
L_89fd50: /* 89fd50: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd53: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd5b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd5e: jp 0x89fd6a */
  if (pf) goto L_89fd6a;
L_89fd60: /* 89fd60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89fd62: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89fd68: jmp 0x89fd7f */
  goto L_89fd7f;
L_89fd6a: /* 89fd6a: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd6d: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd75: jp 0x89fd7f */
  if (pf) goto L_89fd7f;
L_89fd77: /* 89fd77: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd7a: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd7d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_89fd7f: /* 89fd7f: fmul dword ptr [esi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3cu)));
L_89fd82: /* 89fd82: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_89fd86: /* 89fd86: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89fd8a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd95: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fd9b: /* 89fd9b: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fd9e: mov edi, esp */
  edi = esp;
/* 89fda0: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fda5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fda7: lea ecx, [esp + 0x288] */
  ecx = (uint32_t)(esp + 0x288u);
/* 89fdae: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdb3u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fdb5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fdb8: mov dword ptr [esp + 0x18c], ecx */
  W32((uint32_t)(esp + 0x18cu), ecx);
/* 89fdbf: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fdc2: mov dword ptr [esp + 0x190], edx */
  W32((uint32_t)(esp + 0x190u), edx);
/* 89fdc9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fdcc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fdd0: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 89fdd6: mov dword ptr [esp + 0x194], ecx */
  W32((uint32_t)(esp + 0x194u), ecx);
/* 89fddd: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fde0: mov edi, esp */
  edi = esp;
/* 89fde2: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fde4: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fde9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fdeb: lea ecx, [esp + 0x278] */
  ecx = (uint32_t)(esp + 0x278u);
/* 89fdf2: mov dword ptr [esp + 0x1c8], edx */
  W32((uint32_t)(esp + 0x1c8u), edx);
/* 89fdf9: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdfeu); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fe00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fe03: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 89fe0a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fe0d: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 89fe14: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fe17: mov dword ptr [esp + 0xe4], ecx */
  W32((uint32_t)(esp + 0xe4u), ecx);
/* 89fe1e: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 89fe25: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 89fe2c: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89fe32u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89fe32: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 89fe36: lea eax, [esp + 0x17c] */
  eax = (uint32_t)(esp + 0x17cu);
/* 89fe3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fe3f: lea edx, [esp + 0x194] */
  edx = (uint32_t)(esp + 0x194u);
/* 89fe46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fe47: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 89fe4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe4f: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89fe54u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89fe54: mov edx, dword ptr [esp + 0x18c] */
  edx = R32((uint32_t)(esp + 0x18cu));
/* 89fe5b: mov eax, dword ptr [esp + 0x190] */
  eax = R32((uint32_t)(esp + 0x190u));
/* 89fe62: mov ecx, esp */
  ecx = esp;
/* 89fe64: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fe66: mov edx, dword ptr [esp + 0x194] */
  edx = R32((uint32_t)(esp + 0x194u));
/* 89fe6d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fe70: mov eax, dword ptr [esp + 0x198] */
  eax = R32((uint32_t)(esp + 0x198u));
/* 89fe77: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fe7a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 89fe7d: lea ecx, [esp + 0x2d8] */
  ecx = (uint32_t)(esp + 0x2d8u);
/* 89fe84: call 0x6c867a */
  esp -= 4; W32(esp, 0x89fe89u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89fe89: mov esi, eax */
  esi = eax;
/* 89fe8b: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fe90: lea edi, [esp + 0x1fc] */
  edi = (uint32_t)(esp + 0x1fcu);
/* 89fe97: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fe99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fe9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 89fea3: lea edi, [edx + ebx] */
  edi = (uint32_t)(edx + ebx);
/* 89fea6: mov eax, edi */
  eax = edi;
/* 89fea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89feaa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fead: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89feb0: mov dword ptr [esp + 0x1fc], ecx */
  W32((uint32_t)(esp + 0x1fcu), ecx);
/* 89feb7: mov dword ptr [esp + 0x200], edx */
  W32((uint32_t)(esp + 0x200u), edx);
/* 89febe: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fec2: mov dword ptr [esp + 0x204], eax */
  W32((uint32_t)(esp + 0x204u), eax);
/* 89fec9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fece: lea esi, [esp + 0x1fc] */
  esi = (uint32_t)(esp + 0x1fcu);
/* 89fed5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fed7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fedb: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fee1: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 89fee7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89feeb: mov esi, dword ptr [edx + ecx + 0x34] */
  esi = R32((uint32_t)(edx + ecx + 0x34u));
/* 89feef: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 89fef2: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89fef5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fef7: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 89fefa: lea eax, [esp + 0x1cc] */
  eax = (uint32_t)(esp + 0x1ccu);
/* 89ff01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff02: mov ecx, edi */
  ecx = edi;
/* 89ff04: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89ff0au); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89ff0a: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* 89ff11: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x89ff17u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 89ff17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff18: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89ff1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff20: lea ecx, [esp + 0x1e0] */
  ecx = (uint32_t)(esp + 0x1e0u);
/* 89ff27: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff2du); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff2d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff2f: mov dword ptr [esp + 0x128], edx */
  W32((uint32_t)(esp + 0x128u), edx);
/* 89ff36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ff39: mov dword ptr [esp + 0x12c], ecx */
  W32((uint32_t)(esp + 0x12cu), ecx);
/* 89ff40: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ff43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff44: lea eax, [esp + 0x174] */
  eax = (uint32_t)(esp + 0x174u);
/* 89ff4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff4c: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* 89ff53: mov dword ptr [esp + 0x138], edx */
  W32((uint32_t)(esp + 0x138u), edx);
/* 89ff5a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff60u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ff62: mov dword ptr [esp + 0x134], ecx */
  W32((uint32_t)(esp + 0x134u), ecx);
/* 89ff69: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89ff6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff6d: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 89ff71: mov dword ptr [esp + 0x13c], edx */
  W32((uint32_t)(esp + 0x13cu), edx);
/* 89ff78: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89ff7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff7c: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 89ff83: mov dword ptr [esp + 0x144], eax */
  W32((uint32_t)(esp + 0x144u), eax);
/* 89ff8a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff90u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff90: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 89ff93: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 89ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff98: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 89ff9b: mov dword ptr [esp + 0x140], edx */
  W32((uint32_t)(esp + 0x140u), edx);
/* 89ffa2: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 89ffa5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ffa8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 89ffaa: mov dword ptr [esp + 0x144], ecx */
  W32((uint32_t)(esp + 0x144u), ecx);
/* 89ffb1: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 89ffb3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ffb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ffb7: lea eax, [esp + 0x230] */
  eax = (uint32_t)(esp + 0x230u);
/* 89ffbe: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 89ffc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ffc6: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89ffcd: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 89ffd4: mov dword ptr [esp + 0x150], edx */
  W32((uint32_t)(esp + 0x150u), edx);
/* 89ffdb: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 89ffe2: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ffe8u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ffe8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ffea: mov dword ptr [esp + 0x11c], ecx */
  W32((uint32_t)(esp + 0x11cu), ecx);
/* 89fff1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fff4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fff8: mov dword ptr [esp + 0x120], edx */
  W32((uint32_t)(esp + 0x120u), edx);
/* 89ffff: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a0002: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8a0006: mov dword ptr [esp + 0x124], eax */
  W32((uint32_t)(esp + 0x124u), eax);
/* 8a000d: mov ebp, dword ptr [ecx + 0x130] */
  ebp = R32((uint32_t)(ecx + 0x130u));
/* 8a0013: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a0016: mov edi, esp */
  edi = esp;
/* 8a0018: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a001d: lea esi, [esp + 0x14c] */
  esi = (uint32_t)(esp + 0x14cu);
/* 8a0024: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0026: lea ecx, [esp + 0x268] */
  ecx = (uint32_t)(esp + 0x268u);
/* 8a002d: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a002f: call 0x6c775c */
  esp -= 4; W32(esp, 0x8a0034u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 8a0034: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0036: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 8a0039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a003c: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 8a003f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0042: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8a0045: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a0048: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8a004b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a004f: mov ecx, dword ptr [ecx + 0x130] */
  ecx = R32((uint32_t)(ecx + 0x130u));
/* 8a0055: add ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0059: call dword ptr [0xcfa35c] */
  esp -= 4; W32(esp, 0x8a005fu); SPILL(); f_4e39c7(); if (g_unwind) return; /* Core!?Normalize@FQuat@@QAEHXZ */ RELOAD();
/* 8a005f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a0063: /* 8a0063: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a0067: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a006b: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8a006f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0070: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0073: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0075: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a0079: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 8a007d: jl 0x89fcd0 */
  if ((sf != of)) goto L_89fcd0;
L_8a0083: /* 8a0083: mov eax, dword ptr [ecx + 0x120] */
  eax = R32((uint32_t)(ecx + 0x120u));
/* 8a0089: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a008b: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8a0093: jle 0x8a02f2 */
  if ((zf || sf != of)) goto L_8a02f2;
L_8a0099: /* 8a0099: xor ebp, ebp */
  ebp = 0;
/* 8a009b: jmp 0x8a00a0 */
  goto L_8a00a0;
L_8a00a0: /* 8a00a0: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a00a6: mov esi, dword ptr [edx + ebp] */
  esi = R32((uint32_t)(edx + ebp));
/* 8a00a9: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* 8a00ac: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a00b0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a00b2: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a00b8: /* 8a00b8: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8a00bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a00c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a00c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a00c6: jne 0x8a022a */
  if (!zf) goto L_8a022a;
L_8a00cc: /* 8a00cc: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00d2: lea edx, [eax + ebp + 8] */
  edx = (uint32_t)(eax + ebp + 0x8u);
/* 8a00d6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a00d8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8a00dc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a00df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8a00e3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a00e6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8a00ea: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00f0: mov ecx, dword ptr [eax + ebp + 0x24] */
  ecx = R32((uint32_t)(eax + ebp + 0x24u));
/* 8a00f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a00f5: lea edx, [esp + 0x164] */
  edx = (uint32_t)(esp + 0x164u);
/* 8a00fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a00fd: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8a0101: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x8a0107u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 8a0107: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8a010d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a010e: lea eax, [esp + 0xf0] */
  eax = (uint32_t)(esp + 0xf0u);
/* 8a0115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0116: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0119: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8a011fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8a011f: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 8a0126: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a012cu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a012c: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8a0133: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0139u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0139: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8a0140: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0146u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0146: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a014a: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a0150: mov edx, dword ptr [ecx + ebp + 0x20] */
  edx = R32((uint32_t)(ecx + ebp + 0x20u));
/* 8a0154: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a0156: jne 0x8a017f */
  if (!zf) goto L_8a017f;
L_8a0158: /* 8a0158: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a015e: lea edx, [esp + 0x328] */
  edx = (uint32_t)(esp + 0x328u);
/* 8a0165: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0166: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0168: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a016eu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a016e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a016f: lea eax, [esp + 0x29c] */
  eax = (uint32_t)(esp + 0x29cu);
/* 8a0176: lea ecx, [esp + 0xf0] */
  ecx = (uint32_t)(esp + 0xf0u);
/* 8a017d: jmp 0x8a01d0 */
  goto L_8a01d0;
L_8a017f: /* 8a017f: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 8a0186: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0187: lea ecx, [eax + 0xc0] */
  ecx = (uint32_t)(eax + 0xc0u);
/* 8a018d: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a0193u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0193: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 8a019a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01a0u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01a0: lea ecx, [esp + 0x1b4] */
  ecx = (uint32_t)(esp + 0x1b4u);
/* 8a01a7: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01adu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ad: lea ecx, [esp + 0x1c0] */
  ecx = (uint32_t)(esp + 0x1c0u);
/* 8a01b4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01bau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ba: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 8a01c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a01c2: lea eax, [esp + 0x2fc] */
  eax = (uint32_t)(esp + 0x2fcu);
/* 8a01c9: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
L_8a01d0: /* 8a01d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a01d1: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x8a01d7u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8a01d7: mov esi, eax */
  esi = eax;
/* 8a01d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a01dd: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 8a01e4: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a01e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a01eb: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a01f1: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a01f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a01f5: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
/* 8a01fc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a01ff: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 8a0206: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a0209: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 8a0210: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 8a0216: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a0218: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a021d: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 8a0224: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0226: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a022a: /* 8a022a: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a0230: fld dword ptr [edx + ebp + 0x28] */
  { double v = F32((uint32_t)(edx + ebp + 0x28u)); FPUSH(v); }
/* 8a0234: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a023a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a023c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a023f: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a0245: /* 8a0245: mov eax, edx */
  eax = edx;
/* 8a0247: lea edx, [eax + ebp + 0x14] */
  edx = (uint32_t)(eax + ebp + 0x14u);
/* 8a024b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a024d: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8a0251: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a0254: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8a0258: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a025b: lea eax, [esp + 0x358] */
  eax = (uint32_t)(esp + 0x358u);
/* 8a0262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0263: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0269: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 8a026d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a0273u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0274: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8a027b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a027c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8a0280: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8a0286u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a0286: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0288: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8a028c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a028f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8a0293: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0296: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a029a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 8a029e: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a02a4: fld dword ptr [ecx + ebp + 0x28] */
  { double v = F32((uint32_t)(ecx + ebp + 0x28u)); FPUSH(v); }
/* 8a02a8: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8a02ae: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8a02b2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a02b4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8a02b6: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8a02ba: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a02bc: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8a02c0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a02c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a02c4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a02c6: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a02c9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a02cc: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a02cf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a02d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a02d6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8a02d8: /* 8a02d8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a02dc: mov edx, dword ptr [ecx + 0x120] */
  edx = R32((uint32_t)(ecx + 0x120u));
/* 8a02e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a02e3: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a02e6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a02e8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a02ec: jl 0x8a00a0 */
  if ((sf != of)) goto L_8a00a0;
L_8a02f2: /* 8a02f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8a02f6: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 8a02fa: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8a02fe: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0304: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0305: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a0308: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a030b: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a030e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0310: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8a0314: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8a0318: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8a031c: jl 0x89fc71 */
  if ((sf != of)) goto L_89fc71;
L_8a0322: /* 8a0322: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 8a0329: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 8a0331: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a0336u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a0336: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8a033a: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 8a0342: call 0x6c4499 */
  esp -= 4; W32(esp, 0x8a0347u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 8a0347: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 8a034e: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 8a0356: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8a035bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8a035b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 8a035f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 8a0367: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x8a036cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 8a036c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8a0370: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a037b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x8a0380u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 8a0380: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_8a0384: /* 8a0384: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a038b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a038d: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a0393: /* 8a0393: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a0396: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 8a039c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a039e: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a03a4: /* 8a03a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03aa: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03b0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03b2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03b8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03bc: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03c5: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 8a03cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03d1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03d7: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03df: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03e5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03e9: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03ef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03f2: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 8a03f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0402: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0408: xor eax, eax */
  eax = 0;
/* 8a040a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a040c: jle 0x8a047b */
  if ((zf || sf != of)) goto L_8a047b;
L_8a040e: /* 8a040e: xor edx, edx */
  edx = 0;
/* 8a0410: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a0414: xor esi, esi */
  esi = 0;
/* 8a0416: jmp 0x8a0420 */
  goto L_8a0420;
L_8a0420: /* 8a0420: mov ecx, dword ptr [ecx + 0x17c] */
  ecx = R32((uint32_t)(ecx + 0x17cu));
/* 8a0426: mov edi, dword ptr [ebp + 0x1dc] */
  edi = R32((uint32_t)(ebp + 0x1dcu));
/* 8a042c: mov edi, dword ptr [edx + edi + 0x34] */
  edi = R32((uint32_t)(edx + edi + 0x34u));
/* 8a0430: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a0434: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a0437: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a043b: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 8a0441: mov ecx, dword ptr [ecx + 0x170] */
  ecx = R32((uint32_t)(ecx + 0x170u));
/* 8a0447: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0449: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a044b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a044d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8a044f: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8a0452: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8a0455: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8a0458: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a045c: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8a045f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0463: mov edi, dword ptr [ecx + 0xb8] */
  edi = R32((uint32_t)(ecx + 0xb8u));
/* 8a0469: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a046a: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a046d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a0470: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0473: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0475: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8a0479: jl 0x8a0420 */
  if ((sf != of)) goto L_8a0420;
L_8a047b: /* 8a047b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8a047d: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 8a0484: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8a048a: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 8a048e: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 8a0494: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8a0497: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a049e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04a0: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04a6: /* 8a04a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a04a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04ab: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04b1: /* 8a04b1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8a04b4: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 8a04ba: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 8a04bd: mov esi, dword ptr [edx + 0x50] */
  esi = R32((uint32_t)(edx + 0x50u));
/* 8a04c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04c2: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04c8: /* 8a04c8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a04cc: mov esi, dword ptr [edx + 0xfc] */
  esi = R32((uint32_t)(edx + 0xfcu));
/* 8a04d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04d4: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04da: /* 8a04da: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8a04dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04df: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04e5: /* 8a04e5: mov eax, ecx */
  eax = ecx;
/* 8a04e7: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8a04ea: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a04ee: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8a04f4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8a04f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a04f8: mov dword ptr [esp + 0x390], 7 */
  W32((uint32_t)(esp + 0x390u), 0x7u);
/* 8a0503: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0509u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0509: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 8a0510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0511: mov ecx, esi */
  ecx = esi;
/* 8a0513: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0519u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a051a: mov ecx, ebp */
  ecx = ebp;
/* 8a051c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0522u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0523: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8a052a: push 0xae7e40 */
  { uint32_t v = 0xae7e40u; esp -= 4; W32(esp, v); }
/* 8a052f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0530: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a0536u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a0536: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a0539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a053a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a053e: mov byte ptr [esp + 0x394], 8 */
  W8((uint32_t)(esp + 0x394u), 0x8u);
/* 8a0546: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a054cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a054c: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0553: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a055b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0561u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0561: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a0564: fadd dword ptr [0x9f7fc4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7fc4u)));
/* 8a056a: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8a056c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0570: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a0575: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a0578: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a057c: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0580: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0584: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a058au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a058a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a058f: push 0xae7eac */
  { uint32_t v = 0xae7eacu; esp -= 4; W32(esp, v); }
/* 8a0594: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a0596: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a0598: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a059du); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a059d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05a0: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05a9: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a05ac: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 8a05b3: test dword ptr [eax + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a05bd: je 0x8a05fa */
  if (zf) goto L_8a05fa;
L_8a05bf: /* 8a05bf: mov ecx, esi */
  ecx = esi;
/* 8a05c1: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a05c6: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a05ca: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a05ce: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a05d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a05d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a05d8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a05dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a05dd: push 0xae7eb4 */
  { uint32_t v = 0xae7eb4u; esp -= 4; W32(esp, v); }
/* 8a05e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a05e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a05e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a05e6: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a05ebu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a05eb: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05ee: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05f7: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_8a05fa: /* 8a05fa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a05fe: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 8a0604: xor ebp, ebp */
  ebp = 0;
/* 8a0606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a0608: jle 0x8a0772 */
  if ((zf || sf != of)) goto L_8a0772;
L_8a060e: /* 8a060e: xor esi, esi */
  esi = 0;
/* 8a0610: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a0614: jmp 0x8a0620 */
  goto L_8a0620;
L_8a0620: /* 8a0620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a0622: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8a0629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8a062fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8a062f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0633: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a0639: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 8a0640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0641: lea ecx, [edx + esi + 8] */
  ecx = (uint32_t)(edx + esi + 0x8u);
/* 8a0645: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8a064bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8a064b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a064d: je 0x8a0758 */
  if (zf) goto L_8a0758;
L_8a0653: /* 8a0653: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0657: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a065d: mov edx, dword ptr [edx + esi + 8] */
  edx = R32((uint32_t)(edx + esi + 0x8u));
/* 8a0661: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a0663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0664: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8a066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a066a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a066c: je 0x8a067d */
  if (zf) goto L_8a067d;
L_8a066e: /* 8a066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0672: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0675: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8a067bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a067b: jmp 0x8a0683 */
  goto L_8a0683;
L_8a067d: /* 8a067d: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_8a0683: /* 8a0683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0687: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8a068e: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 8a0694: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8a0698: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8a069c: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8a069f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a06a1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8a06a8: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8a06ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06af: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x8a06b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a06b5: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8a06bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06bd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a06c2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a06c2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8a06c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06c6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06c9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8a06cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06cf: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a06d5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a06d5: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 8a06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06dd: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a06e3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a06e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06e5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 8a06ec: push 0xae7ed8 */
  { uint32_t v = 0xae7ed8u; esp -= 4; W32(esp, v); }
/* 8a06f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a06f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a06f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a06f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a06fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06fc: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a0700: mov byte ptr [esp + 0x394], 9 */
  W8((uint32_t)(esp + 0x394u), 0x9u);
/* 8a0708: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a070eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a070e: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0715: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a071d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0723u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0723: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0727: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a072c: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a0730: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0734: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a073eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a073e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a0742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0743: push 0xae7f70 */
  { uint32_t v = 0xae7f70u; esp -= 4; W32(esp, v); }
/* 8a0748: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a074a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a074b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a074c: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a0751u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a0751: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a0755: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a0758: /* 8a0758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a075c: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 8a0762: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a0763: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0766: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0768: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a076c: jl 0x8a0620 */
  if ((sf != of)) goto L_8a0620;
L_8a0772: /* 8a0772: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0776: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a0781: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0787u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8a0787: /* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_89e9ad(void) {
  LOAD_REGS();
  goto L_89e9ad;
L_89e9a7: /* 89e9a7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89e9ab: jmp 0x89e9b0 */
  goto L_89e9b0;
L_89e9ad: /* 89e9ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89e9b0: /* 89e9b0: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 89e9b6: cmp dword ptr [eax + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e9b9: jle 0x89e9dd */
  if ((zf || sf != of)) goto L_89e9dd;
L_89e9bb: /* 89e9bb: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 89e9be: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 89e9c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89e9c3: jl 0x89e9dd */
  if ((sf != of)) goto L_89e9dd;
L_89e9c5: /* 89e9c5: cmp dword ptr [ebp + 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89e9cb: jle 0x89e9dd */
  if ((zf || sf != of)) goto L_89e9dd;
L_89e9cd: /* 89e9cd: mov edi, dword ptr [ebp + 0xb4] */
  edi = R32((uint32_t)(ebp + 0xb4u));
/* 89e9d3: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 89e9d6: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89e9d9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89e9db: jmp 0x89e9e6 */
  goto L_89e9e6;
L_89e9dd: /* 89e9dd: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 89e9e3: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_89e9e6: /* 89e9e6: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 89e9ec: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89e9ee: mov ecx, 0xc */
  ecx = 0xcu;
/* 89e9f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89e9f5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89e9f9: mov eax, dword ptr [ecx + 0x1e0] */
  eax = R32((uint32_t)(ecx + 0x1e0u));
/* 89e9ff: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 89ea00: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89ea03: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ea05: jl 0x89e9a7 */
  if ((sf != of)) goto L_89e9a7;
L_89ea07: /* 89ea07: jmp 0x8a0787 */
  goto L_8a0787;
L_8a0787: /* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_89eb1a(void) {
  LOAD_REGS();
L_89eb1a: /* 89eb1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89eb20: /* 89eb20: mov esi, dword ptr [edx + 0xf8] */
  esi = R32((uint32_t)(edx + 0xf8u));
/* 89eb26: mov eax, ebp */
  eax = ebp;
/* 89eb28: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 89eb2b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89eb2d: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 89eb33: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89eb36: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb38: mov ecx, 0xc */
  ecx = 0xcu;
/* 89eb3d: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 89eb44: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 89eb48: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89eb4a: jne 0x89eb59 */
  if (!zf) goto L_89eb59;
L_89eb4c: /* 89eb4c: mov dword ptr [esp + 0x84], 0x3f800000 */
  W32((uint32_t)(esp + 0x84u), 0x3f800000u);
/* 89eb57: jmp 0x89eb63 */
  goto L_89eb63;
L_89eb59: /* 89eb59: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 89eb5c: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
L_89eb63: /* 89eb63: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89eb66: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89eb69: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89eb6f: /* 89eb6f: mov ecx, dword ptr [edx + 0xac] */
  ecx = R32((uint32_t)(edx + 0xacu));
/* 89eb75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb77: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eb7d: /* 89eb7d: mov ecx, dword ptr [edx + 0xa8] */
  ecx = R32((uint32_t)(edx + 0xa8u));
/* 89eb83: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89eb86: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 89eb89: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 89eb8c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eb8e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89eb92: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eb98: /* 89eb98: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89eb9f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89eba5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89eba7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebaa: jne 0x89f303 */
  if (!zf) goto L_89f303;
L_89ebb0: /* 89ebb0: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 89ebb4: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 89ebb7: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89ebbb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ebc1: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 89ebc3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ebc5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ebc8: jp 0x89ebdc */
  if (pf) goto L_89ebdc;
L_89ebca: /* 89ebca: mov eax, dword ptr [edx + 0x164] */
  eax = R32((uint32_t)(edx + 0x164u));
/* 89ebd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebd2: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 89ebda: jne 0x89ebe4 */
  if (!zf) goto L_89ebe4;
L_89ebdc: /* 89ebdc: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_89ebe4: /* 89ebe4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ebe6: je 0x89ec0c */
  if (zf) goto L_89ec0c;
L_89ebe8: /* 89ebe8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89ebeb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89ebed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ebee: mov ecx, esi */
  ecx = esi;
/* 89ebf0: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x89ebf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ebf3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89ebf5: mov ebx, eax */
  ebx = eax;
/* 89ebf7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89ebfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ebfb: mov ecx, esi */
  ecx = esi;
/* 89ebfd: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 89ec01: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x89ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ec04: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89ec08: mov ecx, eax */
  ecx = eax;
/* 89ec0a: jmp 0x89ec14 */
  goto L_89ec14;
L_89ec0c: /* 89ec0c: xor ebx, ebx */
  ebx = 0;
/* 89ec0e: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 89ec12: xor ecx, ecx */
  ecx = 0;
L_89ec14: /* 89ec14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec16: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 89ec21: je 0x89ec72 */
  if (zf) goto L_89ec72;
L_89ec23: /* 89ec23: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 89ec26: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 89ec2d: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 89ec34: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ec3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ec3c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec3f: jne 0x89ecdb */
  if (!zf) goto L_89ecdb;
L_89ec45: /* 89ec45: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 89ec4c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 89ec52: fcomp dword ptr [esp + 0xa0] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xa0u)));
  FPOP();
/* 89ec59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ec5b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ec5e: jp 0x89ec68 */
  if (pf) goto L_89ec68;
L_89ec60: /* 89ec60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89ec62: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_89ec68: /* 89ec68: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 89ec6b: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
L_89ec72: /* 89ec72: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ec76: je 0x89f303 */
  if (zf) goto L_89f303;
L_89ec7c: /* 89ec7c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 89ec80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec82: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ec86: jne 0x89ece3 */
  if (!zf) goto L_89ece3;
L_89ec88: /* 89ec88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec8a: je 0x89f303 */
  if (zf) goto L_89f303;
L_89ec90: /* 89ec90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ec92: jne 0x89ef36 */
  if (!zf) goto L_89ef36;
L_89ec98: /* 89ec98: mov eax, dword ptr [edx + 0x164] */
  eax = R32((uint32_t)(edx + 0x164u));
/* 89ec9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89eca0: je 0x89f303 */
  if (zf) goto L_89f303;
L_89eca6: /* 89eca6: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89ecaa: mov esi, dword ptr [ecx + 0x1e0] */
  esi = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecb0: xor eax, eax */
  eax = 0;
/* 89ecb2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ecb4: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89ecba: /* 89ecba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89ecc0: /* 89ecc0: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 89ecc7: mov byte ptr [eax + edx], 2 */
  W8((uint32_t)(eax + edx), 0x2u);
/* 89eccb: mov edx, dword ptr [ecx + 0x1e0] */
  edx = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89ecd2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ecd4: jl 0x89ecc0 */
  if ((sf != of)) goto L_89ecc0;
L_89ecd6: /* 89ecd6: jmp 0x89f2ff */
  goto L_89f2ff;
L_89ecdb: /* 89ecdb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89ece1: jmp 0x89ec68 */
  goto L_89ec68;
L_89ece3: /* 89ece3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ece5: jne 0x89ec90 */
  if (!zf) goto L_89ec90;
L_89ece7: /* 89ece7: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89eceb: mov eax, dword ptr [ecx + 0x1e0] */
  eax = R32((uint32_t)(ecx + 0x1e0u));
/* 89ecf1: xor ebx, ebx */
  ebx = 0;
/* 89ecf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ecf5: jle 0x89f303 */
  if ((zf || sf != of)) goto L_89f303;
L_89ecfb: /* 89ecfb: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 89ecff: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 89ed03: xor eax, eax */
  eax = 0;
/* 89ed05: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 89ed09: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 89ed0d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_89ed11: /* 89ed11: cmp dword ptr [esi + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed14: jne 0x89ed23 */
  if (!zf) goto L_89ed23;
L_89ed16: /* 89ed16: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89ed1a: mov dword ptr [edx + ebx*4], 1 */
  W32((uint32_t)(edx + ebx*4), 0x1u);
/* 89ed21: jmp 0x89ed4f */
  goto L_89ed4f;
L_89ed23: /* 89ed23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ed25: je 0x89ed46 */
  if (zf) goto L_89ed46;
L_89ed27: /* 89ed27: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 89ed2b: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 89ed31: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89ed35: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 89ed39: cmp dword ptr [ecx + eax*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed3d: jne 0x89ed46 */
  if (!zf) goto L_89ed46;
L_89ed3f: /* 89ed3f: mov eax, 1 */
  eax = 0x1u;
/* 89ed44: jmp 0x89ed48 */
  goto L_89ed48;
L_89ed46: /* 89ed46: xor eax, eax */
  eax = 0;
L_89ed48: /* 89ed48: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89ed4c: mov dword ptr [edx + ebx*4], eax */
  W32((uint32_t)(edx + ebx*4), eax);
L_89ed4f: /* 89ed4f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 89ed53: cmp dword ptr [eax + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ed57: je 0x89eefd */
  if (zf) goto L_89eefd;
L_89ed5d: /* 89ed5d: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 89ed60: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ed64: jl 0x89eefd */
  if ((sf != of)) goto L_89eefd;
L_89ed6a: /* 89ed6a: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 89ed6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ed6f: jne 0x89edd4 */
  if (!zf) goto L_89edd4;
L_89ed71: /* 89ed71: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89ed73: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ed75: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89ed79: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ed7fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ed7f: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89ed83: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 89ed86: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89ed89: mov dword ptr [esi + edx + 0x24], 0 */
  W32((uint32_t)(esi + edx + 0x24u), 0x0u);
/* 89ed91: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 89ed95: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89ed99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ed9b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89ed9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ed9e: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 89eda1: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 89eda4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89eda5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 89eda8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89eda9: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 89edb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edb1: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89edb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89edb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edb7: call 0x6c9f4d */
  esp -= 4; W32(esp, 0x89edbcu); SPILL(); f_6c9f4d(); if (g_unwind) return; RELOAD();
/* 89edbc: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 89edc0: mov dword ptr [esi + ecx + 0x20], ebp */
  W32((uint32_t)(esi + ecx + 0x20u), ebp);
/* 89edc4: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 89edc8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89edcb: mov dword ptr [esi + edx + 0x1c], ebx */
  W32((uint32_t)(esi + edx + 0x1cu), ebx);
/* 89edcf: jmp 0x89eef9 */
  goto L_89eef9;
L_89edd4: /* 89edd4: cmp dword ptr [esp + 0x14], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89edd8: je 0x89ee17 */
  if (zf) goto L_89ee17;
L_89edda: /* 89edda: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89edde: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 89ede5: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89ede9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89edeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89edec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89eded: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 89edf0: lea eax, [esp + 0xe0] */
  eax = (uint32_t)(esp + 0xe0u);
/* 89edf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89edf8: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89edfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89edfd: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89ee01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ee02: lea eax, [esp + 0x108] */
  eax = (uint32_t)(esp + 0x108u);
/* 89ee09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ee0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ee0b: call 0x6c8369 */
  esp -= 4; W32(esp, 0x89ee10u); SPILL(); f_6c8369(); if (g_unwind) return; RELOAD();
/* 89ee10: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89ee13: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_89ee17: /* 89ee17: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ee1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89ee1d: jle 0x89ee7e */
  if ((zf || sf != of)) goto L_89ee7e;
L_89ee1f: /* 89ee1f: cmp dword ptr [esi + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ee22: jne 0x89ee7e */
  if (!zf) goto L_89ee7e;
L_89ee24: /* 89ee24: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 89ee26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ee28: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89ee2c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ee32u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ee32: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89ee39: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee3d: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ee40: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* 89ee43: mov ecx, 0xc */
  ecx = 0xcu;
/* 89ee48: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89ee4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89ee51: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89ee55: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 89ee59: mov dword ptr [eax + ecx + 0x34], ebp */
  W32((uint32_t)(eax + ecx + 0x34u), ebp);
/* 89ee5d: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee61: mov dword ptr [eax + edx + 0x30], ebx */
  W32((uint32_t)(eax + edx + 0x30u), ebx);
/* 89ee65: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89ee69: mov dword ptr [eax + ecx + 0x38], 0 */
  W32((uint32_t)(eax + ecx + 0x38u), 0x0u);
/* 89ee71: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89ee75: fstp dword ptr [eax + edx + 0x3c] */
  WF32((uint32_t)(eax + edx + 0x3cu), ST0); FPOP();
/* 89ee79: jmp 0x89eef9 */
  goto L_89eef9;
L_89ee7e: /* 89ee7e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89ee80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ee82: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89ee86: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89ee8cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89ee8c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89ee90: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 89ee93: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ee96: mov dword ptr [ecx + eax + 0x24], 0 */
  W32((uint32_t)(ecx + eax + 0x24u), 0x0u);
/* 89ee9e: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 89eea2: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89eea6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89eea8: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 89eeaa: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eeae: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89eeb0: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89eeb2: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 89eeb5: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 89eeb8: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 89eebb: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 89eebe: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89eec1: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89eec4: mov edx, dword ptr [esp + 0xd0] */
  edx = R32((uint32_t)(esp + 0xd0u));
/* 89eecb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 89eecf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89eed1: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eed5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 89eed7: lea edx, [edx + eax + 0x10] */
  edx = (uint32_t)(edx + eax + 0x10u);
/* 89eedb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89eedd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 89eee0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 89eee3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89eee6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89eee9: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89eeed: mov dword ptr [edx + eax + 0x20], ebp */
  W32((uint32_t)(edx + eax + 0x20u), ebp);
/* 89eef1: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89eef5: mov dword ptr [ecx + eax + 0x1c], ebx */
  W32((uint32_t)(ecx + eax + 0x1cu), ebx);
L_89eef9: /* 89eef9: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_89eefd: /* 89eefd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 89ef01: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89ef05: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89ef09: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89ef0c: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89ef0f: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 89ef13: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89ef17: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 89ef1b: mov ecx, dword ptr [edx + 0x1e0] */
  ecx = R32((uint32_t)(edx + 0x1e0u));
/* 89ef21: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89ef22: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89ef25: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ef27: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 89ef2b: jl 0x89ed11 */
  if ((sf != of)) goto L_89ed11;
L_89ef31: /* 89ef31: jmp 0x89f2ff */
  goto L_89f2ff;
L_89ef36: /* 89ef36: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 89ef3a: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89ef3d: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 89ef40: fdiv dword ptr [esi + 0x68] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x68u)));
/* 89ef43: lea ebx, [esi + 0x6c] */
  ebx = (uint32_t)(esi + 0x6cu);
/* 89ef46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89ef47: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 89ef4d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 89ef51: fild dword ptr [ecx + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 89ef54: mov ecx, ebx */
  ecx = ebx;
/* 89ef56: fdivr dword ptr [0xa08220] */
  ST0 = (F32((uint32_t)(0xa08220u))) / ST0;
/* 89ef5c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 89ef60: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x89ef66u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 89ef66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89ef68: jne 0x89efa7 */
  if (!zf) goto L_89efa7;
L_89ef6a: /* 89ef6a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 89ef6e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89ef74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ef76: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89ef79: jnp 0x89efa7 */
  if (!pf) goto L_89efa7;
L_89ef7b: /* 89ef7b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 89ef7f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89ef85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89ef87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89ef8a: je 0x89efa7 */
  if (zf) goto L_89efa7;
L_89ef8c: /* 89ef8c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 89ef92: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 89ef95: fsub dword ptr [esi + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x60u)));
/* 89ef98: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 89ef9b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89ef9f: fadd dword ptr [esi + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x60u)));
/* 89efa2: fstp dword ptr [esi + 0x60] */
  WF32((uint32_t)(esi + 0x60u), ST0); FPOP();
/* 89efa5: jmp 0x89efc1 */
  goto L_89efc1;
L_89efa7: /* 89efa7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 89efab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89efad: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 89efb0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 89efb8: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 89efba: mov dword ptr [esi + 0x60], 0 */
  W32((uint32_t)(esi + 0x60u), 0x0u);
L_89efc1: /* 89efc1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89efc5: mov ecx, dword ptr [eax + 0x1e0] */
  ecx = R32((uint32_t)(eax + 0x1e0u));
/* 89efcb: xor edi, edi */
  edi = 0;
/* 89efcd: xor ebx, ebx */
  ebx = 0;
/* 89efcf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89efd1: jle 0x89f2ff */
  if ((zf || sf != of)) goto L_89f2ff;
L_89efd7: /* 89efd7: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 89efdb: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 89efdf: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 89efe3: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
L_89efe7: /* 89efe7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89efeb: cmp dword ptr [ecx + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89efee: jne 0x89effd */
  if (!zf) goto L_89effd;
L_89eff0: /* 89eff0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89eff4: mov dword ptr [edx + ebx*4], 1 */
  W32((uint32_t)(edx + ebx*4), 0x1u);
/* 89effb: jmp 0x89f029 */
  goto L_89f029;
L_89effd: /* 89effd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89efff: je 0x89f020 */
  if (zf) goto L_89f020;
L_89f001: /* 89f001: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89f005: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 89f00b: mov edx, dword ptr [ecx + edi + 0x34] */
  edx = R32((uint32_t)(ecx + edi + 0x34u));
/* 89f00f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 89f013: cmp dword ptr [eax + edx*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f017: jne 0x89f020 */
  if (!zf) goto L_89f020;
L_89f019: /* 89f019: mov eax, 1 */
  eax = 0x1u;
/* 89f01e: jmp 0x89f022 */
  goto L_89f022;
L_89f020: /* 89f020: xor eax, eax */
  eax = 0;
L_89f022: /* 89f022: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 89f026: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
L_89f029: /* 89f029: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89f02d: cmp dword ptr [edx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f031: je 0x89f2cf */
  if (zf) goto L_89f2cf;
L_89f037: /* 89f037: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 89f03e: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f044u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f044: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f04b: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f051u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f051: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89f055: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 89f058: lea eax, [ecx + ebx*4] */
  eax = (uint32_t)(ecx + ebx*4);
/* 89f05b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f05e: jl 0x89f2cf */
  if ((sf != of)) goto L_89f2cf;
L_89f064: /* 89f064: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f068: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 89f06b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f06d: je 0x89f11e */
  if (zf) goto L_89f11e;
L_89f073: /* 89f073: mov ecx, dword ptr [ecx + 0x64] */
  ecx = R32((uint32_t)(ecx + 0x64u));
/* 89f076: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f078: jne 0x89f11e */
  if (!zf) goto L_89f11e;
L_89f07e: /* 89f07e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f080: je 0x89f11e */
  if (zf) goto L_89f11e;
L_89f086: /* 89f086: cmp dword ptr [esp + 0x14], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f08a: je 0x89f0c0 */
  if (zf) goto L_89f0c0;
L_89f08c: /* 89f08c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f090: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 89f094: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f095: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89f099: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 89f0a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f0a1: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 89f0a5: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* 89f0a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f0aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f0ab: lea ecx, [esp + 0x108] */
  ecx = (uint32_t)(esp + 0x108u);
/* 89f0b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f0b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f0b4: call 0x6c8369 */
  esp -= 4; W32(esp, 0x89f0b9u); SPILL(); f_6c8369(); if (g_unwind) return; RELOAD();
/* 89f0b9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f0bc: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_89f0c0: /* 89f0c0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 89f0c2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89f0c4: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 89f0c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89f0ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89f0ce: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f0d2: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f0d5: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 89f0d8: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f0dd: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89f0e4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f0e6: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89f0ea: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 89f0ee: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 89f0f2: mov dword ptr [edx + eax + 0x34], ebp */
  W32((uint32_t)(edx + eax + 0x34u), ebp);
/* 89f0f6: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f0fa: mov dword ptr [ecx + eax + 0x30], ebx */
  W32((uint32_t)(ecx + eax + 0x30u), ebx);
/* 89f0fe: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89f102: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f106: mov dword ptr [edx + eax + 0x38], 1 */
  W32((uint32_t)(edx + eax + 0x38u), 0x1u);
/* 89f10e: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 89f111: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 89f115: mov dword ptr [ecx + eax + 0x3c], edx */
  W32((uint32_t)(ecx + eax + 0x3cu), edx);
/* 89f119: jmp 0x89f2cf */
  goto L_89f2cf;
L_89f11e: /* 89f11e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f122: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 89f124: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f126: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f127: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89f12e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f12f: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* 89f136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f13a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89f13b: call 0x6c9f4d */
  esp -= 4; W32(esp, 0x89f140u); SPILL(); f_6c9f4d(); if (g_unwind) return; RELOAD();
/* 89f140: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 89f144: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f14a: add ecx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f14e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89f150: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 89f157: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89f15a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89f15d: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* 89f164: mov edx, dword ptr [eax + 0x130] */
  edx = R32((uint32_t)(eax + 0x130u));
/* 89f16a: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 89f171: add edx, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f175: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89f177: mov dword ptr [esp + 0xdc], eax */
  W32((uint32_t)(esp + 0xdcu), eax);
/* 89f17e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f181: mov dword ptr [esp + 0xe0], ecx */
  W32((uint32_t)(esp + 0xe0u), ecx);
/* 89f188: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 89f18b: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 89f192: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 89f195: mov dword ptr [esp + 0xe8], ecx */
  W32((uint32_t)(esp + 0xe8u), ecx);
/* 89f19c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f19f: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 89f1a6: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f1acu); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f1ac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89f1b0: lea edx, [esp + 0x160] */
  edx = (uint32_t)(esp + 0x160u);
/* 89f1b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f1b9: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 89f1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f1c1: lea edx, [esp + 0xcc] */
  edx = (uint32_t)(esp + 0xccu);
/* 89f1c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f1c9: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89f1ceu); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89f1ce: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 89f1d5: fsub dword ptr [esp + 0x90] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x90u)));
/* 89f1dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f1df: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 89f1e6: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89f1e8: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f1ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89f1f1: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 89f1f8: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89f1fc: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f203: fstp dword ptr [esp + 0x178] */
  WF32((uint32_t)(esp + 0x178u), ST0); FPOP();
/* 89f20a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f20e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 89f210: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 89f214: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f218: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89f21a: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 89f221: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f223: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f225: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f229: fmul dword ptr [esp + 0x178] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x178u)));
/* 89f230: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 89f237: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 89f23e: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 89f242: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 89f249: fadd dword ptr [esp + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x90u)));
/* 89f250: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 89f257: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 89f25e: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 89f262: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 89f266: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 89f26a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89f270u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89f270: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f274: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 89f277: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f27a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f27c: mov edx, dword ptr [esp + 0x160] */
  edx = R32((uint32_t)(esp + 0x160u));
/* 89f283: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f285: mov edx, dword ptr [esp + 0x164] */
  edx = R32((uint32_t)(esp + 0x164u));
/* 89f28c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f28f: mov edx, dword ptr [esp + 0x168] */
  edx = R32((uint32_t)(esp + 0x168u));
/* 89f296: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f299: mov edx, dword ptr [esp + 0x16c] */
  edx = R32((uint32_t)(esp + 0x16cu));
/* 89f2a0: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 89f2a3: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f2a7: lea edx, [ecx + eax + 0x10] */
  edx = (uint32_t)(ecx + eax + 0x10u);
/* 89f2ab: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 89f2af: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89f2b1: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 89f2b5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f2b8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89f2bc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89f2bf: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 89f2c3: mov dword ptr [edx + eax + 0x20], ebp */
  W32((uint32_t)(edx + eax + 0x20u), ebp);
/* 89f2c7: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 89f2cb: mov dword ptr [ecx + eax + 0x1c], ebx */
  W32((uint32_t)(ecx + eax + 0x1cu), ebx);
L_89f2cf: /* 89f2cf: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 89f2d3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 89f2d7: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f2da: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 89f2de: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89f2e2: mov eax, dword ptr [edx + 0x1e0] */
  eax = R32((uint32_t)(edx + 0x1e0u));
/* 89f2e8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89f2e9: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f2ec: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f2ef: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f2f1: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 89f2f5: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 89f2f9: jl 0x89efe7 */
  if ((sf != of)) goto L_89efe7;
L_89f2ff: /* 89f2ff: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_89f303: /* 89f303: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 89f309: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 89f30a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f30c: jl 0x89eb20 */
  if ((sf != of)) goto L_89eb20;
L_89f312: /* 89f312: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89f314: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89f316: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 89f31a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89f320u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89f320: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 89f324: mov byte ptr [esp + 0x390], 5 */
  W8((uint32_t)(esp + 0x390u), 0x5u);
/* 89f32c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x89f331u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 89f331: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f335: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 89f339: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 89f33d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89f33f: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 89f343: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 89f34b: jle 0x89f68a */
  if ((zf || sf != of)) goto L_89f68a;
L_89f351: /* 89f351: jmp 0x89f360 */
  goto L_89f360;
L_89f353: /* 89f353: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 89f35a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89f360: /* 89f360: mov edi, eax */
  edi = eax;
/* 89f362: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* 89f365: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f368: mov dword ptr [esp + 0x88], eax */
  W32((uint32_t)(esp + 0x88u), eax);
/* 89f36f: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 89f372: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f374: jne 0x89f3ce */
  if (!zf) goto L_89f3ce;
L_89f376: /* 89f376: mov edx, dword ptr [ecx + 0x130] */
  edx = R32((uint32_t)(ecx + 0x130u));
/* 89f37c: mov eax, esi */
  eax = esi;
/* 89f37e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f381: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f383: mov ecx, edi */
  ecx = edi;
/* 89f385: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89f387: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89f389: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89f38c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89f38f: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 89f392: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89f395: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89f398: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 89f39b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f39f: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f3a5: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f3a8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 89f3aa: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f3ad: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 89f3b0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f3b2: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 89f3b5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f3b8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 89f3bb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f3be: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 89f3c5: mov byte ptr [esi + ecx], 1 */
  W8((uint32_t)(esi + ecx), 0x1u);
/* 89f3c9: jmp 0x89f671 */
  goto L_89f671;
L_89f3ce: /* 89f3ce: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 89f3d4: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 89f3d7: fld dword ptr [edx + eax + 0x50] */
  { double v = F32((uint32_t)(edx + eax + 0x50u)); FPUSH(v); }
/* 89f3db: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f3e1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f3e3: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89f3e6: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 89f3ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f3ec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89f3ef: jne 0x89f426 */
  if (!zf) goto L_89f426;
L_89f3f1: /* 89f3f1: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f3f4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f3fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f3fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f3ff: jp 0x89f40b */
  if (pf) goto L_89f40b;
L_89f401: /* 89f401: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 89f409: jmp 0x89f437 */
  goto L_89f437;
L_89f40b: /* 89f40b: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f40e: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89f411: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f413: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f416: jp 0x89f426 */
  if (pf) goto L_89f426;
L_89f418: /* 89f418: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89f41b: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89f41e: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 89f422: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
L_89f426: /* 89f426: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f42a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89f430: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f432: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f435: jp 0x89f444 */
  if (pf) goto L_89f444;
L_89f437: /* 89f437: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 89f43e: cmp byte ptr [esi + edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 89f442: je 0x89f44e */
  if (zf) goto L_89f44e;
L_89f444: /* 89f444: mov eax, dword ptr [ecx + 0x198] */
  eax = R32((uint32_t)(ecx + 0x198u));
/* 89f44a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89f44c: je 0x89f4b7 */
  if (zf) goto L_89f4b7;
L_89f44e: /* 89f44e: mov edx, dword ptr [ebp + 0x1dc] */
  edx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f454: mov eax, esi */
  eax = esi;
/* 89f456: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89f459: lea edx, [edx + eax + 8] */
  edx = (uint32_t)(edx + eax + 0x8u);
/* 89f45d: mov ebx, esi */
  ebx = esi;
/* 89f45f: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89f462: add ebx, dword ptr [ecx + 0x130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x130u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89f468: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f46a: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 89f46c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f46f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 89f472: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 89f475: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 89f478: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 89f47b: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 89f47e: mov ecx, dword ptr [ebp + 0x1dc] */
  ecx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f484: lea edx, [ecx + eax + 0x18] */
  edx = (uint32_t)(ecx + eax + 0x18u);
/* 89f488: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f48c: mov ecx, dword ptr [ecx + 0x13c] */
  ecx = R32((uint32_t)(ecx + 0x13cu));
/* 89f492: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 89f495: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 89f498: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f49a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89f49c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f49f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 89f4a2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f4a5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89f4a8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 89f4af: mov byte ptr [esi + eax], 1 */
  W8((uint32_t)(esi + eax), 0x1u);
/* 89f4b3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89f4b7: /* 89f4b7: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f4bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89f4c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f4c3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89f4c6: jnp 0x89f675 */
  if (!pf) goto L_89f675;
L_89f4cc: /* 89f4cc: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f4d0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 89f4d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89f4d8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89f4db: jne 0x89f535 */
  if (!zf) goto L_89f535;
L_89f4dd: /* 89f4dd: mov eax, dword ptr [ecx + 0x130] */
  eax = R32((uint32_t)(ecx + 0x130u));
/* 89f4e3: mov edx, esi */
  edx = esi;
/* 89f4e5: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f4e8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f4ea: mov eax, edi */
  eax = edi;
/* 89f4ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89f4ee: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89f4f0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89f4f3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f4f6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89f4f9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89f4fc: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 89f4ff: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 89f502: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 89f506: mov eax, dword ptr [edx + 0x13c] */
  eax = R32((uint32_t)(edx + 0x13cu));
/* 89f50c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f50f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89f511: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 89f514: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 89f517: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f519: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 89f51c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89f51f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 89f522: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f525: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 89f52c: mov byte ptr [esi + eax], 1 */
  W8((uint32_t)(esi + eax), 0x1u);
/* 89f530: jmp 0x89f671 */
  goto L_89f671;
L_89f535: /* 89f535: mov eax, dword ptr [ecx + 0x130] */
  eax = R32((uint32_t)(ecx + 0x130u));
/* 89f53b: mov ebx, esi */
  ebx = esi;
/* 89f53d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89f540: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f542: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f549: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 89f54d: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89f553u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89f553: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 89f557: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 89f55b: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 89f562: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f563: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89f565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f566: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89f56bu); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89f56b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 89f56f: mov edx, dword ptr [ecx + 0x130] */
  edx = R32((uint32_t)(ecx + 0x130u));
/* 89f575: mov eax, dword ptr [esp + 0xd0] */
  eax = R32((uint32_t)(esp + 0xd0u));
/* 89f57c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f57e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f580: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 89f587: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89f58a: mov eax, dword ptr [esp + 0xd8] */
  eax = R32((uint32_t)(esp + 0xd8u));
/* 89f591: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f594: mov ecx, dword ptr [esp + 0xdc] */
  ecx = R32((uint32_t)(esp + 0xdcu));
/* 89f59b: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89f59e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 89f5a2: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 89f5a8: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f5ab: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 89f5ae: mov edx, eax */
  edx = eax;
/* 89f5b0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f5b2: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 89f5b9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f5bc: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f5bf: mov dword ptr [esp + 0x8c], ecx */
  W32((uint32_t)(esp + 0x8cu), ecx);
/* 89f5c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f5c9: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 89f5d0: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f5d3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 89f5d5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 89f5d8: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 89f5dc: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 89f5df: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 89f5e3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 89f5e7: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 89f5ee: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 89f5f2: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 89f5f6: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 89f5fa: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 89f5fe: fsub dword ptr [esp + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x78u)));
/* 89f602: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 89f609: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f60d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 89f60f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 89f613: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f617: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89f619: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 89f61d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f61f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89f621: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89f625: fmul dword ptr [esp + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa8u)));
/* 89f62c: fstp dword ptr [esp + 0x170] */
  WF32((uint32_t)(esp + 0x170u), ST0); FPOP();
/* 89f633: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 89f63a: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 89f63e: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 89f642: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 89f646: fld dword ptr [esp + 0x170] */
  { double v = F32((uint32_t)(esp + 0x170u)); FPUSH(v); }
/* 89f64d: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 89f651: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 89f655: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 89f659: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89f65b: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 89f65f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 89f663: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 89f666: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 89f66a: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 89f66e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_89f671: /* 89f671: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89f675: /* 89f675: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 89f679: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 89f67d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89f67e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f680: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 89f684: jl 0x89f353 */
  if ((sf != of)) goto L_89f353;
L_89f68a: /* 89f68a: xor ebx, ebx */
  ebx = 0;
/* 89f68c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f68d: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 89f68f: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 89f693: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89f699u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89f699: cmp dword ptr [esp + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f69d: je 0x89f835 */
  if (zf) goto L_89f835;
L_89f6a3: /* 89f6a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f6a7: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f6ad: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89f6af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89f6b2: mov edx, esp */
  edx = esp;
/* 89f6b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f6b6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 89f6b9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89f6bc: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 89f6bf: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 89f6c2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89f6c5: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 89f6c8: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* 89f6cf: call 0x6c867a */
  esp -= 4; W32(esp, 0x89f6d4u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89f6d4: mov esi, eax */
  esi = eax;
/* 89f6d6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f6da: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f6df: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 89f6e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f6e8: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 89f6ee: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89f6f0: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 89f6f7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89f6fa: add eax, 0x1d8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f6ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f700: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 89f707: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89f70a: lea eax, [esp + 0x120] */
  eax = (uint32_t)(esp + 0x120u);
/* 89f711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f712: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 89f719: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 89f720: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89f726u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89f726: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89f72a: add edi, 0x270 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x270u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f730: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f735: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 89f73c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f73e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 89f742: add edi, 0x2a0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2a0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f748: mov ecx, 0xc */
  ecx = 0xcu;
/* 89f74d: lea esi, [esp + 0x11c] */
  esi = (uint32_t)(esp + 0x11cu);
/* 89f754: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89f756: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f75a: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 89f761: add ecx, 0x1a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f767: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f769: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 89f770: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89f773: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 89f77a: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 89f781: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89f784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89f785: lea ecx, [esp + 0x120] */
  ecx = (uint32_t)(esp + 0x120u);
/* 89f78c: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x89f792u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 89f792: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f796: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f798: add ecx, 0x1b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89f79e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f7a0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f7a3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f7a6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89f7a9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89f7ac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f7b0: mov dword ptr [ecx + 0x208], ebx */
  W32((uint32_t)(ecx + 0x208u), ebx);
/* 89f7b6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89f7b8: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 89f7bf: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 89f7c5: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 89f7c9: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 89f7cf: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 89f7d2: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 89f7d9: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 89f7e1: call 0x6c9543 */
  esp -= 4; W32(esp, 0x89f7e6u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 89f7e6: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 89f7ea: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 89f7f2: call 0x6c4499 */
  esp -= 4; W32(esp, 0x89f7f7u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 89f7f7: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89f7fe: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 89f806: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x89f80bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 89f80b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 89f80f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 89f817: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x89f81cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 89f81c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 89f820: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 89f82b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x89f830u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 89f830: jmp 0x8a0787 */
  goto L_8a0787;
L_89f835: /* 89f835: mov eax, dword ptr [ebp + 0x1e0] */
  eax = R32((uint32_t)(ebp + 0x1e0u));
/* 89f83b: xor esi, esi */
  esi = 0;
/* 89f83d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f83f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f843: jle 0x89f9c4 */
  if ((zf || sf != of)) goto L_89f9c4;
L_89f849: /* 89f849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_89f850: /* 89f850: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 89f857: cmp byte ptr [esi + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 89f85b: je 0x89f869 */
  if (zf) goto L_89f869;
L_89f85d: /* 89f85d: cmp dword ptr [eax + 0x198], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x198u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f863: je 0x89f954 */
  if (zf) goto L_89f954;
L_89f869: /* 89f869: cmp dword ptr [eax + 0x2d4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2d4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f86f: je 0x89f8f6 */
  if (zf) goto L_89f8f6;
L_89f875: /* 89f875: mov edx, dword ptr [eax + 0x2d0] */
  edx = R32((uint32_t)(eax + 0x2d0u));
/* 89f87b: cmp dword ptr [edx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f87e: je 0x89f8f6 */
  if (zf) goto L_89f8f6;
L_89f880: /* 89f880: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f886: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 89f88b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f88c: mov edi, esi */
  edi = esi;
/* 89f88e: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 89f891: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f892: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f894: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89f895: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 89f89c: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x89f8a2u); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 89f8a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89f8a4: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 89f8a6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f8a9: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 89f8ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89f8af: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 89f8b2: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89f8b5: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 89f8b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f8bc: mov edx, dword ptr [ecx + 0x13c] */
  edx = R32((uint32_t)(ecx + 0x13cu));
/* 89f8c2: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 89f8c5: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 89f8c8: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 89f8d0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 89f8d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89f8d6: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 89f8de: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 89f8e2: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 89f8ea: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 89f8ee: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89f8f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89f8f4: jmp 0x89f950 */
  goto L_89f950;
L_89f8f6: /* 89f8f6: mov edx, dword ptr [ebp + 0x1dc] */
  edx = R32((uint32_t)(ebp + 0x1dcu));
/* 89f8fc: mov ecx, esi */
  ecx = esi;
/* 89f8fe: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89f901: lea edx, [ecx + edx + 8] */
  edx = (uint32_t)(ecx + edx + 0x8u);
/* 89f905: mov edi, esi */
  edi = esi;
/* 89f907: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 89f90a: add edi, dword ptr [eax + 0x130] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x130u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89f910: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89f912: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 89f914: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 89f917: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 89f91a: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 89f91d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 89f920: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 89f923: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 89f926: mov eax, dword ptr [ebp + 0x1dc] */
  eax = R32((uint32_t)(ebp + 0x1dcu));
/* 89f92c: lea ecx, [ecx + eax + 0x18] */
  ecx = (uint32_t)(ecx + eax + 0x18u);
/* 89f930: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89f934: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* 89f93a: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f93d: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 89f940: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89f942: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89f944: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 89f947: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89f94a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89f94d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_89f950: /* 89f950: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_89f954: /* 89f954: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89f95a: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 89f95d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f960: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f963: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 89f969: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 89f96c: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 89f96f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89f970: mov ecx, dword ptr [eax + 0x130] */
  ecx = R32((uint32_t)(eax + 0x130u));
/* 89f976: mov edx, esi */
  edx = esi;
/* 89f978: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89f97b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89f97d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89f97e: call 0x6c1cd5 */
  esp -= 4; W32(esp, 0x89f983u); SPILL(); f_6c1cd5(); if (g_unwind) return; RELOAD();
/* 89f983: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 89f987: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89f98a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f98c: jne 0x89f9b5 */
  if (!zf) goto L_89f9b5;
L_89f98e: /* 89f98e: cmp dword ptr [eax + 0x1a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89f994: je 0x89f9b5 */
  if (zf) goto L_89f9b5;
L_89f996: /* 89f996: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89f99c: add eax, 0x210 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89f9a1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f9a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89f9a5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89f9a8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89f9ab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89f9ae: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89f9b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_89f9b5: /* 89f9b5: mov ecx, dword ptr [ebp + 0x1e0] */
  ecx = R32((uint32_t)(ebp + 0x1e0u));
/* 89f9bb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89f9bc: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9be: jl 0x89f850 */
  if ((sf != of)) goto L_89f850;
L_89f9c4: /* 89f9c4: mov dword ptr [eax + 0x164], 1 */
  W32((uint32_t)(eax + 0x164u), 0x1u);
/* 89f9ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89f9d2: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 89f9d8: xor edi, edi */
  edi = 0;
/* 89f9da: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9dc: jle 0x89fa8c */
  if ((zf || sf != of)) goto L_89fa8c;
L_89f9e2: /* 89f9e2: xor esi, esi */
  esi = 0;
L_89f9e4: /* 89f9e4: mov edx, dword ptr [ecx + 0x104] */
  edx = R32((uint32_t)(ecx + 0x104u));
/* 89f9ea: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 89f9ed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89f9ef: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89f9f1: jl 0x89fa7a */
  if ((sf != of)) goto L_89fa7a;
L_89f9f7: /* 89f9f7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 89f9fa: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 89fa00: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa02: jle 0x89fa78 */
  if ((zf || sf != of)) goto L_89fa78;
L_89fa04: /* 89fa04: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa0a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa0c: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 89fa0f: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89fa12: fmul dword ptr [eax + edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + edx + 0xcu)));
/* 89fa16: lea eax, [eax + edx + 0xc] */
  eax = (uint32_t)(eax + edx + 0xcu);
/* 89fa1a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa1c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa1e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa21: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa24: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa26: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa29: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa30: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa36: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa38: lea eax, [eax + edx + 0x18] */
  eax = (uint32_t)(eax + edx + 0x18u);
/* 89fa3c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89fa3e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa40: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa42: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa45: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa48: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa4a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa4d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa50: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa54: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fa5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa5c: lea eax, [eax + edx + 0x24] */
  eax = (uint32_t)(eax + edx + 0x24u);
/* 89fa60: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89fa62: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 89fa64: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fa66: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 89fa69: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 89fa6c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89fa6f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 89fa72: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fa76: jmp 0x89fa7a */
  goto L_89fa7a;
L_89fa78: /* 89fa78: fstp st(0) */
  STI(0) = ST0; FPOP();
L_89fa7a: /* 89fa7a: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 89fa80: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89fa81: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fa84: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa86: jl 0x89f9e4 */
  if ((sf != of)) goto L_89f9e4;
L_89fa8c: /* 89fa8c: mov eax, dword ptr [ecx + 0x114] */
  eax = R32((uint32_t)(ecx + 0x114u));
/* 89fa92: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fa94: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 89fa98: jle 0x89fc45 */
  if ((zf || sf != of)) goto L_89fc45;
L_89fa9e: /* 89fa9e: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 89faa6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 89faaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89fab0: /* 89fab0: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 89fab6: mov ebp, dword ptr [esi + edx] */
  ebp = R32((uint32_t)(esi + edx));
/* 89fab9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89fabb: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* 89fabe: jl 0x89fc27 */
  if ((sf != of)) goto L_89fc27;
L_89fac4: /* 89fac4: cmp dword ptr [ecx + 0xb8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89faca: jle 0x89fc27 */
  if ((zf || sf != of)) goto L_89fc27;
L_89fad0: /* 89fad0: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 89fad3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fad9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fadb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fade: jne 0x89fbd4 */
  if (!zf) goto L_89fbd4;
L_89fae4: /* 89fae4: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 89faea: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 89faee: mov edx, dword ptr [eax + ecx + 0x24] */
  edx = R32((uint32_t)(eax + ecx + 0x24u));
/* 89faf2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89faf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89faf5: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89fafc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fafd: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 89fb00: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x89fb06u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 89fb06: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89fb0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb0d: lea edx, [esp + 0x1a0] */
  edx = (uint32_t)(esp + 0x1a0u);
/* 89fb14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fb15: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fb18: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x89fb1eu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 89fb1e: lea eax, [esp + 0x19c] */
  eax = (uint32_t)(esp + 0x19cu);
/* 89fb25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb26: lea ecx, [esp + 0x1d0] */
  ecx = (uint32_t)(esp + 0x1d0u);
/* 89fb2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fb2e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89fb34: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fb37: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89fb3du); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89fb3d: mov esi, eax */
  esi = eax;
/* 89fb3f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fb43: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fb48: lea edi, [esp + 0x19c] */
  edi = (uint32_t)(esp + 0x19cu);
/* 89fb4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fb51: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89fb57: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 89fb5d: lea ebx, [ebp + ebp*2] */
  ebx = (uint32_t)(ebp + ebp*2);
/* 89fb61: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89fb64: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fb66: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 89fb68: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 89fb6c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89fb6f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 89fb72: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 89fb76: lea ecx, [esp + 0x1fc] */
  ecx = (uint32_t)(esp + 0x1fcu);
/* 89fb7d: lea edi, [eax + ebx] */
  edi = (uint32_t)(eax + ebx);
/* 89fb80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fb81: mov ecx, edi */
  ecx = edi;
/* 89fb83: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 89fb87: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89fb8du); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89fb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fb8e: lea edx, [esp + 0xf0] */
  edx = (uint32_t)(esp + 0xf0u);
/* 89fb95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fb96: lea ecx, [esp + 0x1a4] */
  ecx = (uint32_t)(esp + 0x1a4u);
/* 89fb9d: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89fba3u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89fba3: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 89fba7: mov esi, eax */
  esi = eax;
/* 89fba9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fbae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fbb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fbb4: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89fbba: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 89fbbe: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 89fbc2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89fbc4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fbc6: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 89fbca: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fbcd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fbd0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89fbd4: /* 89fbd4: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 89fbda: fld dword ptr [eax + esi + 0x28] */
  { double v = F32((uint32_t)(eax + esi + 0x28u)); FPUSH(v); }
/* 89fbde: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* 89fbe1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fbec: jne 0x89fc27 */
  if (!zf) goto L_89fc27;
L_89fbee: /* 89fbee: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 89fbf1: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fbf7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89fbf9: lea ebp, [ebp + ebp*2] */
  ebp = (uint32_t)(ebp + ebp*2);
/* 89fbfd: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89fc00: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 89fc03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 89fc05: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 89fc07: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89fc0a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 89fc0c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89fc0f: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 89fc12: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89fc15: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89fc17: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 89fc1a: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 89fc1d: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 89fc20: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 89fc23: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_89fc27: /* 89fc27: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 89fc2b: mov edx, dword ptr [ecx + 0x114] */
  edx = R32((uint32_t)(ecx + 0x114u));
/* 89fc31: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89fc32: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fc35: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fc37: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 89fc3b: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 89fc3f: jl 0x89fab0 */
  if ((sf != of)) goto L_89fab0;
L_89fc45: /* 89fc45: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 89fc4b: mov eax, 1 */
  eax = 0x1u;
/* 89fc50: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fc52: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 89fc56: jle 0x8a0322 */
  if ((zf || sf != of)) goto L_8a0322;
L_89fc5c: /* 89fc5c: mov ebx, 0x30 */
  ebx = 0x30u;
/* 89fc61: mov dword ptr [esp + 0x18], 0x10 */
  W32((uint32_t)(esp + 0x18u), 0x10u);
/* 89fc69: mov dword ptr [esp + 0x24], 0x40 */
  W32((uint32_t)(esp + 0x24u), 0x40u);
L_89fc71: /* 89fc71: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fc75: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 89fc7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89fc7f: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89fc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89fc89: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89fc8c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89fc8f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89fc91: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 89fc94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fc95: lea ecx, [esp + 0x26c] */
  ecx = (uint32_t)(esp + 0x26cu);
/* 89fc9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fc9d: mov ecx, edi */
  ecx = edi;
/* 89fc9f: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x89fca5u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 89fca5: mov esi, eax */
  esi = eax;
/* 89fca7: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fcac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fcae: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 89fcb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fcb6: xor esi, esi */
  esi = 0;
/* 89fcb8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fcba: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 89fcbe: jle 0x8a0083 */
  if ((zf || sf != of)) goto L_8a0083;
L_89fcc4: /* 89fcc4: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 89fcc8: jmp 0x89fcd0 */
  goto L_89fcd0;
L_89fcd0: /* 89fcd0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89fcd4: mov eax, dword ptr [esi + edx + 0x30] */
  eax = R32((uint32_t)(esi + edx + 0x30u));
/* 89fcd8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fcda: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89fcde: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fce4: /* 89fce4: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 89fce7: mov edi, dword ptr [ecx + 0xf8] */
  edi = R32((uint32_t)(ecx + 0xf8u));
/* 89fced: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89fcf0: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 89fcf3: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fcf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89fcf7: jne 0x89fd3d */
  if (!zf) goto L_89fd3d;
L_89fcf9: /* 89fcf9: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fcfc: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89fcff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd05: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89fd09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd0b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd0e: jne 0x89fd86 */
  if (!zf) goto L_89fd86;
L_89fd10: /* 89fd10: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd1e: jnp 0x8a0063 */
  if (!pf) goto L_8a0063;
L_89fd24: /* 89fd24: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd27: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd2c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd2f: jp 0x89fd86 */
  if (pf) goto L_89fd86;
L_89fd31: /* 89fd31: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd34: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd37: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 89fd3b: jmp 0x89fd82 */
  goto L_89fd82;
L_89fd3d: /* 89fd3d: fld dword ptr [edx + 0x4c] */
  { double v = F32((uint32_t)(edx + 0x4cu)); FPUSH(v); }
/* 89fd40: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fd43: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd4e: jne 0x89fd7f */
  if (!zf) goto L_89fd7f;
L_89fd50: /* 89fd50: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd53: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd5b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd5e: jp 0x89fd6a */
  if (pf) goto L_89fd6a;
L_89fd60: /* 89fd60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89fd62: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89fd68: jmp 0x89fd7f */
  goto L_89fd7f;
L_89fd6a: /* 89fd6a: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd6d: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd75: jp 0x89fd7f */
  if (pf) goto L_89fd7f;
L_89fd77: /* 89fd77: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd7a: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd7d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_89fd7f: /* 89fd7f: fmul dword ptr [esi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3cu)));
L_89fd82: /* 89fd82: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_89fd86: /* 89fd86: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89fd8a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd95: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fd9b: /* 89fd9b: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fd9e: mov edi, esp */
  edi = esp;
/* 89fda0: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fda5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fda7: lea ecx, [esp + 0x288] */
  ecx = (uint32_t)(esp + 0x288u);
/* 89fdae: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdb3u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fdb5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fdb8: mov dword ptr [esp + 0x18c], ecx */
  W32((uint32_t)(esp + 0x18cu), ecx);
/* 89fdbf: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fdc2: mov dword ptr [esp + 0x190], edx */
  W32((uint32_t)(esp + 0x190u), edx);
/* 89fdc9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fdcc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fdd0: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 89fdd6: mov dword ptr [esp + 0x194], ecx */
  W32((uint32_t)(esp + 0x194u), ecx);
/* 89fddd: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fde0: mov edi, esp */
  edi = esp;
/* 89fde2: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fde4: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fde9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fdeb: lea ecx, [esp + 0x278] */
  ecx = (uint32_t)(esp + 0x278u);
/* 89fdf2: mov dword ptr [esp + 0x1c8], edx */
  W32((uint32_t)(esp + 0x1c8u), edx);
/* 89fdf9: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdfeu); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fe00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fe03: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 89fe0a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fe0d: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 89fe14: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fe17: mov dword ptr [esp + 0xe4], ecx */
  W32((uint32_t)(esp + 0xe4u), ecx);
/* 89fe1e: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 89fe25: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 89fe2c: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89fe32u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89fe32: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 89fe36: lea eax, [esp + 0x17c] */
  eax = (uint32_t)(esp + 0x17cu);
/* 89fe3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fe3f: lea edx, [esp + 0x194] */
  edx = (uint32_t)(esp + 0x194u);
/* 89fe46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fe47: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 89fe4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe4f: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89fe54u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89fe54: mov edx, dword ptr [esp + 0x18c] */
  edx = R32((uint32_t)(esp + 0x18cu));
/* 89fe5b: mov eax, dword ptr [esp + 0x190] */
  eax = R32((uint32_t)(esp + 0x190u));
/* 89fe62: mov ecx, esp */
  ecx = esp;
/* 89fe64: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fe66: mov edx, dword ptr [esp + 0x194] */
  edx = R32((uint32_t)(esp + 0x194u));
/* 89fe6d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fe70: mov eax, dword ptr [esp + 0x198] */
  eax = R32((uint32_t)(esp + 0x198u));
/* 89fe77: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fe7a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 89fe7d: lea ecx, [esp + 0x2d8] */
  ecx = (uint32_t)(esp + 0x2d8u);
/* 89fe84: call 0x6c867a */
  esp -= 4; W32(esp, 0x89fe89u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89fe89: mov esi, eax */
  esi = eax;
/* 89fe8b: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fe90: lea edi, [esp + 0x1fc] */
  edi = (uint32_t)(esp + 0x1fcu);
/* 89fe97: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fe99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fe9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 89fea3: lea edi, [edx + ebx] */
  edi = (uint32_t)(edx + ebx);
/* 89fea6: mov eax, edi */
  eax = edi;
/* 89fea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89feaa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fead: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89feb0: mov dword ptr [esp + 0x1fc], ecx */
  W32((uint32_t)(esp + 0x1fcu), ecx);
/* 89feb7: mov dword ptr [esp + 0x200], edx */
  W32((uint32_t)(esp + 0x200u), edx);
/* 89febe: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fec2: mov dword ptr [esp + 0x204], eax */
  W32((uint32_t)(esp + 0x204u), eax);
/* 89fec9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fece: lea esi, [esp + 0x1fc] */
  esi = (uint32_t)(esp + 0x1fcu);
/* 89fed5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fed7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fedb: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fee1: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 89fee7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89feeb: mov esi, dword ptr [edx + ecx + 0x34] */
  esi = R32((uint32_t)(edx + ecx + 0x34u));
/* 89feef: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 89fef2: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89fef5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fef7: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 89fefa: lea eax, [esp + 0x1cc] */
  eax = (uint32_t)(esp + 0x1ccu);
/* 89ff01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff02: mov ecx, edi */
  ecx = edi;
/* 89ff04: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89ff0au); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89ff0a: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* 89ff11: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x89ff17u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 89ff17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff18: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89ff1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff20: lea ecx, [esp + 0x1e0] */
  ecx = (uint32_t)(esp + 0x1e0u);
/* 89ff27: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff2du); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff2d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff2f: mov dword ptr [esp + 0x128], edx */
  W32((uint32_t)(esp + 0x128u), edx);
/* 89ff36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ff39: mov dword ptr [esp + 0x12c], ecx */
  W32((uint32_t)(esp + 0x12cu), ecx);
/* 89ff40: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ff43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff44: lea eax, [esp + 0x174] */
  eax = (uint32_t)(esp + 0x174u);
/* 89ff4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff4c: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* 89ff53: mov dword ptr [esp + 0x138], edx */
  W32((uint32_t)(esp + 0x138u), edx);
/* 89ff5a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff60u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ff62: mov dword ptr [esp + 0x134], ecx */
  W32((uint32_t)(esp + 0x134u), ecx);
/* 89ff69: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89ff6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff6d: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 89ff71: mov dword ptr [esp + 0x13c], edx */
  W32((uint32_t)(esp + 0x13cu), edx);
/* 89ff78: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89ff7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff7c: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 89ff83: mov dword ptr [esp + 0x144], eax */
  W32((uint32_t)(esp + 0x144u), eax);
/* 89ff8a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff90u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff90: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 89ff93: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 89ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff98: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 89ff9b: mov dword ptr [esp + 0x140], edx */
  W32((uint32_t)(esp + 0x140u), edx);
/* 89ffa2: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 89ffa5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ffa8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 89ffaa: mov dword ptr [esp + 0x144], ecx */
  W32((uint32_t)(esp + 0x144u), ecx);
/* 89ffb1: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 89ffb3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ffb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ffb7: lea eax, [esp + 0x230] */
  eax = (uint32_t)(esp + 0x230u);
/* 89ffbe: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 89ffc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ffc6: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89ffcd: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 89ffd4: mov dword ptr [esp + 0x150], edx */
  W32((uint32_t)(esp + 0x150u), edx);
/* 89ffdb: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 89ffe2: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ffe8u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ffe8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ffea: mov dword ptr [esp + 0x11c], ecx */
  W32((uint32_t)(esp + 0x11cu), ecx);
/* 89fff1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fff4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fff8: mov dword ptr [esp + 0x120], edx */
  W32((uint32_t)(esp + 0x120u), edx);
/* 89ffff: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a0002: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8a0006: mov dword ptr [esp + 0x124], eax */
  W32((uint32_t)(esp + 0x124u), eax);
/* 8a000d: mov ebp, dword ptr [ecx + 0x130] */
  ebp = R32((uint32_t)(ecx + 0x130u));
/* 8a0013: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a0016: mov edi, esp */
  edi = esp;
/* 8a0018: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a001d: lea esi, [esp + 0x14c] */
  esi = (uint32_t)(esp + 0x14cu);
/* 8a0024: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0026: lea ecx, [esp + 0x268] */
  ecx = (uint32_t)(esp + 0x268u);
/* 8a002d: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a002f: call 0x6c775c */
  esp -= 4; W32(esp, 0x8a0034u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 8a0034: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0036: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 8a0039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a003c: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 8a003f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0042: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8a0045: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a0048: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8a004b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a004f: mov ecx, dword ptr [ecx + 0x130] */
  ecx = R32((uint32_t)(ecx + 0x130u));
/* 8a0055: add ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0059: call dword ptr [0xcfa35c] */
  esp -= 4; W32(esp, 0x8a005fu); SPILL(); f_4e39c7(); if (g_unwind) return; /* Core!?Normalize@FQuat@@QAEHXZ */ RELOAD();
/* 8a005f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a0063: /* 8a0063: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a0067: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a006b: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8a006f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0070: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0073: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0075: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a0079: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 8a007d: jl 0x89fcd0 */
  if ((sf != of)) goto L_89fcd0;
L_8a0083: /* 8a0083: mov eax, dword ptr [ecx + 0x120] */
  eax = R32((uint32_t)(ecx + 0x120u));
/* 8a0089: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a008b: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8a0093: jle 0x8a02f2 */
  if ((zf || sf != of)) goto L_8a02f2;
L_8a0099: /* 8a0099: xor ebp, ebp */
  ebp = 0;
/* 8a009b: jmp 0x8a00a0 */
  goto L_8a00a0;
L_8a00a0: /* 8a00a0: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a00a6: mov esi, dword ptr [edx + ebp] */
  esi = R32((uint32_t)(edx + ebp));
/* 8a00a9: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* 8a00ac: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a00b0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a00b2: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a00b8: /* 8a00b8: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8a00bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a00c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a00c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a00c6: jne 0x8a022a */
  if (!zf) goto L_8a022a;
L_8a00cc: /* 8a00cc: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00d2: lea edx, [eax + ebp + 8] */
  edx = (uint32_t)(eax + ebp + 0x8u);
/* 8a00d6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a00d8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8a00dc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a00df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8a00e3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a00e6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8a00ea: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00f0: mov ecx, dword ptr [eax + ebp + 0x24] */
  ecx = R32((uint32_t)(eax + ebp + 0x24u));
/* 8a00f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a00f5: lea edx, [esp + 0x164] */
  edx = (uint32_t)(esp + 0x164u);
/* 8a00fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a00fd: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8a0101: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x8a0107u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 8a0107: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8a010d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a010e: lea eax, [esp + 0xf0] */
  eax = (uint32_t)(esp + 0xf0u);
/* 8a0115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0116: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0119: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8a011fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8a011f: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 8a0126: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a012cu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a012c: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8a0133: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0139u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0139: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8a0140: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0146u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0146: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a014a: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a0150: mov edx, dword ptr [ecx + ebp + 0x20] */
  edx = R32((uint32_t)(ecx + ebp + 0x20u));
/* 8a0154: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a0156: jne 0x8a017f */
  if (!zf) goto L_8a017f;
L_8a0158: /* 8a0158: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a015e: lea edx, [esp + 0x328] */
  edx = (uint32_t)(esp + 0x328u);
/* 8a0165: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0166: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0168: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a016eu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a016e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a016f: lea eax, [esp + 0x29c] */
  eax = (uint32_t)(esp + 0x29cu);
/* 8a0176: lea ecx, [esp + 0xf0] */
  ecx = (uint32_t)(esp + 0xf0u);
/* 8a017d: jmp 0x8a01d0 */
  goto L_8a01d0;
L_8a017f: /* 8a017f: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 8a0186: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0187: lea ecx, [eax + 0xc0] */
  ecx = (uint32_t)(eax + 0xc0u);
/* 8a018d: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a0193u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0193: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 8a019a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01a0u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01a0: lea ecx, [esp + 0x1b4] */
  ecx = (uint32_t)(esp + 0x1b4u);
/* 8a01a7: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01adu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ad: lea ecx, [esp + 0x1c0] */
  ecx = (uint32_t)(esp + 0x1c0u);
/* 8a01b4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01bau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ba: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 8a01c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a01c2: lea eax, [esp + 0x2fc] */
  eax = (uint32_t)(esp + 0x2fcu);
/* 8a01c9: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
L_8a01d0: /* 8a01d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a01d1: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x8a01d7u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8a01d7: mov esi, eax */
  esi = eax;
/* 8a01d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a01dd: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 8a01e4: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a01e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a01eb: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a01f1: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a01f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a01f5: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
/* 8a01fc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a01ff: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 8a0206: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a0209: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 8a0210: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 8a0216: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a0218: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a021d: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 8a0224: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0226: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a022a: /* 8a022a: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a0230: fld dword ptr [edx + ebp + 0x28] */
  { double v = F32((uint32_t)(edx + ebp + 0x28u)); FPUSH(v); }
/* 8a0234: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a023a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a023c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a023f: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a0245: /* 8a0245: mov eax, edx */
  eax = edx;
/* 8a0247: lea edx, [eax + ebp + 0x14] */
  edx = (uint32_t)(eax + ebp + 0x14u);
/* 8a024b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a024d: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8a0251: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a0254: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8a0258: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a025b: lea eax, [esp + 0x358] */
  eax = (uint32_t)(esp + 0x358u);
/* 8a0262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0263: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0269: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 8a026d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a0273u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0274: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8a027b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a027c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8a0280: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8a0286u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a0286: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0288: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8a028c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a028f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8a0293: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0296: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a029a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 8a029e: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a02a4: fld dword ptr [ecx + ebp + 0x28] */
  { double v = F32((uint32_t)(ecx + ebp + 0x28u)); FPUSH(v); }
/* 8a02a8: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8a02ae: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8a02b2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a02b4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8a02b6: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8a02ba: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a02bc: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8a02c0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a02c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a02c4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a02c6: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a02c9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a02cc: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a02cf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a02d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a02d6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8a02d8: /* 8a02d8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a02dc: mov edx, dword ptr [ecx + 0x120] */
  edx = R32((uint32_t)(ecx + 0x120u));
/* 8a02e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a02e3: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a02e6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a02e8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a02ec: jl 0x8a00a0 */
  if ((sf != of)) goto L_8a00a0;
L_8a02f2: /* 8a02f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8a02f6: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 8a02fa: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8a02fe: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0304: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0305: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a0308: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a030b: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a030e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0310: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8a0314: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8a0318: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8a031c: jl 0x89fc71 */
  if ((sf != of)) goto L_89fc71;
L_8a0322: /* 8a0322: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 8a0329: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 8a0331: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a0336u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a0336: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8a033a: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 8a0342: call 0x6c4499 */
  esp -= 4; W32(esp, 0x8a0347u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 8a0347: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 8a034e: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 8a0356: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8a035bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8a035b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 8a035f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 8a0367: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x8a036cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 8a036c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8a0370: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a037b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x8a0380u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 8a0380: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8a0384: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a038b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a038d: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a0393: /* 8a0393: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a0396: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 8a039c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a039e: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a03a4: /* 8a03a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03aa: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03b0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03b2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03b8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03bc: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03c5: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 8a03cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03d1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03d7: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03df: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03e5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03e9: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03ef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03f2: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 8a03f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0402: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0408: xor eax, eax */
  eax = 0;
/* 8a040a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a040c: jle 0x8a047b */
  if ((zf || sf != of)) goto L_8a047b;
L_8a040e: /* 8a040e: xor edx, edx */
  edx = 0;
/* 8a0410: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a0414: xor esi, esi */
  esi = 0;
/* 8a0416: jmp 0x8a0420 */
  goto L_8a0420;
L_8a0420: /* 8a0420: mov ecx, dword ptr [ecx + 0x17c] */
  ecx = R32((uint32_t)(ecx + 0x17cu));
/* 8a0426: mov edi, dword ptr [ebp + 0x1dc] */
  edi = R32((uint32_t)(ebp + 0x1dcu));
/* 8a042c: mov edi, dword ptr [edx + edi + 0x34] */
  edi = R32((uint32_t)(edx + edi + 0x34u));
/* 8a0430: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a0434: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a0437: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a043b: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 8a0441: mov ecx, dword ptr [ecx + 0x170] */
  ecx = R32((uint32_t)(ecx + 0x170u));
/* 8a0447: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0449: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a044b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a044d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8a044f: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8a0452: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8a0455: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8a0458: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a045c: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8a045f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0463: mov edi, dword ptr [ecx + 0xb8] */
  edi = R32((uint32_t)(ecx + 0xb8u));
/* 8a0469: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a046a: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a046d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a0470: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0473: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0475: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8a0479: jl 0x8a0420 */
  if ((sf != of)) goto L_8a0420;
L_8a047b: /* 8a047b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8a047d: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 8a0484: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8a048a: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 8a048e: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 8a0494: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8a0497: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a049e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04a0: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04a6: /* 8a04a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a04a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04ab: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04b1: /* 8a04b1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8a04b4: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 8a04ba: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 8a04bd: mov esi, dword ptr [edx + 0x50] */
  esi = R32((uint32_t)(edx + 0x50u));
/* 8a04c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04c2: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04c8: /* 8a04c8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a04cc: mov esi, dword ptr [edx + 0xfc] */
  esi = R32((uint32_t)(edx + 0xfcu));
/* 8a04d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04d4: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04da: /* 8a04da: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8a04dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04df: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04e5: /* 8a04e5: mov eax, ecx */
  eax = ecx;
/* 8a04e7: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8a04ea: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a04ee: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8a04f4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8a04f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a04f8: mov dword ptr [esp + 0x390], 7 */
  W32((uint32_t)(esp + 0x390u), 0x7u);
/* 8a0503: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0509u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0509: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 8a0510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0511: mov ecx, esi */
  ecx = esi;
/* 8a0513: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0519u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a051a: mov ecx, ebp */
  ecx = ebp;
/* 8a051c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0522u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0523: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8a052a: push 0xae7e40 */
  { uint32_t v = 0xae7e40u; esp -= 4; W32(esp, v); }
/* 8a052f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0530: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a0536u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a0536: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a0539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a053a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a053e: mov byte ptr [esp + 0x394], 8 */
  W8((uint32_t)(esp + 0x394u), 0x8u);
/* 8a0546: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a054cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a054c: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0553: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a055b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0561u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0561: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a0564: fadd dword ptr [0x9f7fc4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7fc4u)));
/* 8a056a: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8a056c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0570: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a0575: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a0578: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a057c: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0580: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0584: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a058au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a058a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a058f: push 0xae7eac */
  { uint32_t v = 0xae7eacu; esp -= 4; W32(esp, v); }
/* 8a0594: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a0596: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a0598: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a059du); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a059d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05a0: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05a9: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a05ac: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 8a05b3: test dword ptr [eax + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a05bd: je 0x8a05fa */
  if (zf) goto L_8a05fa;
L_8a05bf: /* 8a05bf: mov ecx, esi */
  ecx = esi;
/* 8a05c1: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a05c6: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a05ca: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a05ce: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a05d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a05d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a05d8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a05dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a05dd: push 0xae7eb4 */
  { uint32_t v = 0xae7eb4u; esp -= 4; W32(esp, v); }
/* 8a05e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a05e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a05e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a05e6: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a05ebu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a05eb: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05ee: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05f7: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_8a05fa: /* 8a05fa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a05fe: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 8a0604: xor ebp, ebp */
  ebp = 0;
/* 8a0606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a0608: jle 0x8a0772 */
  if ((zf || sf != of)) goto L_8a0772;
L_8a060e: /* 8a060e: xor esi, esi */
  esi = 0;
/* 8a0610: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a0614: jmp 0x8a0620 */
  goto L_8a0620;
L_8a0620: /* 8a0620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a0622: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8a0629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8a062fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8a062f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0633: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a0639: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 8a0640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0641: lea ecx, [edx + esi + 8] */
  ecx = (uint32_t)(edx + esi + 0x8u);
/* 8a0645: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8a064bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8a064b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a064d: je 0x8a0758 */
  if (zf) goto L_8a0758;
L_8a0653: /* 8a0653: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0657: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a065d: mov edx, dword ptr [edx + esi + 8] */
  edx = R32((uint32_t)(edx + esi + 0x8u));
/* 8a0661: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a0663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0664: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8a066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a066a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a066c: je 0x8a067d */
  if (zf) goto L_8a067d;
L_8a066e: /* 8a066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0672: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0675: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8a067bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a067b: jmp 0x8a0683 */
  goto L_8a0683;
L_8a067d: /* 8a067d: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_8a0683: /* 8a0683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0687: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8a068e: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 8a0694: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8a0698: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8a069c: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8a069f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a06a1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8a06a8: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8a06ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06af: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x8a06b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a06b5: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8a06bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06bd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a06c2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a06c2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8a06c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06c6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06c9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8a06cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06cf: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a06d5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a06d5: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 8a06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06dd: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a06e3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a06e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06e5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 8a06ec: push 0xae7ed8 */
  { uint32_t v = 0xae7ed8u; esp -= 4; W32(esp, v); }
/* 8a06f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a06f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a06f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a06f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a06fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06fc: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a0700: mov byte ptr [esp + 0x394], 9 */
  W8((uint32_t)(esp + 0x394u), 0x9u);
/* 8a0708: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a070eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a070e: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0715: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a071d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0723u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0723: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0727: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a072c: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a0730: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0734: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a073eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a073e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a0742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0743: push 0xae7f70 */
  { uint32_t v = 0xae7f70u; esp -= 4; W32(esp, v); }
/* 8a0748: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a074a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a074b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a074c: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a0751u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a0751: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a0755: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a0758: /* 8a0758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a075c: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 8a0762: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a0763: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0766: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0768: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a076c: jl 0x8a0620 */
  if ((sf != of)) goto L_8a0620;
L_8a0772: /* 8a0772: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0776: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a0781: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0787u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8a0787: /* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}
