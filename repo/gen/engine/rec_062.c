#include "recomp.h"
#include "rec_mod.h"

void f_816864(void) {
  LOAD_REGS();
L_816864: /* 816864: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 816867: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81686c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 81686f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816870: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 816873: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816878u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816878(); return;
}

void f_816878(void) {
  LOAD_REGS();
L_816878: /* 816878: push 0xa141e4 */
  { uint32_t v = 0xa141e4u; esp -= 4; W32(esp, v); }
/* 81687d: push 0xae240c */
  { uint32_t v = 0xae240cu; esp -= 4; W32(esp, v); }
/* 816882: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816888u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816888: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81688b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81688d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81688f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816894u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_816894: guest_badaddr(0x816894); return;
}

void f_816910(void) {
  LOAD_REGS();
L_816910: /* 816910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 816911: mov ebp, esp */
  ebp = esp;
/* 816913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 816915: push 0x9d2c28 */
  { uint32_t v = 0x9d2c28u; esp -= 4; W32(esp, v); }
/* 81691a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 816920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 816928: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81692b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81692c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81692d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81692e: xor eax, eax */
  eax = 0;
/* 816930: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 816933: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 816936: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_816939: /* 816939: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81693c: cmp eax, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81693f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 816942: jge 0x816a34 */
  if ((sf == of)) goto L_816a34;
L_816948: /* 816948: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 81694b: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 81694e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816950: je 0x8169fe */
  if (zf) goto L_8169fe;
L_816956: /* 816956: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81695d: je 0x8169fe */
  if (zf) goto L_8169fe;
L_816963: /* 816963: mov ecx, dword ptr [ebx + 0x80] */
  ecx = R32((uint32_t)(ebx + 0x80u));
/* 816969: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81696c: jne 0x8169fe */
  if (!zf) goto L_8169fe;
L_816972: /* 816972: lea esi, [ebx + 0x128] */
  esi = (uint32_t)(ebx + 0x128u);
/* 816978: mov ecx, 7 */
  ecx = 0x7u;
/* 81697d: lea edi, [ebp - 0x48] */
  edi = (uint32_t)(ebp + 0xffffffb8u);
/* 816980: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 816982: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 816985: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x81698bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 81698b: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 816991: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 816994: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 816997: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 81699a: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 81699f: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8169a4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8169a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8169a9: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8169ac: je 0x8169b2 */
  if (zf) goto L_8169b2;
L_8169ae: /* 8169ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8169b0: jmp 0x8169b4 */
  goto L_8169b4;
L_8169b2: /* 8169b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_8169b4: /* 8169b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8169b5: call 0x6c10d7 */
  esp -= 4; W32(esp, 0x8169bau); SPILL(); f_6c10d7(); if (g_unwind) return; RELOAD();
/* 8169ba: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8169bd: lea edi, [ebx + 0x11c] */
  edi = (uint32_t)(ebx + 0x11cu);
/* 8169c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8169c4: call 0x815740 */
  esp -= 4; W32(esp, 0x8169c9u); SPILL(); f_815740(); if (g_unwind) return; RELOAD();
/* 8169c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8169cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8169ce: jne 0x8169ef */
  if (!zf) goto L_8169ef;
L_8169d0: /* 8169d0: mov ecx, ebx */
  ecx = ebx;
/* 8169d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8169d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8169d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8169d9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8169de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8169e0: push 0xae2450 */
  { uint32_t v = 0xae2450u; esp -= 4; W32(esp, v); }
/* 8169e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8169e6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8169ecu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8169ec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8169ef: /* 8169ef: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8169f2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8169f6: call 0x6cb7a3 */
  esp -= 4; W32(esp, 0x8169fbu); SPILL(); f_6cb7a3(); if (g_unwind) return; RELOAD();
/* 8169fb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_8169fe: /* 8169fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8169ff: jmp 0x816939 */
  goto L_816939;
L_816a34: /* 816a34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816a37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816a38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816a39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816a40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816a41: mov esp, ebp */
  esp = ebp;
/* 816a43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816a44: ret 4 */
  esp += 8; SPILL(); return;
}

void f_816a04(void) {
  LOAD_REGS();
L_816a04: /* 816a04: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 816a07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 816a0c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 816a0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816a10: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 816a13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816a18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816a18(); return;
}

void f_816a18(void) {
  LOAD_REGS();
L_816a18: /* 816a18: push 0xa14250 */
  { uint32_t v = 0xa14250u; esp -= 4; W32(esp, v); }
/* 816a1d: push 0xae24b4 */
  { uint32_t v = 0xae24b4u; esp -= 4; W32(esp, v); }
/* 816a22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816a28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816a28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 816a2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816a2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816a2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816a34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 816a34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816a37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816a38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816a39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816a40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816a41: mov esp, ebp */
  esp = ebp;
/* 816a43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816a44: ret 4 */
  esp += 8; SPILL(); return;
}

void f_816aa0(void) {
  LOAD_REGS();
L_816aa0: /* 816aa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 816aa1: mov ebp, esp */
  ebp = esp;
/* 816aa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 816aa5: push 0x9d2c40 */
  { uint32_t v = 0x9d2c40u; esp -= 4; W32(esp, v); }
/* 816aaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 816ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816ab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 816ab8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 816abb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 816abe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816abf: mov ebx, ecx */
  ebx = ecx;
/* 816ac1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 816ac4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 816ac5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 816ac6: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 816acc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 816acf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 816ad6: call 0x812c70 */
  esp -= 4; W32(esp, 0x816adbu); SPILL(); f_812c70(); if (g_unwind) return; RELOAD();
/* 816adb: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 816ade: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816ae0: mov edi, eax */
  edi = eax;
/* 816ae2: je 0x816b1e */
  if (zf) goto L_816b1e;
L_816ae4: /* 816ae4: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 816ae7: je 0x816b1e */
  if (zf) goto L_816b1e;
L_816ae9: /* 816ae9: mov ecx, edi */
  ecx = edi;
/* 816aeb: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 816aee: call 0x812a20 */
  esp -= 4; W32(esp, 0x816af3u); SPILL(); f_812a20(); if (g_unwind) return; RELOAD();
/* 816af3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 816af6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 816af9: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 816afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816afd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816afe: mov ecx, edi */
  ecx = edi;
/* 816b00: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 816b03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 816b04: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 816b06: call 0x6c5623 */
  esp -= 4; W32(esp, 0x816b0bu); SPILL(); f_6c5623(); if (g_unwind) return; RELOAD();
/* 816b0b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816b0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816b15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816b16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816b17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816b18: mov esp, ebp */
  esp = ebp;
/* 816b1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816b1b: ret 0xc */
  esp += 16; SPILL(); return;
L_816b1e: /* 816b1e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 816b21: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 816b24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 816b25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816b26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816b27: mov ecx, ebx */
  ecx = ebx;
/* 816b29: call 0x6c74d7 */
  esp -= 4; W32(esp, 0x816b2eu); SPILL(); f_6c74d7(); if (g_unwind) return; RELOAD();
/* 816b2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816b31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816b32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816b33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816b3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816b3b: mov esp, ebp */
  esp = ebp;
/* 816b3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816b3e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_816b41(void) {
  LOAD_REGS();
L_816b41: /* 816b41: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 816b44: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 816b49: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 816b4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816b4d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 816b50: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816b55u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816b55(); return;
}

void f_816b55(void) {
  LOAD_REGS();
L_816b55: /* 816b55: push 0xa142ac */
  { uint32_t v = 0xa142acu; esp -= 4; W32(esp, v); }
/* 816b5a: push 0xae2084 */
  { uint32_t v = 0xae2084u; esp -= 4; W32(esp, v); }
/* 816b5f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816b65u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816b65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 816b68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816b6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816b6c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816b71u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_816b71: guest_badaddr(0x816b71); return;
}

void f_816bc0(void) {
  LOAD_REGS();
L_816bc0: /* 816bc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 816bc1: mov ebp, esp */
  ebp = esp;
/* 816bc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 816bc5: push 0x9d2c58 */
  { uint32_t v = 0x9d2c58u; esp -= 4; W32(esp, v); }
/* 816bca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 816bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816bd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 816bd8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 816bdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816bdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 816bdd: mov esi, ecx */
  esi = ecx;
/* 816bdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 816be0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 816be3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 816be6: mov dword ptr [esi], 0xa0a48c */
  W32((uint32_t)(esi), 0xa0a48cu);
/* 816bec: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 816bef: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 816bf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 816bf7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 816bfb: call 0x6c6afa */
  esp -= 4; W32(esp, 0x816c00u); SPILL(); f_6c6afa(); if (g_unwind) return; RELOAD();
/* 816c00: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 816c03: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816c05: je 0x816c1b */
  if (zf) goto L_816c1b;
L_816c07: /* 816c07: mov ecx, edi */
  ecx = edi;
/* 816c09: call 0x6c5e25 */
  esp -= 4; W32(esp, 0x816c0eu); SPILL(); f_6c5e25(); if (g_unwind) return; RELOAD();
/* 816c0e: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 816c13: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 816c15: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 816c17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 816c18: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x816c1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_816c1b: /* 816c1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816c1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816c1f: mov dword ptr [esi], 0xa0a44c */
  W32((uint32_t)(esi), 0xa0a44cu);
/* 816c25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816c26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816c2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816c2e: mov esp, ebp */
  esp = ebp;
/* 816c30: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816c31: ret  */
  esp += 4; SPILL(); return;
}

void f_816c32(void) {
  LOAD_REGS();
L_816c32: /* 816c32: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 816c35: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 816c3a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 816c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816c3e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 816c41: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816c46u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816c46(); return;
}

void f_816c46(void) {
  LOAD_REGS();
L_816c46: /* 816c46: push 0xa142f8 */
  { uint32_t v = 0xa142f8u; esp -= 4; W32(esp, v); }
/* 816c4b: push 0xae215c */
  { uint32_t v = 0xae215cu; esp -= 4; W32(esp, v); }
/* 816c50: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816c56u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816c56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 816c59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816c5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816c5d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816c62u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_816c62: guest_badaddr(0x816c62); return;
}

void f_816ca0(void) {
  LOAD_REGS();
L_816ca0: /* 816ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 816ca1: mov ebp, esp */
  ebp = esp;
/* 816ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 816ca5: push 0x9d2c70 */
  { uint32_t v = 0x9d2c70u; esp -= 4; W32(esp, v); }
/* 816caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 816cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 816cb8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 816cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816cbc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 816cbf: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816cc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 816cc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 816cc8: mov esi, ecx */
  esi = ecx;
/* 816cca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 816ccd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 816cd0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 816cd7: jne 0x816cf1 */
  if (!zf) goto L_816cf1;
L_816cd9: /* 816cd9: push 0x5fc */
  { uint32_t v = 0x5fcu; esp -= 4; W32(esp, v); }
/* 816cde: push 0xae216c */
  { uint32_t v = 0xae216cu; esp -= 4; W32(esp, v); }
/* 816ce3: push 0xae217c */
  { uint32_t v = 0xae217cu; esp -= 4; W32(esp, v); }
/* 816ce8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x816ceeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 816cee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_816cf1: /* 816cf1: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 816cf7: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816cfa: jne 0x816d3b */
  if (!zf) goto L_816d3b;
L_816cfc: /* 816cfc: test dword ptr [ebx + 0x84], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x84u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816d06: jne 0x816d3b */
  if (!zf) goto L_816d3b;
L_816d08: /* 816d08: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 816d0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816d0f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 816d12: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x816d18u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 816d18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816d1a: jne 0x816d4e */
  if (!zf) goto L_816d4e;
L_816d1c: /* 816d1c: mov ecx, ebx */
  ecx = ebx;
/* 816d1e: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x816d24u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 816d24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816d25: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 816d2a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 816d2c: push 0xae2198 */
  { uint32_t v = 0xae2198u; esp -= 4; W32(esp, v); }
/* 816d31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_816d32: /* 816d32: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x816d38u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 816d38: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_816d3b: /* 816d3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816d3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816d45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816d46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816d47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816d48: mov esp, ebp */
  esp = ebp;
/* 816d4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816d4b: ret 4 */
  esp += 8; SPILL(); return;
L_816d4e: /* 816d4e: mov eax, dword ptr [ebx + 0x120] */
  eax = R32((uint32_t)(ebx + 0x120u));
/* 816d54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 816d56: jle 0x816d8a */
  if ((zf || sf != of)) goto L_816d8a;
L_816d58: /* 816d58: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 816d5e: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 816d61: jne 0x816d82 */
  if (!zf) goto L_816d82;
L_816d63: /* 816d63: mov ecx, ebx */
  ecx = ebx;
/* 816d65: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x816d6bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 816d6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816d6c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 816d71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 816d73: push 0xae2200 */
  { uint32_t v = 0xae2200u; esp -= 4; W32(esp, v); }
/* 816d78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816d79: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x816d7fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 816d7f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_816d82: /* 816d82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 816d84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816d85: mov ecx, esi */
  ecx = esi;
/* 816d87: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x816d8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_816d8a: /* 816d8a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 816d8c: mov ecx, ebx */
  ecx = ebx;
/* 816d8e: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x816d94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 816d94: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 816d96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816d97: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 816d9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816d9b: mov ecx, eax */
  ecx = eax;
/* 816d9d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x816da0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 816da0: lea edx, [ebx + 0x128] */
  edx = (uint32_t)(ebx + 0x128u);
/* 816da6: mov esi, eax */
  esi = eax;
/* 816da8: mov edi, edx */
  edi = edx;
/* 816daa: mov ecx, 7 */
  ecx = 0x7u;
/* 816daf: push 0x40866666 */
  { uint32_t v = 0x40866666u; esp -= 4; W32(esp, v); }
/* 816db4: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 816db7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 816db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816dba: mov ecx, edx */
  ecx = edx;
/* 816dbc: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x816dc2u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 816dc2: mov esi, eax */
  esi = eax;
/* 816dc4: lea eax, [ebx + 0x128] */
  eax = (uint32_t)(ebx + 0x128u);
/* 816dca: mov edi, eax */
  edi = eax;
/* 816dcc: mov ecx, 7 */
  ecx = 0x7u;
/* 816dd1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 816dd3: lea ecx, [ebx + 0x150] */
  ecx = (uint32_t)(ebx + 0x150u);
/* 816dd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816dda: lea edx, [ebx + 0x144] */
  edx = (uint32_t)(ebx + 0x144u);
/* 816de0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 816de1: mov ecx, eax */
  ecx = eax;
/* 816de3: call dword ptr [0xcfa610] */
  esp -= 4; W32(esp, 0x816de9u); SPILL(); f_4e326f(); if (g_unwind) return; /* Core!?GetCenterAndExtents@FBox@@QBEXAAVFVector@@0@Z */ RELOAD();
/* 816de9: fld dword ptr [ebx + 0x134] */
  { double v = F32((uint32_t)(ebx + 0x134u)); FPUSH(v); }
/* 816def: fcomp qword ptr [0xa09488] */
  fpu_com(ST0, F64((uint32_t)(0xa09488u)));
  FPOP();
/* 816df5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 816df7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 816dfa: jnp 0x816f01 */
  if (!pf) goto L_816f01;
L_816e00: /* 816e00: fld dword ptr [ebx + 0x128] */
  { double v = F32((uint32_t)(ebx + 0x128u)); FPUSH(v); }
/* 816e06: fcomp qword ptr [0xa09498] */
  fpu_com(ST0, F64((uint32_t)(0xa09498u)));
  FPOP();
/* 816e0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 816e0e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816e11: je 0x816f01 */
  if (zf) goto L_816f01;
L_816e17: /* 816e17: fld dword ptr [ebx + 0x138] */
  { double v = F32((uint32_t)(ebx + 0x138u)); FPUSH(v); }
/* 816e1d: fcomp qword ptr [0xa09488] */
  fpu_com(ST0, F64((uint32_t)(0xa09488u)));
  FPOP();
/* 816e23: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 816e25: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 816e28: jnp 0x816f01 */
  if (!pf) goto L_816f01;
L_816e2e: /* 816e2e: fld dword ptr [ebx + 0x12c] */
  { double v = F32((uint32_t)(ebx + 0x12cu)); FPUSH(v); }
/* 816e34: fcomp qword ptr [0xa09498] */
  fpu_com(ST0, F64((uint32_t)(0xa09498u)));
  FPOP();
/* 816e3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 816e3c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816e3f: je 0x816f01 */
  if (zf) goto L_816f01;
L_816e45: /* 816e45: fld dword ptr [ebx + 0x13c] */
  { double v = F32((uint32_t)(ebx + 0x13cu)); FPUSH(v); }
/* 816e4b: fcomp qword ptr [0xa09488] */
  fpu_com(ST0, F64((uint32_t)(0xa09488u)));
  FPOP();
/* 816e51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 816e53: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 816e56: jnp 0x816f01 */
  if (!pf) goto L_816f01;
L_816e5c: /* 816e5c: fld dword ptr [ebx + 0x130] */
  { double v = F32((uint32_t)(ebx + 0x130u)); FPUSH(v); }
/* 816e62: fcomp qword ptr [0xa09498] */
  fpu_com(ST0, F64((uint32_t)(0xa09498u)));
  FPOP();
/* 816e68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 816e6a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816e6d: je 0x816f01 */
  if (zf) goto L_816f01;
L_816e73: /* 816e73: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 816e79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816e7b: je 0x816eb1 */
  if (zf) goto L_816eb1;
L_816e7d: /* 816e7d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 816e80: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 816e82: test byte ptr [eax + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816e89: jne 0x816eb1 */
  if (!zf) goto L_816eb1;
L_816e8b: /* 816e8b: mov edi, dword ptr [ebx + 0x80] */
  edi = R32((uint32_t)(ebx + 0x80u));
/* 816e91: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 816e94: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 816e99: and edi, 0xefffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xefffffffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 816e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816ea0: mov dword ptr [ebx + 0x80], edi */
  W32((uint32_t)(ebx + 0x80u), edi);
/* 816ea6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 816ea9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816eaa: call 0x6cc5b3 */
  esp -= 4; W32(esp, 0x816eafu); SPILL(); f_6cc5b3(); if (g_unwind) return; RELOAD();
/* 816eaf: jmp 0x816ed5 */
  goto L_816ed5;
L_816eb1: /* 816eb1: mov edi, dword ptr [ebx + 0x80] */
  edi = R32((uint32_t)(ebx + 0x80u));
/* 816eb7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 816eba: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 816ebf: or edi, 0x10000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 816ec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816ec6: mov dword ptr [ebx + 0x80], edi */
  W32((uint32_t)(ebx + 0x80u), edi);
/* 816ecc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 816ecf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816ed0: call 0x6c5623 */
  esp -= 4; W32(esp, 0x816ed5u); SPILL(); f_6c5623(); if (g_unwind) return; RELOAD();
L_816ed5: /* 816ed5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 816ed8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 816eda: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 816edd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 816ee0: add ebx, 0x300 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 816ee6: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 816ee8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816eeb: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 816eee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816eef: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 816ef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816ef3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816efa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816efb: mov esp, ebp */
  esp = ebp;
/* 816efd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816efe: ret 4 */
  esp += 8; SPILL(); return;
L_816f01: /* 816f01: mov ecx, ebx */
  ecx = ebx;
/* 816f03: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x816f09u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 816f09: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 816f0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 816f11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816f12: push 0xae2268 */
  { uint32_t v = 0xae2268u; esp -= 4; W32(esp, v); }
/* 816f17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 816f18: jmp 0x816d32 */
  goto L_816d32;
}

void f_816f1d(void) {
  LOAD_REGS();
L_816f1d: /* 816f1d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 816f20: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 816f25: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 816f28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816f29: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 816f2c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816f31u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816f31(); return;
}

void f_816f31(void) {
  LOAD_REGS();
L_816f31: /* 816f31: push 0xa14350 */
  { uint32_t v = 0xa14350u; esp -= 4; W32(esp, v); }
/* 816f36: push 0xae22c4 */
  { uint32_t v = 0xae22c4u; esp -= 4; W32(esp, v); }
/* 816f3b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816f41u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816f41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 816f44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816f46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816f48: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816f4du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_816f4d: guest_badaddr(0x816f4d); return;
}

void f_817000(void) {
  LOAD_REGS();
L_817000: /* 817000: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817006: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817008: push 0x9d2c89 */
  { uint32_t v = 0x9d2c89u; esp -= 4; W32(esp, v); }
/* 81700d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81700e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817015: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817017: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817018: mov edi, ecx */
  edi = ecx;
/* 81701a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 81701d: xor ebx, ebx */
  ebx = 0;
/* 81701f: xor esi, esi */
  esi = 0;
/* 817021: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 817023: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 817027: jle 0x81704f */
  if ((zf || sf != of)) goto L_81704f;
L_817029: /* 817029: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_817030: /* 817030: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 817033: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 817035: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817036: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 81703a: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x817040u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 817040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817042: jne 0x817077 */
  if (!zf) goto L_817077;
L_817044: /* 817044: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 817047: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 817048: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81704b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81704d: jl 0x817030 */
  if ((sf != of)) goto L_817030;
L_81704f: /* 81704f: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 817053: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 81705b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x817061u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 817061: xor eax, eax */
  eax = 0;
/* 817063: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 817067: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81706e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81706f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817070: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817071: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817074: ret 0xc */
  esp += 16; SPILL(); return;
L_817077: /* 817077: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 81707b: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 817083: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x817089u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 817089: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 81708d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81708e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81708f: mov eax, 1 */
  eax = 0x1u;
/* 817094: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81709b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81709c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81709f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8170e0(void) {
  LOAD_REGS();
L_8170e0: /* 8170e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8170e1: mov ebp, esp */
  ebp = esp;
/* 8170e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8170e5: push 0x9d2ca9 */
  { uint32_t v = 0x9d2ca9u; esp -= 4; W32(esp, v); }
/* 8170ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8170f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8170f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8170f8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8170fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8170fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8170fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 817100: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817101: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817104: xor ebx, ebx */
  ebx = 0;
/* 817106: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817107: mov edi, ecx */
  edi = ecx;
/* 817109: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 81710c: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x817112u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 817112: mov ecx, esi */
  ecx = esi;
/* 817114: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x81711au); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 81711a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81711c: je 0x817195 */
  if (zf) goto L_817195;
L_81711e: /* 81711e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 817121: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x817127u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 817127: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 81712a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81712b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81712c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 817130: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x817136u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 817136: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817139: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 81713c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81713d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81713e: call 0x6c402f */
  esp -= 4; W32(esp, 0x817143u); SPILL(); f_6c402f(); if (g_unwind) return; RELOAD();
/* 817143: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817146: mov ecx, esi */
  ecx = esi;
/* 817148: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x81714eu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 81714e: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 817151: jle 0x81716f */
  if ((zf || sf != of)) goto L_81716f;
L_817153: /* 817153: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 817159: lea edx, [edi + 0x40] */
  edx = (uint32_t)(edi + 0x40u);
/* 81715c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81715d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81715e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x817160u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 817160: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817163: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 817166: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817167: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817168: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x81716au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81716a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81716d: jmp 0x817175 */
  goto L_817175;
L_81716f: /* 81716f: mov dword ptr [edi + 0x40], ebx */
  W32((uint32_t)(edi + 0x40u), ebx);
/* 817172: mov dword ptr [edi + 0x44], ebx */
  W32((uint32_t)(edi + 0x44u), ebx);
L_817175: /* 817175: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 817178: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81717c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x817182u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_817182: /* 817182: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817185: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81718c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81718d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81718e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81718f: mov esp, ebp */
  esp = ebp;
/* 817191: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817192: ret 4 */
  esp += 8; SPILL(); return;
L_817195: /* 817195: mov ecx, esi */
  ecx = esi;
/* 817197: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x81719du); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 81719d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81719f: je 0x817182 */
  if (zf) goto L_817182;
L_8171a1: /* 8171a1: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 8171a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8171a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8171a6: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x8171acu); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 8171ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8171af: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8171b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8171b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8171b4: call 0x6c402f */
  esp -= 4; W32(esp, 0x8171b9u); SPILL(); f_6c402f(); if (g_unwind) return; RELOAD();
/* 8171b9: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8171bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8171c2: lea edx, [edi + 0x40] */
  edx = (uint32_t)(edi + 0x40u);
/* 8171c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8171c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8171c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8171c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8171c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8171cc: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8171cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8171d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8171d1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8171d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8171d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8171d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8171d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8171da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8171db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8171e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8171e3: mov esp, ebp */
  esp = ebp;
/* 8171e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8171e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8171e9(void) {
  LOAD_REGS();
L_8171e9: /* 8171e9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8171ec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8171f1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8171f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8171f5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8171f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8171fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8171fd(); return;
}

void f_8171fd(void) {
  LOAD_REGS();
L_8171fd: /* 8171fd: push 0xa14390 */
  { uint32_t v = 0xa14390u; esp -= 4; W32(esp, v); }
/* 817202: push 0xae2614 */
  { uint32_t v = 0xae2614u; esp -= 4; W32(esp, v); }
/* 817207: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81720du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81720d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817212: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817214: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817219u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_817219: guest_badaddr(0x817219); return;
}

void f_817270(void) {
  LOAD_REGS();
L_817270: /* 817270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817271: mov ebp, esp */
  ebp = esp;
/* 817273: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817275: push 0x9d2cc0 */
  { uint32_t v = 0x9d2cc0u; esp -= 4; W32(esp, v); }
/* 81727a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817281: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817288: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81728b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81728c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81728d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 817290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817291: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 817294: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817297: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817298: push 0xae2624 */
  { uint32_t v = 0xae2624u; esp -= 4; W32(esp, v); }
/* 81729d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81729e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8172a5: call dword ptr [0xcfaa58] */
  esp -= 4; W32(esp, 0x8172abu); SPILL(); f_4e44a8(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAM@Z */ RELOAD();
/* 8172ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8172ae: mov ebx, eax */
  ebx = eax;
/* 8172b0: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 8172b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8172b4: push 0xae262c */
  { uint32_t v = 0xae262cu; esp -= 4; W32(esp, v); }
/* 8172b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8172ba: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8172bd: call dword ptr [0xcfaa58] */
  esp -= 4; W32(esp, 0x8172c3u); SPILL(); f_4e44a8(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAM@Z */ RELOAD();
/* 8172c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8172c6: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8172c8: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 8172cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8172cc: push 0xae2634 */
  { uint32_t v = 0xae2634u; esp -= 4; W32(esp, v); }
/* 8172d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8172d2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8172d5: call dword ptr [0xcfaa58] */
  esp -= 4; W32(esp, 0x8172dbu); SPILL(); f_4e44a8(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAM@Z */ RELOAD();
/* 8172db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8172de: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ebx = r;
  }
/* 8172e0: jne 0x81735c */
  if (!zf) goto L_81735c;
L_8172e2: /* 8172e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8172e3: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x8172e9u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 8172e9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8172ec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8172ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8172f2: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8172f4: mov edi, dword ptr [0xcfaa98] */
  edi = R32((uint32_t)(0xcfaa98u));
/* 8172fa: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8172fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8172fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8172ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8172ff: mov esi, eax */
  esi = eax;
/* 817301: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817304: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817306: jne 0x81731b */
  if (!zf) goto L_81731b;
L_817308: /* 817308: xor eax, eax */
  eax = 0;
/* 81730a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81730d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817314: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817315: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817316: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817317: mov esp, ebp */
  esp = ebp;
/* 817319: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81731a: ret  */
  esp += 4; SPILL(); return;
L_81731b: /* 81731b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81731e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81731f: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x817325u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 817325: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 817328: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81732b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81732e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817331: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 817333: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817334: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 817336: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x817338u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 817338: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81733b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81733d: je 0x817308 */
  if (zf) goto L_817308;
L_81733f: /* 81733f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 817342: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817343: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x817349u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 817349: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81734c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81734f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 817352: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817355: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 817357: mov ebx, 3 */
  ebx = 0x3u;
L_81735c: /* 81735c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81735f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817360: xor eax, eax */
  eax = 0;
/* 817362: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 817365: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817366: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 817369: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817370: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817371: mov esp, ebp */
  esp = ebp;
/* 817373: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817374: ret  */
  esp += 4; SPILL(); return;
}

void f_817375(void) {
  LOAD_REGS();
L_817375: /* 817375: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 817378: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81737d: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 817380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817381: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 817384: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817389u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_817389(); return;
}

void f_817389(void) {
  LOAD_REGS();
L_817389: /* 817389: push 0xa143d8 */
  { uint32_t v = 0xa143d8u; esp -= 4; W32(esp, v); }
/* 81738e: push 0xae263c */
  { uint32_t v = 0xae263cu; esp -= 4; W32(esp, v); }
/* 817393: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x817399u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 817399: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81739c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81739e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8173a0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8173a5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8173a5: guest_badaddr(0x8173a5); return;
}

void f_817400(void) {
  LOAD_REGS();
L_817400: /* 817400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817401: mov ebp, esp */
  ebp = esp;
/* 817403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817405: push 0x9d2cd0 */
  { uint32_t v = 0x9d2cd0u; esp -= 4; W32(esp, v); }
/* 81740a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817418: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81741b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81741e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81741f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817420: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817421: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 817424: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817428: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817429: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 817430: call dword ptr [0xcfaadc] */
  esp -= 4; W32(esp, 0x817436u); SPILL(); f_4e2b76(); if (g_unwind) return; /* Core!?appStrfind@@YAPBGPBG0@Z */ RELOAD();
/* 817436: mov esi, eax */
  esi = eax;
/* 817438: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81743b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81743d: jne 0x817452 */
  if (!zf) goto L_817452;
L_81743f: /* 81743f: xor eax, eax */
  eax = 0;
/* 817441: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817444: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81744b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81744c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81744d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81744e: mov esp, ebp */
  esp = ebp;
/* 817450: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817451: ret  */
  esp += 4; SPILL(); return;
L_817452: /* 817452: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817453: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x817459u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 817459: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81745c: cmp word ptr [esi + eax*2], 0x28 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*2))); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 817461: jne 0x81743f */
  if (!zf) goto L_81743f;
L_817463: /* 817463: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 817466: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817467: lea edx, [esi + eax*2 + 2] */
  edx = (uint32_t)(esi + eax*2 + 0x2u);
/* 81746b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 81746e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81746f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817470: call dword ptr [0xcfa5a4] */
  esp -= 4; W32(esp, 0x817476u); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* 817476: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817479: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 81747b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81747c: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x817482u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 817482: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817485: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817487: je 0x81748e */
  if (zf) goto L_81748e;
L_817489: /* 817489: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
L_81748e: /* 81748e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817491: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817492: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817493: mov eax, 1 */
  eax = 0x1u;
/* 817498: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81749f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8174a0: mov esp, ebp */
  esp = ebp;
/* 8174a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8174a3: ret  */
  esp += 4; SPILL(); return;
}

void f_8174a4(void) {
  LOAD_REGS();
L_8174a4: /* 8174a4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8174a7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8174ac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8174af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8174b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8174b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8174b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8174b8(); return;
}

void f_8174b8(void) {
  LOAD_REGS();
L_8174b8: /* 8174b8: push 0xa143f4 */
  { uint32_t v = 0xa143f4u; esp -= 4; W32(esp, v); }
/* 8174bd: push 0xae2644 */
  { uint32_t v = 0xae2644u; esp -= 4; W32(esp, v); }
/* 8174c2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8174c8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8174c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8174cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8174cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8174cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8174d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8174d4: guest_badaddr(0x8174d4); return;
}

void f_817520(void) {
  LOAD_REGS();
L_817520: /* 817520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817521: mov ebp, esp */
  ebp = esp;
/* 817523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817525: push 0x9d2ce0 */
  { uint32_t v = 0x9d2ce0u; esp -= 4; W32(esp, v); }
/* 81752a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817538: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81753e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 817541: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 817544: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817545: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817547: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81754a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 81754c: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 817552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817554: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817555: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81755c: call 0x6c62bc */
  esp -= 4; W32(esp, 0x817561u); SPILL(); f_6c62bc(); if (g_unwind) return; RELOAD();
/* 817561: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817564: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817566: jne 0x817579 */
  if (!zf) goto L_817579;
L_817568: /* 817568: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81756b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817574: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817575: mov esp, ebp */
  esp = ebp;
/* 817577: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817578: ret  */
  esp += 4; SPILL(); return;
L_817579: /* 817579: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 81757c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81757d: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 817583: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817584: call 0x6c8c79 */
  esp -= 4; W32(esp, 0x817589u); SPILL(); f_6c8c79(); if (g_unwind) return; RELOAD();
/* 817589: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81758c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81758f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817590: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817591: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817598: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817599: mov esp, ebp */
  esp = ebp;
/* 81759b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81759c: ret  */
  esp += 4; SPILL(); return;
}

void f_81759d(void) {
  LOAD_REGS();
L_81759d: /* 81759d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8175a0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8175a5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8175a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8175a9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8175ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8175b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8175b1(); return;
}

void f_8175b1(void) {
  LOAD_REGS();
L_8175b1: /* 8175b1: push 0xa14414 */
  { uint32_t v = 0xa14414u; esp -= 4; W32(esp, v); }
/* 8175b6: push 0xae264c */
  { uint32_t v = 0xae264cu; esp -= 4; W32(esp, v); }
/* 8175bb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8175c1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8175c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8175c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8175c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8175c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8175cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8175cd: guest_badaddr(0x8175cd); return;
}

void f_817600(void) {
  LOAD_REGS();
L_817600: /* 817600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817601: mov ebp, esp */
  ebp = esp;
/* 817603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817605: push 0x9d2cf0 */
  { uint32_t v = 0x9d2cf0u; esp -= 4; W32(esp, v); }
/* 81760a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817618: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81761b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81761c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81761d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81761e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 817621: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817624: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 817627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817628: xor esi, esi */
  esi = 0;
/* 81762a: push 0xae2654 */
  { uint32_t v = 0xae2654u; esp -= 4; W32(esp, v); }
/* 81762f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817630: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 817633: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 817636: call dword ptr [0xcfaa58] */
  esp -= 4; W32(esp, 0x81763cu); SPILL(); f_4e44a8(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAM@Z */ RELOAD();
/* 81763c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81763f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 817641: je 0x81765a */
  if (zf) goto L_81765a;
L_817643: /* 817643: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 817646: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 817649: call 0x99c958 */
  esp -= 4; W32(esp, 0x81764eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81764e: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 817651: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 817653: mov esi, 1 */
  esi = 0x1u;
/* 817658: jmp 0x81765d */
  goto L_81765d;
L_81765a: /* 81765a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_81765d: /* 81765d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 817660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817661: push 0xae2664 */
  { uint32_t v = 0xae2664u; esp -= 4; W32(esp, v); }
/* 817666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817667: call dword ptr [0xcfaa58] */
  esp -= 4; W32(esp, 0x81766du); SPILL(); f_4e44a8(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAM@Z */ RELOAD();
/* 81766d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817672: je 0x817683 */
  if (zf) goto L_817683;
L_817674: /* 817674: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 817677: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81767a: call 0x99c958 */
  esp -= 4; W32(esp, 0x81767fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81767f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 817682: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_817683: /* 817683: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 817686: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817687: push 0xae2670 */
  { uint32_t v = 0xae2670u; esp -= 4; W32(esp, v); }
/* 81768c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81768d: call dword ptr [0xcfaa58] */
  esp -= 4; W32(esp, 0x817693u); SPILL(); f_4e44a8(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAM@Z */ RELOAD();
/* 817693: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817698: je 0x8176a9 */
  if (zf) goto L_8176a9;
L_81769a: /* 81769a: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 81769d: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8176a0: call 0x99c958 */
  esp -= 4; W32(esp, 0x8176a5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8176a5: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 8176a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_8176a9: /* 8176a9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8176ab: jne 0x817753 */
  if (!zf) goto L_817753;
L_8176b1: /* 8176b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8176b2: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x8176b8u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 8176b8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8176bb: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8176be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8176c1: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8176c4: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8176c7: call 0x99c958 */
  esp -= 4; W32(esp, 0x8176ccu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8176cc: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8176ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8176cf: mov edi, dword ptr [0xcfaa98] */
  edi = R32((uint32_t)(0xcfaa98u));
/* 8176d5: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 8176d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8176d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8176d9: mov esi, eax */
  esi = eax;
/* 8176db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8176de: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8176e0: jne 0x8176f5 */
  if (!zf) goto L_8176f5;
L_8176e2: /* 8176e2: xor eax, eax */
  eax = 0;
/* 8176e4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8176e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8176ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8176ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8176f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8176f1: mov esp, ebp */
  esp = ebp;
/* 8176f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8176f4: ret  */
  esp += 4; SPILL(); return;
L_8176f5: /* 8176f5: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8176f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8176f9: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x8176ffu); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 8176ff: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 817702: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 817705: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817708: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 81770b: call 0x99c958 */
  esp -= 4; W32(esp, 0x817710u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 817710: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 817712: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817713: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 817716: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x817718u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 817718: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81771b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81771d: je 0x8176e2 */
  if (zf) goto L_8176e2;
L_81771f: /* 81771f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 817722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817723: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x817729u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 817729: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81772c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81772f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817732: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 817735: call 0x99c958 */
  esp -= 4; W32(esp, 0x81773au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81773a: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 81773d: mov eax, 1 */
  eax = 0x1u;
/* 817742: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817745: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81774c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81774d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81774e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81774f: mov esp, ebp */
  esp = ebp;
/* 817751: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817752: ret  */
  esp += 4; SPILL(); return;
L_817753: /* 817753: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817756: xor eax, eax */
  eax = 0;
/* 817758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817759: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81775b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81775c: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 81775f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817766: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817767: mov esp, ebp */
  esp = ebp;
/* 817769: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81776a: ret  */
  esp += 4; SPILL(); return;
}

void f_81776b(void) {
  LOAD_REGS();
L_81776b: /* 81776b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81776e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 817773: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 817776: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817777: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 81777a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81777fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81777f(); return;
}

void f_81777f(void) {
  LOAD_REGS();
L_81777f: /* 81777f: push 0xa14430 */
  { uint32_t v = 0xa14430u; esp -= 4; W32(esp, v); }
/* 817784: push 0xae267c */
  { uint32_t v = 0xae267cu; esp -= 4; W32(esp, v); }
/* 817789: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81778fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81778f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817792: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817794: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817796: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81779bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81779b: guest_badaddr(0x81779b); return;
}

void f_817810(void) {
  LOAD_REGS();
L_817810: /* 817810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817811: mov ebp, esp */
  ebp = esp;
/* 817813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817815: push 0x9d2d00 */
  { uint32_t v = 0x9d2d00u; esp -= 4; W32(esp, v); }
/* 81781a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817828: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81782e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 817831: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 817834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817836: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817837: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81783a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 81783c: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 817842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817843: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817844: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817845: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81784c: call 0x6c62bc */
  esp -= 4; W32(esp, 0x817851u); SPILL(); f_6c62bc(); if (g_unwind) return; RELOAD();
/* 817851: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817854: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817856: jne 0x817869 */
  if (!zf) goto L_817869;
L_817858: /* 817858: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81785b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817863: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817864: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817865: mov esp, ebp */
  esp = ebp;
/* 817867: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817868: ret  */
  esp += 4; SPILL(); return;
L_817869: /* 817869: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 81786c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 81786f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817871: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 817877: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817878: call 0x6cb0c8 */
  esp -= 4; W32(esp, 0x81787du); SPILL(); f_6cb0c8(); if (g_unwind) return; RELOAD();
/* 81787d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817880: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817883: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817884: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817885: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81788c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81788d: mov esp, ebp */
  esp = ebp;
/* 81788f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817890: ret  */
  esp += 4; SPILL(); return;
}

void f_817891(void) {
  LOAD_REGS();
L_817891: /* 817891: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 817894: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 817899: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81789c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81789d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8178a0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8178a5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8178a5(); return;
}

void f_8178a5(void) {
  LOAD_REGS();
L_8178a5: /* 8178a5: push 0xa1444c */
  { uint32_t v = 0xa1444cu; esp -= 4; W32(esp, v); }
/* 8178aa: push 0xae2684 */
  { uint32_t v = 0xae2684u; esp -= 4; W32(esp, v); }
/* 8178af: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8178b5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8178b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8178b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8178ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8178bc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8178c1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8178c1: guest_badaddr(0x8178c1); return;
}

void f_817900(void) {
  LOAD_REGS();
L_817900: /* 817900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817901: mov ebp, esp */
  ebp = esp;
/* 817903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817905: push 0x9d2d10 */
  { uint32_t v = 0x9d2d10u; esp -= 4; W32(esp, v); }
/* 81790a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817918: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81791b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81791c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81791d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 817920: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 817923: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 81792a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 81792d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81792e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81792f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 817932: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817935: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 817938: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817939: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 81793e: mov edi, ecx */
  edi = ecx;
/* 817940: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 817943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817944: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81794b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x81794eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81794e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 817951: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 817952: mov eax, edx */
  eax = edx;
/* 817954: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 817957: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81795a: jne 0x817972 */
  if (!zf) goto L_817972;
L_81795c: /* 81795c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 81795f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 817960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817962: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 817965: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 81796b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81796c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x817972u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_817972: /* 817972: mov ecx, dword ptr [edi + 0x474] */
  ecx = R32((uint32_t)(edi + 0x474u));
/* 817978: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81797b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81797d: mov dword ptr [edi + 0x474], ecx */
  W32((uint32_t)(edi + 0x474u), ecx);
/* 817983: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817987: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817988: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81798f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817990: mov esp, ebp */
  esp = ebp;
/* 817992: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817993: ret 8 */
  esp += 12; SPILL(); return;
}

void f_817996(void) {
  LOAD_REGS();
L_817996: /* 817996: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 817999: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81799e: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8179a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8179a2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8179a5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8179aau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8179aa(); return;
}

void f_8179aa(void) {
  LOAD_REGS();
L_8179aa: /* 8179aa: push 0xa14468 */
  { uint32_t v = 0xa14468u; esp -= 4; W32(esp, v); }
/* 8179af: push 0xae26c4 */
  { uint32_t v = 0xae26c4u; esp -= 4; W32(esp, v); }
/* 8179b4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8179bau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8179ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8179bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8179bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8179c1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8179c6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8179c6: guest_badaddr(0x8179c6); return;
}

void f_817a10(void) {
  LOAD_REGS();
L_817a10: /* 817a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817a11: mov ebp, esp */
  ebp = esp;
/* 817a13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817a15: push 0x9d2d20 */
  { uint32_t v = 0x9d2d20u; esp -= 4; W32(esp, v); }
/* 817a1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817a21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817a28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 817a2b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 817a2e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 817a31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817a32: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 817a33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817a34: mov esi, ecx */
  esi = ecx;
/* 817a36: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 817a39: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 817a3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817a3d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817a40: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 817a47: jne 0x817a5e */
  if (!zf) goto L_817a5e;
L_817a49: /* 817a49: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 817a4c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 817a4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817a4f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 817a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817a53: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 817a58: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x817a5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_817a5e: /* 817a5e: mov ecx, dword ptr [esi + 0x360] */
  ecx = R32((uint32_t)(esi + 0x360u));
/* 817a64: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 817a67: je 0x817a80 */
  if (zf) goto L_817a80;
L_817a69: /* 817a69: mov eax, dword ptr [esi + 0x104] */
  eax = R32((uint32_t)(esi + 0x104u));
/* 817a6f: mov edx, eax */
  edx = eax;
/* 817a71: not edx */
  edx = ~edx;
/* 817a73: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 817a75: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 817a78: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 817a7a: mov dword ptr [esi + 0x104], edx */
  W32((uint32_t)(esi + 0x104u), edx);
L_817a80: /* 817a80: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 817a83: je 0x817a8c */
  if (zf) goto L_817a8c;
L_817a85: /* 817a85: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 817a87: mov ecx, esi */
  ecx = esi;
/* 817a89: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x817a8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_817a8c: /* 817a8c: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 817a92: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x817a98u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 817a98: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 817a9b: fild dword ptr [esi + 0x490] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x490u)); FPUSH(v); }
/* 817aa1: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 817aa4: call 0x99c958 */
  esp -= 4; W32(esp, 0x817aa9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 817aa9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 817aab: mov dword ptr [esi + 0x490], eax */
  W32((uint32_t)(esi + 0x490u), eax);
/* 817ab1: je 0x817ad4 */
  if (zf) goto L_817ad4;
L_817ab3: /* 817ab3: mov edx, dword ptr [esi + 0x43c] */
  edx = R32((uint32_t)(esi + 0x43cu));
/* 817ab9: mov ecx, dword ptr [esi + 0x3f4] */
  ecx = R32((uint32_t)(esi + 0x3f4u));
/* 817abf: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 817ac4: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 817ac6: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 817ac8: mov dword ptr [esi + 0x43c], edx */
  W32((uint32_t)(esi + 0x43cu), edx);
/* 817ace: mov dword ptr [esi + 0x3f4], ecx */
  W32((uint32_t)(esi + 0x3f4u), ecx);
L_817ad4: /* 817ad4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817ad7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817ad8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817ad9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817ae0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817ae1: mov esp, ebp */
  esp = ebp;
/* 817ae3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817ae4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_817ae7(void) {
  LOAD_REGS();
L_817ae7: /* 817ae7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 817aea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 817aef: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 817af2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817af3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 817af6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817afbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_817afb(); return;
}

void f_817afb(void) {
  LOAD_REGS();
L_817afb: /* 817afb: push 0xa144c0 */
  { uint32_t v = 0xa144c0u; esp -= 4; W32(esp, v); }
/* 817b00: push 0xae26cc */
  { uint32_t v = 0xae26ccu; esp -= 4; W32(esp, v); }
/* 817b05: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x817b0bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 817b0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817b0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817b10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817b12: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817b17u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_817b17: guest_badaddr(0x817b17); return;
}

void f_817b70(void) {
  LOAD_REGS();
L_817b70: /* 817b70: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
L_817b73: /* 817b73: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x817b79u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 817b79: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 817b7b: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 817b81: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 817b85: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x817b8bu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 817b8b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 817b8d: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 817b93: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 817b97: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x817b9du); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 817b9d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 817ba1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 817ba3: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 817ba7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 817bab: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 817bb1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 817bb5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 817bb9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 817bbd: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 817bc1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 817bc5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 817bc9: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 817bcd: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x817bd3u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 817bd3: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 817bd7: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 817bdd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 817bdf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 817be2: je 0x817b73 */
  if (zf) goto L_817b73;
L_817be4: /* 817be4: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 817be8: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 817bee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 817bf0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 817bf3: jnp 0x817b73 */
  if (!pf) goto L_817b73;
L_817bf9: /* 817bf9: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 817bfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817bfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817bff: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 817c03: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x817c09u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 817c09: mov eax, esi */
  eax = esi;
/* 817c0b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817c0e: ret  */
  esp += 4; SPILL(); return;
}

void f_817c40(void) {
  LOAD_REGS();
L_817c40: /* 817c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817c41: mov ebp, esp */
  ebp = esp;
/* 817c43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817c45: push 0x9d2d30 */
  { uint32_t v = 0x9d2d30u; esp -= 4; W32(esp, v); }
/* 817c4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817c51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817c58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 817c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817c5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817c5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817c5e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817c61: mov esi, ecx */
  esi = ecx;
/* 817c63: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 817c6a: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x817c70u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 817c70: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 817c76: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 817c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817c79: mov ecx, esi */
  ecx = esi;
/* 817c7b: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x817c7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 817c7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817c81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817c82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817c83: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817c8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817c8b: mov esp, ebp */
  esp = ebp;
/* 817c8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817c8e: ret  */
  esp += 4; SPILL(); return;
}

void f_817c8f(void) {
  LOAD_REGS();
L_817c8f: /* 817c8f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 817c92: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 817c97: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 817c9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817c9b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 817c9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817ca3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_817ca3(); return;
}

void f_817ca3(void) {
  LOAD_REGS();
L_817ca3: /* 817ca3: push 0xa14508 */
  { uint32_t v = 0xa14508u; esp -= 4; W32(esp, v); }
/* 817ca8: push 0xae26d4 */
  { uint32_t v = 0xae26d4u; esp -= 4; W32(esp, v); }
/* 817cad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x817cb3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 817cb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817cb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817cba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817cbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_817cbf: guest_badaddr(0x817cbf); return;
}

void f_817ce0(void) {
  LOAD_REGS();
L_817ce0: /* 817ce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817ce1: mov ebp, esp */
  ebp = esp;
/* 817ce3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817ce5: push 0x9d2d40 */
  { uint32_t v = 0x9d2d40u; esp -= 4; W32(esp, v); }
/* 817cea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817cf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817cf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 817cfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817cfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817cfd: mov esi, ecx */
  esi = ecx;
/* 817cff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 817d01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817d02: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817d05: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 817d0c: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x817d0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 817d0f: mov ecx, esi */
  ecx = esi;
/* 817d11: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x817d17u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 817d17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817d1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817d1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817d1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817d23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817d24: mov esp, ebp */
  esp = ebp;
/* 817d26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817d27: ret  */
  esp += 4; SPILL(); return;
}

void f_817d28(void) {
  LOAD_REGS();
L_817d28: /* 817d28: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 817d2b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 817d30: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 817d33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817d34: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 817d37: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817d3cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_817d3c(); return;
}

void f_817d3c(void) {
  LOAD_REGS();
L_817d3c: /* 817d3c: push 0xa14548 */
  { uint32_t v = 0xa14548u; esp -= 4; W32(esp, v); }
/* 817d41: push 0xae26dc */
  { uint32_t v = 0xae26dcu; esp -= 4; W32(esp, v); }
/* 817d46: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x817d4cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 817d4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817d4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817d51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817d53: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817d58u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_817d58: guest_badaddr(0x817d58); return;
}

void f_817d80(void) {
  LOAD_REGS();
L_817d80: /* 817d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817d81: mov ebp, esp */
  ebp = esp;
/* 817d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817d85: push 0x9d2d50 */
  { uint32_t v = 0x9d2d50u; esp -= 4; W32(esp, v); }
/* 817d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817d98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 817d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817d9d: mov esi, ecx */
  esi = ecx;
/* 817d9f: mov ecx, dword ptr [esi + 0x43c] */
  ecx = R32((uint32_t)(esi + 0x43cu));
/* 817da5: xor eax, eax */
  eax = 0;
/* 817da7: and ecx, 0xfffffff9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff9u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 817daa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817dab: mov dword ptr [esi + 0x43c], ecx */
  W32((uint32_t)(esi + 0x43cu), ecx);
/* 817db1: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 817db7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817dba: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 817dbd: mov dword ptr [esi + 0x40c], eax */
  W32((uint32_t)(esi + 0x40cu), eax);
/* 817dc3: mov dword ptr [esi + 0x408], eax */
  W32((uint32_t)(esi + 0x408u), eax);
/* 817dc9: mov dword ptr [esi + 0x440], eax */
  W32((uint32_t)(esi + 0x440u), eax);
/* 817dcf: mov dword ptr [esi + 0x3f0], eax */
  W32((uint32_t)(esi + 0x3f0u), eax);
/* 817dd5: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x817ddbu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 817ddb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 817dde: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 817de1: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 817de7: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 817ded: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x817df3u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 817df3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 817df6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 817df9: mov dword ptr [esi + 0x454], ecx */
  W32((uint32_t)(esi + 0x454u), ecx);
/* 817dff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817e02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817e03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817e04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817e0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817e0c: mov esp, ebp */
  esp = ebp;
/* 817e0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817e0f: ret  */
  esp += 4; SPILL(); return;
}

void f_817e10(void) {
  LOAD_REGS();
L_817e10: /* 817e10: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 817e13: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 817e18: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 817e1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817e1c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 817e1f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817e24u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_817e24(); return;
}

void f_817e24(void) {
  LOAD_REGS();
L_817e24: /* 817e24: push 0xa14588 */
  { uint32_t v = 0xa14588u; esp -= 4; W32(esp, v); }
/* 817e29: push 0xae26ec */
  { uint32_t v = 0xae26ecu; esp -= 4; W32(esp, v); }
/* 817e2e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x817e34u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 817e34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817e37: xor eax, eax */
  eax = 0;
/* 817e39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817e3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817e40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_817e40: guest_badaddr(0x817e40); return;
}

void f_817e90(void) {
  LOAD_REGS();
L_817e90: /* 817e90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 817e91: mov ebp, esp */
  ebp = esp;
/* 817e93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 817e95: push 0x9d2d60 */
  { uint32_t v = 0x9d2d60u; esp -= 4; W32(esp, v); }
/* 817e9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 817ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817ea1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 817ea8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 817eab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 817eac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 817ead: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817eae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 817eb1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 817eb4: mov esi, ecx */
  esi = ecx;
/* 817eb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817eb7: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 817eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817ebb: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 817ec1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 817ec8: call dword ptr [0xcfa628] */
  esp -= 4; W32(esp, 0x817eceu); SPILL(); f_4e2d47(); if (g_unwind) return; /* Core!??XFRangeVector@@QAE?AV0@M@Z */ RELOAD();
/* 817ece: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817ecf: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 817ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 817ed3: lea ecx, [esi + 0x29c] */
  ecx = (uint32_t)(esi + 0x29cu);
/* 817ed9: call dword ptr [0xcfa628] */
  esp -= 4; W32(esp, 0x817edfu); SPILL(); f_4e2d47(); if (g_unwind) return; /* Core!??XFRangeVector@@QAE?AV0@M@Z */ RELOAD();
/* 817edf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817ee0: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 817ee3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817ee4: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 817eea: call dword ptr [0xcfa628] */
  esp -= 4; W32(esp, 0x817ef0u); SPILL(); f_4e2d47(); if (g_unwind) return; /* Core!??XFRangeVector@@QAE?AV0@M@Z */ RELOAD();
/* 817ef0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 817ef3: fmul dword ptr [esi + 0x390] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x390u)));
/* 817ef9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 817efa: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 817efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817efe: fstp dword ptr [esi + 0x390] */
  WF32((uint32_t)(esi + 0x390u), ST0); FPOP();
/* 817f04: lea ecx, [esi + 0x160] */
  ecx = (uint32_t)(esi + 0x160u);
/* 817f0a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 817f0d: fmul dword ptr [esi + 0x394] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x394u)));
/* 817f13: fstp dword ptr [esi + 0x394] */
  WF32((uint32_t)(esi + 0x394u), ST0); FPOP();
/* 817f19: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 817f1c: fmul dword ptr [esi + 0x398] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x398u)));
/* 817f22: fstp dword ptr [esi + 0x398] */
  WF32((uint32_t)(esi + 0x398u), ST0); FPOP();
/* 817f28: call dword ptr [0xcfa624] */
  esp -= 4; W32(esp, 0x817f2eu); SPILL(); f_4e11c2(); if (g_unwind) return; /* Core!??XFRange@@QAE?AV0@M@Z */ RELOAD();
/* 817f2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 817f31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 817f32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 817f33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 817f3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 817f3b: mov esp, ebp */
  esp = ebp;
/* 817f3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 817f3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_817f41(void) {
  LOAD_REGS();
L_817f41: /* 817f41: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 817f44: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 817f49: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 817f4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 817f4d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 817f50: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817f55u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_817f55(); return;
}

void f_817f55(void) {
  LOAD_REGS();
L_817f55: /* 817f55: push 0xa145c4 */
  { uint32_t v = 0xa145c4u; esp -= 4; W32(esp, v); }
/* 817f5a: push 0xae2704 */
  { uint32_t v = 0xae2704u; esp -= 4; W32(esp, v); }
/* 817f5f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x817f65u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 817f65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 817f68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817f6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 817f6c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x817f71u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_817f71: guest_badaddr(0x817f71); return;
}

void f_817fc0(void) {
  LOAD_REGS();
L_817fc0: /* 817fc0: and dword ptr [ecx + 0x3f4], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3f4u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x3f4u), r);
  }
/* 817fc7: xor eax, eax */
  eax = 0;
/* 817fc9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_817fe0(void) {
  LOAD_REGS();
L_817fe0: /* 817fe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 817fe4: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 817fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 817fea: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x817ff0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 817ff0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_818010(void) {
  LOAD_REGS();
L_818010: /* 818010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818011: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 818015: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 818019: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 81801c: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 81801f: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 818021: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 818025: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 818029: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 81802d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 818031: fiadd dword ptr [esp] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp)));
/* 818035: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 818038: jmp 0x99c958 */
  SPILL(); f_99c958(); return;
}

void f_818050(void) {
  LOAD_REGS();
L_818050: /* 818050: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 818054: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81805a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81805c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81805f: jne 0x81806e */
  if (!zf) goto L_81806e;
L_818061: /* 818061: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 818069: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 81806d: ret  */
  esp += 4; SPILL(); return;
L_81806e: /* 81806e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 818072: mov dword ptr [esp + 4], 0xffffffff */
  W32((uint32_t)(esp + 0x4u), 0xffffffffu);
/* 81807a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 818080: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 818082: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 818085: jnp 0x81808f */
  if (!pf) goto L_81808f;
L_818087: /* 818087: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
L_81808f: /* 81808f: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 818093: ret  */
  esp += 4; SPILL(); return;
}

void f_8180c0(void) {
  LOAD_REGS();
L_8180c0: /* 8180c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8180c1: mov ebp, esp */
  ebp = esp;
/* 8180c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8180c5: push 0x9d2d70 */
  { uint32_t v = 0x9d2d70u; esp -= 4; W32(esp, v); }
/* 8180ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8180d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8180d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8180d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8180db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8180dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8180dd: mov esi, ecx */
  esi = ecx;
/* 8180df: mov eax, dword ptr [esi + 0x400] */
  eax = R32((uint32_t)(esi + 0x400u));
/* 8180e5: cmp eax, dword ptr [esi + 0xf8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8180eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8180ec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8180ef: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8180f6: jne 0x818101 */
  if (!zf) goto L_818101;
L_8180f8: /* 8180f8: test byte ptr [esi + 0xfc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xfcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8180ff: je 0x818116 */
  if (zf) goto L_818116;
L_818101: /* 818101: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 818103: mov ecx, esi */
  ecx = esi;
/* 818105: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x818108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 818108: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 81810e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 818110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818111: mov ecx, esi */
  ecx = esi;
/* 818113: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x818116u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_818116: /* 818116: test byte ptr [esi + 0x5c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x5cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81811a: je 0x818168 */
  if (zf) goto L_818168;
L_81811c: /* 81811c: xor edi, edi */
  edi = 0;
/* 81811e: mov edi, edi */
  edi = edi;
L_818120: /* 818120: cmp edi, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 818123: jge 0x818168 */
  if ((sf == of)) goto L_818168;
L_818125: /* 818125: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 818128: mov ecx, edi */
  ecx = edi;
/* 81812a: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 81812d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81812f: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x818135u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 818135: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 818136: jmp 0x818120 */
  goto L_818120;
L_818168: /* 818168: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81816b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81816c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81816d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 818174: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 818175: mov esp, ebp */
  esp = ebp;
/* 818177: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 818178: ret  */
  esp += 4; SPILL(); return;
}

void f_818138(void) {
  LOAD_REGS();
L_818138: /* 818138: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81813b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 818140: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 818143: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818144: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 818147: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81814cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81814c(); return;
}

void f_81814c(void) {
  LOAD_REGS();
L_81814c: /* 81814c: push 0xa14600 */
  { uint32_t v = 0xa14600u; esp -= 4; W32(esp, v); }
/* 818151: push 0xae26e4 */
  { uint32_t v = 0xae26e4u; esp -= 4; W32(esp, v); }
/* 818156: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81815cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81815c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81815f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 818161: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 818163: call 0x99caf8 */
  esp -= 4; W32(esp, 0x818168u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 818168: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81816b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81816c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81816d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 818174: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 818175: mov esp, ebp */
  esp = ebp;
/* 818177: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 818178: ret  */
  esp += 4; SPILL(); return;
}

void f_8181b0(void) {
  LOAD_REGS();
L_8181b0: /* 8181b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8181b1: mov ebp, esp */
  ebp = esp;
/* 8181b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8181b5: push 0x9d2d80 */
  { uint32_t v = 0x9d2d80u; esp -= 4; W32(esp, v); }
/* 8181ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8181c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8181c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8181c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8181cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8181cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8181cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8181ce: mov esi, ecx */
  esi = ecx;
/* 8181d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8181d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8181da: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 8181e0: xor eax, eax */
  eax = 0;
L_8181e2: /* 8181e2: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8181e5: jge 0x8181ea */
  if ((sf == of)) goto L_8181ea;
L_8181e7: /* 8181e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8181e8: jmp 0x8181e2 */
  goto L_8181e2;
L_8181ea: /* 8181ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8181ec: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 8181f1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8181f7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8181f7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8181fa: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 8181ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 818200: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 818206: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x81820cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 81820c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81820e: mov ecx, esi */
  ecx = esi;
/* 818210: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x818213u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 818213: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 818216: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 818218: lea edx, [esi + 0x430] */
  edx = (uint32_t)(esi + 0x430u);
/* 81821e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 818220: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 818223: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 818226: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 818229: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 81822c: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 81822f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818230: lea ecx, [esi + 0x1b0] */
  ecx = (uint32_t)(esi + 0x1b0u);
/* 818236: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x81823cu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 81823c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81823e: lea ecx, [esi + 0x478] */
  ecx = (uint32_t)(esi + 0x478u);
/* 818244: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818246: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818249: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81824c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81824f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 818252: mov eax, dword ptr [esi + 0x3f4] */
  eax = R32((uint32_t)(esi + 0x3f4u));
/* 818258: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81825b: mov dword ptr [esi + 0x45c], edi */
  W32((uint32_t)(esi + 0x45cu), edi);
/* 818261: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 818264: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 818265: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 81826b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81826c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 818273: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 818274: mov esp, ebp */
  esp = ebp;
/* 818276: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 818277: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81827a(void) {
  LOAD_REGS();
L_81827a: /* 81827a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81827d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 818282: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 818285: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818286: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 818289: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81828eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81828e(); return;
}

void f_81828e(void) {
  LOAD_REGS();
L_81828e: /* 81828e: push 0xa14650 */
  { uint32_t v = 0xa14650u; esp -= 4; W32(esp, v); }
/* 818293: push 0xae26f4 */
  { uint32_t v = 0xae26f4u; esp -= 4; W32(esp, v); }
/* 818298: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81829eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81829e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8182a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8182a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8182a5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8182aau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8182aa: guest_badaddr(0x8182aa); return;
}

void f_8182f0(void) {
  LOAD_REGS();
L_8182f0: /* 8182f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8182f1: mov ebp, esp */
  ebp = esp;
/* 8182f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8182f5: push 0x9d2d90 */
  { uint32_t v = 0x9d2d90u; esp -= 4; W32(esp, v); }
/* 8182fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 818300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818301: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 818308: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81830b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81830c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81830d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81830e: xor edi, edi */
  edi = 0;
/* 818310: mov esi, ecx */
  esi = ecx;
/* 818312: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 818315: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 818318: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 81831e: xor eax, eax */
  eax = 0;
L_818320: /* 818320: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 818323: jge 0x818328 */
  if ((sf == of)) goto L_818328;
L_818325: /* 818325: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 818326: jmp 0x818320 */
  goto L_818320;
L_818328: /* 818328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 818329: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 81832e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x818334u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 818334: mov eax, dword ptr [esi + 0x3f4] */
  eax = R32((uint32_t)(esi + 0x3f4u));
/* 81833a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81833d: mov dword ptr [esi + 0x40c], edi */
  W32((uint32_t)(esi + 0x40cu), edi);
/* 818343: mov dword ptr [esi + 0x408], edi */
  W32((uint32_t)(esi + 0x408u), edi);
/* 818349: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81834c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81834d: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 818353: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 818354: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81835b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81835c: mov esp, ebp */
  esp = ebp;
/* 81835e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81835f: ret  */
  esp += 4; SPILL(); return;
}

void f_818360(void) {
  LOAD_REGS();
L_818360: /* 818360: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818363: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 818368: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81836b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81836c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81836f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x818374u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_818374(); return;
}

void f_818374(void) {
  LOAD_REGS();
L_818374: /* 818374: push 0xa14698 */
  { uint32_t v = 0xa14698u; esp -= 4; W32(esp, v); }
/* 818379: push 0xae26fc */
  { uint32_t v = 0xae26fcu; esp -= 4; W32(esp, v); }
/* 81837e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x818384u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 818384: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 818387: xor edi, edi */
  edi = 0;
/* 818389: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81838a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81838b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x818390u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_818390: guest_badaddr(0x818390); return;
}

void f_8183d0(void) {
  LOAD_REGS();
L_8183d0: /* 8183d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8183d1: mov ebp, esp */
  ebp = esp;
/* 8183d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8183d5: push 0x9d2da0 */
  { uint32_t v = 0x9d2da0u; esp -= 4; W32(esp, v); }
/* 8183da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8183e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8183e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8183e8: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8183ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8183ef: mov ebx, ecx */
  ebx = ecx;
/* 8183f1: mov eax, dword ptr [ebx + 0xf8] */
  eax = R32((uint32_t)(ebx + 0xf8u));
/* 8183f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8183f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8183fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8183fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8183fe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 818405: je 0x818701 */
  if (zf) goto L_818701;
L_81840b: /* 81840b: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 818411: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 818413: je 0x818701 */
  if (zf) goto L_818701;
L_818419: /* 818419: mov eax, dword ptr [ebx + 0x470] */
  eax = R32((uint32_t)(ebx + 0x470u));
/* 81841f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 818421: jne 0x818701 */
  if (!zf) goto L_818701;
L_818427: /* 818427: fld dword ptr [ebx + 0x354] */
  { double v = F32((uint32_t)(ebx + 0x354u)); FPUSH(v); }
/* 81842d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 818433: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 818435: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 818438: jnp 0x818701 */
  if (!pf) goto L_818701;
L_81843e: /* 81843e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 818441: mov ecx, dword ptr [ebx + 0x3fc] */
  ecx = R32((uint32_t)(ebx + 0x3fcu));
/* 818447: imul edi, edi, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xc8u);
  edi = (uint32_t)r;
  }
/* 81844d: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 81844f: lea eax, [ebx + 0x11c] */
  eax = (uint32_t)(ebx + 0x11cu);
/* 818455: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818457: mov ecx, edi */
  ecx = edi;
/* 818459: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81845b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81845e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 818461: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818464: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 818467: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 81846a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81846b: lea ecx, [ebx + 0x370] */
  ecx = (uint32_t)(ebx + 0x370u);
/* 818471: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818477u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818477: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818479: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 81847c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81847e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818481: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 818484: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818487: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81848a: mov al, byte ptr [ebx + 0x144] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x144u))) & 0xffu);
/* 818490: xor ecx, ecx */
  ecx = 0;
/* 818492: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 818494: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 818497: mov esi, ecx */
  esi = ecx;
/* 818499: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81849b: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 81849e: jne 0x8184a4 */
  if (!zf) goto L_8184a4;
L_8184a0: /* 8184a0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8184a2: jne 0x8184d0 */
  if (!zf) goto L_8184d0;
L_8184a4: /* 8184a4: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8184a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8184a8: lea ecx, [ebx + 0x128] */
  ecx = (uint32_t)(ebx + 0x128u);
/* 8184ae: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x8184b4u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 8184b4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8184b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8184b8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8184ba: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8184bc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8184bf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 8184c2: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8184c5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8184c8: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8184cb: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8184ce: jne 0x8184d9 */
  if (!zf) goto L_8184d9;
L_8184d0: /* 8184d0: cmp byte ptr [ebx + 0x144], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x144u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8184d7: jne 0x818519 */
  if (!zf) goto L_818519;
L_8184d9: /* 8184d9: lea esi, [ebp - 0x1c] */
  esi = (uint32_t)(ebp + 0xffffffe4u);
/* 8184dc: call 0x817b70 */
  esp -= 4; W32(esp, 0x8184e1u); SPILL(); f_817b70(); if (g_unwind) return; RELOAD();
/* 8184e1: lea ecx, [ebx + 0x148] */
  ecx = (uint32_t)(ebx + 0x148u);
/* 8184e7: mov esi, eax */
  esi = eax;
/* 8184e9: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8184efu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8184ef: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 8184f2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8184f4: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8184f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8184f9: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8184fc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8184fe: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 818501: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 818503: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 818505: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 818507: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818509: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81850b: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 81850e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818511: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818514: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 818517: jne 0x818526 */
  if (!zf) goto L_818526;
L_818519: /* 818519: cmp byte ptr [ebx + 0x144], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x144u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 818520: jne 0x8185ed */
  if (!zf) goto L_8185ed;
L_818526: /* 818526: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 818529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81852a: lea ecx, [ebx + 0x150] */
  ecx = (uint32_t)(ebx + 0x150u);
/* 818530: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818536u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818536: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 818539: fmul qword ptr [0xa14748] */
  ST0 = ST0 * (F64((uint32_t)(0xa14748u)));
/* 81853f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818540: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818546: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 818549: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x81854fu); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 81854f: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 818552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818553: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 818556: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 81855c: fmul qword ptr [0xa14748] */
  ST0 = ST0 * (F64((uint32_t)(0xa14748u)));
/* 818562: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 818565: call dword ptr [0xcfaae8] */
  esp -= 4; W32(esp, 0x81856bu); SPILL(); f_4e342c(); if (g_unwind) return; /* Core!?SinFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 81856b: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 81856e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81856f: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 818572: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818578: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 81857b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81857e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 818581: fmul qword ptr [0xa14748] */
  ST0 = ST0 * (F64((uint32_t)(0xa14748u)));
/* 818587: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81858a: call dword ptr [0xcfaae8] */
  esp -= 4; W32(esp, 0x818590u); SPILL(); f_4e342c(); if (g_unwind) return; /* Core!?SinFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 818590: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 818593: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818594: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 818597: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 81859d: fmul qword ptr [0xa14748] */
  ST0 = ST0 * (F64((uint32_t)(0xa14748u)));
/* 8185a3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8185a6: call dword ptr [0xcfaae8] */
  esp -= 4; W32(esp, 0x8185acu); SPILL(); f_4e342c(); if (g_unwind) return; /* Core!?SinFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 8185ac: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8185af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8185b0: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8185b3: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8185b9: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8185bc: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8185bf: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8185c2: fmul qword ptr [0xa14748] */
  ST0 = ST0 * (F64((uint32_t)(0xa14748u)));
/* 8185c8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8185cb: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x8185d1u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 8185d1: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8185d4: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8185d7: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8185da: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 8185dc: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8185de: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8185e1: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 8185e4: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8185e7: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8185ea: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_8185ed: /* 8185ed: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 8185f4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8185f7: lea eax, [edi + 0x84] */
  eax = (uint32_t)(edi + 0x84u);
/* 8185fd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8185ff: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 818606: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818609: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 818610: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 818613: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 818616: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 818619: mov al, byte ptr [ebx + 0x174] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x174u))) & 0xffu);
/* 81861f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818621: je 0x818883 */
  if (zf) goto L_818883;
L_818627: /* 818627: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 81862d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81862f: je 0x818883 */
  if (zf) goto L_818883;
L_818635: /* 818635: mov edx, eax */
  edx = eax;
/* 818637: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 81863a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 81863b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81863d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 818641: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 818644: jle 0x818883 */
  if ((zf || sf != of)) goto L_818883;
L_81864a: /* 81864a: cmp byte ptr [ebx + 0x174], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x174u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 818651: jne 0x818664 */
  if (!zf) goto L_818664;
L_818653: /* 818653: mov eax, dword ptr [ebx + 0x468] */
  eax = R32((uint32_t)(ebx + 0x468u));
/* 818659: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 81865c: mov dword ptr [ebx + 0x468], ecx */
  W32((uint32_t)(ebx + 0x468u), ecx);
/* 818662: jmp 0x818678 */
  goto L_818678;
L_818664: /* 818664: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x81866au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 81866a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81866d: fild dword ptr [ebp - 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 818670: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 818673: call 0x99c958 */
  esp -= 4; W32(esp, 0x818678u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
L_818678: /* 818678: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 81867b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81867c: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x81867c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81867e: mov esi, edx */
  esi = edx;
/* 818680: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 818682: jge 0x818688 */
  if ((sf == of)) goto L_818688;
L_818684: /* 818684: xor esi, esi */
  esi = 0;
/* 818686: jmp 0x81868e */
  goto L_81868e;
L_818688: /* 818688: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81868a: jl 0x81868e */
  if ((sf != of)) goto L_81868e;
L_81868c: /* 81868c: mov esi, ecx */
  esi = ecx;
L_81868e: /* 81868e: test byte ptr [ebx + 0x1ac], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1acu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818695: je 0x818714 */
  if (zf) goto L_818714;
L_818697: /* 818697: mov edx, dword ptr [ebx + 0x170] */
  edx = R32((uint32_t)(ebx + 0x170u));
/* 81869d: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8186a0: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8186a3: lea edx, [ecx + eax*8 + 0xc] */
  edx = (uint32_t)(ecx + eax*8 + 0xcu);
/* 8186a7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8186a9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8186ac: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8186af: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8186b2: lea ecx, [ebx + 0x1bc] */
  ecx = (uint32_t)(ebx + 0x1bcu);
/* 8186b8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8186bb: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8186be: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8186c4u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8186c4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8186c7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8186ca: fmul dword ptr [ebx + 0x47c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x47cu)));
/* 8186d0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8186d3: fmul dword ptr [ebx + 0x480] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x480u)));
/* 8186d9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8186db: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8186de: fmul dword ptr [ebx + 0x478] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x478u)));
/* 8186e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8186e6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8186e9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8186eb: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8186f1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8186f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8186f5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8186f8: jne 0x818714 */
  if (!zf) goto L_818714;
L_8186fa: /* 8186fa: and dword ptr [edi + 0xbc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xbcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0xbcu), r);
  }
L_818701: /* 818701: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 818704: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81870b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81870c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81870d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81870e: mov esp, ebp */
  esp = ebp;
/* 818710: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 818711: ret 0x14 */
  esp += 24; SPILL(); return;
L_818714: /* 818714: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 818717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818718: lea ecx, [ebx + 0x194] */
  ecx = (uint32_t)(ebx + 0x194u);
/* 81871e: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818724u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818724: mov ecx, dword ptr [ebx + 0x170] */
  ecx = R32((uint32_t)(ebx + 0x170u));
/* 81872a: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 81872d: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 818730: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 818733: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 818735: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 818738: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81873a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 81873d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 818740: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 818743: test byte ptr [ebx + 0x1ac], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1acu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81874a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 81874d: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 818750: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 818753: je 0x818763 */
  if (zf) goto L_818763;
L_818755: /* 818755: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 818758: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 81875b: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 81875e: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 818761: jmp 0x81876f */
  goto L_81876f;
L_818763: /* 818763: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 818766: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 818769: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81876c: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
L_81876f: /* 81876f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 818772: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 818775: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818778: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81877b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81877e: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 818780: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 818782: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818784: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818787: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 81878a: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 81878d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818790: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818793: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 818796: mov al, byte ptr [ebx + 0x178] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x178u))) & 0xffu);
/* 81879c: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81879e: je 0x818824 */
  if (zf) goto L_818824;
L_8187a4: /* 8187a4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8187a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8187a8: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 8187ae: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x8187b4u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 8187b4: mov ecx, dword ptr [ebx + 0x170] */
  ecx = R32((uint32_t)(ebx + 0x170u));
/* 8187ba: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 8187bd: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8187c0: lea ecx, [edx + eax + 0xc] */
  ecx = (uint32_t)(edx + eax + 0xcu);
/* 8187c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8187c6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8187c9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8187cc: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8187cf: test byte ptr [ebx + 0x1ac], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1acu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8187d6: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8187d9: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8187dc: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8187df: je 0x8187ef */
  if (zf) goto L_8187ef;
L_8187e1: /* 8187e1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8187e4: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8187e7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8187ea: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8187ed: jmp 0x8187fb */
  goto L_8187fb;
L_8187ef: /* 8187ef: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8187f2: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8187f5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8187f8: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
L_8187fb: /* 8187fb: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8187fe: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 818801: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818804: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818807: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81880a: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 81880d: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 81880f: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 818812: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818815: fadd dword ptr [edi + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x1cu)));
/* 818818: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 81881b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 81881e: fadd dword ptr [edi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x20u)));
/* 818821: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
L_818824: /* 818824: test byte ptr [ebx + 0x1ac], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1acu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81882b: je 0x818883 */
  if (zf) goto L_818883;
L_81882d: /* 81882d: mov edx, dword ptr [ebx + 0x170] */
  edx = R32((uint32_t)(ebx + 0x170u));
/* 818833: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 818839: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 81883c: mov ecx, eax */
  ecx = eax;
/* 81883e: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 818841: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 818844: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 818847: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 81884a: movzx edx, ah */
  edx = (uint32_t)(((eax >> 8) & 0xffu));
/* 81884d: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 818850: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 818853: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 818859: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 81885c: fstp dword ptr [edi + 0x84] */
  WF32((uint32_t)(edi + 0x84u), ST0); FPOP();
/* 818862: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 818865: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 818868: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 81886e: fstp dword ptr [edi + 0x88] */
  WF32((uint32_t)(edi + 0x88u), ST0); FPOP();
/* 818874: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 818877: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 81887d: fstp dword ptr [edi + 0x8c] */
  WF32((uint32_t)(edi + 0x8cu), ST0); FPOP();
L_818883: /* 818883: mov eax, dword ptr [ebx + 0x488] */
  eax = R32((uint32_t)(ebx + 0x488u));
/* 818889: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81888a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81888c: mov esi, eax */
  esi = eax;
/* 81888e: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 818890: lea ecx, [ebx + 0x2cc] */
  ecx = (uint32_t)(ebx + 0x2ccu);
/* 818896: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81889d: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8188a0: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8188a6u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8188a6: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8188a9: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8188ac: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8188af: call 0x99c958 */
  esp -= 4; W32(esp, 0x8188b4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8188b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8188b6: jge 0x8188ec */
  if ((sf == of)) goto L_8188ec;
L_8188b8: /* 8188b8: xor eax, eax */
  eax = 0;
/* 8188ba: jmp 0x8188f5 */
  goto L_8188f5;
L_8188ec: /* 8188ec: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 8188ef: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8188f1: jl 0x8188f5 */
  if ((sf != of)) goto L_8188f5;
L_8188f3: /* 8188f3: mov eax, ecx */
  eax = ecx;
L_8188f5: /* 8188f5: mov dword ptr [edi + 0xc4], eax */
  W32((uint32_t)(edi + 0xc4u), eax);
/* 8188fb: mov cl, byte ptr [ebx + 0x2b8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x2b8u))) & 0xffu);
/* 818901: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818903: je 0x81896a */
  if (zf) goto L_81896a;
L_818905: /* 818905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 818907: je 0x81896a */
  if (zf) goto L_81896a;
L_818909: /* 818909: mov ecx, dword ptr [ebx + 0x484] */
  ecx = R32((uint32_t)(ebx + 0x484u));
/* 81890f: fld dword ptr [ebx + 0x2c8] */
  { double v = F32((uint32_t)(ebx + 0x2c8u)); FPUSH(v); }
/* 818915: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 818918: fmul dword ptr [ecx + eax*8 + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*8 + 0x8u)));
/* 81891c: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 81891f: fld dword ptr [ebx + 0x2c4] */
  { double v = F32((uint32_t)(ebx + 0x2c4u)); FPUSH(v); }
/* 818925: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 818928: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 81892a: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 818930: fmul dword ptr [ebx + 0x2c0] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2c0u)));
/* 818936: mov edx, eax */
  edx = eax;
/* 818938: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81893b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81893e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818940: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818943: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818946: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818949: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81894c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81894f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 818951: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 818954: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 818956: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818958: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 81895b: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 81895e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818961: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818964: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818967: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_81896a: /* 81896a: mov edx, dword ptr [ebx + 0x440] */
  edx = R32((uint32_t)(ebx + 0x440u));
/* 818970: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 818971: mov dword ptr [ebx + 0x440], edx */
  W32((uint32_t)(ebx + 0x440u), edx);
/* 818977: mov eax, edx */
  eax = edx;
/* 818979: mov edx, dword ptr [ebx + 0x140] */
  edx = R32((uint32_t)(ebx + 0x140u));
/* 81897f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 818981: jl 0x8189e0 */
  if ((sf != of)) goto L_8189e0;
L_818983: /* 818983: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818989: mov esi, dword ptr [ecx + 0x33c] */
  esi = R32((uint32_t)(ecx + 0x33cu));
/* 81898f: mov edx, dword ptr [esi + edx*4] */
  edx = R32((uint32_t)(esi + edx*4));
/* 818992: mov esi, dword ptr [edx + 0x40c] */
  esi = R32((uint32_t)(edx + 0x40cu));
/* 818998: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81899a: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 81899d: jle 0x8189e0 */
  if ((zf || sf != of)) goto L_8189e0;
L_81899f: /* 81899f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8189a0: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x8189a0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8189a2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8189a5: mov esi, dword ptr [eax + 0x3fc] */
  esi = R32((uint32_t)(eax + 0x3fcu));
/* 8189ab: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 8189b1: fld dword ptr [edx + esi + 8] */
  { double v = F32((uint32_t)(edx + esi + 0x8u)); FPUSH(v); }
/* 8189b5: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 8189bb: fld dword ptr [edx + esi + 4] */
  { double v = F32((uint32_t)(edx + esi + 0x4u)); FPUSH(v); }
/* 8189bf: fsub dword ptr [ecx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x174u)));
/* 8189c5: fld dword ptr [edx + esi] */
  { double v = F32((uint32_t)(edx + esi)); FPUSH(v); }
/* 8189c8: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 8189ce: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8189d0: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 8189d2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8189d4: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 8189d7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8189da: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8189dd: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_8189e0: /* 8189e0: movzx eax, byte ptr [ebx + 0x210] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x210u)));
/* 8189e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8189e8: je 0x818a76 */
  if (zf) goto L_818a76;
L_8189ee: /* 8189ee: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8189ef: je 0x818a53 */
  if (zf) goto L_818a53;
L_8189f1: /* 8189f1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8189f2: jne 0x818ace */
  if (!zf) goto L_818ace;
L_8189f8: /* 8189f8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8189fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8189fc: lea ecx, [ebx + 0x27c] */
  ecx = (uint32_t)(ebx + 0x27cu);
/* 818a02: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x818a08u); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 818a08: cmp byte ptr [ebx + 0x100], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x100u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 818a0f: jne 0x818a18 */
  if (!zf) goto L_818a18;
L_818a11: /* 818a11: sub dword ptr [ebp - 0x1c], 0x4000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_818a18: /* 818a18: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818a1e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 818a21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818a22: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 818a28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818a29: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a2c: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818a32u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818a32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818a33: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 818a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818a37: mov ecx, edi */
  ecx = edi;
/* 818a39: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x818a3fu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 818a3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818a41: mov edx, edi */
  edx = edi;
/* 818a43: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818a45: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818a48: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818a4b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818a4e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818a51: jmp 0x818ace */
  goto L_818ace;
L_818a53: /* 818a53: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818a59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818a5a: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818a60: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 818a66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818a67: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a6a: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818a70u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818a71: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 818a74: jmp 0x818ab3 */
  goto L_818ab3;
L_818a76: /* 818a76: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818a7d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818a83: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 818a89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818a8a: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a8d: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818a93u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818a93: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818a99: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818aa0: lea edx, [ebp - 0x118] */
  edx = (uint32_t)(ebp + 0xfffffee8u);
/* 818aa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818aa7: mov ecx, eax */
  ecx = eax;
/* 818aa9: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818aafu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818aaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818ab0: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_818ab3: /* 818ab3: mov ecx, edi */
  ecx = edi;
/* 818ab5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818ab6: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x818abcu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 818abc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818abe: mov ecx, edi */
  ecx = edi;
/* 818ac0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818ac2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818ac5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 818ac8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818acb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_818ace: /* 818ace: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818ad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818ad2: lea ecx, [ebx + 0x1cc] */
  ecx = (uint32_t)(ebx + 0x1ccu);
/* 818ad8: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818adeu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818ade: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818ae0: lea esi, [edi + 0x48] */
  esi = (uint32_t)(edi + 0x48u);
/* 818ae3: mov edx, esi */
  edx = esi;
/* 818ae5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818ae7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818aea: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818aed: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818af0: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818af4: lea ecx, [ebx + 0x1e4] */
  ecx = (uint32_t)(ebx + 0x1e4u);
/* 818afa: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818afd: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818b03u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818b03: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818b05: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* 818b08: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818b0a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818b0d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818b10: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818b13: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818b16: mov al, byte ptr [ebx + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xf4u))) & 0xffu);
/* 818b1c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818b1e: jne 0x818b99 */
  if (!zf) goto L_818b99;
L_818b20: /* 818b20: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818b24: jne 0x818b72 */
  if (!zf) goto L_818b72;
L_818b26: /* 818b26: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 818b2c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 818b2f: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 818b34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818b35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818b36: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 818b39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818b3a: call 0x6cb802 */
  esp -= 4; W32(esp, 0x818b3fu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 818b3f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818b42: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818b48: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 818b4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 818b51: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818b54: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 818b5a: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 818b60: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 818b62: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 818b64: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818b66: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818b69: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818b6c: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818b6f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_818b72: /* 818b72: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 818b78: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 818b7e: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 818b83: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818b85: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818b87: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818b8a: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818b8d: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818b90: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818b93: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818b96: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_818b99: /* 818b99: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818b9d: jne 0x818bc1 */
  if (!zf) goto L_818bc1;
L_818b9f: /* 818b9f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 818ba1: fadd dword ptr [ebx + 0x448] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x448u)));
/* 818ba7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818ba9: fld dword ptr [ebx + 0x44c] */
  { double v = F32((uint32_t)(ebx + 0x44cu)); FPUSH(v); }
/* 818baf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818bb2: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818bb5: fld dword ptr [ebx + 0x450] */
  { double v = F32((uint32_t)(ebx + 0x450u)); FPUSH(v); }
/* 818bbb: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818bbe: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_818bc1: /* 818bc1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 818bc4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 818bc6: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 818bc8: mov ecx, edi */
  ecx = edi;
/* 818bca: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818bcc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818bcf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818bd2: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818bd5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818bd8: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 818bdb: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818bde: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 818be1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 818be3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 818be5: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 818be8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 818beb: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 818bee: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 818bf1: mov eax, edi */
  eax = edi;
/* 818bf3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818bf5: lea edx, [edi + 0x78] */
  edx = (uint32_t)(edi + 0x78u);
/* 818bf8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818bfa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818bfd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818c00: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818c03: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818c06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818c07: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 818c0d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818c10: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818c16u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818c17: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 818c1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818c1b: lea ecx, [edi + 0x84] */
  ecx = (uint32_t)(edi + 0x84u);
/* 818c21: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x818c27u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 818c27: lea ecx, [ebx + 0x350] */
  ecx = (uint32_t)(ebx + 0x350u);
/* 818c2d: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818c33u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818c33: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818c36: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 818c39: lea ecx, [ebx + 0x348] */
  ecx = (uint32_t)(ebx + 0x348u);
/* 818c3f: mov dword ptr [edi + 0xb0], eax */
  W32((uint32_t)(edi + 0xb0u), eax);
/* 818c45: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818c4bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818c4b: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 818c4e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 818c51: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 818c54: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 818c57: mov dword ptr [edi + 0xbc], ecx */
  W32((uint32_t)(edi + 0xbcu), ecx);
/* 818c5d: lea ecx, [ebx + 0x168] */
  ecx = (uint32_t)(ebx + 0x168u);
/* 818c63: fstp dword ptr [edi + 0xac] */
  WF32((uint32_t)(edi + 0xacu), ST0); FPOP();
/* 818c69: mov dword ptr [edi + 0xb8], 0 */
  W32((uint32_t)(edi + 0xb8u), 0x0u);
/* 818c73: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818c79u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818c79: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818c7c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 818c7f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818c82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818c83: lea ecx, [ebx + 0x29c] */
  ecx = (uint32_t)(ebx + 0x29cu);
/* 818c89: mov dword ptr [edi + 0xb4], edx */
  W32((uint32_t)(edi + 0xb4u), edx);
/* 818c8f: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818c95u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818c95: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 818c97: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 818c9a: mov edx, ecx */
  edx = ecx;
/* 818c9c: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 818c9e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 818ca1: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 818ca4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818ca7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818caa: test byte ptr [ebx + 0x2b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x2b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818cb1: je 0x818cbd */
  if (zf) goto L_818cbd;
L_818cb3: /* 818cb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 818cb5: mov eax, edx */
  eax = edx;
/* 818cb7: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
/* 818cba: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
L_818cbd: /* 818cbd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 818cbf: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818cc2: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 818cc5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 818cc7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 818cca: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 818ccd: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 818cd0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 818cd3: fmul dword ptr [ebx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x30u)));
/* 818cd6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818cd9: lea esi, [edi + 0x18] */
  esi = (uint32_t)(edi + 0x18u);
/* 818cdc: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 818cdf: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 818ce6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818ce9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818cec: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 818cef: lea edx, [edi + 0x90] */
  edx = (uint32_t)(edi + 0x90u);
/* 818cf5: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 818cfc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818cff: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818d01: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 818d08: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 818d0f: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 818d16: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818d18: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818d1b: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818d1e: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818d21: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 818d24: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 818d26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 818d29: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818d2c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818d2f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818d32: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818d35: lea ecx, [edi + 0x60] */
  ecx = (uint32_t)(edi + 0x60u);
/* 818d38: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818d3a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 818d3d: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 818d44: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 818d47: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 818d4a: movzx eax, byte ptr [ebx + 0x210] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x210u)));
/* 818d51: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818d52: je 0x818daf */
  if (zf) goto L_818daf;
L_818d54: /* 818d54: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818d55: je 0x818d8c */
  if (zf) goto L_818d8c;
L_818d57: /* 818d57: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818d58: jne 0x818e07 */
  if (!zf) goto L_818e07;
L_818d5e: /* 818d5e: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818d62: lea ecx, [ebx + 0x27c] */
  ecx = (uint32_t)(ebx + 0x27cu);
/* 818d68: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x818d6eu); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 818d6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818d6f: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 818d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818d76: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818d7c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818d7f: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818d85u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818d85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818d86: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 818d89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818d8a: jmp 0x818ded */
  goto L_818ded;
L_818d8c: /* 818d8c: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818d93: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818d99: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 818d9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818da0: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818da3: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818da9u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818daa: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 818dad: jmp 0x818dec */
  goto L_818dec;
L_818daf: /* 818daf: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818db5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818db6: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818dbc: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 818dc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818dc3: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818dc6: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818dccu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818dcc: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818dd2: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818dd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818dd9: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 818ddf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818de0: mov ecx, eax */
  ecx = eax;
/* 818de2: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818de8u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818de8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818de9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_818dec: /* 818dec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_818ded: /* 818ded: mov ecx, esi */
  ecx = esi;
/* 818def: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x818df5u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 818df5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818df7: mov ecx, esi */
  ecx = esi;
/* 818df9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818dfe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 818e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818e04: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_818e07: /* 818e07: mov al, byte ptr [ebx + 0x3d0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x3d0u))) & 0xffu);
/* 818e0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818e0f: je 0x818f41 */
  if (zf) goto L_818f41;
L_818e15: /* 818e15: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 818e1c: jne 0x818e3d */
  if (!zf) goto L_818e3d;
L_818e1e: /* 818e1e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818e21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818e22: mov ecx, edi */
  ecx = edi;
/* 818e24: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x818e2au); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 818e2a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818e2c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818e2f: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 818e32: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 818e35: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 818e38: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 818e3b: jmp 0x818e82 */
  goto L_818e82;
L_818e3d: /* 818e3d: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 818e43: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 818e49: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 818e4e: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 818e51: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 818e54: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818e57: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 818e5a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 818e5c: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818e5f: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 818e61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818e62: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818e65: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818e68: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 818e6b: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x818e71u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 818e71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818e73: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818e76: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818e79: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 818e7c: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 818e7f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_818e82: /* 818e82: movzx eax, byte ptr [ebx + 0x3d0] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x3d0u)));
/* 818e89: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818e8a: je 0x818f02 */
  if (zf) goto L_818f02;
L_818e8c: /* 818e8c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818e8d: je 0x818ed3 */
  if (zf) goto L_818ed3;
L_818e8f: /* 818e8f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818e90: jne 0x818f41 */
  if (!zf) goto L_818f41;
L_818e96: /* 818e96: lea ecx, [ebx + 0x388] */
  ecx = (uint32_t)(ebx + 0x388u);
/* 818e9c: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818ea2u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818ea2: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818ea5: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 818ea8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 818eab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818eac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818ead: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818eb1: call 0x6cb802 */
  esp -= 4; W32(esp, 0x818eb6u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 818eb6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 818eb8: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818eba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 818ebd: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818ebf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818ec2: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818ec5: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818ec8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818ecb: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818ece: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 818ed1: jmp 0x818f41 */
  goto L_818f41;
L_818ed3: /* 818ed3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 818ed6: mov ecx, esi */
  ecx = esi;
/* 818ed8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 818edb: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 818ede: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 818ee1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 818ee4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 818ee6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818ee9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818eec: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818eee: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818ef1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818ef4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 818ef7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 818efa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 818efd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 818f00: jmp 0x818f41 */
  goto L_818f41;
L_818f02: /* 818f02: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 818f05: mov eax, esi */
  eax = esi;
/* 818f07: fchs  */
  ST0 = -ST0;
/* 818f09: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 818f0c: fchs  */
  ST0 = -ST0;
/* 818f0e: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818f11: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 818f13: fchs  */
  ST0 = -ST0;
/* 818f15: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818f18: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 818f1b: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 818f1e: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 818f21: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 818f24: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 818f27: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818f2a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818f2d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 818f2f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818f32: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818f35: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 818f38: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 818f3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 818f3e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_818f41: /* 818f41: mov eax, dword ptr [ebx + 0x3b4] */
  eax = R32((uint32_t)(ebx + 0x3b4u));
/* 818f47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 818f49: jl 0x818fb9 */
  if ((sf != of)) goto L_818fb9;
L_818f4b: /* 818f4b: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 818f51: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 818f57: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 818f5a: mov ecx, dword ptr [eax + 0x40c] */
  ecx = R32((uint32_t)(eax + 0x40cu));
/* 818f60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 818f62: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 818f65: jle 0x818fb9 */
  if ((zf || sf != of)) goto L_818fb9;
L_818f67: /* 818f67: mov eax, dword ptr [ebx + 0x440] */
  eax = R32((uint32_t)(ebx + 0x440u));
/* 818f6d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 818f6e: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x818f6e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 818f70: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 818f73: mov ecx, dword ptr [eax + 0x3fc] */
  ecx = R32((uint32_t)(eax + 0x3fcu));
/* 818f79: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818f7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818f7d: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 818f83: lea edx, [edx + ecx + 0x18] */
  edx = (uint32_t)(edx + ecx + 0x18u);
/* 818f87: lea ecx, [ebx + 0x3b8] */
  ecx = (uint32_t)(ebx + 0x3b8u);
/* 818f8d: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 818f90: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818f96u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818f96: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 818f99: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 818f9c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 818f9f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 818fa2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 818fa5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 818fa7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 818fa9: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818fab: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818fad: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818fb0: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818fb3: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818fb6: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_818fb9: /* 818fb9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818fbc: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 818fbf: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818fc2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 818fc5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818fc8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 818fca: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 818fcc: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818fce: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818fd1: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818fd4: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818fd7: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 818fda: fld dword ptr [edi + 0xb4] */
  { double v = F32((uint32_t)(edi + 0xb4u)); FPUSH(v); }
/* 818fe0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 818fe6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 818fe8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 818feb: jnp 0x818fff */
  if (!pf) goto L_818fff;
L_818fed: /* 818fed: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 818ff3: fdiv dword ptr [edi + 0xb4] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0xb4u)));
/* 818ff9: fstp dword ptr [edi + 0xb4] */
  WF32((uint32_t)(edi + 0xb4u), ST0); FPOP();
L_818fff: /* 818fff: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 819002: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819003: lea ecx, [ebx + 0x248] */
  ecx = (uint32_t)(ebx + 0x248u);
/* 819009: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81900fu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81900f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 819011: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 819014: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 819016: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 819019: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81901c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81901f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 819022: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 819025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819026: lea ecx, [ebx + 0x230] */
  ecx = (uint32_t)(ebx + 0x230u);
/* 81902c: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x819032u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 819032: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 819034: lea esi, [edi + 0x30] */
  esi = (uint32_t)(edi + 0x30u);
/* 819037: mov edx, esi */
  edx = esi;
/* 819039: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81903b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81903e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 819041: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 819044: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 819047: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x81904du); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 81904d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 819050: fld dword ptr [ebx + 0x224] */
  { double v = F32((uint32_t)(ebx + 0x224u)); FPUSH(v); }
/* 819056: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 819059: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81905b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81905e: jne 0x81906a */
  if (!zf) goto L_81906a;
L_819060: /* 819060: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 819062: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 819068: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_81906a: /* 81906a: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819070u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819070: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 819073: fld dword ptr [ebx + 0x228] */
  { double v = F32((uint32_t)(ebx + 0x228u)); FPUSH(v); }
/* 819079: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 81907c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81907e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819081: jne 0x81908f */
  if (!zf) goto L_81908f;
L_819083: /* 819083: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 819086: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 81908c: fstp dword ptr [edi + 0x34] */
  WF32((uint32_t)(edi + 0x34u), ST0); FPOP();
L_81908f: /* 81908f: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819095u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819095: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 819098: fld dword ptr [ebx + 0x22c] */
  { double v = F32((uint32_t)(ebx + 0x22cu)); FPUSH(v); }
/* 81909e: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 8190a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8190a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8190a6: jne 0x8190b4 */
  if (!zf) goto L_8190b4;
L_8190a8: /* 8190a8: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 8190ab: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8190b1: fstp dword ptr [edi + 0x38] */
  WF32((uint32_t)(edi + 0x38u), ST0); FPOP();
L_8190b4: /* 8190b4: fld dword ptr [edi + 0x3c] */
  { double v = F32((uint32_t)(edi + 0x3cu)); FPUSH(v); }
/* 8190b7: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190bd: fstp dword ptr [edi + 0x3c] */
  WF32((uint32_t)(edi + 0x3cu), ST0); FPOP();
/* 8190c0: fld dword ptr [edi + 0x40] */
  { double v = F32((uint32_t)(edi + 0x40u)); FPUSH(v); }
/* 8190c3: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190c9: fstp dword ptr [edi + 0x40] */
  WF32((uint32_t)(edi + 0x40u), ST0); FPOP();
/* 8190cc: fld dword ptr [edi + 0x44] */
  { double v = F32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 8190cf: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190d5: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* 8190d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8190da: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190e0: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8190e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8190e5: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190eb: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 8190ee: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8190f1: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190f7: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 8190fa: mov al, byte ptr [ebx + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x33cu))) & 0xffu);
/* 819100: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819102: je 0x819166 */
  if (zf) goto L_819166;
L_819104: /* 819104: mov eax, dword ptr [ebx + 0x338] */
  eax = R32((uint32_t)(ebx + 0x338u));
/* 81910a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81910c: je 0x819141 */
  if (zf) goto L_819141;
L_81910e: /* 81910e: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819114u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819114: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 819117: mov eax, dword ptr [ebx + 0x334] */
  eax = R32((uint32_t)(ebx + 0x334u));
/* 81911d: mov ecx, dword ptr [ebx + 0x338] */
  ecx = R32((uint32_t)(ebx + 0x338u));
/* 819123: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 819125: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 819128: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81912b: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 81912e: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 819131: fiadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x18u)));
/* 819134: call 0x99c958 */
  esp -= 4; W32(esp, 0x819139u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 819139: mov dword ptr [edi + 0xc0], eax */
  W32((uint32_t)(edi + 0xc0u), eax);
/* 81913f: jmp 0x819170 */
  goto L_819170;
L_819141: /* 819141: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819147u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819147: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 81914a: fild dword ptr [ebx + 0x320] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x320u)); FPUSH(v); }
/* 819150: fimul dword ptr [ebx + 0x31c] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebx + 0x31cu)));
/* 819156: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 819159: call 0x99c958 */
  esp -= 4; W32(esp, 0x81915eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81915e: mov dword ptr [edi + 0xc0], eax */
  W32((uint32_t)(edi + 0xc0u), eax);
/* 819164: jmp 0x819170 */
  goto L_819170;
L_819166: /* 819166: mov dword ptr [edi + 0xc0], 0xffffffff */
  W32((uint32_t)(edi + 0xc0u), 0xffffffffu);
L_819170: /* 819170: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819176: fcomp dword ptr [edi + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xb0u)));
  FPOP();
/* 81917c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81917e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819181: jne 0x8191d6 */
  if (!zf) goto L_8191d6;
L_819183: /* 819183: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819189: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81918f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819191: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 819194: jnp 0x8191d6 */
  if (!pf) goto L_8191d6;
L_819196: /* 819196: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 81919c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 81919e: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 8191a4: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8191a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8191a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8191aa: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8191b1: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8191b8: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8191bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8191c1: call 0x99cc5c */
  esp -= 4; W32(esp, 0x8191c6u); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 8191c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8191c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8191ca: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8191cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8191ce: mov ecx, ebx */
  ecx = ebx;
/* 8191d0: call dword ptr [esi + 0x80] */
  { uint32_t t = R32((uint32_t)(esi + 0x80u)); esp -= 4; W32(esp, 0x8191d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8191d6: /* 8191d6: mov al, byte ptr [ebx + 0x2e0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x2e0u))) & 0xffu);
/* 8191dc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8191de: je 0x819393 */
  if (zf) goto L_819393;
L_8191e4: /* 8191e4: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 8191ea: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8191f0: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8191f3: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 8191f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8191f8: je 0x819393 */
  if (zf) goto L_819393;
L_8191fe: /* 8191fe: mov ecx, dword ptr [ebx + 0x2d8] */
  ecx = R32((uint32_t)(ebx + 0x2d8u));
/* 819204: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819206: je 0x819393 */
  if (zf) goto L_819393;
L_81920c: /* 81920c: xor esi, esi */
  esi = 0;
/* 81920e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 819210: jbe 0x819241 */
  if ((cf | zf)) goto L_819241;
L_819212: /* 819212: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 819214: jbe 0x819232 */
  if ((cf | zf)) goto L_819232;
L_819216: /* 819216: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819218: jne 0x819241 */
  if (!zf) goto L_819241;
L_81921a: /* 81921a: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x819220u); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 819220: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 819223: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 819229: call 0x99c958 */
  esp -= 4; W32(esp, 0x81922eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81922e: mov esi, eax */
  esi = eax;
/* 819230: jmp 0x819241 */
  goto L_819241;
L_819232: /* 819232: mov esi, dword ptr [ebx + 0x464] */
  esi = R32((uint32_t)(ebx + 0x464u));
/* 819238: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 81923b: mov dword ptr [ebx + 0x464], eax */
  W32((uint32_t)(ebx + 0x464u), eax);
L_819241: /* 819241: lea ecx, [ebx + 0x2e4] */
  ecx = (uint32_t)(ebx + 0x2e4u);
/* 819247: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81924du); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81924d: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 819250: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819256: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819258: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81925b: jnp 0x819274 */
  if (!pf) goto L_819274;
L_81925d: /* 81925d: lea ecx, [ebx + 0x2e4] */
  ecx = (uint32_t)(ebx + 0x2e4u);
/* 819263: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x819269u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 819269: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 81926c: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 819272: jmp 0x819280 */
  goto L_819280;
L_819274: /* 819274: mov ecx, dword ptr [ebx + 0x2d8] */
  ecx = R32((uint32_t)(ebx + 0x2d8u));
/* 81927a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 81927d: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
L_819280: /* 819280: call 0x99c958 */
  esp -= 4; W32(esp, 0x819285u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 819285: mov ecx, eax */
  ecx = eax;
/* 819287: mov eax, esi */
  eax = esi;
/* 819289: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81928a: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x81928a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81928c: lea ecx, [ebx + 0x2e4] */
  ecx = (uint32_t)(ebx + 0x2e4u);
/* 819292: mov esi, edx */
  esi = edx;
/* 819294: call dword ptr [0xcfaae0] */
  esp -= 4; W32(esp, 0x81929au); SPILL(); f_4e4089(); if (g_unwind) return; /* Core!?GetMin@FRange@@QBEMXZ */ RELOAD();
/* 81929a: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 81929d: call 0x99c958 */
  esp -= 4; W32(esp, 0x8192a2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8192a2: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 8192a4: mov eax, dword ptr [ebx + 0x2d8] */
  eax = R32((uint32_t)(ebx + 0x2d8u));
/* 8192aa: lea eax, [eax - 1] */
  eax = (uint32_t)(eax + 0xffffffffu);
/* 8192ad: jns 0x8192b3 */
  if (!sf) goto L_8192b3;
L_8192af: /* 8192af: xor esi, esi */
  esi = 0;
/* 8192b1: jmp 0x8192b9 */
  goto L_8192b9;
L_8192b3: /* 8192b3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8192b5: jl 0x8192b9 */
  if ((sf != of)) goto L_8192b9;
L_8192b7: /* 8192b7: mov esi, eax */
  esi = eax;
L_8192b9: /* 8192b9: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* 8192bf: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* 8192c2: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8192c5: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8192c7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8192ca: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8192d0u); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8192d0: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8192d3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8192d6: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8192d9: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8192dfu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8192df: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8192e2: lea ecx, [ebx + 0x2ec] */
  ecx = (uint32_t)(ebx + 0x2ecu);
/* 8192e8: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8192eeu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8192ee: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 8192f1: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8192f4: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8192f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8192f9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8192fc: jne 0x819393 */
  if (!zf) goto L_819393;
L_819302: /* 819302: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 819308: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 81930e: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 819311: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 819314: mov edx, dword ptr [ebx + 0x2d4] */
  edx = R32((uint32_t)(ebx + 0x2d4u));
/* 81931a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81931c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 81931f: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 819322: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* 819325: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81932bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81932b: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 81932e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 819331: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x819337u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 819337: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 81933a: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 81933d: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x819343u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 819343: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 819346: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 819349: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 81934c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81934e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 819351: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 819357: fmul dword ptr [eax + 0x2cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2ccu)));
/* 81935d: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 81935f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819363: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 819365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819366: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 819369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81936a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81936d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 819371: mov ecx, esp */
  ecx = esp;
/* 819373: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 819375: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 819378: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 81937b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 81937e: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 819381: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 819384: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 819386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819387: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 81938a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81938c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81938d: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819393u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_819393: /* 819393: mov eax, dword ptr [ebx + 0x43c] */
  eax = R32((uint32_t)(ebx + 0x43cu));
/* 819399: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81939c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81939d: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8193a0: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 8193a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8193a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8193ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8193af: mov esp, ebp */
  esp = ebp;
/* 8193b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8193b2: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8188bc(void) {
  LOAD_REGS();
L_8188bc: /* 8188bc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8188bf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8188c4: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8188c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8188c8: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 8188cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8188d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8188d0(); return;
}

void f_8188d0(void) {
  LOAD_REGS();
L_8188d0: /* 8188d0: push 0xa14728 */
  { uint32_t v = 0xa14728u; esp -= 4; W32(esp, v); }
/* 8188d5: push 0xae270c */
  { uint32_t v = 0xae270cu; esp -= 4; W32(esp, v); }
/* 8188da: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8188e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8188e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8188e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8188e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8188e7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8188ecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8188ec: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 8188ef: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8188f1: jl 0x8188f5 */
  if ((sf != of)) goto L_8188f5;
L_8188f3: /* 8188f3: mov eax, ecx */
  eax = ecx;
L_8188f5: /* 8188f5: mov dword ptr [edi + 0xc4], eax */
  W32((uint32_t)(edi + 0xc4u), eax);
/* 8188fb: mov cl, byte ptr [ebx + 0x2b8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x2b8u))) & 0xffu);
/* 818901: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818903: je 0x81896a */
  if (zf) goto L_81896a;
L_818905: /* 818905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 818907: je 0x81896a */
  if (zf) goto L_81896a;
L_818909: /* 818909: mov ecx, dword ptr [ebx + 0x484] */
  ecx = R32((uint32_t)(ebx + 0x484u));
/* 81890f: fld dword ptr [ebx + 0x2c8] */
  { double v = F32((uint32_t)(ebx + 0x2c8u)); FPUSH(v); }
/* 818915: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 818918: fmul dword ptr [ecx + eax*8 + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*8 + 0x8u)));
/* 81891c: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 81891f: fld dword ptr [ebx + 0x2c4] */
  { double v = F32((uint32_t)(ebx + 0x2c4u)); FPUSH(v); }
/* 818925: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 818928: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 81892a: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 818930: fmul dword ptr [ebx + 0x2c0] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2c0u)));
/* 818936: mov edx, eax */
  edx = eax;
/* 818938: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 81893b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81893e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818940: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818943: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818946: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818949: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81894c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81894f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 818951: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 818954: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 818956: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818958: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 81895b: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 81895e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818961: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818964: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818967: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_81896a: /* 81896a: mov edx, dword ptr [ebx + 0x440] */
  edx = R32((uint32_t)(ebx + 0x440u));
/* 818970: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 818971: mov dword ptr [ebx + 0x440], edx */
  W32((uint32_t)(ebx + 0x440u), edx);
/* 818977: mov eax, edx */
  eax = edx;
/* 818979: mov edx, dword ptr [ebx + 0x140] */
  edx = R32((uint32_t)(ebx + 0x140u));
/* 81897f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 818981: jl 0x8189e0 */
  if ((sf != of)) goto L_8189e0;
L_818983: /* 818983: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818989: mov esi, dword ptr [ecx + 0x33c] */
  esi = R32((uint32_t)(ecx + 0x33cu));
/* 81898f: mov edx, dword ptr [esi + edx*4] */
  edx = R32((uint32_t)(esi + edx*4));
/* 818992: mov esi, dword ptr [edx + 0x40c] */
  esi = R32((uint32_t)(edx + 0x40cu));
/* 818998: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81899a: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 81899d: jle 0x8189e0 */
  if ((zf || sf != of)) goto L_8189e0;
L_81899f: /* 81899f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8189a0: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x8189a0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8189a2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8189a5: mov esi, dword ptr [eax + 0x3fc] */
  esi = R32((uint32_t)(eax + 0x3fcu));
/* 8189ab: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 8189b1: fld dword ptr [edx + esi + 8] */
  { double v = F32((uint32_t)(edx + esi + 0x8u)); FPUSH(v); }
/* 8189b5: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 8189bb: fld dword ptr [edx + esi + 4] */
  { double v = F32((uint32_t)(edx + esi + 0x4u)); FPUSH(v); }
/* 8189bf: fsub dword ptr [ecx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x174u)));
/* 8189c5: fld dword ptr [edx + esi] */
  { double v = F32((uint32_t)(edx + esi)); FPUSH(v); }
/* 8189c8: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 8189ce: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8189d0: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 8189d2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8189d4: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 8189d7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8189da: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8189dd: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_8189e0: /* 8189e0: movzx eax, byte ptr [ebx + 0x210] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x210u)));
/* 8189e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8189e8: je 0x818a76 */
  if (zf) goto L_818a76;
L_8189ee: /* 8189ee: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8189ef: je 0x818a53 */
  if (zf) goto L_818a53;
L_8189f1: /* 8189f1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8189f2: jne 0x818ace */
  if (!zf) goto L_818ace;
L_8189f8: /* 8189f8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8189fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8189fc: lea ecx, [ebx + 0x27c] */
  ecx = (uint32_t)(ebx + 0x27cu);
/* 818a02: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x818a08u); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 818a08: cmp byte ptr [ebx + 0x100], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x100u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 818a0f: jne 0x818a18 */
  if (!zf) goto L_818a18;
L_818a11: /* 818a11: sub dword ptr [ebp - 0x1c], 0x4000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_818a18: /* 818a18: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818a1e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 818a21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818a22: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 818a28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818a29: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a2c: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818a32u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818a32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818a33: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 818a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818a37: mov ecx, edi */
  ecx = edi;
/* 818a39: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x818a3fu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 818a3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818a41: mov edx, edi */
  edx = edi;
/* 818a43: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818a45: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818a48: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818a4b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818a4e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818a51: jmp 0x818ace */
  goto L_818ace;
L_818a53: /* 818a53: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818a59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818a5a: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818a60: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 818a66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818a67: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a6a: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818a70u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818a71: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 818a74: jmp 0x818ab3 */
  goto L_818ab3;
L_818a76: /* 818a76: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818a7d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818a83: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 818a89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818a8a: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a8d: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818a93u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818a93: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818a99: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818a9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818aa0: lea edx, [ebp - 0x118] */
  edx = (uint32_t)(ebp + 0xfffffee8u);
/* 818aa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818aa7: mov ecx, eax */
  ecx = eax;
/* 818aa9: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818aafu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818aaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818ab0: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_818ab3: /* 818ab3: mov ecx, edi */
  ecx = edi;
/* 818ab5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818ab6: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x818abcu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 818abc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818abe: mov ecx, edi */
  ecx = edi;
/* 818ac0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818ac2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818ac5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 818ac8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818acb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_818ace: /* 818ace: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818ad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818ad2: lea ecx, [ebx + 0x1cc] */
  ecx = (uint32_t)(ebx + 0x1ccu);
/* 818ad8: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818adeu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818ade: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818ae0: lea esi, [edi + 0x48] */
  esi = (uint32_t)(edi + 0x48u);
/* 818ae3: mov edx, esi */
  edx = esi;
/* 818ae5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818ae7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818aea: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818aed: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818af0: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818af4: lea ecx, [ebx + 0x1e4] */
  ecx = (uint32_t)(ebx + 0x1e4u);
/* 818afa: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818afd: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818b03u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818b03: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818b05: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* 818b08: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818b0a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818b0d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818b10: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818b13: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818b16: mov al, byte ptr [ebx + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xf4u))) & 0xffu);
/* 818b1c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818b1e: jne 0x818b99 */
  if (!zf) goto L_818b99;
L_818b20: /* 818b20: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818b24: jne 0x818b72 */
  if (!zf) goto L_818b72;
L_818b26: /* 818b26: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 818b2c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 818b2f: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 818b34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818b35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818b36: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 818b39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818b3a: call 0x6cb802 */
  esp -= 4; W32(esp, 0x818b3fu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 818b3f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818b42: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818b48: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 818b4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 818b51: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818b54: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 818b5a: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 818b60: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 818b62: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 818b64: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818b66: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818b69: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818b6c: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818b6f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_818b72: /* 818b72: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 818b78: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 818b7e: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 818b83: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818b85: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818b87: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818b8a: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818b8d: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818b90: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818b93: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818b96: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_818b99: /* 818b99: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818b9d: jne 0x818bc1 */
  if (!zf) goto L_818bc1;
L_818b9f: /* 818b9f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 818ba1: fadd dword ptr [ebx + 0x448] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x448u)));
/* 818ba7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818ba9: fld dword ptr [ebx + 0x44c] */
  { double v = F32((uint32_t)(ebx + 0x44cu)); FPUSH(v); }
/* 818baf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818bb2: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818bb5: fld dword ptr [ebx + 0x450] */
  { double v = F32((uint32_t)(ebx + 0x450u)); FPUSH(v); }
/* 818bbb: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818bbe: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_818bc1: /* 818bc1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 818bc4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 818bc6: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 818bc8: mov ecx, edi */
  ecx = edi;
/* 818bca: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818bcc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818bcf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818bd2: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818bd5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818bd8: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 818bdb: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818bde: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 818be1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 818be3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 818be5: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 818be8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 818beb: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 818bee: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 818bf1: mov eax, edi */
  eax = edi;
/* 818bf3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818bf5: lea edx, [edi + 0x78] */
  edx = (uint32_t)(edi + 0x78u);
/* 818bf8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 818bfa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818bfd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818c00: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818c03: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818c06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818c07: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 818c0d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818c10: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818c16u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818c17: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 818c1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818c1b: lea ecx, [edi + 0x84] */
  ecx = (uint32_t)(edi + 0x84u);
/* 818c21: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x818c27u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 818c27: lea ecx, [ebx + 0x350] */
  ecx = (uint32_t)(ebx + 0x350u);
/* 818c2d: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818c33u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818c33: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818c36: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 818c39: lea ecx, [ebx + 0x348] */
  ecx = (uint32_t)(ebx + 0x348u);
/* 818c3f: mov dword ptr [edi + 0xb0], eax */
  W32((uint32_t)(edi + 0xb0u), eax);
/* 818c45: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818c4bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818c4b: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 818c4e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 818c51: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 818c54: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 818c57: mov dword ptr [edi + 0xbc], ecx */
  W32((uint32_t)(edi + 0xbcu), ecx);
/* 818c5d: lea ecx, [ebx + 0x168] */
  ecx = (uint32_t)(ebx + 0x168u);
/* 818c63: fstp dword ptr [edi + 0xac] */
  WF32((uint32_t)(edi + 0xacu), ST0); FPOP();
/* 818c69: mov dword ptr [edi + 0xb8], 0 */
  W32((uint32_t)(edi + 0xb8u), 0x0u);
/* 818c73: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818c79u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818c79: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818c7c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 818c7f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818c82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818c83: lea ecx, [ebx + 0x29c] */
  ecx = (uint32_t)(ebx + 0x29cu);
/* 818c89: mov dword ptr [edi + 0xb4], edx */
  W32((uint32_t)(edi + 0xb4u), edx);
/* 818c8f: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818c95u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818c95: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 818c97: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 818c9a: mov edx, ecx */
  edx = ecx;
/* 818c9c: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 818c9e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 818ca1: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 818ca4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818ca7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818caa: test byte ptr [ebx + 0x2b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x2b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818cb1: je 0x818cbd */
  if (zf) goto L_818cbd;
L_818cb3: /* 818cb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 818cb5: mov eax, edx */
  eax = edx;
/* 818cb7: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
/* 818cba: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
L_818cbd: /* 818cbd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 818cbf: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818cc2: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 818cc5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 818cc7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 818cca: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 818ccd: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 818cd0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 818cd3: fmul dword ptr [ebx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x30u)));
/* 818cd6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818cd9: lea esi, [edi + 0x18] */
  esi = (uint32_t)(edi + 0x18u);
/* 818cdc: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 818cdf: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 818ce6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818ce9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818cec: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 818cef: lea edx, [edi + 0x90] */
  edx = (uint32_t)(edi + 0x90u);
/* 818cf5: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 818cfc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818cff: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818d01: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 818d08: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 818d0f: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 818d16: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818d18: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818d1b: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818d1e: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818d21: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 818d24: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 818d26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 818d29: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 818d2c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 818d2f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818d32: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818d35: lea ecx, [edi + 0x60] */
  ecx = (uint32_t)(edi + 0x60u);
/* 818d38: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818d3a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 818d3d: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 818d44: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 818d47: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 818d4a: movzx eax, byte ptr [ebx + 0x210] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x210u)));
/* 818d51: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818d52: je 0x818daf */
  if (zf) goto L_818daf;
L_818d54: /* 818d54: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818d55: je 0x818d8c */
  if (zf) goto L_818d8c;
L_818d57: /* 818d57: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818d58: jne 0x818e07 */
  if (!zf) goto L_818e07;
L_818d5e: /* 818d5e: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818d62: lea ecx, [ebx + 0x27c] */
  ecx = (uint32_t)(ebx + 0x27cu);
/* 818d68: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x818d6eu); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 818d6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818d6f: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 818d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818d76: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818d7c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818d7f: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818d85u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818d85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818d86: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 818d89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818d8a: jmp 0x818ded */
  goto L_818ded;
L_818d8c: /* 818d8c: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818d93: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818d99: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 818d9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818da0: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818da3: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818da9u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818daa: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 818dad: jmp 0x818dec */
  goto L_818dec;
L_818daf: /* 818daf: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 818db5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818db6: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 818dbc: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 818dc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818dc3: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818dc6: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818dccu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818dcc: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 818dd2: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 818dd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818dd9: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 818ddf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818de0: mov ecx, eax */
  ecx = eax;
/* 818de2: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x818de8u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 818de8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818de9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_818dec: /* 818dec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_818ded: /* 818ded: mov ecx, esi */
  ecx = esi;
/* 818def: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x818df5u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 818df5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818df7: mov ecx, esi */
  ecx = esi;
/* 818df9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818dfe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 818e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818e04: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_818e07: /* 818e07: mov al, byte ptr [ebx + 0x3d0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x3d0u))) & 0xffu);
/* 818e0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 818e0f: je 0x818f41 */
  if (zf) goto L_818f41;
L_818e15: /* 818e15: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 818e1c: jne 0x818e3d */
  if (!zf) goto L_818e3d;
L_818e1e: /* 818e1e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 818e21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818e22: mov ecx, edi */
  ecx = edi;
/* 818e24: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x818e2au); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 818e2a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 818e2c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 818e2f: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 818e32: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 818e35: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 818e38: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 818e3b: jmp 0x818e82 */
  goto L_818e82;
L_818e3d: /* 818e3d: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 818e43: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 818e49: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 818e4e: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 818e51: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 818e54: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818e57: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 818e5a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 818e5c: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818e5f: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 818e61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818e62: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818e65: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818e68: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 818e6b: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x818e71u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 818e71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 818e73: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 818e76: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 818e79: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 818e7c: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 818e7f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_818e82: /* 818e82: movzx eax, byte ptr [ebx + 0x3d0] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x3d0u)));
/* 818e89: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818e8a: je 0x818f02 */
  if (zf) goto L_818f02;
L_818e8c: /* 818e8c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818e8d: je 0x818ed3 */
  if (zf) goto L_818ed3;
L_818e8f: /* 818e8f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 818e90: jne 0x818f41 */
  if (!zf) goto L_818f41;
L_818e96: /* 818e96: lea ecx, [ebx + 0x388] */
  ecx = (uint32_t)(ebx + 0x388u);
/* 818e9c: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x818ea2u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 818ea2: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818ea5: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 818ea8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 818eab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 818eac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 818ead: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818eb1: call 0x6cb802 */
  esp -= 4; W32(esp, 0x818eb6u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 818eb6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 818eb8: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818eba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 818ebd: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818ebf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 818ec2: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818ec5: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818ec8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 818ecb: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818ece: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 818ed1: jmp 0x818f41 */
  goto L_818f41;
L_818ed3: /* 818ed3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 818ed6: mov ecx, esi */
  ecx = esi;
/* 818ed8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 818edb: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 818ede: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 818ee1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 818ee4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 818ee6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818ee9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818eec: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 818eee: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818ef1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818ef4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 818ef7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 818efa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 818efd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 818f00: jmp 0x818f41 */
  goto L_818f41;
L_818f02: /* 818f02: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 818f05: mov eax, esi */
  eax = esi;
/* 818f07: fchs  */
  ST0 = -ST0;
/* 818f09: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 818f0c: fchs  */
  ST0 = -ST0;
/* 818f0e: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 818f11: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 818f13: fchs  */
  ST0 = -ST0;
/* 818f15: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818f18: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 818f1b: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 818f1e: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 818f21: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 818f24: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 818f27: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 818f2a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 818f2d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 818f2f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 818f32: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 818f35: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 818f38: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 818f3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 818f3e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_818f41: /* 818f41: mov eax, dword ptr [ebx + 0x3b4] */
  eax = R32((uint32_t)(ebx + 0x3b4u));
/* 818f47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 818f49: jl 0x818fb9 */
  if ((sf != of)) goto L_818fb9;
L_818f4b: /* 818f4b: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 818f51: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 818f57: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 818f5a: mov ecx, dword ptr [eax + 0x40c] */
  ecx = R32((uint32_t)(eax + 0x40cu));
/* 818f60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 818f62: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 818f65: jle 0x818fb9 */
  if ((zf || sf != of)) goto L_818fb9;
L_818f67: /* 818f67: mov eax, dword ptr [ebx + 0x440] */
  eax = R32((uint32_t)(ebx + 0x440u));
/* 818f6d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 818f6e: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x818f6e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 818f70: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 818f73: mov ecx, dword ptr [eax + 0x3fc] */
  ecx = R32((uint32_t)(eax + 0x3fcu));
/* 818f79: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 818f7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 818f7d: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 818f83: lea edx, [edx + ecx + 0x18] */
  edx = (uint32_t)(edx + ecx + 0x18u);
/* 818f87: lea ecx, [ebx + 0x3b8] */
  ecx = (uint32_t)(ebx + 0x3b8u);
/* 818f8d: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 818f90: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x818f96u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 818f96: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 818f99: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 818f9c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 818f9f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 818fa2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 818fa5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 818fa7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 818fa9: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 818fab: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 818fad: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 818fb0: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 818fb3: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 818fb6: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_818fb9: /* 818fb9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818fbc: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 818fbf: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818fc2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 818fc5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 818fc8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 818fca: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 818fcc: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 818fce: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 818fd1: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 818fd4: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 818fd7: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 818fda: fld dword ptr [edi + 0xb4] */
  { double v = F32((uint32_t)(edi + 0xb4u)); FPUSH(v); }
/* 818fe0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 818fe6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 818fe8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 818feb: jnp 0x818fff */
  if (!pf) goto L_818fff;
L_818fed: /* 818fed: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 818ff3: fdiv dword ptr [edi + 0xb4] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0xb4u)));
/* 818ff9: fstp dword ptr [edi + 0xb4] */
  WF32((uint32_t)(edi + 0xb4u), ST0); FPOP();
L_818fff: /* 818fff: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 819002: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819003: lea ecx, [ebx + 0x248] */
  ecx = (uint32_t)(ebx + 0x248u);
/* 819009: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81900fu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81900f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 819011: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 819014: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 819016: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 819019: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81901c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81901f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 819022: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 819025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819026: lea ecx, [ebx + 0x230] */
  ecx = (uint32_t)(ebx + 0x230u);
/* 81902c: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x819032u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 819032: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 819034: lea esi, [edi + 0x30] */
  esi = (uint32_t)(edi + 0x30u);
/* 819037: mov edx, esi */
  edx = esi;
/* 819039: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81903b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81903e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 819041: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 819044: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 819047: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x81904du); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 81904d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 819050: fld dword ptr [ebx + 0x224] */
  { double v = F32((uint32_t)(ebx + 0x224u)); FPUSH(v); }
/* 819056: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 819059: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81905b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81905e: jne 0x81906a */
  if (!zf) goto L_81906a;
L_819060: /* 819060: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 819062: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 819068: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_81906a: /* 81906a: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819070u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819070: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 819073: fld dword ptr [ebx + 0x228] */
  { double v = F32((uint32_t)(ebx + 0x228u)); FPUSH(v); }
/* 819079: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 81907c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81907e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819081: jne 0x81908f */
  if (!zf) goto L_81908f;
L_819083: /* 819083: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 819086: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 81908c: fstp dword ptr [edi + 0x34] */
  WF32((uint32_t)(edi + 0x34u), ST0); FPOP();
L_81908f: /* 81908f: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819095u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819095: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 819098: fld dword ptr [ebx + 0x22c] */
  { double v = F32((uint32_t)(ebx + 0x22cu)); FPUSH(v); }
/* 81909e: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 8190a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8190a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8190a6: jne 0x8190b4 */
  if (!zf) goto L_8190b4;
L_8190a8: /* 8190a8: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 8190ab: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8190b1: fstp dword ptr [edi + 0x38] */
  WF32((uint32_t)(edi + 0x38u), ST0); FPOP();
L_8190b4: /* 8190b4: fld dword ptr [edi + 0x3c] */
  { double v = F32((uint32_t)(edi + 0x3cu)); FPUSH(v); }
/* 8190b7: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190bd: fstp dword ptr [edi + 0x3c] */
  WF32((uint32_t)(edi + 0x3cu), ST0); FPOP();
/* 8190c0: fld dword ptr [edi + 0x40] */
  { double v = F32((uint32_t)(edi + 0x40u)); FPUSH(v); }
/* 8190c3: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190c9: fstp dword ptr [edi + 0x40] */
  WF32((uint32_t)(edi + 0x40u), ST0); FPOP();
/* 8190cc: fld dword ptr [edi + 0x44] */
  { double v = F32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 8190cf: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190d5: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* 8190d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8190da: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190e0: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8190e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8190e5: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190eb: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 8190ee: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8190f1: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8190f7: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 8190fa: mov al, byte ptr [ebx + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x33cu))) & 0xffu);
/* 819100: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819102: je 0x819166 */
  if (zf) goto L_819166;
L_819104: /* 819104: mov eax, dword ptr [ebx + 0x338] */
  eax = R32((uint32_t)(ebx + 0x338u));
/* 81910a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81910c: je 0x819141 */
  if (zf) goto L_819141;
L_81910e: /* 81910e: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819114u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819114: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 819117: mov eax, dword ptr [ebx + 0x334] */
  eax = R32((uint32_t)(ebx + 0x334u));
/* 81911d: mov ecx, dword ptr [ebx + 0x338] */
  ecx = R32((uint32_t)(ebx + 0x338u));
/* 819123: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 819125: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 819128: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81912b: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 81912e: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 819131: fiadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x18u)));
/* 819134: call 0x99c958 */
  esp -= 4; W32(esp, 0x819139u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 819139: mov dword ptr [edi + 0xc0], eax */
  W32((uint32_t)(edi + 0xc0u), eax);
/* 81913f: jmp 0x819170 */
  goto L_819170;
L_819141: /* 819141: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x819147u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 819147: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 81914a: fild dword ptr [ebx + 0x320] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x320u)); FPUSH(v); }
/* 819150: fimul dword ptr [ebx + 0x31c] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebx + 0x31cu)));
/* 819156: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 819159: call 0x99c958 */
  esp -= 4; W32(esp, 0x81915eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81915e: mov dword ptr [edi + 0xc0], eax */
  W32((uint32_t)(edi + 0xc0u), eax);
/* 819164: jmp 0x819170 */
  goto L_819170;
L_819166: /* 819166: mov dword ptr [edi + 0xc0], 0xffffffff */
  W32((uint32_t)(edi + 0xc0u), 0xffffffffu);
L_819170: /* 819170: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819176: fcomp dword ptr [edi + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xb0u)));
  FPOP();
/* 81917c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81917e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819181: jne 0x8191d6 */
  if (!zf) goto L_8191d6;
L_819183: /* 819183: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819189: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81918f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819191: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 819194: jnp 0x8191d6 */
  if (!pf) goto L_8191d6;
L_819196: /* 819196: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 81919c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 81919e: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 8191a4: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8191a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8191a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8191aa: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8191b1: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8191b8: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8191bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8191c1: call 0x99cc5c */
  esp -= 4; W32(esp, 0x8191c6u); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 8191c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8191c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8191ca: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8191cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8191ce: mov ecx, ebx */
  ecx = ebx;
/* 8191d0: call dword ptr [esi + 0x80] */
  { uint32_t t = R32((uint32_t)(esi + 0x80u)); esp -= 4; W32(esp, 0x8191d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8191d6: /* 8191d6: mov al, byte ptr [ebx + 0x2e0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x2e0u))) & 0xffu);
/* 8191dc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8191de: je 0x819393 */
  if (zf) goto L_819393;
L_8191e4: /* 8191e4: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 8191ea: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8191f0: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8191f3: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 8191f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8191f8: je 0x819393 */
  if (zf) goto L_819393;
L_8191fe: /* 8191fe: mov ecx, dword ptr [ebx + 0x2d8] */
  ecx = R32((uint32_t)(ebx + 0x2d8u));
/* 819204: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819206: je 0x819393 */
  if (zf) goto L_819393;
L_81920c: /* 81920c: xor esi, esi */
  esi = 0;
/* 81920e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 819210: jbe 0x819241 */
  if ((cf | zf)) goto L_819241;
L_819212: /* 819212: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 819214: jbe 0x819232 */
  if ((cf | zf)) goto L_819232;
L_819216: /* 819216: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819218: jne 0x819241 */
  if (!zf) goto L_819241;
L_81921a: /* 81921a: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x819220u); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 819220: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 819223: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 819229: call 0x99c958 */
  esp -= 4; W32(esp, 0x81922eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81922e: mov esi, eax */
  esi = eax;
/* 819230: jmp 0x819241 */
  goto L_819241;
L_819232: /* 819232: mov esi, dword ptr [ebx + 0x464] */
  esi = R32((uint32_t)(ebx + 0x464u));
/* 819238: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 81923b: mov dword ptr [ebx + 0x464], eax */
  W32((uint32_t)(ebx + 0x464u), eax);
L_819241: /* 819241: lea ecx, [ebx + 0x2e4] */
  ecx = (uint32_t)(ebx + 0x2e4u);
/* 819247: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81924du); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81924d: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 819250: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819256: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819258: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81925b: jnp 0x819274 */
  if (!pf) goto L_819274;
L_81925d: /* 81925d: lea ecx, [ebx + 0x2e4] */
  ecx = (uint32_t)(ebx + 0x2e4u);
/* 819263: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x819269u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 819269: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 81926c: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 819272: jmp 0x819280 */
  goto L_819280;
L_819274: /* 819274: mov ecx, dword ptr [ebx + 0x2d8] */
  ecx = R32((uint32_t)(ebx + 0x2d8u));
/* 81927a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 81927d: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
L_819280: /* 819280: call 0x99c958 */
  esp -= 4; W32(esp, 0x819285u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 819285: mov ecx, eax */
  ecx = eax;
/* 819287: mov eax, esi */
  eax = esi;
/* 819289: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81928a: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x81928a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81928c: lea ecx, [ebx + 0x2e4] */
  ecx = (uint32_t)(ebx + 0x2e4u);
/* 819292: mov esi, edx */
  esi = edx;
/* 819294: call dword ptr [0xcfaae0] */
  esp -= 4; W32(esp, 0x81929au); SPILL(); f_4e4089(); if (g_unwind) return; /* Core!?GetMin@FRange@@QBEMXZ */ RELOAD();
/* 81929a: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 81929d: call 0x99c958 */
  esp -= 4; W32(esp, 0x8192a2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8192a2: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 8192a4: mov eax, dword ptr [ebx + 0x2d8] */
  eax = R32((uint32_t)(ebx + 0x2d8u));
/* 8192aa: lea eax, [eax - 1] */
  eax = (uint32_t)(eax + 0xffffffffu);
/* 8192ad: jns 0x8192b3 */
  if (!sf) goto L_8192b3;
L_8192af: /* 8192af: xor esi, esi */
  esi = 0;
/* 8192b1: jmp 0x8192b9 */
  goto L_8192b9;
L_8192b3: /* 8192b3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8192b5: jl 0x8192b9 */
  if ((sf != of)) goto L_8192b9;
L_8192b7: /* 8192b7: mov esi, eax */
  esi = eax;
L_8192b9: /* 8192b9: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* 8192bf: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* 8192c2: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8192c5: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8192c7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8192ca: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8192d0u); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8192d0: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8192d3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8192d6: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8192d9: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8192dfu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8192df: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8192e2: lea ecx, [ebx + 0x2ec] */
  ecx = (uint32_t)(ebx + 0x2ecu);
/* 8192e8: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8192eeu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8192ee: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 8192f1: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8192f4: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8192f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8192f9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8192fc: jne 0x819393 */
  if (!zf) goto L_819393;
L_819302: /* 819302: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 819308: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 81930e: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 819311: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 819314: mov edx, dword ptr [ebx + 0x2d4] */
  edx = R32((uint32_t)(ebx + 0x2d4u));
/* 81931a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81931c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 81931f: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 819322: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* 819325: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81932bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81932b: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 81932e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 819331: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x819337u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 819337: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 81933a: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 81933d: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x819343u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 819343: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 819346: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 819349: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 81934c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81934e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 819351: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 819357: fmul dword ptr [eax + 0x2cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2ccu)));
/* 81935d: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 81935f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819363: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 819365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819366: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 819369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81936a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81936d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 819371: mov ecx, esp */
  ecx = esp;
/* 819373: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 819375: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 819378: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 81937b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 81937e: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 819381: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 819384: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 819386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819387: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 81938a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81938c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81938d: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819393u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_819393: /* 819393: mov eax, dword ptr [ebx + 0x43c] */
  eax = R32((uint32_t)(ebx + 0x43cu));
/* 819399: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81939c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81939d: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8193a0: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 8193a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8193a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8193ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8193af: mov esp, ebp */
  esp = ebp;
/* 8193b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8193b2: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8193b5(void) {
  LOAD_REGS();
L_8193b5: /* 8193b5: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8193b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8193bd: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 8193c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8193c1: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 8193c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8193c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8193c9(); return;
}

void f_8193c9(void) {
  LOAD_REGS();
L_8193c9: /* 8193c9: push 0xa146d8 */
  { uint32_t v = 0xa146d8u; esp -= 4; W32(esp, v); }
/* 8193ce: push 0xae2714 */
  { uint32_t v = 0xae2714u; esp -= 4; W32(esp, v); }
/* 8193d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8193d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8193d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8193dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8193de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8193e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8193e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8193e5: guest_badaddr(0x8193e5); return;
}

void f_819800(void) {
  LOAD_REGS();
L_819800: /* 819800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 819801: mov ebp, esp */
  ebp = esp;
/* 819803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 819805: push 0x9d2db0 */
  { uint32_t v = 0x9d2db0u; esp -= 4; W32(esp, v); }
/* 81980a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 819810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 819818: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81981b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81981e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81981f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819825: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 819826: xor ebx, ebx */
  ebx = 0;
/* 819828: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 819829: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81982c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81982e: mov esi, ecx */
  esi = ecx;
/* 819830: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 819833: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 819836: jnp 0x81996c */
  if (!pf) goto L_81996c;
L_81983c: /* 81983c: cmp dword ptr [esi + 0x3f0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3f0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819842: je 0x81996c */
  if (zf) goto L_81996c;
L_819848: /* 819848: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81984b: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 81984e: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 819851: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 819854: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 819857: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819858: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x81985eu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 81985e: mov edi, eax */
  edi = eax;
/* 819860: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 819863: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 819866: mov eax, dword ptr [esi + 0x45c] */
  eax = R32((uint32_t)(esi + 0x45cu));
/* 81986c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81986f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819871: fsubr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) - ST0;
/* 819874: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 819877: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81987d: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 819880: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 819883: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819886: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 819889: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 81988c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81988f: jge 0x819895 */
  if ((sf == of)) goto L_819895;
L_819891: /* 819891: xor edi, edi */
  edi = 0;
/* 819893: jmp 0x81989b */
  goto L_81989b;
L_819895: /* 819895: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819897: jl 0x81989b */
  if ((sf != of)) goto L_81989b;
L_819899: /* 819899: mov edi, eax */
  edi = eax;
L_81989b: /* 81989b: mov eax, dword ptr [esi + 0x490] */
  eax = R32((uint32_t)(esi + 0x490u));
/* 8198a1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8198a3: je 0x8198bb */
  if (zf) goto L_8198bb;
L_8198a5: /* 8198a5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8198a7: jge 0x8198ad */
  if ((sf == of)) goto L_8198ad;
L_8198a9: /* 8198a9: xor edi, edi */
  edi = 0;
/* 8198ab: jmp 0x8198b3 */
  goto L_8198b3;
L_8198ad: /* 8198ad: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8198af: jl 0x8198b3 */
  if ((sf != of)) goto L_8198b3;
L_8198b1: /* 8198b1: mov edi, eax */
  edi = eax;
L_8198b3: /* 8198b3: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8198b5: mov dword ptr [esi + 0x490], eax */
  W32((uint32_t)(esi + 0x490u), eax);
L_8198bb: /* 8198bb: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8198bd: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 8198c0: jge 0x819926 */
  if ((sf == of)) goto L_819926;
L_8198c2: /* 8198c2: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8198c5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8198c7: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8198ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8198cb: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 8198ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8198d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8198d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8198d3: fsubr dword ptr [ebp + 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0x10u))) - ST0;
/* 8198d6: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 8198dc: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8198e3: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8198ea: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8198ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8198ee: mov ecx, esi */
  ecx = esi;
/* 8198f0: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8198f7: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8198fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8198fd: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 819903: mov ecx, dword ptr [esi + 0x40c] */
  ecx = R32((uint32_t)(esi + 0x40cu));
/* 819909: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81990a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81990c: jge 0x819910 */
  if ((sf == of)) goto L_819910;
L_81990e: /* 81990e: mov ecx, eax */
  ecx = eax;
L_819910: /* 819910: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 819911: idiv dword ptr [esi + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x819911);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 819917: mov dword ptr [esi + 0x40c], ecx */
  W32((uint32_t)(esi + 0x40cu), ecx);
/* 81991d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81991e: mov dword ptr [esi + 0x408], edx */
  W32((uint32_t)(esi + 0x408u), edx);
/* 819924: jmp 0x8198bb */
  goto L_8198bb;
L_819926: /* 819926: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 819929: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81992c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 819933: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 819934: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 819935: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 819936: mov esp, ebp */
  esp = ebp;
/* 819938: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 819939: ret 0xc */
  esp += 16; SPILL(); return;
L_81996c: /* 81996c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81996f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 819975: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 819976: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 819977: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81997e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81997f: mov esp, ebp */
  esp = ebp;
/* 819981: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 819982: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_81993c(void) {
  LOAD_REGS();
L_81993c: /* 81993c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81993f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 819944: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 819947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819948: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81994b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x819950u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_819950(); return;
}

void f_819950(void) {
  LOAD_REGS();
L_819950: /* 819950: push 0xa14758 */
  { uint32_t v = 0xa14758u; esp -= 4; W32(esp, v); }
/* 819955: push 0xae271c */
  { uint32_t v = 0xae271cu; esp -= 4; W32(esp, v); }
/* 81995a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x819960u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 819960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 819963: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819967: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81996cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81996c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81996f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 819975: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 819976: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 819977: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81997e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81997f: mov esp, ebp */
  esp = ebp;
/* 819981: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 819982: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_819a00(void) {
  LOAD_REGS();
L_819a00: /* 819a00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 819a04: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 819a08: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 819a0a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 819a0c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 819a0f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 819a12: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 819a15: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 819a18: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 819a1a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 819a1c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 819a1e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 819a20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 819a22: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 819a24: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 819a26: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 819a28: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 819a2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 819a2c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 819a2e: ret  */
  esp += 4; SPILL(); return;
}

void f_819a40(void) {
  LOAD_REGS();
L_819a40: /* 819a40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 819a41: mov ebp, esp */
  ebp = esp;
/* 819a43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 819a45: push 0x9d2dc0 */
  { uint32_t v = 0x9d2dc0u; esp -= 4; W32(esp, v); }
/* 819a4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 819a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819a51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 819a58: sub esp, 0x370 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 819a5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 819a5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 819a60: mov esi, ecx */
  esi = ecx;
/* 819a62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 819a63: lea ecx, [esi + 0x414] */
  ecx = (uint32_t)(esi + 0x414u);
/* 819a69: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 819a6c: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x819a72u); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 819a72: mov ecx, dword ptr [esi + 0x3f0] */
  ecx = R32((uint32_t)(esi + 0x3f0u));
/* 819a78: xor edi, edi */
  edi = 0;
/* 819a7a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819a7c: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 819a7f: je 0x81b54f */
  if (zf) goto L_81b54f;
L_819a85: /* 819a85: mov eax, dword ptr [esi + 0x140] */
  eax = R32((uint32_t)(esi + 0x140u));
/* 819a8b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819a8d: jl 0x819aa2 */
  if ((sf != of)) goto L_819aa2;
L_819a8f: /* 819a8f: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 819a95: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 819a96: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819a98: jl 0x819a9c */
  if ((sf != of)) goto L_819a9c;
L_819a9a: /* 819a9a: mov eax, edx */
  eax = edx;
L_819a9c: /* 819a9c: mov dword ptr [esi + 0x140], eax */
  W32((uint32_t)(esi + 0x140u), eax);
L_819aa2: /* 819aa2: mov eax, dword ptr [esi + 0x3b4] */
  eax = R32((uint32_t)(esi + 0x3b4u));
/* 819aa8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819aaa: jl 0x819abf */
  if ((sf != of)) goto L_819abf;
L_819aac: /* 819aac: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 819ab2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 819ab3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819ab5: jl 0x819ab9 */
  if ((sf != of)) goto L_819ab9;
L_819ab7: /* 819ab7: mov eax, edx */
  eax = edx;
L_819ab9: /* 819ab9: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
L_819abf: /* 819abf: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 819ac2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819ac4: jl 0x819ad6 */
  if ((sf != of)) goto L_819ad6;
L_819ac6: /* 819ac6: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* 819acc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 819acd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819acf: jl 0x819ad3 */
  if ((sf != of)) goto L_819ad3;
L_819ad1: /* 819ad1: mov eax, ecx */
  eax = ecx;
L_819ad3: /* 819ad3: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
L_819ad6: /* 819ad6: cmp dword ptr [esi + 0x2bc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2bcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819adc: mov dword ptr [ebp - 0xb8], edi */
  W32((uint32_t)(ebp + 0xffffff48u), edi);
/* 819ae2: je 0x819b4e */
  if (zf) goto L_819b4e;
L_819ae4: /* 819ae4: mov al, byte ptr [esi + 0x2b8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2b8u))) & 0xffu);
/* 819aea: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819aec: je 0x819b4e */
  if (zf) goto L_819b4e;
L_819aee: /* 819aee: mov eax, dword ptr [esi + 0x2bc] */
  eax = R32((uint32_t)(esi + 0x2bcu));
/* 819af4: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 819afa: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819afd: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 819b00: jne 0x819b4e */
  if (!zf) goto L_819b4e;
L_819b02: /* 819b02: mov eax, dword ptr [eax + 0xd0] */
  eax = R32((uint32_t)(eax + 0xd0u));
/* 819b08: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819b0a: je 0x819b4e */
  if (zf) goto L_819b4e;
L_819b0c: /* 819b0c: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 819b11: mov ecx, eax */
  ecx = eax;
/* 819b13: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x819b19u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 819b19: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819b1b: je 0x819b4e */
  if (zf) goto L_819b4e;
L_819b1d: /* 819b1d: mov eax, dword ptr [esi + 0x2bc] */
  eax = R32((uint32_t)(esi + 0x2bcu));
/* 819b23: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 819b29: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 819b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819b2c: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x819b32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819b32: mov edx, dword ptr [esi + 0x2bc] */
  edx = R32((uint32_t)(esi + 0x2bcu));
/* 819b38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 819b39: lea ecx, [esi + 0x484] */
  ecx = (uint32_t)(esi + 0x484u);
/* 819b3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819b40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 819b41: mov ecx, eax */
  ecx = eax;
/* 819b43: call 0x6c894f */
  esp -= 4; W32(esp, 0x819b48u); SPILL(); f_6c894f(); if (g_unwind) return; RELOAD();
/* 819b48: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
L_819b4e: /* 819b4e: mov eax, dword ptr [esi + 0x45c] */
  eax = R32((uint32_t)(esi + 0x45cu));
/* 819b54: cmp dword ptr [esi + 0x40c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819b5a: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 819b61: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 819b64: jge 0x819bca */
  if ((sf == of)) goto L_819bca;
L_819b66: /* 819b66: test byte ptr [esi + 0x310], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x310u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819b6d: je 0x819bbf */
  if (zf) goto L_819bbf;
L_819b6f: /* 819b6f: fild dword ptr [ebp - 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 819b72: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 819b78: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 819b7b: call dword ptr [0xcfaaf4] */
  esp -= 4; W32(esp, 0x819b81u); SPILL(); f_4e1532(); if (g_unwind) return; /* Core!?GetCenter@FRange@@QBEMXZ */ RELOAD();
/* 819b81: fdivr dword ptr [ebp - 0x38] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc8u))) / ST0;
/* 819b84: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 819b87: jmp 0x819bd3 */
  goto L_819bd3;
L_819bbf: /* 819bbf: mov edx, dword ptr [esi + 0x30c] */
  edx = R32((uint32_t)(esi + 0x30cu));
/* 819bc5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 819bc8: jmp 0x819bd3 */
  goto L_819bd3;
L_819bca: /* 819bca: mov eax, dword ptr [esi + 0x308] */
  eax = R32((uint32_t)(esi + 0x308u));
/* 819bd0: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_819bd3: /* 819bd3: cmp dword ptr [esi + 0x490], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x490u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819bd9: je 0x819be7 */
  if (zf) goto L_819be7;
L_819bdb: /* 819bdb: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 819bde: fadd dword ptr [esi + 0x36c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x36cu)));
/* 819be4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
L_819be7: /* 819be7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 819bea: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819bf0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819bf2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819bf5: jne 0x819c1f */
  if (!zf) goto L_819c1f;
L_819bf7: /* 819bf7: cmp dword ptr [esi + 0x470], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x470u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819bfd: jne 0x819cbf */
  if (!zf) goto L_819cbf;
L_819c03: /* 819c03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 819c06: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 819c09: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819c0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819c0c: mov eax, dword ptr [esi + 0x410] */
  eax = R32((uint32_t)(esi + 0x410u));
/* 819c12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819c14: mov ecx, esi */
  ecx = esi;
/* 819c16: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x819c19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819c19: fstp dword ptr [esi + 0x410] */
  WF32((uint32_t)(esi + 0x410u), ST0); FPOP();
L_819c1f: /* 819c1f: cmp dword ptr [esi + 0x470], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x470u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819c25: jne 0x819cbf */
  if (!zf) goto L_819cbf;
L_819c2b: /* 819c2b: mov eax, dword ptr [esi + 0x474] */
  eax = R32((uint32_t)(esi + 0x474u));
/* 819c31: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c33: mov ecx, dword ptr [esi + 0x45c] */
  ecx = R32((uint32_t)(esi + 0x45cu));
/* 819c39: jge 0x819c3f */
  if ((sf == of)) goto L_819c3f;
L_819c3b: /* 819c3b: xor eax, eax */
  eax = 0;
/* 819c3d: jmp 0x819c45 */
  goto L_819c45;
L_819c3f: /* 819c3f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c41: jl 0x819c45 */
  if ((sf != of)) goto L_819c45;
L_819c43: /* 819c43: mov eax, ecx */
  eax = ecx;
L_819c45: /* 819c45: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c47: jle 0x819cb5 */
  if ((zf || sf != of)) goto L_819cb5;
L_819c49: /* 819c49: mov edi, eax */
  edi = eax;
/* 819c4b: jmp 0x819c50 */
  goto L_819c50;
L_819c50: /* 819c50: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 819c56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819c58: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 819c5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819c5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819c66: mov ecx, esi */
  ecx = esi;
/* 819c68: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 819c72: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 819c7c: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 819c86: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819c8c: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 819c92: mov ecx, dword ptr [esi + 0x40c] */
  ecx = R32((uint32_t)(esi + 0x40cu));
/* 819c98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819c99: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c9b: jge 0x819c9f */
  if ((sf == of)) goto L_819c9f;
L_819c9d: /* 819c9d: mov ecx, eax */
  ecx = eax;
L_819c9f: /* 819c9f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 819ca0: idiv dword ptr [esi + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x819ca0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 819ca6: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 819ca7: mov dword ptr [esi + 0x40c], ecx */
  W32((uint32_t)(esi + 0x40cu), ecx);
/* 819cad: mov dword ptr [esi + 0x408], edx */
  W32((uint32_t)(esi + 0x408u), edx);
/* 819cb3: jne 0x819c50 */
  if (!zf) goto L_819c50;
L_819cb5: /* 819cb5: mov dword ptr [esi + 0x474], 0 */
  W32((uint32_t)(esi + 0x474u), 0x0u);
L_819cbf: /* 819cbf: xor edi, edi */
  edi = 0;
L_819cc1: /* 819cc1: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 819cc7: mov ecx, dword ptr [esi + 0x45c] */
  ecx = R32((uint32_t)(esi + 0x45cu));
/* 819ccd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819ccf: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 819cd2: jg 0x819cd6 */
  if ((!zf && sf == of)) goto L_819cd6;
L_819cd4: /* 819cd4: mov eax, ecx */
  eax = ecx;
L_819cd6: /* 819cd6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819cd8: jge 0x81b496 */
  if ((sf == of)) goto L_81b496;
L_819cde: /* 819cde: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 819ce4: imul edi, edi, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xc8u);
  edi = (uint32_t)r;
  }
/* 819cea: mov eax, dword ptr [edi + edx + 0xbc] */
  eax = R32((uint32_t)(edi + edx + 0xbcu));
/* 819cf1: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 819cf3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819cf5: jne 0x819d04 */
  if (!zf) goto L_819d04;
L_819cf7: /* 819cf7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 819cfa: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 819cfd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819cfe: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 819d01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 819d02: jmp 0x819cc1 */
  goto L_819cc1;
L_819d04: /* 819d04: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d06: je 0x819d15 */
  if (zf) goto L_819d15;
L_819d08: /* 819d08: cmp byte ptr [esi + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819d0f: je 0x819d15 */
  if (zf) goto L_819d15;
L_819d11: /* 819d11: xor ebx, ebx */
  ebx = 0;
/* 819d13: jmp 0x819d1a */
  goto L_819d1a;
L_819d15: /* 819d15: mov ebx, 1 */
  ebx = 0x1u;
L_819d1a: /* 819d1a: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d1c: je 0x819d2b */
  if (zf) goto L_819d2b;
L_819d1e: /* 819d1e: xor ebx, ebx */
  ebx = 0;
/* 819d20: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 819d23: mov dword ptr [edi + 0xbc], eax */
  W32((uint32_t)(edi + 0xbcu), eax);
/* 819d29: jmp 0x819d3a */
  goto L_819d3a;
L_819d2b: /* 819d2b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819d2e: fadd dword ptr [edi + 0xac] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xacu)));
/* 819d34: fstp dword ptr [edi + 0xac] */
  WF32((uint32_t)(edi + 0xacu), ST0); FPOP();
L_819d3a: /* 819d3a: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819d40: fcomp dword ptr [edi + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xb0u)));
  FPOP();
/* 819d46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819d48: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d4b: jne 0x819e03 */
  if (!zf) goto L_819e03;
L_819d51: /* 819d51: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d58: jne 0x819d79 */
  if (!zf) goto L_819d79;
L_819d5a: /* 819d5a: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 819d60: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 819d63: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 819d66: mov dword ptr [edi + 0xbc], ecx */
  W32((uint32_t)(edi + 0xbcu), ecx);
/* 819d6c: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 819d6f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819d70: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 819d73: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 819d74: jmp 0x819cc1 */
  goto L_819cc1;
L_819d79: /* 819d79: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 819d7f: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x819d85u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 819d85: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819d8b: fsub dword ptr [edi + 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xb0u)));
/* 819d91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 819d93: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819d96: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819d9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819da2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819da4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 819da7: jnp 0x819dbc */
  if (!pf) goto L_819dbc;
L_819da9: /* 819da9: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 819dac: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819db2: call 0x99cc5c */
  esp -= 4; W32(esp, 0x819db7u); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 819db7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819dba: jmp 0x819dc3 */
  goto L_819dc3;
L_819dbc: /* 819dbc: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_819dc3: /* 819dc3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 819dc6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819dc8: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 819dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819dcf: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 819dd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819dd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819dd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819dd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819dd8: mov ecx, esi */
  ecx = esi;
/* 819dda: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 819de4: mov dword ptr [ebp - 0x15c], 0 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x0u);
/* 819dee: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 819df8: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819dfe: jmp 0x81a120 */
  goto L_81a120;
L_819e03: /* 819e03: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819e05: je 0x81a120 */
  if (zf) goto L_81a120;
L_819e0b: /* 819e0b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e0e: mov edx, edi */
  edx = edi;
/* 819e10: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 819e13: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 819e16: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e19: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 819e1c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e1f: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 819e22: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 819e28: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e2a: fadd dword ptr [edi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x18u)));
/* 819e2d: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 819e30: fadd dword ptr [edi + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x1cu)));
/* 819e33: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 819e36: fld dword ptr [ebp - 0x20c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdf4u)); FPUSH(v); }
/* 819e3c: fadd dword ptr [edi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x20u)));
/* 819e3f: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
/* 819e42: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 819e44: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 819e46: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 819e49: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 819e4c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 819e4f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 819e52: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 819e55: fmul dword ptr [edi + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x90u)));
/* 819e5b: fld dword ptr [edi + 0x94] */
  { double v = F32((uint32_t)(edi + 0x94u)); FPUSH(v); }
/* 819e61: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 819e64: fld dword ptr [edi + 0x98] */
  { double v = F32((uint32_t)(edi + 0x98u)); FPUSH(v); }
/* 819e6a: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 819e6d: fstp dword ptr [ebp - 0x2a8] */
  WF32((uint32_t)(ebp + 0xfffffd58u), ST0); FPOP();
/* 819e73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e75: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e78: fstp dword ptr [ebp - 0x298] */
  WF32((uint32_t)(ebp + 0xfffffd68u), ST0); FPOP();
/* 819e7e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e81: fld dword ptr [ebp - 0x2a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffd58u)); FPUSH(v); }
/* 819e87: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e8a: fld dword ptr [ebp - 0x298] */
  { double v = F32((uint32_t)(ebp + 0xfffffd68u)); FPUSH(v); }
/* 819e90: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 819e92: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 819e95: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 819e98: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e9a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 819e9c: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 819e9f: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 819ea5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819ea7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 819eaa: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 819ead: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 819eb0: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 819eb3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819eb6: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 819eb9: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 819ebc: je 0x819f79 */
  if (zf) goto L_819f79;
L_819ec2: /* 819ec2: cmp byte ptr [esi + 0x2b8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2b8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819ec9: jne 0x819f79 */
  if (!zf) goto L_819f79;
L_819ecf: /* 819ecf: mov ecx, dword ptr [esi + 0x484] */
  ecx = R32((uint32_t)(esi + 0x484u));
/* 819ed5: fld dword ptr [esi + 0x2c0] */
  { double v = F32((uint32_t)(esi + 0x2c0u)); FPUSH(v); }
/* 819edb: mov eax, dword ptr [edi + 0xc4] */
  eax = R32((uint32_t)(edi + 0xc4u));
/* 819ee1: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 819ee4: fmul dword ptr [ecx + eax*8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*8)));
/* 819ee7: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 819eea: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 819ef0: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 819ef6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 819ef9: fmul dword ptr [esi + 0x2c4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2c4u)));
/* 819eff: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 819f05: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 819f08: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 819f0e: fmul dword ptr [esi + 0x2c8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2c8u)));
/* 819f14: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 819f1a: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 819f20: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 819f26: fsub dword ptr [edi + 0x9c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x9cu)));
/* 819f2c: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 819f32: fsub dword ptr [edi + 0xa0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xa0u)));
/* 819f38: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 819f3e: fsub dword ptr [edi + 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xa4u)));
/* 819f44: mov dword ptr [edi + 0x9c], edx */
  W32((uint32_t)(edi + 0x9cu), edx);
/* 819f4a: mov dword ptr [edi + 0xa0], eax */
  W32((uint32_t)(edi + 0xa0u), eax);
/* 819f50: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 819f56: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819f58: mov dword ptr [edi + 0xa4], ecx */
  W32((uint32_t)(edi + 0xa4u), ecx);
/* 819f5e: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 819f61: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 819f63: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 819f66: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 819f68: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 819f6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 819f6d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 819f70: fadd dword ptr [ebp - 0x200] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe00u)));
/* 819f76: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_819f79: /* 819f79: test byte ptr [esi + 0x1c8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1c8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819f80: je 0x81a120 */
  if (zf) goto L_81a120;
L_819f86: /* 819f86: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 819f88: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 819f8b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 819f8d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 819f90: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 819f93: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 819f99: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 819f9f: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 819fa5: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 819fab: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 819fae: lea eax, [ebp - 0x1cc] */
  eax = (uint32_t)(ebp + 0xfffffe34u);
/* 819fb4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 819fb7: mov dword ptr [ebp - 0x1cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe34u), 0x3f800000u);
/* 819fc1: fsub dword ptr [ebp - 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff50u)));
/* 819fc7: mov dword ptr [ebp - 0x1c8], 0 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x0u);
/* 819fd1: mov dword ptr [ebp - 0x1c4], 0 */
  W32((uint32_t)(ebp + 0xfffffe3cu), 0x0u);
/* 819fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819fdc: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 819fdf: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 819fe2: fsub dword ptr [ebp - 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff54u)));
/* 819fe8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 819feb: fld dword ptr [edi + 0x60] */
  { double v = F32((uint32_t)(edi + 0x60u)); FPUSH(v); }
/* 819fee: fmul dword ptr [edi + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x54u)));
/* 819ff1: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819ff4: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 819ffa: call 0x99c958 */
  esp -= 4; W32(esp, 0x819fffu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 819fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a000: lea ecx, [ebp - 0x328] */
  ecx = (uint32_t)(ebp + 0xfffffcd8u);
/* 81a006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a007: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a00a: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a010u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a010: fld dword ptr [edi + 0x64] */
  { double v = F32((uint32_t)(edi + 0x64u)); FPUSH(v); }
/* 81a013: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a015: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 81a018: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a01b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a01e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81a021: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a024: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a027: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 81a02d: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 81a033: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a036: mov dword ptr [ebp - 0x1d8], 0 */
  W32((uint32_t)(ebp + 0xfffffe28u), 0x0u);
/* 81a040: mov dword ptr [ebp - 0x1d4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe2cu), 0x3f800000u);
/* 81a04a: mov dword ptr [ebp - 0x1d0], 0 */
  W32((uint32_t)(ebp + 0xfffffe30u), 0x0u);
/* 81a054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a055: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a05au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a05b: lea ecx, [ebp - 0x2bc] */
  ecx = (uint32_t)(ebp + 0xfffffd44u);
/* 81a061: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a062: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a065: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a06bu); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a06b: fld dword ptr [edi + 0x68] */
  { double v = F32((uint32_t)(edi + 0x68u)); FPUSH(v); }
/* 81a06e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a070: fmul dword ptr [edi + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5cu)));
/* 81a073: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a076: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a079: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81a07c: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a07f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a082: lea eax, [ebp - 0x184] */
  eax = (uint32_t)(ebp + 0xfffffe7cu);
/* 81a088: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 81a08e: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a091: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 81a09b: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 81a0a5: mov dword ptr [ebp - 0x17c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x3f800000u);
/* 81a0af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a0b0: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a0b5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a0b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a0b6: lea ecx, [ebp - 0x340] */
  ecx = (uint32_t)(ebp + 0xfffffcc0u);
/* 81a0bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a0bd: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a0c0: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a0c6u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a0c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a0c8: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a0cb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a0ce: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a0d1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a0d4: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a0d7: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 81a0da: mov eax, edi */
  eax = edi;
/* 81a0dc: fadd dword ptr [ebp - 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 81a0e2: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 81a0e8: mov ecx, dword ptr [ebp - 0x13c] */
  ecx = R32((uint32_t)(ebp + 0xfffffec4u));
/* 81a0ee: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 81a0f1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81a0f3: fadd dword ptr [ebp - 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff50u)));
/* 81a0f9: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 81a0ff: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 81a102: mov edx, dword ptr [ebp - 0x138] */
  edx = R32((uint32_t)(ebp + 0xfffffec8u));
/* 81a108: fadd dword ptr [ebp - 0xac] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff54u)));
/* 81a10e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81a111: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 81a117: mov ecx, dword ptr [ebp - 0x134] */
  ecx = R32((uint32_t)(ebp + 0xfffffeccu));
/* 81a11d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_81a120: /* 81a120: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a122: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81a129: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 81a130: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 81a137: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 81a13e: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 81a145: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 81a14c: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 81a153: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a159: /* 81a159: cmp byte ptr [esi + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81a160: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a166: /* 81a166: test byte ptr [esi + 0x34], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a16a: je 0x81a30a */
  if (zf) goto L_81a30a;
L_81a170: /* 81a170: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 81a172: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 81a175: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 81a177: lea edx, [ebp - 0x2d4] */
  edx = (uint32_t)(ebp + 0xfffffd2cu);
/* 81a17d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a17e: lea ecx, [ebp - 0x1b4] */
  ecx = (uint32_t)(ebp + 0xfffffe4cu);
/* 81a184: fstp dword ptr [ebp - 0x1b4] */
  WF32((uint32_t)(ebp + 0xfffffe4cu), ST0); FPOP();
/* 81a18a: mov dword ptr [ebp - 0x260], 0 */
  W32((uint32_t)(ebp + 0xfffffda0u), 0x0u);
/* 81a194: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 81a197: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 81a19a: fstp dword ptr [ebp - 0x1b0] */
  WF32((uint32_t)(ebp + 0xfffffe50u), ST0); FPOP();
/* 81a1a0: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 81a1a3: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 81a1a6: fstp dword ptr [ebp - 0x1ac] */
  WF32((uint32_t)(ebp + 0xfffffe54u), ST0); FPOP();
/* 81a1ac: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x81a1b2u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 81a1b2: fld dword ptr [esi + 0x430] */
  { double v = F32((uint32_t)(esi + 0x430u)); FPUSH(v); }
/* 81a1b8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81a1ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81a1bd: fld dword ptr [esi + 0x434] */
  { double v = F32((uint32_t)(esi + 0x434u)); FPUSH(v); }
/* 81a1c3: mov dword ptr [ebp - 0x154], 0 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x0u);
/* 81a1cd: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 81a1d0: mov ecx, dword ptr [ebp - 0x154] */
  ecx = R32((uint32_t)(ebp + 0xfffffeacu));
/* 81a1d6: fld dword ptr [esi + 0x438] */
  { double v = F32((uint32_t)(esi + 0x438u)); FPUSH(v); }
/* 81a1dc: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 81a1e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 81a1e9: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 81a1ef: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 81a1f5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a1f8: fstp dword ptr [ebp - 0x248] */
  WF32((uint32_t)(ebp + 0xfffffdb8u), ST0); FPOP();
/* 81a1fe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a200: mov dword ptr [ebp - 0x14c], 0 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x0u);
/* 81a20a: fmul dword ptr [edi + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x6cu)));
/* 81a20d: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 81a213: fmul dword ptr [edi + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x70u)));
/* 81a216: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 81a21c: fld dword ptr [ebp - 0x248] */
  { double v = F32((uint32_t)(ebp + 0xfffffdb8u)); FPUSH(v); }
/* 81a222: fmul dword ptr [edi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x74u)));
/* 81a225: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 81a22b: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 81a231: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 81a233: fstp dword ptr [ebp - 0x19c] */
  WF32((uint32_t)(ebp + 0xfffffe64u), ST0); FPOP();
/* 81a239: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 81a23f: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 81a242: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 81a248: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 81a24e: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 81a251: fstp dword ptr [ebp - 0x194] */
  WF32((uint32_t)(ebp + 0xfffffe6cu), ST0); FPOP();
/* 81a257: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a259: mov eax, esp */
  eax = esp;
/* 81a25b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81a25d: mov ecx, dword ptr [ebp - 0x150] */
  ecx = R32((uint32_t)(ebp + 0xfffffeb0u));
/* 81a263: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 81a266: mov ecx, dword ptr [ebp - 0x14c] */
  ecx = R32((uint32_t)(ebp + 0xfffffeb4u));
/* 81a26c: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 81a271: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81a274: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81a275: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 81a27b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a27c: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 81a282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a283: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 81a289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a28a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a28d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81a293u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a295: jne 0x81a30a */
  if (!zf) goto L_81a30a;
L_81a297: /* 81a297: fld dword ptr [ebp - 0x284] */
  { double v = F32((uint32_t)(ebp + 0xfffffd7cu)); FPUSH(v); }
/* 81a29d: mov edx, dword ptr [ebp - 0x278] */
  edx = R32((uint32_t)(ebp + 0xfffffd88u));
/* 81a2a3: fsub dword ptr [ebp - 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff38u)));
/* 81a2a9: mov eax, dword ptr [ebp - 0x274] */
  eax = R32((uint32_t)(ebp + 0xfffffd8cu));
/* 81a2af: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 81a2b5: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 81a2b8: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 81a2be: mov edx, dword ptr [ebp - 0x148] */
  edx = R32((uint32_t)(ebp + 0xfffffeb8u));
/* 81a2c4: fld dword ptr [ebp - 0x280] */
  { double v = F32((uint32_t)(ebp + 0xfffffd80u)); FPUSH(v); }
/* 81a2ca: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 81a2cd: fsub dword ptr [ebp - 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff3cu)));
/* 81a2d3: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 81a2d6: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 81a2d9: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 81a2e0: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 81a2e6: fld dword ptr [ebp - 0x27c] */
  { double v = F32((uint32_t)(ebp + 0xfffffd84u)); FPUSH(v); }
/* 81a2ec: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 81a2f2: fsub dword ptr [ebp - 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff40u)));
/* 81a2f8: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 81a2fb: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 81a301: mov ecx, dword ptr [ebp - 0x140] */
  ecx = R32((uint32_t)(ebp + 0xfffffec0u));
/* 81a307: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
L_81a30a: /* 81a30a: test byte ptr [esi + 0x5c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x5cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a30e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81a311: je 0x81a426 */
  if (zf) goto L_81a426;
L_81a317: /* 81a317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a319: jne 0x81a42e */
  if (!zf) goto L_81a42e;
L_81a31f: /* 81a31f: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 81a322: xor edx, edx */
  edx = 0;
/* 81a324: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a326: jle 0x81a8e5 */
  if ((zf || sf != of)) goto L_81a8e5;
L_81a32c: /* 81a32c: mov ebx, dword ptr [esi + 0x60] */
  ebx = R32((uint32_t)(esi + 0x60u));
/* 81a32f: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
L_81a332: /* 81a332: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a335: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 81a338: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 81a33b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 81a33e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a340: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 81a342: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 81a344: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a346: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 81a349: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a34f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a351: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a354: jne 0x81a361 */
  if (!zf) goto L_81a361;
L_81a356: /* 81a356: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a358: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 81a35f: jmp 0x81a37c */
  goto L_81a37c;
L_81a361: /* 81a361: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a367: mov dword ptr [ebp - 0x24], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xffffffffu);
/* 81a36e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a370: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a373: jnp 0x81a37c */
  if (!pf) goto L_81a37c;
L_81a375: /* 81a375: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_81a37c: /* 81a37c: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81a37e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 81a380: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 81a383: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 81a386: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a388: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a38b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81a38e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a390: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 81a393: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a399: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a39b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a39e: jne 0x81a3ab */
  if (!zf) goto L_81a3ab;
L_81a3a0: /* 81a3a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a3a2: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 81a3a9: jmp 0x81a3c6 */
  goto L_81a3c6;
L_81a3ab: /* 81a3ab: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a3b1: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 81a3b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a3ba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a3bd: jnp 0x81a3c6 */
  if (!pf) goto L_81a3c6;
L_81a3bf: /* 81a3bf: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_81a3c6: /* 81a3c6: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81a3c9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81a3cc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 81a3ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a3d0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a3d3: jp 0x81a3e9 */
  if (pf) goto L_81a3e9;
L_81a3d5: /* 81a3d5: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 81a3d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81a3d9: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81a3dc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a3de: jl 0x81a332 */
  if ((sf != of)) goto L_81a332;
L_81a3e4: /* 81a3e4: jmp 0x81a8e5 */
  goto L_81a8e5;
L_81a3e9: /* 81a3e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81a3ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a3eb: lea edx, [ebp - 0x31c] */
  edx = (uint32_t)(ebp + 0xfffffce4u);
/* 81a3f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81a3f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a3f3: call 0x6c8fbc */
  esp -= 4; W32(esp, 0x81a3f8u); SPILL(); f_6c8fbc(); if (g_unwind) return; RELOAD();
/* 81a3f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81a3fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81a3fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81a400: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 81a403: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 81a405: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 81a408: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 81a40b: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 81a40e: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 81a411: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 81a414: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 81a417: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a41a: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 81a41d: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 81a424: jmp 0x81a42e */
  goto L_81a42e;
L_81a426: /* 81a426: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a428: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a42e: /* 81a42e: mov al, byte ptr [esi + 0x2f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2f4u))) & 0xffu);
/* 81a434: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a436: je 0x81a5c9 */
  if (zf) goto L_81a5c9;
L_81a43c: /* 81a43c: mov ecx, dword ptr [esi + 0x3f0] */
  ecx = R32((uint32_t)(esi + 0x3f0u));
/* 81a442: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 81a448: mov ecx, dword ptr [edx + 0x40] */
  ecx = R32((uint32_t)(edx + 0x40u));
/* 81a44b: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 81a44e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a450: je 0x81a5c9 */
  if (zf) goto L_81a5c9;
L_81a456: /* 81a456: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 81a459: xor ebx, ebx */
  ebx = 0;
/* 81a45b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a45c: je 0x81a481 */
  if (zf) goto L_81a481;
L_81a45e: /* 81a45e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a45f: je 0x81a479 */
  if (zf) goto L_81a479;
L_81a461: /* 81a461: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a462: jne 0x81a490 */
  if (!zf) goto L_81a490;
L_81a464: /* 81a464: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x81a46au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 81a46a: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 81a470: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a475u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a475: mov ebx, eax */
  ebx = eax;
/* 81a477: jmp 0x81a490 */
  goto L_81a490;
L_81a479: /* 81a479: mov ebx, dword ptr [edi + 0xb8] */
  ebx = R32((uint32_t)(edi + 0xb8u));
/* 81a47f: jmp 0x81a490 */
  goto L_81a490;
L_81a481: /* 81a481: mov ebx, dword ptr [esi + 0x460] */
  ebx = R32((uint32_t)(esi + 0x460u));
/* 81a487: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 81a48a: mov dword ptr [esi + 0x460], edx */
  W32((uint32_t)(esi + 0x460u), edx);
L_81a490: /* 81a490: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 81a496: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81a49cu); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81a49c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a4a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a4a4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a4a7: jnp 0x81a4bd */
  if (!pf) goto L_81a4bd;
L_81a4a9: /* 81a4a9: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 81a4af: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81a4b5u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81a4b5: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a4bb: jmp 0x81a4c3 */
  goto L_81a4c3;
L_81a4bd: /* 81a4bd: fild dword ptr [esi + 0x2d8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
L_81a4c3: /* 81a4c3: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a4c8u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a4c8: fld dword ptr [esi + 0x2f8] */
  { double v = F32((uint32_t)(esi + 0x2f8u)); FPUSH(v); }
/* 81a4ce: mov ecx, eax */
  ecx = eax;
/* 81a4d0: mov eax, ebx */
  eax = ebx;
/* 81a4d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81a4d3: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x81a4d3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81a4d5: mov ebx, edx */
  ebx = edx;
/* 81a4d7: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a4dcu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a4dc: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81a4de: mov eax, dword ptr [esi + 0x2d8] */
  eax = R32((uint32_t)(esi + 0x2d8u));
/* 81a4e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 81a4e5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a4e7: jge 0x81a4ed */
  if ((sf == of)) goto L_81a4ed;
L_81a4e9: /* 81a4e9: xor ebx, ebx */
  ebx = 0;
/* 81a4eb: jmp 0x81a4f3 */
  goto L_81a4f3;
L_81a4ed: /* 81a4ed: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a4ef: jl 0x81a4f3 */
  if ((sf != of)) goto L_81a4f3;
L_81a4f1: /* 81a4f1: mov ebx, eax */
  ebx = eax;
L_81a4f3: /* 81a4f3: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 81a4f9: lea ebx, [ebx + ebx*4] */
  ebx = (uint32_t)(ebx + ebx*4);
/* 81a4fc: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 81a4ff: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81a501: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a504: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x81a50au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 81a50a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81a50d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a510: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a513: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a519u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a519: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81a51c: lea ecx, [esi + 0x300] */
  ecx = (uint32_t)(esi + 0x300u);
/* 81a522: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a528u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a528: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81a52b: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81a52e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a530: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a533: jne 0x81a5c9 */
  if (!zf) goto L_81a5c9;
L_81a539: /* 81a539: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a53f: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 81a545: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 81a548: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 81a54b: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 81a551: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 81a554: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a55a: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 81a55c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a55e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a560: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 81a563: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 81a565: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a568: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 81a56b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 81a56e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a574u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a574: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a575: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a578: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a57b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a57e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a584u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a584: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a585: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a588: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a58b: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a58e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a594u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a594: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a597: fmul dword ptr [eax + 0x2cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2ccu)));
/* 81a59d: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 81a5a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81a5a3: mov ecx, esp */
  ecx = esp;
/* 81a5a5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 81a5a9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81a5ab: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 81a5ae: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81a5b1: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 81a5b4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81a5b7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a5ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81a5bc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81a5bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a5c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a5c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a5c3: call dword ptr [ebx + 0x80] */
  { uint32_t t = R32((uint32_t)(ebx + 0x80u)); esp -= 4; W32(esp, 0x81a5c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81a5c9: /* 81a5c9: test byte ptr [esi + 0x6c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x6cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a5cd: je 0x81a646 */
  if (zf) goto L_81a646;
L_81a5cf: /* 81a5cf: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 81a5d2: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a5d8u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a5d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a5d9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a5dc: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x81a5e2u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 81a5e2: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 81a5e8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a5eb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81a5ec: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a5ee: jl 0x81a646 */
  if ((sf != of)) goto L_81a646;
L_81a5f0: /* 81a5f0: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a5f7: je 0x819d5a */
  if (zf) goto L_819d5a;
L_81a5fd: /* 81a5fd: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a600: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81a602: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 81a608: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 81a60e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a60f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a613: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a614: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 81a617: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a61a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a61b: mov ecx, esi */
  ecx = esi;
/* 81a61d: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 81a627: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 81a631: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 81a63b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x81a641u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a641: jmp 0x81a789 */
  goto L_81a789;
L_81a646: /* 81a646: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a649: lea ebx, [edi + 0x18] */
  ebx = (uint32_t)(edi + 0x18u);
/* 81a64c: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 81a64f: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 81a652: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a655: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a656: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 81a659: lea eax, [ebp - 0x2ec] */
  eax = (uint32_t)(ebp + 0xfffffd14u);
/* 81a65f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a663: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 81a666: mov ecx, ebx */
  ecx = ebx;
/* 81a668: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 81a66e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a670: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a676: fstp dword ptr [ebp - 0x2a4] */
  WF32((uint32_t)(ebp + 0xfffffd5cu), ST0); FPOP();
/* 81a67c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a682: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 81a688: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a68e: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81a690: fsub dword ptr [ebp - 0x2a4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffd5cu)));
/* 81a696: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 81a698: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a69b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81a69d: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 81a6a0: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 81a6a3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81a6a5: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 81a6a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a6aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a6ac: call dword ptr [0xcfaaf0] */
  esp -= 4; W32(esp, 0x81a6b2u); SPILL(); f_4e31c5(); if (g_unwind) return; /* Core!?MirrorByVector@FVector@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 81a6b2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a6b4: mov ecx, ebx */
  ecx = ebx;
/* 81a6b6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81a6b8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81a6bb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81a6be: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81a6c1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81a6c4: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 81a6ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a6cb: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 81a6ce: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a6d4u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a6d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a6d5: lea edx, [ebp - 0x304] */
  edx = (uint32_t)(ebp + 0xfffffcfcu);
/* 81a6db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a6dc: mov ecx, ebx */
  ecx = ebx;
/* 81a6de: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x81a6e4u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 81a6e4: test byte ptr [esi + 0x260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a6eb: je 0x81a711 */
  if (zf) goto L_81a711;
L_81a6ed: /* 81a6ed: lea eax, [ebp - 0x334] */
  eax = (uint32_t)(ebp + 0xfffffcccu);
/* 81a6f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a6f4: lea ecx, [esi + 0x264] */
  ecx = (uint32_t)(esi + 0x264u);
/* 81a6fa: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a700u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a701: lea ecx, [ebp - 0x2c8] */
  ecx = (uint32_t)(ebp + 0xfffffd38u);
/* 81a707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a708: lea ecx, [edi + 0x30] */
  ecx = (uint32_t)(edi + 0x30u);
/* 81a70b: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x81a711u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
L_81a711: /* 81a711: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a714: mov ebx, edi */
  ebx = edi;
/* 81a716: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a71c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a71f: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a725: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a728: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a72e: fstp dword ptr [ebp - 0x230] */
  WF32((uint32_t)(ebp + 0xfffffdd0u), ST0); FPOP();
/* 81a734: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a736: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 81a739: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 81a73f: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 81a745: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 81a747: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 81a74a: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 81a750: fld dword ptr [ebp - 0x230] */
  { double v = F32((uint32_t)(ebp + 0xfffffdd0u)); FPUSH(v); }
/* 81a756: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 81a75c: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 81a75f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 81a762: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 81a768: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 81a76e: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 81a771: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 81a774: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 81a776: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 81a77c: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 81a77f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a780: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 81a783: mov dword ptr [edi + 0xb8], eax */
  W32((uint32_t)(edi + 0xb8u), eax);
L_81a789: /* 81a789: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 81a78c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a78e: jl 0x81a8e5 */
  if ((sf != of)) goto L_81a8e5;
L_81a794: /* 81a794: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a79a: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 81a7a0: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 81a7a3: test byte ptr [ebx + 0x3f4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x3f4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a7aa: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a7b0: /* 81a7b0: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 81a7b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a7b8: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a7be: /* 81a7be: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a7c1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a7c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a7c9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a7cc: jnp 0x81a8e5 */
  if (!pf) goto L_81a8e5;
L_81a7d2: /* 81a7d2: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 81a7d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a7d7: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 81a7de: jle 0x81a8e5 */
  if ((zf || sf != of)) goto L_81a8e5;
L_81a7e4: /* 81a7e4: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a7e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81a7ea: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a7f0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 81a7f2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a7f5: lea eax, [ebp - 0x178] */
  eax = (uint32_t)(ebp + 0xfffffe88u);
/* 81a7fb: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a802: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a805: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a80b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a811: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 81a813: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a816: fstp dword ptr [ebp - 0x1e8] */
  WF32((uint32_t)(ebp + 0xfffffe18u), ST0); FPOP();
/* 81a81c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a81f: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 81a822: mov ecx, ebx */
  ecx = ebx;
/* 81a824: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 81a82a: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 81a82d: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 81a833: fld dword ptr [ebp - 0x1e8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe18u)); FPUSH(v); }
/* 81a839: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 81a83c: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 81a842: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x81a848u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a848: test byte ptr [esi + 0x98], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x98u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a84f: je 0x81a8af */
  if (zf) goto L_81a8af;
L_81a851: /* 81a851: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a857: mov ecx, dword ptr [ebx + 0x3fc] */
  ecx = R32((uint32_t)(ebx + 0x3fcu));
/* 81a85d: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 81a863: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81a865: lea ecx, [ebp - 0x2e0] */
  ecx = (uint32_t)(ebp + 0xfffffd20u);
/* 81a86b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a86c: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 81a872: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a875: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a87bu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a87b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a87e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81a880: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a883: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 81a886: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a889: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 81a88c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a88f: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 81a895: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a897: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* 81a89a: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 81a89d: fadd dword ptr [eax + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x1cu)));
/* 81a8a0: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 81a8a3: fld dword ptr [ebp - 0x1f4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe0cu)); FPUSH(v); }
/* 81a8a9: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* 81a8ac: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
L_81a8af: /* 81a8af: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a8b5: mov ecx, dword ptr [ebx + 0x40c] */
  ecx = R32((uint32_t)(ebx + 0x40cu));
/* 81a8bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a8bc: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a8be: jge 0x81a8c2 */
  if ((sf == of)) goto L_81a8c2;
L_81a8c0: /* 81a8c0: mov ecx, eax */
  ecx = eax;
L_81a8c2: /* 81a8c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81a8c3: idiv dword ptr [ebx + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x81a8c3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81a8c9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a8cc: mov dword ptr [ebx + 0x40c], ecx */
  W32((uint32_t)(ebx + 0x40cu), ecx);
/* 81a8d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a8d3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 81a8d6: mov dword ptr [ebx + 0x408], edx */
  W32((uint32_t)(ebx + 0x408u), edx);
/* 81a8dc: cmp eax, dword ptr [esi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a8df: jl 0x81a7e4 */
  if ((sf != of)) goto L_81a7e4;
L_81a8e5: /* 81a8e5: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81a8eb: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 81a8f1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a8f7: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 81a8fe: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 81a901: mov byte ptr [ebp - 0x20], 0xff */
  W8((uint32_t)(ebp + 0xffffffe0u), 0xffu);
/* 81a905: mov byte ptr [ebp - 0x1f], 0xff */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xffu);
/* 81a909: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a90b: mov byte ptr [ebp - 0x1e], 0xff */
  W8((uint32_t)(ebp + 0xffffffe2u), 0xffu);
/* 81a90f: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 81a913: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a916: jnp 0x81a930 */
  if (!pf) goto L_81a930;
L_81a918: /* 81a918: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81a91b: fdiv dword ptr [edi + 0xb0] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0xb0u)));
/* 81a921: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a927: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a929: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a92c: jp 0x81a963 */
  if (pf) goto L_81a963;
L_81a92e: /* 81a92e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81a930: /* 81a930: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_81a937: /* 81a937: mov eax, dword ptr [esi + 0x288] */
  eax = R32((uint32_t)(esi + 0x288u));
/* 81a93d: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a93f: je 0x81aa47 */
  if (zf) goto L_81aa47;
L_81a945: /* 81a945: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a947: je 0x81a980 */
  if (zf) goto L_81a980;
L_81a949: /* 81a949: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 81a94f: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a955: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 81a95b: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 81a95e: jmp 0x81aa47 */
  goto L_81aa47;
L_81a963: /* 81a963: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 81a969: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a96b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a96e: jp 0x81a975 */
  if (pf) goto L_81a975;
L_81a970: /* 81a970: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81a973: jmp 0x81a937 */
  goto L_81a937;
L_81a975: /* 81a975: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a977: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 81a97e: jmp 0x81a937 */
  goto L_81a937;
L_81a980: /* 81a980: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81a986: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a98c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a98e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a991: jnp 0x81aa47 */
  if (!pf) goto L_81aa47;
L_81a997: /* 81a997: fld dword ptr [esi + 0x298] */
  { double v = F32((uint32_t)(esi + 0x298u)); FPUSH(v); }
/* 81a99d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a99e: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a9a4: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81a9a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a9aa: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81a9b0u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81a9b0: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81a9b6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81a9b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a9bc: xor ecx, ecx */
  ecx = 0;
/* 81a9be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a9c0: jle 0x81aa47 */
  if ((zf || sf != of)) goto L_81aa47;
L_81a9c6: /* 81a9c6: mov ebx, dword ptr [esi + 0x28c] */
  ebx = R32((uint32_t)(esi + 0x28cu));
/* 81a9cc: mov edx, ebx */
  edx = ebx;
/* 81a9ce: mov edi, edi */
  edi = edi;
L_81a9d0: /* 81a9d0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81a9d2: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81a9d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a9d7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a9da: je 0x81a9ec */
  if (zf) goto L_81a9ec;
L_81a9dc: /* 81a9dc: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81a9e3: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81a9e6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a9e8: jl 0x81a9d0 */
  if ((sf != of)) goto L_81a9d0;
L_81a9ea: /* 81a9ea: jmp 0x81aa47 */
  goto L_81aa47;
L_81a9ec: /* 81a9ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a9ee: fld dword ptr [ebx + ecx*8 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0x4u)); FPUSH(v); }
/* 81a9f2: fld dword ptr [ebx + ecx*8] */
  { double v = F32((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 81a9f5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81a9f8: je 0x81aa04 */
  if (zf) goto L_81aa04;
L_81a9fa: /* 81a9fa: fld dword ptr [ebx + ecx*8 - 4] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0xfffffffcu)); FPUSH(v); }
/* 81a9fe: fld dword ptr [ebx + ecx*8 - 8] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0xfffffff8u)); FPUSH(v); }
/* 81aa02: jmp 0x81aa10 */
  goto L_81aa10;
L_81aa04: /* 81aa04: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81aa0a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_81aa10: /* 81aa10: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81aa13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aa19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aa1b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aa1e: jnp 0x81aa30 */
  if (!pf) goto L_81aa30;
L_81aa20: /* 81aa20: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81aa23: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aa25: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81aa28: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81aa2a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 81aa2c: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81aa2e: jmp 0x81aa38 */
  goto L_81aa38;
L_81aa30: /* 81aa30: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aa32: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81aa38: /* 81aa38: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aa3a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aa3c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81aa3e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 81aa40: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 81aa43: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81aa45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81aa47: /* 81aa47: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa4a: lea eax, [edi + 0x6c] */
  eax = (uint32_t)(edi + 0x6cu);
/* 81aa4d: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 81aa50: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 81aa56: mov ecx, dword ptr [ebp - 0x130] */
  ecx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 81aa5c: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa5f: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 81aa62: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 81aa68: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa6b: mov edx, dword ptr [ebp - 0x12c] */
  edx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 81aa71: fmul dword ptr [edi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x2cu)));
/* 81aa74: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81aa76: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81aa79: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 81aa7f: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 81aa85: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81aa88: test byte ptr [esi + 0x3d4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3d4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81aa8f: je 0x81ac54 */
  if (zf) goto L_81ac54;
L_81aa95: /* 81aa95: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81aa9b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aaa1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aaa3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aaa6: jnp 0x81ac54 */
  if (!pf) goto L_81ac54;
L_81aaac: /* 81aaac: fld dword ptr [esi + 0x3e4] */
  { double v = F32((uint32_t)(esi + 0x3e4u)); FPUSH(v); }
/* 81aab2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81aab3: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81aab9: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81aabc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81aabf: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81aac5u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81aac5: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 81aacb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81aace: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81aad1: xor ecx, ecx */
  ecx = 0;
/* 81aad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81aad5: jle 0x81ac54 */
  if ((zf || sf != of)) goto L_81ac54;
L_81aadb: /* 81aadb: mov ebx, dword ptr [esi + 0x3d8] */
  ebx = R32((uint32_t)(esi + 0x3d8u));
/* 81aae1: mov edx, ebx */
  edx = ebx;
L_81aae3: /* 81aae3: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81aae5: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81aae8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aaea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81aaed: je 0x81ab02 */
  if (zf) goto L_81ab02;
L_81aaef: /* 81aaef: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 81aaf5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81aaf6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81aaf9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81aafb: jl 0x81aae3 */
  if ((sf != of)) goto L_81aae3;
L_81aafd: /* 81aafd: jmp 0x81ac54 */
  goto L_81ac54;
L_81ab02: /* 81ab02: mov edx, ecx */
  edx = ecx;
/* 81ab04: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 81ab07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ab09: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* 81ab0c: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 81ab0f: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 81ab12: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81ab14: mov dword ptr [ebp - 0xf0], ebx */
  W32((uint32_t)(ebp + 0xffffff10u), ebx);
/* 81ab1a: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81ab1d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81ab20: mov dword ptr [ebp - 0xec], ebx */
  W32((uint32_t)(ebp + 0xffffff14u), ebx);
/* 81ab26: mov dword ptr [ebp - 0xe8], edx */
  W32((uint32_t)(ebp + 0xffffff18u), edx);
/* 81ab2c: je 0x81ab4a */
  if (zf) goto L_81ab4a;
L_81ab2e: /* 81ab2e: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 81ab31: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 81ab34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ab36: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 81ab3c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81ab3f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81ab42: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 81ab48: jmp 0x81ab8c */
  goto L_81ab8c;
L_81ab4a: /* 81ab4a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ab50: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 81ab5a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 81ab60: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 81ab6a: mov eax, dword ptr [ebp - 0x114] */
  eax = R32((uint32_t)(ebp + 0xfffffeecu));
/* 81ab70: mov dword ptr [ebp - 0x110], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x3f800000u);
/* 81ab7a: mov ecx, dword ptr [ebp - 0x110] */
  ecx = R32((uint32_t)(ebp + 0xfffffef0u));
/* 81ab80: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 81ab86: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
L_81ab8c: /* 81ab8c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ab8e: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 81ab94: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ab9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ab9c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ab9f: jnp 0x81abb0 */
  if (!pf) goto L_81abb0;
L_81aba1: /* 81aba1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81aba4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aba6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aba8: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81abaa: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81abac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abae: jmp 0x81abba */
  goto L_81abba;
L_81abb0: /* 81abb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abb4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81abba: /* 81abba: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 81abc0: lea edx, [edi + 0x90] */
  edx = (uint32_t)(edi + 0x90u);
/* 81abc6: fsub dword ptr [ebp - 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff74u)));
/* 81abcc: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 81abd2: fsub dword ptr [ebp - 0x88] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff78u)));
/* 81abd8: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 81abde: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 81abe4: fstp dword ptr [ebp - 0x1dc] */
  WF32((uint32_t)(ebp + 0xfffffe24u), ST0); FPOP();
/* 81abea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abec: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81abee: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 81abf4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81abf6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81abf8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abfa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abfc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abfe: fmul dword ptr [ebp - 0x1dc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe24u)));
/* 81ac04: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 81ac0a: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 81ac10: fadd dword ptr [ebp - 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff74u)));
/* 81ac16: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 81ac1c: mov eax, dword ptr [ebp - 0xfc] */
  eax = R32((uint32_t)(ebp + 0xffffff04u));
/* 81ac22: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81ac24: fadd dword ptr [ebp - 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff78u)));
/* 81ac2a: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 81ac30: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 81ac36: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 81ac3c: fadd dword ptr [ebp - 0x84] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 81ac42: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81ac45: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 81ac4b: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 81ac51: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_81ac54: /* 81ac54: test byte ptr [esi + 0x1fc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1fcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ac5b: je 0x81adfd */
  if (zf) goto L_81adfd;
L_81ac61: /* 81ac61: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81ac67: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ac6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ac6f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ac72: jnp 0x81adfd */
  if (!pf) goto L_81adfd;
L_81ac78: /* 81ac78: fld dword ptr [esi + 0x20c] */
  { double v = F32((uint32_t)(esi + 0x20cu)); FPUSH(v); }
/* 81ac7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ac7f: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81ac85: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81ac88: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81ac8b: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81ac91u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81ac91: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 81ac97: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81ac9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ac9d: xor ecx, ecx */
  ecx = 0;
/* 81ac9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81aca1: jle 0x81adfd */
  if ((zf || sf != of)) goto L_81adfd;
L_81aca7: /* 81aca7: mov ebx, dword ptr [esi + 0x200] */
  ebx = R32((uint32_t)(esi + 0x200u));
/* 81acad: mov edx, ebx */
  edx = ebx;
/* 81acaf: nop  */
L_81acb0: /* 81acb0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81acb2: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81acb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81acb7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81acba: je 0x81accf */
  if (zf) goto L_81accf;
L_81acbc: /* 81acbc: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 81acc2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81acc3: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81acc6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81acc8: jl 0x81acb0 */
  if ((sf != of)) goto L_81acb0;
L_81acca: /* 81acca: jmp 0x81adfd */
  goto L_81adfd;
L_81accf: /* 81accf: mov edx, ecx */
  edx = ecx;
/* 81acd1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 81acd4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81acd6: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* 81acd9: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 81acdc: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 81acdf: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81ace1: mov dword ptr [ebp - 0x124], ebx */
  W32((uint32_t)(ebp + 0xfffffedcu), ebx);
/* 81ace7: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81acea: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81aced: mov dword ptr [ebp - 0x120], ebx */
  W32((uint32_t)(ebp + 0xfffffee0u), ebx);
/* 81acf3: mov dword ptr [ebp - 0x11c], edx */
  W32((uint32_t)(ebp + 0xfffffee4u), edx);
/* 81acf9: je 0x81ad11 */
  if (zf) goto L_81ad11;
L_81acfb: /* 81acfb: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 81acfe: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 81ad01: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ad03: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 81ad06: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81ad09: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81ad0c: mov dword ptr [ebp - 0x7c], edx */
  W32((uint32_t)(ebp + 0xffffff84u), edx);
/* 81ad0f: jmp 0x81ad4d */
  goto L_81ad4d;
L_81ad11: /* 81ad11: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ad17: mov dword ptr [ebp - 0x10c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x3f800000u);
/* 81ad21: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 81ad27: mov dword ptr [ebp - 0x108], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x3f800000u);
/* 81ad31: mov eax, dword ptr [ebp - 0x108] */
  eax = R32((uint32_t)(ebp + 0xfffffef8u));
/* 81ad37: mov dword ptr [ebp - 0x104], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x3f800000u);
/* 81ad41: mov ecx, dword ptr [ebp - 0x104] */
  ecx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 81ad47: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 81ad4a: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
L_81ad4d: /* 81ad4d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ad4f: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 81ad52: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ad58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ad5a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ad5d: jnp 0x81ad6e */
  if (!pf) goto L_81ad6e;
L_81ad5f: /* 81ad5f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81ad62: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81ad64: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81ad66: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81ad68: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81ad6a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad6c: jmp 0x81ad78 */
  goto L_81ad78;
L_81ad6e: /* 81ad6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad70: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad72: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81ad78: /* 81ad78: fld dword ptr [ebp - 0x124] */
  { double v = F32((uint32_t)(ebp + 0xfffffedcu)); FPUSH(v); }
/* 81ad7e: lea edx, [edi + 0x60] */
  edx = (uint32_t)(edi + 0x60u);
/* 81ad81: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 81ad84: fld dword ptr [ebp - 0x120] */
  { double v = F32((uint32_t)(ebp + 0xfffffee0u)); FPUSH(v); }
/* 81ad8a: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 81ad8d: fld dword ptr [ebp - 0x11c] */
  { double v = F32((uint32_t)(ebp + 0xfffffee4u)); FPUSH(v); }
/* 81ad93: fsub dword ptr [ebp - 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff88u)));
/* 81ad96: fstp dword ptr [ebp - 0x224] */
  WF32((uint32_t)(ebp + 0xfffffddcu), ST0); FPOP();
/* 81ad9c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81ad9e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81ada0: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 81ada6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ada8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81adaa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81adac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81adae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81adb0: fmul dword ptr [ebp - 0x224] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffddcu)));
/* 81adb6: fstp dword ptr [ebp - 0x1a0] */
  WF32((uint32_t)(ebp + 0xfffffe60u), ST0); FPOP();
/* 81adbc: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 81adc2: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 81adc5: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 81adcb: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 81add1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81add3: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 81add6: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 81addc: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 81ade2: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 81ade8: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 81adeb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81adee: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 81adf4: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 81adfa: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_81adfd: /* 81adfd: test byte ptr [esi + 0x98], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x98u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae04: je 0x81af67 */
  if (zf) goto L_81af67;
L_81ae0a: /* 81ae0a: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81ae10: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ae16: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ae18: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ae1b: jnp 0x81af67 */
  if (!pf) goto L_81af67;
L_81ae21: /* 81ae21: fld dword ptr [esi + 0xa8] */
  { double v = F32((uint32_t)(esi + 0xa8u)); FPUSH(v); }
/* 81ae27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ae28: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81ae2e: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81ae31: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81ae34: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81ae3au); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81ae3a: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 81ae40: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81ae43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ae46: xor ecx, ecx */
  ecx = 0;
/* 81ae48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81ae4a: jle 0x81af67 */
  if ((zf || sf != of)) goto L_81af67;
L_81ae50: /* 81ae50: mov edx, dword ptr [esi + 0x9c] */
  edx = R32((uint32_t)(esi + 0x9cu));
/* 81ae56: mov ebx, edx */
  ebx = edx;
L_81ae58: /* 81ae58: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81ae5a: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 81ae5d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ae5f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae62: je 0x81ae77 */
  if (zf) goto L_81ae77;
L_81ae64: /* 81ae64: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 81ae6a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81ae6b: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81ae6e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81ae70: jl 0x81ae58 */
  if ((sf != of)) goto L_81ae58;
L_81ae72: /* 81ae72: jmp 0x81af67 */
  goto L_81af67;
L_81ae77: /* 81ae77: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae79: fld dword ptr [edx + ecx*8] */
  { double v = F32((uint32_t)(edx + ecx*8)); FPUSH(v); }
/* 81ae7c: mov eax, dword ptr [edx + ecx*8 + 4] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x4u));
/* 81ae80: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 81ae83: je 0x81ae8f */
  if (zf) goto L_81ae8f;
L_81ae85: /* 81ae85: mov ebx, dword ptr [edx + ecx*8 - 4] */
  ebx = R32((uint32_t)(edx + ecx*8 + 0xfffffffcu));
/* 81ae89: fld dword ptr [edx + ecx*8 - 8] */
  { double v = F32((uint32_t)(edx + ecx*8 + 0xfffffff8u)); FPUSH(v); }
/* 81ae8d: jmp 0x81aea8 */
  goto L_81aea8;
L_81ae8f: /* 81ae8f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ae95: mov byte ptr [ebp - 0x74], 0xff */
  W8((uint32_t)(ebp + 0xffffff8cu), 0xffu);
/* 81ae99: mov byte ptr [ebp - 0x73], 0xff */
  W8((uint32_t)(ebp + 0xffffff8du), 0xffu);
/* 81ae9d: mov byte ptr [ebp - 0x72], 0xff */
  W8((uint32_t)(ebp + 0xffffff8eu), 0xffu);
/* 81aea1: mov byte ptr [ebp - 0x71], 0xff */
  W8((uint32_t)(ebp + 0xffffff8fu), 0xffu);
/* 81aea5: mov ebx, dword ptr [ebp - 0x74] */
  ebx = R32((uint32_t)(ebp + 0xffffff8cu));
L_81aea8: /* 81aea8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81aeaa: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 81aead: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aeb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aeb5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aeb8: jnp 0x81aec9 */
  if (!pf) goto L_81aec9;
L_81aeba: /* 81aeba: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81aebd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aebf: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aec1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aec3: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81aec5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aec7: jmp 0x81aed3 */
  goto L_81aed3;
L_81aec9: /* 81aec9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aecb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aecd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81aed3: /* 81aed3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81aed6: movzx ecx, byte ptr [ebp - 0x22] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdeu)));
/* 81aeda: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81aedd: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 81aee0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 81aee2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81aee5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81aee8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81aeeb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81aeed: fiadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)));
/* 81aef0: call 0x99c958 */
  esp -= 4; W32(esp, 0x81aef5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81aef5: movzx edx, byte ptr [ebp - 0x23] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffddu)));
/* 81aef9: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 81aefc: movzx eax, bh */
  eax = (uint32_t)(((ebx >> 8) & 0xffu));
/* 81aeff: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 81af01: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af04: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af07: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af0a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af0c: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af0f: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af14u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af14: movzx ecx, byte ptr [ebp - 0x24] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdcu)));
/* 81af18: mov byte ptr [ebp - 0x1f], al */
  W8((uint32_t)(ebp + 0xffffffe1u), (eax & 0xffu));
/* 81af1b: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 81af1e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 81af20: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81af23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af26: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af29: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af2b: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af2e: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af33u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af33: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 81af36: cmp byte ptr [esi + 0x314], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x314u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81af3d: jne 0x81af61 */
  if (!zf) goto L_81af61;
L_81af3f: /* 81af3f: movzx eax, byte ptr [ebp - 0x15] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 81af43: movzx edx, byte ptr [ebp - 0x21] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu)));
/* 81af47: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 81af49: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af4c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af4f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af52: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af54: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af57: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af5cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af5c: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81af5f: jmp 0x81af65 */
  goto L_81af65;
L_81af61: /* 81af61: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
L_81af65: /* 81af65: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81af67: /* 81af67: movzx eax, byte ptr [ebp - 0x1e] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe2u)));
/* 81af6b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81af6e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af71: fmul dword ptr [edi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x84u)));
/* 81af77: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af7cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af7c: movzx ecx, byte ptr [ebp - 0x1f] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe1u)));
/* 81af80: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81af83: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 81af86: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af89: fmul dword ptr [edi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x88u)));
/* 81af8f: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af94u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af94: movzx edx, byte ptr [ebp - 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe0u)));
/* 81af98: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af9b: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 81af9d: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81afa0: mov byte ptr [ebp - 0x1f], bl */
  W8((uint32_t)(ebp + 0xffffffe1u), (ebx & 0xffu));
/* 81afa3: fmul dword ptr [edi + 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8cu)));
/* 81afa9: call 0x99c958 */
  esp -= 4; W32(esp, 0x81afaeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81afae: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 81afb4: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 81afb7: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 81afba: je 0x81afdf */
  if (zf) goto L_81afdf;
L_81afbc: /* 81afbc: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81afbf: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81afc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81afc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81afca: jne 0x81afdf */
  if (!zf) goto L_81afdf;
L_81afcc: /* 81afcc: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81afd2: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81afd8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81afda: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81afdd: jp 0x81b017 */
  if (pf) goto L_81b017;
L_81afdf: /* 81afdf: test byte ptr [esi + 0xf0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81afe6: je 0x81b251 */
  if (zf) goto L_81b251;
L_81afec: /* 81afec: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81afef: fcomp dword ptr [esi + 0xec] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xecu)));
  FPOP();
/* 81aff5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aff7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81affa: jp 0x81b251 */
  if (pf) goto L_81b251;
L_81b000: /* 81b000: fld dword ptr [esi + 0xec] */
  { double v = F32((uint32_t)(esi + 0xecu)); FPUSH(v); }
/* 81b006: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b00c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b00e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b011: jnp 0x81b251 */
  if (!pf) goto L_81b251;
L_81b017: /* 81b017: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81b019: je 0x81b04a */
  if (zf) goto L_81b04a;
L_81b01b: /* 81b01b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81b01e: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81b024: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b026: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b029: jne 0x81b04a */
  if (!zf) goto L_81b04a;
L_81b02b: /* 81b02b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81b02e: lea eax, [esi + 0xc4] */
  eax = (uint32_t)(esi + 0xc4u);
/* 81b034: fsub dword ptr [esi + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd4u)));
/* 81b03a: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81b040: fsub dword ptr [esi + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd4u)));
/* 81b046: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 81b048: jmp 0x81b05f */
  goto L_81b05f;
L_81b04a: /* 81b04a: fld dword ptr [esi + 0xec] */
  { double v = F32((uint32_t)(esi + 0xecu)); FPUSH(v); }
/* 81b050: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 81b056: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 81b059: fdiv dword ptr [esi + 0xec] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0xecu)));
L_81b05f: /* 81b05f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81b061: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81b064: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 81b06a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 81b06d: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 81b073: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 81b076: mov al, byte ptr [esi + 0x314] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x314u))) & 0xffu);
/* 81b07c: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81b07e: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 81b084: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 81b08a: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 81b090: jne 0x81b0c0 */
  if (!zf) goto L_81b0c0;
L_81b092: /* 81b092: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b098: mov byte ptr [ebp - 0x6c], 0x7f */
  W8((uint32_t)(ebp + 0xffffff94u), 0x7fu);
/* 81b09c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81b09e: mov byte ptr [ebp - 0x6b], 0x7f */
  W8((uint32_t)(ebp + 0xffffff95u), 0x7fu);
/* 81b0a2: mov byte ptr [ebp - 0x6a], 0x7f */
  W8((uint32_t)(ebp + 0xffffff96u), 0x7fu);
/* 81b0a6: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b0abu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b0ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b0ad: or cl, 0xff */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 81b0b0: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 81b0b2: mov byte ptr [ebp - 0x69], cl */
  W8((uint32_t)(ebp + 0xffffff97u), (ecx & 0xffu));
/* 81b0b5: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 81b0b8: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 81b0bb: jmp 0x81b251 */
  goto L_81b251;
L_81b0c0: /* 81b0c0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81b0c2: jne 0x81b120 */
  if (!zf) goto L_81b120;
L_81b0c4: /* 81b0c4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81b0c7: shr eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81b0ca: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81b0cd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b0d0: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b0d6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b0d8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b0da: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81b0dc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b0e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b0e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b0e7: jp 0x81b0fe */
  if (pf) goto L_81b0fe;
L_81b0e9: /* 81b0e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b0eb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b0f1: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b0f6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b0f6: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81b0f9: jmp 0x81b251 */
  goto L_81b251;
L_81b0fe: /* 81b0fe: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b104: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b106: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b109: jnp 0x81b113 */
  if (!pf) goto L_81b113;
L_81b10b: /* 81b10b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b10d: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b113: /* 81b113: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b118u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b118: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81b11b: jmp 0x81b251 */
  goto L_81b251;
L_81b120: /* 81b120: movzx ecx, byte ptr [ebp - 0x1e] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe2u)));
/* 81b124: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81b127: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b12a: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 81b130: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b132: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b134: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b13a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b13c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b13f: jp 0x81b14b */
  if (pf) goto L_81b14b;
L_81b141: /* 81b141: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b143: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b149: jmp 0x81b160 */
  goto L_81b160;
L_81b14b: /* 81b14b: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b156: jnp 0x81b160 */
  if (!pf) goto L_81b160;
L_81b158: /* 81b158: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b15a: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b160: /* 81b160: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b165u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b165: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* 81b168: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81b16b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81b16e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b171: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 81b177: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b179: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b17b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b186: jp 0x81b192 */
  if (pf) goto L_81b192;
L_81b188: /* 81b188: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b18a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b190: jmp 0x81b1a7 */
  goto L_81b1a7;
L_81b192: /* 81b192: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b198: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b19a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b19d: jnp 0x81b1a7 */
  if (!pf) goto L_81b1a7;
L_81b19f: /* 81b19f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1a1: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b1a7: /* 81b1a7: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b1acu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b1ac: mov ebx, eax */
  ebx = eax;
/* 81b1ae: movzx eax, byte ptr [ebp - 0x20] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe0u)));
/* 81b1b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81b1b5: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b1b8: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 81b1be: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b1c0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b1c2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b1c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b1ca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b1cd: jp 0x81b1d9 */
  if (pf) goto L_81b1d9;
L_81b1cf: /* 81b1cf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1d1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b1d7: jmp 0x81b1ee */
  goto L_81b1ee;
L_81b1d9: /* 81b1d9: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b1df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b1e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b1e4: jnp 0x81b1ee */
  if (!pf) goto L_81b1ee;
L_81b1e6: /* 81b1e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1e8: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b1ee: /* 81b1ee: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b1f3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b1f3: movzx edx, byte ptr [ebp - 0x1d] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe3u)));
/* 81b1f7: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81b1fa: mov ecx, eax */
  ecx = eax;
/* 81b1fc: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b1ff: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b205: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b207: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b209: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81b20b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b211: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b213: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b216: jp 0x81b222 */
  if (pf) goto L_81b222;
L_81b218: /* 81b218: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b21a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b220: jmp 0x81b237 */
  goto L_81b237;
L_81b222: /* 81b222: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b228: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b22a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b22d: jnp 0x81b237 */
  if (!pf) goto L_81b237;
L_81b22f: /* 81b22f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b231: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b237: /* 81b237: mov al, byte ptr [ebp - 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 81b23a: mov byte ptr [ebp - 0x70], cl */
  W8((uint32_t)(ebp + 0xffffff90u), (ecx & 0xffu));
/* 81b23d: mov byte ptr [ebp - 0x6f], bl */
  W8((uint32_t)(ebp + 0xffffff91u), (ebx & 0xffu));
/* 81b240: mov byte ptr [ebp - 0x6e], al */
  W8((uint32_t)(ebp + 0xffffff92u), (eax & 0xffu));
/* 81b243: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b248u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b248: mov byte ptr [ebp - 0x6d], al */
  W8((uint32_t)(ebp + 0xffffff93u), (eax & 0xffu));
/* 81b24b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 81b24e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_81b251: /* 81b251: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81b254: mov dword ptr [edi + 0xa8], edx */
  W32((uint32_t)(edi + 0xa8u), edx);
/* 81b25a: movzx eax, byte ptr [esi + 0xf4] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xf4u)));
/* 81b261: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 81b264: je 0x81b26c */
  if (zf) goto L_81b26c;
L_81b266: /* 81b266: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81b267: je 0x81b2ce */
  if (zf) goto L_81b2ce;
L_81b269: /* 81b269: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81b26a: jne 0x81b279 */
  if (!zf) goto L_81b279;
L_81b26c: /* 81b26c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_81b26d: /* 81b26d: lea ecx, [esi + 0x414] */
  ecx = (uint32_t)(esi + 0x414u);
/* 81b273: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x81b279u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_81b279: /* 81b279: fld dword ptr [esi + 0x390] */
  { double v = F32((uint32_t)(esi + 0x390u)); FPUSH(v); }
/* 81b27f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b285: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b287: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b28a: jnp 0x81b342 */
  if (!pf) goto L_81b342;
L_81b290: /* 81b290: fld dword ptr [esi + 0x390] */
  { double v = F32((uint32_t)(esi + 0x390u)); FPUSH(v); }
/* 81b296: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 81b29c: fchs  */
  ST0 = -ST0;
/* 81b29e: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 81b2a4: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 81b2a7: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b2aa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b2ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b2ae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b2b1: jnp 0x81b33f */
  if (!pf) goto L_81b33f;
L_81b2b7: /* 81b2b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b2b9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b2bc: fcomp dword ptr [ebp - 0xbc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff44u)));
  FPOP();
/* 81b2c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b2c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b2c7: jp 0x81b339 */
  if (pf) goto L_81b339;
L_81b2c9: /* 81b2c9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b2cc: jmp 0x81b33f */
  goto L_81b33f;
L_81b2ce: /* 81b2ce: mov ebx, dword ptr [esi + 0x3f0] */
  ebx = R32((uint32_t)(esi + 0x3f0u));
/* 81b2d4: lea eax, [ebx + 0x17c] */
  eax = (uint32_t)(ebx + 0x17cu);
/* 81b2da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b2db: lea ecx, [ebp - 0x37c] */
  ecx = (uint32_t)(ebp + 0xfffffc84u);
/* 81b2e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b2e2: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 81b2e8: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b2eb: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x81b2f1u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 81b2f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b2f2: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 81b2f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81b2f9: mov ecx, edi */
  ecx = edi;
/* 81b2fb: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x81b301u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 81b301: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 81b307: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 81b30a: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 81b310: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 81b313: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 81b315: lea eax, [ebp - 0x1c0] */
  eax = (uint32_t)(ebp + 0xfffffe40u);
/* 81b31b: fadd dword ptr [ebx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x170u)));
/* 81b321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b322: fstp dword ptr [ebp - 0x1c0] */
  WF32((uint32_t)(ebp + 0xfffffe40u), ST0); FPOP();
/* 81b328: fstp dword ptr [ebp - 0x1bc] */
  WF32((uint32_t)(ebp + 0xfffffe44u), ST0); FPOP();
/* 81b32e: fstp dword ptr [ebp - 0x1b8] */
  WF32((uint32_t)(ebp + 0xfffffe48u), ST0); FPOP();
/* 81b334: jmp 0x81b26d */
  goto L_81b26d;
L_81b339: /* 81b339: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
L_81b33f: /* 81b33f: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
L_81b342: /* 81b342: fld dword ptr [esi + 0x394] */
  { double v = F32((uint32_t)(esi + 0x394u)); FPUSH(v); }
/* 81b348: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b34e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b350: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b353: jnp 0x81b398 */
  if (!pf) goto L_81b398;
L_81b355: /* 81b355: fld dword ptr [esi + 0x394] */
  { double v = F32((uint32_t)(esi + 0x394u)); FPUSH(v); }
/* 81b35b: mov edx, dword ptr [esi + 0x394] */
  edx = R32((uint32_t)(esi + 0x394u));
/* 81b361: fchs  */
  ST0 = -ST0;
/* 81b363: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 81b369: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 81b36c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b36f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b371: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b373: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b376: jnp 0x81b395 */
  if (!pf) goto L_81b395;
L_81b378: /* 81b378: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b37a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b37d: fcomp dword ptr [ebp - 0xd8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff28u)));
  FPOP();
/* 81b383: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b385: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b388: jp 0x81b38f */
  if (pf) goto L_81b38f;
L_81b38a: /* 81b38a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b38d: jmp 0x81b395 */
  goto L_81b395;
L_81b38f: /* 81b38f: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
L_81b395: /* 81b395: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
L_81b398: /* 81b398: fld dword ptr [esi + 0x398] */
  { double v = F32((uint32_t)(esi + 0x398u)); FPUSH(v); }
/* 81b39e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b3a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3a6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3a9: jnp 0x81b3e5 */
  if (!pf) goto L_81b3e5;
L_81b3ab: /* 81b3ab: fld dword ptr [esi + 0x398] */
  { double v = F32((uint32_t)(esi + 0x398u)); FPUSH(v); }
/* 81b3b1: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 81b3b7: fchs  */
  ST0 = -ST0;
/* 81b3b9: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 81b3bc: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 81b3bf: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b3c2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b3c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3c6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3c9: jnp 0x81b3e2 */
  if (!pf) goto L_81b3e2;
L_81b3cb: /* 81b3cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b3cd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b3d0: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* 81b3d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3d5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3d8: jp 0x81b3df */
  if (pf) goto L_81b3df;
L_81b3da: /* 81b3da: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b3dd: jmp 0x81b3e2 */
  goto L_81b3e2;
L_81b3df: /* 81b3df: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
L_81b3e2: /* 81b3e2: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
L_81b3e5: /* 81b3e5: lea ecx, [ebp - 0x310] */
  ecx = (uint32_t)(ebp + 0xfffffcf0u);
/* 81b3eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b3ec: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 81b3f2: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81b3f8u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81b3f8: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 81b3fb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81b3fd: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 81b400: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 81b403: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81b406: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 81b409: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81b40c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81b40e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 81b411: fstp dword ptr [ebp - 0x23c] */
  WF32((uint32_t)(ebp + 0xfffffdc4u), ST0); FPOP();
/* 81b417: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81b419: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b41c: fstp dword ptr [ebp - 0x25c] */
  WF32((uint32_t)(ebp + 0xfffffda4u), ST0); FPOP();
/* 81b422: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b425: fld dword ptr [ebp - 0x23c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdc4u)); FPUSH(v); }
/* 81b42b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b42e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 81b430: fsub dword ptr [ebp - 0x25c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffda4u)));
/* 81b436: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 81b438: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 81b43b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81b43d: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 81b440: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 81b443: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81b445: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 81b448: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b44a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b44c: je 0x81b47b */
  if (zf) goto L_81b47b;
L_81b44e: /* 81b44e: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 81b454: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b45a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b45c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b45f: jnp 0x81b47b */
  if (!pf) goto L_81b47b;
L_81b461: /* 81b461: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x81b467u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 81b467: fcomp dword ptr [esi + 0x344] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x344u)));
  FPOP();
/* 81b46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b46f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b472: jp 0x81b47b */
  if (pf) goto L_81b47b;
L_81b474: /* 81b474: or dword ptr [edi + 0xbc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xbcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0xbcu), r);
  }
L_81b47b: /* 81b47b: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 81b47e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81b481: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81b483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b484: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b485: mov ecx, esi */
  ecx = esi;
/* 81b487: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x81b48du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81b48d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 81b490: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81b491: jmp 0x819cc1 */
  goto L_819cc1;
L_81b496: /* 81b496: mov eax, dword ptr [esi + 0x288] */
  eax = R32((uint32_t)(esi + 0x288u));
/* 81b49c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81b4a2: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4a4: je 0x81b4d9 */
  if (zf) goto L_81b4d9;
L_81b4a6: /* 81b4a6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4a8: jne 0x81b4d9 */
  if (!zf) goto L_81b4d9;
L_81b4aa: /* 81b4aa: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81b4b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81b4b2: jle 0x81b4d9 */
  if ((zf || sf != of)) goto L_81b4d9;
L_81b4b4: /* 81b4b4: mov ecx, dword ptr [esi + 0x28c] */
  ecx = R32((uint32_t)(esi + 0x28cu));
/* 81b4ba: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b4bd: mov edx, eax */
  edx = eax;
/* 81b4bf: nop  */
L_81b4c0: /* 81b4c0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 81b4c2: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 81b4c5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b4c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b4c9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4cc: jne 0x81b4d3 */
  if (!zf) goto L_81b4d3;
L_81b4ce: /* 81b4ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b4d0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_81b4d3: /* 81b4d3: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b4d6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 81b4d7: jne 0x81b4c0 */
  if (!zf) goto L_81b4c0;
L_81b4d9: /* 81b4d9: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 81b4dc: fstp dword ptr [esi + 0x46c] */
  WF32((uint32_t)(esi + 0x46cu), ST0); FPOP();
/* 81b4e2: cmp ecx, dword ptr [esi + 0x45c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x45cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81b4e8: jge 0x81b4f2 */
  if ((sf == of)) goto L_81b4f2;
L_81b4ea: /* 81b4ea: cmp dword ptr [esi + 0x40c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81b4f0: jne 0x81b52d */
  if (!zf) goto L_81b52d;
L_81b4f2: /* 81b4f2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 81b4f5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b4fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b4fd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b500: jp 0x81b52d */
  if (pf) goto L_81b52d;
L_81b502: /* 81b502: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b509: jne 0x81b52d */
  if (!zf) goto L_81b52d;
L_81b50b: /* 81b50b: or dword ptr [esi + 0x43c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x43cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x43cu), r);
  }
/* 81b512: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 81b518: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81b51a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81b51d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81b524: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81b525: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81b526: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81b527: mov esp, ebp */
  esp = ebp;
/* 81b529: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81b52a: ret 4 */
  esp += 8; SPILL(); return;
L_81b52d: /* 81b52d: and dword ptr [esi + 0x43c], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x43cu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x43cu), r);
  }
/* 81b534: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 81b53a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81b53c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81b53f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81b546: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81b547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81b548: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81b549: mov esp, ebp */
  esp = ebp;
/* 81b54b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81b54c: ret 4 */
  esp += 8; SPILL(); return;
L_81b54f: /* 81b54f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81b552: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81b553: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81b554: xor eax, eax */
  eax = 0;
/* 81b556: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81b55d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81b55e: mov esp, ebp */
  esp = ebp;
/* 81b560: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81b561: ret 4 */
  esp += 8; SPILL(); return;
}

void f_819b89(void) {
  LOAD_REGS();
L_819b89: /* 819b89: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 819b8c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 819b91: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 819b97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819b98: mov dword ptr [ebp - 0x100], eax */
  W32((uint32_t)(ebp + 0xffffff00u), eax);
/* 819b9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x819ba3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_819ba3(); return;
}

void f_819ba3(void) {
  LOAD_REGS();
L_819ba3: /* 819ba3: push 0xa147a8 */
  { uint32_t v = 0xa147a8u; esp -= 4; W32(esp, v); }
/* 819ba8: push 0xae2724 */
  { uint32_t v = 0xae2724u; esp -= 4; W32(esp, v); }
/* 819bad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x819bb3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 819bb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 819bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819bb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819bba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x819bbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 819bbf: mov edx, dword ptr [esi + 0x30c] */
  edx = R32((uint32_t)(esi + 0x30cu));
/* 819bc5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 819bc8: jmp 0x819bd3 */
  goto L_819bd3;
L_819bd3: /* 819bd3: cmp dword ptr [esi + 0x490], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x490u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819bd9: je 0x819be7 */
  if (zf) goto L_819be7;
L_819bdb: /* 819bdb: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 819bde: fadd dword ptr [esi + 0x36c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x36cu)));
/* 819be4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
L_819be7: /* 819be7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 819bea: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819bf0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819bf2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819bf5: jne 0x819c1f */
  if (!zf) goto L_819c1f;
L_819bf7: /* 819bf7: cmp dword ptr [esi + 0x470], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x470u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819bfd: jne 0x819cbf */
  if (!zf) goto L_819cbf;
L_819c03: /* 819c03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 819c06: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 819c09: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819c0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819c0c: mov eax, dword ptr [esi + 0x410] */
  eax = R32((uint32_t)(esi + 0x410u));
/* 819c12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819c14: mov ecx, esi */
  ecx = esi;
/* 819c16: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x819c19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819c19: fstp dword ptr [esi + 0x410] */
  WF32((uint32_t)(esi + 0x410u), ST0); FPOP();
L_819c1f: /* 819c1f: cmp dword ptr [esi + 0x470], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x470u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 819c25: jne 0x819cbf */
  if (!zf) goto L_819cbf;
L_819c2b: /* 819c2b: mov eax, dword ptr [esi + 0x474] */
  eax = R32((uint32_t)(esi + 0x474u));
/* 819c31: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c33: mov ecx, dword ptr [esi + 0x45c] */
  ecx = R32((uint32_t)(esi + 0x45cu));
/* 819c39: jge 0x819c3f */
  if ((sf == of)) goto L_819c3f;
L_819c3b: /* 819c3b: xor eax, eax */
  eax = 0;
/* 819c3d: jmp 0x819c45 */
  goto L_819c45;
L_819c3f: /* 819c3f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c41: jl 0x819c45 */
  if ((sf != of)) goto L_819c45;
L_819c43: /* 819c43: mov eax, ecx */
  eax = ecx;
L_819c45: /* 819c45: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c47: jle 0x819cb5 */
  if ((zf || sf != of)) goto L_819cb5;
L_819c49: /* 819c49: mov edi, eax */
  edi = eax;
/* 819c4b: jmp 0x819c50 */
  goto L_819c50;
L_819c50: /* 819c50: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 819c56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819c58: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 819c5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819c5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819c66: mov ecx, esi */
  ecx = esi;
/* 819c68: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 819c72: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 819c7c: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 819c86: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819c8c: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 819c92: mov ecx, dword ptr [esi + 0x40c] */
  ecx = R32((uint32_t)(esi + 0x40cu));
/* 819c98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819c99: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819c9b: jge 0x819c9f */
  if ((sf == of)) goto L_819c9f;
L_819c9d: /* 819c9d: mov ecx, eax */
  ecx = eax;
L_819c9f: /* 819c9f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 819ca0: idiv dword ptr [esi + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x819ca0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 819ca6: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 819ca7: mov dword ptr [esi + 0x40c], ecx */
  W32((uint32_t)(esi + 0x40cu), ecx);
/* 819cad: mov dword ptr [esi + 0x408], edx */
  W32((uint32_t)(esi + 0x408u), edx);
/* 819cb3: jne 0x819c50 */
  if (!zf) goto L_819c50;
L_819cb5: /* 819cb5: mov dword ptr [esi + 0x474], 0 */
  W32((uint32_t)(esi + 0x474u), 0x0u);
L_819cbf: /* 819cbf: xor edi, edi */
  edi = 0;
L_819cc1: /* 819cc1: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 819cc7: mov ecx, dword ptr [esi + 0x45c] */
  ecx = R32((uint32_t)(esi + 0x45cu));
/* 819ccd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819ccf: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 819cd2: jg 0x819cd6 */
  if ((!zf && sf == of)) goto L_819cd6;
L_819cd4: /* 819cd4: mov eax, ecx */
  eax = ecx;
L_819cd6: /* 819cd6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 819cd8: jge 0x81b496 */
  if ((sf == of)) goto L_81b496;
L_819cde: /* 819cde: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 819ce4: imul edi, edi, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xc8u);
  edi = (uint32_t)r;
  }
/* 819cea: mov eax, dword ptr [edi + edx + 0xbc] */
  eax = R32((uint32_t)(edi + edx + 0xbcu));
/* 819cf1: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 819cf3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819cf5: jne 0x819d04 */
  if (!zf) goto L_819d04;
L_819cf7: /* 819cf7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 819cfa: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 819cfd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819cfe: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 819d01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 819d02: jmp 0x819cc1 */
  goto L_819cc1;
L_819d04: /* 819d04: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d06: je 0x819d15 */
  if (zf) goto L_819d15;
L_819d08: /* 819d08: cmp byte ptr [esi + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819d0f: je 0x819d15 */
  if (zf) goto L_819d15;
L_819d11: /* 819d11: xor ebx, ebx */
  ebx = 0;
/* 819d13: jmp 0x819d1a */
  goto L_819d1a;
L_819d15: /* 819d15: mov ebx, 1 */
  ebx = 0x1u;
L_819d1a: /* 819d1a: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d1c: je 0x819d2b */
  if (zf) goto L_819d2b;
L_819d1e: /* 819d1e: xor ebx, ebx */
  ebx = 0;
/* 819d20: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 819d23: mov dword ptr [edi + 0xbc], eax */
  W32((uint32_t)(edi + 0xbcu), eax);
/* 819d29: jmp 0x819d3a */
  goto L_819d3a;
L_819d2b: /* 819d2b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819d2e: fadd dword ptr [edi + 0xac] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xacu)));
/* 819d34: fstp dword ptr [edi + 0xac] */
  WF32((uint32_t)(edi + 0xacu), ST0); FPOP();
L_819d3a: /* 819d3a: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819d40: fcomp dword ptr [edi + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xb0u)));
  FPOP();
/* 819d46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819d48: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d4b: jne 0x819e03 */
  if (!zf) goto L_819e03;
L_819d51: /* 819d51: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819d58: jne 0x819d79 */
  if (!zf) goto L_819d79;
L_819d5a: /* 819d5a: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 819d60: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 819d63: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 819d66: mov dword ptr [edi + 0xbc], ecx */
  W32((uint32_t)(edi + 0xbcu), ecx);
/* 819d6c: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 819d6f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 819d70: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 819d73: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 819d74: jmp 0x819cc1 */
  goto L_819cc1;
L_819d79: /* 819d79: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 819d7f: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x819d85u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 819d85: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 819d8b: fsub dword ptr [edi + 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xb0u)));
/* 819d91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 819d93: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819d96: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819d9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 819da2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 819da4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 819da7: jnp 0x819dbc */
  if (!pf) goto L_819dbc;
L_819da9: /* 819da9: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 819dac: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 819db2: call 0x99cc5c */
  esp -= 4; W32(esp, 0x819db7u); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 819db7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819dba: jmp 0x819dc3 */
  goto L_819dc3;
L_819dbc: /* 819dbc: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_819dc3: /* 819dc3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 819dc6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 819dc8: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 819dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819dcf: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 819dd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819dd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 819dd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 819dd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819dd8: mov ecx, esi */
  ecx = esi;
/* 819dda: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 819de4: mov dword ptr [ebp - 0x15c], 0 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x0u);
/* 819dee: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 819df8: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x819dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 819dfe: jmp 0x81a120 */
  goto L_81a120;
L_819e03: /* 819e03: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819e05: je 0x81a120 */
  if (zf) goto L_81a120;
L_819e0b: /* 819e0b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e0e: mov edx, edi */
  edx = edi;
/* 819e10: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 819e13: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 819e16: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e19: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 819e1c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 819e1f: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 819e22: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 819e28: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e2a: fadd dword ptr [edi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x18u)));
/* 819e2d: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 819e30: fadd dword ptr [edi + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x1cu)));
/* 819e33: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 819e36: fld dword ptr [ebp - 0x20c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdf4u)); FPUSH(v); }
/* 819e3c: fadd dword ptr [edi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x20u)));
/* 819e3f: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
/* 819e42: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 819e44: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 819e46: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 819e49: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 819e4c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 819e4f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 819e52: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 819e55: fmul dword ptr [edi + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x90u)));
/* 819e5b: fld dword ptr [edi + 0x94] */
  { double v = F32((uint32_t)(edi + 0x94u)); FPUSH(v); }
/* 819e61: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 819e64: fld dword ptr [edi + 0x98] */
  { double v = F32((uint32_t)(edi + 0x98u)); FPUSH(v); }
/* 819e6a: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 819e6d: fstp dword ptr [ebp - 0x2a8] */
  WF32((uint32_t)(ebp + 0xfffffd58u), ST0); FPOP();
/* 819e73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e75: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e78: fstp dword ptr [ebp - 0x298] */
  WF32((uint32_t)(ebp + 0xfffffd68u), ST0); FPOP();
/* 819e7e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e81: fld dword ptr [ebp - 0x2a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffd58u)); FPUSH(v); }
/* 819e87: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819e8a: fld dword ptr [ebp - 0x298] */
  { double v = F32((uint32_t)(ebp + 0xfffffd68u)); FPUSH(v); }
/* 819e90: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 819e92: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 819e95: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 819e98: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819e9a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 819e9c: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 819e9f: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 819ea5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 819ea7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 819eaa: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 819ead: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 819eb0: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 819eb3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 819eb6: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 819eb9: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 819ebc: je 0x819f79 */
  if (zf) goto L_819f79;
L_819ec2: /* 819ec2: cmp byte ptr [esi + 0x2b8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2b8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 819ec9: jne 0x819f79 */
  if (!zf) goto L_819f79;
L_819ecf: /* 819ecf: mov ecx, dword ptr [esi + 0x484] */
  ecx = R32((uint32_t)(esi + 0x484u));
/* 819ed5: fld dword ptr [esi + 0x2c0] */
  { double v = F32((uint32_t)(esi + 0x2c0u)); FPUSH(v); }
/* 819edb: mov eax, dword ptr [edi + 0xc4] */
  eax = R32((uint32_t)(edi + 0xc4u));
/* 819ee1: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 819ee4: fmul dword ptr [ecx + eax*8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*8)));
/* 819ee7: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 819eea: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 819ef0: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 819ef6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 819ef9: fmul dword ptr [esi + 0x2c4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2c4u)));
/* 819eff: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 819f05: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 819f08: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 819f0e: fmul dword ptr [esi + 0x2c8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2c8u)));
/* 819f14: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 819f1a: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 819f20: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 819f26: fsub dword ptr [edi + 0x9c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x9cu)));
/* 819f2c: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 819f32: fsub dword ptr [edi + 0xa0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xa0u)));
/* 819f38: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 819f3e: fsub dword ptr [edi + 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xa4u)));
/* 819f44: mov dword ptr [edi + 0x9c], edx */
  W32((uint32_t)(edi + 0x9cu), edx);
/* 819f4a: mov dword ptr [edi + 0xa0], eax */
  W32((uint32_t)(edi + 0xa0u), eax);
/* 819f50: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 819f56: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 819f58: mov dword ptr [edi + 0xa4], ecx */
  W32((uint32_t)(edi + 0xa4u), ecx);
/* 819f5e: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 819f61: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 819f63: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 819f66: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 819f68: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 819f6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 819f6d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 819f70: fadd dword ptr [ebp - 0x200] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe00u)));
/* 819f76: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_819f79: /* 819f79: test byte ptr [esi + 0x1c8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1c8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 819f80: je 0x81a120 */
  if (zf) goto L_81a120;
L_819f86: /* 819f86: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 819f88: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 819f8b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 819f8d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 819f90: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 819f93: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 819f99: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 819f9f: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 819fa5: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 819fab: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 819fae: lea eax, [ebp - 0x1cc] */
  eax = (uint32_t)(ebp + 0xfffffe34u);
/* 819fb4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 819fb7: mov dword ptr [ebp - 0x1cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe34u), 0x3f800000u);
/* 819fc1: fsub dword ptr [ebp - 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff50u)));
/* 819fc7: mov dword ptr [ebp - 0x1c8], 0 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x0u);
/* 819fd1: mov dword ptr [ebp - 0x1c4], 0 */
  W32((uint32_t)(ebp + 0xfffffe3cu), 0x0u);
/* 819fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 819fdc: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 819fdf: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 819fe2: fsub dword ptr [ebp - 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff54u)));
/* 819fe8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 819feb: fld dword ptr [edi + 0x60] */
  { double v = F32((uint32_t)(edi + 0x60u)); FPUSH(v); }
/* 819fee: fmul dword ptr [edi + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x54u)));
/* 819ff1: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 819ff4: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 819ffa: call 0x99c958 */
  esp -= 4; W32(esp, 0x819fffu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 819fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a000: lea ecx, [ebp - 0x328] */
  ecx = (uint32_t)(ebp + 0xfffffcd8u);
/* 81a006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a007: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a00a: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a010u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a010: fld dword ptr [edi + 0x64] */
  { double v = F32((uint32_t)(edi + 0x64u)); FPUSH(v); }
/* 81a013: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a015: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 81a018: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a01b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a01e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81a021: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a024: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a027: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 81a02d: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 81a033: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a036: mov dword ptr [ebp - 0x1d8], 0 */
  W32((uint32_t)(ebp + 0xfffffe28u), 0x0u);
/* 81a040: mov dword ptr [ebp - 0x1d4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe2cu), 0x3f800000u);
/* 81a04a: mov dword ptr [ebp - 0x1d0], 0 */
  W32((uint32_t)(ebp + 0xfffffe30u), 0x0u);
/* 81a054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a055: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a05au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a05b: lea ecx, [ebp - 0x2bc] */
  ecx = (uint32_t)(ebp + 0xfffffd44u);
/* 81a061: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a062: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a065: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a06bu); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a06b: fld dword ptr [edi + 0x68] */
  { double v = F32((uint32_t)(edi + 0x68u)); FPUSH(v); }
/* 81a06e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a070: fmul dword ptr [edi + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5cu)));
/* 81a073: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a076: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a079: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81a07c: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a07f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a082: lea eax, [ebp - 0x184] */
  eax = (uint32_t)(ebp + 0xfffffe7cu);
/* 81a088: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 81a08e: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a091: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 81a09b: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 81a0a5: mov dword ptr [ebp - 0x17c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x3f800000u);
/* 81a0af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a0b0: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a0b5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a0b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a0b6: lea ecx, [ebp - 0x340] */
  ecx = (uint32_t)(ebp + 0xfffffcc0u);
/* 81a0bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a0bd: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 81a0c0: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x81a0c6u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 81a0c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a0c8: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 81a0cb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81a0ce: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 81a0d1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 81a0d4: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 81a0d7: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 81a0da: mov eax, edi */
  eax = edi;
/* 81a0dc: fadd dword ptr [ebp - 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 81a0e2: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 81a0e8: mov ecx, dword ptr [ebp - 0x13c] */
  ecx = R32((uint32_t)(ebp + 0xfffffec4u));
/* 81a0ee: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 81a0f1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81a0f3: fadd dword ptr [ebp - 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff50u)));
/* 81a0f9: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 81a0ff: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 81a102: mov edx, dword ptr [ebp - 0x138] */
  edx = R32((uint32_t)(ebp + 0xfffffec8u));
/* 81a108: fadd dword ptr [ebp - 0xac] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff54u)));
/* 81a10e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81a111: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 81a117: mov ecx, dword ptr [ebp - 0x134] */
  ecx = R32((uint32_t)(ebp + 0xfffffeccu));
/* 81a11d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_81a120: /* 81a120: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a122: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81a129: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 81a130: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 81a137: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 81a13e: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 81a145: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 81a14c: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 81a153: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a159: /* 81a159: cmp byte ptr [esi + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81a160: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a166: /* 81a166: test byte ptr [esi + 0x34], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a16a: je 0x81a30a */
  if (zf) goto L_81a30a;
L_81a170: /* 81a170: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 81a172: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 81a175: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 81a177: lea edx, [ebp - 0x2d4] */
  edx = (uint32_t)(ebp + 0xfffffd2cu);
/* 81a17d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a17e: lea ecx, [ebp - 0x1b4] */
  ecx = (uint32_t)(ebp + 0xfffffe4cu);
/* 81a184: fstp dword ptr [ebp - 0x1b4] */
  WF32((uint32_t)(ebp + 0xfffffe4cu), ST0); FPOP();
/* 81a18a: mov dword ptr [ebp - 0x260], 0 */
  W32((uint32_t)(ebp + 0xfffffda0u), 0x0u);
/* 81a194: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 81a197: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 81a19a: fstp dword ptr [ebp - 0x1b0] */
  WF32((uint32_t)(ebp + 0xfffffe50u), ST0); FPOP();
/* 81a1a0: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 81a1a3: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 81a1a6: fstp dword ptr [ebp - 0x1ac] */
  WF32((uint32_t)(ebp + 0xfffffe54u), ST0); FPOP();
/* 81a1ac: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x81a1b2u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 81a1b2: fld dword ptr [esi + 0x430] */
  { double v = F32((uint32_t)(esi + 0x430u)); FPUSH(v); }
/* 81a1b8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81a1ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81a1bd: fld dword ptr [esi + 0x434] */
  { double v = F32((uint32_t)(esi + 0x434u)); FPUSH(v); }
/* 81a1c3: mov dword ptr [ebp - 0x154], 0 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x0u);
/* 81a1cd: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 81a1d0: mov ecx, dword ptr [ebp - 0x154] */
  ecx = R32((uint32_t)(ebp + 0xfffffeacu));
/* 81a1d6: fld dword ptr [esi + 0x438] */
  { double v = F32((uint32_t)(esi + 0x438u)); FPUSH(v); }
/* 81a1dc: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 81a1e6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 81a1e9: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 81a1ef: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 81a1f5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a1f8: fstp dword ptr [ebp - 0x248] */
  WF32((uint32_t)(ebp + 0xfffffdb8u), ST0); FPOP();
/* 81a1fe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a200: mov dword ptr [ebp - 0x14c], 0 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x0u);
/* 81a20a: fmul dword ptr [edi + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x6cu)));
/* 81a20d: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 81a213: fmul dword ptr [edi + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x70u)));
/* 81a216: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 81a21c: fld dword ptr [ebp - 0x248] */
  { double v = F32((uint32_t)(ebp + 0xfffffdb8u)); FPUSH(v); }
/* 81a222: fmul dword ptr [edi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x74u)));
/* 81a225: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 81a22b: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 81a231: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 81a233: fstp dword ptr [ebp - 0x19c] */
  WF32((uint32_t)(ebp + 0xfffffe64u), ST0); FPOP();
/* 81a239: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 81a23f: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 81a242: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 81a248: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 81a24e: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 81a251: fstp dword ptr [ebp - 0x194] */
  WF32((uint32_t)(ebp + 0xfffffe6cu), ST0); FPOP();
/* 81a257: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a259: mov eax, esp */
  eax = esp;
/* 81a25b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81a25d: mov ecx, dword ptr [ebp - 0x150] */
  ecx = R32((uint32_t)(ebp + 0xfffffeb0u));
/* 81a263: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 81a266: mov ecx, dword ptr [ebp - 0x14c] */
  ecx = R32((uint32_t)(ebp + 0xfffffeb4u));
/* 81a26c: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 81a271: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81a274: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81a275: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 81a27b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a27c: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 81a282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a283: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 81a289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a28a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a28d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81a293u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a295: jne 0x81a30a */
  if (!zf) goto L_81a30a;
L_81a297: /* 81a297: fld dword ptr [ebp - 0x284] */
  { double v = F32((uint32_t)(ebp + 0xfffffd7cu)); FPUSH(v); }
/* 81a29d: mov edx, dword ptr [ebp - 0x278] */
  edx = R32((uint32_t)(ebp + 0xfffffd88u));
/* 81a2a3: fsub dword ptr [ebp - 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff38u)));
/* 81a2a9: mov eax, dword ptr [ebp - 0x274] */
  eax = R32((uint32_t)(ebp + 0xfffffd8cu));
/* 81a2af: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 81a2b5: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 81a2b8: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 81a2be: mov edx, dword ptr [ebp - 0x148] */
  edx = R32((uint32_t)(ebp + 0xfffffeb8u));
/* 81a2c4: fld dword ptr [ebp - 0x280] */
  { double v = F32((uint32_t)(ebp + 0xfffffd80u)); FPUSH(v); }
/* 81a2ca: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 81a2cd: fsub dword ptr [ebp - 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff3cu)));
/* 81a2d3: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 81a2d6: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 81a2d9: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 81a2e0: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 81a2e6: fld dword ptr [ebp - 0x27c] */
  { double v = F32((uint32_t)(ebp + 0xfffffd84u)); FPUSH(v); }
/* 81a2ec: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 81a2f2: fsub dword ptr [ebp - 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff40u)));
/* 81a2f8: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 81a2fb: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 81a301: mov ecx, dword ptr [ebp - 0x140] */
  ecx = R32((uint32_t)(ebp + 0xfffffec0u));
/* 81a307: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
L_81a30a: /* 81a30a: test byte ptr [esi + 0x5c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x5cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a30e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81a311: je 0x81a426 */
  if (zf) goto L_81a426;
L_81a317: /* 81a317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a319: jne 0x81a42e */
  if (!zf) goto L_81a42e;
L_81a31f: /* 81a31f: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 81a322: xor edx, edx */
  edx = 0;
/* 81a324: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a326: jle 0x81a8e5 */
  if ((zf || sf != of)) goto L_81a8e5;
L_81a32c: /* 81a32c: mov ebx, dword ptr [esi + 0x60] */
  ebx = R32((uint32_t)(esi + 0x60u));
/* 81a32f: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
L_81a332: /* 81a332: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a335: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 81a338: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 81a33b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 81a33e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a340: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 81a342: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 81a344: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a346: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 81a349: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a34f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a351: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a354: jne 0x81a361 */
  if (!zf) goto L_81a361;
L_81a356: /* 81a356: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a358: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 81a35f: jmp 0x81a37c */
  goto L_81a37c;
L_81a361: /* 81a361: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a367: mov dword ptr [ebp - 0x24], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xffffffffu);
/* 81a36e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a370: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a373: jnp 0x81a37c */
  if (!pf) goto L_81a37c;
L_81a375: /* 81a375: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_81a37c: /* 81a37c: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81a37e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 81a380: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 81a383: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 81a386: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a388: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a38b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81a38e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81a390: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 81a393: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a399: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a39b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a39e: jne 0x81a3ab */
  if (!zf) goto L_81a3ab;
L_81a3a0: /* 81a3a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a3a2: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 81a3a9: jmp 0x81a3c6 */
  goto L_81a3c6;
L_81a3ab: /* 81a3ab: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a3b1: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 81a3b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a3ba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a3bd: jnp 0x81a3c6 */
  if (!pf) goto L_81a3c6;
L_81a3bf: /* 81a3bf: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_81a3c6: /* 81a3c6: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81a3c9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81a3cc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 81a3ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a3d0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a3d3: jp 0x81a3e9 */
  if (pf) goto L_81a3e9;
L_81a3d5: /* 81a3d5: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 81a3d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81a3d9: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81a3dc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a3de: jl 0x81a332 */
  if ((sf != of)) goto L_81a332;
L_81a3e4: /* 81a3e4: jmp 0x81a8e5 */
  goto L_81a8e5;
L_81a3e9: /* 81a3e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81a3ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a3eb: lea edx, [ebp - 0x31c] */
  edx = (uint32_t)(ebp + 0xfffffce4u);
/* 81a3f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81a3f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a3f3: call 0x6c8fbc */
  esp -= 4; W32(esp, 0x81a3f8u); SPILL(); f_6c8fbc(); if (g_unwind) return; RELOAD();
/* 81a3f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81a3fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81a3fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81a400: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 81a403: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 81a405: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 81a408: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 81a40b: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 81a40e: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 81a411: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 81a414: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 81a417: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a41a: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 81a41d: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 81a424: jmp 0x81a42e */
  goto L_81a42e;
L_81a426: /* 81a426: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a428: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a42e: /* 81a42e: mov al, byte ptr [esi + 0x2f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2f4u))) & 0xffu);
/* 81a434: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a436: je 0x81a5c9 */
  if (zf) goto L_81a5c9;
L_81a43c: /* 81a43c: mov ecx, dword ptr [esi + 0x3f0] */
  ecx = R32((uint32_t)(esi + 0x3f0u));
/* 81a442: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 81a448: mov ecx, dword ptr [edx + 0x40] */
  ecx = R32((uint32_t)(edx + 0x40u));
/* 81a44b: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 81a44e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a450: je 0x81a5c9 */
  if (zf) goto L_81a5c9;
L_81a456: /* 81a456: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 81a459: xor ebx, ebx */
  ebx = 0;
/* 81a45b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a45c: je 0x81a481 */
  if (zf) goto L_81a481;
L_81a45e: /* 81a45e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a45f: je 0x81a479 */
  if (zf) goto L_81a479;
L_81a461: /* 81a461: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81a462: jne 0x81a490 */
  if (!zf) goto L_81a490;
L_81a464: /* 81a464: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x81a46au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 81a46a: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 81a470: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a475u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a475: mov ebx, eax */
  ebx = eax;
/* 81a477: jmp 0x81a490 */
  goto L_81a490;
L_81a479: /* 81a479: mov ebx, dword ptr [edi + 0xb8] */
  ebx = R32((uint32_t)(edi + 0xb8u));
/* 81a47f: jmp 0x81a490 */
  goto L_81a490;
L_81a481: /* 81a481: mov ebx, dword ptr [esi + 0x460] */
  ebx = R32((uint32_t)(esi + 0x460u));
/* 81a487: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 81a48a: mov dword ptr [esi + 0x460], edx */
  W32((uint32_t)(esi + 0x460u), edx);
L_81a490: /* 81a490: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 81a496: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81a49cu); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81a49c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a4a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a4a4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a4a7: jnp 0x81a4bd */
  if (!pf) goto L_81a4bd;
L_81a4a9: /* 81a4a9: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 81a4af: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x81a4b5u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 81a4b5: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a4bb: jmp 0x81a4c3 */
  goto L_81a4c3;
L_81a4bd: /* 81a4bd: fild dword ptr [esi + 0x2d8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
L_81a4c3: /* 81a4c3: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a4c8u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a4c8: fld dword ptr [esi + 0x2f8] */
  { double v = F32((uint32_t)(esi + 0x2f8u)); FPUSH(v); }
/* 81a4ce: mov ecx, eax */
  ecx = eax;
/* 81a4d0: mov eax, ebx */
  eax = ebx;
/* 81a4d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81a4d3: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x81a4d3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81a4d5: mov ebx, edx */
  ebx = edx;
/* 81a4d7: call 0x99c958 */
  esp -= 4; W32(esp, 0x81a4dcu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81a4dc: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81a4de: mov eax, dword ptr [esi + 0x2d8] */
  eax = R32((uint32_t)(esi + 0x2d8u));
/* 81a4e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 81a4e5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a4e7: jge 0x81a4ed */
  if ((sf == of)) goto L_81a4ed;
L_81a4e9: /* 81a4e9: xor ebx, ebx */
  ebx = 0;
/* 81a4eb: jmp 0x81a4f3 */
  goto L_81a4f3;
L_81a4ed: /* 81a4ed: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a4ef: jl 0x81a4f3 */
  if ((sf != of)) goto L_81a4f3;
L_81a4f1: /* 81a4f1: mov ebx, eax */
  ebx = eax;
L_81a4f3: /* 81a4f3: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 81a4f9: lea ebx, [ebx + ebx*4] */
  ebx = (uint32_t)(ebx + ebx*4);
/* 81a4fc: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 81a4ff: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81a501: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a504: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x81a50au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 81a50a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81a50d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a510: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a513: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a519u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a519: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81a51c: lea ecx, [esi + 0x300] */
  ecx = (uint32_t)(esi + 0x300u);
/* 81a522: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a528u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a528: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 81a52b: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81a52e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a530: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a533: jne 0x81a5c9 */
  if (!zf) goto L_81a5c9;
L_81a539: /* 81a539: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a53f: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 81a545: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 81a548: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 81a54b: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 81a551: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 81a554: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a55a: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 81a55c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a55e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a560: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 81a563: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 81a565: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a568: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 81a56b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 81a56e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a574u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a574: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a575: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a578: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a57b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a57e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a584u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a584: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a585: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a588: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a58b: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81a58e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a594u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a594: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a597: fmul dword ptr [eax + 0x2cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2ccu)));
/* 81a59d: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 81a5a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81a5a3: mov ecx, esp */
  ecx = esp;
/* 81a5a5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 81a5a9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81a5ab: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 81a5ae: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81a5b1: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 81a5b4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81a5b7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a5ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81a5bc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81a5bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a5c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a5c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a5c3: call dword ptr [ebx + 0x80] */
  { uint32_t t = R32((uint32_t)(ebx + 0x80u)); esp -= 4; W32(esp, 0x81a5c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81a5c9: /* 81a5c9: test byte ptr [esi + 0x6c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x6cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a5cd: je 0x81a646 */
  if (zf) goto L_81a646;
L_81a5cf: /* 81a5cf: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 81a5d2: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x81a5d8u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 81a5d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a5d9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a5dc: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x81a5e2u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 81a5e2: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 81a5e8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a5eb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81a5ec: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a5ee: jl 0x81a646 */
  if ((sf != of)) goto L_81a646;
L_81a5f0: /* 81a5f0: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a5f7: je 0x819d5a */
  if (zf) goto L_819d5a;
L_81a5fd: /* 81a5fd: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a600: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81a602: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 81a608: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 81a60e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a60f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a613: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a614: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 81a617: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a61a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a61b: mov ecx, esi */
  ecx = esi;
/* 81a61d: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 81a627: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 81a631: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 81a63b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x81a641u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a641: jmp 0x81a789 */
  goto L_81a789;
L_81a646: /* 81a646: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a649: lea ebx, [edi + 0x18] */
  ebx = (uint32_t)(edi + 0x18u);
/* 81a64c: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 81a64f: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 81a652: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a655: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a656: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 81a659: lea eax, [ebp - 0x2ec] */
  eax = (uint32_t)(ebp + 0xfffffd14u);
/* 81a65f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a663: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 81a666: mov ecx, ebx */
  ecx = ebx;
/* 81a668: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 81a66e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a670: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a676: fstp dword ptr [ebp - 0x2a4] */
  WF32((uint32_t)(ebp + 0xfffffd5cu), ST0); FPOP();
/* 81a67c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a682: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 81a688: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81a68e: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81a690: fsub dword ptr [ebp - 0x2a4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffd5cu)));
/* 81a696: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 81a698: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 81a69b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81a69d: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 81a6a0: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 81a6a3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81a6a5: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 81a6a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a6aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a6ac: call dword ptr [0xcfaaf0] */
  esp -= 4; W32(esp, 0x81a6b2u); SPILL(); f_4e31c5(); if (g_unwind) return; /* Core!?MirrorByVector@FVector@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 81a6b2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81a6b4: mov ecx, ebx */
  ecx = ebx;
/* 81a6b6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81a6b8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81a6bb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81a6be: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81a6c1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81a6c4: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 81a6ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a6cb: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 81a6ce: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a6d4u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a6d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a6d5: lea edx, [ebp - 0x304] */
  edx = (uint32_t)(ebp + 0xfffffcfcu);
/* 81a6db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81a6dc: mov ecx, ebx */
  ecx = ebx;
/* 81a6de: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x81a6e4u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 81a6e4: test byte ptr [esi + 0x260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a6eb: je 0x81a711 */
  if (zf) goto L_81a711;
L_81a6ed: /* 81a6ed: lea eax, [ebp - 0x334] */
  eax = (uint32_t)(ebp + 0xfffffcccu);
/* 81a6f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a6f4: lea ecx, [esi + 0x264] */
  ecx = (uint32_t)(esi + 0x264u);
/* 81a6fa: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a700u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a701: lea ecx, [ebp - 0x2c8] */
  ecx = (uint32_t)(ebp + 0xfffffd38u);
/* 81a707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a708: lea ecx, [edi + 0x30] */
  ecx = (uint32_t)(edi + 0x30u);
/* 81a70b: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x81a711u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
L_81a711: /* 81a711: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a714: mov ebx, edi */
  ebx = edi;
/* 81a716: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a71c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a71f: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a725: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a728: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a72e: fstp dword ptr [ebp - 0x230] */
  WF32((uint32_t)(ebp + 0xfffffdd0u), ST0); FPOP();
/* 81a734: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a736: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 81a739: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 81a73f: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 81a745: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 81a747: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 81a74a: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 81a750: fld dword ptr [ebp - 0x230] */
  { double v = F32((uint32_t)(ebp + 0xfffffdd0u)); FPUSH(v); }
/* 81a756: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 81a75c: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 81a75f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 81a762: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 81a768: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 81a76e: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 81a771: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 81a774: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 81a776: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 81a77c: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 81a77f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a780: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 81a783: mov dword ptr [edi + 0xb8], eax */
  W32((uint32_t)(edi + 0xb8u), eax);
L_81a789: /* 81a789: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 81a78c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a78e: jl 0x81a8e5 */
  if ((sf != of)) goto L_81a8e5;
L_81a794: /* 81a794: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 81a79a: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 81a7a0: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 81a7a3: test byte ptr [ebx + 0x3f4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x3f4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a7aa: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a7b0: /* 81a7b0: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 81a7b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a7b8: je 0x81a8e5 */
  if (zf) goto L_81a8e5;
L_81a7be: /* 81a7be: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 81a7c1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a7c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a7c9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a7cc: jnp 0x81a8e5 */
  if (!pf) goto L_81a8e5;
L_81a7d2: /* 81a7d2: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 81a7d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a7d7: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 81a7de: jle 0x81a8e5 */
  if ((zf || sf != of)) goto L_81a8e5;
L_81a7e4: /* 81a7e4: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a7e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81a7ea: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a7f0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 81a7f2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a7f5: lea eax, [ebp - 0x178] */
  eax = (uint32_t)(ebp + 0xfffffe88u);
/* 81a7fb: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a802: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a805: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a80b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 81a811: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 81a813: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81a815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a816: fstp dword ptr [ebp - 0x1e8] */
  WF32((uint32_t)(ebp + 0xfffffe18u), ST0); FPOP();
/* 81a81c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81a81f: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 81a822: mov ecx, ebx */
  ecx = ebx;
/* 81a824: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 81a82a: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 81a82d: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 81a833: fld dword ptr [ebp - 0x1e8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe18u)); FPUSH(v); }
/* 81a839: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 81a83c: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 81a842: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x81a848u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81a848: test byte ptr [esi + 0x98], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x98u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a84f: je 0x81a8af */
  if (zf) goto L_81a8af;
L_81a851: /* 81a851: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a857: mov ecx, dword ptr [ebx + 0x3fc] */
  ecx = R32((uint32_t)(ebx + 0x3fcu));
/* 81a85d: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 81a863: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81a865: lea ecx, [ebp - 0x2e0] */
  ecx = (uint32_t)(ebp + 0xfffffd20u);
/* 81a86b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a86c: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 81a872: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81a875: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81a87bu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81a87b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 81a87e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81a880: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 81a883: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 81a886: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 81a889: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 81a88c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81a88f: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 81a895: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81a897: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* 81a89a: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 81a89d: fadd dword ptr [eax + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x1cu)));
/* 81a8a0: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 81a8a3: fld dword ptr [ebp - 0x1f4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe0cu)); FPUSH(v); }
/* 81a8a9: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* 81a8ac: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
L_81a8af: /* 81a8af: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 81a8b5: mov ecx, dword ptr [ebx + 0x40c] */
  ecx = R32((uint32_t)(ebx + 0x40cu));
/* 81a8bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a8bc: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a8be: jge 0x81a8c2 */
  if ((sf == of)) goto L_81a8c2;
L_81a8c0: /* 81a8c0: mov ecx, eax */
  ecx = eax;
L_81a8c2: /* 81a8c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 81a8c3: idiv dword ptr [ebx + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x81a8c3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 81a8c9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81a8cc: mov dword ptr [ebx + 0x40c], ecx */
  W32((uint32_t)(ebx + 0x40cu), ecx);
/* 81a8d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81a8d3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 81a8d6: mov dword ptr [ebx + 0x408], edx */
  W32((uint32_t)(ebx + 0x408u), edx);
/* 81a8dc: cmp eax, dword ptr [esi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a8df: jl 0x81a7e4 */
  if ((sf != of)) goto L_81a7e4;
L_81a8e5: /* 81a8e5: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81a8eb: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 81a8f1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a8f7: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 81a8fe: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 81a901: mov byte ptr [ebp - 0x20], 0xff */
  W8((uint32_t)(ebp + 0xffffffe0u), 0xffu);
/* 81a905: mov byte ptr [ebp - 0x1f], 0xff */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xffu);
/* 81a909: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a90b: mov byte ptr [ebp - 0x1e], 0xff */
  W8((uint32_t)(ebp + 0xffffffe2u), 0xffu);
/* 81a90f: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 81a913: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a916: jnp 0x81a930 */
  if (!pf) goto L_81a930;
L_81a918: /* 81a918: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81a91b: fdiv dword ptr [edi + 0xb0] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0xb0u)));
/* 81a921: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81a927: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a929: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a92c: jp 0x81a963 */
  if (pf) goto L_81a963;
L_81a92e: /* 81a92e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81a930: /* 81a930: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_81a937: /* 81a937: mov eax, dword ptr [esi + 0x288] */
  eax = R32((uint32_t)(esi + 0x288u));
/* 81a93d: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a93f: je 0x81aa47 */
  if (zf) goto L_81aa47;
L_81a945: /* 81a945: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a947: je 0x81a980 */
  if (zf) goto L_81a980;
L_81a949: /* 81a949: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 81a94f: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a955: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 81a95b: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 81a95e: jmp 0x81aa47 */
  goto L_81aa47;
L_81a963: /* 81a963: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 81a969: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a96b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a96e: jp 0x81a975 */
  if (pf) goto L_81a975;
L_81a970: /* 81a970: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81a973: jmp 0x81a937 */
  goto L_81a937;
L_81a975: /* 81a975: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81a977: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 81a97e: jmp 0x81a937 */
  goto L_81a937;
L_81a980: /* 81a980: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81a986: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81a98c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a98e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81a991: jnp 0x81aa47 */
  if (!pf) goto L_81aa47;
L_81a997: /* 81a997: fld dword ptr [esi + 0x298] */
  { double v = F32((uint32_t)(esi + 0x298u)); FPUSH(v); }
/* 81a99d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81a99e: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81a9a4: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81a9a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81a9aa: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81a9b0u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81a9b0: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81a9b6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81a9b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81a9bc: xor ecx, ecx */
  ecx = 0;
/* 81a9be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81a9c0: jle 0x81aa47 */
  if ((zf || sf != of)) goto L_81aa47;
L_81a9c6: /* 81a9c6: mov ebx, dword ptr [esi + 0x28c] */
  ebx = R32((uint32_t)(esi + 0x28cu));
/* 81a9cc: mov edx, ebx */
  edx = ebx;
/* 81a9ce: mov edi, edi */
  edi = edi;
L_81a9d0: /* 81a9d0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81a9d2: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81a9d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81a9d7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81a9da: je 0x81a9ec */
  if (zf) goto L_81a9ec;
L_81a9dc: /* 81a9dc: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81a9e3: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81a9e6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81a9e8: jl 0x81a9d0 */
  if ((sf != of)) goto L_81a9d0;
L_81a9ea: /* 81a9ea: jmp 0x81aa47 */
  goto L_81aa47;
L_81a9ec: /* 81a9ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81a9ee: fld dword ptr [ebx + ecx*8 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0x4u)); FPUSH(v); }
/* 81a9f2: fld dword ptr [ebx + ecx*8] */
  { double v = F32((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 81a9f5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81a9f8: je 0x81aa04 */
  if (zf) goto L_81aa04;
L_81a9fa: /* 81a9fa: fld dword ptr [ebx + ecx*8 - 4] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0xfffffffcu)); FPUSH(v); }
/* 81a9fe: fld dword ptr [ebx + ecx*8 - 8] */
  { double v = F32((uint32_t)(ebx + ecx*8 + 0xfffffff8u)); FPUSH(v); }
/* 81aa02: jmp 0x81aa10 */
  goto L_81aa10;
L_81aa04: /* 81aa04: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81aa0a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_81aa10: /* 81aa10: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81aa13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aa19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aa1b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aa1e: jnp 0x81aa30 */
  if (!pf) goto L_81aa30;
L_81aa20: /* 81aa20: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81aa23: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aa25: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 81aa28: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81aa2a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 81aa2c: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81aa2e: jmp 0x81aa38 */
  goto L_81aa38;
L_81aa30: /* 81aa30: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aa32: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81aa38: /* 81aa38: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aa3a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aa3c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81aa3e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 81aa40: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 81aa43: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81aa45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81aa47: /* 81aa47: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa4a: lea eax, [edi + 0x6c] */
  eax = (uint32_t)(edi + 0x6cu);
/* 81aa4d: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 81aa50: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 81aa56: mov ecx, dword ptr [ebp - 0x130] */
  ecx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 81aa5c: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa5f: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 81aa62: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 81aa68: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 81aa6b: mov edx, dword ptr [ebp - 0x12c] */
  edx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 81aa71: fmul dword ptr [edi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x2cu)));
/* 81aa74: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81aa76: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81aa79: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 81aa7f: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 81aa85: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81aa88: test byte ptr [esi + 0x3d4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3d4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81aa8f: je 0x81ac54 */
  if (zf) goto L_81ac54;
L_81aa95: /* 81aa95: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81aa9b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aaa1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aaa3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aaa6: jnp 0x81ac54 */
  if (!pf) goto L_81ac54;
L_81aaac: /* 81aaac: fld dword ptr [esi + 0x3e4] */
  { double v = F32((uint32_t)(esi + 0x3e4u)); FPUSH(v); }
/* 81aab2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81aab3: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81aab9: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81aabc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81aabf: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81aac5u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81aac5: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 81aacb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81aace: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81aad1: xor ecx, ecx */
  ecx = 0;
/* 81aad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81aad5: jle 0x81ac54 */
  if ((zf || sf != of)) goto L_81ac54;
L_81aadb: /* 81aadb: mov ebx, dword ptr [esi + 0x3d8] */
  ebx = R32((uint32_t)(esi + 0x3d8u));
/* 81aae1: mov edx, ebx */
  edx = ebx;
L_81aae3: /* 81aae3: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81aae5: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81aae8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aaea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81aaed: je 0x81ab02 */
  if (zf) goto L_81ab02;
L_81aaef: /* 81aaef: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 81aaf5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81aaf6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81aaf9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81aafb: jl 0x81aae3 */
  if ((sf != of)) goto L_81aae3;
L_81aafd: /* 81aafd: jmp 0x81ac54 */
  goto L_81ac54;
L_81ab02: /* 81ab02: mov edx, ecx */
  edx = ecx;
/* 81ab04: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 81ab07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ab09: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* 81ab0c: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 81ab0f: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 81ab12: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81ab14: mov dword ptr [ebp - 0xf0], ebx */
  W32((uint32_t)(ebp + 0xffffff10u), ebx);
/* 81ab1a: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81ab1d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81ab20: mov dword ptr [ebp - 0xec], ebx */
  W32((uint32_t)(ebp + 0xffffff14u), ebx);
/* 81ab26: mov dword ptr [ebp - 0xe8], edx */
  W32((uint32_t)(ebp + 0xffffff18u), edx);
/* 81ab2c: je 0x81ab4a */
  if (zf) goto L_81ab4a;
L_81ab2e: /* 81ab2e: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 81ab31: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 81ab34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ab36: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 81ab3c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81ab3f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81ab42: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 81ab48: jmp 0x81ab8c */
  goto L_81ab8c;
L_81ab4a: /* 81ab4a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ab50: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 81ab5a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 81ab60: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 81ab6a: mov eax, dword ptr [ebp - 0x114] */
  eax = R32((uint32_t)(ebp + 0xfffffeecu));
/* 81ab70: mov dword ptr [ebp - 0x110], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x3f800000u);
/* 81ab7a: mov ecx, dword ptr [ebp - 0x110] */
  ecx = R32((uint32_t)(ebp + 0xfffffef0u));
/* 81ab80: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 81ab86: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
L_81ab8c: /* 81ab8c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ab8e: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 81ab94: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ab9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ab9c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ab9f: jnp 0x81abb0 */
  if (!pf) goto L_81abb0;
L_81aba1: /* 81aba1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81aba4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aba6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aba8: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81abaa: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81abac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abae: jmp 0x81abba */
  goto L_81abba;
L_81abb0: /* 81abb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abb4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81abba: /* 81abba: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 81abc0: lea edx, [edi + 0x90] */
  edx = (uint32_t)(edi + 0x90u);
/* 81abc6: fsub dword ptr [ebp - 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff74u)));
/* 81abcc: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 81abd2: fsub dword ptr [ebp - 0x88] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff78u)));
/* 81abd8: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 81abde: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 81abe4: fstp dword ptr [ebp - 0x1dc] */
  WF32((uint32_t)(ebp + 0xfffffe24u), ST0); FPOP();
/* 81abea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abec: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81abee: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 81abf4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81abf6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81abf8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abfa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81abfc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81abfe: fmul dword ptr [ebp - 0x1dc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe24u)));
/* 81ac04: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 81ac0a: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 81ac10: fadd dword ptr [ebp - 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff74u)));
/* 81ac16: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 81ac1c: mov eax, dword ptr [ebp - 0xfc] */
  eax = R32((uint32_t)(ebp + 0xffffff04u));
/* 81ac22: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81ac24: fadd dword ptr [ebp - 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff78u)));
/* 81ac2a: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 81ac30: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 81ac36: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 81ac3c: fadd dword ptr [ebp - 0x84] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 81ac42: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81ac45: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 81ac4b: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 81ac51: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_81ac54: /* 81ac54: test byte ptr [esi + 0x1fc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1fcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ac5b: je 0x81adfd */
  if (zf) goto L_81adfd;
L_81ac61: /* 81ac61: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81ac67: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ac6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ac6f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ac72: jnp 0x81adfd */
  if (!pf) goto L_81adfd;
L_81ac78: /* 81ac78: fld dword ptr [esi + 0x20c] */
  { double v = F32((uint32_t)(esi + 0x20cu)); FPUSH(v); }
/* 81ac7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ac7f: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81ac85: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81ac88: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81ac8b: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81ac91u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81ac91: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 81ac97: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 81ac9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ac9d: xor ecx, ecx */
  ecx = 0;
/* 81ac9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81aca1: jle 0x81adfd */
  if ((zf || sf != of)) goto L_81adfd;
L_81aca7: /* 81aca7: mov ebx, dword ptr [esi + 0x200] */
  ebx = R32((uint32_t)(esi + 0x200u));
/* 81acad: mov edx, ebx */
  edx = ebx;
/* 81acaf: nop  */
L_81acb0: /* 81acb0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81acb2: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 81acb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81acb7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81acba: je 0x81accf */
  if (zf) goto L_81accf;
L_81acbc: /* 81acbc: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 81acc2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81acc3: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81acc6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81acc8: jl 0x81acb0 */
  if ((sf != of)) goto L_81acb0;
L_81acca: /* 81acca: jmp 0x81adfd */
  goto L_81adfd;
L_81accf: /* 81accf: mov edx, ecx */
  edx = ecx;
/* 81acd1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 81acd4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81acd6: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* 81acd9: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 81acdc: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 81acdf: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 81ace1: mov dword ptr [ebp - 0x124], ebx */
  W32((uint32_t)(ebp + 0xfffffedcu), ebx);
/* 81ace7: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 81acea: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81aced: mov dword ptr [ebp - 0x120], ebx */
  W32((uint32_t)(ebp + 0xfffffee0u), ebx);
/* 81acf3: mov dword ptr [ebp - 0x11c], edx */
  W32((uint32_t)(ebp + 0xfffffee4u), edx);
/* 81acf9: je 0x81ad11 */
  if (zf) goto L_81ad11;
L_81acfb: /* 81acfb: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 81acfe: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 81ad01: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ad03: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 81ad06: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81ad09: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81ad0c: mov dword ptr [ebp - 0x7c], edx */
  W32((uint32_t)(ebp + 0xffffff84u), edx);
/* 81ad0f: jmp 0x81ad4d */
  goto L_81ad4d;
L_81ad11: /* 81ad11: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ad17: mov dword ptr [ebp - 0x10c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x3f800000u);
/* 81ad21: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 81ad27: mov dword ptr [ebp - 0x108], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x3f800000u);
/* 81ad31: mov eax, dword ptr [ebp - 0x108] */
  eax = R32((uint32_t)(ebp + 0xfffffef8u));
/* 81ad37: mov dword ptr [ebp - 0x104], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x3f800000u);
/* 81ad41: mov ecx, dword ptr [ebp - 0x104] */
  ecx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 81ad47: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 81ad4a: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
L_81ad4d: /* 81ad4d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ad4f: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 81ad52: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ad58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ad5a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ad5d: jnp 0x81ad6e */
  if (!pf) goto L_81ad6e;
L_81ad5f: /* 81ad5f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81ad62: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81ad64: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81ad66: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81ad68: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81ad6a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad6c: jmp 0x81ad78 */
  goto L_81ad78;
L_81ad6e: /* 81ad6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad70: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81ad72: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81ad78: /* 81ad78: fld dword ptr [ebp - 0x124] */
  { double v = F32((uint32_t)(ebp + 0xfffffedcu)); FPUSH(v); }
/* 81ad7e: lea edx, [edi + 0x60] */
  edx = (uint32_t)(edi + 0x60u);
/* 81ad81: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 81ad84: fld dword ptr [ebp - 0x120] */
  { double v = F32((uint32_t)(ebp + 0xfffffee0u)); FPUSH(v); }
/* 81ad8a: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 81ad8d: fld dword ptr [ebp - 0x11c] */
  { double v = F32((uint32_t)(ebp + 0xfffffee4u)); FPUSH(v); }
/* 81ad93: fsub dword ptr [ebp - 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff88u)));
/* 81ad96: fstp dword ptr [ebp - 0x224] */
  WF32((uint32_t)(ebp + 0xfffffddcu), ST0); FPOP();
/* 81ad9c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81ad9e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81ada0: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 81ada6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81ada8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81adaa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81adac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81adae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81adb0: fmul dword ptr [ebp - 0x224] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffddcu)));
/* 81adb6: fstp dword ptr [ebp - 0x1a0] */
  WF32((uint32_t)(ebp + 0xfffffe60u), ST0); FPOP();
/* 81adbc: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 81adc2: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 81adc5: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 81adcb: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 81add1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81add3: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 81add6: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 81addc: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 81ade2: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 81ade8: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 81adeb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81adee: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 81adf4: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 81adfa: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_81adfd: /* 81adfd: test byte ptr [esi + 0x98], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x98u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae04: je 0x81af67 */
  if (zf) goto L_81af67;
L_81ae0a: /* 81ae0a: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81ae10: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81ae16: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ae18: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81ae1b: jnp 0x81af67 */
  if (!pf) goto L_81af67;
L_81ae21: /* 81ae21: fld dword ptr [esi + 0xa8] */
  { double v = F32((uint32_t)(esi + 0xa8u)); FPUSH(v); }
/* 81ae27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81ae28: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 81ae2e: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 81ae31: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81ae34: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x81ae3au); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 81ae3a: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 81ae40: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 81ae43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81ae46: xor ecx, ecx */
  ecx = 0;
/* 81ae48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81ae4a: jle 0x81af67 */
  if ((zf || sf != of)) goto L_81af67;
L_81ae50: /* 81ae50: mov edx, dword ptr [esi + 0x9c] */
  edx = R32((uint32_t)(esi + 0x9cu));
/* 81ae56: mov ebx, edx */
  ebx = edx;
L_81ae58: /* 81ae58: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 81ae5a: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 81ae5d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81ae5f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae62: je 0x81ae77 */
  if (zf) goto L_81ae77;
L_81ae64: /* 81ae64: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 81ae6a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81ae6b: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81ae6e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81ae70: jl 0x81ae58 */
  if ((sf != of)) goto L_81ae58;
L_81ae72: /* 81ae72: jmp 0x81af67 */
  goto L_81af67;
L_81ae77: /* 81ae77: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81ae79: fld dword ptr [edx + ecx*8] */
  { double v = F32((uint32_t)(edx + ecx*8)); FPUSH(v); }
/* 81ae7c: mov eax, dword ptr [edx + ecx*8 + 4] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x4u));
/* 81ae80: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 81ae83: je 0x81ae8f */
  if (zf) goto L_81ae8f;
L_81ae85: /* 81ae85: mov ebx, dword ptr [edx + ecx*8 - 4] */
  ebx = R32((uint32_t)(edx + ecx*8 + 0xfffffffcu));
/* 81ae89: fld dword ptr [edx + ecx*8 - 8] */
  { double v = F32((uint32_t)(edx + ecx*8 + 0xfffffff8u)); FPUSH(v); }
/* 81ae8d: jmp 0x81aea8 */
  goto L_81aea8;
L_81ae8f: /* 81ae8f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81ae95: mov byte ptr [ebp - 0x74], 0xff */
  W8((uint32_t)(ebp + 0xffffff8cu), 0xffu);
/* 81ae99: mov byte ptr [ebp - 0x73], 0xff */
  W8((uint32_t)(ebp + 0xffffff8du), 0xffu);
/* 81ae9d: mov byte ptr [ebp - 0x72], 0xff */
  W8((uint32_t)(ebp + 0xffffff8eu), 0xffu);
/* 81aea1: mov byte ptr [ebp - 0x71], 0xff */
  W8((uint32_t)(ebp + 0xffffff8fu), 0xffu);
/* 81aea5: mov ebx, dword ptr [ebp - 0x74] */
  ebx = R32((uint32_t)(ebp + 0xffffff8cu));
L_81aea8: /* 81aea8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 81aeaa: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 81aead: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81aeb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aeb5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81aeb8: jnp 0x81aec9 */
  if (!pf) goto L_81aec9;
L_81aeba: /* 81aeba: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81aebd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aebf: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 81aec1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81aec3: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 81aec5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aec7: jmp 0x81aed3 */
  goto L_81aed3;
L_81aec9: /* 81aec9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aecb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81aecd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_81aed3: /* 81aed3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81aed6: movzx ecx, byte ptr [ebp - 0x22] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdeu)));
/* 81aeda: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81aedd: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 81aee0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 81aee2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81aee5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81aee8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81aeeb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81aeed: fiadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)));
/* 81aef0: call 0x99c958 */
  esp -= 4; W32(esp, 0x81aef5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81aef5: movzx edx, byte ptr [ebp - 0x23] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffddu)));
/* 81aef9: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 81aefc: movzx eax, bh */
  eax = (uint32_t)(((ebx >> 8) & 0xffu));
/* 81aeff: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 81af01: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af04: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af07: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af0a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af0c: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af0f: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af14u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af14: movzx ecx, byte ptr [ebp - 0x24] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdcu)));
/* 81af18: mov byte ptr [ebp - 0x1f], al */
  W8((uint32_t)(ebp + 0xffffffe1u), (eax & 0xffu));
/* 81af1b: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 81af1e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 81af20: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81af23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af26: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af29: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af2b: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af2e: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af33u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af33: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 81af36: cmp byte ptr [esi + 0x314], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x314u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81af3d: jne 0x81af61 */
  if (!zf) goto L_81af61;
L_81af3f: /* 81af3f: movzx eax, byte ptr [ebp - 0x15] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 81af43: movzx edx, byte ptr [ebp - 0x21] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu)));
/* 81af47: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 81af49: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af4c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81af4f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af52: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81af54: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 81af57: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af5cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af5c: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81af5f: jmp 0x81af65 */
  goto L_81af65;
L_81af61: /* 81af61: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
L_81af65: /* 81af65: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81af67: /* 81af67: movzx eax, byte ptr [ebp - 0x1e] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe2u)));
/* 81af6b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81af6e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af71: fmul dword ptr [edi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x84u)));
/* 81af77: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af7cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af7c: movzx ecx, byte ptr [ebp - 0x1f] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe1u)));
/* 81af80: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81af83: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 81af86: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81af89: fmul dword ptr [edi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x88u)));
/* 81af8f: call 0x99c958 */
  esp -= 4; W32(esp, 0x81af94u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81af94: movzx edx, byte ptr [ebp - 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe0u)));
/* 81af98: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81af9b: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 81af9d: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81afa0: mov byte ptr [ebp - 0x1f], bl */
  W8((uint32_t)(ebp + 0xffffffe1u), (ebx & 0xffu));
/* 81afa3: fmul dword ptr [edi + 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8cu)));
/* 81afa9: call 0x99c958 */
  esp -= 4; W32(esp, 0x81afaeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81afae: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 81afb4: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 81afb7: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 81afba: je 0x81afdf */
  if (zf) goto L_81afdf;
L_81afbc: /* 81afbc: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81afbf: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81afc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81afc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81afca: jne 0x81afdf */
  if (!zf) goto L_81afdf;
L_81afcc: /* 81afcc: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81afd2: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81afd8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81afda: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81afdd: jp 0x81b017 */
  if (pf) goto L_81b017;
L_81afdf: /* 81afdf: test byte ptr [esi + 0xf0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81afe6: je 0x81b251 */
  if (zf) goto L_81b251;
L_81afec: /* 81afec: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81afef: fcomp dword ptr [esi + 0xec] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xecu)));
  FPOP();
/* 81aff5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81aff7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81affa: jp 0x81b251 */
  if (pf) goto L_81b251;
L_81b000: /* 81b000: fld dword ptr [esi + 0xec] */
  { double v = F32((uint32_t)(esi + 0xecu)); FPUSH(v); }
/* 81b006: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b00c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b00e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b011: jnp 0x81b251 */
  if (!pf) goto L_81b251;
L_81b017: /* 81b017: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81b019: je 0x81b04a */
  if (zf) goto L_81b04a;
L_81b01b: /* 81b01b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81b01e: fcomp dword ptr [esi + 0xd4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xd4u)));
  FPOP();
/* 81b024: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b026: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b029: jne 0x81b04a */
  if (!zf) goto L_81b04a;
L_81b02b: /* 81b02b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 81b02e: lea eax, [esi + 0xc4] */
  eax = (uint32_t)(esi + 0xc4u);
/* 81b034: fsub dword ptr [esi + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd4u)));
/* 81b03a: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 81b040: fsub dword ptr [esi + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd4u)));
/* 81b046: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 81b048: jmp 0x81b05f */
  goto L_81b05f;
L_81b04a: /* 81b04a: fld dword ptr [esi + 0xec] */
  { double v = F32((uint32_t)(esi + 0xecu)); FPUSH(v); }
/* 81b050: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 81b056: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 81b059: fdiv dword ptr [esi + 0xec] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0xecu)));
L_81b05f: /* 81b05f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81b061: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81b064: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 81b06a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 81b06d: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 81b073: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 81b076: mov al, byte ptr [esi + 0x314] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x314u))) & 0xffu);
/* 81b07c: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81b07e: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 81b084: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 81b08a: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 81b090: jne 0x81b0c0 */
  if (!zf) goto L_81b0c0;
L_81b092: /* 81b092: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b098: mov byte ptr [ebp - 0x6c], 0x7f */
  W8((uint32_t)(ebp + 0xffffff94u), 0x7fu);
/* 81b09c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 81b09e: mov byte ptr [ebp - 0x6b], 0x7f */
  W8((uint32_t)(ebp + 0xffffff95u), 0x7fu);
/* 81b0a2: mov byte ptr [ebp - 0x6a], 0x7f */
  W8((uint32_t)(ebp + 0xffffff96u), 0x7fu);
/* 81b0a6: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b0abu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b0ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b0ad: or cl, 0xff */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 81b0b0: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 81b0b2: mov byte ptr [ebp - 0x69], cl */
  W8((uint32_t)(ebp + 0xffffff97u), (ecx & 0xffu));
/* 81b0b5: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 81b0b8: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 81b0bb: jmp 0x81b251 */
  goto L_81b251;
L_81b0c0: /* 81b0c0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 81b0c2: jne 0x81b120 */
  if (!zf) goto L_81b120;
L_81b0c4: /* 81b0c4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81b0c7: shr eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 81b0ca: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81b0cd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b0d0: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b0d6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b0d8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b0da: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81b0dc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b0e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b0e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b0e7: jp 0x81b0fe */
  if (pf) goto L_81b0fe;
L_81b0e9: /* 81b0e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b0eb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b0f1: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b0f6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b0f6: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81b0f9: jmp 0x81b251 */
  goto L_81b251;
L_81b0fe: /* 81b0fe: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b104: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b106: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b109: jnp 0x81b113 */
  if (!pf) goto L_81b113;
L_81b10b: /* 81b10b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b10d: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b113: /* 81b113: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b118u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b118: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
/* 81b11b: jmp 0x81b251 */
  goto L_81b251;
L_81b120: /* 81b120: movzx ecx, byte ptr [ebp - 0x1e] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe2u)));
/* 81b124: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81b127: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b12a: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 81b130: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b132: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b134: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b13a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b13c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b13f: jp 0x81b14b */
  if (pf) goto L_81b14b;
L_81b141: /* 81b141: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b143: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b149: jmp 0x81b160 */
  goto L_81b160;
L_81b14b: /* 81b14b: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b156: jnp 0x81b160 */
  if (!pf) goto L_81b160;
L_81b158: /* 81b158: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b15a: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b160: /* 81b160: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b165u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b165: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* 81b168: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81b16b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81b16e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b171: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 81b177: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b179: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b17b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b186: jp 0x81b192 */
  if (pf) goto L_81b192;
L_81b188: /* 81b188: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b18a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b190: jmp 0x81b1a7 */
  goto L_81b1a7;
L_81b192: /* 81b192: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b198: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b19a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b19d: jnp 0x81b1a7 */
  if (!pf) goto L_81b1a7;
L_81b19f: /* 81b19f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1a1: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b1a7: /* 81b1a7: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b1acu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b1ac: mov ebx, eax */
  ebx = eax;
/* 81b1ae: movzx eax, byte ptr [ebp - 0x20] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe0u)));
/* 81b1b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 81b1b5: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b1b8: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 81b1be: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b1c0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b1c2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b1c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b1ca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b1cd: jp 0x81b1d9 */
  if (pf) goto L_81b1d9;
L_81b1cf: /* 81b1cf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1d1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b1d7: jmp 0x81b1ee */
  goto L_81b1ee;
L_81b1d9: /* 81b1d9: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b1df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b1e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b1e4: jnp 0x81b1ee */
  if (!pf) goto L_81b1ee;
L_81b1e6: /* 81b1e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b1e8: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b1ee: /* 81b1ee: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b1f3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b1f3: movzx edx, byte ptr [ebp - 0x1d] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffe3u)));
/* 81b1f7: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81b1fa: mov ecx, eax */
  ecx = eax;
/* 81b1fc: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 81b1ff: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 81b205: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 81b207: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 81b209: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 81b20b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 81b211: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b213: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b216: jp 0x81b222 */
  if (pf) goto L_81b222;
L_81b218: /* 81b218: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b21a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 81b220: jmp 0x81b237 */
  goto L_81b237;
L_81b222: /* 81b222: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 81b228: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b22a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b22d: jnp 0x81b237 */
  if (!pf) goto L_81b237;
L_81b22f: /* 81b22f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b231: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_81b237: /* 81b237: mov al, byte ptr [ebp - 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 81b23a: mov byte ptr [ebp - 0x70], cl */
  W8((uint32_t)(ebp + 0xffffff90u), (ecx & 0xffu));
/* 81b23d: mov byte ptr [ebp - 0x6f], bl */
  W8((uint32_t)(ebp + 0xffffff91u), (ebx & 0xffu));
/* 81b240: mov byte ptr [ebp - 0x6e], al */
  W8((uint32_t)(ebp + 0xffffff92u), (eax & 0xffu));
/* 81b243: call 0x99c958 */
  esp -= 4; W32(esp, 0x81b248u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81b248: mov byte ptr [ebp - 0x6d], al */
  W8((uint32_t)(ebp + 0xffffff93u), (eax & 0xffu));
/* 81b24b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 81b24e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_81b251: /* 81b251: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81b254: mov dword ptr [edi + 0xa8], edx */
  W32((uint32_t)(edi + 0xa8u), edx);
/* 81b25a: movzx eax, byte ptr [esi + 0xf4] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xf4u)));
/* 81b261: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 81b264: je 0x81b26c */
  if (zf) goto L_81b26c;
L_81b266: /* 81b266: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81b267: je 0x81b2ce */
  if (zf) goto L_81b2ce;
L_81b269: /* 81b269: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 81b26a: jne 0x81b279 */
  if (!zf) goto L_81b279;
L_81b26c: /* 81b26c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_81b26d: /* 81b26d: lea ecx, [esi + 0x414] */
  ecx = (uint32_t)(esi + 0x414u);
/* 81b273: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x81b279u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_81b279: /* 81b279: fld dword ptr [esi + 0x390] */
  { double v = F32((uint32_t)(esi + 0x390u)); FPUSH(v); }
/* 81b27f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b285: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b287: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b28a: jnp 0x81b342 */
  if (!pf) goto L_81b342;
L_81b290: /* 81b290: fld dword ptr [esi + 0x390] */
  { double v = F32((uint32_t)(esi + 0x390u)); FPUSH(v); }
/* 81b296: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 81b29c: fchs  */
  ST0 = -ST0;
/* 81b29e: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 81b2a4: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 81b2a7: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b2aa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b2ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b2ae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b2b1: jnp 0x81b33f */
  if (!pf) goto L_81b33f;
L_81b2b7: /* 81b2b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b2b9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b2bc: fcomp dword ptr [ebp - 0xbc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff44u)));
  FPOP();
/* 81b2c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b2c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b2c7: jp 0x81b339 */
  if (pf) goto L_81b339;
L_81b2c9: /* 81b2c9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b2cc: jmp 0x81b33f */
  goto L_81b33f;
L_81b2ce: /* 81b2ce: mov ebx, dword ptr [esi + 0x3f0] */
  ebx = R32((uint32_t)(esi + 0x3f0u));
/* 81b2d4: lea eax, [ebx + 0x17c] */
  eax = (uint32_t)(ebx + 0x17cu);
/* 81b2da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b2db: lea ecx, [ebp - 0x37c] */
  ecx = (uint32_t)(ebp + 0xfffffc84u);
/* 81b2e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b2e2: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 81b2e8: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b2eb: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x81b2f1u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 81b2f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b2f2: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 81b2f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81b2f9: mov ecx, edi */
  ecx = edi;
/* 81b2fb: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x81b301u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 81b301: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 81b307: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 81b30a: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 81b310: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 81b313: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 81b315: lea eax, [ebp - 0x1c0] */
  eax = (uint32_t)(ebp + 0xfffffe40u);
/* 81b31b: fadd dword ptr [ebx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x170u)));
/* 81b321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b322: fstp dword ptr [ebp - 0x1c0] */
  WF32((uint32_t)(ebp + 0xfffffe40u), ST0); FPOP();
/* 81b328: fstp dword ptr [ebp - 0x1bc] */
  WF32((uint32_t)(ebp + 0xfffffe44u), ST0); FPOP();
/* 81b32e: fstp dword ptr [ebp - 0x1b8] */
  WF32((uint32_t)(ebp + 0xfffffe48u), ST0); FPOP();
/* 81b334: jmp 0x81b26d */
  goto L_81b26d;
L_81b339: /* 81b339: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
L_81b33f: /* 81b33f: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
L_81b342: /* 81b342: fld dword ptr [esi + 0x394] */
  { double v = F32((uint32_t)(esi + 0x394u)); FPUSH(v); }
/* 81b348: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b34e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b350: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b353: jnp 0x81b398 */
  if (!pf) goto L_81b398;
L_81b355: /* 81b355: fld dword ptr [esi + 0x394] */
  { double v = F32((uint32_t)(esi + 0x394u)); FPUSH(v); }
/* 81b35b: mov edx, dword ptr [esi + 0x394] */
  edx = R32((uint32_t)(esi + 0x394u));
/* 81b361: fchs  */
  ST0 = -ST0;
/* 81b363: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 81b369: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 81b36c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b36f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b371: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b373: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b376: jnp 0x81b395 */
  if (!pf) goto L_81b395;
L_81b378: /* 81b378: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b37a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b37d: fcomp dword ptr [ebp - 0xd8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff28u)));
  FPOP();
/* 81b383: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b385: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b388: jp 0x81b38f */
  if (pf) goto L_81b38f;
L_81b38a: /* 81b38a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b38d: jmp 0x81b395 */
  goto L_81b395;
L_81b38f: /* 81b38f: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
L_81b395: /* 81b395: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
L_81b398: /* 81b398: fld dword ptr [esi + 0x398] */
  { double v = F32((uint32_t)(esi + 0x398u)); FPUSH(v); }
/* 81b39e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b3a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3a6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3a9: jnp 0x81b3e5 */
  if (!pf) goto L_81b3e5;
L_81b3ab: /* 81b3ab: fld dword ptr [esi + 0x398] */
  { double v = F32((uint32_t)(esi + 0x398u)); FPUSH(v); }
/* 81b3b1: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 81b3b7: fchs  */
  ST0 = -ST0;
/* 81b3b9: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 81b3bc: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 81b3bf: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 81b3c2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b3c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3c6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3c9: jnp 0x81b3e2 */
  if (!pf) goto L_81b3e2;
L_81b3cb: /* 81b3cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b3cd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b3d0: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* 81b3d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b3d5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b3d8: jp 0x81b3df */
  if (pf) goto L_81b3df;
L_81b3da: /* 81b3da: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 81b3dd: jmp 0x81b3e2 */
  goto L_81b3e2;
L_81b3df: /* 81b3df: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
L_81b3e2: /* 81b3e2: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
L_81b3e5: /* 81b3e5: lea ecx, [ebp - 0x310] */
  ecx = (uint32_t)(ebp + 0xfffffcf0u);
/* 81b3eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b3ec: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 81b3f2: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x81b3f8u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 81b3f8: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 81b3fb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 81b3fd: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 81b400: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 81b403: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 81b406: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 81b409: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81b40c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81b40e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 81b411: fstp dword ptr [ebp - 0x23c] */
  WF32((uint32_t)(ebp + 0xfffffdc4u), ST0); FPOP();
/* 81b417: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81b419: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b41c: fstp dword ptr [ebp - 0x25c] */
  WF32((uint32_t)(ebp + 0xfffffda4u), ST0); FPOP();
/* 81b422: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b425: fld dword ptr [ebp - 0x23c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdc4u)); FPUSH(v); }
/* 81b42b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 81b42e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 81b430: fsub dword ptr [ebp - 0x25c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffda4u)));
/* 81b436: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 81b438: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 81b43b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 81b43d: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 81b440: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 81b443: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81b445: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 81b448: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b44a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b44c: je 0x81b47b */
  if (zf) goto L_81b47b;
L_81b44e: /* 81b44e: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 81b454: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b45a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b45c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b45f: jnp 0x81b47b */
  if (!pf) goto L_81b47b;
L_81b461: /* 81b461: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x81b467u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 81b467: fcomp dword ptr [esi + 0x344] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x344u)));
  FPOP();
/* 81b46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b46f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b472: jp 0x81b47b */
  if (pf) goto L_81b47b;
L_81b474: /* 81b474: or dword ptr [edi + 0xbc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xbcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0xbcu), r);
  }
L_81b47b: /* 81b47b: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 81b47e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81b481: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81b483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81b484: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81b485: mov ecx, esi */
  ecx = esi;
/* 81b487: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x81b48du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81b48d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 81b490: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 81b491: jmp 0x819cc1 */
  goto L_819cc1;
L_81b496: /* 81b496: mov eax, dword ptr [esi + 0x288] */
  eax = R32((uint32_t)(esi + 0x288u));
/* 81b49c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 81b4a2: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4a4: je 0x81b4d9 */
  if (zf) goto L_81b4d9;
L_81b4a6: /* 81b4a6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4a8: jne 0x81b4d9 */
  if (!zf) goto L_81b4d9;
L_81b4aa: /* 81b4aa: mov eax, dword ptr [esi + 0x290] */
  eax = R32((uint32_t)(esi + 0x290u));
/* 81b4b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81b4b2: jle 0x81b4d9 */
  if ((zf || sf != of)) goto L_81b4d9;
L_81b4b4: /* 81b4b4: mov ecx, dword ptr [esi + 0x28c] */
  ecx = R32((uint32_t)(esi + 0x28cu));
/* 81b4ba: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b4bd: mov edx, eax */
  edx = eax;
/* 81b4bf: nop  */
L_81b4c0: /* 81b4c0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 81b4c2: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 81b4c5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81b4c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b4c9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b4cc: jne 0x81b4d3 */
  if (!zf) goto L_81b4d3;
L_81b4ce: /* 81b4ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81b4d0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_81b4d3: /* 81b4d3: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81b4d6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 81b4d7: jne 0x81b4c0 */
  if (!zf) goto L_81b4c0;
L_81b4d9: /* 81b4d9: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 81b4dc: fstp dword ptr [esi + 0x46c] */
  WF32((uint32_t)(esi + 0x46cu), ST0); FPOP();
/* 81b4e2: cmp ecx, dword ptr [esi + 0x45c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x45cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81b4e8: jge 0x81b4f2 */
  if ((sf == of)) goto L_81b4f2;
L_81b4ea: /* 81b4ea: cmp dword ptr [esi + 0x40c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81b4f0: jne 0x81b52d */
  if (!zf) goto L_81b52d;
L_81b4f2: /* 81b4f2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 81b4f5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81b4fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81b4fd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81b500: jp 0x81b52d */
  if (pf) goto L_81b52d;
L_81b502: /* 81b502: test byte ptr [esi + 0x104], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x104u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81b509: jne 0x81b52d */
  if (!zf) goto L_81b52d;
L_81b50b: /* 81b50b: or dword ptr [esi + 0x43c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x43cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x43cu), r);
  }
/* 81b512: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 81b518: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81b51a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81b51d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81b524: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81b525: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81b526: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81b527: mov esp, ebp */
  esp = ebp;
/* 81b529: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81b52a: ret 4 */
  esp += 8; SPILL(); return;
L_81b52d: /* 81b52d: and dword ptr [esi + 0x43c], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x43cu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x43cu), r);
  }
/* 81b534: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 81b53a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 81b53c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81b53f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81b546: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81b547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81b548: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81b549: mov esp, ebp */
  esp = ebp;
/* 81b54b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81b54c: ret 4 */
  esp += 8; SPILL(); return;
}
