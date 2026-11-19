#include "recomp.h"
#include "rec_mod.h"

void f_8f48d0(void) {
  LOAD_REGS();
L_8f48d0: /* 8f48d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f48d1: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 8f48d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f48d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f48d7: mov esi, ecx */
  esi = ecx;
/* 8f48d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f48da: mov edi, eax */
  edi = eax;
/* 8f48dc: call 0x8f4720 */
  esp -= 4; W32(esp, 0x8f48e1u); SPILL(); f_8f4720(); if (g_unwind) return; RELOAD();
/* 8f48e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f48e4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f48e6: je 0x8f490e */
  if (zf) goto L_8f490e;
L_8f48e8: /* 8f48e8: mov eax, dword ptr [ebx + 0x9c] */
  eax = R32((uint32_t)(ebx + 0x9cu));
/* 8f48ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f48f0: je 0x8f490e */
  if (zf) goto L_8f490e;
L_8f48f2: /* 8f48f2: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 8f48f8: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8f48fb: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f4900: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f4902: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 8f4905: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f4908: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f490b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8f490e: /* 8f490e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8f4912: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4914: je 0x8f4945 */
  if (zf) goto L_8f4945;
L_8f4916: /* 8f4916: call 0x8f2990 */
  esp -= 4; W32(esp, 0x8f491bu); SPILL(); f_8f2990(); if (g_unwind) return; RELOAD();
/* 8f491b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f491d: je 0x8f4945 */
  if (zf) goto L_8f4945;
L_8f491f: /* 8f491f: mov eax, dword ptr [ebx + 0x9c] */
  eax = R32((uint32_t)(ebx + 0x9cu));
/* 8f4925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4927: je 0x8f4945 */
  if (zf) goto L_8f4945;
L_8f4929: /* 8f4929: mov edx, dword ptr [ebx + 0x98] */
  edx = R32((uint32_t)(ebx + 0x98u));
/* 8f492f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f4931: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f4937: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8f4939: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f493c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8f493f: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8f4942: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_8f4945: /* 8f4945: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4946: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4947: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4948: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4970(void) {
  LOAD_REGS();
L_8f4970: /* 8f4970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4971: mov ebp, esp */
  ebp = esp;
/* 8f4973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4975: push 0x9d92bb */
  { uint32_t v = 0x9d92bbu; esp -= 4; W32(esp, v); }
/* 8f497a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4988: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f498e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f498f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4990: mov esi, ecx */
  esi = ecx;
/* 8f4992: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f4995: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f4998: cmp dword ptr [ecx + eax*4 + 0xeb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f499f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f49a0: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 8f49a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f49a9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f49b0: je 0x8f49c3 */
  if (zf) goto L_8f49c3;
L_8f49b2: /* 8f49b2: push 0x7d */
  { uint32_t v = 0x7du; esp -= 4; W32(esp, v); }
/* 8f49b4: push 0xaee4b0 */
  { uint32_t v = 0xaee4b0u; esp -= 4; W32(esp, v); }
/* 8f49b9: push 0xaee4bc */
  { uint32_t v = 0xaee4bcu; esp -= 4; W32(esp, v); }
/* 8f49be: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f49c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f49c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f49c3: /* 8f49c3: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8f49c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f49c8: jne 0x8f4a55 */
  if (!zf) goto L_8f4a55;
L_8f49ce: /* 8f49ce: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8f49d1: mov eax, dword ptr [edx + 0x6c] */
  eax = R32((uint32_t)(edx + 0x6cu));
/* 8f49d4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f49d7: je 0x8f49de */
  if (zf) goto L_8f49de;
L_8f49d9: /* 8f49d9: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f49dc: jne 0x8f4a55 */
  if (!zf) goto L_8f4a55;
L_8f49de: /* 8f49de: mov ebx, 1 */
  ebx = 0x1u;
/* 8f49e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f49e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f49e5: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f49eb: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8f49f0u); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8f49f0: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f49f6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f49f9: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f49ffu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f49ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4a01: je 0x8f4a17 */
  if (zf) goto L_8f4a17;
L_8f4a03: /* 8f4a03: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 8f4a08: push 0xaee4e0 */
  { uint32_t v = 0xaee4e0u; esp -= 4; W32(esp, v); }
/* 8f4a0d: push 0xaee4ec */
  { uint32_t v = 0xaee4ecu; esp -= 4; W32(esp, v); }
/* 8f4a12: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f4a14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4a14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f4a17: /* 8f4a17: mov al, byte ptr [ebp - 0x1b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe5u))) & 0xffu);
/* 8f4a1a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4a1c: jne 0x8f4a32 */
  if (!zf) goto L_8f4a32;
L_8f4a1e: /* 8f4a1e: push 0x85 */
  { uint32_t v = 0x85u; esp -= 4; W32(esp, v); }
/* 8f4a23: push 0xaee504 */
  { uint32_t v = 0xaee504u; esp -= 4; W32(esp, v); }
/* 8f4a28: push 0xaee510 */
  { uint32_t v = 0xaee510u; esp -= 4; W32(esp, v); }
/* 8f4a2d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f4a2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4a2f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f4a32: /* 8f4a32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4a34: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 8f4a3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4a3b: mov ecx, esi */
  ecx = esi;
/* 8f4a3d: mov byte ptr [ebp - 0x1a], bl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ebx & 0xffu));
/* 8f4a40: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f4a45u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f4a45: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f4a4b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f4a4f: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f4a55u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
L_8f4a55: /* 8f4a55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f4a58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4a59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4a5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4a61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4a62: mov esp, ebp */
  esp = ebp;
/* 8f4a64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4a65: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4a66(void) {
  LOAD_REGS();
L_8f4a66: /* 8f4a66: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f4a69: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f4a6e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f4a71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4a72: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f4a75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4a7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f4a7a(); return;
}

void f_8f4a7a(void) {
  LOAD_REGS();
L_8f4a7a: /* 8f4a7a: push 0xa1ed40 */
  { uint32_t v = 0xa1ed40u; esp -= 4; W32(esp, v); }
/* 8f4a7f: push 0xaee524 */
  { uint32_t v = 0xaee524u; esp -= 4; W32(esp, v); }
/* 8f4a84: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f4a8au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f4a8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4a8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4a8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4a91: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4a96u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f4a96: guest_badaddr(0x8f4a96); return;
}

void f_8f4af0(void) {
  LOAD_REGS();
L_8f4af0: /* 8f4af0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4af1: mov ebp, esp */
  ebp = esp;
/* 8f4af3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4af5: push 0x9d92d0 */
  { uint32_t v = 0x9d92d0u; esp -= 4; W32(esp, v); }
/* 8f4afa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4b01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4b08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f4b0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4b0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4b0d: mov esi, ecx */
  esi = ecx;
/* 8f4b0f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f4b12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4b13: mov edi, dword ptr [0xcfac94] */
  edi = R32((uint32_t)(0xcfac94u));
/* 8f4b19: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f4b1f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4b22: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f4b29: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f4b2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4b2b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f4b2e: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f4b34: mov ebx, eax */
  ebx = eax;
/* 8f4b36: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f4b38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4b38: xor edx, edx */
  edx = 0;
/* 8f4b3a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4b3c: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f4b3f: mov ecx, eax */
  ecx = eax;
/* 8f4b41: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f4b44: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* 8f4b4a: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f4b4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4b4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4b4f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8f4b50: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f4b53: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f4b55: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f4b57: sub eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f4b5a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8f4b5b: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f4b5e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f4b60: xor ecx, ecx */
  ecx = 0;
/* 8f4b62: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8f4b65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f4b67: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8f4b6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4b6b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8f4b6c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f4b6e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f4b71: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4b78: mov esp, ebp */
  esp = ebp;
/* 8f4b7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4b7b: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4b7c(void) {
  LOAD_REGS();
L_8f4b7c: /* 8f4b7c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f4b7f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f4b84: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f4b87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4b88: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f4b8b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4b90u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f4b90(); return;
}

void f_8f4b90(void) {
  LOAD_REGS();
L_8f4b90: /* 8f4b90: push 0xa1ed68 */
  { uint32_t v = 0xa1ed68u; esp -= 4; W32(esp, v); }
/* 8f4b95: push 0xaee638 */
  { uint32_t v = 0xaee638u; esp -= 4; W32(esp, v); }
/* 8f4b9a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f4ba0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f4ba0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4ba3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4ba5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4ba7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4bacu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f4bac: guest_badaddr(0x8f4bac); return;
}

void f_8f4be0(void) {
  LOAD_REGS();
L_8f4be0: /* 8f4be0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4be1: mov ebp, esp */
  ebp = esp;
/* 8f4be3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4be5: push 0x9d92e0 */
  { uint32_t v = 0x9d92e0u; esp -= 4; W32(esp, v); }
/* 8f4bea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4bf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4bf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f4bfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4bfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4bfe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4c01: mov esi, ecx */
  esi = ecx;
/* 8f4c03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f4c0a: call 0x6c355d */
  esp -= 4; W32(esp, 0x8f4c0fu); SPILL(); f_6c355d(); if (g_unwind) return; RELOAD();
/* 8f4c0f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f4c12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4c13: mov dword ptr [esi + 0x68], 0 */
  W32((uint32_t)(esi + 0x68u), 0x0u);
/* 8f4c1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4c1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4c22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4c23: mov esp, ebp */
  esp = ebp;
/* 8f4c25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4c26: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4c27(void) {
  LOAD_REGS();
L_8f4c27: /* 8f4c27: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f4c2a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f4c2f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f4c32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f4c33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f4c36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4c3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f4c3b(); return;
}

void f_8f4c3b(void) {
  LOAD_REGS();
L_8f4c3b: /* 8f4c3b: push 0xa1eda0 */
  { uint32_t v = 0xa1eda0u; esp -= 4; W32(esp, v); }
/* 8f4c40: push 0xaeebf8 */
  { uint32_t v = 0xaeebf8u; esp -= 4; W32(esp, v); }
/* 8f4c45: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f4c4bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f4c4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4c4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4c50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4c52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4c57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f4c57: guest_badaddr(0x8f4c57); return;
}

void f_8f4c80(void) {
  LOAD_REGS();
L_8f4c80: /* 8f4c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4c81: mov ebp, esp */
  ebp = esp;
/* 8f4c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4c85: push 0x9d9309 */
  { uint32_t v = 0x9d9309u; esp -= 4; W32(esp, v); }
/* 8f4c8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4c91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4c98: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f4c9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4c9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4ca0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4ca1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4ca4: mov edi, ecx */
  edi = ecx;
/* 8f4ca6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f4cad: call 0x6c6424 */
  esp -= 4; W32(esp, 0x8f4cb2u); SPILL(); f_6c6424(); if (g_unwind) return; RELOAD();
/* 8f4cb2: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f4cb5: mov eax, 1 */
  eax = 0x1u;
/* 8f4cba: mov dword ptr [ecx + 0x138], eax */
  W32((uint32_t)(ecx + 0x138u), eax);
/* 8f4cc0: test byte ptr [0xceefc4], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xceefc4u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4cc6: jne 0x8f4cf0 */
  if (!zf) goto L_8f4cf0;
L_8f4cc8: /* 8f4cc8: or dword ptr [0xceefc4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xceefc4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xceefc4u), r);
  }
/* 8f4cce: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 8f4cd1: call dword ptr [0xcfa810] */
  esp -= 4; W32(esp, 0x8f4cd7u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 8f4cd7: push 0xaef3d8 */
  { uint32_t v = 0xaef3d8u; esp -= 4; W32(esp, v); }
/* 8f4cdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4cdd: call dword ptr [0xcfa80c] */
  esp -= 4; W32(esp, 0x8f4ce3u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 8f4ce3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4ce6: mov dword ptr [0xceefc0], eax */
  W32((uint32_t)(0xceefc0u), eax);
/* 8f4ceb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f4cef: nop  */
L_8f4cf0: /* 8f4cf0: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8f4cf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4cf5: jne 0x8f4e5e */
  if (!zf) goto L_8f4e5e;
L_8f4cfb: /* 8f4cfb: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8f4cfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4d00: je 0x8f4e5e */
  if (zf) goto L_8f4e5e;
L_8f4d06: /* 8f4d06: mov edx, dword ptr [0xceefc0] */
  edx = R32((uint32_t)(0xceefc0u));
/* 8f4d0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4d0d: mov ecx, edi */
  ecx = edi;
/* 8f4d0f: call 0x6c1c62 */
  esp -= 4; W32(esp, 0x8f4d14u); SPILL(); f_6c1c62(); if (g_unwind) return; RELOAD();
/* 8f4d14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4d16: je 0x8f4e5e */
  if (zf) goto L_8f4e5e;
L_8f4d1c: /* 8f4d1c: mov ecx, edi */
  ecx = edi;
/* 8f4d1e: call 0x6c4f16 */
  esp -= 4; W32(esp, 0x8f4d23u); SPILL(); f_6c4f16(); if (g_unwind) return; RELOAD();
/* 8f4d23: mov esi, eax */
  esi = eax;
/* 8f4d25: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4d27: je 0x8f4e5e */
  if (zf) goto L_8f4e5e;
L_8f4d2d: /* 8f4d2d: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f4d30: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 8f4d36: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8f4d39: mov eax, dword ptr [edi + 0x26c] */
  eax = R32((uint32_t)(edi + 0x26cu));
/* 8f4d3f: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8f4d42: mov ebx, dword ptr [ecx + eax*8 + 0x24] */
  ebx = R32((uint32_t)(ecx + eax*8 + 0x24u));
/* 8f4d46: sub ebx, dword ptr [edi + 0x270] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x270u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8f4d4c: xor edx, edx */
  edx = 0;
/* 8f4d4e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f4d50: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 8f4d53: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f4d59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4d5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4d5b: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8f4d60u); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8f4d60: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f4d62: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f4d66: jle 0x8f4d6a */
  if ((zf || sf != of)) goto L_8f4d6a;
L_8f4d68: /* 8f4d68: mov esi, ebx */
  esi = ebx;
L_8f4d6a: /* 8f4d6a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4d6c: jne 0x8f4d72 */
  if (!zf) goto L_8f4d72;
L_8f4d6e: /* 8f4d6e: xor ebx, ebx */
  ebx = 0;
/* 8f4d70: jmp 0x8f4d88 */
  goto L_8f4d88;
L_8f4d72: /* 8f4d72: lea eax, [esi + 7] */
  eax = (uint32_t)(esi + 0x7u);
/* 8f4d75: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f4d78: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f4d7b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f4d7e: call 0x99cc00 */
  esp -= 4; W32(esp, 0x8f4d83u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 8f4d83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4d86: mov ebx, esp */
  ebx = esp;
L_8f4d88: /* 8f4d88: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8f4d8b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f4d8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4d8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4d8f: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x8f4d92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4d92: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8f4d95: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f4d9bu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f4d9b: mov edx, dword ptr [edi + 0x270] */
  edx = R32((uint32_t)(edi + 0x270u));
/* 8f4da1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4da2: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f4da4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4da5: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f4dab: mov dword ptr [edi + 0x270], edx */
  W32((uint32_t)(edi + 0x270u), edx);
/* 8f4db1: call dword ptr [0xcfa4d8] */
  esp -= 4; W32(esp, 0x8f4db7u); SPILL(); f_4e2405(); if (g_unwind) return; /* Core!?Serialize@FBitWriter@@UAEXPAXH@Z */ RELOAD();
/* 8f4db7: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f4dbd: mov byte ptr [ebp - 0x1a], 1 */
  W8((uint32_t)(ebp + 0xffffffe6u), 0x1u);
/* 8f4dc1: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f4dc7u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f4dc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4dc9: je 0x8f4de3 */
  if (zf) goto L_8f4de3;
L_8f4dcb: /* 8f4dcb: push 0x5d1 */
  { uint32_t v = 0x5d1u; esp -= 4; W32(esp, v); }
/* 8f4dd0: push 0xaef3e8 */
  { uint32_t v = 0xaef3e8u; esp -= 4; W32(esp, v); }
/* 8f4dd5: push 0xaef3f4 */
  { uint32_t v = 0xaef3f4u; esp -= 4; W32(esp, v); }
/* 8f4dda: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f4de0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f4de0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f4de3: /* 8f4de3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4de5: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f4deb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f4dec: mov ecx, edi */
  ecx = edi;
/* 8f4dee: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f4df3u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f4df3: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f4df6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f4df8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8f4dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f4dfe: mov al, byte ptr [ebp - 0x1b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe5u))) & 0xffu);
/* 8f4e01: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4e03: je 0x8f4e19 */
  if (zf) goto L_8f4e19;
L_8f4e05: /* 8f4e05: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8f4e08: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4e0a: je 0x8f4e12 */
  if (zf) goto L_8f4e12;
L_8f4e0c: /* 8f4e0c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f4e0e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f4e10: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8f4e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f4e12: /* 8f4e12: mov dword ptr [edi + 0x68], 0 */
  W32((uint32_t)(edi + 0x68u), 0x0u);
L_8f4e19: /* 8f4e19: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8f4e1f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f4e23: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f4e29u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f4e29: jmp 0x8f4cf0 */
  goto L_8f4cf0;
L_8f4e5e: /* 8f4e5e: lea esp, [ebp - 0xa0] */
  esp = (uint32_t)(ebp + 0xffffff60u);
/* 8f4e64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f4e67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4e6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4e6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4e70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4e71: mov esp, ebp */
  esp = ebp;
/* 8f4e73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4e74: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4e2e(void) {
  LOAD_REGS();
L_8f4e2e: /* 8f4e2e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f4e31: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f4e36: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f4e39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4e3a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f4e3d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4e42u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f4e42(); return;
}

void f_8f4e42(void) {
  LOAD_REGS();
L_8f4e42: /* 8f4e42: push 0xa1edd4 */
  { uint32_t v = 0xa1edd4u; esp -= 4; W32(esp, v); }
/* 8f4e47: push 0xaef408 */
  { uint32_t v = 0xaef408u; esp -= 4; W32(esp, v); }
/* 8f4e4c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f4e52u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f4e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4e57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f4e59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f4e5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f4e5e: lea esp, [ebp - 0xa0] */
  esp = (uint32_t)(ebp + 0xffffff60u);
/* 8f4e64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f4e67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4e6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4e6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4e70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4e71: mov esp, ebp */
  esp = ebp;
/* 8f4e73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4e74: ret  */
  esp += 4; SPILL(); return;
}

void f_8f4f00(void) {
  LOAD_REGS();
L_8f4f00: /* 8f4f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f4f01: mov ebp, esp */
  ebp = esp;
/* 8f4f03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f4f05: push 0x9d934a */
  { uint32_t v = 0x9d934au; esp -= 4; W32(esp, v); }
/* 8f4f0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f4f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4f11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f4f18: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f4f1b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8f4f22: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 8f4f25: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 8f4f2b: mov eax, dword ptr [ecx + 0x26c] */
  eax = R32((uint32_t)(ecx + 0x26cu));
/* 8f4f31: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 8f4f34: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8f4f37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f4f38: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 8f4f3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4f3c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f4f3f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8f4f42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4f44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4f45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f4f48: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f4f4f: je 0x8f4f64 */
  if (zf) goto L_8f4f64;
L_8f4f51: /* 8f4f51: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 8f4f54: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4f56: je 0x8f4f60 */
  if (zf) goto L_8f4f60;
L_8f4f58: /* 8f4f58: mov edi, dword ptr [edx + 0x448] */
  edi = R32((uint32_t)(edx + 0x448u));
/* 8f4f5e: jmp 0x8f4f6a */
  goto L_8f4f6a;
L_8f4f60: /* 8f4f60: xor edi, edi */
  edi = 0;
/* 8f4f62: jmp 0x8f4f6a */
  goto L_8f4f6a;
L_8f4f64: /* 8f4f64: mov edi, dword ptr [ecx + 0x270] */
  edi = R32((uint32_t)(ecx + 0x270u));
L_8f4f6a: /* 8f4f6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f4f6c: mov dword ptr [ebp - 0x14], 0xaef460 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xaef460u);
/* 8f4f73: jne 0x8f4ffc */
  if (!zf) goto L_8f4ffc;
L_8f4f79: /* 8f4f79: mov dword ptr [ebp - 0x14], 0xaef474 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xaef474u);
/* 8f4f80: lea esi, [ecx + 0x6c] */
  esi = (uint32_t)(ecx + 0x6cu);
L_8f4f83: /* 8f4f83: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f4f86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4f87: call 0x6c1005 */
  esp -= 4; W32(esp, 0x8f4f8cu); SPILL(); f_6c1005(); if (g_unwind) return; RELOAD();
/* 8f4f8c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f4f8f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f4f92: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8f4f95: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f4f98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f4f99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f4f9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f4f9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4f9c: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8f4f9f: push 0xaef480 */
  { uint32_t v = 0xaef480u; esp -= 4; W32(esp, v); }
/* 8f4fa4: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 8f4fa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f4fa7: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f4faa: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8f4fb0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8f4fb0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f4fb3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f4fb6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f4fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f4fba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f4fbb: mov ecx, eax */
  ecx = eax;
/* 8f4fbd: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f4fc1: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8f4fc7u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8f4fc7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8f4fca: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 8f4fd1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f4fd4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f4fdau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f4fda: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f4fdd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f4fe1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f4fe7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f4fe7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f4fea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f4feb: mov eax, esi */
  eax = esi;
/* 8f4fed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f4fee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f4ff5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f4ff6: mov esp, ebp */
  esp = ebp;
/* 8f4ff8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f4ff9: ret 4 */
  esp += 8; SPILL(); return;
L_8f4ffc: /* 8f4ffc: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 8f4fff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5001: je 0x8f500b */
  if (zf) goto L_8f500b;
L_8f5003: /* 8f5003: lea esi, [eax + 0x48] */
  esi = (uint32_t)(eax + 0x48u);
/* 8f5006: jmp 0x8f4f83 */
  goto L_8f4f83;
L_8f500b: /* 8f500b: mov esi, 0xced6cc */
  esi = 0xced6ccu;
/* 8f5010: jmp 0x8f4f83 */
  goto L_8f4f83;
}

void f_8f5015(void) {
  LOAD_REGS();
L_8f5015: /* 8f5015: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f5018: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f501d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8f5020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5021: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8f5024: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5029u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f5029(); return;
}

void f_8f5029(void) {
  LOAD_REGS();
L_8f5029: /* 8f5029: push 0xa1ee04 */
  { uint32_t v = 0xa1ee04u; esp -= 4; W32(esp, v); }
/* 8f502e: push 0xaef4ac */
  { uint32_t v = 0xaef4acu; esp -= 4; W32(esp, v); }
/* 8f5033: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f5039u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f5039: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f503c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f503e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5040: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5045u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f5045: guest_badaddr(0x8f5045); return;
}

void f_8f50b0(void) {
  LOAD_REGS();
L_8f50b0: /* 8f50b0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8f50b3: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 8f50b7: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f50ba: jle 0x8f50d7 */
  if ((zf || sf != of)) goto L_8f50d7;
L_8f50bc: /* 8f50bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f50c0: /* 8f50c0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8f50c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8f50c4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f50c6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8f50c8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 8f50cb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8f50ce: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 8f50d2: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f50d5: jg 0x8f50c0 */
  if ((!zf && sf == of)) goto L_8f50c0;
L_8f50d7: /* 8f50d7: jmp 0x6c69ce */
  SPILL(); f_6c69ce(); return;
}

void f_8f50f0(void) {
  LOAD_REGS();
L_8f50f0: /* 8f50f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f50f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f50f2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8f50f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f50f6: mov esi, ecx */
  esi = ecx;
/* 8f50f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f50feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f50fe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f5100: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f5103: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 8f5106: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5108: je 0x8f511e */
  if (zf) goto L_8f511e;
L_8f510a: /* 8f510a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8f510e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f5110: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8f5114: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8f5117: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f5119: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8f511c: jmp 0x8f5120 */
  goto L_8f5120;
L_8f511e: /* 8f511e: xor edi, edi */
  edi = 0;
L_8f5120: /* 8f5120: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f5123: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5125: je 0x8f512f */
  if (zf) goto L_8f512f;
L_8f5127: /* 8f5127: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x8f512du); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 8f512d: jmp 0x8f5131 */
  goto L_8f5131;
L_8f512f: /* 8f512f: xor eax, eax */
  eax = 0;
L_8f5131: /* 8f5131: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8f5134: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8f5135: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f5137: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8f513a: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8f513d: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8f513f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8f5142: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8f5145: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8f5146: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 8f5149: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8f514c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8f514f: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 8f5153: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f5155: jge 0x8f5164 */
  if ((sf == of)) goto L_8f5164;
L_8f5157: /* 8f5157: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 8f515a: mov ecx, esi */
  ecx = esi;
/* 8f515c: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 8f515f: call 0x6c69ce */
  esp -= 4; W32(esp, 0x8f5164u); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
L_8f5164: /* 8f5164: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 8f5167: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5168: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5169: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f5190(void) {
  LOAD_REGS();
L_8f5190: /* 8f5190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f5191: mov ebp, esp */
  ebp = esp;
/* 8f5193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f5195: push 0x9d938f */
  { uint32_t v = 0x9d938fu; esp -= 4; W32(esp, v); }
/* 8f519a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f51a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f51a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f51a8: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f51ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f51af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f51b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f51b1: mov edi, ecx */
  edi = ecx;
/* 8f51b3: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8f51b6: xor ebx, ebx */
  ebx = 0;
/* 8f51b8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f51ba: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f51bd: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8f51c0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f51c3: je 0x8f51dd */
  if (zf) goto L_8f51dd;
L_8f51c5: /* 8f51c5: push 0x574 */
  { uint32_t v = 0x574u; esp -= 4; W32(esp, v); }
/* 8f51ca: push 0xaef2e8 */
  { uint32_t v = 0xaef2e8u; esp -= 4; W32(esp, v); }
/* 8f51cf: push 0xaef2f4 */
  { uint32_t v = 0xaef2f4u; esp -= 4; W32(esp, v); }
/* 8f51d4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f51dau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f51da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f51dd: /* 8f51dd: cmp dword ptr [edi + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f51e0: je 0x8f5214 */
  if (zf) goto L_8f5214;
L_8f51e2: /* 8f51e2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8f51e5: mov ecx, ebx */
  ecx = ebx;
/* 8f51e7: call dword ptr [0xcfaca0] */
  esp -= 4; W32(esp, 0x8f51edu); SPILL(); f_4e2f1d(); if (g_unwind) return; /* Core!?GetNumBytes@FBitReader@@QAEHXZ */ RELOAD();
/* 8f51ed: mov ecx, ebx */
  ecx = ebx;
/* 8f51ef: mov esi, eax */
  esi = eax;
/* 8f51f1: call dword ptr [0xcfac9c] */
  esp -= 4; W32(esp, 0x8f51f7u); SPILL(); f_4e1a87(); if (g_unwind) return; /* Core!?GetData@FBitReader@@QAEPAEXZ */ RELOAD();
/* 8f51f7: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 8f51fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f51fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f51fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f51fe: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8f5201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5201: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f5204: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f520b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f520c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f520d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f520e: mov esp, ebp */
  esp = ebp;
/* 8f5210: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f5211: ret 4 */
  esp += 8; SPILL(); return;
L_8f5214: /* 8f5214: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 8f5217: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f521a: cmp dword ptr [ecx + 0x74], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x74u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f521d: jne 0x8f528f */
  if (!zf) goto L_8f528f;
L_8f521f: /* 8f521f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f5220: push 0xaef300 */
  { uint32_t v = 0xaef300u; esp -= 4; W32(esp, v); }
/* 8f5225: push 0xaef310 */
  { uint32_t v = 0xaef310u; esp -= 4; W32(esp, v); }
/* 8f522a: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x8f5230u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 8f5230: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f5236: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f523a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f523c: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f5241: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5242: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f5248u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f5248: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f524b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f524d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f524e: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8f5254: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8f5259u); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8f5259: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f525a: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8f5260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f5261: mov ecx, edi */
  ecx = edi;
/* 8f5263: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f5267: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f526cu); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f526c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5270: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
L_8f5276: /* 8f5276: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f527cu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f527c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f527f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5286: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5287: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5288: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5289: mov esp, ebp */
  esp = ebp;
/* 8f528b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f528c: ret 4 */
  esp += 8; SPILL(); return;
L_8f528f: /* 8f528f: cmp dword ptr [edi + 0x68], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x68u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5292: je 0x8f5394 */
  if (zf) goto L_8f5394;
L_8f5298: /* 8f5298: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f529b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8f52a1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8f52a1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f52a4: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f52a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f52a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f52a9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f52ad: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x8f52b3u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 8f52b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f52b6: mov ecx, esi */
  ecx = esi;
/* 8f52b8: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f52beu); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f52be: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f52c0: jne 0x8f5329 */
  if (!zf) goto L_8f5329;
L_8f52c2: /* 8f52c2: push 0xaef328 */
  { uint32_t v = 0xaef328u; esp -= 4; W32(esp, v); }
/* 8f52c7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f52ca: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x8f52d0u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 8f52d0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f52d2: je 0x8f5329 */
  if (zf) goto L_8f5329;
L_8f52d4: /* 8f52d4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f52da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f52dc: lea eax, [edi + 0x6c] */
  eax = (uint32_t)(edi + 0x6cu);
/* 8f52df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f52e0: push 0xaef334 */
  { uint32_t v = 0xaef334u; esp -= 4; W32(esp, v); }
/* 8f52e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f52e6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f52ecu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f52ec: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f52ef: mov eax, dword ptr [edi + 0x26c] */
  eax = R32((uint32_t)(edi + 0x26cu));
/* 8f52f5: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f52fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f52fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f5300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5301: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f5304: call 0x6c5745 */
  esp -= 4; W32(esp, 0x8f5309u); SPILL(); f_6c5745(); if (g_unwind) return; RELOAD();
/* 8f5309: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f530c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5310: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f5316u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f5316: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f5319: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5320: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5321: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5322: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5323: mov esp, ebp */
  esp = ebp;
/* 8f5325: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f5326: ret 4 */
  esp += 8; SPILL(); return;
L_8f5329: /* 8f5329: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f532c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5330: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f5336u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8f5336: /* 8f5336: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5338: push 0xaef3a8 */
  { uint32_t v = 0xaef3a8u; esp -= 4; W32(esp, v); }
/* 8f533d: push 0xaef3b8 */
  { uint32_t v = 0xaef3b8u; esp -= 4; W32(esp, v); }
/* 8f5342: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x8f5348u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 8f5348: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f534e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f5350: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5354: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f5359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f535a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f5360u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f5360: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5363: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f5365: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f5366: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 8f536c: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8f5371u); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8f5371: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5373: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
/* 8f5379: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f537a: mov ecx, edi */
  ecx = edi;
/* 8f537c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f5380: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f5385u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f5385: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5389: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 8f538f: jmp 0x8f5276 */
  goto L_8f5276;
L_8f5394: /* 8f5394: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f5397: call dword ptr [0xcfa8d0] */
  esp -= 4; W32(esp, 0x8f539du); SPILL(); f_4e2a9f(); if (g_unwind) return; /* Core!??0FGuid@@QAE@XZ */ RELOAD();
/* 8f539d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f53a0: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f53a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f53a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f53a5: call 0x6c42b4 */
  esp -= 4; W32(esp, 0x8f53aau); SPILL(); f_6c42b4(); if (g_unwind) return; RELOAD();
/* 8f53aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f53ad: mov ecx, esi */
  ecx = esi;
/* 8f53af: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f53b5u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f53b5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f53b7: jne 0x8f5336 */
  if (!zf) goto L_8f5336;
L_8f53bd: /* 8f53bd: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 8f53c0: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8f53c6: cmp ebx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f53c9: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 8f53cc: jge 0x8f5336 */
  if ((sf == of)) goto L_8f5336;
L_8f53d2: /* 8f53d2: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 8f53d5: lea ecx, [ebx + ebx*8] */
  ecx = (uint32_t)(ebx + ebx*8);
/* 8f53d8: mov eax, dword ptr [edx + ecx*8 + 0x14] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x14u));
/* 8f53dc: lea esi, [edx + ecx*8] */
  esi = (uint32_t)(edx + ecx*8);
/* 8f53df: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f53e2: jne 0x8f553a */
  if (!zf) goto L_8f553a;
L_8f53e8: /* 8f53e8: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 8f53eb: cmp ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f53ee: jne 0x8f553a */
  if (!zf) goto L_8f553a;
L_8f53f4: /* 8f53f4: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8f53f7: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f53fa: jne 0x8f553a */
  if (!zf) goto L_8f553a;
L_8f5400: /* 8f5400: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 8f5403: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5406: jne 0x8f553a */
  if (!zf) goto L_8f553a;
L_8f540c: /* 8f540c: push 0xced6c8 */
  { uint32_t v = 0xced6c8u; esp -= 4; W32(esp, v); }
/* 8f5411: mov ecx, esi */
  ecx = esi;
/* 8f5413: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x8f5419u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 8f5419: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f541b: je 0x8f553a */
  if (zf) goto L_8f553a;
L_8f5421: /* 8f5421: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f5424: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f5427: mov eax, dword ptr [edx + 0x8c] */
  eax = R32((uint32_t)(edx + 0x8cu));
/* 8f542d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f542f: jle 0x8f5459 */
  if ((zf || sf != of)) goto L_8f5459;
L_8f5431: /* 8f5431: mov ecx, esi */
  ecx = esi;
/* 8f5433: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f5439u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f5439: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 8f543f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8f5441: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f5443: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5444: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f5447u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5447: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8f544a: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f544d: cmp eax, dword ptr [edx + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f5453: jg 0x8f5336 */
  if ((!zf && sf == of)) goto L_8f5336;
L_8f5459: /* 8f5459: mov ecx, esi */
  ecx = esi;
/* 8f545b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f5461u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f5461: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8f5466: lea ecx, [edi + 0x6c] */
  ecx = (uint32_t)(edi + 0x6cu);
/* 8f5469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f546a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f546b: call dword ptr [0xcfa5a4] */
  esp -= 4; W32(esp, 0x8f5471u); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* 8f5471: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 8f5474: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f5477: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f547a: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 8f547d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f547f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5482: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f5485: mov edi, esp */
  edi = esp;
/* 8f5487: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8f5489: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f548c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8f548f: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f5492: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 8f5495: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f5498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5499: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 8f549c: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8f549fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f549f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f54a1: je 0x8f5534 */
  if (zf) goto L_8f5534;
L_8f54a7: /* 8f54a7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8f54aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f54ac: jne 0x8f54c6 */
  if (!zf) goto L_8f54c6;
L_8f54ae: /* 8f54ae: push 0x5a3 */
  { uint32_t v = 0x5a3u; esp -= 4; W32(esp, v); }
/* 8f54b3: push 0xaef370 */
  { uint32_t v = 0xaef370u; esp -= 4; W32(esp, v); }
/* 8f54b8: push 0xaef37c */
  { uint32_t v = 0xaef37cu; esp -= 4; W32(esp, v); }
/* 8f54bd: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f54c3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f54c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f54c6: /* 8f54c6: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 8f54cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f54cd: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f54d2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f54d4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f54d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f54d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f54da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f54dc: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 8f54df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f54e0: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8f54e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f54e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f54e5: mov dword ptr [edi + 0x68], eax */
  W32((uint32_t)(edi + 0x68u), eax);
/* 8f54e8: je 0x8f5537 */
  if (zf) goto L_8f5537;
L_8f54ea: /* 8f54ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f54ec: push 0xaef388 */
  { uint32_t v = 0xaef388u; esp -= 4; W32(esp, v); }
/* 8f54f1: push 0xaef398 */
  { uint32_t v = 0xaef398u; esp -= 4; W32(esp, v); }
/* 8f54f6: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x8f54fcu); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 8f54fc: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f5502: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f5504: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5507: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5508: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5509: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f550e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f550f: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f5515u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f5515: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f5518: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f551b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f551e: mov dword ptr [edi + 0x26c], eax */
  W32((uint32_t)(edi + 0x26cu), eax);
/* 8f5524: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5525: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5526: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f552d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f552e: mov esp, ebp */
  esp = ebp;
/* 8f5530: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f5531: ret 4 */
  esp += 8; SPILL(); return;
L_8f5534: /* 8f5534: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
L_8f5537: /* 8f5537: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_8f553a: /* 8f553a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f553b: jmp 0x8f53bd */
  goto L_8f53bd;
}

void f_8f5540(void) {
  LOAD_REGS();
L_8f5540: /* 8f5540: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f5543: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f5548: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8f554b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f554c: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8f554f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5554u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f5554(); return;
}

void f_8f5554(void) {
  LOAD_REGS();
L_8f5554: /* 8f5554: push 0xa1ee3c */
  { uint32_t v = 0xa1ee3cu; esp -= 4; W32(esp, v); }
/* 8f5559: push 0xaef3d0 */
  { uint32_t v = 0xaef3d0u; esp -= 4; W32(esp, v); }
/* 8f555e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f5564u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f5564: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5567: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5569: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f556b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5570u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f5570: guest_badaddr(0x8f5570); return;
}

void f_8f5680(void) {
  LOAD_REGS();
L_8f5680: /* 8f5680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f5681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5682: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f5683: mov edi, ecx */
  edi = ecx;
/* 8f5685: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 8f5688: xor esi, esi */
  esi = 0;
/* 8f568a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f568c: jle 0x8f56b0 */
  if ((zf || sf != of)) goto L_8f56b0;
L_8f568e: /* 8f568e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f568f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_8f5693: /* 8f5693: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f5695: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8f5698: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f569a: jne 0x8f56a7 */
  if (!zf) goto L_8f56a7;
L_8f569c: /* 8f569c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f569e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f569f: mov ecx, edi */
  ecx = edi;
/* 8f56a1: call 0x6c831e */
  esp -= 4; W32(esp, 0x8f56a6u); SPILL(); f_6c831e(); if (g_unwind) return; RELOAD();
/* 8f56a6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8f56a7: /* 8f56a7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8f56aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8f56ab: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f56ad: jl 0x8f5693 */
  if ((sf != of)) goto L_8f5693;
L_8f56af: /* 8f56af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8f56b0: /* 8f56b0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8f56b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f56b4: mov eax, ebp */
  eax = ebp;
/* 8f56b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f56b7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f56b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f56ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f56d0(void) {
  LOAD_REGS();
L_8f56d0: /* 8f56d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f56d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8f56d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f56d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f56d7: mov esi, ecx */
  esi = ecx;
/* 8f56d9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f56db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f56dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f56de: je 0x8f56e8 */
  if (zf) goto L_8f56e8;
L_8f56e0: /* 8f56e0: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x8f56e6u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 8f56e6: jmp 0x8f56ea */
  goto L_8f56ea;
L_8f56e8: /* 8f56e8: xor eax, eax */
  eax = 0;
L_8f56ea: /* 8f56ea: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8f56ed: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8f56f0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8f56f1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f56f3: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 8f56f6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f56f9: je 0x8f5715 */
  if (zf) goto L_8f5715;
L_8f56fb: /* 8f56fb: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 8f56fd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f56ff: nop  */
L_8f5700: /* 8f5700: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8f5703: mov ebp, dword ptr [edx + ecx*4 + 4] */
  ebp = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 8f5707: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5709: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8f570c: je 0x8f5729 */
  if (zf) goto L_8f5729;
L_8f570e: /* 8f570e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f5710: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5713: jne 0x8f5700 */
  if (!zf) goto L_8f5700;
L_8f5715: /* 8f5715: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8f5719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f571a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f571b: mov ecx, esi */
  ecx = esi;
/* 8f571d: call 0x6ca407 */
  esp -= 4; W32(esp, 0x8f5722u); SPILL(); f_6ca407(); if (g_unwind) return; RELOAD();
/* 8f5722: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5723: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5724: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f5725: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5726: ret 8 */
  esp += 12; SPILL(); return;
L_8f5729: /* 8f5729: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8f572d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8f572f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f5732: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f5735: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5736: mov dword ptr [edx + eax + 8], ecx */
  W32((uint32_t)(edx + eax + 0x8u), ecx);
/* 8f573a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f573c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f573d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f573e: lea eax, [eax + edx + 8] */
  eax = (uint32_t)(eax + edx + 0x8u);
/* 8f5742: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5743: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f5770(void) {
  LOAD_REGS();
L_8f5770: /* 8f5770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f5771: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5772: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f5773: mov edi, ecx */
  edi = ecx;
/* 8f5775: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 8f5778: xor ebp, ebp */
  ebp = 0;
/* 8f577a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 8f577b: js 0x8f57d6 */
  if (sf) goto L_8f57d6;
L_8f577d: /* 8f577d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f577e: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 8f5781: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
L_8f5784: /* 8f5784: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f5786: mov ecx, dword ptr [ebx + eax + 4] */
  ecx = R32((uint32_t)(ebx + eax + 0x4u));
/* 8f578a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8f578e: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5790: jne 0x8f579d */
  if (!zf) goto L_8f579d;
L_8f5792: /* 8f5792: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f5794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5795: mov ecx, edi */
  ecx = edi;
/* 8f5797: call 0x6c73e2 */
  esp -= 4; W32(esp, 0x8f579cu); SPILL(); f_6c73e2(); if (g_unwind) return; RELOAD();
/* 8f579c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_8f579d: /* 8f579d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8f579e: sub ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8f57a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f57a3: jge 0x8f5784 */
  if ((sf == of)) goto L_8f5784;
L_8f57a5: /* 8f57a5: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f57a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f57a8: je 0x8f57d6 */
  if (zf) goto L_8f57d6;
L_8f57aa: /* 8f57aa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8f57ad: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 8f57b1: cmp dword ptr [edi + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f57b4: jle 0x8f57cf */
  if ((zf || sf != of)) goto L_8f57cf;
L_8f57b6: /* 8f57b6: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 8f57b9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8f57ba: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f57bc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8f57be: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 8f57c1: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8f57c4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 8f57c7: lea eax, [edx + edx + 8] */
  eax = (uint32_t)(edx + edx + 0x8u);
/* 8f57cb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f57cd: jg 0x8f57b6 */
  if ((!zf && sf == of)) goto L_8f57b6;
L_8f57cf: /* 8f57cf: mov ecx, edi */
  ecx = edi;
/* 8f57d1: call 0x6c69ce */
  esp -= 4; W32(esp, 0x8f57d6u); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
L_8f57d6: /* 8f57d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f57d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f57d8: mov eax, ebp */
  eax = ebp;
/* 8f57da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f57db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f5800(void) {
  LOAD_REGS();
L_8f5800: /* 8f5800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f5801: mov ebp, esp */
  ebp = esp;
/* 8f5803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f5805: push 0x9d93b0 */
  { uint32_t v = 0x9d93b0u; esp -= 4; W32(esp, v); }
/* 8f580a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f5810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f5818: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f581b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f581c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f581d: mov ebx, ecx */
  ebx = ecx;
/* 8f581f: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8f5822: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f5823: xor edi, edi */
  edi = 0;
/* 8f5825: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5827: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f582a: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8f582d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8f5830: jne 0x8f584a */
  if (!zf) goto L_8f584a;
L_8f5832: /* 8f5832: push 0x92 */
  { uint32_t v = 0x92u; esp -= 4; W32(esp, v); }
/* 8f5837: push 0xaee52c */
  { uint32_t v = 0xaee52cu; esp -= 4; W32(esp, v); }
/* 8f583c: push 0xaee538 */
  { uint32_t v = 0xaee538u; esp -= 4; W32(esp, v); }
/* 8f5841: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f5847u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f5847: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f584a: /* 8f584a: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 8f584d: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8f5850: cmp dword ptr [ecx + eax*4 + 0xeb4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5857: je 0x8f5871 */
  if (zf) goto L_8f5871;
L_8f5859: /* 8f5859: push 0x93 */
  { uint32_t v = 0x93u; esp -= 4; W32(esp, v); }
/* 8f585e: push 0xaee544 */
  { uint32_t v = 0xaee544u; esp -= 4; W32(esp, v); }
/* 8f5863: push 0xaee550 */
  { uint32_t v = 0xaee550u; esp -= 4; W32(esp, v); }
/* 8f5868: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f586eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f586e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5871: /* 8f5871: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
L_8f5874: /* 8f5874: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5876: je 0x8f5885 */
  if (zf) goto L_8f5885;
L_8f5878: /* 8f5878: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f587a: mov esi, dword ptr [ecx + 0x54] */
  esi = R32((uint32_t)(ecx + 0x54u));
/* 8f587d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f587f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8f5881u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5881: mov ecx, esi */
  ecx = esi;
/* 8f5883: jmp 0x8f5874 */
  goto L_8f5874;
L_8f5885: /* 8f5885: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
L_8f5888: /* 8f5888: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f588a: je 0x8f5899 */
  if (zf) goto L_8f5899;
L_8f588c: /* 8f588c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f588e: mov esi, dword ptr [ecx + 0x58] */
  esi = R32((uint32_t)(ecx + 0x58u));
/* 8f5891: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f5893: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8f5895u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5895: mov ecx, esi */
  ecx = esi;
/* 8f5897: jmp 0x8f5888 */
  goto L_8f5888;
L_8f5899: /* 8f5899: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 8f589c: mov eax, dword ptr [esi + 0x3ec4] */
  eax = R32((uint32_t)(esi + 0x3ec4u));
/* 8f58a2: add esi, 0x3ec0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ec0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f58a8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f58ab: jmp 0x8f58b0 */
  goto L_8f58b0;
L_8f58b0: /* 8f58b0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f58b3: jge 0x8f5941 */
  if ((sf == of)) goto L_8f5941;
L_8f58b9: /* 8f58b9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f58bb: cmp dword ptr [ecx + edi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f58be: jne 0x8f593b */
  if (!zf) goto L_8f593b;
L_8f58c0: /* 8f58c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f58c2: jge 0x8f58dc */
  if ((sf == of)) goto L_8f58dc;
L_8f58c4: /* 8f58c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f58c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f58ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f58d3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f58d9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f58d9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f58dc: /* 8f58dc: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f58df: jle 0x8f58f9 */
  if ((zf || sf != of)) goto L_8f58f9;
L_8f58e1: /* 8f58e1: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f58e6: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f58eb: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f58f0: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f58f6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f58f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f58f9: /* 8f58f9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8f58fc: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8f58ff: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f5901: jle 0x8f591b */
  if ((zf || sf != of)) goto L_8f591b;
L_8f5903: /* 8f5903: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f5908: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f590d: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f5912: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f5918u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f5918: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f591b: /* 8f591b: mov eax, edi */
  eax = edi;
/* 8f591d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8f5920: /* 8f5920: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f5922: jge 0x8f5927 */
  if ((sf == of)) goto L_8f5927;
L_8f5924: /* 8f5924: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f5925: jmp 0x8f5920 */
  goto L_8f5920;
L_8f5927: /* 8f5927: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f5929: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f592b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f592c: mov ecx, esi */
  ecx = esi;
/* 8f592e: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f5934u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f5934: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f5937: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f593a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f593b: /* 8f593b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f593c: jmp 0x8f58b0 */
  goto L_8f58b0;
L_8f5941: /* 8f5941: sub eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f5944: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5947: je 0x8f5961 */
  if (zf) goto L_8f5961;
L_8f5949: /* 8f5949: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 8f594e: push 0xaee574 */
  { uint32_t v = 0xaee574u; esp -= 4; W32(esp, v); }
/* 8f5953: push 0xaee580 */
  { uint32_t v = 0xaee580u; esp -= 4; W32(esp, v); }
/* 8f5958: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f595eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f595e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5961: /* 8f5961: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8f5964: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 8f5967: xor eax, eax */
  eax = 0;
/* 8f5969: mov dword ptr [ecx + edx*4 + 0xeb4], eax */
  W32((uint32_t)(ecx + edx*4 + 0xeb4u), eax);
/* 8f5970: mov ecx, ebx */
  ecx = ebx;
/* 8f5972: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 8f5975: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8f597bu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8f597b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f597e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f597f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5980: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5987: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5988: mov esp, ebp */
  esp = ebp;
/* 8f598a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f598b: ret  */
  esp += 4; SPILL(); return;
}

void f_8f58ad(void) {
  LOAD_REGS();
L_8f58ad: /* 8f58ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8f58b0: /* 8f58b0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f58b3: jge 0x8f5941 */
  if ((sf == of)) goto L_8f5941;
L_8f58b9: /* 8f58b9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f58bb: cmp dword ptr [ecx + edi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f58be: jne 0x8f593b */
  if (!zf) goto L_8f593b;
L_8f58c0: /* 8f58c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f58c2: jge 0x8f58dc */
  if ((sf == of)) goto L_8f58dc;
L_8f58c4: /* 8f58c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f58c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f58ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f58d3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f58d9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f58d9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f58dc: /* 8f58dc: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f58df: jle 0x8f58f9 */
  if ((zf || sf != of)) goto L_8f58f9;
L_8f58e1: /* 8f58e1: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f58e6: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f58eb: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f58f0: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f58f6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f58f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f58f9: /* 8f58f9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8f58fc: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8f58ff: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f5901: jle 0x8f591b */
  if ((zf || sf != of)) goto L_8f591b;
L_8f5903: /* 8f5903: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f5908: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f590d: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f5912: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f5918u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f5918: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f591b: /* 8f591b: mov eax, edi */
  eax = edi;
/* 8f591d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8f5920: /* 8f5920: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f5922: jge 0x8f5927 */
  if ((sf == of)) goto L_8f5927;
L_8f5924: /* 8f5924: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f5925: jmp 0x8f5920 */
  goto L_8f5920;
L_8f5927: /* 8f5927: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f5929: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f592b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f592c: mov ecx, esi */
  ecx = esi;
/* 8f592e: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f5934u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f5934: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f5937: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f593a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f593b: /* 8f593b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f593c: jmp 0x8f58b0 */
  goto L_8f58b0;
L_8f5941: /* 8f5941: sub eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f5944: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5947: je 0x8f5961 */
  if (zf) goto L_8f5961;
L_8f5949: /* 8f5949: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 8f594e: push 0xaee574 */
  { uint32_t v = 0xaee574u; esp -= 4; W32(esp, v); }
/* 8f5953: push 0xaee580 */
  { uint32_t v = 0xaee580u; esp -= 4; W32(esp, v); }
/* 8f5958: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f595eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f595e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5961: /* 8f5961: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8f5964: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 8f5967: xor eax, eax */
  eax = 0;
/* 8f5969: mov dword ptr [ecx + edx*4 + 0xeb4], eax */
  W32((uint32_t)(ecx + edx*4 + 0xeb4u), eax);
/* 8f5970: mov ecx, ebx */
  ecx = ebx;
/* 8f5972: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 8f5975: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8f597bu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8f597b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f597e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f597f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5980: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5987: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5988: mov esp, ebp */
  esp = ebp;
/* 8f598a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f598b: ret  */
  esp += 4; SPILL(); return;
}

void f_8f598c(void) {
  LOAD_REGS();
L_8f598c: /* 8f598c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f598f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f5994: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f5997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5998: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8f599b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f59a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f59a0(); return;
}

void f_8f59a0(void) {
  LOAD_REGS();
L_8f59a0: /* 8f59a0: push 0xa1ee80 */
  { uint32_t v = 0xa1ee80u; esp -= 4; W32(esp, v); }
/* 8f59a5: push 0xaee5b0 */
  { uint32_t v = 0xaee5b0u; esp -= 4; W32(esp, v); }
/* 8f59aa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f59b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f59b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f59b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f59b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f59b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f59bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f59bc: guest_badaddr(0x8f59bc); return;
}

void f_8f5a30(void) {
  LOAD_REGS();
L_8f5a30: /* 8f5a30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f5a31: mov ebp, esp */
  ebp = esp;
/* 8f5a33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f5a35: push 0x9d93c0 */
  { uint32_t v = 0x9d93c0u; esp -= 4; W32(esp, v); }
/* 8f5a3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f5a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5a41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f5a48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f5a4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f5a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5a4d: mov esi, ecx */
  esi = ecx;
/* 8f5a4f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f5a52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5a54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f5a55: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f5a58: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5a5f: jne 0x8f5a79 */
  if (!zf) goto L_8f5a79;
L_8f5a61: /* 8f5a61: push 0x20e */
  { uint32_t v = 0x20eu; esp -= 4; W32(esp, v); }
/* 8f5a66: push 0xaeeaf8 */
  { uint32_t v = 0xaeeaf8u; esp -= 4; W32(esp, v); }
/* 8f5a6b: push 0xaeeb04 */
  { uint32_t v = 0xaeeb04u; esp -= 4; W32(esp, v); }
/* 8f5a70: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f5a76u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f5a76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5a79: /* 8f5a79: mov ecx, esi */
  ecx = esi;
/* 8f5a7b: call 0x6c9caf */
  esp -= 4; W32(esp, 0x8f5a80u); SPILL(); f_6c9caf(); if (g_unwind) return; RELOAD();
/* 8f5a80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5a82: jne 0x8f5ab2 */
  if (!zf) goto L_8f5ab2;
L_8f5a84: /* 8f5a84: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f5a87: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f5a8a: cmp dword ptr [ecx + eax*4 + 0xeb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5a91: je 0x8f5aab */
  if (zf) goto L_8f5aab;
L_8f5a93: /* 8f5a93: push 0x211 */
  { uint32_t v = 0x211u; esp -= 4; W32(esp, v); }
/* 8f5a98: push 0xaeeb10 */
  { uint32_t v = 0xaeeb10u; esp -= 4; W32(esp, v); }
/* 8f5a9d: push 0xaeeb1c */
  { uint32_t v = 0xaeeb1cu; esp -= 4; W32(esp, v); }
/* 8f5aa2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f5aa8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f5aa8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5aab: /* 8f5aab: mov ecx, esi */
  ecx = esi;
/* 8f5aad: call 0x6cb938 */
  esp -= 4; W32(esp, 0x8f5ab2u); SPILL(); f_6cb938(); if (g_unwind) return; RELOAD();
L_8f5ab2: /* 8f5ab2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f5ab5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5ab6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5ab7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5abe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5abf: mov esp, ebp */
  esp = ebp;
/* 8f5ac1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f5ac2: ret  */
  esp += 4; SPILL(); return;
}

void f_8f5ac3(void) {
  LOAD_REGS();
L_8f5ac3: /* 8f5ac3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f5ac6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f5acb: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f5ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5acf: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f5ad2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5ad7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f5ad7(); return;
}

void f_8f5ad7(void) {
  LOAD_REGS();
L_8f5ad7: /* 8f5ad7: push 0xa1eeac */
  { uint32_t v = 0xa1eeacu; esp -= 4; W32(esp, v); }
/* 8f5adc: push 0xaeeb40 */
  { uint32_t v = 0xaeeb40u; esp -= 4; W32(esp, v); }
/* 8f5ae1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f5ae7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f5ae7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5aea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5aec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5aee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5af3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f5af3: guest_badaddr(0x8f5af3); return;
}

void f_8f5b40(void) {
  LOAD_REGS();
L_8f5b40: /* 8f5b40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f5b42: push 0x9d9402 */
  { uint32_t v = 0x9d9402u; esp -= 4; W32(esp, v); }
/* 8f5b47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f5b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5b4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f5b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f5b56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5b57: mov esi, ecx */
  esi = ecx;
/* 8f5b59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8f5b5d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x8f5b63u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 8f5b63: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8f5b69: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8f5b71: mov dword ptr [esi], 0xa06fb0 */
  W32((uint32_t)(esi), 0xa06fb0u);
/* 8f5b77: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f5b7du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f5b7d: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 8f5b83: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 8f5b88: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f5b8eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f5b8e: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 8f5b94: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 8f5b99: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f5b9fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f5b9f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 8f5ba5: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 8f5baa: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f5bb0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f5bb0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8f5bb4: mov eax, esi */
  eax = esi;
/* 8f5bb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5bb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5bbe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5bc1: ret  */
  esp += 4; SPILL(); return;
}

void f_8f5c00(void) {
  LOAD_REGS();
L_8f5c00: /* 8f5c00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f5c01: mov ebp, esp */
  ebp = esp;
/* 8f5c03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f5c05: push 0x9d9420 */
  { uint32_t v = 0x9d9420u; esp -= 4; W32(esp, v); }
/* 8f5c0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f5c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5c11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f5c18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f5c1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f5c1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5c1d: mov esi, ecx */
  esi = ecx;
/* 8f5c1f: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f5c22: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5c24: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 8f5c27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f5c28: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f5c2b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5c32: je 0x8f5c43 */
  if (zf) goto L_8f5c43;
L_8f5c34: /* 8f5c34: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f5c37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5c38: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f5c3e: call 0x6c9449 */
  esp -= 4; W32(esp, 0x8f5c43u); SPILL(); f_6c9449(); if (g_unwind) return; RELOAD();
L_8f5c43: /* 8f5c43: mov ecx, esi */
  ecx = esi;
/* 8f5c45: call 0x6c76a8 */
  esp -= 4; W32(esp, 0x8f5c4au); SPILL(); f_6c76a8(); if (g_unwind) return; RELOAD();
/* 8f5c4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f5c4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5c4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5c4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5c56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5c57: mov esp, ebp */
  esp = ebp;
/* 8f5c59: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f5c5a: ret  */
  esp += 4; SPILL(); return;
}

void f_8f5c5b(void) {
  LOAD_REGS();
L_8f5c5b: /* 8f5c5b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f5c5e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f5c63: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f5c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f5c67: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f5c6a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5c6fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f5c6f(); return;
}

void f_8f5c6f(void) {
  LOAD_REGS();
L_8f5c6f: /* 8f5c6f: push 0xa1eee8 */
  { uint32_t v = 0xa1eee8u; esp -= 4; W32(esp, v); }
/* 8f5c74: push 0xaeebf0 */
  { uint32_t v = 0xaeebf0u; esp -= 4; W32(esp, v); }
/* 8f5c79: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f5c7fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f5c7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5c82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5c84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5c86: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5c8bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f5c8b: guest_badaddr(0x8f5c8b); return;
}

void f_8f5cc0(void) {
  LOAD_REGS();
L_8f5cc0: /* 8f5cc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f5cc1: mov ebp, esp */
  ebp = esp;
/* 8f5cc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f5cc5: push 0x9d9430 */
  { uint32_t v = 0x9d9430u; esp -= 4; W32(esp, v); }
/* 8f5cca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f5cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5cd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f5cd8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f5cdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f5cdc: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8f5ce2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f5ce3: mov esi, ecx */
  esi = ecx;
/* 8f5ce5: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f5ce8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5cea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f5ceb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f5cee: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5cf5: jne 0x8f5d0b */
  if (!zf) goto L_8f5d0b;
L_8f5cf7: /* 8f5cf7: push 0x28b */
  { uint32_t v = 0x28bu; esp -= 4; W32(esp, v); }
/* 8f5cfc: push 0xaeec08 */
  { uint32_t v = 0xaeec08u; esp -= 4; W32(esp, v); }
/* 8f5d01: push 0xaeec14 */
  { uint32_t v = 0xaeec14u; esp -= 4; W32(esp, v); }
/* 8f5d06: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5d08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5d08: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5d0b: /* 8f5d0b: mov ecx, esi */
  ecx = esi;
/* 8f5d0d: call 0x6c9caf */
  esp -= 4; W32(esp, 0x8f5d12u); SPILL(); f_6c9caf(); if (g_unwind) return; RELOAD();
/* 8f5d12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5d14: jne 0x8f5e96 */
  if (!zf) goto L_8f5e96;
L_8f5d1a: /* 8f5d1a: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f5d1d: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f5d20: cmp dword ptr [ecx + eax*4 + 0xeb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f5d27: je 0x8f5d3d */
  if (zf) goto L_8f5d3d;
L_8f5d29: /* 8f5d29: push 0x28e */
  { uint32_t v = 0x28eu; esp -= 4; W32(esp, v); }
/* 8f5d2e: push 0xaeec20 */
  { uint32_t v = 0xaeec20u; esp -= 4; W32(esp, v); }
/* 8f5d33: push 0xaeec2c */
  { uint32_t v = 0xaeec2cu; esp -= 4; W32(esp, v); }
/* 8f5d38: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5d3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5d3a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5d3d: /* 8f5d3d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f5d3f: mov ecx, esi */
  ecx = esi;
/* 8f5d41: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8f5d44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5d44: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 8f5d4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5d4c: je 0x8f5d7d */
  if (zf) goto L_8f5d7d;
L_8f5d4e: /* 8f5d4e: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8f5d51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5d53: jne 0x8f5d69 */
  if (!zf) goto L_8f5d69;
L_8f5d55: /* 8f5d55: push 0x296 */
  { uint32_t v = 0x296u; esp -= 4; W32(esp, v); }
/* 8f5d5a: push 0xaeec50 */
  { uint32_t v = 0xaeec50u; esp -= 4; W32(esp, v); }
/* 8f5d5f: push 0xaeec5c */
  { uint32_t v = 0xaeec5cu; esp -= 4; W32(esp, v); }
/* 8f5d64: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5d66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5d66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5d69: /* 8f5d69: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8f5d6c: mov ecx, dword ptr [esi + 0x98] */
  ecx = R32((uint32_t)(esi + 0x98u));
/* 8f5d72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5d73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f5d74: call dword ptr [0xcfaca4] */
  esp -= 4; W32(esp, 0x8f5d7au); SPILL(); f_4e2aa9(); if (g_unwind) return; /* Core!?ExitProperties@UObject@@SAXPAEPAVUClass@@@Z */ RELOAD();
/* 8f5d7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5d7d: /* 8f5d7d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f5d80: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f5d83: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8f5d86: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5d88: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f5d8c: je 0x8f5ec6 */
  if (zf) goto L_8f5ec6;
L_8f5d92: /* 8f5d92: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f5d95: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5d97: mov edi, dword ptr [0xcfa600] */
  edi = R32((uint32_t)(0xcfa600u));
/* 8f5d9d: je 0x8f5db9 */
  if (zf) goto L_8f5db9;
L_8f5d9f: /* 8f5d9f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f5da1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5da1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5da3: jne 0x8f5db9 */
  if (!zf) goto L_8f5db9;
L_8f5da5: /* 8f5da5: push 0x29e */
  { uint32_t v = 0x29eu; esp -= 4; W32(esp, v); }
/* 8f5daa: push 0xaeec68 */
  { uint32_t v = 0xaeec68u; esp -= 4; W32(esp, v); }
/* 8f5daf: push 0xaeec74 */
  { uint32_t v = 0xaeec74u; esp -= 4; W32(esp, v); }
/* 8f5db4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5db6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5db6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5db9: /* 8f5db9: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8f5dbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5dbe: jne 0x8f5dd4 */
  if (!zf) goto L_8f5dd4;
L_8f5dc0: /* 8f5dc0: push 0x29f */
  { uint32_t v = 0x29fu; esp -= 4; W32(esp, v); }
/* 8f5dc5: push 0xaeec90 */
  { uint32_t v = 0xaeec90u; esp -= 4; W32(esp, v); }
/* 8f5dca: push 0xaeec9c */
  { uint32_t v = 0xaeec9cu; esp -= 4; W32(esp, v); }
/* 8f5dcf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5dd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5dd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5dd4: /* 8f5dd4: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 8f5dd7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f5dd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5ddb: jne 0x8f5df1 */
  if (!zf) goto L_8f5df1;
L_8f5ddd: /* 8f5ddd: push 0x2a0 */
  { uint32_t v = 0x2a0u; esp -= 4; W32(esp, v); }
/* 8f5de2: push 0xaeeca4 */
  { uint32_t v = 0xaeeca4u; esp -= 4; W32(esp, v); }
/* 8f5de7: push 0xaeecb0 */
  { uint32_t v = 0xaeecb0u; esp -= 4; W32(esp, v); }
/* 8f5dec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5deeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5dee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5df1: /* 8f5df1: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f5df4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5df6: jne 0x8f5e0c */
  if (!zf) goto L_8f5e0c;
L_8f5df8: /* 8f5df8: push 0x2a1 */
  { uint32_t v = 0x2a1u; esp -= 4; W32(esp, v); }
/* 8f5dfd: push 0xaeecc4 */
  { uint32_t v = 0xaeecc4u; esp -= 4; W32(esp, v); }
/* 8f5e02: push 0xaeecd0 */
  { uint32_t v = 0xaeecd0u; esp -= 4; W32(esp, v); }
/* 8f5e07: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5e09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5e09: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5e0c: /* 8f5e0c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f5e0f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f5e11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5e11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5e13: jne 0x8f5e29 */
  if (!zf) goto L_8f5e29;
L_8f5e15: /* 8f5e15: push 0x2a2 */
  { uint32_t v = 0x2a2u; esp -= 4; W32(esp, v); }
/* 8f5e1a: push 0xaeecdc */
  { uint32_t v = 0xaeecdcu; esp -= 4; W32(esp, v); }
/* 8f5e1f: push 0xaeece8 */
  { uint32_t v = 0xaeece8u; esp -= 4; W32(esp, v); }
/* 8f5e24: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5e26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5e26: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5e29: /* 8f5e29: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f5e2c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f5e2f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5e31: jne 0x8f5e47 */
  if (!zf) goto L_8f5e47;
L_8f5e33: /* 8f5e33: push 0x2a3 */
  { uint32_t v = 0x2a3u; esp -= 4; W32(esp, v); }
/* 8f5e38: push 0xaeed00 */
  { uint32_t v = 0xaeed00u; esp -= 4; W32(esp, v); }
/* 8f5e3d: push 0xaeed0c */
  { uint32_t v = 0xaeed0cu; esp -= 4; W32(esp, v); }
/* 8f5e42: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5e44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5e44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5e47: /* 8f5e47: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f5e4a: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f5e4d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f5e4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5e4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5e51: jne 0x8f5e67 */
  if (!zf) goto L_8f5e67;
L_8f5e53: /* 8f5e53: push 0x2a4 */
  { uint32_t v = 0x2a4u; esp -= 4; W32(esp, v); }
/* 8f5e58: push 0xaeed20 */
  { uint32_t v = 0xaeed20u; esp -= 4; W32(esp, v); }
/* 8f5e5d: push 0xaeed2c */
  { uint32_t v = 0xaeed2cu; esp -= 4; W32(esp, v); }
/* 8f5e62: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f5e64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5e64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f5e67: /* 8f5e67: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8f5e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5e6c: je 0x8f5e88 */
  if (zf) goto L_8f5e88;
L_8f5e6e: /* 8f5e6e: test byte ptr [eax + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5e75: je 0x8f5ea7 */
  if (zf) goto L_8f5ea7;
L_8f5e77: /* 8f5e77: mov byte ptr [eax + 0x91], 4 */
  W8((uint32_t)(eax + 0x91u), 0x4u);
/* 8f5e7e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8f5e81: mov byte ptr [edx + 0x90], 0 */
  W8((uint32_t)(edx + 0x90u), 0x0u);
L_8f5e88: /* 8f5e88: mov ecx, esi */
  ecx = esi;
/* 8f5e8a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f5e91: call 0x6cb938 */
  esp -= 4; W32(esp, 0x8f5e96u); SPILL(); f_6cb938(); if (g_unwind) return; RELOAD();
L_8f5e96: /* 8f5e96: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f5e99: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f5e9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f5e9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f5ea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f5ea3: mov esp, ebp */
  esp = ebp;
/* 8f5ea5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f5ea6: ret  */
  esp += 4; SPILL(); return;
L_8f5ea7: /* 8f5ea7: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5eb1: jne 0x8f5e88 */
  if (!zf) goto L_8f5e88;
L_8f5eb3: /* 8f5eb3: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8f5eb9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f5ebb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f5ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5ebe: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8f5ec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f5ec4: jmp 0x8f5e88 */
  goto L_8f5e88;
L_8f5ec6: /* 8f5ec6: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8f5ec9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5ecb: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 8f5ece: je 0x8f5e88 */
  if (zf) goto L_8f5e88;
L_8f5ed0: /* 8f5ed0: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 8f5ed3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f5ed5: jne 0x8f5e88 */
  if (!zf) goto L_8f5e88;
L_8f5ed7: /* 8f5ed7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f5ed8: lea ecx, [eax + 0x3ecc] */
  ecx = (uint32_t)(eax + 0x3eccu);
/* 8f5ede: call 0x6c79f5 */
  esp -= 4; W32(esp, 0x8f5ee3u); SPILL(); f_6c79f5(); if (g_unwind) return; RELOAD();
/* 8f5ee3: jmp 0x8f5e88 */
  goto L_8f5e88;
}

void f_8f5ee5(void) {
  LOAD_REGS();
L_8f5ee5: /* 8f5ee5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f5ee8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f5eed: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f5ef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f5ef1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f5ef4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5ef9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f5ef9(); return;
}

void f_8f5ef9(void) {
  LOAD_REGS();
L_8f5ef9: /* 8f5ef9: push 0xa1ef68 */
  { uint32_t v = 0xa1ef68u; esp -= 4; W32(esp, v); }
/* 8f5efe: push 0xaeed4c */
  { uint32_t v = 0xaeed4cu; esp -= 4; W32(esp, v); }
/* 8f5f03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f5f09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f5f09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5f0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5f0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5f10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5f15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f5f15(); return;
}

void f_8f5f15(void) {
  LOAD_REGS();
L_8f5f15: /* 8f5f15: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f5f18: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f5f1d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8f5f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f5f21: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8f5f24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5f29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f5f29(); return;
}

void f_8f5f29(void) {
  LOAD_REGS();
L_8f5f29: /* 8f5f29: push 0xa1ef30 */
  { uint32_t v = 0xa1ef30u; esp -= 4; W32(esp, v); }
/* 8f5f2e: push 0xaeed54 */
  { uint32_t v = 0xaeed54u; esp -= 4; W32(esp, v); }
/* 8f5f33: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f5f39u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f5f39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f5f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5f3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f5f40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f5f45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f5f45: guest_badaddr(0x8f5f45); return;
}

void f_8f6000(void) {
  LOAD_REGS();
L_8f6000: /* 8f6000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f6001: mov ebp, esp */
  ebp = esp;
/* 8f6003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f6005: push 0x9d9440 */
  { uint32_t v = 0x9d9440u; esp -= 4; W32(esp, v); }
/* 8f600a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f6010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f6018: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f601b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f601e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f601f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f6020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6021: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f6024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6025: mov ebx, ecx */
  ebx = ecx;
/* 8f6027: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f602e: call 0x6c9f1b */
  esp -= 4; W32(esp, 0x8f6033u); SPILL(); f_6c9f1b(); if (g_unwind) return; RELOAD();
/* 8f6033: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 8f6036: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6038: je 0x8f6093 */
  if (zf) goto L_8f6093;
L_8f603a: /* 8f603a: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* 8f6040: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_8f6043: /* 8f6043: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f6045: jl 0x8f6093 */
  if ((sf != of)) goto L_8f6093;
L_8f6047: /* 8f6047: mov edx, dword ptr [ebx + 0xbc] */
  edx = R32((uint32_t)(ebx + 0xbcu));
/* 8f604d: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8f6050: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8f6053: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6056: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6059: jne 0x8f6090 */
  if (!zf) goto L_8f6090;
L_8f605b: /* 8f605b: mov cl, byte ptr [eax + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x8u))) & 0xffu);
/* 8f605e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6060: jne 0x8f6090 */
  if (!zf) goto L_8f6090;
L_8f6062: /* 8f6062: lea esi, [ebx + 0xb0] */
  esi = (uint32_t)(ebx + 0xb0u);
/* 8f6068: xor eax, eax */
  eax = 0;
/* 8f606a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f6070: /* 8f6070: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6073: jge 0x8f607f */
  if ((sf == of)) goto L_8f607f;
L_8f6075: /* 8f6075: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6077: cmp dword ptr [edx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f607a: je 0x8f6090 */
  if (zf) goto L_8f6090;
L_8f607c: /* 8f607c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f607d: jmp 0x8f6070 */
  goto L_8f6070;
L_8f607f: /* 8f607f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f6081: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f6083: mov ecx, esi */
  ecx = esi;
/* 8f6085: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f608bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f608b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f608d: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_8f6090: /* 8f6090: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8f6091: jmp 0x8f6043 */
  goto L_8f6043;
L_8f6093: /* 8f6093: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6096: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6097: mov dword ptr [ebx + 0x8c], 1 */
  W32((uint32_t)(ebx + 0x8cu), 0x1u);
/* 8f60a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f60a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f60a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f60aa: mov esp, ebp */
  esp = ebp;
/* 8f60ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f60ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f60b0(void) {
  LOAD_REGS();
L_8f60b0: /* 8f60b0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f60b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f60b8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f60bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f60bc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f60bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f60c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f60c4(); return;
}

void f_8f60c4(void) {
  LOAD_REGS();
L_8f60c4: /* 8f60c4: push 0xa1ef98 */
  { uint32_t v = 0xa1ef98u; esp -= 4; W32(esp, v); }
/* 8f60c9: push 0xaeed5c */
  { uint32_t v = 0xaeed5cu; esp -= 4; W32(esp, v); }
/* 8f60ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f60d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f60d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f60d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f60d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f60db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f60e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f60e0: guest_badaddr(0x8f60e0); return;
}

void f_8f6130(void) {
  LOAD_REGS();
L_8f6130: /* 8f6130: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f6131: mov ebp, esp */
  ebp = esp;
/* 8f6133: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f6135: push 0x9d9450 */
  { uint32_t v = 0x9d9450u; esp -= 4; W32(esp, v); }
/* 8f613a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f6140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6141: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f6148: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f614b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f614c: mov eax, ecx */
  eax = ecx;
/* 8f614e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f614f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f6152: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8f6155: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6157: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6158: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f615b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f6162: je 0x8f617c */
  if (zf) goto L_8f617c;
L_8f6164: /* 8f6164: push 0x2d0 */
  { uint32_t v = 0x2d0u; esp -= 4; W32(esp, v); }
/* 8f6169: push 0xaeed64 */
  { uint32_t v = 0xaeed64u; esp -= 4; W32(esp, v); }
/* 8f616e: push 0xaeed70 */
  { uint32_t v = 0xaeed70u; esp -= 4; W32(esp, v); }
/* 8f6173: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f6179u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f6179: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f617c: /* 8f617c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f617f: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6182: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6184: je 0x8f619e */
  if (zf) goto L_8f619e;
L_8f6186: /* 8f6186: push 0x2d1 */
  { uint32_t v = 0x2d1u; esp -= 4; W32(esp, v); }
/* 8f618b: push 0xaeed7c */
  { uint32_t v = 0xaeed7cu; esp -= 4; W32(esp, v); }
/* 8f6190: push 0xaeed88 */
  { uint32_t v = 0xaeed88u; esp -= 4; W32(esp, v); }
/* 8f6195: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f619bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f619b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f619e: /* 8f619e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f61a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f61a4: mov dword ptr [eax + 0x68], edx */
  W32((uint32_t)(eax + 0x68u), edx);
/* 8f61a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f61aa: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f61ad: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f61b3u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f61b3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f61b6: mov dword ptr [edx + 0x6c], eax */
  W32((uint32_t)(edx + 0x6cu), eax);
/* 8f61b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f61bc: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f61bf: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f61c5: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 8f61c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f61ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f61cb: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8f61d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f61d1: mov esi, eax */
  esi = eax;
/* 8f61d3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f61d6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8f61d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f61da: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f61dd: lea edx, [eax + 0x68] */
  edx = (uint32_t)(eax + 0x68u);
/* 8f61e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f61e1: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f61e7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f61ea: call 0x6c7699 */
  esp -= 4; W32(esp, 0x8f61efu); SPILL(); f_6c7699(); if (g_unwind) return; RELOAD();
/* 8f61ef: mov ecx, esi */
  ecx = esi;
/* 8f61f1: call dword ptr [0xcfacb0] */
  esp -= 4; W32(esp, 0x8f61f7u); SPILL(); f_4e4485(); if (g_unwind) return; /* Core!?GetRepConditionCount@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f61f7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f61fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f61fb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f61fd: add ecx, 0xa4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f6203: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8f6209u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8f6209: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f620c: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6216: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6219: jne 0x8f62f8 */
  if (!zf) goto L_8f62f8;
L_8f621f: /* 8f621f: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 8f6222: mov esi, dword ptr [ecx + 0x4ec] */
  esi = R32((uint32_t)(ecx + 0x4ecu));
/* 8f6228: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f622a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f622b: lea ecx, [eax + 0x98] */
  ecx = (uint32_t)(eax + 0x98u);
/* 8f6231: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f6237u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f6237: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f623a: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 8f623d: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 8f6243: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6245: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6247: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6249: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f624b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f624c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f624d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f624e: call dword ptr [0xcfacac] */
  esp -= 4; W32(esp, 0x8f6254u); SPILL(); f_4e11c7(); if (g_unwind) return; /* Core!?InitProperties@UObject@@SAXPAEHPAVUClass@@0HPAV1@2@Z */ RELOAD();
/* 8f6254: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6257: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 8f625a: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f625d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6260: /* 8f6260: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6262: je 0x8f62f8 */
  if (zf) goto L_8f62f8;
L_8f6268: /* 8f6268: test dword ptr [esi + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f626f: je 0x8f6287 */
  if (zf) goto L_8f6287;
L_8f6271: /* 8f6271: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 8f6277: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 8f627a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f627c: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f627e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f627f: mov ecx, esi */
  ecx = esi;
/* 8f6281: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x8f6287u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6287: /* 8f6287: mov ecx, esi */
  ecx = esi;
/* 8f6289: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f628fu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f628f: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6299: jne 0x8f62d3 */
  if (!zf) goto L_8f62d3;
L_8f629b: /* 8f629b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f629e: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 8f62a4: add edx, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f62a7: mov ecx, esi */
  ecx = esi;
/* 8f62a9: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8f62ac: call dword ptr [0xcfaca8] */
  esp -= 4; W32(esp, 0x8f62b2u); SPILL(); f_4e2ab3(); if (g_unwind) return; /* Core!?GetSize@UProperty@@QBEHXZ */ RELOAD();
/* 8f62b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f62b5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f62b8: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f62bb: xor eax, eax */
  eax = 0;
/* 8f62bd: mov ebx, ecx */
  ebx = ecx;
/* 8f62bf: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f62c2: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f62c5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f62c7: mov ecx, ebx */
  ecx = ebx;
/* 8f62c9: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f62cb: mov esi, dword ptr [esi + 0x50] */
  esi = R32((uint32_t)(esi + 0x50u));
/* 8f62ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f62d1: jmp 0x8f6260 */
  goto L_8f6260;
L_8f62d3: /* 8f62d3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f62d6: mov ecx, dword ptr [eax + 0x98] */
  ecx = R32((uint32_t)(eax + 0x98u));
/* 8f62dc: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 8f62df: lea eax, [ecx + edx] */
  eax = (uint32_t)(ecx + edx);
/* 8f62e2: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8f62e5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8f62e7: not ecx */
  ecx = ~ecx;
/* 8f62e9: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f62eb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8f62ed: mov esi, dword ptr [esi + 0x50] */
  esi = R32((uint32_t)(esi + 0x50u));
/* 8f62f0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f62f3: jmp 0x8f6260 */
  goto L_8f6260;
L_8f62f8: /* 8f62f8: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 8f62fb: mov edx, dword ptr [edx + 0x4bc] */
  edx = R32((uint32_t)(edx + 0x4bcu));
/* 8f6301: lea ecx, [eax + 0xbc] */
  ecx = (uint32_t)(eax + 0xbcu);
/* 8f6307: xor eax, eax */
  eax = 0;
/* 8f6309: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f6310: /* 8f6310: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6313: jge 0x8f6318 */
  if ((sf == of)) goto L_8f6318;
L_8f6315: /* 8f6315: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f6316: jmp 0x8f6310 */
  goto L_8f6310;
L_8f6318: /* 8f6318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6319: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8f631b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8f6321u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8f6321: /* 8f6321: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6324: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 8f6327: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 8f632d: cmp ecx, dword ptr [edx + 0x4bc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4bcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6333: jge 0x8f6392 */
  if ((sf == of)) goto L_8f6392;
L_8f6335: /* 8f6335: lea esi, [eax + 0xbc] */
  esi = (uint32_t)(eax + 0xbcu);
/* 8f633b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8f633d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f633f: mov ecx, esi */
  ecx = esi;
/* 8f6341: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f6347u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f6347: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f6349: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f634c: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8f634f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6351: je 0x8f6321 */
  if (zf) goto L_8f6321;
L_8f6353: /* 8f6353: mov dword ptr [eax], 0xffffffff */
  W32((uint32_t)(eax), 0xffffffffu);
/* 8f6359: mov dword ptr [eax + 4], 0xffffffff */
  W32((uint32_t)(eax + 0x4u), 0xffffffffu);
/* 8f6360: jmp 0x8f6321 */
  goto L_8f6321;
L_8f6392: /* 8f6392: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6395: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6396: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f6397: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f639e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f639f: mov esp, ebp */
  esp = ebp;
/* 8f63a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f63a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f6362(void) {
  LOAD_REGS();
L_8f6362: /* 8f6362: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6365: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f636a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8f636d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f636e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8f6371: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6376u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f6376(); return;
}

void f_8f6376(void) {
  LOAD_REGS();
L_8f6376: /* 8f6376: push 0xa1efd8 */
  { uint32_t v = 0xa1efd8u; esp -= 4; W32(esp, v); }
/* 8f637b: push 0xaeed94 */
  { uint32_t v = 0xaeed94u; esp -= 4; W32(esp, v); }
/* 8f6380: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f6386u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f6386: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6389: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f638b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f638d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6392u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f6392: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6395: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6396: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f6397: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f639e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f639f: mov esp, ebp */
  esp = ebp;
/* 8f63a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f63a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f6450(void) {
  LOAD_REGS();
L_8f6450: /* 8f6450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f6451: mov ebp, esp */
  ebp = esp;
/* 8f6453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f6455: push 0x9d9460 */
  { uint32_t v = 0x9d9460u; esp -= 4; W32(esp, v); }
/* 8f645a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f6460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f6468: sub esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f646e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f646f: mov eax, ecx */
  eax = ecx;
/* 8f6471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f6472: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f6475: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8f6478: xor ebx, ebx */
  ebx = 0;
/* 8f647a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f647c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f647d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f6480: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f6483: je 0x8f64a0 */
  if (zf) goto L_8f64a0;
L_8f6485: /* 8f6485: push 0x30b */
  { uint32_t v = 0x30bu; esp -= 4; W32(esp, v); }
/* 8f648a: push 0xaeed9c */
  { uint32_t v = 0xaeed9cu; esp -= 4; W32(esp, v); }
/* 8f648f: push 0xaeeda8 */
  { uint32_t v = 0xaeeda8u; esp -= 4; W32(esp, v); }
/* 8f6494: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f649au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f649a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f649d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f64a0: /* 8f64a0: cmp dword ptr [eax + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f64a3: je 0x8f64d1 */
  if (zf) goto L_8f64d1;
L_8f64a5: /* 8f64a5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f64a8: movzx ecx, byte ptr [eax + 0x6d] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x6du)));
/* 8f64ac: mov edx, dword ptr [eax + 0x60] */
  edx = R32((uint32_t)(eax + 0x60u));
/* 8f64af: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8f64b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f64b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f64b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f64b8: push 0xaeedb4 */
  { uint32_t v = 0xaeedb4u; esp -= 4; W32(esp, v); }
/* 8f64bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f64be: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f64c4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f64c4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f64c7: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 8f64ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f64cd: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f64cf: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f64d1: /* 8f64d1: cmp dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f64d4: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f64d6: /* 8f64d6: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f64d9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f64db: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8f64de: jne 0x8f68b2 */
  if (!zf) goto L_8f68b2;
L_8f64e4: /* 8f64e4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f64e7: mov al, byte ptr [ecx + 0x6c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x6cu))) & 0xffu);
/* 8f64ea: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f64ec: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f64f0: jne 0x8f6531 */
  if (!zf) goto L_8f6531;
L_8f64f2: /* 8f64f2: movzx edx, byte ptr [ecx + 0x6e] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x6eu)));
/* 8f64f6: movzx eax, byte ptr [ecx + 0x6d] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x6du)));
/* 8f64fa: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8f6500: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6501: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6504: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6505: push 0xaeedd8 */
  { uint32_t v = 0xaeedd8u; esp -= 4; W32(esp, v); }
/* 8f650a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f650b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f6511u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f6511: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6514: /* 8f6514: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6517: mov dword ptr [eax + 0x5c], 1 */
  W32((uint32_t)(eax + 0x5cu), 0x1u);
L_8f651e: /* 8f651e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f6528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f652a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f652b: mov esp, ebp */
  esp = ebp;
/* 8f652d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f652e: ret 4 */
  esp += 8; SPILL(); return;
L_8f6531: /* 8f6531: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6533: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6537: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f653au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f653a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f653d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f653e: call 0x6c920a */
  esp -= 4; W32(esp, 0x8f6543u); SPILL(); f_6c920a(); if (g_unwind) return; RELOAD();
/* 8f6543: mov edi, eax */
  edi = eax;
/* 8f6545: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6548: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f654a: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f6550: /* 8f6550: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6553: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6554: call 0x6c58e4 */
  esp -= 4; W32(esp, 0x8f6559u); SPILL(); f_6c58e4(); if (g_unwind) return; RELOAD();
/* 8f6559: mov ebx, eax */
  ebx = eax;
/* 8f655b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f655e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6560: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8f6563: je 0x8f685a */
  if (zf) goto L_8f685a;
L_8f6569: /* 8f6569: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 8f656e: mov ecx, ebx */
  ecx = ebx;
/* 8f6570: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8f6576u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8f6576: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6578: je 0x8f685a */
  if (zf) goto L_8f685a;
L_8f657e: /* 8f657e: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 8f6583: mov ecx, ebx */
  ecx = ebx;
/* 8f6585: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8f658bu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8f658b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f658d: jne 0x8f65a7 */
  if (!zf) goto L_8f65a7;
L_8f658f: /* 8f658f: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 8f6594: push 0xaeeeac */
  { uint32_t v = 0xaeeeacu; esp -= 4; W32(esp, v); }
/* 8f6599: push 0xaeeeb8 */
  { uint32_t v = 0xaeeeb8u; esp -= 4; W32(esp, v); }
/* 8f659e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f65a4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f65a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f65a7: /* 8f65a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65ad: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f65b0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8f65b6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8f65b6: mov ecx, ebx */
  ecx = ebx;
/* 8f65b8: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f65beu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f65be: mov edi, dword ptr [eax + 0x84] */
  edi = R32((uint32_t)(eax + 0x84u));
/* 8f65c4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f65c7: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8f65ca: shr edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 8f65cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f65ce: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8f65d1: call 0x8f4720 */
  esp -= 4; W32(esp, 0x8f65d6u); SPILL(); f_8f4720(); if (g_unwind) return; RELOAD();
/* 8f65d6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f65d9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f65db: je 0x8f65e8 */
  if (zf) goto L_8f65e8;
L_8f65dd: /* 8f65dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f65e0: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 8f65e3: call 0x8f2990 */
  esp -= 4; W32(esp, 0x8f65e8u); SPILL(); f_8f2990(); if (g_unwind) return; RELOAD();
L_8f65e8: /* 8f65e8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f65eb: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f65ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f65f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f65f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f65fb: mov ecx, esp */
  ecx = esp;
/* 8f65fd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f65ff: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6602: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8f6605: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8f6608: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f660b: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8f660e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f6611: mov eax, esp */
  eax = esp;
/* 8f6613: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6615: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f6618: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6619: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f661c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8f661f: mov ecx, esp */
  ecx = esp;
/* 8f6621: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8f6624: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6626: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f662cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f662c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f662f: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8f6632: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6634: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6635: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8f663bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f663b: mov edi, eax */
  edi = eax;
/* 8f663d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f663f: mov dword ptr [ebp - 0x4c], 1 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 8f6646: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f664c: /* 8f664c: mov ecx, ebx */
  ecx = ebx;
/* 8f664e: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f6654u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f6654: mov ecx, ebx */
  ecx = ebx;
/* 8f6656: mov esi, eax */
  esi = eax;
/* 8f6658: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f665eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f665e: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 8f6664: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f666a: shr ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f666d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f6670: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6672: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6674: push 0xaeeee8 */
  { uint32_t v = 0xaeeee8u; esp -= 4; W32(esp, v); }
/* 8f6679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f667a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f6680u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f6680: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6683: mov ecx, ebx */
  ecx = ebx;
/* 8f6685: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f668bu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f668b: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 8f6691: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6694: je 0x8f670d */
  if (zf) goto L_8f670d;
L_8f6696: /* 8f6696: mov ecx, ebx */
  ecx = ebx;
/* 8f6698: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f669eu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f669e: mov edi, dword ptr [eax + 0x80] */
  edi = R32((uint32_t)(eax + 0x80u));
/* 8f66a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f66aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f66ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f66b1: mov ecx, esp */
  ecx = esp;
/* 8f66b3: and edi, 0xfffffeff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffeffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8f66b9: mov dword ptr [eax + 0x80], edi */
  W32((uint32_t)(eax + 0x80u), edi);
/* 8f66bf: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f66c2: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f66c5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f66c7: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f66ca: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8f66cd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8f66d0: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f66d3: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8f66d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f66d9: mov eax, esp */
  eax = esp;
/* 8f66db: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f66dd: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f66e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f66e1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f66e4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8f66e7: mov ecx, esp */
  ecx = esp;
/* 8f66e9: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8f66ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66ee: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f66f4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f66f4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f66f7: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8f66fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f66fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f66fd: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8f6703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6703: mov edi, eax */
  edi = eax;
/* 8f6705: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6707: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f670d: /* 8f670d: mov ecx, ebx */
  ecx = ebx;
/* 8f670f: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f6715u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f6715: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 8f671b: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f671e: je 0x8f6807 */
  if (zf) goto L_8f6807;
L_8f6724: /* 8f6724: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6727: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 8f672a: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8f672d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f672f: mov cl, byte ptr [eax + 0x448] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x448u))) & 0xffu);
/* 8f6735: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6737: je 0x8f6746 */
  if (zf) goto L_8f6746;
L_8f6739: /* 8f6739: test byte ptr [eax + 0x44c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6740: je 0x8f6807 */
  if (zf) goto L_8f6807;
L_8f6746: /* 8f6746: mov ecx, dword ptr [eax + 0x44c] */
  ecx = R32((uint32_t)(eax + 0x44cu));
/* 8f674c: mov esi, dword ptr [eax + 0x44c] */
  esi = R32((uint32_t)(eax + 0x44cu));
/* 8f6752: mov bl, byte ptr [eax + 0x448] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x448u))) & 0xffu);
/* 8f6758: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f675b: mov dword ptr [eax + 0x44c], ecx */
  W32((uint32_t)(eax + 0x44cu), ecx);
/* 8f6761: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6764: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 8f6767: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8f676a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f676c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f676e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f6772: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f6774: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6776: mov byte ptr [eax + 0x448], 1 */
  W8((uint32_t)(eax + 0x448u), 0x1u);
/* 8f677d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f6780: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f6783: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f6786: mov ecx, esp */
  ecx = esp;
/* 8f6788: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f678a: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f678d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8f6790: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8f6793: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f6796: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8f6799: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f679c: mov eax, esp */
  eax = esp;
/* 8f679e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f67a0: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f67a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f67a4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f67a7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8f67aa: mov ecx, esp */
  ecx = esp;
/* 8f67ac: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8f67af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f67b1: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8f67b4: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f67bau); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f67ba: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f67bd: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8f67c0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f67c3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f67c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f67c6: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8f67ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f67cc: mov edi, eax */
  edi = eax;
/* 8f67ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f67d1: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 8f67d4: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 8f67d7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f67d9: mov ecx, dword ptr [eax + 0x44c] */
  ecx = R32((uint32_t)(eax + 0x44cu));
/* 8f67df: mov edx, dword ptr [eax + 0x44c] */
  edx = R32((uint32_t)(eax + 0x44cu));
/* 8f67e5: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8f67e7: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f67ea: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8f67ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f67ee: mov dword ptr [eax + 0x44c], edx */
  W32((uint32_t)(eax + 0x44cu), edx);
/* 8f67f4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f67f7: mov eax, dword ptr [edx + 0x64] */
  eax = R32((uint32_t)(edx + 0x64u));
/* 8f67fa: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8f67fd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f67ff: mov byte ptr [eax + 0x448], bl */
  W8((uint32_t)(eax + 0x448u), (ebx & 0xffu));
/* 8f6805: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f6807: /* 8f6807: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* 8f680c: push 0xaeef2c */
  { uint32_t v = 0xaeef2cu; esp -= 4; W32(esp, v); }
/* 8f6811: push 0xaeef38 */
  { uint32_t v = 0xaeef38u; esp -= 4; W32(esp, v); }
/* 8f6816: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f681cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f681c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f681f: /* 8f681f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6821: mov ecx, edi */
  ecx = edi;
/* 8f6823: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6829u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6829: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f682f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6831: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6832: push 0xaeef40 */
  { uint32_t v = 0xaeef40u; esp -= 4; W32(esp, v); }
/* 8f6837: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f683c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f683d: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6843u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6843: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6846: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6849: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f684a: call 0x6c24eb */
  esp -= 4; W32(esp, 0x8f684fu); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
/* 8f684f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f6856: xor ebx, ebx */
  ebx = 0;
/* 8f6858: jmp 0x8f68d6 */
  goto L_8f68d6;
L_8f685a: /* 8f685a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f685d: movzx edx, byte ptr [eax + 0x6d] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x6du)));
/* 8f6861: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 8f6864: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8f686a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f686b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f686d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f686e: push 0xaeee48 */
  { uint32_t v = 0xaeee48u; esp -= 4; W32(esp, v); }
/* 8f6873: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6874: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f687au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f687a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f687d: jmp 0x8f6514 */
  goto L_8f6514;
L_8f68b2: /* 8f68b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f68b3: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f68b9u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f68b9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f68bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f68c0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f68c2: push 0xaeef68 */
  { uint32_t v = 0xaeef68u; esp -= 4; W32(esp, v); }
/* 8f68c7: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f68cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f68cd: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f68d3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f68d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f68d6: /* 8f68d6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f68d9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f68dc: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f68e2: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 8f68e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f68e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f68e8: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8f68eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f68ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f68f1: mov esi, eax */
  esi = eax;
/* 8f68f3: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f68f6: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f6900: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6903: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6906: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6908: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 8f690b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f690f: call dword ptr [eax + 0x18c] */
  { uint32_t t = R32((uint32_t)(eax + 0x18cu)); esp -= 4; W32(esp, 0x8f6915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6915: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6917: je 0x8f6921 */
  if (zf) goto L_8f6921;
L_8f6919: /* 8f6919: mov ecx, dword ptr [eax + 0x4c0] */
  ecx = R32((uint32_t)(eax + 0x4c0u));
/* 8f691f: jmp 0x8f6923 */
  goto L_8f6923;
L_8f6921: /* 8f6921: xor ecx, ecx */
  ecx = 0;
L_8f6923: /* 8f6923: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6926: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f6929: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f692c: cmp dword ptr [edi + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f692f: je 0x8f694c */
  if (zf) goto L_8f694c;
L_8f6931: /* 8f6931: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6933: je 0x8f695d */
  if (zf) goto L_8f695d;
L_8f6935: /* 8f6935: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8f693a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f6940u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f6940: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6942: je 0x8f695d */
  if (zf) goto L_8f695d;
L_8f6944: /* 8f6944: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6947: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f694a: jmp 0x8f6953 */
  goto L_8f6953;
L_8f694c: /* 8f694c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f694e: jne 0x8f695d */
  if (!zf) goto L_8f695d;
L_8f6950: /* 8f6950: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
L_8f6953: /* 8f6953: or dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
L_8f695d: /* 8f695d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f6960: mov ecx, esi */
  ecx = esi;
/* 8f6962: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6966: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f696cu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f696c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f696f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6970: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6976u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6976: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6979: mov ebx, eax */
  ebx = eax;
/* 8f697b: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6981u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6983: je 0x8f6989 */
  if (zf) goto L_8f6989;
L_8f6985: /* 8f6985: xor edi, edi */
  edi = 0;
/* 8f6987: jmp 0x8f6994 */
  goto L_8f6994;
L_8f6989: /* 8f6989: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f698a: mov ecx, esi */
  ecx = esi;
/* 8f698c: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6992u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6992: mov edi, eax */
  edi = eax;
L_8f6994: /* 8f6994: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6996: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f699c: /* 8f699c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f699f: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f69a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f69a4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8f69aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f69aa: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f69ae: mov edi, edi */
  edi = edi;
L_8f69b0: /* 8f69b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69b2: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69b8: /* 8f69b8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8f69ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69bc: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69c2: /* 8f69c2: mov ecx, esi */
  ecx = esi;
/* 8f69c4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f69cau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f69ca: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 8f69d0: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8f69d2: jns 0x8f6cf5 */
  if (!sf) goto L_8f6cf5;
L_8f69d8: /* 8f69d8: cmp dword ptr [esi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f69dc: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 8f69e0: je 0x8f69f3 */
  if (zf) goto L_8f69f3;
L_8f69e2: /* 8f69e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f69e5: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
/* 8f69e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f69e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f69ea: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f69f0u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f69f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f69f3: /* 8f69f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f69f6: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 8f69fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69fe: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8f6a01: je 0x8f6a0e */
  if (zf) goto L_8f6a0e;
L_8f6a03: /* 8f6a03: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8f6a09: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f6a0c: jmp 0x8f6a15 */
  goto L_8f6a15;
L_8f6a0e: /* 8f6a0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8f6a15: /* 8f6a15: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6a18: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a1b: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 8f6a1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6a20: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6a26: /* 8f6a26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a29: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a2c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6a32: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a38: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6a3e: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6a44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6a49: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8f6a50: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f6a53: mov ecx, esi */
  ecx = esi;
/* 8f6a55: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8f6a59: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 8f6a60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a67: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a6b: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8f6a71: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6a77u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6a77: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6a7a: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6a7d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6a7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6a81: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f6a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a86: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6a8b: mov ecx, edi */
  ecx = edi;
/* 8f6a8d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a93: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a96: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a9c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6aa2: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6aa8: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6aae: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f6ab1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ab3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ab6: je 0x8f6ac7 */
  if (zf) goto L_8f6ac7;
L_8f6ab8: /* 8f6ab8: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6abb: test dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ac5: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6ac7: /* 8f6ac7: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f6aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6acc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6ad2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6ad2: mov ecx, esi */
  ecx = esi;
/* 8f6ad4: mov edi, eax */
  edi = eax;
/* 8f6ad6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6adcu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6adc: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8f6ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ae6: push 0xaeef90 */
  { uint32_t v = 0xaeef90u; esp -= 4; W32(esp, v); }
/* 8f6aeb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6af0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6af1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6af7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6af7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6afa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6afd: xor ebx, ebx */
  ebx = 0;
/* 8f6aff: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b02: /* 8f6b02: movzx edx, byte ptr [ebp - 0x15] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6b06: movzx eax, word ptr [esi + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x46u)));
/* 8f6b0a: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* 8f6b10: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f6b12: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6b15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f6b18: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8f6b1b: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8f6b1e: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6b20: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6b27: jl 0x8f6b60 */
  if ((sf != of)) goto L_8f6b60;
L_8f6b29: /* 8f6b29: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6b2b: jmp 0x8f6b89 */
  goto L_8f6b89;
L_8f6b60: /* 8f6b60: mov ecx, esi */
  ecx = esi;
/* 8f6b62: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6b68u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6b69: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f6b6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6b70: push 0xaeefec */
  { uint32_t v = 0xaeefecu; esp -= 4; W32(esp, v); }
/* 8f6b75: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6b7b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6b81u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6b81: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6b84: xor ebx, ebx */
  ebx = 0;
/* 8f6b86: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b89: /* 8f6b89: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f6b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6b90: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6b93: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8f6b97: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6b9du); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6b9d: movzx edi, byte ptr [ebp - 0x15] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6ba1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f6ba4: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 8f6ba7: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f6baa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6bac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6bae: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8f6bb1: je 0x8f6bb7 */
  if (zf) goto L_8f6bb7;
L_8f6bb3: /* 8f6bb3: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f6bb5: jmp 0x8f6be9 */
  goto L_8f6be9;
L_8f6bb7: /* 8f6bb7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6bbd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6bc0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8f6bc3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6bc9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6bc9: mov edx, eax */
  edx = eax;
/* 8f6bcb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8f6bce: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6bd1: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6bd4: xor eax, eax */
  eax = 0;
/* 8f6bd6: mov ebx, ecx */
  ebx = ecx;
/* 8f6bd8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6bdb: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6bde: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6be0: mov ecx, ebx */
  ecx = ebx;
/* 8f6be2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6be4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6be7: mov ebx, edx */
  ebx = edx;
L_8f6be9: /* 8f6be9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6bec: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6bef: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f6bf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6bf8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6bfd: mov ecx, esi */
  ecx = esi;
/* 8f6bff: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6c05: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c0a: je 0x8f6c1f */
  if (zf) goto L_8f6c1f;
L_8f6c0c: /* 8f6c0c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6c13: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6c15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6c17: mov ecx, esi */
  ecx = esi;
/* 8f6c19: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8f6c1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6c1f: /* 8f6c1f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6c22: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f6c28u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f6c28: mov ecx, esi */
  ecx = esi;
/* 8f6c2a: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6c31: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6c37u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6c37: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f6c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c3e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6c40: push 0xaef024 */
  { uint32_t v = 0xaef024u; esp -= 4; W32(esp, v); }
/* 8f6c45: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c4b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6c51u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6c51: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f6c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6c57: mov ecx, esi */
  ecx = esi;
/* 8f6c59: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f6c5fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f6c5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c63: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6c69u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6c69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c6c: mov ebx, eax */
  ebx = eax;
/* 8f6c6e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6c74u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c76: je 0x8f6c7f */
  if (zf) goto L_8f6c7f;
L_8f6c78: /* 8f6c78: xor edi, edi */
  edi = 0;
/* 8f6c7a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6c7f: /* 8f6c7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c80: mov ecx, esi */
  ecx = esi;
/* 8f6c82: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6c88u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6c88: mov edi, eax */
  edi = eax;
/* 8f6c8a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6cf5: /* 8f6cf5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6cf8: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6cfb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6cfd: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6d04: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8f6d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6d0a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8f6d0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d0f: je 0x8f6d3b */
  if (zf) goto L_8f6d3b;
L_8f6d11: /* 8f6d11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d14: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f6d17: mov edx, dword ptr [0xb7e3f4] */
  edx = R32((uint32_t)(0xb7e3f4u));
/* 8f6d1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6d20: mov ecx, esi */
  ecx = esi;
/* 8f6d22: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8f6d29: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f6d2fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d36: mov ecx, esi */
  ecx = esi;
/* 8f6d38: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f6d3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6d3b: /* 8f6d3b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d3d: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f6d43: /* 8f6d43: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d47: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d4d: /* 8f6d4d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6d53u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6d53: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d5d: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d63: /* 8f6d63: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d65: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6d68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d69: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6d6d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f6d73u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f6d73: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6d76: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6d7c: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6d7f: call dword ptr [0xcfabac] */
  esp -= 4; W32(esp, 0x8f6d85u); SPILL(); f_4e126c(); if (g_unwind) return; /* Core!?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d85: mov esi, eax */
  esi = eax;
/* 8f6d87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d89: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8f6d8c: jne 0x8f6da6 */
  if (!zf) goto L_8f6da6;
L_8f6d8e: /* 8f6d8e: push 0x3de */
  { uint32_t v = 0x3deu; esp -= 4; W32(esp, v); }
/* 8f6d93: push 0xaef044 */
  { uint32_t v = 0xaef044u; esp -= 4; W32(esp, v); }
/* 8f6d98: push 0xaef050 */
  { uint32_t v = 0xaef050u; esp -= 4; W32(esp, v); }
/* 8f6d9d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f6da3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f6da3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6da6: /* 8f6da6: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8f6dad: mov edi, esi */
  edi = esi;
/* 8f6daf: nop  */
L_8f6db0: /* 8f6db0: mov ecx, edi */
  ecx = edi;
/* 8f6db2: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6db8u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6db8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dba: je 0x8f6dc8 */
  if (zf) goto L_8f6dc8;
L_8f6dbc: /* 8f6dbc: mov ecx, edi */
  ecx = edi;
/* 8f6dbe: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6dc4u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6dc4: mov edi, eax */
  edi = eax;
/* 8f6dc6: jmp 0x8f6db0 */
  goto L_8f6db0;
L_8f6dc8: /* 8f6dc8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dcb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6dce: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f6dd1: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8f6dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dd6: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6ddc: /* 8f6ddc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ddf: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f6de2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6de8: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6dee: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6df4: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6dfa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dfd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f6dff: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8f6e06: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* 8f6e09: mov ecx, edi */
  ecx = edi;
/* 8f6e0b: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f6e0f: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e12: movzx ecx, word ptr [edi + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x86u)));
/* 8f6e19: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e20: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e24: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8f6e2a: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6e30u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6e30: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6e33: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6e36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6e37: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6e3a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8f6e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e3f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6e44: mov ecx, ebx */
  ecx = ebx;
/* 8f6e46: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e4c: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6e4f: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6e55: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6e5b: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6e61: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6e67: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f6e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e6c: je 0x8f6e80 */
  if (zf) goto L_8f6e80;
L_8f6e6e: /* 8f6e6e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e71: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f6e74: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e7e: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6e80: /* 8f6e80: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e83: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e88: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6e8eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6e8e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6e91: mov edi, eax */
  edi = eax;
/* 8f6e93: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6e99u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e9b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8f6ea0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6ea2: push 0xaef060 */
  { uint32_t v = 0xaef060u; esp -= 4; W32(esp, v); }
/* 8f6ea7: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6eac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6ead: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6eb3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6eb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eb6: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8f6ebd: /* 8f6ebd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6ec0: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6ec7: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6ecdu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6ecd: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f6ed3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ed6: push 0xaef0b0 */
  { uint32_t v = 0xaef0b0u; esp -= 4; W32(esp, v); }
/* 8f6edb: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6ee0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6ee1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6ee7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6ee7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8f6eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ef0: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f6ef6: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6efcu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6efc: movzx edi, word ptr [esi + 0x8a] */
  edi = (uint32_t)(R16((uint32_t)(esi + 0x8au)));
/* 8f6f03: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6f09: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f0c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6f12u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6f12: mov esi, eax */
  esi = eax;
/* 8f6f14: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8f6f17: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8f6f1a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6f1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6f20: xor eax, eax */
  eax = 0;
/* 8f6f22: mov ebx, ecx */
  ebx = ecx;
/* 8f6f24: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6f27: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6f2a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6f2c: mov ecx, ebx */
  ecx = ebx;
/* 8f6f2e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6f30: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6f33: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 8f6f36: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8f6f39: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_8f6f3c: /* 8f6f3c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8f6f3f: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8f6f44u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8f6f44: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6f47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f49: je 0x8f6ffb */
  if (zf) goto L_8f6ffb;
L_8f6f4f: /* 8f6f4f: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 8f6f52: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f6f58: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f5e: jne 0x8f6ffb */
  if (!zf) goto L_8f6ffb;
L_8f6f64: /* 8f6f64: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6f67: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6f6a: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6f70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6f72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f73: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6f76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6f76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f79: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f7b: /* 8f6f7b: mov ecx, edi */
  ecx = edi;
/* 8f6f7d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6f83u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6f83: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f8d: jne 0x8f6f9c */
  if (!zf) goto L_8f6f9c;
L_8f6f8f: /* 8f6f8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6f92: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8f6f98u); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8f6f98: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f9a: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f9c: /* 8f6f9c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f6f9f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6fa2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f6fa4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f6fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fa7: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8f6faa: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6fb0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6fb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fb5: mov ecx, edi */
  ecx = edi;
/* 8f6fb7: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6fbd: /* 8f6fbd: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8f6fc0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8f6fc3: jmp 0x8f6f3c */
  goto L_8f6f3c;
L_8f6ffb: /* 8f6ffb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7000: jne 0x8f7021 */
  if (!zf) goto L_8f7021;
L_8f7002: /* 8f7002: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7005: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7008: or dword ptr [eax + 0x88], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f7012: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7015: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f701a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f701c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f701d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f701e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7021: /* 8f7021: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
L_8f7024: /* 8f7024: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7026: je 0x8f7048 */
  if (zf) goto L_8f7048;
L_8f7028: /* 8f7028: movzx ecx, word ptr [ebx + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8au)));
/* 8f702f: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8f7032: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7034: jge 0x8f7043 */
  if ((sf == of)) goto L_8f7043;
L_8f7036: /* 8f7036: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7038: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f703a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f703b: mov ecx, edi */
  ecx = edi;
/* 8f703d: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x8f7043u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7043: /* 8f7043: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 8f7046: jmp 0x8f7024 */
  goto L_8f7024;
L_8f7048: /* 8f7048: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f704e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f7054u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f7054: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7057: mov ecx, esi */
  ecx = esi;
/* 8f7059: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f705fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f705f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f7062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7063: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f7069u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f7069: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f706c: mov ebx, eax */
  ebx = eax;
/* 8f706e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7074u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7076: je 0x8f7086 */
  if (zf) goto L_8f7086;
L_8f7078: /* 8f7078: xor edi, edi */
  edi = 0;
/* 8f707a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7081: jmp 0x8f6994 */
  goto L_8f6994;
L_8f7086: /* 8f7086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7087: mov ecx, esi */
  ecx = esi;
/* 8f7089: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f708fu); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f708f: mov edi, eax */
  edi = eax;
/* 8f7091: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7098: jmp 0x8f6994 */
  goto L_8f6994;
L_8f70d0: /* 8f70d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f70d3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f70d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70d8: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f70deu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f70de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f70df: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f70e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f70e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f70e7: push 0xaef0e8 */
  { uint32_t v = 0xaef0e8u; esp -= 4; W32(esp, v); }
/* 8f70ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f70f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f70f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f70f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f7101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f7102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7103: mov esp, ebp */
  esp = ebp;
/* 8f7105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7106: ret 4 */
  esp += 8; SPILL(); return;
L_8f7109: /* 8f7109: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f710c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f710f: test byte ptr [ecx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7116: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f711d: je 0x8f71a4 */
  if (zf) goto L_8f71a4;
L_8f7123: /* 8f7123: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f7129: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7130: jne 0x8f71a4 */
  if (!zf) goto L_8f71a4;
L_8f7132: /* 8f7132: mov byte ptr [ecx + 0x91], 4 */
  W8((uint32_t)(ecx + 0x91u), 0x4u);
/* 8f7139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f713c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f713f: mov byte ptr [ecx + 0x90], 0 */
  W8((uint32_t)(ecx + 0x90u), 0x0u);
/* 8f7146: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7149: mov dword ptr [edx + 0x60], 1 */
  W32((uint32_t)(edx + 0x60u), 0x1u);
/* 8f7150: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7153: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 8f7156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7157: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f715a: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7160: call 0x6c9449 */
  esp -= 4; W32(esp, 0x8f7165u); SPILL(); f_6c9449(); if (g_unwind) return; RELOAD();
/* 8f7165: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7168: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 8f716b: mov eax, dword ptr [0xb7e49c] */
  eax = R32((uint32_t)(0xb7e49cu));
/* 8f7170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7173: mov ecx, esi */
  ecx = esi;
/* 8f7175: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f717bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f717b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f717d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f717f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7182: mov ecx, esi */
  ecx = esi;
/* 8f7184: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7187: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f718a: mov dword ptr [eax + 0x68], 0 */
  W32((uint32_t)(eax + 0x68u), 0x0u);
/* 8f7191: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f7194: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f719b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f719c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f719d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f719e: mov esp, ebp */
  esp = ebp;
/* 8f71a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f71a1: ret 4 */
  esp += 8; SPILL(); return;
L_8f71a4: /* 8f71a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f71a7: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f71aa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71ac: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71b2: /* 8f71b2: cmp eax, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71b5: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71bb: /* 8f71bb: cmp dword ptr [eax + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71bf: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71c5: /* 8f71c5: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71cf: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71d5: /* 8f71d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71d7: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x8f71ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71df: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71e5: /* 8f71e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f71e8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f71eb: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f71ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f71f1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8f71f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f71fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f71fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f71fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7203: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7204: mov esp, ebp */
  esp = ebp;
/* 8f7206: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7207: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f6531(void) {
  LOAD_REGS();
  goto L_8f6531;
L_8f6514: /* 8f6514: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6517: mov dword ptr [eax + 0x5c], 1 */
  W32((uint32_t)(eax + 0x5cu), 0x1u);
L_8f651e: /* 8f651e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f6528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f652a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f652b: mov esp, ebp */
  esp = ebp;
/* 8f652d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f652e: ret 4 */
  esp += 8; SPILL(); return;
L_8f6531: /* 8f6531: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6533: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6537: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f653au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f653a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f653d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f653e: call 0x6c920a */
  esp -= 4; W32(esp, 0x8f6543u); SPILL(); f_6c920a(); if (g_unwind) return; RELOAD();
/* 8f6543: mov edi, eax */
  edi = eax;
/* 8f6545: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6548: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f654a: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f6550: /* 8f6550: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6553: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6554: call 0x6c58e4 */
  esp -= 4; W32(esp, 0x8f6559u); SPILL(); f_6c58e4(); if (g_unwind) return; RELOAD();
/* 8f6559: mov ebx, eax */
  ebx = eax;
/* 8f655b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f655e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6560: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8f6563: je 0x8f685a */
  if (zf) goto L_8f685a;
L_8f6569: /* 8f6569: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 8f656e: mov ecx, ebx */
  ecx = ebx;
/* 8f6570: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8f6576u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8f6576: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6578: je 0x8f685a */
  if (zf) goto L_8f685a;
L_8f657e: /* 8f657e: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 8f6583: mov ecx, ebx */
  ecx = ebx;
/* 8f6585: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8f658bu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8f658b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f658d: jne 0x8f65a7 */
  if (!zf) goto L_8f65a7;
L_8f658f: /* 8f658f: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 8f6594: push 0xaeeeac */
  { uint32_t v = 0xaeeeacu; esp -= 4; W32(esp, v); }
/* 8f6599: push 0xaeeeb8 */
  { uint32_t v = 0xaeeeb8u; esp -= 4; W32(esp, v); }
/* 8f659e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f65a4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f65a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f65a7: /* 8f65a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65ad: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f65b0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8f65b6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8f65b6: mov ecx, ebx */
  ecx = ebx;
/* 8f65b8: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f65beu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f65be: mov edi, dword ptr [eax + 0x84] */
  edi = R32((uint32_t)(eax + 0x84u));
/* 8f65c4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f65c7: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8f65ca: shr edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 8f65cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f65ce: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8f65d1: call 0x8f4720 */
  esp -= 4; W32(esp, 0x8f65d6u); SPILL(); f_8f4720(); if (g_unwind) return; RELOAD();
/* 8f65d6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f65d9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f65db: je 0x8f65e8 */
  if (zf) goto L_8f65e8;
L_8f65dd: /* 8f65dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f65e0: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 8f65e3: call 0x8f2990 */
  esp -= 4; W32(esp, 0x8f65e8u); SPILL(); f_8f2990(); if (g_unwind) return; RELOAD();
L_8f65e8: /* 8f65e8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f65eb: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f65ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f65f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f65f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f65f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f65fb: mov ecx, esp */
  ecx = esp;
/* 8f65fd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f65ff: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6602: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8f6605: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8f6608: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f660b: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8f660e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f6611: mov eax, esp */
  eax = esp;
/* 8f6613: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6615: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f6618: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6619: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f661c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8f661f: mov ecx, esp */
  ecx = esp;
/* 8f6621: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8f6624: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6626: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f662cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f662c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f662f: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8f6632: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6634: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6635: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8f663bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f663b: mov edi, eax */
  edi = eax;
/* 8f663d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f663f: mov dword ptr [ebp - 0x4c], 1 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 8f6646: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f664c: /* 8f664c: mov ecx, ebx */
  ecx = ebx;
/* 8f664e: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f6654u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f6654: mov ecx, ebx */
  ecx = ebx;
/* 8f6656: mov esi, eax */
  esi = eax;
/* 8f6658: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f665eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f665e: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 8f6664: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f666a: shr ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f666d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f6670: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6672: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6674: push 0xaeeee8 */
  { uint32_t v = 0xaeeee8u; esp -= 4; W32(esp, v); }
/* 8f6679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f667a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f6680u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f6680: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6683: mov ecx, ebx */
  ecx = ebx;
/* 8f6685: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f668bu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f668b: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 8f6691: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6694: je 0x8f670d */
  if (zf) goto L_8f670d;
L_8f6696: /* 8f6696: mov ecx, ebx */
  ecx = ebx;
/* 8f6698: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f669eu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f669e: mov edi, dword ptr [eax + 0x80] */
  edi = R32((uint32_t)(eax + 0x80u));
/* 8f66a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f66aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f66ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f66b1: mov ecx, esp */
  ecx = esp;
/* 8f66b3: and edi, 0xfffffeff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffeffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8f66b9: mov dword ptr [eax + 0x80], edi */
  W32((uint32_t)(eax + 0x80u), edi);
/* 8f66bf: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f66c2: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f66c5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f66c7: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f66ca: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8f66cd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8f66d0: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f66d3: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8f66d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f66d9: mov eax, esp */
  eax = esp;
/* 8f66db: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f66dd: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f66e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f66e1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f66e4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8f66e7: mov ecx, esp */
  ecx = esp;
/* 8f66e9: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8f66ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f66ee: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f66f4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f66f4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f66f7: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8f66fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f66fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f66fd: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8f6703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6703: mov edi, eax */
  edi = eax;
/* 8f6705: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6707: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f670d: /* 8f670d: mov ecx, ebx */
  ecx = ebx;
/* 8f670f: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8f6715u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8f6715: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 8f671b: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f671e: je 0x8f6807 */
  if (zf) goto L_8f6807;
L_8f6724: /* 8f6724: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6727: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 8f672a: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8f672d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f672f: mov cl, byte ptr [eax + 0x448] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x448u))) & 0xffu);
/* 8f6735: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6737: je 0x8f6746 */
  if (zf) goto L_8f6746;
L_8f6739: /* 8f6739: test byte ptr [eax + 0x44c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6740: je 0x8f6807 */
  if (zf) goto L_8f6807;
L_8f6746: /* 8f6746: mov ecx, dword ptr [eax + 0x44c] */
  ecx = R32((uint32_t)(eax + 0x44cu));
/* 8f674c: mov esi, dword ptr [eax + 0x44c] */
  esi = R32((uint32_t)(eax + 0x44cu));
/* 8f6752: mov bl, byte ptr [eax + 0x448] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x448u))) & 0xffu);
/* 8f6758: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f675b: mov dword ptr [eax + 0x44c], ecx */
  W32((uint32_t)(eax + 0x44cu), ecx);
/* 8f6761: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6764: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 8f6767: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8f676a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f676c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f676e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f6772: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f6774: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6776: mov byte ptr [eax + 0x448], 1 */
  W8((uint32_t)(eax + 0x448u), 0x1u);
/* 8f677d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f6780: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8f6783: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f6786: mov ecx, esp */
  ecx = esp;
/* 8f6788: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8f678a: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f678d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8f6790: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8f6793: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f6796: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8f6799: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f679c: mov eax, esp */
  eax = esp;
/* 8f679e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f67a0: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f67a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f67a4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8f67a7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8f67aa: mov ecx, esp */
  ecx = esp;
/* 8f67ac: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8f67af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f67b1: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8f67b4: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f67bau); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f67ba: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f67bd: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8f67c0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f67c3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f67c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f67c6: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8f67ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f67cc: mov edi, eax */
  edi = eax;
/* 8f67ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f67d1: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 8f67d4: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 8f67d7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f67d9: mov ecx, dword ptr [eax + 0x44c] */
  ecx = R32((uint32_t)(eax + 0x44cu));
/* 8f67df: mov edx, dword ptr [eax + 0x44c] */
  edx = R32((uint32_t)(eax + 0x44cu));
/* 8f67e5: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8f67e7: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8f67ea: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8f67ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f67ee: mov dword ptr [eax + 0x44c], edx */
  W32((uint32_t)(eax + 0x44cu), edx);
/* 8f67f4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f67f7: mov eax, dword ptr [edx + 0x64] */
  eax = R32((uint32_t)(edx + 0x64u));
/* 8f67fa: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8f67fd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f67ff: mov byte ptr [eax + 0x448], bl */
  W8((uint32_t)(eax + 0x448u), (ebx & 0xffu));
/* 8f6805: jne 0x8f681f */
  if (!zf) goto L_8f681f;
L_8f6807: /* 8f6807: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* 8f680c: push 0xaeef2c */
  { uint32_t v = 0xaeef2cu; esp -= 4; W32(esp, v); }
/* 8f6811: push 0xaeef38 */
  { uint32_t v = 0xaeef38u; esp -= 4; W32(esp, v); }
/* 8f6816: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f681cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f681c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f681f: /* 8f681f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6821: mov ecx, edi */
  ecx = edi;
/* 8f6823: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6829u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6829: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f682f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6831: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6832: push 0xaeef40 */
  { uint32_t v = 0xaeef40u; esp -= 4; W32(esp, v); }
/* 8f6837: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f683c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f683d: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6843u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6843: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6846: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6849: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f684a: call 0x6c24eb */
  esp -= 4; W32(esp, 0x8f684fu); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
/* 8f684f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f6856: xor ebx, ebx */
  ebx = 0;
/* 8f6858: jmp 0x8f68d6 */
  goto L_8f68d6;
L_8f685a: /* 8f685a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f685d: movzx edx, byte ptr [eax + 0x6d] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x6du)));
/* 8f6861: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 8f6864: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8f686a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f686b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f686d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f686e: push 0xaeee48 */
  { uint32_t v = 0xaeee48u; esp -= 4; W32(esp, v); }
/* 8f6873: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6874: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f687au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f687a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f687d: jmp 0x8f6514 */
  goto L_8f6514;
L_8f68d6: /* 8f68d6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f68d9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f68dc: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f68e2: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 8f68e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f68e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f68e8: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8f68eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f68ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f68f1: mov esi, eax */
  esi = eax;
/* 8f68f3: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f68f6: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f6900: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6903: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6906: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6908: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 8f690b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f690f: call dword ptr [eax + 0x18c] */
  { uint32_t t = R32((uint32_t)(eax + 0x18cu)); esp -= 4; W32(esp, 0x8f6915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6915: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6917: je 0x8f6921 */
  if (zf) goto L_8f6921;
L_8f6919: /* 8f6919: mov ecx, dword ptr [eax + 0x4c0] */
  ecx = R32((uint32_t)(eax + 0x4c0u));
/* 8f691f: jmp 0x8f6923 */
  goto L_8f6923;
L_8f6921: /* 8f6921: xor ecx, ecx */
  ecx = 0;
L_8f6923: /* 8f6923: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6926: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f6929: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f692c: cmp dword ptr [edi + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f692f: je 0x8f694c */
  if (zf) goto L_8f694c;
L_8f6931: /* 8f6931: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6933: je 0x8f695d */
  if (zf) goto L_8f695d;
L_8f6935: /* 8f6935: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8f693a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f6940u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f6940: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6942: je 0x8f695d */
  if (zf) goto L_8f695d;
L_8f6944: /* 8f6944: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6947: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f694a: jmp 0x8f6953 */
  goto L_8f6953;
L_8f694c: /* 8f694c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f694e: jne 0x8f695d */
  if (!zf) goto L_8f695d;
L_8f6950: /* 8f6950: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
L_8f6953: /* 8f6953: or dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
L_8f695d: /* 8f695d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f6960: mov ecx, esi */
  ecx = esi;
/* 8f6962: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6966: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f696cu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f696c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f696f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6970: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6976u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6976: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6979: mov ebx, eax */
  ebx = eax;
/* 8f697b: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6981u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6983: je 0x8f6989 */
  if (zf) goto L_8f6989;
L_8f6985: /* 8f6985: xor edi, edi */
  edi = 0;
/* 8f6987: jmp 0x8f6994 */
  goto L_8f6994;
L_8f6989: /* 8f6989: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f698a: mov ecx, esi */
  ecx = esi;
/* 8f698c: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6992u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6992: mov edi, eax */
  edi = eax;
L_8f6994: /* 8f6994: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6996: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f699c: /* 8f699c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f699f: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f69a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f69a4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8f69aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f69aa: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f69ae: mov edi, edi */
  edi = edi;
L_8f69b0: /* 8f69b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69b2: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69b8: /* 8f69b8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8f69ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69bc: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69c2: /* 8f69c2: mov ecx, esi */
  ecx = esi;
/* 8f69c4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f69cau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f69ca: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 8f69d0: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8f69d2: jns 0x8f6cf5 */
  if (!sf) goto L_8f6cf5;
L_8f69d8: /* 8f69d8: cmp dword ptr [esi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f69dc: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 8f69e0: je 0x8f69f3 */
  if (zf) goto L_8f69f3;
L_8f69e2: /* 8f69e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f69e5: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
/* 8f69e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f69e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f69ea: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f69f0u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f69f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f69f3: /* 8f69f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f69f6: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 8f69fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69fe: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8f6a01: je 0x8f6a0e */
  if (zf) goto L_8f6a0e;
L_8f6a03: /* 8f6a03: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8f6a09: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f6a0c: jmp 0x8f6a15 */
  goto L_8f6a15;
L_8f6a0e: /* 8f6a0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8f6a15: /* 8f6a15: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6a18: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a1b: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 8f6a1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6a20: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6a26: /* 8f6a26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a29: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a2c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6a32: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a38: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6a3e: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6a44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6a49: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8f6a50: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f6a53: mov ecx, esi */
  ecx = esi;
/* 8f6a55: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8f6a59: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 8f6a60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a67: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a6b: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8f6a71: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6a77u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6a77: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6a7a: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6a7d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6a7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6a81: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f6a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a86: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6a8b: mov ecx, edi */
  ecx = edi;
/* 8f6a8d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a93: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a96: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a9c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6aa2: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6aa8: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6aae: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f6ab1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ab3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ab6: je 0x8f6ac7 */
  if (zf) goto L_8f6ac7;
L_8f6ab8: /* 8f6ab8: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6abb: test dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ac5: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6ac7: /* 8f6ac7: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f6aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6acc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6ad2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6ad2: mov ecx, esi */
  ecx = esi;
/* 8f6ad4: mov edi, eax */
  edi = eax;
/* 8f6ad6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6adcu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6adc: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8f6ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ae6: push 0xaeef90 */
  { uint32_t v = 0xaeef90u; esp -= 4; W32(esp, v); }
/* 8f6aeb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6af0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6af1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6af7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6af7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6afa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6afd: xor ebx, ebx */
  ebx = 0;
/* 8f6aff: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b02: /* 8f6b02: movzx edx, byte ptr [ebp - 0x15] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6b06: movzx eax, word ptr [esi + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x46u)));
/* 8f6b0a: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* 8f6b10: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f6b12: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6b15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f6b18: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8f6b1b: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8f6b1e: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6b20: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6b27: jl 0x8f6b60 */
  if ((sf != of)) goto L_8f6b60;
L_8f6b29: /* 8f6b29: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6b2b: jmp 0x8f6b89 */
  goto L_8f6b89;
L_8f6b60: /* 8f6b60: mov ecx, esi */
  ecx = esi;
/* 8f6b62: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6b68u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6b69: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f6b6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6b70: push 0xaeefec */
  { uint32_t v = 0xaeefecu; esp -= 4; W32(esp, v); }
/* 8f6b75: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6b7b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6b81u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6b81: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6b84: xor ebx, ebx */
  ebx = 0;
/* 8f6b86: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b89: /* 8f6b89: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f6b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6b90: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6b93: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8f6b97: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6b9du); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6b9d: movzx edi, byte ptr [ebp - 0x15] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6ba1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f6ba4: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 8f6ba7: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f6baa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6bac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6bae: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8f6bb1: je 0x8f6bb7 */
  if (zf) goto L_8f6bb7;
L_8f6bb3: /* 8f6bb3: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f6bb5: jmp 0x8f6be9 */
  goto L_8f6be9;
L_8f6bb7: /* 8f6bb7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6bbd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6bc0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8f6bc3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6bc9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6bc9: mov edx, eax */
  edx = eax;
/* 8f6bcb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8f6bce: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6bd1: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6bd4: xor eax, eax */
  eax = 0;
/* 8f6bd6: mov ebx, ecx */
  ebx = ecx;
/* 8f6bd8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6bdb: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6bde: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6be0: mov ecx, ebx */
  ecx = ebx;
/* 8f6be2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6be4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6be7: mov ebx, edx */
  ebx = edx;
L_8f6be9: /* 8f6be9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6bec: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6bef: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f6bf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6bf8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6bfd: mov ecx, esi */
  ecx = esi;
/* 8f6bff: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6c05: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c0a: je 0x8f6c1f */
  if (zf) goto L_8f6c1f;
L_8f6c0c: /* 8f6c0c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6c13: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6c15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6c17: mov ecx, esi */
  ecx = esi;
/* 8f6c19: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8f6c1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6c1f: /* 8f6c1f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6c22: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f6c28u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f6c28: mov ecx, esi */
  ecx = esi;
/* 8f6c2a: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6c31: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6c37u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6c37: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f6c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c3e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6c40: push 0xaef024 */
  { uint32_t v = 0xaef024u; esp -= 4; W32(esp, v); }
/* 8f6c45: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c4b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6c51u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6c51: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f6c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6c57: mov ecx, esi */
  ecx = esi;
/* 8f6c59: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f6c5fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f6c5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c63: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6c69u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6c69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c6c: mov ebx, eax */
  ebx = eax;
/* 8f6c6e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6c74u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c76: je 0x8f6c7f */
  if (zf) goto L_8f6c7f;
L_8f6c78: /* 8f6c78: xor edi, edi */
  edi = 0;
/* 8f6c7a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6c7f: /* 8f6c7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c80: mov ecx, esi */
  ecx = esi;
/* 8f6c82: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6c88u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6c88: mov edi, eax */
  edi = eax;
/* 8f6c8a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6cf5: /* 8f6cf5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6cf8: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6cfb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6cfd: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6d04: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8f6d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6d0a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8f6d0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d0f: je 0x8f6d3b */
  if (zf) goto L_8f6d3b;
L_8f6d11: /* 8f6d11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d14: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f6d17: mov edx, dword ptr [0xb7e3f4] */
  edx = R32((uint32_t)(0xb7e3f4u));
/* 8f6d1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6d20: mov ecx, esi */
  ecx = esi;
/* 8f6d22: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8f6d29: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f6d2fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d36: mov ecx, esi */
  ecx = esi;
/* 8f6d38: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f6d3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6d3b: /* 8f6d3b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d3d: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f6d43: /* 8f6d43: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d47: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d4d: /* 8f6d4d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6d53u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6d53: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d5d: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d63: /* 8f6d63: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d65: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6d68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d69: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6d6d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f6d73u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f6d73: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6d76: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6d7c: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6d7f: call dword ptr [0xcfabac] */
  esp -= 4; W32(esp, 0x8f6d85u); SPILL(); f_4e126c(); if (g_unwind) return; /* Core!?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d85: mov esi, eax */
  esi = eax;
/* 8f6d87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d89: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8f6d8c: jne 0x8f6da6 */
  if (!zf) goto L_8f6da6;
L_8f6d8e: /* 8f6d8e: push 0x3de */
  { uint32_t v = 0x3deu; esp -= 4; W32(esp, v); }
/* 8f6d93: push 0xaef044 */
  { uint32_t v = 0xaef044u; esp -= 4; W32(esp, v); }
/* 8f6d98: push 0xaef050 */
  { uint32_t v = 0xaef050u; esp -= 4; W32(esp, v); }
/* 8f6d9d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f6da3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f6da3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6da6: /* 8f6da6: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8f6dad: mov edi, esi */
  edi = esi;
/* 8f6daf: nop  */
L_8f6db0: /* 8f6db0: mov ecx, edi */
  ecx = edi;
/* 8f6db2: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6db8u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6db8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dba: je 0x8f6dc8 */
  if (zf) goto L_8f6dc8;
L_8f6dbc: /* 8f6dbc: mov ecx, edi */
  ecx = edi;
/* 8f6dbe: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6dc4u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6dc4: mov edi, eax */
  edi = eax;
/* 8f6dc6: jmp 0x8f6db0 */
  goto L_8f6db0;
L_8f6dc8: /* 8f6dc8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dcb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6dce: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f6dd1: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8f6dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dd6: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6ddc: /* 8f6ddc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ddf: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f6de2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6de8: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6dee: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6df4: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6dfa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dfd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f6dff: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8f6e06: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* 8f6e09: mov ecx, edi */
  ecx = edi;
/* 8f6e0b: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f6e0f: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e12: movzx ecx, word ptr [edi + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x86u)));
/* 8f6e19: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e20: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e24: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8f6e2a: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6e30u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6e30: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6e33: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6e36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6e37: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6e3a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8f6e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e3f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6e44: mov ecx, ebx */
  ecx = ebx;
/* 8f6e46: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e4c: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6e4f: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6e55: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6e5b: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6e61: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6e67: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f6e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e6c: je 0x8f6e80 */
  if (zf) goto L_8f6e80;
L_8f6e6e: /* 8f6e6e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e71: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f6e74: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e7e: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6e80: /* 8f6e80: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e83: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e88: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6e8eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6e8e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6e91: mov edi, eax */
  edi = eax;
/* 8f6e93: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6e99u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e9b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8f6ea0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6ea2: push 0xaef060 */
  { uint32_t v = 0xaef060u; esp -= 4; W32(esp, v); }
/* 8f6ea7: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6eac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6ead: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6eb3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6eb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eb6: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8f6ebd: /* 8f6ebd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6ec0: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6ec7: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6ecdu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6ecd: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f6ed3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ed6: push 0xaef0b0 */
  { uint32_t v = 0xaef0b0u; esp -= 4; W32(esp, v); }
/* 8f6edb: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6ee0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6ee1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6ee7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6ee7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8f6eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ef0: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f6ef6: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6efcu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6efc: movzx edi, word ptr [esi + 0x8a] */
  edi = (uint32_t)(R16((uint32_t)(esi + 0x8au)));
/* 8f6f03: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6f09: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f0c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6f12u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6f12: mov esi, eax */
  esi = eax;
/* 8f6f14: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8f6f17: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8f6f1a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6f1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6f20: xor eax, eax */
  eax = 0;
/* 8f6f22: mov ebx, ecx */
  ebx = ecx;
/* 8f6f24: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6f27: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6f2a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6f2c: mov ecx, ebx */
  ecx = ebx;
/* 8f6f2e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6f30: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6f33: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 8f6f36: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8f6f39: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_8f6f3c: /* 8f6f3c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8f6f3f: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8f6f44u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8f6f44: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6f47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f49: je 0x8f6ffb */
  if (zf) goto L_8f6ffb;
L_8f6f4f: /* 8f6f4f: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 8f6f52: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f6f58: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f5e: jne 0x8f6ffb */
  if (!zf) goto L_8f6ffb;
L_8f6f64: /* 8f6f64: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6f67: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6f6a: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6f70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6f72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f73: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6f76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6f76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f79: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f7b: /* 8f6f7b: mov ecx, edi */
  ecx = edi;
/* 8f6f7d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6f83u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6f83: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f8d: jne 0x8f6f9c */
  if (!zf) goto L_8f6f9c;
L_8f6f8f: /* 8f6f8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6f92: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8f6f98u); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8f6f98: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f9a: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f9c: /* 8f6f9c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f6f9f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6fa2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f6fa4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f6fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fa7: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8f6faa: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6fb0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6fb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fb5: mov ecx, edi */
  ecx = edi;
/* 8f6fb7: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6fbd: /* 8f6fbd: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8f6fc0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8f6fc3: jmp 0x8f6f3c */
  goto L_8f6f3c;
L_8f6ffb: /* 8f6ffb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7000: jne 0x8f7021 */
  if (!zf) goto L_8f7021;
L_8f7002: /* 8f7002: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7005: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7008: or dword ptr [eax + 0x88], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f7012: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7015: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f701a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f701c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f701d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f701e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7021: /* 8f7021: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
L_8f7024: /* 8f7024: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7026: je 0x8f7048 */
  if (zf) goto L_8f7048;
L_8f7028: /* 8f7028: movzx ecx, word ptr [ebx + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8au)));
/* 8f702f: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8f7032: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7034: jge 0x8f7043 */
  if ((sf == of)) goto L_8f7043;
L_8f7036: /* 8f7036: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7038: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f703a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f703b: mov ecx, edi */
  ecx = edi;
/* 8f703d: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x8f7043u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7043: /* 8f7043: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 8f7046: jmp 0x8f7024 */
  goto L_8f7024;
L_8f7048: /* 8f7048: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f704e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f7054u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f7054: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7057: mov ecx, esi */
  ecx = esi;
/* 8f7059: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f705fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f705f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f7062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7063: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f7069u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f7069: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f706c: mov ebx, eax */
  ebx = eax;
/* 8f706e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7074u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7076: je 0x8f7086 */
  if (zf) goto L_8f7086;
L_8f7078: /* 8f7078: xor edi, edi */
  edi = 0;
/* 8f707a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7081: jmp 0x8f6994 */
  goto L_8f6994;
L_8f7086: /* 8f7086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7087: mov ecx, esi */
  ecx = esi;
/* 8f7089: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f708fu); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f708f: mov edi, eax */
  edi = eax;
/* 8f7091: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7098: jmp 0x8f6994 */
  goto L_8f6994;
L_8f70d0: /* 8f70d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f70d3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f70d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70d8: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f70deu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f70de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f70df: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f70e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f70e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f70e7: push 0xaef0e8 */
  { uint32_t v = 0xaef0e8u; esp -= 4; W32(esp, v); }
/* 8f70ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f70f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f70f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f70f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f7101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f7102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7103: mov esp, ebp */
  esp = ebp;
/* 8f7105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7106: ret 4 */
  esp += 8; SPILL(); return;
L_8f7109: /* 8f7109: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f710c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f710f: test byte ptr [ecx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7116: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f711d: je 0x8f71a4 */
  if (zf) goto L_8f71a4;
L_8f7123: /* 8f7123: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f7129: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7130: jne 0x8f71a4 */
  if (!zf) goto L_8f71a4;
L_8f7132: /* 8f7132: mov byte ptr [ecx + 0x91], 4 */
  W8((uint32_t)(ecx + 0x91u), 0x4u);
/* 8f7139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f713c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f713f: mov byte ptr [ecx + 0x90], 0 */
  W8((uint32_t)(ecx + 0x90u), 0x0u);
/* 8f7146: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7149: mov dword ptr [edx + 0x60], 1 */
  W32((uint32_t)(edx + 0x60u), 0x1u);
/* 8f7150: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7153: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 8f7156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7157: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f715a: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7160: call 0x6c9449 */
  esp -= 4; W32(esp, 0x8f7165u); SPILL(); f_6c9449(); if (g_unwind) return; RELOAD();
/* 8f7165: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7168: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 8f716b: mov eax, dword ptr [0xb7e49c] */
  eax = R32((uint32_t)(0xb7e49cu));
/* 8f7170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7173: mov ecx, esi */
  ecx = esi;
/* 8f7175: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f717bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f717b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f717d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f717f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7182: mov ecx, esi */
  ecx = esi;
/* 8f7184: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7187: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f718a: mov dword ptr [eax + 0x68], 0 */
  W32((uint32_t)(eax + 0x68u), 0x0u);
/* 8f7191: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f7194: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f719b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f719c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f719d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f719e: mov esp, ebp */
  esp = ebp;
/* 8f71a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f71a1: ret 4 */
  esp += 8; SPILL(); return;
L_8f71a4: /* 8f71a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f71a7: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f71aa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71ac: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71b2: /* 8f71b2: cmp eax, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71b5: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71bb: /* 8f71bb: cmp dword ptr [eax + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71bf: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71c5: /* 8f71c5: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71cf: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71d5: /* 8f71d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71d7: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x8f71ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71df: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71e5: /* 8f71e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f71e8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f71eb: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f71ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f71f1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8f71f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f71fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f71fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f71fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7203: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7204: mov esp, ebp */
  esp = ebp;
/* 8f7206: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7207: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f685a(void) {
  LOAD_REGS();
  goto L_8f685a;
L_8f6514: /* 8f6514: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6517: mov dword ptr [eax + 0x5c], 1 */
  W32((uint32_t)(eax + 0x5cu), 0x1u);
/* 8f651e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f6528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f652a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f652b: mov esp, ebp */
  esp = ebp;
/* 8f652d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f652e: ret 4 */
  esp += 8; SPILL(); return;
L_8f685a: /* 8f685a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f685d: movzx edx, byte ptr [eax + 0x6d] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x6du)));
/* 8f6861: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 8f6864: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8f686a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f686b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f686d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f686e: push 0xaeee48 */
  { uint32_t v = 0xaeee48u; esp -= 4; W32(esp, v); }
/* 8f6873: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6874: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f687au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f687a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f687d: jmp 0x8f6514 */
  goto L_8f6514;
}

void f_8f6882(void) {
  LOAD_REGS();
L_8f6882: /* 8f6882: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6885: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f688a: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f688d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f688e: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8f6891: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6896u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f6896(); return;
}

void f_8f6896(void) {
  LOAD_REGS();
  goto L_8f6896;
L_8f651e: /* 8f651e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f6528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f652a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f652b: mov esp, ebp */
  esp = ebp;
/* 8f652d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f652e: ret 4 */
  esp += 8; SPILL(); return;
L_8f6896: /* 8f6896: push 0xa1f164 */
  { uint32_t v = 0xa1f164u; esp -= 4; W32(esp, v); }
/* 8f689b: push 0xaeef60 */
  { uint32_t v = 0xaeef60u; esp -= 4; W32(esp, v); }
/* 8f68a0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f68a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f68a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f68a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f68ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f68ad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f68b2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f68b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f68b3: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f68b9u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f68b9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f68bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f68c0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f68c2: push 0xaeef68 */
  { uint32_t v = 0xaeef68u; esp -= 4; W32(esp, v); }
/* 8f68c7: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f68cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f68cd: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f68d3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f68d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f68d6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f68d9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f68dc: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f68e2: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 8f68e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f68e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f68e8: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8f68eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f68ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f68f1: mov esi, eax */
  esi = eax;
/* 8f68f3: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f68f6: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f6900: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6903: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6906: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6908: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 8f690b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f690f: call dword ptr [eax + 0x18c] */
  { uint32_t t = R32((uint32_t)(eax + 0x18cu)); esp -= 4; W32(esp, 0x8f6915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6915: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6917: je 0x8f6921 */
  if (zf) goto L_8f6921;
L_8f6919: /* 8f6919: mov ecx, dword ptr [eax + 0x4c0] */
  ecx = R32((uint32_t)(eax + 0x4c0u));
/* 8f691f: jmp 0x8f6923 */
  goto L_8f6923;
L_8f6921: /* 8f6921: xor ecx, ecx */
  ecx = 0;
L_8f6923: /* 8f6923: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6926: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f6929: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f692c: cmp dword ptr [edi + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f692f: je 0x8f694c */
  if (zf) goto L_8f694c;
L_8f6931: /* 8f6931: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6933: je 0x8f695d */
  if (zf) goto L_8f695d;
L_8f6935: /* 8f6935: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8f693a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f6940u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f6940: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6942: je 0x8f695d */
  if (zf) goto L_8f695d;
L_8f6944: /* 8f6944: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6947: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f694a: jmp 0x8f6953 */
  goto L_8f6953;
L_8f694c: /* 8f694c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f694e: jne 0x8f695d */
  if (!zf) goto L_8f695d;
L_8f6950: /* 8f6950: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
L_8f6953: /* 8f6953: or dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
L_8f695d: /* 8f695d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f6960: mov ecx, esi */
  ecx = esi;
/* 8f6962: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6966: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f696cu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f696c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f696f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6970: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6976u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6976: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6979: mov ebx, eax */
  ebx = eax;
/* 8f697b: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6981u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6983: je 0x8f6989 */
  if (zf) goto L_8f6989;
L_8f6985: /* 8f6985: xor edi, edi */
  edi = 0;
/* 8f6987: jmp 0x8f6994 */
  goto L_8f6994;
L_8f6989: /* 8f6989: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f698a: mov ecx, esi */
  ecx = esi;
/* 8f698c: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6992u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6992: mov edi, eax */
  edi = eax;
L_8f6994: /* 8f6994: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6996: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f699c: /* 8f699c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f699f: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f69a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f69a4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8f69aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f69aa: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f69ae: mov edi, edi */
  edi = edi;
L_8f69b0: /* 8f69b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69b2: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69b8: /* 8f69b8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8f69ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69bc: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69c2: /* 8f69c2: mov ecx, esi */
  ecx = esi;
/* 8f69c4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f69cau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f69ca: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 8f69d0: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8f69d2: jns 0x8f6cf5 */
  if (!sf) goto L_8f6cf5;
L_8f69d8: /* 8f69d8: cmp dword ptr [esi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f69dc: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 8f69e0: je 0x8f69f3 */
  if (zf) goto L_8f69f3;
L_8f69e2: /* 8f69e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f69e5: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
/* 8f69e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f69e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f69ea: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f69f0u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f69f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f69f3: /* 8f69f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f69f6: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 8f69fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69fe: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8f6a01: je 0x8f6a0e */
  if (zf) goto L_8f6a0e;
L_8f6a03: /* 8f6a03: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8f6a09: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f6a0c: jmp 0x8f6a15 */
  goto L_8f6a15;
L_8f6a0e: /* 8f6a0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8f6a15: /* 8f6a15: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6a18: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a1b: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 8f6a1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6a20: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6a26: /* 8f6a26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a29: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a2c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6a32: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a38: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6a3e: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6a44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6a49: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8f6a50: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f6a53: mov ecx, esi */
  ecx = esi;
/* 8f6a55: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8f6a59: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 8f6a60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a67: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a6b: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8f6a71: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6a77u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6a77: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6a7a: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6a7d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6a7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6a81: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f6a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a86: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6a8b: mov ecx, edi */
  ecx = edi;
/* 8f6a8d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a93: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a96: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a9c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6aa2: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6aa8: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6aae: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f6ab1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ab3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ab6: je 0x8f6ac7 */
  if (zf) goto L_8f6ac7;
L_8f6ab8: /* 8f6ab8: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6abb: test dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ac5: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6ac7: /* 8f6ac7: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f6aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6acc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6ad2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6ad2: mov ecx, esi */
  ecx = esi;
/* 8f6ad4: mov edi, eax */
  edi = eax;
/* 8f6ad6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6adcu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6adc: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8f6ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ae6: push 0xaeef90 */
  { uint32_t v = 0xaeef90u; esp -= 4; W32(esp, v); }
/* 8f6aeb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6af0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6af1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6af7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6af7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6afa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6afd: xor ebx, ebx */
  ebx = 0;
/* 8f6aff: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b02: /* 8f6b02: movzx edx, byte ptr [ebp - 0x15] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6b06: movzx eax, word ptr [esi + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x46u)));
/* 8f6b0a: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* 8f6b10: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f6b12: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6b15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f6b18: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8f6b1b: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8f6b1e: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6b20: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6b27: jl 0x8f6b60 */
  if ((sf != of)) goto L_8f6b60;
L_8f6b29: /* 8f6b29: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6b2b: jmp 0x8f6b89 */
  goto L_8f6b89;
L_8f6b60: /* 8f6b60: mov ecx, esi */
  ecx = esi;
/* 8f6b62: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6b68u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6b69: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f6b6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6b70: push 0xaeefec */
  { uint32_t v = 0xaeefecu; esp -= 4; W32(esp, v); }
/* 8f6b75: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6b7b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6b81u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6b81: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6b84: xor ebx, ebx */
  ebx = 0;
/* 8f6b86: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b89: /* 8f6b89: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f6b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6b90: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6b93: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8f6b97: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6b9du); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6b9d: movzx edi, byte ptr [ebp - 0x15] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6ba1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f6ba4: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 8f6ba7: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f6baa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6bac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6bae: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8f6bb1: je 0x8f6bb7 */
  if (zf) goto L_8f6bb7;
L_8f6bb3: /* 8f6bb3: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f6bb5: jmp 0x8f6be9 */
  goto L_8f6be9;
L_8f6bb7: /* 8f6bb7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6bbd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6bc0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8f6bc3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6bc9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6bc9: mov edx, eax */
  edx = eax;
/* 8f6bcb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8f6bce: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6bd1: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6bd4: xor eax, eax */
  eax = 0;
/* 8f6bd6: mov ebx, ecx */
  ebx = ecx;
/* 8f6bd8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6bdb: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6bde: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6be0: mov ecx, ebx */
  ecx = ebx;
/* 8f6be2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6be4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6be7: mov ebx, edx */
  ebx = edx;
L_8f6be9: /* 8f6be9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6bec: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6bef: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f6bf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6bf8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6bfd: mov ecx, esi */
  ecx = esi;
/* 8f6bff: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6c05: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c0a: je 0x8f6c1f */
  if (zf) goto L_8f6c1f;
L_8f6c0c: /* 8f6c0c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6c13: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6c15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6c17: mov ecx, esi */
  ecx = esi;
/* 8f6c19: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8f6c1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6c1f: /* 8f6c1f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6c22: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f6c28u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f6c28: mov ecx, esi */
  ecx = esi;
/* 8f6c2a: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6c31: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6c37u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6c37: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f6c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c3e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6c40: push 0xaef024 */
  { uint32_t v = 0xaef024u; esp -= 4; W32(esp, v); }
/* 8f6c45: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c4b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6c51u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6c51: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f6c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6c57: mov ecx, esi */
  ecx = esi;
/* 8f6c59: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f6c5fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f6c5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c63: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6c69u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6c69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c6c: mov ebx, eax */
  ebx = eax;
/* 8f6c6e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6c74u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c76: je 0x8f6c7f */
  if (zf) goto L_8f6c7f;
L_8f6c78: /* 8f6c78: xor edi, edi */
  edi = 0;
/* 8f6c7a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6c7f: /* 8f6c7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c80: mov ecx, esi */
  ecx = esi;
/* 8f6c82: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6c88u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6c88: mov edi, eax */
  edi = eax;
/* 8f6c8a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6cf5: /* 8f6cf5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6cf8: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6cfb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6cfd: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6d04: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8f6d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6d0a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8f6d0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d0f: je 0x8f6d3b */
  if (zf) goto L_8f6d3b;
L_8f6d11: /* 8f6d11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d14: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f6d17: mov edx, dword ptr [0xb7e3f4] */
  edx = R32((uint32_t)(0xb7e3f4u));
/* 8f6d1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6d20: mov ecx, esi */
  ecx = esi;
/* 8f6d22: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8f6d29: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f6d2fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d36: mov ecx, esi */
  ecx = esi;
/* 8f6d38: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f6d3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6d3b: /* 8f6d3b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d3d: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f6d43: /* 8f6d43: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d47: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d4d: /* 8f6d4d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6d53u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6d53: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d5d: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d63: /* 8f6d63: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d65: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6d68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d69: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6d6d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f6d73u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f6d73: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6d76: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6d7c: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6d7f: call dword ptr [0xcfabac] */
  esp -= 4; W32(esp, 0x8f6d85u); SPILL(); f_4e126c(); if (g_unwind) return; /* Core!?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d85: mov esi, eax */
  esi = eax;
/* 8f6d87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d89: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8f6d8c: jne 0x8f6da6 */
  if (!zf) goto L_8f6da6;
L_8f6d8e: /* 8f6d8e: push 0x3de */
  { uint32_t v = 0x3deu; esp -= 4; W32(esp, v); }
/* 8f6d93: push 0xaef044 */
  { uint32_t v = 0xaef044u; esp -= 4; W32(esp, v); }
/* 8f6d98: push 0xaef050 */
  { uint32_t v = 0xaef050u; esp -= 4; W32(esp, v); }
/* 8f6d9d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f6da3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f6da3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6da6: /* 8f6da6: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8f6dad: mov edi, esi */
  edi = esi;
/* 8f6daf: nop  */
L_8f6db0: /* 8f6db0: mov ecx, edi */
  ecx = edi;
/* 8f6db2: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6db8u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6db8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dba: je 0x8f6dc8 */
  if (zf) goto L_8f6dc8;
L_8f6dbc: /* 8f6dbc: mov ecx, edi */
  ecx = edi;
/* 8f6dbe: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6dc4u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6dc4: mov edi, eax */
  edi = eax;
/* 8f6dc6: jmp 0x8f6db0 */
  goto L_8f6db0;
L_8f6dc8: /* 8f6dc8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dcb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6dce: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f6dd1: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8f6dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dd6: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6ddc: /* 8f6ddc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ddf: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f6de2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6de8: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6dee: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6df4: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6dfa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dfd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f6dff: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8f6e06: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* 8f6e09: mov ecx, edi */
  ecx = edi;
/* 8f6e0b: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f6e0f: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e12: movzx ecx, word ptr [edi + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x86u)));
/* 8f6e19: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e20: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e24: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8f6e2a: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6e30u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6e30: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6e33: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6e36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6e37: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6e3a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8f6e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e3f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6e44: mov ecx, ebx */
  ecx = ebx;
/* 8f6e46: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e4c: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6e4f: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6e55: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6e5b: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6e61: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6e67: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f6e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e6c: je 0x8f6e80 */
  if (zf) goto L_8f6e80;
L_8f6e6e: /* 8f6e6e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e71: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f6e74: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e7e: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6e80: /* 8f6e80: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e83: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e88: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6e8eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6e8e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6e91: mov edi, eax */
  edi = eax;
/* 8f6e93: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6e99u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e9b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8f6ea0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6ea2: push 0xaef060 */
  { uint32_t v = 0xaef060u; esp -= 4; W32(esp, v); }
/* 8f6ea7: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6eac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6ead: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6eb3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6eb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eb6: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8f6ebd: /* 8f6ebd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6ec0: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6ec7: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6ecdu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6ecd: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f6ed3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ed6: push 0xaef0b0 */
  { uint32_t v = 0xaef0b0u; esp -= 4; W32(esp, v); }
/* 8f6edb: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6ee0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6ee1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6ee7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6ee7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8f6eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ef0: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f6ef6: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6efcu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6efc: movzx edi, word ptr [esi + 0x8a] */
  edi = (uint32_t)(R16((uint32_t)(esi + 0x8au)));
/* 8f6f03: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6f09: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f0c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6f12u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6f12: mov esi, eax */
  esi = eax;
/* 8f6f14: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8f6f17: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8f6f1a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6f1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6f20: xor eax, eax */
  eax = 0;
/* 8f6f22: mov ebx, ecx */
  ebx = ecx;
/* 8f6f24: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6f27: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6f2a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6f2c: mov ecx, ebx */
  ecx = ebx;
/* 8f6f2e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6f30: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6f33: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 8f6f36: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8f6f39: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_8f6f3c: /* 8f6f3c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8f6f3f: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8f6f44u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8f6f44: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6f47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f49: je 0x8f6ffb */
  if (zf) goto L_8f6ffb;
L_8f6f4f: /* 8f6f4f: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 8f6f52: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f6f58: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f5e: jne 0x8f6ffb */
  if (!zf) goto L_8f6ffb;
L_8f6f64: /* 8f6f64: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6f67: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6f6a: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6f70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6f72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f73: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6f76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6f76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f79: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f7b: /* 8f6f7b: mov ecx, edi */
  ecx = edi;
/* 8f6f7d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6f83u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6f83: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f8d: jne 0x8f6f9c */
  if (!zf) goto L_8f6f9c;
L_8f6f8f: /* 8f6f8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6f92: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8f6f98u); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8f6f98: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f9a: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f9c: /* 8f6f9c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f6f9f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6fa2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f6fa4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f6fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fa7: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8f6faa: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6fb0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6fb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fb5: mov ecx, edi */
  ecx = edi;
/* 8f6fb7: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6fbd: /* 8f6fbd: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8f6fc0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8f6fc3: jmp 0x8f6f3c */
  goto L_8f6f3c;
L_8f6ffb: /* 8f6ffb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7000: jne 0x8f7021 */
  if (!zf) goto L_8f7021;
L_8f7002: /* 8f7002: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7005: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7008: or dword ptr [eax + 0x88], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f7012: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7015: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f701a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f701c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f701d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f701e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7021: /* 8f7021: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
L_8f7024: /* 8f7024: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7026: je 0x8f7048 */
  if (zf) goto L_8f7048;
L_8f7028: /* 8f7028: movzx ecx, word ptr [ebx + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8au)));
/* 8f702f: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8f7032: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7034: jge 0x8f7043 */
  if ((sf == of)) goto L_8f7043;
L_8f7036: /* 8f7036: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7038: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f703a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f703b: mov ecx, edi */
  ecx = edi;
/* 8f703d: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x8f7043u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7043: /* 8f7043: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 8f7046: jmp 0x8f7024 */
  goto L_8f7024;
L_8f7048: /* 8f7048: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f704e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f7054u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f7054: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7057: mov ecx, esi */
  ecx = esi;
/* 8f7059: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f705fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f705f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f7062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7063: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f7069u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f7069: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f706c: mov ebx, eax */
  ebx = eax;
/* 8f706e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7074u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7076: je 0x8f7086 */
  if (zf) goto L_8f7086;
L_8f7078: /* 8f7078: xor edi, edi */
  edi = 0;
/* 8f707a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7081: jmp 0x8f6994 */
  goto L_8f6994;
L_8f7086: /* 8f7086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7087: mov ecx, esi */
  ecx = esi;
/* 8f7089: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f708fu); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f708f: mov edi, eax */
  edi = eax;
/* 8f7091: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7098: jmp 0x8f6994 */
  goto L_8f6994;
L_8f70d0: /* 8f70d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f70d3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f70d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70d8: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f70deu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f70de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f70df: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f70e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f70e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f70e7: push 0xaef0e8 */
  { uint32_t v = 0xaef0e8u; esp -= 4; W32(esp, v); }
/* 8f70ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f70f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f70f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f70f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f7101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f7102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7103: mov esp, ebp */
  esp = ebp;
/* 8f7105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7106: ret 4 */
  esp += 8; SPILL(); return;
L_8f7109: /* 8f7109: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f710c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f710f: test byte ptr [ecx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7116: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f711d: je 0x8f71a4 */
  if (zf) goto L_8f71a4;
L_8f7123: /* 8f7123: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f7129: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7130: jne 0x8f71a4 */
  if (!zf) goto L_8f71a4;
L_8f7132: /* 8f7132: mov byte ptr [ecx + 0x91], 4 */
  W8((uint32_t)(ecx + 0x91u), 0x4u);
/* 8f7139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f713c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f713f: mov byte ptr [ecx + 0x90], 0 */
  W8((uint32_t)(ecx + 0x90u), 0x0u);
/* 8f7146: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7149: mov dword ptr [edx + 0x60], 1 */
  W32((uint32_t)(edx + 0x60u), 0x1u);
/* 8f7150: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7153: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 8f7156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7157: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f715a: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7160: call 0x6c9449 */
  esp -= 4; W32(esp, 0x8f7165u); SPILL(); f_6c9449(); if (g_unwind) return; RELOAD();
/* 8f7165: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7168: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 8f716b: mov eax, dword ptr [0xb7e49c] */
  eax = R32((uint32_t)(0xb7e49cu));
/* 8f7170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7173: mov ecx, esi */
  ecx = esi;
/* 8f7175: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f717bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f717b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f717d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f717f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7182: mov ecx, esi */
  ecx = esi;
/* 8f7184: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7187: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f718a: mov dword ptr [eax + 0x68], 0 */
  W32((uint32_t)(eax + 0x68u), 0x0u);
/* 8f7191: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f7194: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f719b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f719c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f719d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f719e: mov esp, ebp */
  esp = ebp;
/* 8f71a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f71a1: ret 4 */
  esp += 8; SPILL(); return;
L_8f71a4: /* 8f71a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f71a7: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f71aa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71ac: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71b2: /* 8f71b2: cmp eax, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71b5: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71bb: /* 8f71bb: cmp dword ptr [eax + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71bf: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71c5: /* 8f71c5: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71cf: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71d5: /* 8f71d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71d7: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x8f71ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71df: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71e5: /* 8f71e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f71e8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f71eb: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f71ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f71f1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8f71f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f71fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f71fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f71fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7203: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7204: mov esp, ebp */
  esp = ebp;
/* 8f7206: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7207: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f6b2d(void) {
  LOAD_REGS();
L_8f6b2d: /* 8f6b2d: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 8f6b33: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f6b38: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8f6b3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6b3c: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8f6b3f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6b44u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f6b44(); return;
}

void f_8f6b44(void) {
  LOAD_REGS();
  goto L_8f6b44;
L_8f651e: /* 8f651e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f6528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f652a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f652b: mov esp, ebp */
  esp = ebp;
/* 8f652d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f652e: ret 4 */
  esp += 8; SPILL(); return;
L_8f6994: /* 8f6994: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6996: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f699c: /* 8f699c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f699f: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f69a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f69a4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8f69aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f69aa: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f69ae: mov edi, edi */
  edi = edi;
L_8f69b0: /* 8f69b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69b2: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69b8: /* 8f69b8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8f69ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69bc: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69c2: /* 8f69c2: mov ecx, esi */
  ecx = esi;
/* 8f69c4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f69cau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f69ca: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 8f69d0: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8f69d2: jns 0x8f6cf5 */
  if (!sf) goto L_8f6cf5;
L_8f69d8: /* 8f69d8: cmp dword ptr [esi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f69dc: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 8f69e0: je 0x8f69f3 */
  if (zf) goto L_8f69f3;
L_8f69e2: /* 8f69e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f69e5: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
/* 8f69e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f69e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f69ea: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f69f0u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f69f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f69f3: /* 8f69f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f69f6: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 8f69fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69fe: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8f6a01: je 0x8f6a0e */
  if (zf) goto L_8f6a0e;
L_8f6a03: /* 8f6a03: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8f6a09: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f6a0c: jmp 0x8f6a15 */
  goto L_8f6a15;
L_8f6a0e: /* 8f6a0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8f6a15: /* 8f6a15: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6a18: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a1b: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 8f6a1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6a20: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6a26: /* 8f6a26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a29: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a2c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6a32: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a38: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6a3e: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6a44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6a49: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8f6a50: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f6a53: mov ecx, esi */
  ecx = esi;
/* 8f6a55: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8f6a59: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 8f6a60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a67: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a6b: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8f6a71: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6a77u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6a77: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6a7a: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6a7d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6a7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6a81: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f6a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a86: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6a8b: mov ecx, edi */
  ecx = edi;
/* 8f6a8d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a93: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a96: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a9c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6aa2: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6aa8: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6aae: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f6ab1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ab3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ab6: je 0x8f6ac7 */
  if (zf) goto L_8f6ac7;
L_8f6ab8: /* 8f6ab8: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6abb: test dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ac5: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6ac7: /* 8f6ac7: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f6aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6acc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6ad2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6ad2: mov ecx, esi */
  ecx = esi;
/* 8f6ad4: mov edi, eax */
  edi = eax;
/* 8f6ad6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6adcu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6adc: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8f6ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ae6: push 0xaeef90 */
  { uint32_t v = 0xaeef90u; esp -= 4; W32(esp, v); }
/* 8f6aeb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6af0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6af1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6af7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6af7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6afa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6afd: xor ebx, ebx */
  ebx = 0;
/* 8f6aff: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b02: /* 8f6b02: movzx edx, byte ptr [ebp - 0x15] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6b06: movzx eax, word ptr [esi + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x46u)));
/* 8f6b0a: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* 8f6b10: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f6b12: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6b15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f6b18: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8f6b1b: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8f6b1e: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6b20: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6b27: jl 0x8f6b60 */
  if ((sf != of)) goto L_8f6b60;
L_8f6b29: /* 8f6b29: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6b2b: jmp 0x8f6b89 */
  goto L_8f6b89;
L_8f6b44: /* 8f6b44: push 0xa1f130 */
  { uint32_t v = 0xa1f130u; esp -= 4; W32(esp, v); }
/* 8f6b49: push 0xaeefe4 */
  { uint32_t v = 0xaeefe4u; esp -= 4; W32(esp, v); }
/* 8f6b4e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f6b54u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f6b54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6b57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6b59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6b5b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6b60u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f6b60: /* 8f6b60: mov ecx, esi */
  ecx = esi;
/* 8f6b62: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6b68u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6b69: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f6b6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6b70: push 0xaeefec */
  { uint32_t v = 0xaeefecu; esp -= 4; W32(esp, v); }
/* 8f6b75: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6b7b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6b81u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6b81: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6b84: xor ebx, ebx */
  ebx = 0;
/* 8f6b86: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b89: /* 8f6b89: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f6b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6b90: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6b93: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8f6b97: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6b9du); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6b9d: movzx edi, byte ptr [ebp - 0x15] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6ba1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f6ba4: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 8f6ba7: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f6baa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6bac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6bae: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8f6bb1: je 0x8f6bb7 */
  if (zf) goto L_8f6bb7;
L_8f6bb3: /* 8f6bb3: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f6bb5: jmp 0x8f6be9 */
  goto L_8f6be9;
L_8f6bb7: /* 8f6bb7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6bbd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6bc0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8f6bc3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6bc9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6bc9: mov edx, eax */
  edx = eax;
/* 8f6bcb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8f6bce: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6bd1: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6bd4: xor eax, eax */
  eax = 0;
/* 8f6bd6: mov ebx, ecx */
  ebx = ecx;
/* 8f6bd8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6bdb: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6bde: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6be0: mov ecx, ebx */
  ecx = ebx;
/* 8f6be2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6be4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6be7: mov ebx, edx */
  ebx = edx;
L_8f6be9: /* 8f6be9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6bec: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6bef: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f6bf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6bf8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6bfd: mov ecx, esi */
  ecx = esi;
/* 8f6bff: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6c05: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c0a: je 0x8f6c1f */
  if (zf) goto L_8f6c1f;
L_8f6c0c: /* 8f6c0c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6c13: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6c15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6c17: mov ecx, esi */
  ecx = esi;
/* 8f6c19: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8f6c1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6c1f: /* 8f6c1f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6c22: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f6c28u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f6c28: mov ecx, esi */
  ecx = esi;
/* 8f6c2a: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6c31: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6c37u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6c37: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f6c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c3e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6c40: push 0xaef024 */
  { uint32_t v = 0xaef024u; esp -= 4; W32(esp, v); }
/* 8f6c45: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c4b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6c51u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6c51: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f6c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6c57: mov ecx, esi */
  ecx = esi;
/* 8f6c59: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f6c5fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f6c5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c63: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6c69u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6c69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c6c: mov ebx, eax */
  ebx = eax;
/* 8f6c6e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6c74u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c76: je 0x8f6c7f */
  if (zf) goto L_8f6c7f;
L_8f6c78: /* 8f6c78: xor edi, edi */
  edi = 0;
/* 8f6c7a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6c7f: /* 8f6c7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c80: mov ecx, esi */
  ecx = esi;
/* 8f6c82: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6c88u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6c88: mov edi, eax */
  edi = eax;
/* 8f6c8a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6cf5: /* 8f6cf5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6cf8: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6cfb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6cfd: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6d04: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8f6d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6d0a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8f6d0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d0f: je 0x8f6d3b */
  if (zf) goto L_8f6d3b;
L_8f6d11: /* 8f6d11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d14: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f6d17: mov edx, dword ptr [0xb7e3f4] */
  edx = R32((uint32_t)(0xb7e3f4u));
/* 8f6d1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6d20: mov ecx, esi */
  ecx = esi;
/* 8f6d22: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8f6d29: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f6d2fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d36: mov ecx, esi */
  ecx = esi;
/* 8f6d38: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f6d3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6d3b: /* 8f6d3b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d3d: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f6d43: /* 8f6d43: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d47: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d4d: /* 8f6d4d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6d53u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6d53: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d5d: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d63: /* 8f6d63: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d65: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6d68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d69: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6d6d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f6d73u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f6d73: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6d76: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6d7c: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6d7f: call dword ptr [0xcfabac] */
  esp -= 4; W32(esp, 0x8f6d85u); SPILL(); f_4e126c(); if (g_unwind) return; /* Core!?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d85: mov esi, eax */
  esi = eax;
/* 8f6d87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d89: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8f6d8c: jne 0x8f6da6 */
  if (!zf) goto L_8f6da6;
L_8f6d8e: /* 8f6d8e: push 0x3de */
  { uint32_t v = 0x3deu; esp -= 4; W32(esp, v); }
/* 8f6d93: push 0xaef044 */
  { uint32_t v = 0xaef044u; esp -= 4; W32(esp, v); }
/* 8f6d98: push 0xaef050 */
  { uint32_t v = 0xaef050u; esp -= 4; W32(esp, v); }
/* 8f6d9d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f6da3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f6da3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6da6: /* 8f6da6: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8f6dad: mov edi, esi */
  edi = esi;
/* 8f6daf: nop  */
L_8f6db0: /* 8f6db0: mov ecx, edi */
  ecx = edi;
/* 8f6db2: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6db8u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6db8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dba: je 0x8f6dc8 */
  if (zf) goto L_8f6dc8;
L_8f6dbc: /* 8f6dbc: mov ecx, edi */
  ecx = edi;
/* 8f6dbe: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6dc4u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6dc4: mov edi, eax */
  edi = eax;
/* 8f6dc6: jmp 0x8f6db0 */
  goto L_8f6db0;
L_8f6dc8: /* 8f6dc8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dcb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6dce: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f6dd1: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8f6dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dd6: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6ddc: /* 8f6ddc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ddf: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f6de2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6de8: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6dee: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6df4: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6dfa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dfd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f6dff: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8f6e06: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* 8f6e09: mov ecx, edi */
  ecx = edi;
/* 8f6e0b: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f6e0f: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e12: movzx ecx, word ptr [edi + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x86u)));
/* 8f6e19: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e20: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e24: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8f6e2a: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6e30u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6e30: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6e33: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6e36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6e37: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6e3a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8f6e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e3f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6e44: mov ecx, ebx */
  ecx = ebx;
/* 8f6e46: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e4c: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6e4f: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6e55: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6e5b: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6e61: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6e67: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f6e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e6c: je 0x8f6e80 */
  if (zf) goto L_8f6e80;
L_8f6e6e: /* 8f6e6e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e71: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f6e74: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e7e: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6e80: /* 8f6e80: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e83: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e88: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6e8eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6e8e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6e91: mov edi, eax */
  edi = eax;
/* 8f6e93: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6e99u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e9b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8f6ea0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6ea2: push 0xaef060 */
  { uint32_t v = 0xaef060u; esp -= 4; W32(esp, v); }
/* 8f6ea7: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6eac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6ead: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6eb3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6eb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eb6: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8f6ebd: /* 8f6ebd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6ec0: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6ec7: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6ecdu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6ecd: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f6ed3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ed6: push 0xaef0b0 */
  { uint32_t v = 0xaef0b0u; esp -= 4; W32(esp, v); }
/* 8f6edb: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6ee0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6ee1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6ee7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6ee7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8f6eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ef0: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f6ef6: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6efcu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6efc: movzx edi, word ptr [esi + 0x8a] */
  edi = (uint32_t)(R16((uint32_t)(esi + 0x8au)));
/* 8f6f03: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6f09: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f0c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6f12u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6f12: mov esi, eax */
  esi = eax;
/* 8f6f14: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8f6f17: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8f6f1a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6f1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6f20: xor eax, eax */
  eax = 0;
/* 8f6f22: mov ebx, ecx */
  ebx = ecx;
/* 8f6f24: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6f27: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6f2a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6f2c: mov ecx, ebx */
  ecx = ebx;
/* 8f6f2e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6f30: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6f33: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 8f6f36: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8f6f39: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_8f6f3c: /* 8f6f3c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8f6f3f: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8f6f44u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8f6f44: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6f47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f49: je 0x8f6ffb */
  if (zf) goto L_8f6ffb;
L_8f6f4f: /* 8f6f4f: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 8f6f52: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f6f58: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f5e: jne 0x8f6ffb */
  if (!zf) goto L_8f6ffb;
L_8f6f64: /* 8f6f64: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6f67: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6f6a: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6f70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6f72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f73: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6f76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6f76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f79: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f7b: /* 8f6f7b: mov ecx, edi */
  ecx = edi;
/* 8f6f7d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6f83u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6f83: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f8d: jne 0x8f6f9c */
  if (!zf) goto L_8f6f9c;
L_8f6f8f: /* 8f6f8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6f92: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8f6f98u); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8f6f98: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f9a: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f9c: /* 8f6f9c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f6f9f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6fa2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f6fa4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f6fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fa7: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8f6faa: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6fb0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6fb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fb5: mov ecx, edi */
  ecx = edi;
/* 8f6fb7: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6fbd: /* 8f6fbd: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8f6fc0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8f6fc3: jmp 0x8f6f3c */
  goto L_8f6f3c;
L_8f6ffb: /* 8f6ffb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7000: jne 0x8f7021 */
  if (!zf) goto L_8f7021;
L_8f7002: /* 8f7002: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7005: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7008: or dword ptr [eax + 0x88], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f7012: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7015: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f701a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f701c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f701d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f701e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7021: /* 8f7021: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
L_8f7024: /* 8f7024: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7026: je 0x8f7048 */
  if (zf) goto L_8f7048;
L_8f7028: /* 8f7028: movzx ecx, word ptr [ebx + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8au)));
/* 8f702f: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8f7032: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7034: jge 0x8f7043 */
  if ((sf == of)) goto L_8f7043;
L_8f7036: /* 8f7036: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7038: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f703a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f703b: mov ecx, edi */
  ecx = edi;
/* 8f703d: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x8f7043u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7043: /* 8f7043: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 8f7046: jmp 0x8f7024 */
  goto L_8f7024;
L_8f7048: /* 8f7048: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f704e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f7054u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f7054: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7057: mov ecx, esi */
  ecx = esi;
/* 8f7059: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f705fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f705f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f7062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7063: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f7069u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f7069: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f706c: mov ebx, eax */
  ebx = eax;
/* 8f706e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7074u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7076: je 0x8f7086 */
  if (zf) goto L_8f7086;
L_8f7078: /* 8f7078: xor edi, edi */
  edi = 0;
/* 8f707a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7081: jmp 0x8f6994 */
  goto L_8f6994;
L_8f7086: /* 8f7086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7087: mov ecx, esi */
  ecx = esi;
/* 8f7089: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f708fu); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f708f: mov edi, eax */
  edi = eax;
/* 8f7091: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7098: jmp 0x8f6994 */
  goto L_8f6994;
L_8f70d0: /* 8f70d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f70d3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f70d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70d8: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f70deu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f70de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f70df: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f70e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f70e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f70e7: push 0xaef0e8 */
  { uint32_t v = 0xaef0e8u; esp -= 4; W32(esp, v); }
/* 8f70ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f70f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f70f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f70f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f7101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f7102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7103: mov esp, ebp */
  esp = ebp;
/* 8f7105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7106: ret 4 */
  esp += 8; SPILL(); return;
L_8f7109: /* 8f7109: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f710c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f710f: test byte ptr [ecx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7116: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f711d: je 0x8f71a4 */
  if (zf) goto L_8f71a4;
L_8f7123: /* 8f7123: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f7129: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7130: jne 0x8f71a4 */
  if (!zf) goto L_8f71a4;
L_8f7132: /* 8f7132: mov byte ptr [ecx + 0x91], 4 */
  W8((uint32_t)(ecx + 0x91u), 0x4u);
/* 8f7139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f713c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f713f: mov byte ptr [ecx + 0x90], 0 */
  W8((uint32_t)(ecx + 0x90u), 0x0u);
/* 8f7146: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7149: mov dword ptr [edx + 0x60], 1 */
  W32((uint32_t)(edx + 0x60u), 0x1u);
/* 8f7150: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7153: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 8f7156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7157: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f715a: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7160: call 0x6c9449 */
  esp -= 4; W32(esp, 0x8f7165u); SPILL(); f_6c9449(); if (g_unwind) return; RELOAD();
/* 8f7165: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7168: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 8f716b: mov eax, dword ptr [0xb7e49c] */
  eax = R32((uint32_t)(0xb7e49cu));
/* 8f7170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7173: mov ecx, esi */
  ecx = esi;
/* 8f7175: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f717bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f717b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f717d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f717f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7182: mov ecx, esi */
  ecx = esi;
/* 8f7184: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7187: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f718a: mov dword ptr [eax + 0x68], 0 */
  W32((uint32_t)(eax + 0x68u), 0x0u);
/* 8f7191: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f7194: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f719b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f719c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f719d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f719e: mov esp, ebp */
  esp = ebp;
/* 8f71a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f71a1: ret 4 */
  esp += 8; SPILL(); return;
L_8f71a4: /* 8f71a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f71a7: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f71aa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71ac: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71b2: /* 8f71b2: cmp eax, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71b5: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71bb: /* 8f71bb: cmp dword ptr [eax + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71bf: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71c5: /* 8f71c5: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71cf: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71d5: /* 8f71d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71d7: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x8f71ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71df: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71e5: /* 8f71e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f71e8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f71eb: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f71ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f71f1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8f71f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f71fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f71fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f71fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7203: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7204: mov esp, ebp */
  esp = ebp;
/* 8f7206: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7207: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f6c8f(void) {
  LOAD_REGS();
L_8f6c8f: /* 8f6c8f: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8f6c95: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f6c9a: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 8f6c9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6c9e: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8f6ca1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6ca6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f6ca6(); return;
}

void f_8f6ca6(void) {
  LOAD_REGS();
L_8f6ca6: /* 8f6ca6: push 0xa1f108 */
  { uint32_t v = 0xa1f108u; esp -= 4; W32(esp, v); }
/* 8f6cab: push 0xaef01c */
  { uint32_t v = 0xaef01cu; esp -= 4; W32(esp, v); }
/* 8f6cb0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f6cb6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f6cb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6cb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6cbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6cbd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6cc2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f6cc2(); return;
}

void f_8f6cc2(void) {
  LOAD_REGS();
L_8f6cc2: /* 8f6cc2: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 8f6cc8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f6ccd: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8f6cd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6cd1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 8f6cd4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6cd9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f6cd9(); return;
}

void f_8f6cd9(void) {
  LOAD_REGS();
  goto L_8f6cd9;
L_8f651e: /* 8f651e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f6528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f652a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f652b: mov esp, ebp */
  esp = ebp;
/* 8f652d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f652e: ret 4 */
  esp += 8; SPILL(); return;
L_8f6994: /* 8f6994: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6996: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f699c: /* 8f699c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f699f: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f69a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f69a4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8f69aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f69aa: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f69ae: mov edi, edi */
  edi = edi;
L_8f69b0: /* 8f69b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69b2: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69b8: /* 8f69b8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8f69ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69bc: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69c2: /* 8f69c2: mov ecx, esi */
  ecx = esi;
/* 8f69c4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f69cau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f69ca: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 8f69d0: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8f69d2: jns 0x8f6cf5 */
  if (!sf) goto L_8f6cf5;
L_8f69d8: /* 8f69d8: cmp dword ptr [esi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f69dc: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 8f69e0: je 0x8f69f3 */
  if (zf) goto L_8f69f3;
L_8f69e2: /* 8f69e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f69e5: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
/* 8f69e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f69e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f69ea: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f69f0u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f69f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f69f3: /* 8f69f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f69f6: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 8f69fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69fe: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8f6a01: je 0x8f6a0e */
  if (zf) goto L_8f6a0e;
L_8f6a03: /* 8f6a03: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8f6a09: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f6a0c: jmp 0x8f6a15 */
  goto L_8f6a15;
L_8f6a0e: /* 8f6a0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8f6a15: /* 8f6a15: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6a18: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a1b: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 8f6a1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6a20: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6a26: /* 8f6a26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a29: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a2c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6a32: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a38: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6a3e: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6a44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6a49: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8f6a50: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f6a53: mov ecx, esi */
  ecx = esi;
/* 8f6a55: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8f6a59: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 8f6a60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a67: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a6b: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8f6a71: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6a77u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6a77: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6a7a: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6a7d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6a7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6a81: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f6a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a86: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6a8b: mov ecx, edi */
  ecx = edi;
/* 8f6a8d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a93: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a96: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a9c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6aa2: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6aa8: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6aae: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f6ab1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ab3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ab6: je 0x8f6ac7 */
  if (zf) goto L_8f6ac7;
L_8f6ab8: /* 8f6ab8: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6abb: test dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ac5: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6ac7: /* 8f6ac7: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f6aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6acc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6ad2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6ad2: mov ecx, esi */
  ecx = esi;
/* 8f6ad4: mov edi, eax */
  edi = eax;
/* 8f6ad6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6adcu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6adc: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8f6ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ae6: push 0xaeef90 */
  { uint32_t v = 0xaeef90u; esp -= 4; W32(esp, v); }
/* 8f6aeb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6af0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6af1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6af7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6af7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6afa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6afd: xor ebx, ebx */
  ebx = 0;
/* 8f6aff: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b02: /* 8f6b02: movzx edx, byte ptr [ebp - 0x15] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6b06: movzx eax, word ptr [esi + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x46u)));
/* 8f6b0a: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* 8f6b10: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f6b12: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6b15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f6b18: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8f6b1b: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8f6b1e: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6b20: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6b27: jl 0x8f6b60 */
  if ((sf != of)) goto L_8f6b60;
L_8f6b29: /* 8f6b29: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6b2b: jmp 0x8f6b89 */
  goto L_8f6b89;
L_8f6b60: /* 8f6b60: mov ecx, esi */
  ecx = esi;
/* 8f6b62: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6b68u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6b69: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f6b6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6b70: push 0xaeefec */
  { uint32_t v = 0xaeefecu; esp -= 4; W32(esp, v); }
/* 8f6b75: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6b7b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6b81u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6b81: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6b84: xor ebx, ebx */
  ebx = 0;
/* 8f6b86: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b89: /* 8f6b89: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f6b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6b90: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6b93: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8f6b97: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6b9du); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6b9d: movzx edi, byte ptr [ebp - 0x15] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6ba1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f6ba4: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 8f6ba7: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f6baa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6bac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6bae: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8f6bb1: je 0x8f6bb7 */
  if (zf) goto L_8f6bb7;
L_8f6bb3: /* 8f6bb3: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f6bb5: jmp 0x8f6be9 */
  goto L_8f6be9;
L_8f6bb7: /* 8f6bb7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6bbd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6bc0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8f6bc3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6bc9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6bc9: mov edx, eax */
  edx = eax;
/* 8f6bcb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8f6bce: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6bd1: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6bd4: xor eax, eax */
  eax = 0;
/* 8f6bd6: mov ebx, ecx */
  ebx = ecx;
/* 8f6bd8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6bdb: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6bde: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6be0: mov ecx, ebx */
  ecx = ebx;
/* 8f6be2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6be4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6be7: mov ebx, edx */
  ebx = edx;
L_8f6be9: /* 8f6be9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6bec: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6bef: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f6bf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6bf8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6bfd: mov ecx, esi */
  ecx = esi;
/* 8f6bff: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6c05: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c0a: je 0x8f6c1f */
  if (zf) goto L_8f6c1f;
L_8f6c0c: /* 8f6c0c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6c13: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6c15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6c17: mov ecx, esi */
  ecx = esi;
/* 8f6c19: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8f6c1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6c1f: /* 8f6c1f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6c22: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f6c28u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f6c28: mov ecx, esi */
  ecx = esi;
/* 8f6c2a: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6c31: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6c37u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6c37: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f6c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c3e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6c40: push 0xaef024 */
  { uint32_t v = 0xaef024u; esp -= 4; W32(esp, v); }
/* 8f6c45: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c4b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6c51u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6c51: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f6c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6c57: mov ecx, esi */
  ecx = esi;
/* 8f6c59: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f6c5fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f6c5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c63: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6c69u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6c69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c6c: mov ebx, eax */
  ebx = eax;
/* 8f6c6e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6c74u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c76: je 0x8f6c7f */
  if (zf) goto L_8f6c7f;
L_8f6c78: /* 8f6c78: xor edi, edi */
  edi = 0;
/* 8f6c7a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6c7f: /* 8f6c7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c80: mov ecx, esi */
  ecx = esi;
/* 8f6c82: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6c88u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6c88: mov edi, eax */
  edi = eax;
/* 8f6c8a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6cd9: /* 8f6cd9: push 0xa1f0ec */
  { uint32_t v = 0xa1f0ecu; esp -= 4; W32(esp, v); }
/* 8f6cde: push 0xaef03c */
  { uint32_t v = 0xaef03cu; esp -= 4; W32(esp, v); }
/* 8f6ce3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f6ce9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f6ce9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6cee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6cf0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6cf5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f6cf5: /* 8f6cf5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6cf8: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6cfb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6cfd: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6d04: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8f6d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6d0a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8f6d0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d0f: je 0x8f6d3b */
  if (zf) goto L_8f6d3b;
L_8f6d11: /* 8f6d11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d14: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f6d17: mov edx, dword ptr [0xb7e3f4] */
  edx = R32((uint32_t)(0xb7e3f4u));
/* 8f6d1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6d20: mov ecx, esi */
  ecx = esi;
/* 8f6d22: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8f6d29: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f6d2fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d36: mov ecx, esi */
  ecx = esi;
/* 8f6d38: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f6d3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6d3b: /* 8f6d3b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d3d: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f6d43: /* 8f6d43: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d47: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d4d: /* 8f6d4d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6d53u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6d53: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d5d: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d63: /* 8f6d63: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d65: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6d68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d69: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6d6d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f6d73u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f6d73: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6d76: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6d7c: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6d7f: call dword ptr [0xcfabac] */
  esp -= 4; W32(esp, 0x8f6d85u); SPILL(); f_4e126c(); if (g_unwind) return; /* Core!?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d85: mov esi, eax */
  esi = eax;
/* 8f6d87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d89: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8f6d8c: jne 0x8f6da6 */
  if (!zf) goto L_8f6da6;
L_8f6d8e: /* 8f6d8e: push 0x3de */
  { uint32_t v = 0x3deu; esp -= 4; W32(esp, v); }
/* 8f6d93: push 0xaef044 */
  { uint32_t v = 0xaef044u; esp -= 4; W32(esp, v); }
/* 8f6d98: push 0xaef050 */
  { uint32_t v = 0xaef050u; esp -= 4; W32(esp, v); }
/* 8f6d9d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f6da3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f6da3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6da6: /* 8f6da6: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8f6dad: mov edi, esi */
  edi = esi;
/* 8f6daf: nop  */
L_8f6db0: /* 8f6db0: mov ecx, edi */
  ecx = edi;
/* 8f6db2: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6db8u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6db8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dba: je 0x8f6dc8 */
  if (zf) goto L_8f6dc8;
L_8f6dbc: /* 8f6dbc: mov ecx, edi */
  ecx = edi;
/* 8f6dbe: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6dc4u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6dc4: mov edi, eax */
  edi = eax;
/* 8f6dc6: jmp 0x8f6db0 */
  goto L_8f6db0;
L_8f6dc8: /* 8f6dc8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dcb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6dce: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f6dd1: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8f6dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dd6: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6ddc: /* 8f6ddc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ddf: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f6de2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6de8: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6dee: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6df4: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6dfa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dfd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f6dff: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8f6e06: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* 8f6e09: mov ecx, edi */
  ecx = edi;
/* 8f6e0b: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f6e0f: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e12: movzx ecx, word ptr [edi + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x86u)));
/* 8f6e19: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e20: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e24: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8f6e2a: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6e30u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6e30: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6e33: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6e36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6e37: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6e3a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8f6e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e3f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6e44: mov ecx, ebx */
  ecx = ebx;
/* 8f6e46: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e4c: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6e4f: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6e55: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6e5b: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6e61: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6e67: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f6e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e6c: je 0x8f6e80 */
  if (zf) goto L_8f6e80;
L_8f6e6e: /* 8f6e6e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e71: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f6e74: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e7e: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6e80: /* 8f6e80: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e83: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e88: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6e8eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6e8e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6e91: mov edi, eax */
  edi = eax;
/* 8f6e93: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6e99u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e9b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8f6ea0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6ea2: push 0xaef060 */
  { uint32_t v = 0xaef060u; esp -= 4; W32(esp, v); }
/* 8f6ea7: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6eac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6ead: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6eb3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6eb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eb6: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8f6ebd: /* 8f6ebd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6ec0: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6ec7: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6ecdu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6ecd: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f6ed3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ed6: push 0xaef0b0 */
  { uint32_t v = 0xaef0b0u; esp -= 4; W32(esp, v); }
/* 8f6edb: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6ee0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6ee1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6ee7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6ee7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8f6eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ef0: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f6ef6: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6efcu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6efc: movzx edi, word ptr [esi + 0x8a] */
  edi = (uint32_t)(R16((uint32_t)(esi + 0x8au)));
/* 8f6f03: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6f09: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f0c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6f12u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6f12: mov esi, eax */
  esi = eax;
/* 8f6f14: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8f6f17: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8f6f1a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6f1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6f20: xor eax, eax */
  eax = 0;
/* 8f6f22: mov ebx, ecx */
  ebx = ecx;
/* 8f6f24: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6f27: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6f2a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6f2c: mov ecx, ebx */
  ecx = ebx;
/* 8f6f2e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6f30: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6f33: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 8f6f36: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8f6f39: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_8f6f3c: /* 8f6f3c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8f6f3f: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8f6f44u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8f6f44: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6f47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f49: je 0x8f6ffb */
  if (zf) goto L_8f6ffb;
L_8f6f4f: /* 8f6f4f: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 8f6f52: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f6f58: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f5e: jne 0x8f6ffb */
  if (!zf) goto L_8f6ffb;
L_8f6f64: /* 8f6f64: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6f67: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6f6a: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6f70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6f72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f73: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6f76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6f76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f79: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f7b: /* 8f6f7b: mov ecx, edi */
  ecx = edi;
/* 8f6f7d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6f83u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6f83: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f8d: jne 0x8f6f9c */
  if (!zf) goto L_8f6f9c;
L_8f6f8f: /* 8f6f8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6f92: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8f6f98u); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8f6f98: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f9a: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f9c: /* 8f6f9c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f6f9f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6fa2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f6fa4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f6fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fa7: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8f6faa: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6fb0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6fb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fb5: mov ecx, edi */
  ecx = edi;
/* 8f6fb7: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6fbd: /* 8f6fbd: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8f6fc0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8f6fc3: jmp 0x8f6f3c */
  goto L_8f6f3c;
L_8f6ffb: /* 8f6ffb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7000: jne 0x8f7021 */
  if (!zf) goto L_8f7021;
L_8f7002: /* 8f7002: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7005: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7008: or dword ptr [eax + 0x88], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f7012: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7015: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f701a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f701c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f701d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f701e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7021: /* 8f7021: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
L_8f7024: /* 8f7024: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7026: je 0x8f7048 */
  if (zf) goto L_8f7048;
L_8f7028: /* 8f7028: movzx ecx, word ptr [ebx + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8au)));
/* 8f702f: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8f7032: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7034: jge 0x8f7043 */
  if ((sf == of)) goto L_8f7043;
L_8f7036: /* 8f7036: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7038: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f703a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f703b: mov ecx, edi */
  ecx = edi;
/* 8f703d: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x8f7043u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7043: /* 8f7043: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 8f7046: jmp 0x8f7024 */
  goto L_8f7024;
L_8f7048: /* 8f7048: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f704e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f7054u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f7054: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7057: mov ecx, esi */
  ecx = esi;
/* 8f7059: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f705fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f705f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f7062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7063: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f7069u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f7069: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f706c: mov ebx, eax */
  ebx = eax;
/* 8f706e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7074u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7076: je 0x8f7086 */
  if (zf) goto L_8f7086;
L_8f7078: /* 8f7078: xor edi, edi */
  edi = 0;
/* 8f707a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7081: jmp 0x8f6994 */
  goto L_8f6994;
L_8f7086: /* 8f7086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7087: mov ecx, esi */
  ecx = esi;
/* 8f7089: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f708fu); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f708f: mov edi, eax */
  edi = eax;
/* 8f7091: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7098: jmp 0x8f6994 */
  goto L_8f6994;
L_8f70d0: /* 8f70d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f70d3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f70d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70d8: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f70deu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f70de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f70df: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f70e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f70e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f70e7: push 0xaef0e8 */
  { uint32_t v = 0xaef0e8u; esp -= 4; W32(esp, v); }
/* 8f70ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f70f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f70f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f70f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f7101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f7102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7103: mov esp, ebp */
  esp = ebp;
/* 8f7105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7106: ret 4 */
  esp += 8; SPILL(); return;
L_8f7109: /* 8f7109: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f710c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f710f: test byte ptr [ecx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7116: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f711d: je 0x8f71a4 */
  if (zf) goto L_8f71a4;
L_8f7123: /* 8f7123: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f7129: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7130: jne 0x8f71a4 */
  if (!zf) goto L_8f71a4;
L_8f7132: /* 8f7132: mov byte ptr [ecx + 0x91], 4 */
  W8((uint32_t)(ecx + 0x91u), 0x4u);
/* 8f7139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f713c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f713f: mov byte ptr [ecx + 0x90], 0 */
  W8((uint32_t)(ecx + 0x90u), 0x0u);
/* 8f7146: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7149: mov dword ptr [edx + 0x60], 1 */
  W32((uint32_t)(edx + 0x60u), 0x1u);
/* 8f7150: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7153: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 8f7156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7157: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f715a: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7160: call 0x6c9449 */
  esp -= 4; W32(esp, 0x8f7165u); SPILL(); f_6c9449(); if (g_unwind) return; RELOAD();
/* 8f7165: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7168: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 8f716b: mov eax, dword ptr [0xb7e49c] */
  eax = R32((uint32_t)(0xb7e49cu));
/* 8f7170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7173: mov ecx, esi */
  ecx = esi;
/* 8f7175: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f717bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f717b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f717d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f717f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7182: mov ecx, esi */
  ecx = esi;
/* 8f7184: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7187: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f718a: mov dword ptr [eax + 0x68], 0 */
  W32((uint32_t)(eax + 0x68u), 0x0u);
/* 8f7191: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f7194: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f719b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f719c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f719d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f719e: mov esp, ebp */
  esp = ebp;
/* 8f71a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f71a1: ret 4 */
  esp += 8; SPILL(); return;
L_8f71a4: /* 8f71a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f71a7: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f71aa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71ac: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71b2: /* 8f71b2: cmp eax, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71b5: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71bb: /* 8f71bb: cmp dword ptr [eax + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71bf: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71c5: /* 8f71c5: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71cf: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71d5: /* 8f71d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71d7: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x8f71ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71df: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71e5: /* 8f71e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f71e8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f71eb: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f71ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f71f1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8f71f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f71fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f71fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f71fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7203: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7204: mov esp, ebp */
  esp = ebp;
/* 8f7206: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7207: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f6fc8(void) {
  LOAD_REGS();
L_8f6fc8: /* 8f6fc8: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8f6fce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f6fd3: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8f6fd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6fd7: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8f6fda: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6fdfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f6fdf(); return;
}

void f_8f6fdf(void) {
  LOAD_REGS();
  goto L_8f6fdf;
L_8f651e: /* 8f651e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f6521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f6528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f6529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f652a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f652b: mov esp, ebp */
  esp = ebp;
/* 8f652d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f652e: ret 4 */
  esp += 8; SPILL(); return;
L_8f6994: /* 8f6994: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6996: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f699c: /* 8f699c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f699f: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f69a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f69a4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8f69aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f69aa: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f69ae: mov edi, edi */
  edi = edi;
L_8f69b0: /* 8f69b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69b2: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69b8: /* 8f69b8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8f69ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69bc: je 0x8f6cf5 */
  if (zf) goto L_8f6cf5;
L_8f69c2: /* 8f69c2: mov ecx, esi */
  ecx = esi;
/* 8f69c4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f69cau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f69ca: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 8f69d0: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8f69d2: jns 0x8f6cf5 */
  if (!sf) goto L_8f6cf5;
L_8f69d8: /* 8f69d8: cmp dword ptr [esi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f69dc: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 8f69e0: je 0x8f69f3 */
  if (zf) goto L_8f69f3;
L_8f69e2: /* 8f69e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f69e5: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
/* 8f69e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f69e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f69ea: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f69f0u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f69f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f69f3: /* 8f69f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f69f6: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 8f69fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f69fe: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8f6a01: je 0x8f6a0e */
  if (zf) goto L_8f6a0e;
L_8f6a03: /* 8f6a03: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8f6a09: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f6a0c: jmp 0x8f6a15 */
  goto L_8f6a15;
L_8f6a0e: /* 8f6a0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8f6a15: /* 8f6a15: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6a18: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a1b: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 8f6a1e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6a20: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6a26: /* 8f6a26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a29: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a2c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6a32: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a38: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6a3e: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6a44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6a49: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8f6a50: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8f6a53: mov ecx, esi */
  ecx = esi;
/* 8f6a55: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8f6a59: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 8f6a60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a67: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a6b: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8f6a71: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6a77u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6a77: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6a7a: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6a7d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6a7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6a81: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f6a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6a86: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6a8b: mov ecx, edi */
  ecx = edi;
/* 8f6a8d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6a90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6a93: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6a96: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6a9c: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6aa2: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6aa8: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6aae: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f6ab1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ab3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ab6: je 0x8f6ac7 */
  if (zf) goto L_8f6ac7;
L_8f6ab8: /* 8f6ab8: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6abb: test dword ptr [eax + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6ac5: jne 0x8f6b02 */
  if (!zf) goto L_8f6b02;
L_8f6ac7: /* 8f6ac7: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f6aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6acc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6ad2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6ad2: mov ecx, esi */
  ecx = esi;
/* 8f6ad4: mov edi, eax */
  edi = eax;
/* 8f6ad6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6adcu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6adc: mov ecx, dword ptr [0xcfa3b4] */
  ecx = R32((uint32_t)(0xcfa3b4u));
/* 8f6ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ae6: push 0xaeef90 */
  { uint32_t v = 0xaeef90u; esp -= 4; W32(esp, v); }
/* 8f6aeb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6af0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6af1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6af7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6af7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6afa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6afd: xor ebx, ebx */
  ebx = 0;
/* 8f6aff: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b02: /* 8f6b02: movzx edx, byte ptr [ebp - 0x15] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6b06: movzx eax, word ptr [esi + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x46u)));
/* 8f6b0a: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* 8f6b10: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f6b12: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6b15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8f6b18: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8f6b1b: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8f6b1e: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f6b20: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6b27: jl 0x8f6b60 */
  if ((sf != of)) goto L_8f6b60;
L_8f6b29: /* 8f6b29: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8f6b2b: jmp 0x8f6b89 */
  goto L_8f6b89;
L_8f6b60: /* 8f6b60: mov ecx, esi */
  ecx = esi;
/* 8f6b62: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6b68u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6b69: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f6b6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6b70: push 0xaeefec */
  { uint32_t v = 0xaeefecu; esp -= 4; W32(esp, v); }
/* 8f6b75: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6b7b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6b81u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6b81: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6b84: xor ebx, ebx */
  ebx = 0;
/* 8f6b86: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_8f6b89: /* 8f6b89: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f6b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6b90: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6b93: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8f6b97: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6b9du); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6b9d: movzx edi, byte ptr [ebp - 0x15] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffebu)));
/* 8f6ba1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f6ba4: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 8f6ba7: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f6baa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6bac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6bae: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8f6bb1: je 0x8f6bb7 */
  if (zf) goto L_8f6bb7;
L_8f6bb3: /* 8f6bb3: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f6bb5: jmp 0x8f6be9 */
  goto L_8f6be9;
L_8f6bb7: /* 8f6bb7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6bbd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6bc0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8f6bc3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6bc9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6bc9: mov edx, eax */
  edx = eax;
/* 8f6bcb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8f6bce: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6bd1: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6bd4: xor eax, eax */
  eax = 0;
/* 8f6bd6: mov ebx, ecx */
  ebx = ecx;
/* 8f6bd8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6bdb: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6bde: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6be0: mov ecx, ebx */
  ecx = ebx;
/* 8f6be2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6be4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6be7: mov ebx, edx */
  ebx = edx;
L_8f6be9: /* 8f6be9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6bec: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f6bef: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f6bf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f6bf8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6bfd: mov ecx, esi */
  ecx = esi;
/* 8f6bff: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6c05: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c0a: je 0x8f6c1f */
  if (zf) goto L_8f6c1f;
L_8f6c0c: /* 8f6c0c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6c0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f6c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6c13: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f6c15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6c17: mov ecx, esi */
  ecx = esi;
/* 8f6c19: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8f6c1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6c1f: /* 8f6c1f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8f6c22: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f6c28u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f6c28: mov ecx, esi */
  ecx = esi;
/* 8f6c2a: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f6c31: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f6c37u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f6c37: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f6c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c3e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f6c40: push 0xaef024 */
  { uint32_t v = 0xaef024u; esp -= 4; W32(esp, v); }
/* 8f6c45: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c4b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6c51u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6c51: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f6c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6c57: mov ecx, esi */
  ecx = esi;
/* 8f6c59: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f6c5fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f6c5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6c63: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f6c69u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f6c69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6c6c: mov ebx, eax */
  ebx = eax;
/* 8f6c6e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f6c74u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f6c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6c76: je 0x8f6c7f */
  if (zf) goto L_8f6c7f;
L_8f6c78: /* 8f6c78: xor edi, edi */
  edi = 0;
/* 8f6c7a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6c7f: /* 8f6c7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f6c80: mov ecx, esi */
  ecx = esi;
/* 8f6c82: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f6c88u); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f6c88: mov edi, eax */
  edi = eax;
/* 8f6c8a: jmp 0x8f69b0 */
  goto L_8f69b0;
L_8f6cf5: /* 8f6cf5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6cf8: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6cfb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f6cfd: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f6d04: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8f6d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6d0a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8f6d0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d0f: je 0x8f6d3b */
  if (zf) goto L_8f6d3b;
L_8f6d11: /* 8f6d11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d14: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f6d17: mov edx, dword ptr [0xb7e3f4] */
  edx = R32((uint32_t)(0xb7e3f4u));
/* 8f6d1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6d20: mov ecx, esi */
  ecx = esi;
/* 8f6d22: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8f6d29: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f6d2fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f6d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d36: mov ecx, esi */
  ecx = esi;
/* 8f6d38: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f6d3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6d3b: /* 8f6d3b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d3d: je 0x8f7109 */
  if (zf) goto L_8f7109;
L_8f6d43: /* 8f6d43: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d47: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d4d: /* 8f6d4d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6d53u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6d53: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d5d: je 0x8f70d0 */
  if (zf) goto L_8f70d0;
L_8f6d63: /* 8f6d63: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f6d65: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6d68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6d69: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6d6d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f6d73u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f6d73: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f6d76: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6d7c: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6d7f: call dword ptr [0xcfabac] */
  esp -= 4; W32(esp, 0x8f6d85u); SPILL(); f_4e126c(); if (g_unwind) return; /* Core!?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f6d85: mov esi, eax */
  esi = eax;
/* 8f6d87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6d89: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8f6d8c: jne 0x8f6da6 */
  if (!zf) goto L_8f6da6;
L_8f6d8e: /* 8f6d8e: push 0x3de */
  { uint32_t v = 0x3deu; esp -= 4; W32(esp, v); }
/* 8f6d93: push 0xaef044 */
  { uint32_t v = 0xaef044u; esp -= 4; W32(esp, v); }
/* 8f6d98: push 0xaef050 */
  { uint32_t v = 0xaef050u; esp -= 4; W32(esp, v); }
/* 8f6d9d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f6da3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f6da3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f6da6: /* 8f6da6: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8f6dad: mov edi, esi */
  edi = esi;
/* 8f6daf: nop  */
L_8f6db0: /* 8f6db0: mov ecx, edi */
  ecx = edi;
/* 8f6db2: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6db8u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6db8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dba: je 0x8f6dc8 */
  if (zf) goto L_8f6dc8;
L_8f6dbc: /* 8f6dbc: mov ecx, edi */
  ecx = edi;
/* 8f6dbe: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8f6dc4u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8f6dc4: mov edi, eax */
  edi = eax;
/* 8f6dc6: jmp 0x8f6db0 */
  goto L_8f6db0;
L_8f6dc8: /* 8f6dc8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dcb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6dce: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f6dd1: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8f6dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6dd6: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6ddc: /* 8f6ddc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6ddf: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f6de2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6de8: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6dee: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6df4: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6dfa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6dfd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f6dff: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8f6e06: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* 8f6e09: mov ecx, edi */
  ecx = edi;
/* 8f6e0b: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f6e0f: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e12: movzx ecx, word ptr [edi + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x86u)));
/* 8f6e19: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e20: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f6e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e24: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8f6e2a: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f6e30u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f6e30: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f6e33: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f6e36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f6e37: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f6e3a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8f6e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e3f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f6e44: mov ecx, ebx */
  ecx = ebx;
/* 8f6e46: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6e49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e4c: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f6e4f: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f6e55: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 8f6e5b: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 8f6e61: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
/* 8f6e67: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f6e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e6c: je 0x8f6e80 */
  if (zf) goto L_8f6e80;
L_8f6e6e: /* 8f6e6e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e71: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f6e74: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6e7e: jne 0x8f6ebd */
  if (!zf) goto L_8f6ebd;
L_8f6e80: /* 8f6e80: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6e83: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f6e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6e88: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f6e8eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f6e8e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6e91: mov edi, eax */
  edi = eax;
/* 8f6e93: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6e99u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6e9b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8f6ea0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f6ea2: push 0xaef060 */
  { uint32_t v = 0xaef060u; esp -= 4; W32(esp, v); }
/* 8f6ea7: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 8f6eac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6ead: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6eb3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6eb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eb6: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8f6ebd: /* 8f6ebd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f6ec0: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8f6ec7: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8f6ecdu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8f6ecd: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8f6ed3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ed6: push 0xaef0b0 */
  { uint32_t v = 0xaef0b0u; esp -= 4; W32(esp, v); }
/* 8f6edb: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f6ee0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6ee1: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f6ee7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f6ee7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8f6eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f6ef0: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f6ef6: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f6efcu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f6efc: movzx edi, word ptr [esi + 0x8a] */
  edi = (uint32_t)(R16((uint32_t)(esi + 0x8au)));
/* 8f6f03: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f6f09: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f0c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f6f12u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f6f12: mov esi, eax */
  esi = eax;
/* 8f6f14: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8f6f17: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8f6f1a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f6f1d: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f6f20: xor eax, eax */
  eax = 0;
/* 8f6f22: mov ebx, ecx */
  ebx = ecx;
/* 8f6f24: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f6f27: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f6f2a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f6f2c: mov ecx, ebx */
  ecx = ebx;
/* 8f6f2e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f6f30: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f6f33: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 8f6f36: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8f6f39: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_8f6f3c: /* 8f6f3c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8f6f3f: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8f6f44u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8f6f44: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f6f47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f49: je 0x8f6ffb */
  if (zf) goto L_8f6ffb;
L_8f6f4f: /* 8f6f4f: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 8f6f52: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f6f58: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f5e: jne 0x8f6ffb */
  if (!zf) goto L_8f6ffb;
L_8f6f64: /* 8f6f64: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6f67: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f6f6a: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6f70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f6f72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f6f73: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f6f76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f6f76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f6f79: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f7b: /* 8f6f7b: mov ecx, edi */
  ecx = edi;
/* 8f6f7d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f6f83u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f6f83: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f8d: jne 0x8f6f9c */
  if (!zf) goto L_8f6f9c;
L_8f6f8f: /* 8f6f8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6f92: call dword ptr [0xcfacb4] */
  esp -= 4; W32(esp, 0x8f6f98u); SPILL(); f_4e1dfc(); if (g_unwind) return; /* Core!?ReadBit@FBitReader@@QAEEXZ */ RELOAD();
/* 8f6f98: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f6f9a: je 0x8f6fbd */
  if (zf) goto L_8f6fbd;
L_8f6f9c: /* 8f6f9c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f6f9f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f6fa2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f6fa4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f6fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fa7: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8f6faa: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 8f6fb0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f6fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f6fb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f6fb5: mov ecx, edi */
  ecx = edi;
/* 8f6fb7: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8f6fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f6fbd: /* 8f6fbd: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8f6fc0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8f6fc3: jmp 0x8f6f3c */
  goto L_8f6f3c;
L_8f6fdf: /* 8f6fdf: push 0xa1f0c4 */
  { uint32_t v = 0xa1f0c4u; esp -= 4; W32(esp, v); }
/* 8f6fe4: push 0xaef0a8 */
  { uint32_t v = 0xaef0a8u; esp -= 4; W32(esp, v); }
/* 8f6fe9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f6fefu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f6fef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f6ff2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6ff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f6ff6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f6ffbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f6ffb: /* 8f6ffb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f6ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7000: jne 0x8f7021 */
  if (!zf) goto L_8f7021;
L_8f7002: /* 8f7002: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7005: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7008: or dword ptr [eax + 0x88], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f7012: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7015: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f701a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f701c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f701d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f701e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7021: /* 8f7021: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
L_8f7024: /* 8f7024: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7026: je 0x8f7048 */
  if (zf) goto L_8f7048;
L_8f7028: /* 8f7028: movzx ecx, word ptr [ebx + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8au)));
/* 8f702f: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8f7032: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7034: jge 0x8f7043 */
  if ((sf == of)) goto L_8f7043;
L_8f7036: /* 8f7036: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7038: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f703a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f703b: mov ecx, edi */
  ecx = edi;
/* 8f703d: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x8f7043u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f7043: /* 8f7043: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 8f7046: jmp 0x8f7024 */
  goto L_8f7024;
L_8f7048: /* 8f7048: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8f704e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f7054u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f7054: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7057: mov ecx, esi */
  ecx = esi;
/* 8f7059: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f705fu); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f705f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f7062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7063: call dword ptr [0xcfacbc] */
  esp -= 4; W32(esp, 0x8f7069u); SPILL(); f_4e1230(); if (g_unwind) return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */ RELOAD();
/* 8f7069: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f706c: mov ebx, eax */
  ebx = eax;
/* 8f706e: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7074u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7076: je 0x8f7086 */
  if (zf) goto L_8f7086;
L_8f7078: /* 8f7078: xor edi, edi */
  edi = 0;
/* 8f707a: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7081: jmp 0x8f6994 */
  goto L_8f6994;
L_8f7086: /* 8f7086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7087: mov ecx, esi */
  ecx = esi;
/* 8f7089: call dword ptr [0xcfacb8] */
  esp -= 4; W32(esp, 0x8f708fu); SPILL(); f_4e164a(); if (g_unwind) return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */ RELOAD();
/* 8f708f: mov edi, eax */
  edi = eax;
/* 8f7091: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f7098: jmp 0x8f6994 */
  goto L_8f6994;
L_8f70d0: /* 8f70d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f70d3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f70d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70d8: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f70deu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f70de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f70df: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f70e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f70e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f70e7: push 0xaef0e8 */
  { uint32_t v = 0xaef0e8u; esp -= 4; W32(esp, v); }
/* 8f70ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f70f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f70f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f70f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f7101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f7102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7103: mov esp, ebp */
  esp = ebp;
/* 8f7105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7106: ret 4 */
  esp += 8; SPILL(); return;
L_8f7109: /* 8f7109: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f710c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f710f: test byte ptr [ecx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7116: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f711d: je 0x8f71a4 */
  if (zf) goto L_8f71a4;
L_8f7123: /* 8f7123: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f7129: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7130: jne 0x8f71a4 */
  if (!zf) goto L_8f71a4;
L_8f7132: /* 8f7132: mov byte ptr [ecx + 0x91], 4 */
  W8((uint32_t)(ecx + 0x91u), 0x4u);
/* 8f7139: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f713c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f713f: mov byte ptr [ecx + 0x90], 0 */
  W8((uint32_t)(ecx + 0x90u), 0x0u);
/* 8f7146: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7149: mov dword ptr [edx + 0x60], 1 */
  W32((uint32_t)(edx + 0x60u), 0x1u);
/* 8f7150: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7153: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 8f7156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7157: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f715a: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7160: call 0x6c9449 */
  esp -= 4; W32(esp, 0x8f7165u); SPILL(); f_6c9449(); if (g_unwind) return; RELOAD();
/* 8f7165: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7168: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 8f716b: mov eax, dword ptr [0xb7e49c] */
  eax = R32((uint32_t)(0xb7e49cu));
/* 8f7170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7173: mov ecx, esi */
  ecx = esi;
/* 8f7175: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8f717bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8f717b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f717d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f717f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7182: mov ecx, esi */
  ecx = esi;
/* 8f7184: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8f7187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7187: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f718a: mov dword ptr [eax + 0x68], 0 */
  W32((uint32_t)(eax + 0x68u), 0x0u);
/* 8f7191: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f7194: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f719b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f719c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f719d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f719e: mov esp, ebp */
  esp = ebp;
/* 8f71a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f71a1: ret 4 */
  esp += 8; SPILL(); return;
L_8f71a4: /* 8f71a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f71a7: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f71aa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71ac: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71b2: /* 8f71b2: cmp eax, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71b5: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71bb: /* 8f71bb: cmp dword ptr [eax + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f71bf: jne 0x8f651e */
  if (!zf) goto L_8f651e;
L_8f71c5: /* 8f71c5: test dword ptr [ecx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71cf: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71d5: /* 8f71d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71d7: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x8f71ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f71df: je 0x8f651e */
  if (zf) goto L_8f651e;
L_8f71e5: /* 8f71e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f71e8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f71eb: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f71ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f71f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f71f1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8f71f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f71f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f71fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f71fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f71fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7203: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7204: mov esp, ebp */
  esp = ebp;
/* 8f7206: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7207: ret 4 */
  esp += 8; SPILL(); return;
}
