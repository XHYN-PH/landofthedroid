#include "recomp.h"
#include "rec_mod.h"

void f_e8fbb6(void) {
  LOAD_REGS();
  goto L_e8fbb6;
L_e8fbae: /* e8fbae: mov dword ptr [eax + 0x4664], ecx */
  W32((uint32_t)(eax + 0x4664u), ecx);
/* e8fbb4: jmp 0xe8fbc0 */
  goto L_e8fbc0;
L_e8fbb6: /* e8fbb6: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e8fbbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e8fbc0: /* e8fbc0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fbc4: mov ebx, dword ptr [eax + 0x4664] */
  ebx = R32((uint32_t)(eax + 0x4664u));
/* e8fbca: mov ecx, dword ptr [eax + 0x46b0] */
  ecx = R32((uint32_t)(eax + 0x46b0u));
/* e8fbd0: mov eax, dword ptr [eax + 0x4688] */
  eax = R32((uint32_t)(eax + 0x4688u));
/* e8fbd6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fbd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fbd9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fbdb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8fbdd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8fbde: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fbe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fbe1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fbe2: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe8fbe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fbe5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8fbe7: jl 0xe8fc15 */
  if ((sf != of)) goto L_e8fc15;
L_e8fbe9: /* e8fbe9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fbed: mov ebx, dword ptr [eax + 0x4664] */
  ebx = R32((uint32_t)(eax + 0x4664u));
/* e8fbf3: mov ecx, dword ptr [eax + 0x46b0] */
  ecx = R32((uint32_t)(eax + 0x46b0u));
/* e8fbf9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fbfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fbfc: mov ebx, dword ptr [eax + 0x4660] */
  ebx = R32((uint32_t)(eax + 0x4660u));
/* e8fc02: mov eax, dword ptr [eax + 0x4688] */
  eax = R32((uint32_t)(eax + 0x4688u));
/* e8fc08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fc09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8fc0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fc0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fc0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fc0e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xe8fc11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fc11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8fc13: jge 0xe8fc4a */
  if ((sf == of)) goto L_e8fc4a;
L_e8fc15: /* e8fc15: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8fc16: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fc19: je 0xe902fd */
  if (zf) goto L_e902fd;
L_e8fc1f: /* e8fc1f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fc23: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* e8fc26: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fc28: je 0xe8fc36 */
  if (zf) goto L_e8fc36;
L_e8fc2a: /* e8fc2a: mov dword ptr [eax + 0x4664], 0x4f */
  W32((uint32_t)(eax + 0x4664u), 0x4fu);
/* e8fc34: jmp 0xe8fbc0 */
  goto L_e8fbc0;
L_e8fc36: /* e8fc36: xor ecx, ecx */
  ecx = 0;
/* e8fc38: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fc3b: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8fc3e: lea ecx, [ecx*4 + 0x47] */
  ecx = (uint32_t)(ecx*4 + 0x47u);
/* e8fc45: jmp 0xe8fbae */
  goto L_e8fbae;
L_e8fc4a: /* e8fc4a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fc4e: mov edx, dword ptr [edx + 0x4664] */
  edx = R32((uint32_t)(edx + 0x4664u));
/* e8fc54: mov eax, edx */
  eax = edx;
/* e8fc56: call 0xe8c4b0 */
  esp -= 4; W32(esp, 0xe8fc5bu); SPILL(); f_e8c4b0(); if (g_unwind) return; RELOAD();
/* e8fc5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fc5c: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8fc61: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fc63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fc64: push 0xeb24c8 */
  { uint32_t v = 0xeb24c8u; esp -= 4; W32(esp, v); }
/* e8fc69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fc6a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8fc6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fc6c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fc70: mov edx, dword ptr [eax + 0x4664] */
  edx = R32((uint32_t)(eax + 0x4664u));
/* e8fc76: mov dword ptr [eax + 0x46dc], edx */
  W32((uint32_t)(eax + 0x46dcu), edx);
/* e8fc7c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e8fc80: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e8fc86: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fc89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fc8b: je 0xe8fcc7 */
  if (zf) goto L_e8fcc7;
L_e8fc8d: /* e8fc8d: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8fc93: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fc96: je 0xe8fca9 */
  if (zf) goto L_e8fca9;
L_e8fc98: /* e8fc98: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8fc9a: add ecx, 0x46b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8fca0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fca1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fca2: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0xe8fca5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8fca7: jge 0xe8fcc7 */
  if ((sf == of)) goto L_e8fcc7;
L_e8fca9: /* e8fca9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fcad: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8fcb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fcb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fcb6: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe8fcb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fcb9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fcbd: mov dword ptr [edx + 0x46b4], 0 */
  W32((uint32_t)(edx + 0x46b4u), 0x0u);
L_e8fcc7: /* e8fcc7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fccb: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e8fcd1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fcd3: jne 0xe8fef6 */
  if (!zf) goto L_e8fef6;
L_e8fcd9: /* e8fcd9: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8fcdf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fce1: push 0xeb24a4 */
  { uint32_t v = 0xeb24a4u; esp -= 4; W32(esp, v); }
/* e8fce6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fce7: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8fcedu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8fced: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8fcf1: mov eax, dword ptr [edx + 0x4168] */
  eax = R32((uint32_t)(edx + 0x4168u));
/* e8fcf7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fcfa: test eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fcff: jne 0xe8fd0f */
  if (!zf) goto L_e8fd0f;
L_e8fd01: /* e8fd01: mov dword ptr [edx + 0x40d8], 0 */
  W32((uint32_t)(edx + 0x40d8u), 0x0u);
/* e8fd0b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_e8fd0f: /* e8fd0f: mov eax, dword ptr [edx + 0x4210] */
  eax = R32((uint32_t)(edx + 0x4210u));
/* e8fd15: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8fd1a: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8fd1f: jb 0xe8fd2b */
  if (cf) goto L_e8fd2b;
L_e8fd21: /* e8fd21: mov eax, dword ptr [edx + 0x40d8] */
  eax = R32((uint32_t)(edx + 0x40d8u));
/* e8fd27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fd29: jne 0xe8fd39 */
  if (!zf) goto L_e8fd39;
L_e8fd2b: /* e8fd2b: mov dword ptr [edx + 0x40dc], 0 */
  W32((uint32_t)(edx + 0x40dcu), 0x0u);
/* e8fd35: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_e8fd39: /* e8fd39: mov eax, dword ptr [edx + 0x40dc] */
  eax = R32((uint32_t)(edx + 0x40dcu));
/* e8fd3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fd41: je 0xe8fd4a */
  if (zf) goto L_e8fd4a;
L_e8fd43: /* e8fd43: mov eax, 0x40 */
  eax = 0x40u;
/* e8fd48: jmp 0xe8fd5a */
  goto L_e8fd5a;
L_e8fd4a: /* e8fd4a: mov eax, dword ptr [edx + 0x40d8] */
  eax = R32((uint32_t)(edx + 0x40d8u));
/* e8fd50: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e8fd52: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e8fd54: and eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8fd57: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_e8fd5a: /* e8fd5a: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e8fd61: mov ebp, dword ptr [ecx + 0xcc] */
  ebp = R32((uint32_t)(ecx + 0xccu));
/* e8fd67: mov esi, dword ptr [edx + 0x46b0] */
  esi = R32((uint32_t)(edx + 0x46b0u));
/* e8fd6d: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e8fd70: xor ebx, ebx */
  ebx = 0;
/* e8fd72: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fd74: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* e8fd76: mov edi, eax */
  edi = eax;
/* e8fd78: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8fd7b: lea eax, [edx + 0x46b4] */
  eax = (uint32_t)(edx + 0x46b4u);
/* e8fd81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fd82: add edx, 0x46b8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8fd88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fd89: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fd8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8fd8c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e8fd8d: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe8fd93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fd93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fd94: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fd98: mov ecx, dword ptr [eax + 0x4688] */
  ecx = R32((uint32_t)(eax + 0x4688u));
/* e8fd9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fd9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8fda1: call dword ptr [ebp + 0x3c] */
  { uint32_t t = R32((uint32_t)(ebp + 0x3cu)); esp -= 4; W32(esp, 0xe8fda4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fda4: cmp eax, 0x88760868 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760868u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fda9: jne 0xe8fdff */
  if (!zf) goto L_e8fdff;
L_e8fdab: /* e8fdab: jmp 0xe8fdb0 */
  goto L_e8fdb0;
L_e8fdb0: /* e8fdb0: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* e8fdb5: call dword ptr [0xeae1fc] */
  esp -= 4; W32(esp, 0xe8fdbbu); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* e8fdbb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8fdbf: mov esi, dword ptr [eax + 0x46b0] */
  esi = R32((uint32_t)(eax + 0x46b0u));
/* e8fdc5: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* e8fdcc: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* e8fdce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fdd1: lea edx, [eax + 0x46b4] */
  edx = (uint32_t)(eax + 0x46b4u);
/* e8fdd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fdd8: add eax, 0x46b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8fddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fdde: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8fde0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8fde1: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8fde7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fde7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8fdeb: mov edx, dword ptr [ecx + 0x4688] */
  edx = R32((uint32_t)(ecx + 0x4688u));
/* e8fdf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fdf2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fdf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fdf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8fdf5: call dword ptr [ebp + 0x3c] */
  { uint32_t t = R32((uint32_t)(ebp + 0x3cu)); esp -= 4; W32(esp, 0xe8fdf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fdf8: cmp eax, 0x88760868 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760868u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fdfd: je 0xe8fdb0 */
  if (zf) goto L_e8fdb0;
L_e8fdff: /* e8fdff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe01: je 0xe8fe1e */
  if (zf) goto L_e8fe1e;
L_e8fe03: /* e8fe03: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fe07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fe09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe0a: push 0xeb247c */
  { uint32_t v = 0xeb247cu; esp -= 4; W32(esp, v); }
/* e8fe0f: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe8fe14u); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e8fe14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8fe15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8fe16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8fe17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8fe18: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe1b: ret 0x18 */
  esp += 28; SPILL(); return;
L_e8fe1e: /* e8fe1e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fe22: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e8fe28: mov edx, dword ptr [eax + 0x46b0] */
  edx = R32((uint32_t)(eax + 0x46b0u));
/* e8fe2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fe2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fe30: call dword ptr [0xeae2d8] */
  esp -= 4; W32(esp, 0xe8fe36u); SPILL(); f_d5189d(); if (g_unwind) return; /* EngineEx!?Bink_Manager_Set_D3D_Context@@YAXPAUIDirect3D8@@PAUIDirect3DDevice8@@@Z */ RELOAD();
/* e8fe36: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e8fe3a: mov ecx, dword ptr [eax + 0x40d8] */
  ecx = R32((uint32_t)(eax + 0x40d8u));
/* e8fe40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe45: mov eax, 0xeb2468 */
  eax = 0xeb2468u;
/* e8fe4a: jne 0xe8fe51 */
  if (!zf) goto L_e8fe51;
L_e8fe4c: /* e8fe4c: mov eax, 0xeb2454 */
  eax = 0xeb2454u;
L_e8fe51: /* e8fe51: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8fe57: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fe59: mov esi, dword ptr [0xeae1c0] */
  esi = R32((uint32_t)(0xeae1c0u));
/* e8fe5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe60: push 0xeb23d8 */
  { uint32_t v = 0xeb23d8u; esp -= 4; W32(esp, v); }
/* e8fe65: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8fe6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fe6b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8fe6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fe6d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fe71: mov ecx, dword ptr [eax + 0x40d8] */
  ecx = R32((uint32_t)(eax + 0x40d8u));
/* e8fe77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe7a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe7c: je 0xe8fe96 */
  if (zf) goto L_e8fe96;
L_e8fe7e: /* e8fe7e: mov ecx, dword ptr [eax + 0x40dc] */
  ecx = R32((uint32_t)(eax + 0x40dcu));
/* e8fe84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe86: je 0xe8fe8f */
  if (zf) goto L_e8fe8f;
L_e8fe88: /* e8fe88: mov eax, 0xeb2468 */
  eax = 0xeb2468u;
/* e8fe8d: jmp 0xe8fe9b */
  goto L_e8fe9b;
L_e8fe8f: /* e8fe8f: mov eax, 0xeb23c8 */
  eax = 0xeb23c8u;
/* e8fe94: jmp 0xe8fe9b */
  goto L_e8fe9b;
L_e8fe96: /* e8fe96: mov eax, 0xeb2454 */
  eax = 0xeb2454u;
L_e8fe9b: /* e8fe9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe9c: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8fea1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fea3: push 0xeb2358 */
  { uint32_t v = 0xeb2358u; esp -= 4; W32(esp, v); }
/* e8fea8: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8fead: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8feae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8feb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8feb0: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8feb6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8feb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8febb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8febd: jne 0xe8fef6 */
  if (!zf) goto L_e8fef6;
L_e8febf: /* e8febf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fec3: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8fec9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fecb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fecd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fed3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fed8: call dword ptr [ecx + 0x90] */
  { uint32_t t = R32((uint32_t)(ecx + 0x90u)); esp -= 4; W32(esp, 0xe8fedeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fede: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fee2: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8fee8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8feea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8feec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8feee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fef3: call dword ptr [ecx + 0x3c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x3cu)); esp -= 4; W32(esp, 0xe8fef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8fef6: /* e8fef6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fefa: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff00: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff03: call dword ptr [ecx + 0x10] */
  { uint32_t t = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, 0xe8ff06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff06: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff0a: mov dword ptr [edx + 0x4678], eax */
  W32((uint32_t)(edx + 0x4678u), eax);
/* e8ff10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ff14: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ff1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff1e: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e8ff20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff21: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff2b: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff31: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff33: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8ff35: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e8ff37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff38: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff3e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff42: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff48: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ff4c: push 0x1d */
  { uint32_t v = 0x1du; esp -= 4; W32(esp, v); }
/* e8ff4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff4f: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff55: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff59: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff5f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff63: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e8ff65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff66: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff6c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff70: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff76: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff7a: push 0x8f */
  { uint32_t v = 0x8fu; esp -= 4; W32(esp, v); }
/* e8ff7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff80: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff86: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8ff8a: mov esi, dword ptr [ecx + 0x410c] */
  esi = R32((uint32_t)(ecx + 0x410cu));
/* e8ff90: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e8ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ff98: xor ebx, ebx */
  ebx = 0;
/* e8ff9a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ff9c: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8ff9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8ffa0: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* e8ffa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffa3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ffa9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ffad: mov ecx, dword ptr [eax + 0x4108] */
  ecx = R32((uint32_t)(eax + 0x4108u));
/* e8ffb3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ffb5: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ffbb: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e8ffbd: je 0xe8ffcf */
  if (zf) goto L_e8ffcf;
L_e8ffbf: /* e8ffbf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ffc1: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* e8ffc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffc7: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ffcd: jmp 0xe8ffda */
  goto L_e8ffda;
L_e8ffcf: /* e8ffcf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ffd1: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* e8ffd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffd4: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8ffda: /* e8ffda: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ffde: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ffe4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ffe6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ffe8: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* e8ffed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffee: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8fff4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fff4: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* e8fff8: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e8fffc: mov ecx, 0x44 */
  ecx = 0x44u;
/* e90001: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e90005: xor eax, eax */
  eax = 0;
/* e90007: mov ebx, ecx */
  ebx = ecx;
/* e90009: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9000c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e9000f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e90011: mov ecx, ebx */
  ecx = ebx;
/* e90013: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e90015: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90019: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* e90021: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* e90029: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* e90031: mov dword ptr [esp + 0x60], 0x3f800000 */
  W32((uint32_t)(esp + 0x60u), 0x3f800000u);
/* e90039: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* e90041: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* e90049: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* e90051: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* e90059: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* e90061: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* e90069: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* e90071: mov dword ptr [esp + 0x70], 0x3f800000 */
  W32((uint32_t)(esp + 0x70u), 0x3f800000u);
/* e90079: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* e90084: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9008a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9008c: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* e90090: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90092: call dword ptr [ecx + 0xa8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xa8u)); esp -= 4; W32(esp, 0xe90098u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90098: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9009c: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e900a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e900a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e900a6: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* e900ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900ac: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe900b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e900b2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e900b6: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e900bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e900be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e900c0: push 0x92 */
  { uint32_t v = 0x92u; esp -= 4; W32(esp, v); }
/* e900c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900c6: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe900ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e900cc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e900d0: test byte ptr [eax + 0x41e8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x41e8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e900d7: jne 0xe90113 */
  if (!zf) goto L_e90113;
L_e900d9: /* e900d9: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e900df: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e900e1: push 0xeb22d8 */
  { uint32_t v = 0xeb22d8u; esp -= 4; W32(esp, v); }
/* e900e6: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e900eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900ec: call dword ptr [0xeae1c0] */
  esp -= 4; W32(esp, 0xe900f2u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e900f2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e900f6: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e900fc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e900fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90101: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90103: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* e90108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90109: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9010fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9010f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90111: jmp 0xe9012b */
  goto L_e9012b;
L_e90113: /* e90113: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90119: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9011b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9011d: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* e90122: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90123: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe90129u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90129: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_e9012b: /* e9012b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9012f: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90135: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e90137: push 0x93 */
  { uint32_t v = 0x93u; esp -= 4; W32(esp, v); }
/* e9013c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9013d: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe90143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90143: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90147: mov ecx, dword ptr [eax + 0x4138] */
  ecx = R32((uint32_t)(eax + 0x4138u));
/* e9014d: mov edx, dword ptr [eax + 0x41b8] */
  edx = R32((uint32_t)(eax + 0x41b8u));
/* e90153: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e90155: ja 0xe90159 */
  if ((!cf && !zf)) goto L_e90159;
L_e90157: /* e90157: mov ecx, edx */
  ecx = edx;
L_e90159: /* e90159: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9015c: mov ebp, 1 */
  ebp = 0x1u;
/* e90161: jbe 0xe90165 */
  if ((cf | zf)) goto L_e90165;
L_e90163: /* e90163: mov ebp, ecx */
  ebp = ecx;
L_e90165: /* e90165: mov ecx, dword ptr [eax + 0x41e0] */
  ecx = R32((uint32_t)(eax + 0x41e0u));
/* e9016b: mov edx, dword ptr [eax + 0x4140] */
  edx = R32((uint32_t)(eax + 0x4140u));
/* e90171: xor esi, esi */
  esi = 0;
/* e90173: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e90175: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e90179: jle 0xe9022e */
  if ((zf || sf != of)) goto L_e9022e;
L_e9017f: /* e9017f: mov ecx, 1 */
  ecx = 0x1u;
/* e90184: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e90186: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* e90188: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* e9018a: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9018d: mov ebx, edx */
  ebx = edx;
/* e9018f: nop  */
L_e90190: /* e90190: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90196: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e90198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90199: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e9019b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9019c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9019d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe901a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e901a7: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e901ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e901af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e901b0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e901b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901b4: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe901bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901ba: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e901be: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e901c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e901c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e901c7: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e901c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901cb: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe901d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901d1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e901d5: mov ecx, dword ptr [eax + 0x40d0] */
  ecx = R32((uint32_t)(eax + 0x40d0u));
/* e901db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e901dd: je 0xe901ef */
  if (zf) goto L_e901ef;
L_e901df: /* e901df: mov edx, dword ptr [eax + 0x40cc] */
  edx = R32((uint32_t)(eax + 0x40ccu));
/* e901e5: xor ecx, ecx */
  ecx = 0;
/* e901e7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e901e9: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e901ec: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e901ed: jmp 0xe901f1 */
  goto L_e901f1;
L_e901ef: /* e901ef: xor ecx, ecx */
  ecx = 0;
L_e901f1: /* e901f1: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e901f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e901f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e901fa: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e901fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901fe: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe90204u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90204: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90208: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9020e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e90210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e90211: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e90213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90215: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe9021bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9021b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9021f: mov ecx, dword ptr [eax + 0x41e0] */
  ecx = R32((uint32_t)(eax + 0x41e0u));
/* e90225: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e90226: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e90228: jl 0xe90190 */
  if ((sf != of)) goto L_e90190;
L_e9022e: /* e9022e: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* e90235: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* e9023c: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e90243: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e90245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90246: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e9024d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9024e: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e90255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90256: xor eax, eax */
  eax = 0;
/* e90258: xor esi, esi */
  esi = 0;
/* e9025a: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9025c: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9025f: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e90262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90263: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xe90269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90269: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9026d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9026e: lea ecx, [eax + 0x2fc9c] */
  ecx = (uint32_t)(eax + 0x2fc9cu);
/* e90274: call 0xe961d0 */
  esp -= 4; W32(esp, 0xe90279u); SPILL(); f_e961d0(); if (g_unwind) return; RELOAD();
/* e90279: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e9027f: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90281: je 0xe902b9 */
  if (zf) goto L_e902b9;
L_e90283: /* e90283: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e9028a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9028c: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe90292u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90292: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90296: mov dword ptr [ecx + 0x46f0], eax */
  W32((uint32_t)(ecx + 0x46f0u), eax);
/* e9029c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e902a0: mov eax, dword ptr [edx + 0x46f0] */
  eax = R32((uint32_t)(edx + 0x46f0u));
/* e902a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e902a7: call dword ptr [0xeae36c] */
  esp -= 4; W32(esp, 0xe902adu); SPILL(); call_ind(R32(0xeae36cu)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* e902ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e902b1: mov dword ptr [ecx + 0x46ec], eax */
  W32((uint32_t)(ecx + 0x46ecu), eax);
/* e902b7: jmp 0xe902cd */
  goto L_e902cd;
L_e902b9: /* e902b9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e902bd: mov dword ptr [edx + 0x46f0], esi */
  W32((uint32_t)(edx + 0x46f0u), esi);
/* e902c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e902c7: mov dword ptr [eax + 0x46ec], esi */
  W32((uint32_t)(eax + 0x46ecu), esi);
L_e902cd: /* e902cd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e902d1: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* e902d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e902da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e902db: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xe902e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e902e1: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e902e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e902e9: mov dword ptr [ecx + 0x158], esi */
  W32((uint32_t)(ecx + 0x158u), esi);
/* e902ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e902f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e902f1: mov eax, 1 */
  eax = 0x1u;
/* e902f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e902f7: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e902fa: ret 0x18 */
  esp += 28; SPILL(); return;
L_e902fd: /* e902fd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90301: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e90303: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90305: push 0xeb2294 */
  { uint32_t v = 0xeb2294u; esp -= 4; W32(esp, v); }
/* e9030a: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe9030fu); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e9030f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90311: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e90312: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90313: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90316: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e8fdad(void) {
  LOAD_REGS();
L_e8fdad: /* e8fdad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e8fdb0: /* e8fdb0: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* e8fdb5: call dword ptr [0xeae1fc] */
  esp -= 4; W32(esp, 0xe8fdbbu); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* e8fdbb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8fdbf: mov esi, dword ptr [eax + 0x46b0] */
  esi = R32((uint32_t)(eax + 0x46b0u));
/* e8fdc5: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* e8fdcc: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* e8fdce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fdd1: lea edx, [eax + 0x46b4] */
  edx = (uint32_t)(eax + 0x46b4u);
/* e8fdd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fdd8: add eax, 0x46b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8fddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fdde: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8fde0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8fde1: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8fde7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fde7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8fdeb: mov edx, dword ptr [ecx + 0x4688] */
  edx = R32((uint32_t)(ecx + 0x4688u));
/* e8fdf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fdf2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fdf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fdf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8fdf5: call dword ptr [ebp + 0x3c] */
  { uint32_t t = R32((uint32_t)(ebp + 0x3cu)); esp -= 4; W32(esp, 0xe8fdf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fdf8: cmp eax, 0x88760868 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760868u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fdfd: je 0xe8fdb0 */
  if (zf) goto L_e8fdb0;
L_e8fdff: /* e8fdff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe01: je 0xe8fe1e */
  if (zf) goto L_e8fe1e;
L_e8fe03: /* e8fe03: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fe07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fe09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe0a: push 0xeb247c */
  { uint32_t v = 0xeb247cu; esp -= 4; W32(esp, v); }
/* e8fe0f: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe8fe14u); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e8fe14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8fe15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8fe16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8fe17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8fe18: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe1b: ret 0x18 */
  esp += 28; SPILL(); return;
L_e8fe1e: /* e8fe1e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fe22: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e8fe28: mov edx, dword ptr [eax + 0x46b0] */
  edx = R32((uint32_t)(eax + 0x46b0u));
/* e8fe2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fe2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fe30: call dword ptr [0xeae2d8] */
  esp -= 4; W32(esp, 0xe8fe36u); SPILL(); f_d5189d(); if (g_unwind) return; /* EngineEx!?Bink_Manager_Set_D3D_Context@@YAXPAUIDirect3D8@@PAUIDirect3DDevice8@@@Z */ RELOAD();
/* e8fe36: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e8fe3a: mov ecx, dword ptr [eax + 0x40d8] */
  ecx = R32((uint32_t)(eax + 0x40d8u));
/* e8fe40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe45: mov eax, 0xeb2468 */
  eax = 0xeb2468u;
/* e8fe4a: jne 0xe8fe51 */
  if (!zf) goto L_e8fe51;
L_e8fe4c: /* e8fe4c: mov eax, 0xeb2454 */
  eax = 0xeb2454u;
L_e8fe51: /* e8fe51: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8fe57: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fe59: mov esi, dword ptr [0xeae1c0] */
  esi = R32((uint32_t)(0xeae1c0u));
/* e8fe5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe60: push 0xeb23d8 */
  { uint32_t v = 0xeb23d8u; esp -= 4; W32(esp, v); }
/* e8fe65: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8fe6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fe6b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8fe6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fe6d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fe71: mov ecx, dword ptr [eax + 0x40d8] */
  ecx = R32((uint32_t)(eax + 0x40d8u));
/* e8fe77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe7a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe7c: je 0xe8fe96 */
  if (zf) goto L_e8fe96;
L_e8fe7e: /* e8fe7e: mov ecx, dword ptr [eax + 0x40dc] */
  ecx = R32((uint32_t)(eax + 0x40dcu));
/* e8fe84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe86: je 0xe8fe8f */
  if (zf) goto L_e8fe8f;
L_e8fe88: /* e8fe88: mov eax, 0xeb2468 */
  eax = 0xeb2468u;
/* e8fe8d: jmp 0xe8fe9b */
  goto L_e8fe9b;
L_e8fe8f: /* e8fe8f: mov eax, 0xeb23c8 */
  eax = 0xeb23c8u;
/* e8fe94: jmp 0xe8fe9b */
  goto L_e8fe9b;
L_e8fe96: /* e8fe96: mov eax, 0xeb2454 */
  eax = 0xeb2454u;
L_e8fe9b: /* e8fe9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe9c: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8fea1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fea3: push 0xeb2358 */
  { uint32_t v = 0xeb2358u; esp -= 4; W32(esp, v); }
/* e8fea8: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8fead: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8feae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8feb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8feb0: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8feb6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8feb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8febb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8febd: jne 0xe8fef6 */
  if (!zf) goto L_e8fef6;
L_e8febf: /* e8febf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fec3: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8fec9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fecb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fecd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fed3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fed8: call dword ptr [ecx + 0x90] */
  { uint32_t t = R32((uint32_t)(ecx + 0x90u)); esp -= 4; W32(esp, 0xe8fedeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fede: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fee2: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8fee8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8feea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8feec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8feee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fef3: call dword ptr [ecx + 0x3c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x3cu)); esp -= 4; W32(esp, 0xe8fef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8fef6: /* e8fef6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fefa: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff00: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff03: call dword ptr [ecx + 0x10] */
  { uint32_t t = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, 0xe8ff06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff06: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff0a: mov dword ptr [edx + 0x4678], eax */
  W32((uint32_t)(edx + 0x4678u), eax);
/* e8ff10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ff14: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ff1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff1e: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e8ff20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff21: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff2b: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff31: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff33: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8ff35: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e8ff37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff38: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff3e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff42: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff48: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ff4c: push 0x1d */
  { uint32_t v = 0x1du; esp -= 4; W32(esp, v); }
/* e8ff4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff4f: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff55: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff59: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff5f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff63: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e8ff65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff66: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff6c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff70: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff76: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff7a: push 0x8f */
  { uint32_t v = 0x8fu; esp -= 4; W32(esp, v); }
/* e8ff7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff80: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff86: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8ff8a: mov esi, dword ptr [ecx + 0x410c] */
  esi = R32((uint32_t)(ecx + 0x410cu));
/* e8ff90: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e8ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ff98: xor ebx, ebx */
  ebx = 0;
/* e8ff9a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ff9c: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8ff9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8ffa0: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* e8ffa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffa3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ffa9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ffad: mov ecx, dword ptr [eax + 0x4108] */
  ecx = R32((uint32_t)(eax + 0x4108u));
/* e8ffb3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ffb5: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ffbb: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e8ffbd: je 0xe8ffcf */
  if (zf) goto L_e8ffcf;
L_e8ffbf: /* e8ffbf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ffc1: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* e8ffc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffc7: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ffcd: jmp 0xe8ffda */
  goto L_e8ffda;
L_e8ffcf: /* e8ffcf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ffd1: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* e8ffd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffd4: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8ffda: /* e8ffda: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ffde: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ffe4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ffe6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ffe8: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* e8ffed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffee: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8fff4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fff4: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* e8fff8: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e8fffc: mov ecx, 0x44 */
  ecx = 0x44u;
/* e90001: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e90005: xor eax, eax */
  eax = 0;
/* e90007: mov ebx, ecx */
  ebx = ecx;
/* e90009: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9000c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e9000f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e90011: mov ecx, ebx */
  ecx = ebx;
/* e90013: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e90015: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90019: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* e90021: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* e90029: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* e90031: mov dword ptr [esp + 0x60], 0x3f800000 */
  W32((uint32_t)(esp + 0x60u), 0x3f800000u);
/* e90039: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* e90041: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* e90049: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* e90051: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* e90059: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* e90061: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* e90069: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* e90071: mov dword ptr [esp + 0x70], 0x3f800000 */
  W32((uint32_t)(esp + 0x70u), 0x3f800000u);
/* e90079: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* e90084: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9008a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9008c: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* e90090: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90092: call dword ptr [ecx + 0xa8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xa8u)); esp -= 4; W32(esp, 0xe90098u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90098: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9009c: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e900a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e900a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e900a6: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* e900ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900ac: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe900b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e900b2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e900b6: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e900bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e900be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e900c0: push 0x92 */
  { uint32_t v = 0x92u; esp -= 4; W32(esp, v); }
/* e900c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900c6: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe900ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e900cc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e900d0: test byte ptr [eax + 0x41e8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x41e8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e900d7: jne 0xe90113 */
  if (!zf) goto L_e90113;
L_e900d9: /* e900d9: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e900df: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e900e1: push 0xeb22d8 */
  { uint32_t v = 0xeb22d8u; esp -= 4; W32(esp, v); }
/* e900e6: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e900eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900ec: call dword ptr [0xeae1c0] */
  esp -= 4; W32(esp, 0xe900f2u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e900f2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e900f6: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e900fc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e900fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90101: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90103: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* e90108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90109: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9010fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9010f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90111: jmp 0xe9012b */
  goto L_e9012b;
L_e90113: /* e90113: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90119: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9011b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9011d: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* e90122: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90123: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe90129u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90129: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_e9012b: /* e9012b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9012f: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90135: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e90137: push 0x93 */
  { uint32_t v = 0x93u; esp -= 4; W32(esp, v); }
/* e9013c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9013d: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe90143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90143: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90147: mov ecx, dword ptr [eax + 0x4138] */
  ecx = R32((uint32_t)(eax + 0x4138u));
/* e9014d: mov edx, dword ptr [eax + 0x41b8] */
  edx = R32((uint32_t)(eax + 0x41b8u));
/* e90153: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e90155: ja 0xe90159 */
  if ((!cf && !zf)) goto L_e90159;
L_e90157: /* e90157: mov ecx, edx */
  ecx = edx;
L_e90159: /* e90159: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9015c: mov ebp, 1 */
  ebp = 0x1u;
/* e90161: jbe 0xe90165 */
  if ((cf | zf)) goto L_e90165;
L_e90163: /* e90163: mov ebp, ecx */
  ebp = ecx;
L_e90165: /* e90165: mov ecx, dword ptr [eax + 0x41e0] */
  ecx = R32((uint32_t)(eax + 0x41e0u));
/* e9016b: mov edx, dword ptr [eax + 0x4140] */
  edx = R32((uint32_t)(eax + 0x4140u));
/* e90171: xor esi, esi */
  esi = 0;
/* e90173: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e90175: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e90179: jle 0xe9022e */
  if ((zf || sf != of)) goto L_e9022e;
L_e9017f: /* e9017f: mov ecx, 1 */
  ecx = 0x1u;
/* e90184: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e90186: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* e90188: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* e9018a: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9018d: mov ebx, edx */
  ebx = edx;
/* e9018f: nop  */
L_e90190: /* e90190: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90196: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e90198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90199: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e9019b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9019c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9019d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe901a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e901a7: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e901ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e901af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e901b0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e901b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901b4: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe901bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901ba: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e901be: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e901c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e901c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e901c7: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e901c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901cb: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe901d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901d1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e901d5: mov ecx, dword ptr [eax + 0x40d0] */
  ecx = R32((uint32_t)(eax + 0x40d0u));
/* e901db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e901dd: je 0xe901ef */
  if (zf) goto L_e901ef;
L_e901df: /* e901df: mov edx, dword ptr [eax + 0x40cc] */
  edx = R32((uint32_t)(eax + 0x40ccu));
/* e901e5: xor ecx, ecx */
  ecx = 0;
/* e901e7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e901e9: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e901ec: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e901ed: jmp 0xe901f1 */
  goto L_e901f1;
L_e901ef: /* e901ef: xor ecx, ecx */
  ecx = 0;
L_e901f1: /* e901f1: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e901f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e901f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e901fa: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e901fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901fe: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe90204u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90204: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90208: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9020e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e90210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e90211: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e90213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90215: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe9021bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9021b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9021f: mov ecx, dword ptr [eax + 0x41e0] */
  ecx = R32((uint32_t)(eax + 0x41e0u));
/* e90225: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e90226: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e90228: jl 0xe90190 */
  if ((sf != of)) goto L_e90190;
L_e9022e: /* e9022e: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* e90235: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* e9023c: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e90243: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e90245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90246: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e9024d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9024e: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e90255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90256: xor eax, eax */
  eax = 0;
/* e90258: xor esi, esi */
  esi = 0;
/* e9025a: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9025c: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9025f: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e90262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90263: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xe90269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90269: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9026d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9026e: lea ecx, [eax + 0x2fc9c] */
  ecx = (uint32_t)(eax + 0x2fc9cu);
/* e90274: call 0xe961d0 */
  esp -= 4; W32(esp, 0xe90279u); SPILL(); f_e961d0(); if (g_unwind) return; RELOAD();
/* e90279: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e9027f: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90281: je 0xe902b9 */
  if (zf) goto L_e902b9;
L_e90283: /* e90283: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e9028a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9028c: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe90292u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90292: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90296: mov dword ptr [ecx + 0x46f0], eax */
  W32((uint32_t)(ecx + 0x46f0u), eax);
/* e9029c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e902a0: mov eax, dword ptr [edx + 0x46f0] */
  eax = R32((uint32_t)(edx + 0x46f0u));
/* e902a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e902a7: call dword ptr [0xeae36c] */
  esp -= 4; W32(esp, 0xe902adu); SPILL(); call_ind(R32(0xeae36cu)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* e902ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e902b1: mov dword ptr [ecx + 0x46ec], eax */
  W32((uint32_t)(ecx + 0x46ecu), eax);
/* e902b7: jmp 0xe902cd */
  goto L_e902cd;
L_e902b9: /* e902b9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e902bd: mov dword ptr [edx + 0x46f0], esi */
  W32((uint32_t)(edx + 0x46f0u), esi);
/* e902c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e902c7: mov dword ptr [eax + 0x46ec], esi */
  W32((uint32_t)(eax + 0x46ecu), esi);
L_e902cd: /* e902cd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e902d1: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* e902d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e902da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e902db: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xe902e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e902e1: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e902e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e902e9: mov dword ptr [ecx + 0x158], esi */
  W32((uint32_t)(ecx + 0x158u), esi);
/* e902ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e902f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e902f1: mov eax, 1 */
  eax = 0x1u;
/* e902f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e902f7: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e902fa: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e90320(void) {
  LOAD_REGS();
L_e90320: /* e90320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e90322: push 0xeace3d */
  { uint32_t v = 0xeace3du; esp -= 4; W32(esp, v); }
/* e90327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9032d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9032e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e90335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90336: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90337: mov esi, ecx */
  esi = ecx;
/* e90339: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e9033d: call dword ptr [0xeae204] */
  esp -= 4; W32(esp, 0xe90343u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* e90343: mov eax, dword ptr [0xeae200] */
  eax = R32((uint32_t)(0xeae200u));
/* e90348: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* e9034b: xor eax, eax */
  eax = 0;
/* e9034d: mov dword ptr [esi], 0xeae390 */
  W32((uint32_t)(esi), 0xeae390u);
/* e90353: mov dword ptr [esi + 0x28], 0xeae388 */
  W32((uint32_t)(esi + 0x28u), 0xeae388u);
/* e9035a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e9035e: mov dword ptr [esi + 0x4654], eax */
  W32((uint32_t)(esi + 0x4654u), eax);
/* e90364: mov dword ptr [esi + 0x4658], eax */
  W32((uint32_t)(esi + 0x4658u), eax);
/* e9036a: mov dword ptr [esi + 0x465c], eax */
  W32((uint32_t)(esi + 0x465cu), eax);
/* e90370: mov dword ptr [esi + 0x467c], eax */
  W32((uint32_t)(esi + 0x467cu), eax);
/* e90376: mov dword ptr [esi + 0x4680], eax */
  W32((uint32_t)(esi + 0x4680u), eax);
/* e9037c: mov dword ptr [esi + 0x4684], eax */
  W32((uint32_t)(esi + 0x4684u), eax);
/* e90382: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90383: lea ecx, [esi + 0x46f4] */
  ecx = (uint32_t)(esi + 0x46f4u);
/* e90389: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* e9038e: call 0xe94820 */
  esp -= 4; W32(esp, 0xe90393u); SPILL(); f_e94820(); if (g_unwind) return; RELOAD();
/* e90393: lea ecx, [esi + 0x2fc90] */
  ecx = (uint32_t)(esi + 0x2fc90u);
/* e90399: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* e9039e: call dword ptr [0xeae2b0] */
  esp -= 4; W32(esp, 0xe903a4u); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* e903a4: push 0xe8 */
  { uint32_t v = 0xe8u; esp -= 4; W32(esp, v); }
/* e903a9: lea ecx, [esi + 0x30ee8] */
  ecx = (uint32_t)(esi + 0x30ee8u);
/* e903af: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* e903b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e903b5: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* e903ba: call dword ptr [0xeae1ac] */
  esp -= 4; W32(esp, 0xe903c0u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* e903c0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e903c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e903c7: mov eax, esi */
  eax = esi;
/* e903c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e903ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e903d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e903d4: ret  */
  esp += 4; SPILL(); return;
}

void f_e903e0(void) {
  LOAD_REGS();
L_e903e0: /* e903e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e903e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e903e5: push 0xeafaf0 */
  { uint32_t v = 0xeafaf0u; esp -= 4; W32(esp, v); }
/* e903ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e903ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e903ed: mov esi, ecx */
  esi = ecx;
/* e903ef: call 0xe9a910 */
  esp -= 4; W32(esp, 0xe903f4u); SPILL(); f_e9a910(); if (g_unwind) return; RELOAD();
/* e903f4: mov eax, esi */
  eax = esi;
/* e903f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e903f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90400(void) {
  LOAD_REGS();
L_e90400: /* e90400: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e90404: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90405: push 0xeafd70 */
  { uint32_t v = 0xeafd70u; esp -= 4; W32(esp, v); }
/* e9040a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9040c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9040d: mov esi, ecx */
  esi = ecx;
/* e9040f: call 0xe9a910 */
  esp -= 4; W32(esp, 0xe90414u); SPILL(); f_e9a910(); if (g_unwind) return; RELOAD();
/* e90414: mov eax, esi */
  eax = esi;
/* e90416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90417: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90420(void) {
  LOAD_REGS();
L_e90420: /* e90420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e90424: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90425: push 0xeafea0 */
  { uint32_t v = 0xeafea0u; esp -= 4; W32(esp, v); }
/* e9042a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9042c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9042d: mov esi, ecx */
  esi = ecx;
/* e9042f: call 0xe9a910 */
  esp -= 4; W32(esp, 0xe90434u); SPILL(); f_e9a910(); if (g_unwind) return; RELOAD();
/* e90434: mov eax, esi */
  eax = esi;
/* e90436: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90437: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90440(void) {
  LOAD_REGS();
L_e90440: /* e90440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90441: mov esi, ecx */
  esi = ecx;
/* e90443: call dword ptr [0xeae1b0] */
  esp -= 4; W32(esp, 0xe90449u); SPILL(); f_4e2fd1(); if (g_unwind) return; /* Core!??1UIntProperty@@UAE@XZ */ RELOAD();
/* e90449: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9044e: je 0xe9045c */
  if (zf) goto L_e9045c;
L_e90450: /* e90450: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* e90452: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90453: call dword ptr [0xeae09c] */
  esp -= 4; W32(esp, 0xe90459u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* e90459: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9045c: /* e9045c: mov eax, esi */
  eax = esi;
/* e9045e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9045f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90470(void) {
  LOAD_REGS();
L_e90470: /* e90470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90471: mov esi, ecx */
  esi = ecx;
/* e90473: call dword ptr [0xeae1b4] */
  esp -= 4; W32(esp, 0xe90479u); SPILL(); f_4e1988(); if (g_unwind) return; /* Core!??1UBoolProperty@@UAE@XZ */ RELOAD();
/* e90479: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9047e: je 0xe9048c */
  if (zf) goto L_e9048c;
L_e90480: /* e90480: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* e90482: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90483: call dword ptr [0xeae09c] */
  esp -= 4; W32(esp, 0xe90489u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* e90489: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9048c: /* e9048c: mov eax, esi */
  eax = esi;
/* e9048e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9048f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e904a0(void) {
  LOAD_REGS();
L_e904a0: /* e904a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e904a1: mov esi, ecx */
  esi = ecx;
/* e904a3: call dword ptr [0xeae1b8] */
  esp -= 4; W32(esp, 0xe904a9u); SPILL(); f_4e38a5(); if (g_unwind) return; /* Core!??1UFloatProperty@@UAE@XZ */ RELOAD();
/* e904a9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e904ae: je 0xe904bc */
  if (zf) goto L_e904bc;
L_e904b0: /* e904b0: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* e904b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e904b3: call dword ptr [0xeae09c] */
  esp -= 4; W32(esp, 0xe904b9u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* e904b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e904bc: /* e904bc: mov eax, esi */
  eax = esi;
/* e904be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e904bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e904d0(void) {
  LOAD_REGS();
L_e904d0: /* e904d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e904d1: mov esi, dword ptr [ecx + 0x40] */
  esi = R32((uint32_t)(ecx + 0x40u));
/* e904d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e904d5: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* e904d9: cmp esi, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e904dc: je 0xe904e5 */
  if (zf) goto L_e904e5;
L_e904de: /* e904de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e904df: xor eax, eax */
  eax = 0;
/* e904e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e904e2: ret 4 */
  esp += 8; SPILL(); return;
L_e904e5: /* e904e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e904e6: xor edx, edx */
  edx = 0;
/* e904e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e904ea: jle 0xe9050a */
  if ((zf || sf != of)) goto L_e9050a;
L_e904ec: /* e904ec: mov ebx, edi */
  ebx = edi;
/* e904ee: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* e904f1: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_e904f3: /* e904f3: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* e904f6: cmp ecx, dword ptr [edi + edx*8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + edx*8)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e904f9: jne 0xe90515 */
  if (!zf) goto L_e90515;
L_e904fb: /* e904fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e904fd: cmp ecx, dword ptr [ebx + eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90500: jne 0xe90515 */
  if (!zf) goto L_e90515;
L_e90502: /* e90502: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e90503: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e90506: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e90508: jl 0xe904f3 */
  if ((sf != of)) goto L_e904f3;
L_e9050a: /* e9050a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9050b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9050c: mov eax, 1 */
  eax = 0x1u;
/* e90511: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90512: ret 4 */
  esp += 8; SPILL(); return;
L_e90515: /* e90515: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90516: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90517: xor eax, eax */
  eax = 0;
/* e90519: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9051a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90520(void) {
  LOAD_REGS();
L_e90520: /* e90520: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90521: mov ebx, dword ptr [ecx + 0x440] */
  ebx = R32((uint32_t)(ecx + 0x440u));
/* e90527: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e90528: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* e9052c: cmp ebx, dword ptr [ebp + 0x440] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x440u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90532: je 0xe9053b */
  if (zf) goto L_e9053b;
L_e90534: /* e90534: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e90535: xor eax, eax */
  eax = 0;
/* e90537: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90538: ret 4 */
  esp += 8; SPILL(); return;
L_e9053b: /* e9053b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9053c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9053d: xor edi, edi */
  edi = 0;
/* e9053f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e90541: jle 0xe9055e */
  if ((zf || sf != of)) goto L_e9055e;
L_e90543: /* e90543: mov esi, ecx */
  esi = ecx;
/* e90545: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_e90547: /* e90547: lea eax, [esi + ebp] */
  eax = (uint32_t)(esi + ebp);
/* e9054a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9054b: mov ecx, esi */
  ecx = esi;
/* e9054d: call 0xe904d0 */
  esp -= 4; W32(esp, 0xe90552u); SPILL(); f_e904d0(); if (g_unwind) return; RELOAD();
/* e90552: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e90554: je 0xe9056a */
  if (zf) goto L_e9056a;
L_e90556: /* e90556: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e90557: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e9055a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9055c: jl 0xe90547 */
  if ((sf != of)) goto L_e90547;
L_e9055e: /* e9055e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9055f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90560: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e90561: mov eax, 1 */
  eax = 0x1u;
/* e90566: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90567: ret 4 */
  esp += 8; SPILL(); return;
L_e9056a: /* e9056a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9056b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9056c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9056d: xor eax, eax */
  eax = 0;
/* e9056f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90570: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90580(void) {
  LOAD_REGS();
L_e90580: /* e90580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e90584: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e90588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90589: mov esi, ecx */
  esi = ecx;
/* e9058b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9058f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90590: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e90593: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e90596: mov dword ptr [esi + 0x2b490], edx */
  W32((uint32_t)(esi + 0x2b490u), edx);
/* e9059c: xor edi, edi */
  edi = 0;
/* e9059e: mov dword ptr [esi + 0x2b494], edi */
  W32((uint32_t)(esi + 0x2b494u), edi);
/* e905a4: mov dword ptr [esi + 0x2b48c], ecx */
  W32((uint32_t)(esi + 0x2b48cu), ecx);
/* e905aa: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e905ae: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* e905b2: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e905b8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e905ba: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* e905be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e905bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e905c0: call dword ptr [ecx + 0x80] */
  { uint32_t t = R32((uint32_t)(ecx + 0x80u)); esp -= 4; W32(esp, 0xe905c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e905c6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e905c9: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e905cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e905d1: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* e905d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e905d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e905d7: call dword ptr [ecx + 0x84] */
  { uint32_t t = R32((uint32_t)(ecx + 0x84u)); esp -= 4; W32(esp, 0xe905ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e905dd: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e905e3: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* e905e6: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e905ec: mov dword ptr [ecx + 0xc], edi */
  W32((uint32_t)(ecx + 0xcu), edi);
/* e905ef: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* e905f2: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* e905f8: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e905fe: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* e90601: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* e90604: mov ecx, dword ptr [edx + 0x8c] */
  ecx = R32((uint32_t)(edx + 0x8cu));
/* e9060a: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e90610: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e90613: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e90619: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9061d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* e90620: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e90626: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9062a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9062c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e9062e: mov ecx, esi */
  ecx = esi;
/* e90630: mov dword ptr [esi + 0x2b46c], edi */
  W32((uint32_t)(esi + 0x2b46cu), edi);
/* e90636: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe90638u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90638: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90639: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9063a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e90640(void) {
  LOAD_REGS();
L_e90640: /* e90640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90641: mov esi, ecx */
  esi = ecx;
/* e90643: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e90645: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xe90648u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90648: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e9064e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e90650: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e90652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90653: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe90656u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90656: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e9065c: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* e90662: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e90668: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e9066b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9066d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9066e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe90671u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90671: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e90677: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* e9067e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9067f: ret  */
  esp += 4; SPILL(); return;
}

void f_e90680(void) {
  LOAD_REGS();
L_e90680: /* e90680: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e90683: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e90687: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90688: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e9068c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9068d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* e90691: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90693: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* e90697: mov esi, ecx */
  esi = ecx;
/* e90699: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e9069c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e906a0: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e906a4: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* e906a8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e906ac: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e906b4: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* e906bc: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e906c2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e906c4: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* e906c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e906c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e906ca: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xe906d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e906d0: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e906d6: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e906d9: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e906df: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* e906e2: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e906e8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e906ec: mov dword ptr [ecx + 0x10], ebp */
  W32((uint32_t)(ecx + 0x10u), ebp);
/* e906ef: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e906f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e906f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e906f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e906f8: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* e906fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e906fc: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e906ff: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e90710(void) {
  LOAD_REGS();
L_e90710: /* e90710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e90714: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e90716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90718: mov edi, ecx */
  edi = ecx;
/* e9071a: mov esi, 1 */
  esi = 0x1u;
/* e9071f: jne 0xe90728 */
  if (!zf) goto L_e90728;
L_e90721: /* e90721: mov esi, 2 */
  esi = 0x2u;
/* e90726: jmp 0xe9073e */
  goto L_e9073e;
L_e90728: /* e90728: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9072b: jne 0xe90734 */
  if (!zf) goto L_e90734;
L_e9072d: /* e9072d: mov esi, 3 */
  esi = 0x3u;
/* e90732: jmp 0xe9073e */
  goto L_e9073e;
L_e90734: /* e90734: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90737: jne 0xe9073e */
  if (!zf) goto L_e9073e;
L_e90739: /* e90739: mov esi, 1 */
  esi = 0x1u;
L_e9073e: /* e9073e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e90741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90742: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e90744: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9074a: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe9074fu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e9074f: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e90755: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90756: mov dword ptr [eax + 0x188], esi */
  W32((uint32_t)(eax + 0x188u), esi);
/* e9075c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9075d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90760(void) {
  LOAD_REGS();
L_e90760: /* e90760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90761: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90762: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* e90766: mov esi, ecx */
  esi = ecx;
/* e90768: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e9076b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9076c: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* e9076e: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e90774: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe90779u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e90779: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e9077f: mov dword ptr [eax + 0x1b4], edi */
  W32((uint32_t)(eax + 0x1b4u), edi);
/* e90785: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90786: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90787: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90790(void) {
  LOAD_REGS();
L_e90790: /* e90790: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e90794: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* e90798: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9079a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e9079d: jp 0xe907c8 */
  if (pf) goto L_e907c8;
L_e9079f: /* e9079f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e907a3: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* e907a7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e907a9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e907ab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e907ad: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e907af: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e907b1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* e907b3: fmul dword ptr [0xeb278c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb278cu)));
/* e907b9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e907bb: fadd dword ptr [0xeaed44] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed44u)));
/* e907c1: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* e907c3: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* e907c5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e907c7: ret  */
  esp += 4; SPILL(); return;
L_e907c8: /* e907c8: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
/* e907ce: ret  */
  esp += 4; SPILL(); return;
}

void f_e907d0(void) {
  LOAD_REGS();
L_e907d0: /* e907d0: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e907d6: mov edx, dword ptr [eax + 0x54c] */
  edx = R32((uint32_t)(eax + 0x54cu));
/* e907dc: mov edx, dword ptr [eax + edx*4 + 0x528] */
  edx = R32((uint32_t)(eax + edx*4 + 0x528u));
/* e907e3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e907e7: mov dword ptr [edx + 0x20], eax */
  W32((uint32_t)(edx + 0x20u), eax);
/* e907ea: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e907ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e907ee: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e907f0: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e907f6: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe907fbu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e907fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90800(void) {
  LOAD_REGS();
L_e90800: /* e90800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e90804: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e90806: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90807: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90808: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90809: mov ebx, ecx */
  ebx = ecx;
/* e9080b: jne 0xe90838 */
  if (!zf) goto L_e90838;
L_e9080d: /* e9080d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e90811: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* e90814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90815: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e90817: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9081d: call 0xe95e80 */
  esp -= 4; W32(esp, 0xe90822u); SPILL(); f_e95e80(); if (g_unwind) return; RELOAD();
/* e90822: mov edi, dword ptr [ebx + 0x2b00c] */
  edi = R32((uint32_t)(ebx + 0x2b00cu));
/* e90828: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9082b: mov ecx, 0x10 */
  ecx = 0x10u;
/* e90830: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e90832: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90833: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90834: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90835: ret 8 */
  esp += 12; SPILL(); return;
L_e90838: /* e90838: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9083b: jne 0xe9084f */
  if (!zf) goto L_e9084f;
L_e9083d: /* e9083d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90841: mov edi, dword ptr [ebx + 0x2b00c] */
  edi = R32((uint32_t)(ebx + 0x2b00cu));
/* e90847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90848: add edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9084b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e9084d: jmp 0xe90867 */
  goto L_e90867;
L_e9084f: /* e9084f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90852: jne 0xe9087e */
  if (!zf) goto L_e9087e;
L_e90854: /* e90854: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90858: mov edi, dword ptr [ebx + 0x2b00c] */
  edi = R32((uint32_t)(ebx + 0x2b00cu));
/* e9085e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9085f: add edi, 0xb8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e90865: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
L_e90867: /* e90867: mov esi, eax */
  esi = eax;
/* e90869: mov ecx, 0x10 */
  ecx = 0x10u;
/* e9086e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e90870: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* e90873: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e90879: call 0xe95e80 */
  esp -= 4; W32(esp, 0xe9087eu); SPILL(); f_e95e80(); if (g_unwind) return; RELOAD();
L_e9087e: /* e9087e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9087f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90880: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90881: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e90890(void) {
  LOAD_REGS();
L_e90890: /* e90890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90891: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90892: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* e90896: mov esi, ecx */
  esi = ecx;
/* e90898: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e9089a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9089b: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xe9089eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9089e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e908a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e908a2: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e908a4: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e908aa: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe908afu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e908af: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e908b5: mov dword ptr [ecx + 0x1c], edi */
  W32((uint32_t)(ecx + 0x1cu), edi);
/* e908b8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e908bc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e908bf: mov edx, edi */
  edx = edi;
/* e908c1: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e908c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e908c8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e908ca: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e908d0: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe908d5u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e908d5: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e908db: mov dword ptr [eax + 0x2c], edi */
  W32((uint32_t)(eax + 0x2cu), edi);
/* e908de: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e908e2: mov ecx, edi */
  ecx = edi;
/* e908e4: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e908ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e908eb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e908ee: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e908f0: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e908f6: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe908fbu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e908fb: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e90901: mov dword ptr [edx + 0x30], edi */
  W32((uint32_t)(edx + 0x30u), edi);
/* e90904: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e90908: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e9090a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9090b: mov ecx, esi */
  ecx = esi;
/* e9090d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xe90910u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90910: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e90913: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90914: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e90916: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9091c: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe90921u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e90921: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e90927: mov dword ptr [ecx + 0x20], edi */
  W32((uint32_t)(ecx + 0x20u), edi);
/* e9092a: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* e9092e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e90930: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90931: mov ecx, esi */
  ecx = esi;
/* e90933: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe90936u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90936: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e90939: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9093a: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e9093c: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e90942: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe90947u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e90947: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e9094d: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* e90950: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e90954: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e90956: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90957: mov ecx, esi */
  ecx = esi;
/* e90959: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe9095cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9095c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e9095f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90960: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e90962: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e90968: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe9096du); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e9096d: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e90973: mov dword ptr [eax + 0x28], edi */
  W32((uint32_t)(eax + 0x28u), edi);
/* e90976: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* e9097a: mov ecx, edi */
  ecx = edi;
/* e9097c: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e90982: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90983: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e90986: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e90988: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9098e: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe90993u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e90993: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e90999: mov dword ptr [edx + 0x34], edi */
  W32((uint32_t)(edx + 0x34u), edi);
/* e9099c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9099d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9099e: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_e909b0(void) {
  LOAD_REGS();
L_e909b0: /* e909b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e909b4: mov dword ptr [ecx + 0x2b47c], eax */
  W32((uint32_t)(ecx + 0x2b47cu), eax);
/* e909ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e909c0(void) {
  LOAD_REGS();
L_e909c0: /* e909c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e909c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e909c2: mov ebp, ecx */
  ebp = ecx;
/* e909c4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e909c8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e909ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e909cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e909cc: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe909ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e909ce: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e909d1: mov ebx, edx */
  ebx = edx;
/* e909d3: mov edi, eax */
  edi = eax;
/* e909d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e909d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e909d7: call 0xe8bdd0 */
  esp -= 4; W32(esp, 0xe909dcu); SPILL(); f_e8bdd0(); if (g_unwind) return; RELOAD();
/* e909dc: mov esi, eax */
  esi = eax;
/* e909de: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e909e0: jne 0xe90a0c */
  if (!zf) goto L_e90a0c;
L_e909e2: /* e909e2: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e909e8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e909ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e909ec: push 0xeb2790 */
  { uint32_t v = 0xeb2790u; esp -= 4; W32(esp, v); }
/* e909f1: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* e909f3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe909f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e909f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e909f7: je 0xe90a0a */
  if (zf) goto L_e90a0a;
L_e909f9: /* e909f9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e909fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e909fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e909fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e909ff: mov ecx, eax */
  ecx = eax;
/* e90a01: call 0xe9aaa0 */
  esp -= 4; W32(esp, 0xe90a06u); SPILL(); f_e9aaa0(); if (g_unwind) return; RELOAD();
/* e90a06: mov esi, eax */
  esi = eax;
/* e90a08: jmp 0xe90a0c */
  goto L_e90a0c;
L_e90a0a: /* e90a0a: xor esi, esi */
  esi = 0;
L_e90a0c: /* e90a0c: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e90a10: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e90a12: mov ecx, edi */
  ecx = edi;
/* e90a14: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe90a17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90a17: cmp dword ptr [esi + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90a1a: je 0xe90a24 */
  if (zf) goto L_e90a24;
L_e90a1c: /* e90a1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90a1d: mov ecx, esi */
  ecx = esi;
/* e90a1f: call 0xe98b30 */
  esp -= 4; W32(esp, 0xe90a24u); SPILL(); f_e98b30(); if (g_unwind) return; RELOAD();
L_e90a24: /* e90a24: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e90a27: mov ecx, dword ptr [eax + 0x46a8] */
  ecx = R32((uint32_t)(eax + 0x46a8u));
/* e90a2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90a2e: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* e90a31: mov eax, esi */
  eax = esi;
/* e90a33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90a34: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e90a35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90a36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e90a40(void) {
  LOAD_REGS();
L_e90a40: /* e90a40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e90a42: push 0xeace59 */
  { uint32_t v = 0xeace59u; esp -= 4; W32(esp, v); }
/* e90a47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e90a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90a4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e90a55: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e90a58: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e90a5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90a5d: xor esi, esi */
  esi = 0;
/* e90a5f: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e90a62: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90a65: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e90a69: jne 0xe90acb */
  if (!zf) goto L_e90acb;
L_e90a6b: /* e90a6b: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* e90a6f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e90a73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90a74: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e90a78: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* e90a79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90a7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90a7b: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* e90a7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90a80: call 0xe90b90 */
  esp -= 4; W32(esp, 0xe90a85u); SPILL(); f_e90b90(); if (g_unwind) return; RELOAD();
/* e90a85: mov ecx, eax */
  ecx = eax;
/* e90a87: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* e90a8b: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90a91u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90a91: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e90a95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90a96: push 0xeb2814 */
  { uint32_t v = 0xeb2814u; esp -= 4; W32(esp, v); }
/* e90a9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90a9c: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90aa2u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90aa2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90aa5: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* e90aa9: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* e90ab1: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90ab7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90ab7: mov eax, esi */
  eax = esi;
/* e90ab9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90aba: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90abe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e90ac5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90ac8: ret 0x14 */
  esp += 24; SPILL(); return;
L_e90acb: /* e90acb: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90ace: jne 0xe90afc */
  if (!zf) goto L_e90afc;
L_e90ad0: /* e90ad0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e90ad4: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e90ad8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90ad9: push 0xeb27fc */
  { uint32_t v = 0xeb27fcu; esp -= 4; W32(esp, v); }
/* e90ade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90adf: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90ae5u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90ae5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90ae8: mov eax, esi */
  eax = esi;
/* e90aea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90aeb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90aef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e90af6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90af9: ret 0x14 */
  esp += 24; SPILL(); return;
L_e90afc: /* e90afc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90afe: jne 0xe90b07 */
  if (!zf) goto L_e90b07;
L_e90b00: /* e90b00: push 0xeb27ec */
  { uint32_t v = 0xeb27ecu; esp -= 4; W32(esp, v); }
/* e90b05: jmp 0xe90b64 */
  goto L_e90b64;
L_e90b07: /* e90b07: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90b0a: jne 0xe90b13 */
  if (!zf) goto L_e90b13;
L_e90b0c: /* e90b0c: push 0xeb27d8 */
  { uint32_t v = 0xeb27d8u; esp -= 4; W32(esp, v); }
/* e90b11: jmp 0xe90b64 */
  goto L_e90b64;
L_e90b13: /* e90b13: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90b16: jne 0xe90b5f */
  if (!zf) goto L_e90b5f;
L_e90b18: /* e90b18: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e90b1c: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* e90b1f: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e90b23: mov ecx, eax */
  ecx = eax;
/* e90b25: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e90b28: movzx edx, ch */
  edx = (uint32_t)(((ecx >> 8) & 0xffu));
/* e90b2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90b2c: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* e90b2f: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e90b33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90b34: movzx eax, ah */
  eax = (uint32_t)(((eax >> 8) & 0xffu));
/* e90b37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90b38: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* e90b3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90b3c: push 0xeb27ac */
  { uint32_t v = 0xeb27acu; esp -= 4; W32(esp, v); }
/* e90b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90b42: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90b48u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90b48: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90b4b: mov eax, esi */
  eax = esi;
/* e90b4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90b4e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90b52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e90b59: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90b5c: ret 0x14 */
  esp += 24; SPILL(); return;
L_e90b5f: /* e90b5f: push 0xeb27a8 */
  { uint32_t v = 0xeb27a8u; esp -= 4; W32(esp, v); }
L_e90b64: /* e90b64: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* e90b68: mov ecx, esi */
  ecx = esi;
/* e90b6a: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe90b70u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e90b70: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e90b74: mov eax, esi */
  eax = esi;
/* e90b76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90b77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e90b7e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90b81: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_e90b90(void) {
  LOAD_REGS();
L_e90b90: /* e90b90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e90b92: push 0xeacf74 */
  { uint32_t v = 0xeacf74u; esp -= 4; W32(esp, v); }
/* e90b97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e90b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90b9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e90ba5: sub esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e90bab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e90bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90bad: mov esi, dword ptr [esp + 0x158] */
  esi = R32((uint32_t)(esp + 0x158u));
/* e90bb4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e90bb6: mov ebp, ecx */
  ebp = ecx;
/* e90bb8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e90bc0: jge 0xe90bdb */
  if ((sf == of)) goto L_e90bdb;
L_e90bc2: /* e90bc2: mov esi, dword ptr [esp + 0x150] */
  esi = R32((uint32_t)(esp + 0x150u));
/* e90bc9: push 0xeb27ec */
  { uint32_t v = 0xeb27ecu; esp -= 4; W32(esp, v); }
/* e90bce: mov ecx, esi */
  ecx = esi;
/* e90bd0: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe90bd6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e90bd6: jmp 0xe913f1 */
  goto L_e913f1;
L_e90bdb: /* e90bdb: mov eax, esi */
  eax = esi;
/* e90bdd: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e90be3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90be4: mov ebx, dword ptr [esp + 0x160] */
  ebx = R32((uint32_t)(esp + 0x160u));
/* e90beb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e90bed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90bee: mov edi, dword ptr [esp + 0x15c] */
  edi = R32((uint32_t)(esp + 0x15cu));
/* e90bf5: lea eax, [eax + edi + 0x38] */
  eax = (uint32_t)(eax + edi + 0x38u);
/* e90bf9: je 0xe90c0e */
  if (zf) goto L_e90c0e;
L_e90bfb: /* e90bfb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* e90bfe: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* e90c01: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* e90c04: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* e90c08: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e90c0c: jmp 0xe90c1f */
  goto L_e90c1f;
L_e90c0e: /* e90c0e: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* e90c11: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* e90c14: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* e90c17: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* e90c1b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_e90c1f: /* e90c1f: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e90c22: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e90c25: ja 0xe913db */
  if ((!cf && !zf)) goto L_e913db;
L_e90c2b: /* e90c2b: jmp dword ptr [ecx*4 + 0xe9140c] */
  switch (R32((uint32_t)(ecx*4 + 0xe9140cu))) {
    case 0xe90c32u: goto L_e90c32;
    case 0xe90c4eu: goto L_e90c4e;
    case 0xe90c66u: goto L_e90c66;
    case 0xe90cffu: goto L_e90cff;
    case 0xe90d98u: goto L_e90d98;
    case 0xe90e34u: goto L_e90e34;
    case 0xe90ed3u: goto L_e90ed3;
    case 0xe90f6cu: goto L_e90f6c;
    case 0xe9100bu: goto L_e9100b;
    case 0xe9109eu: goto L_e9109e;
    case 0xe91176u: goto L_e91176;
    case 0xe91217u: goto L_e91217;
    case 0xe91328u: goto L_e91328;
    case 0xe913dbu: goto L_e913db;
    default: guest_badjump(0xe90c2b, R32((uint32_t)(ecx*4 + 0xe9140cu))); return;
  }
L_e90c32: /* e90c32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e90c36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90c37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90c39: mov esi, dword ptr [esp + 0x164] */
  esi = R32((uint32_t)(esp + 0x164u));
/* e90c40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90c42: mov ecx, ebp */
  ecx = ebp;
/* e90c44: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90c49u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90c49: jmp 0xe913ef */
  goto L_e913ef;
L_e90c4e: /* e90c4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90c4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90c51: mov esi, dword ptr [esp + 0x164] */
  esi = R32((uint32_t)(esp + 0x164u));
/* e90c58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90c59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90c5a: mov ecx, ebp */
  ecx = ebp;
/* e90c5c: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90c61u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90c61: jmp 0xe913ef */
  goto L_e913ef;
L_e90c66: /* e90c66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90c67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90c69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90c6a: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* e90c6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90c6f: mov ecx, ebp */
  ecx = ebp;
/* e90c71: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90c76u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90c76: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e90c7a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90c7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90c7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90c81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90c82: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* e90c89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90c8a: mov ecx, ebp */
  ecx = ebp;
/* e90c8c: mov dword ptr [esp + 0x164], 0 */
  W32((uint32_t)(esp + 0x164u), 0x0u);
/* e90c97: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90c9cu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90c9c: mov esi, eax */
  esi = eax;
/* e90c9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90ca2: mov byte ptr [esp + 0x150], 1 */
  W8((uint32_t)(esp + 0x150u), 0x1u);
/* e90caa: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90cb0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90cb1: mov ecx, esi */
  ecx = esi;
/* e90cb3: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90cb9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90cb9: mov esi, dword ptr [esp + 0x15c] */
  esi = R32((uint32_t)(esp + 0x15cu));
/* e90cc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90cc1: push 0xeb29d8 */
  { uint32_t v = 0xeb29d8u; esp -= 4; W32(esp, v); }
/* e90cc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90cc7: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90ccdu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90ccd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90cd0: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e90cd7: mov byte ptr [esp + 0x150], 0 */
  W8((uint32_t)(esp + 0x150u), 0x0u);
/* e90cdf: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90ce5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90ce5: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* e90ce9: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e90cf4: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90cfau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90cfa: jmp 0xe913ef */
  goto L_e913ef;
L_e90cff: /* e90cff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90d01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90d02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90d03: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* e90d07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90d08: mov ecx, ebp */
  ecx = ebp;
/* e90d0a: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90d0fu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90d0f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e90d13: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90d17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90d18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90d19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90d1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90d1b: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* e90d22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90d23: mov ecx, ebp */
  ecx = ebp;
/* e90d25: mov dword ptr [esp + 0x164], 2 */
  W32((uint32_t)(esp + 0x164u), 0x2u);
/* e90d30: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90d35u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90d35: mov esi, eax */
  esi = eax;
/* e90d37: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90d3b: mov byte ptr [esp + 0x150], 3 */
  W8((uint32_t)(esp + 0x150u), 0x3u);
/* e90d43: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90d49u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90d49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90d4a: mov ecx, esi */
  ecx = esi;
/* e90d4c: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90d52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90d52: mov esi, dword ptr [esp + 0x15c] */
  esi = R32((uint32_t)(esp + 0x15cu));
/* e90d59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90d5a: push 0xeb29c0 */
  { uint32_t v = 0xeb29c0u; esp -= 4; W32(esp, v); }
/* e90d5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90d60: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90d66u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90d66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90d69: lea ecx, [esp + 0x100] */
  ecx = (uint32_t)(esp + 0x100u);
/* e90d70: mov byte ptr [esp + 0x150], 2 */
  W8((uint32_t)(esp + 0x150u), 0x2u);
/* e90d78: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90d7eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90d7e: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e90d82: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e90d8d: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90d93u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90d93: jmp 0xe913ef */
  goto L_e913ef;
L_e90d98: /* e90d98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90d99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90d9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90d9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90d9c: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* e90da3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90da4: mov ecx, ebp */
  ecx = ebp;
/* e90da6: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90dabu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90dab: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e90daf: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90db3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90db5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90db6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90db7: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* e90dbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90dbf: mov ecx, ebp */
  ecx = ebp;
/* e90dc1: mov dword ptr [esp + 0x164], 4 */
  W32((uint32_t)(esp + 0x164u), 0x4u);
/* e90dcc: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90dd1u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90dd1: mov esi, eax */
  esi = eax;
/* e90dd3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90dd7: mov byte ptr [esp + 0x150], 5 */
  W8((uint32_t)(esp + 0x150u), 0x5u);
/* e90ddf: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90de5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90de5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90de6: mov ecx, esi */
  ecx = esi;
/* e90de8: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90deeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90dee: mov esi, dword ptr [esp + 0x15c] */
  esi = R32((uint32_t)(esp + 0x15cu));
/* e90df5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90df6: push 0xeb29a8 */
  { uint32_t v = 0xeb29a8u; esp -= 4; W32(esp, v); }
/* e90dfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90dfc: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90e02u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90e02: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90e05: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* e90e0c: mov byte ptr [esp + 0x150], 4 */
  W8((uint32_t)(esp + 0x150u), 0x4u);
/* e90e14: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90e1au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90e1a: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* e90e1e: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e90e29: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90e2fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90e2f: jmp 0xe913ef */
  goto L_e913ef;
L_e90e34: /* e90e34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90e37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90e38: lea edx, [esp + 0x98] */
  edx = (uint32_t)(esp + 0x98u);
/* e90e3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90e40: mov ecx, ebp */
  ecx = ebp;
/* e90e42: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90e47u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90e47: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e90e4b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90e4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90e51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90e52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90e53: lea ecx, [esp + 0x140] */
  ecx = (uint32_t)(esp + 0x140u);
/* e90e5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90e5b: mov ecx, ebp */
  ecx = ebp;
/* e90e5d: mov dword ptr [esp + 0x164], 6 */
  W32((uint32_t)(esp + 0x164u), 0x6u);
/* e90e68: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90e6du); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90e6d: mov esi, eax */
  esi = eax;
/* e90e6f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90e73: mov byte ptr [esp + 0x150], 7 */
  W8((uint32_t)(esp + 0x150u), 0x7u);
/* e90e7b: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90e81u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90e81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90e82: mov ecx, esi */
  ecx = esi;
/* e90e84: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90e8au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90e8a: mov esi, dword ptr [esp + 0x15c] */
  esi = R32((uint32_t)(esp + 0x15cu));
/* e90e91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90e92: push 0xeb2998 */
  { uint32_t v = 0xeb2998u; esp -= 4; W32(esp, v); }
/* e90e97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90e98: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90e9eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90e9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90ea1: lea ecx, [esp + 0x130] */
  ecx = (uint32_t)(esp + 0x130u);
/* e90ea8: mov byte ptr [esp + 0x150], 6 */
  W8((uint32_t)(esp + 0x150u), 0x6u);
/* e90eb0: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90eb6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90eb6: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* e90ebd: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e90ec8: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90eceu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90ece: jmp 0xe913ef */
  goto L_e913ef;
L_e90ed3: /* e90ed3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90ed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90ed5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90ed6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90ed7: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* e90edb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90edc: mov ecx, ebp */
  ecx = ebp;
/* e90ede: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90ee3u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90ee3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e90ee7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90eeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90eec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90eee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90eef: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* e90ef6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90ef7: mov ecx, ebp */
  ecx = ebp;
/* e90ef9: mov dword ptr [esp + 0x164], 8 */
  W32((uint32_t)(esp + 0x164u), 0x8u);
/* e90f04: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90f09u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90f09: mov esi, eax */
  esi = eax;
/* e90f0b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90f0f: mov byte ptr [esp + 0x150], 9 */
  W8((uint32_t)(esp + 0x150u), 0x9u);
/* e90f17: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90f1du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90f1e: mov ecx, esi */
  ecx = esi;
/* e90f20: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90f26u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90f26: mov esi, dword ptr [esp + 0x15c] */
  esi = R32((uint32_t)(esp + 0x15cu));
/* e90f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90f2e: push 0xeb297c */
  { uint32_t v = 0xeb297cu; esp -= 4; W32(esp, v); }
/* e90f33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90f34: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90f3au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90f3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90f3d: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* e90f44: mov byte ptr [esp + 0x150], 8 */
  W8((uint32_t)(esp + 0x150u), 0x8u);
/* e90f4c: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90f52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90f52: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* e90f56: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e90f61: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90f67u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90f67: jmp 0xe913ef */
  goto L_e913ef;
L_e90f6c: /* e90f6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90f6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90f6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90f70: lea edx, [esp + 0xc8] */
  edx = (uint32_t)(esp + 0xc8u);
/* e90f77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90f78: mov ecx, ebp */
  ecx = ebp;
/* e90f7a: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90f7fu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90f7f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e90f83: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e90f87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90f88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90f89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90f8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e90f8b: lea ecx, [esp + 0x128] */
  ecx = (uint32_t)(esp + 0x128u);
/* e90f92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e90f93: mov ecx, ebp */
  ecx = ebp;
/* e90f95: mov dword ptr [esp + 0x164], 0xa */
  W32((uint32_t)(esp + 0x164u), 0xau);
/* e90fa0: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe90fa5u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e90fa5: mov esi, eax */
  esi = eax;
/* e90fa7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90fab: mov byte ptr [esp + 0x150], 0xb */
  W8((uint32_t)(esp + 0x150u), 0xbu);
/* e90fb3: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90fb9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90fb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90fba: mov ecx, esi */
  ecx = esi;
/* e90fbc: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe90fc2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e90fc2: mov esi, dword ptr [esp + 0x15c] */
  esi = R32((uint32_t)(esp + 0x15cu));
/* e90fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90fca: push 0xeb2954 */
  { uint32_t v = 0xeb2954u; esp -= 4; W32(esp, v); }
/* e90fcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90fd0: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe90fd6u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e90fd6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90fd9: lea ecx, [esp + 0x118] */
  ecx = (uint32_t)(esp + 0x118u);
/* e90fe0: mov byte ptr [esp + 0x150], 0xa */
  W8((uint32_t)(esp + 0x150u), 0xau);
/* e90fe8: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe90feeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e90fee: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* e90ff5: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e91000: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91006u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91006: jmp 0xe913ef */
  goto L_e913ef;
L_e9100b: /* e9100b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9100c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9100d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9100e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9100f: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* e91013: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91014: mov ecx, ebp */
  ecx = ebp;
/* e91016: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe9101bu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e9101b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e9101f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e91023: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91025: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91027: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* e9102b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9102c: mov ecx, ebp */
  ecx = ebp;
/* e9102e: mov dword ptr [esp + 0x164], 0xc */
  W32((uint32_t)(esp + 0x164u), 0xcu);
/* e91039: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe9103eu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e9103e: mov esi, eax */
  esi = eax;
/* e91040: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91044: mov byte ptr [esp + 0x150], 0xd */
  W8((uint32_t)(esp + 0x150u), 0xdu);
/* e9104c: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe91052u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e91052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91053: mov ecx, esi */
  ecx = esi;
/* e91055: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9105bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9105b: mov esi, dword ptr [esp + 0x15c] */
  esi = R32((uint32_t)(esp + 0x15cu));
/* e91062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91063: push 0xeb2944 */
  { uint32_t v = 0xeb2944u; esp -= 4; W32(esp, v); }
/* e91068: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91069: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe9106fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e9106f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91072: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* e91076: mov byte ptr [esp + 0x150], 0xc */
  W8((uint32_t)(esp + 0x150u), 0xcu);
/* e9107e: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91084u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91084: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* e91088: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e91093: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91099u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91099: jmp 0xe913ef */
  goto L_e913ef;
L_e9109e: /* e9109e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e910a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e910a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e910a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e910a3: lea edx, [esp + 0xa4] */
  edx = (uint32_t)(esp + 0xa4u);
/* e910aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e910ab: mov ecx, ebp */
  ecx = ebp;
/* e910ad: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe910b2u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e910b2: mov ebx, eax */
  ebx = eax;
/* e910b4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e910b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e910ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e910bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e910bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e910bd: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* e910c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e910c5: mov ecx, ebp */
  ecx = ebp;
/* e910c7: mov dword ptr [esp + 0x164], 0xe */
  W32((uint32_t)(esp + 0x164u), 0xeu);
/* e910d2: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe910d7u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e910d7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e910db: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e910df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e910e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e910e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e910e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e910e4: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* e910e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e910e9: mov ecx, ebp */
  ecx = ebp;
/* e910eb: mov byte ptr [esp + 0x164], 0xf */
  W8((uint32_t)(esp + 0x164u), 0xfu);
/* e910f3: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe910f8u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e910f8: mov esi, eax */
  esi = eax;
/* e910fa: mov ecx, ebx */
  ecx = ebx;
/* e910fc: mov byte ptr [esp + 0x150], 0x10 */
  W8((uint32_t)(esp + 0x150u), 0x10u);
/* e91104: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9110au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9110a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9110e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9110f: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe91115u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e91115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91116: mov ecx, esi */
  ecx = esi;
/* e91118: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9111eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9111e: mov esi, dword ptr [esp + 0x160] */
  esi = R32((uint32_t)(esp + 0x160u));
/* e91125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91126: push 0xeb2914 */
  { uint32_t v = 0xeb2914u; esp -= 4; W32(esp, v); }
/* e9112b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9112c: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe91132u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e91132: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91135: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* e91139: mov byte ptr [esp + 0x150], 0xf */
  W8((uint32_t)(esp + 0x150u), 0xfu);
/* e91141: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91147u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91147: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* e9114b: mov byte ptr [esp + 0x150], 0xe */
  W8((uint32_t)(esp + 0x150u), 0xeu);
/* e91153: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91159u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91159: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* e91160: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e9116b: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91171u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91171: jmp 0xe913ef */
  goto L_e913ef;
L_e91176: /* e91176: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91177: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91178: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9117a: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* e91181: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91182: mov ecx, ebp */
  ecx = ebp;
/* e91184: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe91189u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e91189: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e9118d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e91191: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91192: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91193: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91194: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91195: lea eax, [esp + 0xbc] */
  eax = (uint32_t)(esp + 0xbcu);
/* e9119c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9119d: mov ecx, ebp */
  ecx = ebp;
/* e9119f: mov dword ptr [esp + 0x164], 0x11 */
  W32((uint32_t)(esp + 0x164u), 0x11u);
/* e911aa: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe911afu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e911af: mov edi, eax */
  edi = eax;
/* e911b1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e911b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e911b6: mov byte ptr [esp + 0x154], 0x12 */
  W8((uint32_t)(esp + 0x154u), 0x12u);
/* e911be: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe911c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e911c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e911c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e911c6: mov ecx, edi */
  ecx = edi;
/* e911c8: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe911ceu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e911ce: mov esi, dword ptr [esp + 0x164] */
  esi = R32((uint32_t)(esp + 0x164u));
/* e911d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e911d6: push 0xeb28b8 */
  { uint32_t v = 0xeb28b8u; esp -= 4; W32(esp, v); }
/* e911db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e911dc: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe911e2u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e911e2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e911e5: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* e911ec: mov byte ptr [esp + 0x150], 0x11 */
  W8((uint32_t)(esp + 0x150u), 0x11u);
/* e911f4: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe911fau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e911fa: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* e91201: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e9120c: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91212u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91212: jmp 0xe913ef */
  goto L_e913ef;
L_e91217: /* e91217: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e91219: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* e9121c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9121d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9121e: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* e91225: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91226: mov ecx, ebp */
  ecx = ebp;
/* e91228: call 0xe90b90 */
  esp -= 4; W32(esp, 0xe9122du); SPILL(); f_e90b90(); if (g_unwind) return; RELOAD();
/* e9122d: mov ecx, eax */
  ecx = eax;
/* e9122f: mov dword ptr [esp + 0x150], 0x13 */
  W32((uint32_t)(esp + 0x150u), 0x13u);
/* e9123a: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe91240u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e91240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91241: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* e91245: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe9124bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e9124b: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* e91252: mov byte ptr [esp + 0x150], 0x15 */
  W8((uint32_t)(esp + 0x150u), 0x15u);
/* e9125a: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91260u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91260: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91264: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91267: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91268: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* e9126f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91270: mov ecx, ebp */
  ecx = ebp;
/* e91272: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe91277u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e91277: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e9127b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9127f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91280: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91283: lea eax, [esp + 0x104] */
  eax = (uint32_t)(esp + 0x104u);
/* e9128a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9128b: mov ecx, ebp */
  ecx = ebp;
/* e9128d: mov byte ptr [esp + 0x164], 0x16 */
  W8((uint32_t)(esp + 0x164u), 0x16u);
/* e91295: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe9129au); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e9129a: mov esi, eax */
  esi = eax;
/* e9129c: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e912a0: mov byte ptr [esp + 0x150], 0x17 */
  W8((uint32_t)(esp + 0x150u), 0x17u);
/* e912a8: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe912aeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e912ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e912b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e912b3: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe912b9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e912b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e912ba: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e912be: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe912c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e912c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e912c5: mov ecx, esi */
  ecx = esi;
/* e912c7: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe912cdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e912cd: mov esi, dword ptr [esp + 0x164] */
  esi = R32((uint32_t)(esp + 0x164u));
/* e912d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e912d5: push 0xeb287c */
  { uint32_t v = 0xeb287cu; esp -= 4; W32(esp, v); }
/* e912da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e912db: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe912e1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e912e1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e912e4: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* e912eb: mov byte ptr [esp + 0x150], 0x16 */
  W8((uint32_t)(esp + 0x150u), 0x16u);
/* e912f3: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe912f9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e912f9: lea ecx, [esp + 0x10c] */
  ecx = (uint32_t)(esp + 0x10cu);
/* e91300: mov byte ptr [esp + 0x150], 0x15 */
  W8((uint32_t)(esp + 0x150u), 0x15u);
/* e91308: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9130eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e9130e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e91312: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e9131d: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91323u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e91323: jmp 0xe913ef */
  goto L_e913ef;
L_e91328: /* e91328: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9132a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9132b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9132c: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* e91333: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91334: mov ecx, ebp */
  ecx = ebp;
/* e91336: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe9133bu); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e9133b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e9133f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e91343: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91344: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91345: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91346: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91347: lea eax, [esp + 0x134] */
  eax = (uint32_t)(esp + 0x134u);
/* e9134e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9134f: mov ecx, ebp */
  ecx = ebp;
/* e91351: mov dword ptr [esp + 0x164], 0x18 */
  W32((uint32_t)(esp + 0x164u), 0x18u);
/* e9135c: call 0xe90a40 */
  esp -= 4; W32(esp, 0xe91361u); SPILL(); f_e90a40(); if (g_unwind) return; RELOAD();
/* e91361: mov esi, eax */
  esi = eax;
/* e91363: mov edi, dword ptr [edi + 0x20] */
  edi = R32((uint32_t)(edi + 0x20u));
/* e91366: mov ecx, edi */
  ecx = edi;
/* e91368: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9136b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9136c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e91370: mov byte ptr [esp + 0x154], 0x19 */
  W8((uint32_t)(esp + 0x154u), 0x19u);
/* e91378: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* e9137c: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e91380: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe91386u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e91386: movzx edx, byte ptr [esp + 0x1b] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x1bu)));
/* e9138b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9138c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9138d: mov ecx, esi */
  ecx = esi;
/* e9138f: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe91395u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e91395: mov esi, dword ptr [esp + 0x164] */
  esi = R32((uint32_t)(esp + 0x164u));
/* e9139c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9139d: push 0xeb2820 */
  { uint32_t v = 0xeb2820u; esp -= 4; W32(esp, v); }
/* e913a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e913a3: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe913a9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e913a9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e913ac: lea ecx, [esp + 0x124] */
  ecx = (uint32_t)(esp + 0x124u);
/* e913b3: mov byte ptr [esp + 0x150], 0x18 */
  W8((uint32_t)(esp + 0x150u), 0x18u);
/* e913bb: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe913c1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e913c1: lea ecx, [esp + 0x13c] */
  ecx = (uint32_t)(esp + 0x13cu);
/* e913c8: mov dword ptr [esp + 0x150], 0xffffffff */
  W32((uint32_t)(esp + 0x150u), 0xffffffffu);
/* e913d3: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe913d9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e913d9: jmp 0xe913ef */
  goto L_e913ef;
L_e913db: /* e913db: mov esi, dword ptr [esp + 0x158] */
  esi = R32((uint32_t)(esp + 0x158u));
/* e913e2: push 0xeb08f8 */
  { uint32_t v = 0xeb08f8u; esp -= 4; W32(esp, v); }
/* e913e7: mov ecx, esi */
  ecx = esi;
/* e913e9: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe913efu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
L_e913ef: /* e913ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e913f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_e913f1: /* e913f1: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* e913f8: mov eax, esi */
  eax = esi;
/* e913fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e913fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e913fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e91403: add esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91409: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e91450(void) {
  LOAD_REGS();
L_e91450: /* e91450: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e91456: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e9145a: mov dword ptr [eax + 0x554], ecx */
  W32((uint32_t)(eax + 0x554u), ecx);
/* e91460: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e91470(void) {
  LOAD_REGS();
L_e91470: /* e91470: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e91474: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e91475: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e91478: ja 0xe914b9 */
  if ((!cf && !zf)) goto L_e914b9;
L_e9147a: /* e9147a: jmp dword ptr [eax*4 + 0xe914d8] */
  switch (R32((uint32_t)(eax*4 + 0xe914d8u))) {
    case 0xe91481u: goto L_e91481;
    case 0xe91489u: goto L_e91489;
    case 0xe91491u: goto L_e91491;
    case 0xe91499u: goto L_e91499;
    case 0xe914a1u: goto L_e914a1;
    case 0xe914a9u: goto L_e914a9;
    case 0xe914b1u: goto L_e914b1;
    case 0xe914cfu: goto L_e914cf;
    default: guest_badjump(0xe9147a, R32((uint32_t)(eax*4 + 0xe914d8u))); return;
  }
L_e91481: /* e91481: mov eax, 2 */
  eax = 0x2u;
/* e91486: ret 4 */
  esp += 8; SPILL(); return;
L_e91489: /* e91489: mov eax, 3 */
  eax = 0x3u;
/* e9148e: ret 4 */
  esp += 8; SPILL(); return;
L_e91491: /* e91491: mov eax, 4 */
  eax = 0x4u;
/* e91496: ret 4 */
  esp += 8; SPILL(); return;
L_e91499: /* e91499: mov eax, 5 */
  eax = 0x5u;
/* e9149e: ret 4 */
  esp += 8; SPILL(); return;
L_e914a1: /* e914a1: mov eax, 6 */
  eax = 0x6u;
/* e914a6: ret 4 */
  esp += 8; SPILL(); return;
L_e914a9: /* e914a9: mov eax, 7 */
  eax = 0x7u;
/* e914ae: ret 4 */
  esp += 8; SPILL(); return;
L_e914b1: /* e914b1: mov eax, 8 */
  eax = 0x8u;
/* e914b6: ret 4 */
  esp += 8; SPILL(); return;
L_e914b9: /* e914b9: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e914be: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e914c0: push 0xeb29e8 */
  { uint32_t v = 0xeb29e8u; esp -= 4; W32(esp, v); }
/* e914c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e914c6: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe914ccu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e914cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e914cf: /* e914cf: mov eax, 1 */
  eax = 0x1u;
/* e914d4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e91500(void) {
  LOAD_REGS();
L_e91500: /* e91500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e91504: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e91505: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e91508: ja 0xe91549 */
  if ((!cf && !zf)) goto L_e91549;
L_e9150a: /* e9150a: jmp dword ptr [eax*4 + 0xe91568] */
  switch (R32((uint32_t)(eax*4 + 0xe91568u))) {
    case 0xe91511u: goto L_e91511;
    case 0xe91519u: goto L_e91519;
    case 0xe91521u: goto L_e91521;
    case 0xe91529u: goto L_e91529;
    case 0xe91531u: goto L_e91531;
    case 0xe91539u: goto L_e91539;
    case 0xe91541u: goto L_e91541;
    case 0xe9155fu: goto L_e9155f;
    default: guest_badjump(0xe9150a, R32((uint32_t)(eax*4 + 0xe91568u))); return;
  }
L_e91511: /* e91511: mov eax, 2 */
  eax = 0x2u;
/* e91516: ret 4 */
  esp += 8; SPILL(); return;
L_e91519: /* e91519: mov eax, 3 */
  eax = 0x3u;
/* e9151e: ret 4 */
  esp += 8; SPILL(); return;
L_e91521: /* e91521: mov eax, 4 */
  eax = 0x4u;
/* e91526: ret 4 */
  esp += 8; SPILL(); return;
L_e91529: /* e91529: mov eax, 5 */
  eax = 0x5u;
/* e9152e: ret 4 */
  esp += 8; SPILL(); return;
L_e91531: /* e91531: mov eax, 6 */
  eax = 0x6u;
/* e91536: ret 4 */
  esp += 8; SPILL(); return;
L_e91539: /* e91539: mov eax, 7 */
  eax = 0x7u;
/* e9153e: ret 4 */
  esp += 8; SPILL(); return;
L_e91541: /* e91541: mov eax, 8 */
  eax = 0x8u;
/* e91546: ret 4 */
  esp += 8; SPILL(); return;
L_e91549: /* e91549: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e9154e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e91550: push 0xeb2a10 */
  { uint32_t v = 0xeb2a10u; esp -= 4; W32(esp, v); }
/* e91555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91556: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9155cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9155c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9155f: /* e9155f: mov eax, 1 */
  eax = 0x1u;
/* e91564: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e91590(void) {
  LOAD_REGS();
L_e91590: /* e91590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91592: mov esi, ecx */
  esi = ecx;
/* e91594: xor edi, edi */
  edi = 0;
L_e91596: /* e91596: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e91598: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9159a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9159c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9159d: mov ecx, esi */
  ecx = esi;
/* e9159f: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xe915a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e915a2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e915a3: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e915a6: jl 0xe91596 */
  if ((sf != of)) goto L_e91596;
L_e915a8: /* e915a8: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e915ae: mov eax, dword ptr [ecx + 0x17c] */
  eax = R32((uint32_t)(ecx + 0x17cu));
/* e915b4: xor edi, edi */
  edi = 0;
/* e915b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e915b8: jle 0xe915e4 */
  if ((zf || sf != of)) goto L_e915e4;
L_e915ba: /* e915ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e915c0: /* e915c0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e915c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e915c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e915c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e915c8: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e915ce: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe915d3u); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
/* e915d3: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e915d9: mov eax, dword ptr [edx + 0x17c] */
  eax = R32((uint32_t)(edx + 0x17cu));
/* e915df: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e915e0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e915e2: jl 0xe915c0 */
  if ((sf != of)) goto L_e915c0;
L_e915e4: /* e915e4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e915e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e915e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e915eb: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e915f1: call 0xe95e40 */
  esp -= 4; W32(esp, 0xe915f6u); SPILL(); f_e95e40(); if (g_unwind) return; RELOAD();
/* e915f6: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e915fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e915fd: mov dword ptr [eax + 0x550], 0 */
  W32((uint32_t)(eax + 0x550u), 0x0u);
/* e91607: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e91608: ret  */
  esp += 4; SPILL(); return;
}

void f_e91610(void) {
  LOAD_REGS();
L_e91610: /* e91610: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91611: cmp eax, 0x88760826 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760826u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e91616: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* e9161e: jg 0xe9174a */
  if ((!zf && sf == of)) goto L_e9174a;
L_e91624: /* e91624: je 0xe91739 */
  if (zf) goto L_e91739;
L_e9162a: /* e9162a: cmp eax, 0x8876081c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9162f: jg 0xe916ce */
  if ((!zf && sf == of)) goto L_e916ce;
L_e91635: /* e91635: je 0xe916bd */
  if (zf) goto L_e916bd;
L_e9163b: /* e9163b: cmp eax, 0x88760819 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760819u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e91640: jg 0xe91689 */
  if ((!zf && sf == of)) goto L_e91689;
L_e91642: /* e91642: je 0xe91678 */
  if (zf) goto L_e91678;
L_e91644: /* e91644: cmp eax, 0x8876017c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876017cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e91649: je 0xe91667 */
  if (zf) goto L_e91667;
L_e9164b: /* e9164b: cmp eax, 0x88760818 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760818u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e91650: jne 0xe91828 */
  if (!zf) goto L_e91828;
L_e91656: /* e91656: push 0xeb043c */
  { uint32_t v = 0xeb043cu; esp -= 4; W32(esp, v); }
/* e9165b: mov ecx, esi */
  ecx = esi;
/* e9165d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91663u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91663: mov eax, esi */
  eax = esi;
/* e91665: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91666: ret  */
  esp += 4; SPILL(); return;
L_e91667: /* e91667: push 0xeb040c */
  { uint32_t v = 0xeb040cu; esp -= 4; W32(esp, v); }
/* e9166c: mov ecx, esi */
  ecx = esi;
/* e9166e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91674u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91674: mov eax, esi */
  eax = esi;
/* e91676: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91677: ret  */
  esp += 4; SPILL(); return;
L_e91678: /* e91678: push 0xeb03c8 */
  { uint32_t v = 0xeb03c8u; esp -= 4; W32(esp, v); }
/* e9167d: mov ecx, esi */
  ecx = esi;
/* e9167f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91685u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91685: mov eax, esi */
  eax = esi;
/* e91687: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91688: ret  */
  esp += 4; SPILL(); return;
L_e91689: /* e91689: cmp eax, 0x8876081a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9168e: je 0xe916ac */
  if (zf) goto L_e916ac;
L_e91690: /* e91690: cmp eax, 0x8876081b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e91695: jne 0xe91828 */
  if (!zf) goto L_e91828;
L_e9169b: /* e9169b: push 0xeb0380 */
  { uint32_t v = 0xeb0380u; esp -= 4; W32(esp, v); }
/* e916a0: mov ecx, esi */
  ecx = esi;
/* e916a2: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe916a8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e916a8: mov eax, esi */
  eax = esi;
/* e916aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e916ab: ret  */
  esp += 4; SPILL(); return;
L_e916ac: /* e916ac: push 0xeb0344 */
  { uint32_t v = 0xeb0344u; esp -= 4; W32(esp, v); }
/* e916b1: mov ecx, esi */
  ecx = esi;
/* e916b3: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe916b9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e916b9: mov eax, esi */
  eax = esi;
/* e916bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e916bc: ret  */
  esp += 4; SPILL(); return;
L_e916bd: /* e916bd: push 0xeb030c */
  { uint32_t v = 0xeb030cu; esp -= 4; W32(esp, v); }
/* e916c2: mov ecx, esi */
  ecx = esi;
/* e916c4: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe916cau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e916ca: mov eax, esi */
  eax = esi;
/* e916cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e916cd: ret  */
  esp += 4; SPILL(); return;
L_e916ce: /* e916ce: lea ecx, [eax + 0x7789f7e3] */
  ecx = (uint32_t)(eax + 0x7789f7e3u);
/* e916d4: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e916d7: ja 0xe91828 */
  if ((!cf && !zf)) goto L_e91828;
L_e916dd: /* e916dd: jmp dword ptr [ecx*4 + 0xe91850] */
  switch (R32((uint32_t)(ecx*4 + 0xe91850u))) {
    case 0xe916e4u: goto L_e916e4;
    case 0xe916f5u: goto L_e916f5;
    case 0xe91706u: goto L_e91706;
    case 0xe91717u: goto L_e91717;
    case 0xe91728u: goto L_e91728;
    case 0xe91774u: goto L_e91774;
    case 0xe91785u: goto L_e91785;
    case 0xe91796u: goto L_e91796;
    case 0xe917a7u: goto L_e917a7;
    case 0xe917b8u: goto L_e917b8;
    case 0xe91828u: goto L_e91828;
    default: guest_badjump(0xe916dd, R32((uint32_t)(ecx*4 + 0xe91850u))); return;
  }
L_e916e4: /* e916e4: push 0xeb02d8 */
  { uint32_t v = 0xeb02d8u; esp -= 4; W32(esp, v); }
/* e916e9: mov ecx, esi */
  ecx = esi;
/* e916eb: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe916f1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e916f1: mov eax, esi */
  eax = esi;
/* e916f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e916f4: ret  */
  esp += 4; SPILL(); return;
L_e916f5: /* e916f5: push 0xeb0298 */
  { uint32_t v = 0xeb0298u; esp -= 4; W32(esp, v); }
/* e916fa: mov ecx, esi */
  ecx = esi;
/* e916fc: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91702u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91702: mov eax, esi */
  eax = esi;
/* e91704: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91705: ret  */
  esp += 4; SPILL(); return;
L_e91706: /* e91706: push 0xeb025c */
  { uint32_t v = 0xeb025cu; esp -= 4; W32(esp, v); }
/* e9170b: mov ecx, esi */
  ecx = esi;
/* e9170d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91713u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91713: mov eax, esi */
  eax = esi;
/* e91715: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91716: ret  */
  esp += 4; SPILL(); return;
L_e91717: /* e91717: push 0xeb0220 */
  { uint32_t v = 0xeb0220u; esp -= 4; W32(esp, v); }
/* e9171c: mov ecx, esi */
  ecx = esi;
/* e9171e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91724u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91724: mov eax, esi */
  eax = esi;
/* e91726: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91727: ret  */
  esp += 4; SPILL(); return;
L_e91728: /* e91728: push 0xeb01e0 */
  { uint32_t v = 0xeb01e0u; esp -= 4; W32(esp, v); }
/* e9172d: mov ecx, esi */
  ecx = esi;
/* e9172f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91735u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91735: mov eax, esi */
  eax = esi;
/* e91737: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91738: ret  */
  esp += 4; SPILL(); return;
L_e91739: /* e91739: push 0xeb0198 */
  { uint32_t v = 0xeb0198u; esp -= 4; W32(esp, v); }
/* e9173e: mov ecx, esi */
  ecx = esi;
/* e91740: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91746u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91746: mov eax, esi */
  eax = esi;
/* e91748: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91749: ret  */
  esp += 4; SPILL(); return;
L_e9174a: /* e9174a: cmp eax, 0x8876086a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9174f: jg 0xe917da */
  if ((!zf && sf == of)) goto L_e917da;
L_e91755: /* e91755: je 0xe917c9 */
  if (zf) goto L_e917c9;
L_e91757: /* e91757: lea ecx, [eax + 0x7789f7d9] */
  ecx = (uint32_t)(eax + 0x7789f7d9u);
/* e9175d: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e91760: ja 0xe91828 */
  if ((!cf && !zf)) goto L_e91828;
L_e91766: /* e91766: movzx ecx, byte ptr [ecx + 0xe91880] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xe91880u)));
/* e9176d: jmp dword ptr [ecx*4 + 0xe91868] */
  switch (R32((uint32_t)(ecx*4 + 0xe91868u))) {
    case 0xe91774u: goto L_e91774;
    case 0xe91785u: goto L_e91785;
    case 0xe91796u: goto L_e91796;
    case 0xe917a7u: goto L_e917a7;
    case 0xe917b8u: goto L_e917b8;
    case 0xe91828u: goto L_e91828;
    default: guest_badjump(0xe9176d, R32((uint32_t)(ecx*4 + 0xe91868u))); return;
  }
L_e91774: /* e91774: push 0xeb0160 */
  { uint32_t v = 0xeb0160u; esp -= 4; W32(esp, v); }
/* e91779: mov ecx, esi */
  ecx = esi;
/* e9177b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91781u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91781: mov eax, esi */
  eax = esi;
/* e91783: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91784: ret  */
  esp += 4; SPILL(); return;
L_e91785: /* e91785: push 0xeb0140 */
  { uint32_t v = 0xeb0140u; esp -= 4; W32(esp, v); }
/* e9178a: mov ecx, esi */
  ecx = esi;
/* e9178c: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91792u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91792: mov eax, esi */
  eax = esi;
/* e91794: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91795: ret  */
  esp += 4; SPILL(); return;
L_e91796: /* e91796: push 0xeb0120 */
  { uint32_t v = 0xeb0120u; esp -= 4; W32(esp, v); }
/* e9179b: mov ecx, esi */
  ecx = esi;
/* e9179d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe917a3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e917a3: mov eax, esi */
  eax = esi;
/* e917a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e917a6: ret  */
  esp += 4; SPILL(); return;
L_e917a7: /* e917a7: push 0xeb00fc */
  { uint32_t v = 0xeb00fcu; esp -= 4; W32(esp, v); }
/* e917ac: mov ecx, esi */
  ecx = esi;
/* e917ae: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe917b4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e917b4: mov eax, esi */
  eax = esi;
/* e917b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e917b7: ret  */
  esp += 4; SPILL(); return;
L_e917b8: /* e917b8: push 0xeb00d0 */
  { uint32_t v = 0xeb00d0u; esp -= 4; W32(esp, v); }
/* e917bd: mov ecx, esi */
  ecx = esi;
/* e917bf: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe917c5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e917c5: mov eax, esi */
  eax = esi;
/* e917c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e917c8: ret  */
  esp += 4; SPILL(); return;
L_e917c9: /* e917c9: push 0xeb00a8 */
  { uint32_t v = 0xeb00a8u; esp -= 4; W32(esp, v); }
/* e917ce: mov ecx, esi */
  ecx = esi;
/* e917d0: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe917d6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e917d6: mov eax, esi */
  eax = esi;
/* e917d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e917d9: ret  */
  esp += 4; SPILL(); return;
L_e917da: /* e917da: cmp eax, 0x8876086d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e917df: jg 0xe91824 */
  if ((!zf && sf == of)) goto L_e91824;
L_e917e1: /* e917e1: je 0xe91813 */
  if (zf) goto L_e91813;
L_e917e3: /* e917e3: cmp eax, 0x8876086b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e917e8: je 0xe91802 */
  if (zf) goto L_e91802;
L_e917ea: /* e917ea: cmp eax, 0x8876086c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e917ef: jne 0xe91828 */
  if (!zf) goto L_e91828;
L_e917f1: /* e917f1: push 0xeb0080 */
  { uint32_t v = 0xeb0080u; esp -= 4; W32(esp, v); }
/* e917f6: mov ecx, esi */
  ecx = esi;
/* e917f8: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe917feu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e917fe: mov eax, esi */
  eax = esi;
/* e91800: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91801: ret  */
  esp += 4; SPILL(); return;
L_e91802: /* e91802: push 0xeb0054 */
  { uint32_t v = 0xeb0054u; esp -= 4; W32(esp, v); }
/* e91807: mov ecx, esi */
  ecx = esi;
/* e91809: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe9180fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e9180f: mov eax, esi */
  eax = esi;
/* e91811: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91812: ret  */
  esp += 4; SPILL(); return;
L_e91813: /* e91813: push 0xeb0020 */
  { uint32_t v = 0xeb0020u; esp -= 4; W32(esp, v); }
/* e91818: mov ecx, esi */
  ecx = esi;
/* e9181a: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91820u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91820: mov eax, esi */
  eax = esi;
/* e91822: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91823: ret  */
  esp += 4; SPILL(); return;
L_e91824: /* e91824: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91826: je 0xe9183c */
  if (zf) goto L_e9183c;
L_e91828: /* e91828: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91829: push 0xeb0014 */
  { uint32_t v = 0xeb0014u; esp -= 4; W32(esp, v); }
/* e9182e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9182f: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe91835u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e91835: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91838: mov eax, esi */
  eax = esi;
/* e9183a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9183b: ret  */
  esp += 4; SPILL(); return;
L_e9183c: /* e9183c: push 0xeb0004 */
  { uint32_t v = 0xeb0004u; esp -= 4; W32(esp, v); }
/* e91841: mov ecx, esi */
  ecx = esi;
/* e91843: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe91849u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e91849: mov eax, esi */
  eax = esi;
/* e9184b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9184c: ret  */
  esp += 4; SPILL(); return;
}

void f_e918d0(void) {
  LOAD_REGS();
L_e918d0: /* e918d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e918d3: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e918d7: xor edx, edx */
  edx = 0;
/* e918d9: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e918dc: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e918e0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* e918e3: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e918e7: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* e918ea: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e918ee: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* e918f1: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e918f5: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* e918f8: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e918fc: mov dword ptr [eax + 0x1c], 8 */
  W32((uint32_t)(eax + 0x1cu), 0x8u);
/* e91903: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e91907: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91908: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e91909: mov ebp, 1 */
  ebp = 0x1u;
/* e9190e: mov dword ptr [ecx + 0x20], ebp */
  W32((uint32_t)(ecx + 0x20u), ebp);
/* e91911: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e91915: mov dword ptr [eax + 0x24], ebp */
  W32((uint32_t)(eax + 0x24u), ebp);
/* e91918: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9191c: mov dword ptr [ecx + 0x28], ebp */
  W32((uint32_t)(ecx + 0x28u), ebp);
/* e9191f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e91923: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* e91926: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9192a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9192b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9192c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9192f: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* e91932: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91936: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* e91939: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e9193d: mov esi, dword ptr [0xeae0a0] */
  esi = R32((uint32_t)(0xeae0a0u));
/* e91943: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e91946: mov ecx, 0x10 */
  ecx = 0x10u;
/* e9194b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9194d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e91951: mov esi, dword ptr [0xeae0a0] */
  esi = R32((uint32_t)(0xeae0a0u));
/* e91957: add edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9195a: mov ecx, 0x10 */
  ecx = 0x10u;
/* e9195f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e91961: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e91965: mov esi, dword ptr [0xeae0a0] */
  esi = R32((uint32_t)(0xeae0a0u));
/* e9196b: add edi, 0xb8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e91971: mov ecx, 0x10 */
  ecx = 0x10u;
/* e91976: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e91978: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9197c: mov dword ptr [eax + 0xf8], edx */
  W32((uint32_t)(eax + 0xf8u), edx);
/* e91982: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91986: add ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9198c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e91990: mov ecx, 0x40 */
  ecx = 0x40u;
/* e91995: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e91999: xor eax, eax */
  eax = 0;
/* e9199b: mov ebx, ecx */
  ebx = ecx;
/* e9199d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e919a0: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e919a3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e919a5: mov ecx, ebx */
  ecx = ebx;
/* e919a7: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e919a9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e919ad: add eax, 0x13c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e919b2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e919b6: mov ecx, 0x40 */
  ecx = 0x40u;
/* e919bb: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e919bf: xor eax, eax */
  eax = 0;
/* e919c1: mov ebx, ecx */
  ebx = ecx;
/* e919c3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e919c6: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e919c9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e919cb: mov ecx, ebx */
  ecx = ebx;
/* e919cd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e919cf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e919d3: mov dword ptr [ecx + 0x17c], edx */
  W32((uint32_t)(ecx + 0x17cu), edx);
/* e919d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e919dd: mov dword ptr [eax + 0x180], edx */
  W32((uint32_t)(eax + 0x180u), edx);
/* e919e3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e919e7: mov dword ptr [ecx + 0x184], edx */
  W32((uint32_t)(ecx + 0x184u), edx);
/* e919ed: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e919f1: mov dword ptr [eax + 0x188], ebp */
  W32((uint32_t)(eax + 0x188u), ebp);
/* e919f7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e919fb: mov dword ptr [ecx + 0x18c], ebp */
  W32((uint32_t)(ecx + 0x18cu), ebp);
/* e91a01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91a05: mov dword ptr [eax + 0x190], edx */
  W32((uint32_t)(eax + 0x190u), edx);
/* e91a0b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91a0f: mov dword ptr [ecx + 0x194], ebp */
  W32((uint32_t)(ecx + 0x194u), ebp);
/* e91a15: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91a19: mov dword ptr [eax + 0x198], edx */
  W32((uint32_t)(eax + 0x198u), edx);
/* e91a1f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91a23: mov dword ptr [ecx + 0x19c], edx */
  W32((uint32_t)(ecx + 0x19cu), edx);
/* e91a29: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91a2d: mov dword ptr [eax + 0x1a0], edx */
  W32((uint32_t)(eax + 0x1a0u), edx);
/* e91a33: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91a37: mov byte ptr [esp + 0x14], dl */
  W8((uint32_t)(esp + 0x14u), (edx & 0xffu));
/* e91a3b: mov byte ptr [esp + 0x15], dl */
  W8((uint32_t)(esp + 0x15u), (edx & 0xffu));
/* e91a3f: mov byte ptr [esp + 0x16], dl */
  W8((uint32_t)(esp + 0x16u), (edx & 0xffu));
/* e91a43: mov byte ptr [esp + 0x17], dl */
  W8((uint32_t)(esp + 0x17u), (edx & 0xffu));
/* e91a47: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e91a4b: mov dword ptr [ecx + 0x1b4], eax */
  W32((uint32_t)(ecx + 0x1b4u), eax);
/* e91a51: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91a55: add ecx, 0x1b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91a5b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e91a5f: mov ecx, 0x340 */
  ecx = 0x340u;
/* e91a64: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e91a68: xor eax, eax */
  eax = 0;
/* e91a6a: mov ebx, ecx */
  ebx = ecx;
/* e91a6c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e91a6f: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e91a72: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e91a74: mov ecx, ebx */
  ecx = ebx;
/* e91a76: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e91a78: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91a7c: add eax, 0x4f8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4f8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e91a81: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e91a85: mov ecx, 0x20 */
  ecx = 0x20u;
/* e91a8a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e91a8e: xor eax, eax */
  eax = 0;
/* e91a90: mov ebx, ecx */
  ebx = ecx;
/* e91a92: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e91a95: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e91a98: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e91a9a: mov ecx, ebx */
  ecx = ebx;
/* e91a9c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e91a9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91aa2: mov dword ptr [ecx + 0x518], edx */
  W32((uint32_t)(ecx + 0x518u), edx);
/* e91aa8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91aac: mov dword ptr [eax + 0x51c], edx */
  W32((uint32_t)(eax + 0x51cu), edx);
/* e91ab2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91ab6: mov dword ptr [ecx + 0x520], edx */
  W32((uint32_t)(ecx + 0x520u), edx);
/* e91abc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91ac0: mov byte ptr [esp + 0x14], dl */
  W8((uint32_t)(esp + 0x14u), (edx & 0xffu));
/* e91ac4: mov byte ptr [esp + 0x15], dl */
  W8((uint32_t)(esp + 0x15u), (edx & 0xffu));
/* e91ac8: mov byte ptr [esp + 0x16], dl */
  W8((uint32_t)(esp + 0x16u), (edx & 0xffu));
/* e91acc: mov byte ptr [esp + 0x17], dl */
  W8((uint32_t)(esp + 0x17u), (edx & 0xffu));
/* e91ad0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e91ad4: mov dword ptr [eax + 0x524], ecx */
  W32((uint32_t)(eax + 0x524u), ecx);
/* e91ada: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91ade: mov dword ptr [eax + 0x528], 0x3f800000 */
  W32((uint32_t)(eax + 0x528u), 0x3f800000u);
/* e91ae8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91aec: mov dword ptr [ecx + 0x558], edx */
  W32((uint32_t)(ecx + 0x558u), edx);
/* e91af2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91af6: mov dword ptr [eax + 0x55c], edx */
  W32((uint32_t)(eax + 0x55cu), edx);
/* e91afc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91b00: mov dword ptr [ecx + 0x554], edx */
  W32((uint32_t)(ecx + 0x554u), edx);
/* e91b06: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91b0a: add eax, 0x52c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x52cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e91b0f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e91b13: mov ecx, 0x20 */
  ecx = 0x20u;
/* e91b18: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e91b1c: xor eax, eax */
  eax = 0;
/* e91b1e: mov ebx, ecx */
  ebx = ecx;
/* e91b20: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e91b23: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e91b26: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e91b28: mov ecx, ebx */
  ecx = ebx;
/* e91b2a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e91b2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91b30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e91b31: mov dword ptr [ecx + 0x54c], edx */
  W32((uint32_t)(ecx + 0x54cu), edx);
/* e91b37: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e91b3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e91b3c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e91b3d: mov dword ptr [eax + 0x550], edx */
  W32((uint32_t)(eax + 0x550u), edx);
/* e91b43: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e91b47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e91b48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91b4b: ret  */
  esp += 4; SPILL(); return;
}

void f_e91b50(void) {
  LOAD_REGS();
L_e91b50: /* e91b50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91b51: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e91b57: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e91b5b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e91b5e: mov ecx, dword ptr [eax + 0x30ef0] */
  ecx = R32((uint32_t)(eax + 0x30ef0u));
/* e91b64: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e91b67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91b68: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e91b6b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e91b6d: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e91b6f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e91b73: mov ecx, dword ptr [eax + 0x2b46c] */
  ecx = R32((uint32_t)(eax + 0x2b46cu));
/* e91b79: imul ecx, ecx, 0x560 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x560u);
  ecx = (uint32_t)r;
  }
/* e91b7f: lea edx, [ecx + eax + 0x56c] */
  edx = (uint32_t)(ecx + eax + 0x56cu);
/* e91b86: mov dword ptr [eax + 0x2b00c], edx */
  W32((uint32_t)(eax + 0x2b00cu), edx);
/* e91b8c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e91b90: mov ecx, dword ptr [eax + 0x2b46c] */
  ecx = R32((uint32_t)(eax + 0x2b46cu));
/* e91b96: imul ecx, ecx, 0x560 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x560u);
  ecx = (uint32_t)r;
  }
/* e91b9c: lea edx, [ecx + eax + 0xc] */
  edx = (uint32_t)(ecx + eax + 0xcu);
/* e91ba0: mov eax, dword ptr [eax + 0x2b00c] */
  eax = R32((uint32_t)(eax + 0x2b00cu));
/* e91ba6: push 0x560 */
  { uint32_t v = 0x560u; esp -= 4; W32(esp, v); }
/* e91bab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91bac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91bad: call 0xe81020 */
  esp -= 4; W32(esp, 0xe91bb2u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e91bb2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e91bb6: mov ecx, dword ptr [eax + 0x2b46c] */
  ecx = R32((uint32_t)(eax + 0x2b46cu));
/* e91bbc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91bbf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e91bc0: mov dword ptr [eax + 0x2b46c], ecx */
  W32((uint32_t)(eax + 0x2b46cu), ecx);
/* e91bc6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e91bca: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e91bd0: mov esi, dword ptr [eax + 0x54c] */
  esi = R32((uint32_t)(eax + 0x54cu));
/* e91bd6: xor ecx, ecx */
  ecx = 0;
/* e91bd8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e91bda: jle 0xe91c04 */
  if ((zf || sf != of)) goto L_e91c04;
L_e91bdc: /* e91bdc: mov esi, 0x52c */
  esi = 0x52cu;
/* e91be1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_e91be2: /* e91be2: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* e91be5: inc dword ptr [eax + 0x458] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x458u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x458u), r);
  }
/* e91beb: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e91bef: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e91bf5: mov edi, dword ptr [eax + 0x54c] */
  edi = R32((uint32_t)(eax + 0x54cu));
/* e91bfb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e91bfc: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e91bff: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e91c01: jl 0xe91be2 */
  if ((sf != of)) goto L_e91be2;
L_e91c03: /* e91c03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_e91c04: /* e91c04: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e91c07: mov edx, dword ptr [ecx + 0x30ef0] */
  edx = R32((uint32_t)(ecx + 0x30ef0u));
/* e91c0d: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e91c12: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e91c15: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* e91c18: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e91c1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e91c1c: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e91c1f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e91c21: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e91c23: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e91c27: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e91c2a: mov ecx, dword ptr [eax + 0x30eec] */
  ecx = R32((uint32_t)(eax + 0x30eecu));
/* e91c30: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e91c36: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e91c39: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e91c3c: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e91c3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e91c3f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e91c40: ret  */
  esp += 4; SPILL(); return;
}

void f_e91c50(void) {
  LOAD_REGS();
L_e91c50: /* e91c50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e91c52: push 0xeacf87 */
  { uint32_t v = 0xeacf87u; esp -= 4; W32(esp, v); }
/* e91c57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e91c5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91c5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e91c65: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e91c68: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e91c6e: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e91c72: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e91c75: mov ecx, dword ptr [eax + 0x30f00] */
  ecx = R32((uint32_t)(eax + 0x30f00u));
/* e91c7b: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e91c7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91c7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91c80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91c81: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e91c84: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e91c86: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e91c88: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e91c8c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e91c8e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe91c90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e91c90: mov esi, eax */
  esi = eax;
/* e91c92: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e91c96: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e91c99: mov ebx, edx */
  ebx = edx;
/* e91c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91c9d: call 0xe8bdd0 */
  esp -= 4; W32(esp, 0xe91ca2u); SPILL(); f_e8bdd0(); if (g_unwind) return; RELOAD();
/* e91ca2: mov edi, eax */
  edi = eax;
/* e91ca4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91ca6: jne 0xe91cd6 */
  if (!zf) goto L_e91cd6;
L_e91ca8: /* e91ca8: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e91cae: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e91cb0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e91cb2: push 0xeb2790 */
  { uint32_t v = 0xeb2790u; esp -= 4; W32(esp, v); }
/* e91cb7: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* e91cb9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe91cbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e91cbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91cbd: je 0xe91cd4 */
  if (zf) goto L_e91cd4;
L_e91cbf: /* e91cbf: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e91cc3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e91cc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e91cc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91cc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91cc9: mov ecx, eax */
  ecx = eax;
/* e91ccb: call 0xe9aaa0 */
  esp -= 4; W32(esp, 0xe91cd0u); SPILL(); f_e9aaa0(); if (g_unwind) return; RELOAD();
/* e91cd0: mov edi, eax */
  edi = eax;
/* e91cd2: jmp 0xe91cd6 */
  goto L_e91cd6;
L_e91cd4: /* e91cd4: xor edi, edi */
  edi = 0;
L_e91cd6: /* e91cd6: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e91cda: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e91cdc: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xe91cdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e91cdf: cmp dword ptr [edi + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e91ce2: je 0xe91d0a */
  if (zf) goto L_e91d0a;
L_e91ce4: /* e91ce4: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e91ce8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91ce9: mov ecx, edi */
  ecx = edi;
/* e91ceb: call 0xe98b30 */
  esp -= 4; W32(esp, 0xe91cf0u); SPILL(); f_e98b30(); if (g_unwind) return; RELOAD();
/* e91cf0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91cf2: je 0xe91d0a */
  if (zf) goto L_e91d0a;
L_e91cf4: /* e91cf4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e91cf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e91cf6: xor eax, eax */
  eax = 0;
/* e91cf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e91cf9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e91cfd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e91d04: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91d07: ret 4 */
  esp += 8; SPILL(); return;
L_e91d0a: /* e91d0a: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* e91d0d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91d0f: je 0xe91df0 */
  if (zf) goto L_e91df0;
L_e91d15: /* e91d15: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* e91d18: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91d1a: je 0xe91df0 */
  if (zf) goto L_e91df0;
L_e91d20: /* e91d20: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e91d24: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e91d2a: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e91d2c: jne 0xe91d37 */
  if (!zf) goto L_e91d37;
L_e91d2e: /* e91d2e: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e91d31: je 0xe91df0 */
  if (zf) goto L_e91df0;
L_e91d37: /* e91d37: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e91d3a: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e91d40: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* e91d42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91d43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91d44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91d45: call dword ptr [esi + 0x7c] */
  { uint32_t t = R32((uint32_t)(esi + 0x7cu)); esp -= 4; W32(esp, 0xe91d48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e91d48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e91d4a: jge 0xe91d8f */
  if ((sf == of)) goto L_e91d8f;
L_e91d4c: /* e91d4c: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* e91d50: call 0xe91610 */
  esp -= 4; W32(esp, 0xe91d55u); SPILL(); f_e91610(); if (g_unwind) return; RELOAD();
/* e91d55: mov ecx, eax */
  ecx = eax;
/* e91d57: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* e91d5f: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe91d65u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e91d65: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e91d6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e91d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91d6e: push 0xeb2a44 */
  { uint32_t v = 0xeb2a44u; esp -= 4; W32(esp, v); }
/* e91d73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e91d74: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe91d7au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e91d7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91d7d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* e91d81: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* e91d89: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe91d8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e91d8f: /* e91d8f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e91d93: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e91d99: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* e91d9c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e91d9e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e91da2: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e91da8: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* e91dab: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* e91dae: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e91db2: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e91db8: mov dword ptr [ecx + 8], 0 */
  W32((uint32_t)(ecx + 0x8u), 0x0u);
/* e91dbf: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e91dc3: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e91dc9: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* e91dd0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e91dd4: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e91dda: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* e91ddd: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* e91de0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e91de4: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e91dea: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* e91ded: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
L_e91df0: /* e91df0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e91df4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e91df7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e91dfd: mov eax, dword ptr [edx + 0x30f00] */
  eax = R32((uint32_t)(edx + 0x30f00u));
/* e91e03: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e91e06: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e91e09: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e91e0b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e91e0d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e91e10: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e91e12: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e91e14: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e91e18: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e91e1b: mov edx, dword ptr [ecx + 0x30efc] */
  edx = R32((uint32_t)(ecx + 0x30efcu));
/* e91e21: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e91e26: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e91e29: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e91e2c: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e91e2e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e91e32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e91e33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e91e34: mov eax, 1 */
  eax = 0x1u;
/* e91e39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e91e3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e91e41: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e91e44: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e91e50(void) {
  LOAD_REGS();
L_e91e50: /* e91e50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91e51: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e91e55: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e91e5b: mov edx, dword ptr [eax + 0x550] */
  edx = R32((uint32_t)(eax + 0x550u));
/* e91e61: cmp edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e91e65: je 0xe923e7 */
  if (zf) goto L_e923e7;
L_e91e6b: /* e91e6b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e91e6e: mov ecx, dword ptr [eax + 0x30f10] */
  ecx = R32((uint32_t)(eax + 0x30f10u));
/* e91e74: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e91e7a: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e91e7d: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e91e80: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e91e82: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e91e84: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e91e88: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e91e8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91e8c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* e91e90: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e91e93: je 0xe91ea8 */
  if (zf) goto L_e91ea8;
L_e91e95: /* e91e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91e96: call 0xe8c090 */
  esp -= 4; W32(esp, 0xe91e9bu); SPILL(); f_e8c090(); if (g_unwind) return; RELOAD();
/* e91e9b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* e91e9e: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e91ea2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e91ea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91ea6: jmp 0xe91eaa */
  goto L_e91eaa;
L_e91ea8: /* e91ea8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_e91eaa: /* e91eaa: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91eb0: call 0xe95e10 */
  esp -= 4; W32(esp, 0xe91eb5u); SPILL(); f_e95e10(); if (g_unwind) return; RELOAD();
/* e91eb5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e91eb9: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e91ebc: xor eax, eax */
  eax = 0;
/* e91ebe: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91ec0: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* e91ec4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e91ec7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e91eca: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91ed1: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e91ed3: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91ed8u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91ed8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e91edc: movzx ecx, byte ptr [eax + 0xc] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xcu)));
/* e91ee0: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* e91ee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91ee5: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e91ee8: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e91eea: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91ef0: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91ef5u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91ef5: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e91ef9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e91efc: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e91efe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e91f00: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91f06: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91f0bu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91f0b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e91f0f: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* e91f12: xor ecx, ecx */
  ecx = 0;
/* e91f14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91f16: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e91f1a: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e91f1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91f1e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e91f21: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e91f23: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91f29: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91f2eu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91f2e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e91f32: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* e91f35: mov ecx, eax */
  ecx = eax;
/* e91f37: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e91f3a: je 0xe91f46 */
  if (zf) goto L_e91f46;
L_e91f3c: /* e91f3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e91f3d: je 0xe92072 */
  if (zf) goto L_e92072;
L_e91f43: /* e91f43: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e91f44: jne 0xe91f7d */
  if (!zf) goto L_e91f7d;
L_e91f46: /* e91f46: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* e91f4a: xor ecx, ecx */
  ecx = 0;
/* e91f4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91f4e: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e91f51: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91f54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91f55: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e91f58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e91f5a: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91f60: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91f65u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91f65: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e91f69: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e91f6c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e91f6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e91f70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e91f72: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91f78: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe91f7du); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
L_e91f7d: /* e91f7d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e91f81: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e91f85: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e91f86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e91f87: mov esi, dword ptr [edx + 0x10] */
  esi = R32((uint32_t)(edx + 0x10u));
/* e91f8a: xor ecx, ecx */
  ecx = 0;
/* e91f8c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91f8e: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e91f91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e91f92: lea ecx, [ecx*4 + 4] */
  ecx = (uint32_t)(ecx*4 + 0x4u);
/* e91f99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91f9a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e91f9d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e91f9f: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91fa5: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91faau); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91faa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e91fae: mov ebp, dword ptr [edx + 0x14] */
  ebp = R32((uint32_t)(edx + 0x14u));
/* e91fb1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e91fb5: xor ecx, ecx */
  ecx = 0;
/* e91fb7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91fb9: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e91fbc: mov ebp, 1 */
  ebp = 0x1u;
/* e91fc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e91fc2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e91fc5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e91fc6: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91fcc: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91fd1u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91fd1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e91fd5: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* e91fd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e91fda: mov eax, ebp */
  eax = ebp;
/* e91fdc: jne 0xe91fe2 */
  if (!zf) goto L_e91fe2;
L_e91fde: /* e91fde: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_e91fe2: /* e91fe2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e91fe6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e91fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e91fea: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e91fec: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e91ff2: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe91ff7u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e91ff7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e91ffb: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e91ffe: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e92002: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92003: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e92006: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e92008: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9200e: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe92013u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e92013: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e92017: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e9201a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e9201e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9201f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e92022: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e92024: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9202a: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe9202fu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e9202f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e92033: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e92036: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e9203a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9203b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e9203e: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e92040: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92046: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe9204bu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e9204b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9204f: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e92052: xor edi, edi */
  edi = 0;
/* e92054: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e92056: jle 0xe922fb */
  if ((zf || sf != of)) goto L_e922fb;
L_e9205c: /* e9205c: xor esi, esi */
  esi = 0;
/* e9205e: mov edi, edi */
  edi = edi;
L_e92060: /* e92060: mov eax, dword ptr [esi + eax + 0x38] */
  eax = R32((uint32_t)(esi + eax + 0x38u));
/* e92064: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92066: je 0xe920b2 */
  if (zf) goto L_e920b2;
L_e92068: /* e92068: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* e9206b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9206d: je 0xe920a5 */
  if (zf) goto L_e920a5;
L_e9206f: /* e9206f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92070: jmp 0xe920b4 */
  goto L_e920b4;
L_e92072: /* e92072: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* e92076: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e92079: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9207b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9207d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9207f: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92085: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe9208au); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e9208a: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e9208e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e92091: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e92093: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e92095: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9209b: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe920a0u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e920a0: jmp 0xe91f7d */
  goto L_e91f7d;
L_e920a5: /* e920a5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* e920a8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e920ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e920ad: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e920b0: jmp 0xe920bb */
  goto L_e920bb;
L_e920b2: /* e920b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_e920b4: /* e920b4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e920b8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
L_e920bb: /* e920bb: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e920c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e920c2: call 0xe95e60 */
  esp -= 4; W32(esp, 0xe920c7u); SPILL(); f_e95e60(); if (g_unwind) return; RELOAD();
/* e920c7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e920cb: mov edx, dword ptr [esi + ecx + 0x3c] */
  edx = R32((uint32_t)(esi + ecx + 0x3cu));
/* e920cf: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e920d3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e920d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e920d7: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e920d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e920da: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e920e0: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe920e5u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e920e5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e920e9: mov edx, dword ptr [esi + ecx + 0x40] */
  edx = R32((uint32_t)(esi + ecx + 0x40u));
/* e920ed: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e920f1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e920f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e920f5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e920f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e920f8: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e920fe: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92103u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92103: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e92107: mov edx, dword ptr [esi + ecx + 0x44] */
  edx = R32((uint32_t)(esi + ecx + 0x44u));
/* e9210b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9210f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e92112: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e92113: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e92115: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92116: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9211c: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92121u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92121: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e92125: fld dword ptr [esi + ecx + 0x48] */
  { double v = F32((uint32_t)(esi + ecx + 0x48u)); FPUSH(v); }
/* e92129: fcomp dword ptr [0xeb2a7c] */
  fpu_com(ST0, F32((uint32_t)(0xeb2a7cu)));
  FPOP();
/* e9212f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e92131: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e92134: jp 0xe9214b */
  if (pf) goto L_e9214b;
L_e92136: /* e92136: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e9213a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e9213d: mov edx, dword ptr [eax + 0x4140] */
  edx = R32((uint32_t)(eax + 0x4140u));
/* e92143: mov dword ptr [esi + ecx + 0x48], edx */
  W32((uint32_t)(esi + ecx + 0x48u), edx);
/* e92147: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_e9214b: /* e9214b: mov eax, dword ptr [esi + ecx + 0x48] */
  eax = R32((uint32_t)(esi + ecx + 0x48u));
/* e9214f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92153: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92157: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e92159: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9215a: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92160: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92165u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92165: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e92169: mov eax, dword ptr [esi + edx + 0x4c] */
  eax = R32((uint32_t)(esi + edx + 0x4cu));
/* e9216d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92171: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92175: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e92177: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92178: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9217e: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92183u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92183: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e92187: mov eax, dword ptr [esi + edx + 0x50] */
  eax = R32((uint32_t)(esi + edx + 0x50u));
/* e9218b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9218f: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92193: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e92195: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92196: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9219c: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe921a1u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e921a1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e921a5: mov eax, dword ptr [esi + edx + 0x54] */
  eax = R32((uint32_t)(esi + edx + 0x54u));
/* e921a9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e921ad: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e921b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e921b1: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e921b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e921b4: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e921ba: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe921bfu); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e921bf: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e921c3: mov eax, dword ptr [esi + edx + 0x58] */
  eax = R32((uint32_t)(esi + edx + 0x58u));
/* e921c7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e921cb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e921ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e921cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e921d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e921d1: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e921d7: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe921dcu); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e921dc: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e921e0: mov eax, dword ptr [esi + edx + 0x5c] */
  eax = R32((uint32_t)(esi + edx + 0x5cu));
/* e921e4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e921e8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e921eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e921ec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e921ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e921ef: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e921f5: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe921fau); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e921fa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e921fe: mov eax, dword ptr [esi + edx + 0x60] */
  eax = R32((uint32_t)(esi + edx + 0x60u));
/* e92202: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92206: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9220a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* e9220c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9220d: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92213: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92218u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92218: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9221c: mov eax, dword ptr [esi + edx + 0x64] */
  eax = R32((uint32_t)(esi + edx + 0x64u));
/* e92220: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92224: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92228: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9222a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9222b: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92231: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92236u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92236: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9223a: mov eax, dword ptr [esi + edx + 0x68] */
  eax = R32((uint32_t)(esi + edx + 0x68u));
/* e9223e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92242: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92246: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e92248: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92249: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9224f: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92254u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92254: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e92258: mov eax, dword ptr [esi + edx + 0x6c] */
  eax = R32((uint32_t)(esi + edx + 0x6cu));
/* e9225c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92260: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92264: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e92266: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92267: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9226d: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92272u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92272: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e92276: mov eax, dword ptr [esi + edx + 0x70] */
  eax = R32((uint32_t)(esi + edx + 0x70u));
/* e9227a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9227e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e92281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92282: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e92284: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92285: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9228b: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92290u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92290: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e92294: mov ecx, dword ptr [esi + eax + 0x78] */
  ecx = R32((uint32_t)(esi + eax + 0x78u));
/* e92298: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9229a: je 0xe922aa */
  if (zf) goto L_e922aa;
L_e9229c: /* e9229c: mov edx, dword ptr [esi + eax + 0x74] */
  edx = R32((uint32_t)(esi + eax + 0x74u));
/* e922a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e922a4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e922a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e922a8: jmp 0xe922b3 */
  goto L_e922b3;
L_e922aa: /* e922aa: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e922ae: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e922b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_e922b3: /* e922b3: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e922b5: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e922bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e922bc: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe922c1u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e922c1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e922c5: mov ecx, dword ptr [esi + eax + 0x78] */
  ecx = R32((uint32_t)(esi + eax + 0x78u));
/* e922c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e922cb: je 0xe922e9 */
  if (zf) goto L_e922e9;
L_e922cd: /* e922cd: lea edx, [esi + eax + 0x7c] */
  edx = (uint32_t)(esi + eax + 0x7cu);
/* e922d1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e922d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e922d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e922d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e922da: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e922e0: call 0xe95e80 */
  esp -= 4; W32(esp, 0xe922e5u); SPILL(); f_e95e80(); if (g_unwind) return; RELOAD();
/* e922e5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_e922e9: /* e922e9: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e922ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e922ed: add esi, 0x84 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e922f3: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e922f5: jl 0xe92060 */
  if ((sf != of)) goto L_e92060;
L_e922fb: /* e922fb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e922ff: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e92302: mov esi, dword ptr [eax + 0x34] */
  esi = R32((uint32_t)(eax + 0x34u));
/* e92305: cmp esi, dword ptr [edx + 0x41e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x41e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9230b: jge 0xe92395 */
  if ((sf == of)) goto L_e92395;
L_e92311: /* e92311: mov edi, esi */
  edi = esi;
/* e92313: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e92319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e92320: /* e92320: mov dword ptr [edi + eax + 0x4c], ebp */
  W32((uint32_t)(edi + eax + 0x4cu), ebp);
/* e92324: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e92328: mov dword ptr [edi + eax + 0x50], ebp */
  W32((uint32_t)(edi + eax + 0x50u), ebp);
/* e9232c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e92330: mov dword ptr [edi + ecx + 0x38], 0 */
  W32((uint32_t)(edi + ecx + 0x38u), 0x0u);
/* e92338: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e9233c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e9233f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e92340: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e92342: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92343: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92349: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe9234eu); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e9234e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e92352: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e92355: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e92356: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e92358: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92359: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9235f: call 0xe95de0 */
  esp -= 4; W32(esp, 0xe92364u); SPILL(); f_e95de0(); if (g_unwind) return; RELOAD();
/* e92364: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92368: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e9236b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9236d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9236e: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92374: call 0xe95e60 */
  esp -= 4; W32(esp, 0xe92379u); SPILL(); f_e95e60(); if (g_unwind) return; RELOAD();
/* e92379: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9237d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e92380: mov eax, dword ptr [edx + 0x41e0] */
  eax = R32((uint32_t)(edx + 0x41e0u));
/* e92386: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e92387: add edi, 0x84 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9238d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9238f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e92393: jl 0xe92320 */
  if ((sf != of)) goto L_e92320;
L_e92395: /* e92395: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e9239b: mov dword ptr [ecx + 0x550], eax */
  W32((uint32_t)(ecx + 0x550u), eax);
/* e923a1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e923a5: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e923a8: mov ecx, dword ptr [eax + 0x30f10] */
  ecx = R32((uint32_t)(eax + 0x30f10u));
/* e923ae: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e923b4: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e923b7: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e923ba: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e923bc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e923be: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e923c1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e923c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e923c5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e923c9: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e923cc: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e923d2: mov eax, dword ptr [edx + 0x30f0c] */
  eax = R32((uint32_t)(edx + 0x30f0cu));
/* e923d8: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e923db: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* e923de: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* e923e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e923e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e923e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e923e4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e923e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_e923e7: /* e923e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e923e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e923f0(void) {
  LOAD_REGS();
L_e923f0: /* e923f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e923f1: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e923f7: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e923fb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e923fe: mov ecx, dword ptr [eax + 0x30fb4] */
  ecx = R32((uint32_t)(eax + 0x30fb4u));
/* e92404: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e92407: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e9240a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e9240c: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e9240e: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e92412: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e92415: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* e92418: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9241a: jne 0xe92427 */
  if (!zf) goto L_e92427;
L_e9241c: /* e9241c: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e92422: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e92425: je 0xe92436 */
  if (zf) goto L_e92436;
L_e92427: /* e92427: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e9242b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9242d: je 0xe92436 */
  if (zf) goto L_e92436;
L_e9242f: /* e9242f: mov ecx, 4 */
  ecx = 0x4u;
/* e92434: jmp 0xe92438 */
  goto L_e92438;
L_e92436: /* e92436: xor ecx, ecx */
  ecx = 0;
L_e92438: /* e92438: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e92439: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9243a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e9243e: and esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* e92444: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92445: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* e92449: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9244a: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* e9244e: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e92454: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e92456: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92457: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* e9245b: xor ebx, ebx */
  ebx = 0;
/* e9245d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9245f: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e92463: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e92466: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* e92468: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* e9246a: and esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* e9246d: or ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* e9246f: or ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* e92471: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e92472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e92474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e92476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92477: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe9247du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9247d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e92481: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e92484: mov edx, dword ptr [ecx + 0x30fb4] */
  edx = R32((uint32_t)(ecx + 0x30fb4u));
/* e9248a: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e9248f: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e92492: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* e92495: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e92497: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e92499: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9249c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9249e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e924a0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e924a4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e924a7: mov ecx, dword ptr [eax + 0x30fb0] */
  ecx = R32((uint32_t)(eax + 0x30fb0u));
/* e924ad: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e924b3: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e924b6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e924b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e924bb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e924bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e924bd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e924bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e924c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e924c1: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e924d0(void) {
  LOAD_REGS();
L_e924d0: /* e924d0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e924d6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e924d8: push 0xeacfa3 */
  { uint32_t v = 0xeacfa3u; esp -= 4; W32(esp, v); }
/* e924dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e924de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e924e5: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e924e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e924e9: mov ebx, ecx */
  ebx = ecx;
/* e924eb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* e924ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e924ef: mov esi, dword ptr [eax + 0x4694] */
  esi = R32((uint32_t)(eax + 0x4694u));
/* e924f5: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e924fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e924fd: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* e92501: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e92502: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92503: call dword ptr [ecx + 0x80] */
  { uint32_t t = R32((uint32_t)(ecx + 0x80u)); esp -= 4; W32(esp, 0xe92509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92509: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9250b: jge 0xe92562 */
  if ((sf == of)) goto L_e92562;
L_e9250d: /* e9250d: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* e92511: call 0xe91610 */
  esp -= 4; W32(esp, 0xe92516u); SPILL(); f_e91610(); if (g_unwind) return; RELOAD();
/* e92516: mov ecx, eax */
  ecx = eax;
/* e92518: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* e92520: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe92526u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e92526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92527: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e9252c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9252e: push 0xeb2ac8 */
  { uint32_t v = 0xeb2ac8u; esp -= 4; W32(esp, v); }
/* e92533: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92534: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9253au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9253a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9253d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* e92541: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* e92549: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9254fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e9254f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92550: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e92551: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e92555: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9255c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9255f: ret 8 */
  esp += 12; SPILL(); return;
L_e92562: /* e92562: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e92566: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e92568: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9256a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9256c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* e92570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92571: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92572: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xe92575u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92575: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e92577: jge 0xe925cf */
  if ((sf == of)) goto L_e925cf;
L_e92579: /* e92579: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* e9257d: call 0xe91610 */
  esp -= 4; W32(esp, 0xe92582u); SPILL(); f_e91610(); if (g_unwind) return; RELOAD();
/* e92582: mov ecx, eax */
  ecx = eax;
/* e92584: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* e9258c: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe92592u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e92592: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e92598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92599: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9259b: push 0xeb2a80 */
  { uint32_t v = 0xeb2a80u; esp -= 4; W32(esp, v); }
/* e925a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e925a1: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe925a7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e925a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e925aa: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* e925ae: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* e925b6: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe925bcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e925bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e925bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e925be: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e925c2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e925c9: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e925cc: ret 8 */
  esp += 12; SPILL(); return;
L_e925cf: /* e925cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e925d0: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* e925d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e925d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e925d7: lea edi, [ebx + 0x2b480] */
  edi = (uint32_t)(ebx + 0x2b480u);
/* e925dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e925de: mov ecx, edi */
  ecx = edi;
/* e925e0: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe925e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e925e6: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* e925ea: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e925ec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e925ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e925ee: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e925f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e925f1: call 0xe81020 */
  esp -= 4; W32(esp, 0xe925f6u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e925f6: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* e925fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e925ff: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e92602: je 0xe9270c */
  if (zf) goto L_e9270c;
L_e92608: /* e92608: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e92609: je 0xe92683 */
  if (zf) goto L_e92683;
L_e9260b: /* e9260b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e9260c: jne 0xe9277e */
  if (!zf) goto L_e9277e;
L_e92612: /* e92612: mov eax, dword ptr [esi + 0x164] */
  eax = R32((uint32_t)(esi + 0x164u));
/* e92618: imul eax, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  eax = (uint32_t)r;
  }
/* e9261d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e92621: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* e92627: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92629: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e9262f: xor ebp, ebp */
  ebp = 0;
/* e92631: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e92633: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* e92636: jle 0xe9277e */
  if ((zf || sf != of)) goto L_e9277e;
L_e9263c: /* e9263c: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e92642: add ebx, 0x2b498 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2b498u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_e92648: /* e92648: xor eax, eax */
  eax = 0;
/* e9264a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9264c: jle 0xe9266a */
  if ((zf || sf != of)) goto L_e9266a;
L_e9264e: /* e9264e: mov edx, ebx */
  edx = ebx;
L_e92650: /* e92650: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* e92653: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e92655: mov dword ptr [ecx + eax*4], 0xfe0d */
  W32((uint32_t)(ecx + eax*4), 0xfe0du);
/* e9265c: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e92662: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92663: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92666: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92668: jl 0xe92650 */
  if ((sf != of)) goto L_e92650;
L_e9266a: /* e9266a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9266e: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e92674: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e92675: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e92678: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9267a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9267c: jl 0xe92648 */
  if ((sf != of)) goto L_e92648;
L_e9267e: /* e9267e: jmp 0xe9277e */
  goto L_e9277e;
L_e92683: /* e92683: mov ecx, dword ptr [esi + 0x164] */
  ecx = R32((uint32_t)(esi + 0x164u));
/* e92689: imul ecx, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  ecx = (uint32_t)r;
  }
/* e9268e: mov eax, dword ptr [esi + 0x160] */
  eax = R32((uint32_t)(esi + 0x160u));
/* e92694: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e92698: lea ebp, [eax + eax*2] */
  ebp = (uint32_t)(eax + eax*2);
/* e9269b: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e926a1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e926a3: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e926a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e926a7: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* e926af: jle 0xe9277e */
  if ((zf || sf != of)) goto L_e9277e;
L_e926b5: /* e926b5: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e926bb: add ebx, 0x2b498 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2b498u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_e926c1: /* e926c1: xor edx, edx */
  edx = 0;
/* e926c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e926c5: jle 0xe926eb */
  if ((zf || sf != of)) goto L_e926eb;
L_e926c7: /* e926c7: mov eax, ebp */
  eax = ebp;
/* e926c9: mov ecx, ebx */
  ecx = ebx;
/* e926cb: jmp 0xe926d0 */
  goto L_e926d0;
L_e926d0: /* e926d0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* e926d2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* e926d4: mov dword ptr [eax], 0xfe0d */
  W32((uint32_t)(eax), 0xfe0du);
/* e926da: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e926e0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e926e1: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e926e4: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e926e7: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e926e9: jl 0xe926d0 */
  if ((sf != of)) goto L_e926d0;
L_e926eb: /* e926eb: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* e926ef: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e926f3: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* e926f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e926fa: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e926fd: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e926ff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92701: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* e92705: jl 0xe926c1 */
  if ((sf != of)) goto L_e926c1;
L_e92707: /* e92707: jmp 0xe9277e */
  goto L_e9277e;
L_e9270c: /* e9270c: mov eax, dword ptr [esi + 0x164] */
  eax = R32((uint32_t)(esi + 0x164u));
/* e92712: imul eax, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  eax = (uint32_t)r;
  }
/* e92717: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e9271b: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* e92721: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92723: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e92729: xor ebp, ebp */
  ebp = 0;
/* e9272b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9272d: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* e92730: jle 0xe9277e */
  if ((zf || sf != of)) goto L_e9277e;
L_e92732: /* e92732: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e92738: add ebx, 0x2b498 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2b498u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e9273e: mov edi, edi */
  edi = edi;
L_e92740: /* e92740: xor eax, eax */
  eax = 0;
/* e92742: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e92744: jle 0xe9276a */
  if ((zf || sf != of)) goto L_e9276a;
L_e92746: /* e92746: mov edx, ebx */
  edx = ebx;
/* e92748: jmp 0xe92750 */
  goto L_e92750;
L_e92750: /* e92750: movzx edi, word ptr [ecx + eax*2] */
  edi = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* e92754: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e92756: mov word ptr [ecx + eax*2], 0xfe0d */
  W16((uint32_t)(ecx + eax*2), 0xfe0du);
/* e9275c: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e92762: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92763: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92766: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92768: jl 0xe92750 */
  if ((sf != of)) goto L_e92750;
L_e9276a: /* e9276a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9276e: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e92774: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e92775: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e92778: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9277a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9277c: jl 0xe92740 */
  if ((sf != of)) goto L_e92740;
L_e9277e: /* e9277e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e92782: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e92784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92785: call dword ptr [ecx + 0x28] */
  { uint32_t t = R32((uint32_t)(ecx + 0x28u)); esp -= 4; W32(esp, 0xe92788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92788: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9278c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9278e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9278f: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe92792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92792: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e92796: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e92797: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e92798: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92799: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9279a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e927a1: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e927a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e926cd(void) {
  LOAD_REGS();
  goto L_e926cd;
L_e926c1: /* e926c1: xor edx, edx */
  edx = 0;
/* e926c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e926c5: jle 0xe926eb */
  if ((zf || sf != of)) goto L_e926eb;
L_e926c7: /* e926c7: mov eax, ebp */
  eax = ebp;
/* e926c9: mov ecx, ebx */
  ecx = ebx;
/* e926cb: jmp 0xe926d0 */
  goto L_e926d0;
L_e926cd: /* e926cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e926d0: /* e926d0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* e926d2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* e926d4: mov dword ptr [eax], 0xfe0d */
  W32((uint32_t)(eax), 0xfe0du);
/* e926da: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e926e0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e926e1: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e926e4: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e926e7: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e926e9: jl 0xe926d0 */
  if ((sf != of)) goto L_e926d0;
L_e926eb: /* e926eb: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* e926ef: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e926f3: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* e926f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e926fa: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e926fd: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e926ff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92701: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* e92705: jl 0xe926c1 */
  if ((sf != of)) goto L_e926c1;
L_e92707: /* e92707: jmp 0xe9277e */
  goto L_e9277e;
L_e9277e: /* e9277e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e92782: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e92784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92785: call dword ptr [ecx + 0x28] */
  { uint32_t t = R32((uint32_t)(ecx + 0x28u)); esp -= 4; W32(esp, 0xe92788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92788: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9278c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9278e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9278f: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe92792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92792: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e92796: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e92797: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e92798: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92799: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9279a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e927a1: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e927a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9274a(void) {
  LOAD_REGS();
  goto L_e9274a;
L_e92740: /* e92740: xor eax, eax */
  eax = 0;
/* e92742: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e92744: jle 0xe9276a */
  if ((zf || sf != of)) goto L_e9276a;
L_e92746: /* e92746: mov edx, ebx */
  edx = ebx;
/* e92748: jmp 0xe92750 */
  goto L_e92750;
L_e9274a: /* e9274a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e92750: /* e92750: movzx edi, word ptr [ecx + eax*2] */
  edi = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* e92754: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e92756: mov word ptr [ecx + eax*2], 0xfe0d */
  W16((uint32_t)(ecx + eax*2), 0xfe0du);
/* e9275c: mov edi, dword ptr [esi + 0x168] */
  edi = R32((uint32_t)(esi + 0x168u));
/* e92762: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92763: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92766: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92768: jl 0xe92750 */
  if ((sf != of)) goto L_e92750;
L_e9276a: /* e9276a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9276e: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e92774: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e92775: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e92778: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9277a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9277c: jl 0xe92740 */
  if ((sf != of)) goto L_e92740;
L_e9277e: /* e9277e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e92782: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e92784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92785: call dword ptr [ecx + 0x28] */
  { uint32_t t = R32((uint32_t)(ecx + 0x28u)); esp -= 4; W32(esp, 0xe92788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92788: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9278c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9278e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9278f: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe92792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92792: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e92796: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e92797: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e92798: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92799: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9279a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e927a1: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e927a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e927b0(void) {
  LOAD_REGS();
L_e927b0: /* e927b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e927b2: push 0xeacfbf */
  { uint32_t v = 0xeacfbfu; esp -= 4; W32(esp, v); }
/* e927b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e927bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e927be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e927c5: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e927c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e927c9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e927ca: mov ebp, ecx */
  ebp = ecx;
/* e927cc: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e927cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e927d0: mov esi, dword ptr [eax + 0x4694] */
  esi = R32((uint32_t)(eax + 0x4694u));
/* e927d6: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e927dc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e927de: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* e927e2: xor ebx, ebx */
  ebx = 0;
/* e927e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e927e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e927e6: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* e927ea: mov byte ptr [esp + 0x14], bl */
  W8((uint32_t)(esp + 0x14u), (ebx & 0xffu));
/* e927ee: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* e927f2: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* e927f6: mov byte ptr [esp + 0x17], 0xff */
  W8((uint32_t)(esp + 0x17u), 0xffu);
/* e927fb: call dword ptr [ecx + 0x80] */
  { uint32_t t = R32((uint32_t)(ecx + 0x80u)); esp -= 4; W32(esp, 0xe92801u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92801: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92803: jge 0xe9282a */
  if ((sf == of)) goto L_e9282a;
L_e92805: /* e92805: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* e92809: call 0xe91610 */
  esp -= 4; W32(esp, 0xe9280eu); SPILL(); f_e91610(); if (g_unwind) return; RELOAD();
/* e9280e: mov ecx, eax */
  ecx = eax;
/* e92810: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e92814: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9281au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9281a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9281b: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e92820: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e92822: push 0xeb2ac8 */
  { uint32_t v = 0xeb2ac8u; esp -= 4; W32(esp, v); }
/* e92827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92828: jmp 0xe92867 */
  goto L_e92867;
L_e9282a: /* e9282a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e9282e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e92830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e92831: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e92832: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* e92836: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92838: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xe9283bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9283b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9283d: jge 0xe92896 */
  if ((sf == of)) goto L_e92896;
L_e9283f: /* e9283f: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* e92843: call 0xe91610 */
  esp -= 4; W32(esp, 0xe92848u); SPILL(); f_e91610(); if (g_unwind) return; RELOAD();
/* e92848: mov ecx, eax */
  ecx = eax;
/* e9284a: mov dword ptr [esp + 0x40], 1 */
  W32((uint32_t)(esp + 0x40u), 0x1u);
/* e92852: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe92858u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e92858: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e9285e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9285f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e92861: push 0xeb2a80 */
  { uint32_t v = 0xeb2a80u; esp -= 4; W32(esp, v); }
/* e92866: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e92867: /* e92867: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9286du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9286d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92870: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* e92874: mov dword ptr [esp + 0x40], 0xffffffff */
  W32((uint32_t)(esp + 0x40u), 0xffffffffu);
/* e9287c: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe92882u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e92882: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92883: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e92884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e92885: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e92889: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e92890: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92893: ret 8 */
  esp += 12; SPILL(); return;
L_e92896: /* e92896: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* e9289c: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e9289f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e928a0: je 0xe92a33 */
  if (zf) goto L_e92a33;
L_e928a6: /* e928a6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e928a7: je 0xe9296d */
  if (zf) goto L_e9296d;
L_e928ad: /* e928ad: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e928ae: jne 0xe92aef */
  if (!zf) goto L_e92aef;
L_e928b4: /* e928b4: mov ecx, dword ptr [esi + 0x164] */
  ecx = R32((uint32_t)(esi + 0x164u));
/* e928ba: imul ecx, dword ptr [esp + 0x28] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x28u)));
  ecx = (uint32_t)r;
  }
/* e928bf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e928c3: mov edx, dword ptr [esi + 0x160] */
  edx = R32((uint32_t)(esi + 0x160u));
/* e928c9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e928cb: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* e928ce: cmp dword ptr [esi + 0x16c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x16cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e928d4: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* e928d8: jle 0xe92aef */
  if ((zf || sf != of)) goto L_e92aef;
L_e928de: /* e928de: mov edx, dword ptr [esi + 0x168] */
  edx = R32((uint32_t)(esi + 0x168u));
/* e928e4: lea edi, [ebp + 0x2b498] */
  edi = (uint32_t)(ebp + 0x2b498u);
/* e928ea: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* e928ee: mov edi, edi */
  edi = edi;
L_e928f0: /* e928f0: xor eax, eax */
  eax = 0;
/* e928f2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e928f4: jle 0xe92948 */
  if ((zf || sf != of)) goto L_e92948;
L_e928f6: /* e928f6: jmp 0xe92900 */
  goto L_e92900;
L_e92900: /* e92900: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* e92903: cmp edx, 0xfe0d */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfe0du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e92909: je 0xe92935 */
  if (zf) goto L_e92935;
L_e9290b: /* e9290b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9290d: jne 0xe92935 */
  if (!zf) goto L_e92935;
L_e9290f: /* e9290f: mov byte ptr [esp + 0x14], dl */
  W8((uint32_t)(esp + 0x14u), (edx & 0xffu));
/* e92913: mov dl, byte ptr [ecx + eax*4 + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x1u))) & 0xffu);
/* e92917: mov byte ptr [esp + 0x15], dl */
  W8((uint32_t)(esp + 0x15u), (edx & 0xffu));
/* e9291b: mov dl, byte ptr [ecx + eax*4 + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x2u))) & 0xffu);
/* e9291f: mov byte ptr [esp + 0x16], dl */
  W8((uint32_t)(esp + 0x16u), (edx & 0xffu));
/* e92923: mov byte ptr [esp + 0x17], 0xff */
  W8((uint32_t)(esp + 0x17u), 0xffu);
/* e92928: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9292c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* e92930: mov ebx, 1 */
  ebx = 0x1u;
L_e92935: /* e92935: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e92937: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* e9293a: mov edx, dword ptr [esi + 0x168] */
  edx = R32((uint32_t)(esi + 0x168u));
/* e92940: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92941: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e92944: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92946: jl 0xe92900 */
  if ((sf != of)) goto L_e92900;
L_e92948: /* e92948: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e9294c: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e92950: add ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92954: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92955: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e92958: cmp eax, dword ptr [esi + 0x16c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x16cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9295e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e92962: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* e92966: jl 0xe928f0 */
  if ((sf != of)) goto L_e928f0;
L_e92968: /* e92968: jmp 0xe92aef */
  goto L_e92aef;
L_e9296d: /* e9296d: mov ecx, dword ptr [esi + 0x164] */
  ecx = R32((uint32_t)(esi + 0x164u));
/* e92973: imul ecx, dword ptr [esp + 0x28] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x28u)));
  ecx = (uint32_t)r;
  }
/* e92978: mov eax, dword ptr [esi + 0x160] */
  eax = R32((uint32_t)(esi + 0x160u));
/* e9297e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* e92981: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e92985: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e92987: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92989: cmp dword ptr [esi + 0x16c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x16cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9298f: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* e92993: jle 0xe92aef */
  if ((zf || sf != of)) goto L_e92aef;
L_e92999: /* e92999: mov eax, dword ptr [esi + 0x168] */
  eax = R32((uint32_t)(esi + 0x168u));
/* e9299f: lea edi, [ebp + 0x2b498] */
  edi = (uint32_t)(ebp + 0x2b498u);
/* e929a5: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e929a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e929b0: /* e929b0: xor ebp, ebp */
  ebp = 0;
/* e929b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e929b4: jle 0xe92a06 */
  if ((zf || sf != of)) goto L_e92a06;
L_e929b6: /* e929b6: mov ecx, edx */
  ecx = edx;
/* e929b8: jmp 0xe929c0 */
  goto L_e929c0;
L_e929c0: /* e929c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e929c2: cmp eax, 0xfe0d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfe0du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e929c7: je 0xe929f1 */
  if (zf) goto L_e929f1;
L_e929c9: /* e929c9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e929cb: jne 0xe929f1 */
  if (!zf) goto L_e929f1;
L_e929cd: /* e929cd: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* e929cf: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e929d1: mov byte ptr [esp + 0x14], al */
  W8((uint32_t)(esp + 0x14u), (eax & 0xffu));
/* e929d5: add al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e929d7: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* e929db: mov byte ptr [esp + 0x16], al */
  W8((uint32_t)(esp + 0x16u), (eax & 0xffu));
/* e929df: mov byte ptr [esp + 0x17], 0xff */
  W8((uint32_t)(esp + 0x17u), 0xffu);
/* e929e4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e929e8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e929ec: mov ebx, 1 */
  ebx = 0x1u;
L_e929f1: /* e929f1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e929f3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* e929f5: mov eax, dword ptr [esi + 0x168] */
  eax = R32((uint32_t)(esi + 0x168u));
/* e929fb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e929fc: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e929ff: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92a02: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92a04: jl 0xe929c0 */
  if ((sf != of)) goto L_e929c0;
L_e92a06: /* e92a06: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* e92a0a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e92a0e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e92a12: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92a14: mov ebp, dword ptr [esi + 0x16c] */
  ebp = R32((uint32_t)(esi + 0x16cu));
/* e92a1a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e92a1b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e92a1e: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92a20: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* e92a24: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e92a28: jl 0xe929b0 */
  if ((sf != of)) goto L_e929b0;
L_e92a2a: /* e92a2a: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* e92a2e: jmp 0xe92aef */
  goto L_e92aef;
L_e92a33: /* e92a33: mov ecx, dword ptr [esi + 0x164] */
  ecx = R32((uint32_t)(esi + 0x164u));
/* e92a39: imul ecx, dword ptr [esp + 0x28] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x28u)));
  ecx = (uint32_t)r;
  }
/* e92a3e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e92a42: mov edx, dword ptr [esi + 0x160] */
  edx = R32((uint32_t)(esi + 0x160u));
/* e92a48: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e92a4a: lea edi, [eax + edx*2] */
  edi = (uint32_t)(eax + edx*2);
/* e92a4d: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e92a53: xor edx, edx */
  edx = 0;
/* e92a55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e92a57: jle 0xe92aef */
  if ((zf || sf != of)) goto L_e92aef;
L_e92a5d: /* e92a5d: mov ecx, dword ptr [esi + 0x168] */
  ecx = R32((uint32_t)(esi + 0x168u));
/* e92a63: lea eax, [ebp + 0x2b498] */
  eax = (uint32_t)(ebp + 0x2b498u);
/* e92a69: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e92a6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e92a70: /* e92a70: xor eax, eax */
  eax = 0;
/* e92a72: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e92a74: jle 0xe92adb */
  if ((zf || sf != of)) goto L_e92adb;
L_e92a76: /* e92a76: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* e92a7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e92a80: /* e92a80: xor ecx, ecx */
  ecx = 0;
/* e92a82: mov cx, word ptr [edi + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*2))) & 0xffffu);
/* e92a86: cmp cx, 0xfe0d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0xfe0du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* e92a8b: je 0xe92ac1 */
  if (zf) goto L_e92ac1;
L_e92a8d: /* e92a8d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92a8f: jne 0xe92ac1 */
  if (!zf) goto L_e92ac1;
L_e92a91: /* e92a91: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* e92a93: shl bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e92a96: mov byte ptr [esp + 0x14], bl */
  W8((uint32_t)(esp + 0x14u), (ebx & 0xffu));
/* e92a9a: mov ebx, ecx */
  ebx = ecx;
/* e92a9c: shr ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* e92a9f: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e92aa2: mov cl, ch */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((ecx >> 8) & 0xffu)) & 0xffu);
/* e92aa4: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e92aa7: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* e92aab: mov byte ptr [esp + 0x16], cl */
  W8((uint32_t)(esp + 0x16u), (ecx & 0xffu));
/* e92aaf: mov byte ptr [esp + 0x17], 0xff */
  W8((uint32_t)(esp + 0x17u), 0xffu);
/* e92ab4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e92ab8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* e92abc: mov ebx, 1 */
  ebx = 0x1u;
L_e92ac1: /* e92ac1: mov cx, word ptr [ebp] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp))) & 0xffffu);
/* e92ac5: mov word ptr [edi + eax*2], cx */
  W16((uint32_t)(edi + eax*2), (ecx & 0xffffu));
/* e92ac9: mov ecx, dword ptr [esi + 0x168] */
  ecx = R32((uint32_t)(esi + 0x168u));
/* e92acf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92ad0: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e92ad3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92ad5: jl 0xe92a80 */
  if ((sf != of)) goto L_e92a80;
L_e92ad7: /* e92ad7: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_e92adb: /* e92adb: add dword ptr [esp + 0x18], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* e92ae0: add edi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e92ae4: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* e92aea: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e92aeb: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92aed: jl 0xe92a70 */
  if ((sf != of)) goto L_e92a70;
L_e92aef: /* e92aef: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e92af3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e92af5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92af6: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe92af9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92af9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e92afd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e92aff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b00: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe92b03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92b03: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92b05: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* e92b09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e92b0a: jne 0xe92b14 */
  if (!zf) goto L_e92b14;
L_e92b0c: /* e92b0c: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e92b10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92b12: je 0xe92b63 */
  if (zf) goto L_e92b63;
L_e92b14: /* e92b14: mov edx, dword ptr [ebp + 0x2b480] */
  edx = R32((uint32_t)(ebp + 0x2b480u));
/* e92b1a: mov eax, dword ptr [ebp + 0x2b484] */
  eax = R32((uint32_t)(ebp + 0x2b484u));
/* e92b20: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92b24: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e92b26: mov dword ptr [edx + eax + 8], ecx */
  W32((uint32_t)(edx + eax + 0x8u), ecx);
/* e92b2a: mov edx, dword ptr [ebp + 0x2b490] */
  edx = R32((uint32_t)(ebp + 0x2b490u));
/* e92b30: mov eax, dword ptr [ebp + 0x2b484] */
  eax = R32((uint32_t)(ebp + 0x2b484u));
/* e92b36: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92b38: jg 0xe92b59 */
  if ((!zf && sf == of)) goto L_e92b59;
L_e92b3a: /* e92b3a: mov ecx, dword ptr [ebp + 0x2b48c] */
  ecx = R32((uint32_t)(ebp + 0x2b48cu));
/* e92b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b41: mov dword ptr [ebp + 0x2b494], eax */
  W32((uint32_t)(ebp + 0x2b494u), eax);
/* e92b47: mov eax, dword ptr [ebp + 0x2b480] */
  eax = R32((uint32_t)(ebp + 0x2b480u));
/* e92b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92b4f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe92b54u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e92b54: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92b57: jmp 0xe92b63 */
  goto L_e92b63;
L_e92b59: /* e92b59: mov dword ptr [ebp + 0x2b494], 0 */
  W32((uint32_t)(ebp + 0x2b494u), 0x0u);
L_e92b63: /* e92b63: mov edx, dword ptr [ebp + 0x2b484] */
  edx = R32((uint32_t)(ebp + 0x2b484u));
/* e92b69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92b6a: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e92b6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e92b6d: lea ecx, [ebp + 0x2b480] */
  ecx = (uint32_t)(ebp + 0x2b480u);
/* e92b73: call dword ptr [0xeae2c8] */
  esp -= 4; W32(esp, 0xe92b79u); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* e92b79: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e92b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92b7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e92b7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e92b80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e92b87: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92b8a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e928f8(void) {
  LOAD_REGS();
  goto L_e928f8;
L_e928f0: /* e928f0: xor eax, eax */
  eax = 0;
/* e928f2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e928f4: jle 0xe92948 */
  if ((zf || sf != of)) goto L_e92948;
L_e928f6: /* e928f6: jmp 0xe92900 */
  goto L_e92900;
L_e928f8: /* e928f8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e928ff: nop  */
L_e92900: /* e92900: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* e92903: cmp edx, 0xfe0d */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfe0du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e92909: je 0xe92935 */
  if (zf) goto L_e92935;
L_e9290b: /* e9290b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9290d: jne 0xe92935 */
  if (!zf) goto L_e92935;
L_e9290f: /* e9290f: mov byte ptr [esp + 0x14], dl */
  W8((uint32_t)(esp + 0x14u), (edx & 0xffu));
/* e92913: mov dl, byte ptr [ecx + eax*4 + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x1u))) & 0xffu);
/* e92917: mov byte ptr [esp + 0x15], dl */
  W8((uint32_t)(esp + 0x15u), (edx & 0xffu));
/* e9291b: mov dl, byte ptr [ecx + eax*4 + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x2u))) & 0xffu);
/* e9291f: mov byte ptr [esp + 0x16], dl */
  W8((uint32_t)(esp + 0x16u), (edx & 0xffu));
/* e92923: mov byte ptr [esp + 0x17], 0xff */
  W8((uint32_t)(esp + 0x17u), 0xffu);
/* e92928: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9292c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* e92930: mov ebx, 1 */
  ebx = 0x1u;
L_e92935: /* e92935: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e92937: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* e9293a: mov edx, dword ptr [esi + 0x168] */
  edx = R32((uint32_t)(esi + 0x168u));
/* e92940: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92941: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e92944: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92946: jl 0xe92900 */
  if ((sf != of)) goto L_e92900;
L_e92948: /* e92948: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e9294c: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e92950: add ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92954: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e92955: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e92958: cmp eax, dword ptr [esi + 0x16c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x16cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9295e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e92962: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* e92966: jl 0xe928f0 */
  if ((sf != of)) goto L_e928f0;
L_e92968: /* e92968: jmp 0xe92aef */
  goto L_e92aef;
L_e92aef: /* e92aef: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e92af3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e92af5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92af6: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe92af9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92af9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e92afd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e92aff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b00: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe92b03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92b03: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92b05: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* e92b09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e92b0a: jne 0xe92b14 */
  if (!zf) goto L_e92b14;
L_e92b0c: /* e92b0c: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e92b10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92b12: je 0xe92b63 */
  if (zf) goto L_e92b63;
L_e92b14: /* e92b14: mov edx, dword ptr [ebp + 0x2b480] */
  edx = R32((uint32_t)(ebp + 0x2b480u));
/* e92b1a: mov eax, dword ptr [ebp + 0x2b484] */
  eax = R32((uint32_t)(ebp + 0x2b484u));
/* e92b20: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92b24: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e92b26: mov dword ptr [edx + eax + 8], ecx */
  W32((uint32_t)(edx + eax + 0x8u), ecx);
/* e92b2a: mov edx, dword ptr [ebp + 0x2b490] */
  edx = R32((uint32_t)(ebp + 0x2b490u));
/* e92b30: mov eax, dword ptr [ebp + 0x2b484] */
  eax = R32((uint32_t)(ebp + 0x2b484u));
/* e92b36: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92b38: jg 0xe92b59 */
  if ((!zf && sf == of)) goto L_e92b59;
L_e92b3a: /* e92b3a: mov ecx, dword ptr [ebp + 0x2b48c] */
  ecx = R32((uint32_t)(ebp + 0x2b48cu));
/* e92b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b41: mov dword ptr [ebp + 0x2b494], eax */
  W32((uint32_t)(ebp + 0x2b494u), eax);
/* e92b47: mov eax, dword ptr [ebp + 0x2b480] */
  eax = R32((uint32_t)(ebp + 0x2b480u));
/* e92b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92b4f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe92b54u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e92b54: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92b57: jmp 0xe92b63 */
  goto L_e92b63;
L_e92b59: /* e92b59: mov dword ptr [ebp + 0x2b494], 0 */
  W32((uint32_t)(ebp + 0x2b494u), 0x0u);
L_e92b63: /* e92b63: mov edx, dword ptr [ebp + 0x2b484] */
  edx = R32((uint32_t)(ebp + 0x2b484u));
/* e92b69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92b6a: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e92b6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e92b6d: lea ecx, [ebp + 0x2b480] */
  ecx = (uint32_t)(ebp + 0x2b480u);
/* e92b73: call dword ptr [0xeae2c8] */
  esp -= 4; W32(esp, 0xe92b79u); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* e92b79: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e92b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92b7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e92b7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e92b80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e92b87: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92b8a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e929ba(void) {
  LOAD_REGS();
  goto L_e929ba;
L_e929b0: /* e929b0: xor ebp, ebp */
  ebp = 0;
/* e929b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e929b4: jle 0xe92a06 */
  if ((zf || sf != of)) goto L_e92a06;
L_e929b6: /* e929b6: mov ecx, edx */
  ecx = edx;
/* e929b8: jmp 0xe929c0 */
  goto L_e929c0;
L_e929ba: /* e929ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e929c0: /* e929c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e929c2: cmp eax, 0xfe0d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfe0du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e929c7: je 0xe929f1 */
  if (zf) goto L_e929f1;
L_e929c9: /* e929c9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e929cb: jne 0xe929f1 */
  if (!zf) goto L_e929f1;
L_e929cd: /* e929cd: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* e929cf: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e929d1: mov byte ptr [esp + 0x14], al */
  W8((uint32_t)(esp + 0x14u), (eax & 0xffu));
/* e929d5: add al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e929d7: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* e929db: mov byte ptr [esp + 0x16], al */
  W8((uint32_t)(esp + 0x16u), (eax & 0xffu));
/* e929df: mov byte ptr [esp + 0x17], 0xff */
  W8((uint32_t)(esp + 0x17u), 0xffu);
/* e929e4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e929e8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e929ec: mov ebx, 1 */
  ebx = 0x1u;
L_e929f1: /* e929f1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e929f3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* e929f5: mov eax, dword ptr [esi + 0x168] */
  eax = R32((uint32_t)(esi + 0x168u));
/* e929fb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e929fc: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e929ff: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92a02: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92a04: jl 0xe929c0 */
  if ((sf != of)) goto L_e929c0;
L_e92a06: /* e92a06: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* e92a0a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e92a0e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e92a12: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92a14: mov ebp, dword ptr [esi + 0x16c] */
  ebp = R32((uint32_t)(esi + 0x16cu));
/* e92a1a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e92a1b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e92a1e: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92a20: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* e92a24: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e92a28: jl 0xe929b0 */
  if ((sf != of)) goto L_e929b0;
L_e92a2a: /* e92a2a: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* e92a2e: jmp 0xe92aef */
  goto L_e92aef;
L_e92aef: /* e92aef: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e92af3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e92af5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92af6: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe92af9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92af9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e92afd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e92aff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b00: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe92b03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e92b03: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92b05: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* e92b09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e92b0a: jne 0xe92b14 */
  if (!zf) goto L_e92b14;
L_e92b0c: /* e92b0c: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e92b10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92b12: je 0xe92b63 */
  if (zf) goto L_e92b63;
L_e92b14: /* e92b14: mov edx, dword ptr [ebp + 0x2b480] */
  edx = R32((uint32_t)(ebp + 0x2b480u));
/* e92b1a: mov eax, dword ptr [ebp + 0x2b484] */
  eax = R32((uint32_t)(ebp + 0x2b484u));
/* e92b20: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e92b24: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e92b26: mov dword ptr [edx + eax + 8], ecx */
  W32((uint32_t)(edx + eax + 0x8u), ecx);
/* e92b2a: mov edx, dword ptr [ebp + 0x2b490] */
  edx = R32((uint32_t)(ebp + 0x2b490u));
/* e92b30: mov eax, dword ptr [ebp + 0x2b484] */
  eax = R32((uint32_t)(ebp + 0x2b484u));
/* e92b36: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92b38: jg 0xe92b59 */
  if ((!zf && sf == of)) goto L_e92b59;
L_e92b3a: /* e92b3a: mov ecx, dword ptr [ebp + 0x2b48c] */
  ecx = R32((uint32_t)(ebp + 0x2b48cu));
/* e92b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b41: mov dword ptr [ebp + 0x2b494], eax */
  W32((uint32_t)(ebp + 0x2b494u), eax);
/* e92b47: mov eax, dword ptr [ebp + 0x2b480] */
  eax = R32((uint32_t)(ebp + 0x2b480u));
/* e92b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92b4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92b4f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe92b54u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e92b54: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92b57: jmp 0xe92b63 */
  goto L_e92b63;
L_e92b59: /* e92b59: mov dword ptr [ebp + 0x2b494], 0 */
  W32((uint32_t)(ebp + 0x2b494u), 0x0u);
L_e92b63: /* e92b63: mov edx, dword ptr [ebp + 0x2b484] */
  edx = R32((uint32_t)(ebp + 0x2b484u));
/* e92b69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92b6a: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e92b6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e92b6d: lea ecx, [ebp + 0x2b480] */
  ecx = (uint32_t)(ebp + 0x2b480u);
/* e92b73: call dword ptr [0xeae2c8] */
  esp -= 4; W32(esp, 0xe92b79u); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* e92b79: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e92b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92b7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e92b7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e92b80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e92b87: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92b8a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e92b90(void) {
  LOAD_REGS();
L_e92b90: /* e92b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92b91: mov esi, ecx */
  esi = ecx;
/* e92b93: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e92b97: xor eax, eax */
  eax = 0;
/* e92b99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e92b9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92b9c: je 0xe92ba6 */
  if (zf) goto L_e92ba6;
L_e92b9e: /* e92b9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92b9f: mov ecx, esi */
  ecx = esi;
/* e92ba1: call 0xe909c0 */
  esp -= 4; W32(esp, 0xe92ba6u); SPILL(); f_e909c0(); if (g_unwind) return; RELOAD();
L_e92ba6: /* e92ba6: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e92bac: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* e92bb0: mov dword ptr [ecx + 0x1a0], eax */
  W32((uint32_t)(ecx + 0x1a0u), eax);
/* e92bb6: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e92bbc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e92bc0: mov dword ptr [edx + 0x19c], eax */
  W32((uint32_t)(edx + 0x19cu), eax);
/* e92bc6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e92bc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92bca: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* e92bcc: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92bd2: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe92bd7u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e92bd7: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e92bdd: mov dword ptr [ecx + 0x190], edi */
  W32((uint32_t)(ecx + 0x190u), edi);
/* e92be3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e92be7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e92bea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92beb: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e92bed: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92bf3: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe92bf8u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e92bf8: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e92bfe: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e92c02: mov dword ptr [edx + 0x194], edi */
  W32((uint32_t)(edx + 0x194u), edi);
/* e92c08: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e92c0e: mov dword ptr [eax + 0x198], ecx */
  W32((uint32_t)(eax + 0x198u), ecx);
/* e92c14: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e92c1a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e92c1e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e92c22: add edx, 0x1a4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e92c28: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* e92c2a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e92c2e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e92c31: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e92c35: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* e92c38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e92c39: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* e92c3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e92c3d: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_e92c40(void) {
  LOAD_REGS();
L_e92c40: /* e92c40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e92c42: push 0xeacfd7 */
  { uint32_t v = 0xeacfd7u; esp -= 4; W32(esp, v); }
/* e92c47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e92c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92c4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e92c55: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e92c58: mov dl, byte ptr [0xebe2a4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xebe2a4u))) & 0xffu);
/* e92c5e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e92c5f: mov eax, 1 */
  eax = 0x1u;
/* e92c64: xor ebp, ebp */
  ebp = 0;
/* e92c66: test al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e92c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e92c69: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* e92c6d: jne 0xe92c9e */
  if (!zf) goto L_e92c9e;
L_e92c6f: /* e92c6f: or dword ptr [0xebe2a4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebe2a4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xebe2a4u), r);
  }
/* e92c75: push 0x47efffff */
  { uint32_t v = 0x47efffffu; esp -= 4; W32(esp, v); }
/* e92c7a: push 0xe0000000 */
  { uint32_t v = 0xe0000000u; esp -= 4; W32(esp, v); }
/* e92c7f: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* e92c83: call dword ptr [0xeae21c] */
  esp -= 4; W32(esp, 0xe92c89u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* e92c89: fstp dword ptr [0xebe2a0] */
  WF32((uint32_t)(0xebe2a0u), ST0); FPOP();
/* e92c8f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e92c93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92c96: mov dword ptr [esp + 0x44], 0xffffffff */
  W32((uint32_t)(esp + 0x44u), 0xffffffffu);
L_e92c9e: /* e92c9e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e92ca2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e92ca5: jge 0xe9336c */
  if ((sf == of)) goto L_e9336c;
L_e92cab: /* e92cab: cmp dword ptr [esp + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e92caf: je 0xe93347 */
  if (zf) goto L_e93347;
L_e92cb5: /* e92cb5: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e92cbb: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* e92cbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e92cbf: lea esi, [ecx + eax + 0x1b8] */
  esi = (uint32_t)(ecx + eax + 0x1b8u);
/* e92cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e92cc7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* e92ccb: mov ecx, 0x68 */
  ecx = 0x68u;
/* e92cd0: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e92cd4: xor eax, eax */
  eax = 0;
/* e92cd6: mov ebx, ecx */
  ebx = ecx;
/* e92cd8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e92cdb: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e92cde: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e92ce0: mov ecx, ebx */
  ecx = ebx;
/* e92ce2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e92ce4: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92ce8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e92cea: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e92cec: je 0xe92d64 */
  if (zf) goto L_e92d64;
L_e92cee: /* e92cee: mov al, byte ptr [eax + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x29u))) & 0xffu);
/* e92cf1: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e92cf3: jne 0xe92d60 */
  if (!zf) goto L_e92d60;
L_e92cf5: /* e92cf5: mov dword ptr [esi], 3 */
  W32((uint32_t)(esi), 0x3u);
/* e92cfb: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* e92cff: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* e92d02: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* e92d05: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92d09: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* e92d0c: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* e92d0f: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e92d13: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* e92d16: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* e92d19: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e92d1d: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* e92d20: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e92d23: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* e92d27: fmul dword ptr [0xeb2b4c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b4cu)));
/* e92d2d: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e92d30: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e92d34: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* e92d37: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e92d3a: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* e92d3e: fmul dword ptr [0xeb2b4c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b4cu)));
/* e92d44: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e92d47: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e92d4b: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* e92d4e: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* e92d51: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* e92d55: fmul dword ptr [0xeb2b4c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b4cu)));
/* e92d5b: jmp 0xe93226 */
  goto L_e93226;
L_e92d60: /* e92d60: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e92d62: je 0xe92d81 */
  if (zf) goto L_e92d81;
L_e92d64: /* e92d64: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e92d68: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e92d6e: fld dword ptr [eax + 0x1b0] */
  { double v = F32((uint32_t)(eax + 0x1b0u)); FPUSH(v); }
/* e92d74: fcomp dword ptr [0xeb2b48] */
  fpu_com(ST0, F32((uint32_t)(0xeb2b48u)));
  FPOP();
/* e92d7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e92d7c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e92d7f: jp 0xe92dce */
  if (pf) goto L_e92dce;
L_e92d81: /* e92d81: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
/* e92d87: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92d8b: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* e92d8e: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* e92d91: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e92d95: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* e92d98: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* e92d9b: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* e92d9f: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e92da2: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* e92da5: mov dword ptr [esi + 0x54], ebp */
  W32((uint32_t)(esi + 0x54u), ebp);
/* e92da8: mov dword ptr [esi + 0x58], ebp */
  W32((uint32_t)(esi + 0x58u), ebp);
/* e92dab: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92daf: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* e92db2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e92db4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e92db6: fdivr dword ptr [0xeb2b44] */
  ST0 = (F32((uint32_t)(0xeb2b44u))) / ST0;
/* e92dbc: fstp dword ptr [esi + 0x5c] */
  WF32((uint32_t)(esi + 0x5cu), ST0); FPOP();
/* e92dbf: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* e92dc3: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* e92dc6: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* e92dc9: jmp 0xe931ed */
  goto L_e931ed;
L_e92dce: /* e92dce: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* e92dd1: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* e92dd4: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* e92dd8: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* e92ddb: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* e92dde: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92de2: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e92de5: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* e92de8: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e92dec: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e92dee: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e92df0: je 0xe93027 */
  if (zf) goto L_e93027;
L_e92df6: /* e92df6: mov al, byte ptr [eax + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x29u))) & 0xffu);
/* e92df9: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e92dfb: je 0xe92e05 */
  if (zf) goto L_e92e05;
L_e92dfd: /* e92dfd: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e92dff: jne 0xe93027 */
  if (!zf) goto L_e93027;
L_e92e05: /* e92e05: mov dword ptr [esi], 2 */
  W32((uint32_t)(esi), 0x2u);
/* e92e0b: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92e0f: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* e92e12: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* e92e15: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e92e19: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e92e1c: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* e92e1f: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* e92e23: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* e92e26: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* e92e29: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92e2d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e92e2f: movzx eax, byte ptr [edx + 0x38] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x38u)));
/* e92e33: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e92e37: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e92e3a: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* e92e3e: fmul dword ptr [0xeb2b40] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b40u)));
/* e92e44: fsubr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) - ST0;
/* e92e4a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e92e4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e92e4e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* e92e51: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e92e53: call dword ptr [0xeae218] */
  esp -= 4; W32(esp, 0xe92e59u); SPILL(); f_4e1212(); if (g_unwind) return; /* Core!?appAcos@@YANN@Z */ RELOAD();
/* e92e59: fmul qword ptr [0xeb2b38] */
  ST0 = ST0 * (F64((uint32_t)(0xeb2b38u)));
/* e92e5f: mov dword ptr [esi + 0x50], 0x3f800000 */
  W32((uint32_t)(esi + 0x50u), 0x3f800000u);
/* e92e66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92e69: fst dword ptr [esi + 0x64] */
  WF32((uint32_t)(esi + 0x64u), ST0);
/* e92e6c: fmul dword ptr [0xeb2b34] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b34u)));
/* e92e72: fstp dword ptr [esi + 0x60] */
  WF32((uint32_t)(esi + 0x60u), ST0); FPOP();
/* e92e75: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e92e79: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e92e7c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e92e7e: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* e92e82: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e92e85: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e92e89: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* e92e8d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* e92e90: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* e92e94: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e92e9a: fld dword ptr [eax + 0x1b0] */
  { double v = F32((uint32_t)(eax + 0x1b0u)); FPUSH(v); }
/* e92ea0: add eax, 0x1a4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e92ea5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e92ea8: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e92eac: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* e92eb0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e92eb3: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* e92eb7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e92eb9: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* e92ebd: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e92ec1: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e92ec5: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e92ec9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e92ecd: call dword ptr [0xeae214] */
  esp -= 4; W32(esp, 0xe92ed3u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* e92ed3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92ed4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e92ed7: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* e92edc: call 0xe951c0 */
  esp -= 4; W32(esp, 0xe92ee1u); SPILL(); f_e951c0(); if (g_unwind) return; RELOAD();
/* e92ee1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* e92ee5: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* e92ee9: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e92eec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e92ef0: fmul dword ptr [0xeb2b30] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b30u)));
/* e92ef6: mov ebx, dword ptr [eax + 0x2b00c] */
  ebx = R32((uint32_t)(eax + 0x2b00cu));
/* e92efc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e92f00: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e92f03: fmul dword ptr [0xeb2b34] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b34u)));
/* e92f09: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e92f0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92f0d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* e92f11: fadd dword ptr [ebx + 0x1b0] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x1b0u)));
/* e92f17: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e92f1a: call 0xe95200 */
  esp -= 4; W32(esp, 0xe92f1fu); SPILL(); f_e95200(); if (g_unwind) return; RELOAD();
/* e92f1f: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e92f23: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e92f26: fmul dword ptr [0xeb2b2c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b2cu)));
/* e92f2c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e92f30: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e92f33: fmul dword ptr [0xeb2b28] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b28u)));
/* e92f39: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e92f3d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* e92f41: fsub dword ptr [ebx + 0x1b0] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x1b0u)));
/* e92f47: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e92f4a: call 0xe95200 */
  esp -= 4; W32(esp, 0xe92f4fu); SPILL(); f_e95200(); if (g_unwind) return; RELOAD();
/* e92f4f: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* e92f52: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e92f56: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e92f5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e92f5c: call 0xe90790 */
  esp -= 4; W32(esp, 0xe92f61u); SPILL(); f_e90790(); if (g_unwind) return; RELOAD();
/* e92f61: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e92f67: mov eax, ecx */
  eax = ecx;
/* e92f69: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e92f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e92f6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92f6f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e92f73: call 0xe90790 */
  esp -= 4; W32(esp, 0xe92f78u); SPILL(); f_e90790(); if (g_unwind) return; RELOAD();
/* e92f78: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e92f7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92f81: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* e92f85: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* e92f89: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* e92f8d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e92f90: call 0xe951e0 */
  esp -= 4; W32(esp, 0xe92f95u); SPILL(); f_e951e0(); if (g_unwind) return; RELOAD();
/* e92f95: fcomp qword ptr [0xeb2b20] */
  fpu_com(ST0, F64((uint32_t)(0xeb2b20u)));
  FPOP();
/* e92f9b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92f9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e92fa0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e92fa3: jp 0xe92fb1 */
  if (pf) goto L_e92fb1;
L_e92fa5: /* e92fa5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e92fa9: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* e92fac: mov dword ptr [esi + 0x58], ebp */
  W32((uint32_t)(esi + 0x58u), ebp);
/* e92faf: jmp 0xe92ffa */
  goto L_e92ffa;
L_e92fb1: /* e92fb1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* e92fb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e92fb6: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* e92fba: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* e92fbe: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* e92fc2: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* e92fc4: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* e92fc8: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* e92fcc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e92fcf: push 0x3c23d70a */
  { uint32_t v = 0x3c23d70au; esp -= 4; W32(esp, v); }
/* e92fd4: call 0xe951c0 */
  esp -= 4; W32(esp, 0xe92fd9u); SPILL(); f_e951c0(); if (g_unwind) return; RELOAD();
/* e92fd9: fst dword ptr [esi + 0x54] */
  WF32((uint32_t)(esi + 0x54u), ST0);
/* e92fdc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* e92fe0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e92fe3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e92fe5: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* e92fe9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e92fec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e92fed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e92fef: call 0xe951c0 */
  esp -= 4; W32(esp, 0xe92ff4u); SPILL(); f_e951c0(); if (g_unwind) return; RELOAD();
/* e92ff4: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
/* e92ff7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e92ffa: /* e92ffa: fld dword ptr [0xeb2b1c] */
  { double v = F32((uint32_t)(0xeb2b1cu)); FPUSH(v); }
/* e93000: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* e93003: fsub dword ptr [esi + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x54u)));
/* e93006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93007: push 0x3c23d70a */
  { uint32_t v = 0x3c23d70au; esp -= 4; W32(esp, v); }
/* e9300c: mov dword ptr [esi + 0x5c], ebp */
  W32((uint32_t)(esi + 0x5cu), ebp);
/* e9300f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e93013: call 0xe951c0 */
  esp -= 4; W32(esp, 0xe93018u); SPILL(); f_e951c0(); if (g_unwind) return; RELOAD();
/* e93018: fdivr dword ptr [esp + 0x28] */
  ST0 = (F32((uint32_t)(esp + 0x28u))) / ST0;
/* e9301c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9301f: fstp dword ptr [esi + 0x4c] */
  WF32((uint32_t)(esi + 0x4cu), ST0); FPOP();
/* e93022: jmp 0xe931ef */
  goto L_e931ef;
L_e93027: /* e93027: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
/* e9302d: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e93031: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93034: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93036: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e93039: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* e9303c: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* e93040: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93044: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* e93048: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e9304e: fld dword ptr [eax + 0x1b0] */
  { double v = F32((uint32_t)(eax + 0x1b0u)); FPUSH(v); }
/* e93054: add eax, 0x1a4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e93059: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9305c: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* e93060: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* e93064: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* e93068: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9306b: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* e9306f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e93071: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* e93075: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* e93079: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* e9307d: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* e93081: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* e93085: call dword ptr [0xeae214] */
  esp -= 4; W32(esp, 0xe9308bu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* e9308b: fld dword ptr [0xeb2b28] */
  { double v = F32((uint32_t)(0xeb2b28u)); FPUSH(v); }
/* e93091: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e93093: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e93095: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e93098: jne 0xe930a6 */
  if (!zf) goto L_e930a6;
L_e9309a: /* e9309a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9309c: mov dword ptr [esp + 0x18], 0x3dcccccd */
  W32((uint32_t)(esp + 0x18u), 0x3dcccccdu);
/* e930a4: jmp 0xe930aa */
  goto L_e930aa;
L_e930a6: /* e930a6: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_e930aa: /* e930aa: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* e930ae: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e930b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e930b5: fmul dword ptr [0xeb2b30] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b30u)));
/* e930bb: mov ebx, dword ptr [eax + 0x2b00c] */
  ebx = R32((uint32_t)(eax + 0x2b00cu));
/* e930c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e930c4: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e930c8: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e930cb: fmul dword ptr [0xeb2b34] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b34u)));
/* e930d1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e930d5: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* e930d9: fadd dword ptr [ebx + 0x1b0] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x1b0u)));
/* e930df: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e930e2: call 0xe95200 */
  esp -= 4; W32(esp, 0xe930e7u); SPILL(); f_e95200(); if (g_unwind) return; RELOAD();
/* e930e7: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e930eb: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e930ee: fmul dword ptr [0xeb2b2c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b2cu)));
/* e930f4: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e930f8: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e930fb: fmul dword ptr [0xeb2b28] */
  ST0 = ST0 * (F32((uint32_t)(0xeb2b28u)));
/* e93101: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e93105: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* e93109: fsub dword ptr [ebx + 0x1b0] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x1b0u)));
/* e9310f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e93112: call 0xe95200 */
  esp -= 4; W32(esp, 0xe93117u); SPILL(); f_e95200(); if (g_unwind) return; RELOAD();
/* e93117: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* e9311a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e9311e: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e93122: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93123: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93124: call 0xe90790 */
  esp -= 4; W32(esp, 0xe93129u); SPILL(); f_e90790(); if (g_unwind) return; RELOAD();
/* e93129: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e9312f: mov eax, ecx */
  eax = ecx;
/* e93131: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e93135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93136: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93137: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e9313b: call 0xe90790 */
  esp -= 4; W32(esp, 0xe93140u); SPILL(); f_e90790(); if (g_unwind) return; RELOAD();
/* e93140: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e93146: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e93149: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e9314d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* e93151: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* e93155: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e93158: call 0xe951e0 */
  esp -= 4; W32(esp, 0xe9315du); SPILL(); f_e951e0(); if (g_unwind) return; RELOAD();
/* e9315d: fcomp qword ptr [0xeb2b20] */
  fpu_com(ST0, F64((uint32_t)(0xeb2b20u)));
  FPOP();
/* e93163: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e93166: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e93168: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e9316b: jp 0xe93179 */
  if (pf) goto L_e93179;
L_e9316d: /* e9316d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e93171: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* e93174: mov dword ptr [esi + 0x58], ebp */
  W32((uint32_t)(esi + 0x58u), ebp);
/* e93177: jmp 0xe931c2 */
  goto L_e931c2;
L_e93179: /* e93179: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* e9317d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9317e: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* e93182: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* e93186: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* e9318a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* e9318c: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* e93190: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* e93194: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e93197: push 0x3c23d70a */
  { uint32_t v = 0x3c23d70au; esp -= 4; W32(esp, v); }
/* e9319c: call 0xe951c0 */
  esp -= 4; W32(esp, 0xe931a1u); SPILL(); f_e951c0(); if (g_unwind) return; RELOAD();
/* e931a1: fst dword ptr [esi + 0x54] */
  WF32((uint32_t)(esi + 0x54u), ST0);
/* e931a4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* e931a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e931ab: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e931ad: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* e931b1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e931b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e931b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e931b7: call 0xe951c0 */
  esp -= 4; W32(esp, 0xe931bcu); SPILL(); f_e951c0(); if (g_unwind) return; RELOAD();
/* e931bc: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
/* e931bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e931c2: /* e931c2: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* e931c5: mov dword ptr [esi + 0x5c], ebp */
  W32((uint32_t)(esi + 0x5cu), ebp);
/* e931c8: fld dword ptr [0xeb2b18] */
  { double v = F32((uint32_t)(0xeb2b18u)); FPUSH(v); }
/* e931ce: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e931d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e931d2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e931d5: jne 0xe931df */
  if (!zf) goto L_e931df;
L_e931d7: /* e931d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e931d9: fld dword ptr [0xeb2b18] */
  { double v = F32((uint32_t)(0xeb2b18u)); FPUSH(v); }
L_e931df: /* e931df: fld dword ptr [0xeb2b1c] */
  { double v = F32((uint32_t)(0xeb2b1cu)); FPUSH(v); }
/* e931e5: fsub dword ptr [esi + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x54u)));
/* e931e8: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* e931ea: fstp dword ptr [esi + 0x4c] */
  WF32((uint32_t)(esi + 0x4cu), ST0); FPOP();
L_e931ed: /* e931ed: fstp st(0) */
  STI(0) = ST0; FPOP();
L_e931ef: /* e931ef: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e931f3: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* e931f6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e931f9: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* e931fd: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e93200: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e93204: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* e93207: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9320a: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* e9320e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e93211: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e93215: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* e93218: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* e9321b: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* e9321f: mov dword ptr [esi + 0x10], 0x3f800000 */
  W32((uint32_t)(esi + 0x10u), 0x3f800000u);
L_e93226: /* e93226: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* e93229: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9322a: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* e9322d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9322e: fcom dword ptr [0xeae4b8] */
  fpu_com(ST0, F32((uint32_t)(0xeae4b8u)));
/* e93234: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e93236: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e93239: jp 0xe93245 */
  if (pf) goto L_e93245;
L_e9323b: /* e9323b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9323d: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
/* e93243: jmp 0xe9325a */
  goto L_e9325a;
L_e93245: /* e93245: fcom dword ptr [0xebe2a0] */
  fpu_com(ST0, F32((uint32_t)(0xebe2a0u)));
/* e9324b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9324d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e93250: jnp 0xe9325a */
  if (!pf) goto L_e9325a;
L_e93252: /* e93252: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e93254: fld dword ptr [0xebe2a0] */
  { double v = F32((uint32_t)(0xebe2a0u)); FPUSH(v); }
L_e9325a: /* e9325a: fstp dword ptr [esi + 0x4c] */
  WF32((uint32_t)(esi + 0x4cu), ST0); FPOP();
/* e9325d: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* e93260: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
/* e93266: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e93268: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9326a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9326d: jne 0xe93277 */
  if (!zf) goto L_e93277;
L_e9326f: /* e9326f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e93271: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
L_e93277: /* e93277: fstp dword ptr [esi + 0x54] */
  WF32((uint32_t)(esi + 0x54u), ST0); FPOP();
/* e9327a: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* e9327d: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
/* e93283: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e93285: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e93287: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9328a: jne 0xe93294 */
  if (!zf) goto L_e93294;
L_e9328c: /* e9328c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9328e: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
L_e93294: /* e93294: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
/* e93297: fld dword ptr [esi + 0x5c] */
  { double v = F32((uint32_t)(esi + 0x5cu)); FPUSH(v); }
/* e9329a: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
/* e932a0: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e932a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e932a4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e932a7: jne 0xe932b1 */
  if (!zf) goto L_e932b1;
L_e932a9: /* e932a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e932ab: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
L_e932b1: /* e932b1: fstp dword ptr [esi + 0x5c] */
  WF32((uint32_t)(esi + 0x5cu), ST0); FPOP();
/* e932b4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e932b8: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e932be: cmp dword ptr [ecx + 0x198], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x198u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e932c4: je 0xe932ea */
  if (zf) goto L_e932ea;
L_e932c6: /* e932c6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e932c9: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e932cf: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e932d2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e932d5: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e932db: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e932de: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e932e1: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e932e7: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
L_e932ea: /* e932ea: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e932ee: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* e932f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e932f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e932f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e932f7: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e932fd: call 0xe95ec0 */
  esp -= 4; W32(esp, 0xe93302u); SPILL(); f_e95ec0(); if (g_unwind) return; RELOAD();
/* e93302: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* e93306: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e9330a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9330c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9330d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e93310: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93316: call 0xe95ef0 */
  esp -= 4; W32(esp, 0xe9331bu); SPILL(); f_e95ef0(); if (g_unwind) return; RELOAD();
/* e9331b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9331f: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e93325: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* e93329: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9332a: mov dword ptr [ecx + edx*4 + 0x4f8], 1 */
  W32((uint32_t)(ecx + edx*4 + 0x4f8u), 0x1u);
/* e93335: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e93336: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e9333a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e93341: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e93344: ret 0xc */
  esp += 16; SPILL(); return;
L_e93347: /* e93347: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e9334a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9334b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9334c: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93352: call 0xe95ef0 */
  esp -= 4; W32(esp, 0xe93357u); SPILL(); f_e95ef0(); if (g_unwind) return; RELOAD();
/* e93357: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9335b: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e93361: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* e93365: mov dword ptr [ecx + edx*4 + 0x4f8], ebp */
  W32((uint32_t)(ecx + edx*4 + 0x4f8u), ebp);
L_e9336c: /* e9336c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* e93370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e93371: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e93372: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e93379: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9337c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e93380(void) {
  LOAD_REGS();
L_e93380: /* e93380: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e93384: fcomp dword ptr [0xeaed44] */
  fpu_com(ST0, F32((uint32_t)(0xeaed44u)));
  FPOP();
/* e9338a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9338c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9338f: jne 0xe933b9 */
  if (!zf) goto L_e933b9;
L_e93391: /* e93391: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e93394: mov edx, dword ptr [eax + 0x4114] */
  edx = R32((uint32_t)(eax + 0x4114u));
/* e9339a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9339c: je 0xe933b9 */
  if (zf) goto L_e933b9;
L_e9339e: /* e9339e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e933a2: fmul dword ptr [eax + 0x4144] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4144u)));
/* e933a8: fld dword ptr [0xeaed44] */
  { double v = F32((uint32_t)(0xeaed44u)); FPUSH(v); }
/* e933ae: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e933b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e933b2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e933b5: jne 0xe933bf */
  if (!zf) goto L_e933bf;
L_e933b7: /* e933b7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_e933b9: /* e933b9: fld dword ptr [0xeaed44] */
  { double v = F32((uint32_t)(0xeaed44u)); FPUSH(v); }
L_e933bf: /* e933bf: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e933c5: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* e933c9: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e933cd: fstp dword ptr [eax + 0x528] */
  WF32((uint32_t)(eax + 0x528u), ST0); FPOP();
/* e933d3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e933d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e933d7: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e933d9: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e933df: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe933e4u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e933e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e933f0(void) {
  LOAD_REGS();
L_e933f0: /* e933f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e933f1: mov esi, ecx */
  esi = ecx;
/* e933f3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e933f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e933f7: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* e933fb: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93401: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93403: je 0xe93511 */
  if (zf) goto L_e93511;
L_e93409: /* e93409: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9340b: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e9340d: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe93412u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e93412: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e93418: mov dword ptr [eax + 0x518], edi */
  W32((uint32_t)(eax + 0x518u), edi);
/* e9341e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e93422: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e93425: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93426: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e93428: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9342e: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe93433u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e93433: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* e93437: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* e9343b: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e93441: mov dword ptr [ecx + 0x524], edi */
  W32((uint32_t)(ecx + 0x524u), edi);
/* e93447: fcom dword ptr [0xeae4b8] */
  fpu_com(ST0, F32((uint32_t)(0xeae4b8u)));
/* e9344d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9344f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e93452: je 0xe93456 */
  if (zf) goto L_e93456;
L_e93454: /* e93454: fchs  */
  ST0 = -ST0;
L_e93456: /* e93456: fcomp dword ptr [0xeaed44] */
  fpu_com(ST0, F32((uint32_t)(0xeaed44u)));
  FPOP();
/* e9345c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9345e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e93461: jp 0xe9348c */
  if (pf) goto L_e9348c;
L_e93463: /* e93463: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e93467: fsub dword ptr [0xeaed44] */
  ST0 = ST0 - (F32((uint32_t)(0xeaed44u)));
/* e9346d: fld dword ptr [0xeae4b8] */
  { double v = F32((uint32_t)(0xeae4b8u)); FPUSH(v); }
/* e93473: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e93475: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e93477: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9347a: jne 0xe93488 */
  if (!zf) goto L_e93488;
L_e9347c: /* e9347c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9347e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e93486: jmp 0xe9348c */
  goto L_e9348c;
L_e93488: /* e93488: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_e9348c: /* e9348c: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e93492: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e93496: mov dword ptr [edx + 0x51c], eax */
  W32((uint32_t)(edx + 0x51cu), eax);
/* e9349c: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e934a2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e934a6: mov dword ptr [ecx + 0x520], edx */
  W32((uint32_t)(ecx + 0x520u), edx);
/* e934ac: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e934af: mov ecx, dword ptr [eax + 0x4108] */
  ecx = R32((uint32_t)(eax + 0x4108u));
/* e934b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e934b7: jne 0xe934e5 */
  if (!zf) goto L_e934e5;
L_e934b9: /* e934b9: test dword ptr [eax + 0x4170], 0x100000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4170u))); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e934c3: jne 0xe934e5 */
  if (!zf) goto L_e934e5;
L_e934c5: /* e934c5: fld dword ptr [0xeaed44] */
  { double v = F32((uint32_t)(0xeaed44u)); FPUSH(v); }
/* e934cb: mov ecx, dword ptr [0xeae220] */
  ecx = R32((uint32_t)(0xeae220u));
/* e934d1: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
/* e934d3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* e934d7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e934d9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* e934dd: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* e934e1: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_e934e5: /* e934e5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e934e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e934ea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* e934ec: lea ecx, [eax + 0x2fc9c] */
  ecx = (uint32_t)(eax + 0x2fc9cu);
/* e934f2: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe934f7u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e934f7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e934fb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e934fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e934ff: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e93501: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93507: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe9350cu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e9350c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9350d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9350e: ret 0x10 */
  esp += 20; SPILL(); return;
L_e93511: /* e93511: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e93513: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e93515: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe9351au); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e9351a: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e93520: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e93521: mov dword ptr [ecx + 0x518], 0 */
  W32((uint32_t)(ecx + 0x518u), 0x0u);
/* e9352b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9352c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e93530(void) {
  LOAD_REGS();
L_e93530: /* e93530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e93534: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93535: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* e93538: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9353a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9353b: mov edi, ecx */
  edi = ecx;
/* e9353d: jge 0xe93543 */
  if ((sf == of)) goto L_e93543;
L_e9353f: /* e9353f: xor esi, esi */
  esi = 0;
/* e93541: jmp 0xe9354d */
  goto L_e9354d;
L_e93543: /* e93543: cmp esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e93546: jl 0xe9354d */
  if ((sf != of)) goto L_e9354d;
L_e93548: /* e93548: mov esi, 0xf */
  esi = 0xfu;
L_e9354d: /* e9354d: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e93553: cmp dword ptr [eax + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93556: je 0xe93577 */
  if (zf) goto L_e93577;
L_e93558: /* e93558: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e9355b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9355c: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e9355e: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93564: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe93569u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e93569: mov ecx, dword ptr [edi + 0x2b00c] */
  ecx = R32((uint32_t)(edi + 0x2b00cu));
/* e9356f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e93570: mov dword ptr [ecx + 0x18], esi */
  W32((uint32_t)(ecx + 0x18u), esi);
/* e93573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e93574: ret 4 */
  esp += 8; SPILL(); return;
L_e93577: /* e93577: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e9357d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9357e: mov dword ptr [edx + 0x18], esi */
  W32((uint32_t)(edx + 0x18u), esi);
/* e93581: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e93582: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e93590(void) {
  LOAD_REGS();
L_e93590: /* e93590: sub esp, 0x490 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x490u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e93596: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e9359c: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e935a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e935a3: mov ecx, dword ptr [eax + 0x30f18] */
  ecx = R32((uint32_t)(eax + 0x30f18u));
/* e935a9: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e935ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e935ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e935ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e935af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e935b0: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e935b3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e935b5: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e935b7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e935bb: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e935c1: mov esi, dword ptr [esp + 0x4ac] */
  esi = R32((uint32_t)(esp + 0x4acu));
/* e935c8: cmp esi, dword ptr [eax + 0x17c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x17cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e935ce: jge 0xe93613 */
  if ((sf == of)) goto L_e93613;
L_e935d0: /* e935d0: lea edi, [esi*4 + 0xfc] */
  edi = (uint32_t)(esi*4 + 0xfcu);
L_e935d7: /* e935d7: cmp dword ptr [edi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e935db: je 0xe935fb */
  if (zf) goto L_e935fb;
L_e935dd: /* e935dd: mov dword ptr [edi + eax], 0 */
  W32((uint32_t)(edi + eax), 0x0u);
/* e935e4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e935e8: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e935eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e935ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e935ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e935f0: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e935f6: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe935fbu); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
L_e935fb: /* e935fb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e935ff: mov eax, dword ptr [eax + 0x2b00c] */
  eax = R32((uint32_t)(eax + 0x2b00cu));
/* e93605: mov ecx, dword ptr [eax + 0x17c] */
  ecx = R32((uint32_t)(eax + 0x17cu));
/* e9360b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e9360c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9360f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e93611: jl 0xe935d7 */
  if ((sf != of)) goto L_e935d7;
L_e93613: /* e93613: lea esi, [esp + 0x5c] */
  esi = (uint32_t)(esp + 0x5cu);
/* e93617: mov edi, 0x10 */
  edi = 0x10u;
/* e9361c: xor ebx, ebx */
  ebx = 0;
/* e9361e: mov edi, edi */
  edi = edi;
L_e93620: /* e93620: push 0xe88430 */
  { uint32_t v = 0xe88430u; esp -= 4; W32(esp, v); }
/* e93625: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e93627: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e93629: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9362a: call 0xe81240 */
  esp -= 4; W32(esp, 0xe9362fu); SPILL(); f_e81240(); if (g_unwind) return; RELOAD();
/* e9362f: mov dword ptr [esi + 0x40], ebx */
  W32((uint32_t)(esi + 0x40u), ebx);
/* e93632: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e93635: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* e93636: jne 0xe93620 */
  if (!zf) goto L_e93620;
L_e93638: /* e93638: mov eax, dword ptr [esp + 0x4ac] */
  eax = R32((uint32_t)(esp + 0x4acu));
/* e9363f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e93641: mov dword ptr [esp + 0x49c], eax */
  W32((uint32_t)(esp + 0x49cu), eax);
/* e93648: jle 0xe93684 */
  if ((zf || sf != of)) goto L_e93684;
L_e9364a: /* e9364a: lea ebp, [esp + 0x5c] */
  ebp = (uint32_t)(esp + 0x5cu);
/* e9364e: mov edi, edi */
  edi = edi;
L_e93650: /* e93650: mov ecx, dword ptr [esp + 0x4a8] */
  ecx = R32((uint32_t)(esp + 0x4a8u));
/* e93657: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* e9365a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9365c: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e93660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93661: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xe93664u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93664: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* e93668: mov eax, dword ptr [esp + 0x4ac] */
  eax = R32((uint32_t)(esp + 0x4acu));
/* e9366f: mov edi, ebp */
  edi = ebp;
/* e93671: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e93672: mov ecx, 0x11 */
  ecx = 0x11u;
/* e93677: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* e9367b: add ebp, 0x44 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e9367e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e93680: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e93682: jl 0xe93650 */
  if ((sf != of)) goto L_e93650;
L_e93684: /* e93684: mov edx, dword ptr [esp + 0x4a4] */
  edx = R32((uint32_t)(esp + 0x4a4u));
/* e9368b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9368f: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* e93693: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93694: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93697: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93698: call 0xe8c590 */
  esp -= 4; W32(esp, 0xe9369du); SPILL(); f_e8c590(); if (g_unwind) return; RELOAD();
/* e9369d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e936a1: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e936a7: mov dword ptr [edx + 0xf8], eax */
  W32((uint32_t)(edx + 0xf8u), eax);
/* e936ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e936b1: mov eax, dword ptr [eax + 0x454] */
  eax = R32((uint32_t)(eax + 0x454u));
/* e936b7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e936ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e936bb: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e936c1: call 0xe95e00 */
  esp -= 4; W32(esp, 0xe936c6u); SPILL(); f_e95e00(); if (g_unwind) return; RELOAD();
/* e936c6: mov eax, dword ptr [esp + 0x4ac] */
  eax = R32((uint32_t)(esp + 0x4acu));
/* e936cd: xor esi, esi */
  esi = 0;
/* e936cf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e936d1: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e936d5: jle 0xe937de */
  if ((zf || sf != of)) goto L_e937de;
L_e936db: /* e936db: jmp 0xe936e0 */
  goto L_e936e0;
L_e936e0: /* e936e0: mov edx, dword ptr [esp + 0x4a8] */
  edx = R32((uint32_t)(esp + 0x4a8u));
/* e936e7: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e936ea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e936ec: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe936eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e936ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e936f2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e936f5: mov ebp, edx */
  ebp = edx;
/* e936f7: mov ebx, eax */
  ebx = eax;
/* e936f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e936fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e936fb: call 0xe8bdd0 */
  esp -= 4; W32(esp, 0xe93700u); SPILL(); f_e8bdd0(); if (g_unwind) return; RELOAD();
/* e93700: mov edi, eax */
  edi = eax;
/* e93702: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93704: jne 0xe93734 */
  if (!zf) goto L_e93734;
L_e93706: /* e93706: mov edx, dword ptr [0xeae014] */
  edx = R32((uint32_t)(0xeae014u));
/* e9370c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e9370e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e93710: push 0xeb2b50 */
  { uint32_t v = 0xeb2b50u; esp -= 4; W32(esp, v); }
/* e93715: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* e93717: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe93719u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93719: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9371b: je 0xe93732 */
  if (zf) goto L_e93732;
L_e9371d: /* e9371d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e93721: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93724: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e93725: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e93726: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93727: mov ecx, eax */
  ecx = eax;
/* e93729: call 0xe98590 */
  esp -= 4; W32(esp, 0xe9372eu); SPILL(); f_e98590(); if (g_unwind) return; RELOAD();
/* e9372e: mov edi, eax */
  edi = eax;
/* e93730: jmp 0xe93734 */
  goto L_e93734;
L_e93732: /* e93732: xor edi, edi */
  edi = 0;
L_e93734: /* e93734: mov eax, dword ptr [esp + 0x4a8] */
  eax = R32((uint32_t)(esp + 0x4a8u));
/* e9373b: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* e9373e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93740: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe93743u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93743: cmp dword ptr [edi + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93746: je 0xe93773 */
  if (zf) goto L_e93773;
L_e93748: /* e93748: mov eax, dword ptr [esp + 0x4a8] */
  eax = R32((uint32_t)(esp + 0x4a8u));
/* e9374f: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* e93752: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93754: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe93757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93757: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e9375b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9375d: mov eax, dword ptr [esp + 0x4a8] */
  eax = R32((uint32_t)(esp + 0x4a8u));
/* e93764: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e93768: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* e9376b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9376c: mov ecx, edi */
  ecx = edi;
/* e9376e: call 0xe99d40 */
  esp -= 4; W32(esp, 0xe93773u); SPILL(); f_e99d40(); if (g_unwind) return; RELOAD();
L_e93773: /* e93773: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93777: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e9377a: mov ecx, dword ptr [eax + 0x46a8] */
  ecx = R32((uint32_t)(eax + 0x46a8u));
/* e93780: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* e93783: mov edx, dword ptr [esp + 0x4a8] */
  edx = R32((uint32_t)(esp + 0x4a8u));
/* e9378a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e9378d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9378f: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe93792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93792: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* e93795: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93799: mov ebx, eax */
  ebx = eax;
/* e9379b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9379c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9379d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e937a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e937a1: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e937a7: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe937acu); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
/* e937ac: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e937b0: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e937b6: mov dword ptr [ecx + esi*4 + 0xfc], edi */
  W32((uint32_t)(ecx + esi*4 + 0xfcu), edi);
/* e937bd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e937c1: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e937c7: mov dword ptr [eax + esi*4 + 0x13c], ebx */
  W32((uint32_t)(eax + esi*4 + 0x13cu), ebx);
/* e937ce: mov eax, dword ptr [esp + 0x4ac] */
  eax = R32((uint32_t)(esp + 0x4acu));
/* e937d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e937d6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e937d8: jl 0xe936e0 */
  if ((sf != of)) goto L_e936e0;
L_e937de: /* e937de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e937e2: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e937e8: mov dword ptr [edx + 0x17c], eax */
  W32((uint32_t)(edx + 0x17cu), eax);
/* e937ee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e937f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e937f5: mov edx, dword ptr [ecx + 0x30f18] */
  edx = R32((uint32_t)(ecx + 0x30f18u));
/* e937fb: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e93800: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e93803: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* e93806: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93808: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9380a: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9380d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9380f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e93811: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93815: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93818: mov ecx, dword ptr [eax + 0x30f14] */
  ecx = R32((uint32_t)(eax + 0x30f14u));
/* e9381e: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93824: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93827: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e9382a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9382c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9382d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9382e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9382f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e93830: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e93832: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e93836: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e93837: add esp, 0x490 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x490u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9383d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e936dd(void) {
  LOAD_REGS();
L_e936dd: /* e936dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e936e0: /* e936e0: mov edx, dword ptr [esp + 0x4a8] */
  edx = R32((uint32_t)(esp + 0x4a8u));
/* e936e7: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e936ea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e936ec: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe936eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e936ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e936f2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e936f5: mov ebp, edx */
  ebp = edx;
/* e936f7: mov ebx, eax */
  ebx = eax;
/* e936f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e936fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e936fb: call 0xe8bdd0 */
  esp -= 4; W32(esp, 0xe93700u); SPILL(); f_e8bdd0(); if (g_unwind) return; RELOAD();
/* e93700: mov edi, eax */
  edi = eax;
/* e93702: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93704: jne 0xe93734 */
  if (!zf) goto L_e93734;
L_e93706: /* e93706: mov edx, dword ptr [0xeae014] */
  edx = R32((uint32_t)(0xeae014u));
/* e9370c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e9370e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e93710: push 0xeb2b50 */
  { uint32_t v = 0xeb2b50u; esp -= 4; W32(esp, v); }
/* e93715: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* e93717: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe93719u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93719: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9371b: je 0xe93732 */
  if (zf) goto L_e93732;
L_e9371d: /* e9371d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e93721: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93724: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e93725: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e93726: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93727: mov ecx, eax */
  ecx = eax;
/* e93729: call 0xe98590 */
  esp -= 4; W32(esp, 0xe9372eu); SPILL(); f_e98590(); if (g_unwind) return; RELOAD();
/* e9372e: mov edi, eax */
  edi = eax;
/* e93730: jmp 0xe93734 */
  goto L_e93734;
L_e93732: /* e93732: xor edi, edi */
  edi = 0;
L_e93734: /* e93734: mov eax, dword ptr [esp + 0x4a8] */
  eax = R32((uint32_t)(esp + 0x4a8u));
/* e9373b: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* e9373e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93740: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe93743u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93743: cmp dword ptr [edi + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93746: je 0xe93773 */
  if (zf) goto L_e93773;
L_e93748: /* e93748: mov eax, dword ptr [esp + 0x4a8] */
  eax = R32((uint32_t)(esp + 0x4a8u));
/* e9374f: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* e93752: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93754: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe93757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93757: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e9375b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9375d: mov eax, dword ptr [esp + 0x4a8] */
  eax = R32((uint32_t)(esp + 0x4a8u));
/* e93764: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e93768: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* e9376b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9376c: mov ecx, edi */
  ecx = edi;
/* e9376e: call 0xe99d40 */
  esp -= 4; W32(esp, 0xe93773u); SPILL(); f_e99d40(); if (g_unwind) return; RELOAD();
L_e93773: /* e93773: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93777: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e9377a: mov ecx, dword ptr [eax + 0x46a8] */
  ecx = R32((uint32_t)(eax + 0x46a8u));
/* e93780: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* e93783: mov edx, dword ptr [esp + 0x4a8] */
  edx = R32((uint32_t)(esp + 0x4a8u));
/* e9378a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e9378d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9378f: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe93792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93792: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* e93795: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93799: mov ebx, eax */
  ebx = eax;
/* e9379b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9379c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9379d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e937a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e937a1: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e937a7: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe937acu); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
/* e937ac: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e937b0: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e937b6: mov dword ptr [ecx + esi*4 + 0xfc], edi */
  W32((uint32_t)(ecx + esi*4 + 0xfcu), edi);
/* e937bd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e937c1: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e937c7: mov dword ptr [eax + esi*4 + 0x13c], ebx */
  W32((uint32_t)(eax + esi*4 + 0x13cu), ebx);
/* e937ce: mov eax, dword ptr [esp + 0x4ac] */
  eax = R32((uint32_t)(esp + 0x4acu));
/* e937d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e937d6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e937d8: jl 0xe936e0 */
  if ((sf != of)) goto L_e936e0;
L_e937de: /* e937de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e937e2: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e937e8: mov dword ptr [edx + 0x17c], eax */
  W32((uint32_t)(edx + 0x17cu), eax);
/* e937ee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e937f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e937f5: mov edx, dword ptr [ecx + 0x30f18] */
  edx = R32((uint32_t)(ecx + 0x30f18u));
/* e937fb: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e93800: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e93803: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* e93806: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93808: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9380a: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9380d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9380f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e93811: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93815: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93818: mov ecx, dword ptr [eax + 0x30f14] */
  ecx = R32((uint32_t)(eax + 0x30f14u));
/* e9381e: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93824: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93827: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e9382a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9382c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9382d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9382e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9382f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e93830: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e93832: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e93836: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e93837: add esp, 0x490 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x490u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9383d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e93840(void) {
  LOAD_REGS();
L_e93840: /* e93840: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e93842: push 0xeacfef */
  { uint32_t v = 0xeacfefu; esp -= 4; W32(esp, v); }
/* e93847: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9384d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9384e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e93855: sub esp, 0x490 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x490u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9385b: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93861: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e93865: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e93868: mov ecx, dword ptr [eax + 0x30f20] */
  ecx = R32((uint32_t)(eax + 0x30f20u));
/* e9386e: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93871: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93874: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93876: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e93878: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e9387c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e9387f: mov eax, dword ptr [edx + 0x40bc] */
  eax = R32((uint32_t)(edx + 0x40bcu));
/* e93885: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93887: jne 0xe938d9 */
  if (!zf) goto L_e938d9;
L_e93889: /* e93889: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9388e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e93890: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93892: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e93897: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* e93899: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe9389bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9389b: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* e9389f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e938a1: mov dword ptr [esp + 0x498], 0 */
  W32((uint32_t)(esp + 0x498u), 0x0u);
/* e938ac: je 0xe938bf */
  if (zf) goto L_e938bf;
L_e938ae: /* e938ae: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e938b2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e938b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e938b6: mov ecx, eax */
  ecx = eax;
/* e938b8: call 0xe9ac00 */
  esp -= 4; W32(esp, 0xe938bdu); SPILL(); f_e9ac00(); if (g_unwind) return; RELOAD();
/* e938bd: jmp 0xe938c1 */
  goto L_e938c1;
L_e938bf: /* e938bf: xor eax, eax */
  eax = 0;
L_e938c1: /* e938c1: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e938c5: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e938c8: mov dword ptr [esp + 0x498], 0xffffffff */
  W32((uint32_t)(esp + 0x498u), 0xffffffffu);
/* e938d3: mov dword ptr [edx + 0x40bc], eax */
  W32((uint32_t)(edx + 0x40bcu), eax);
L_e938d9: /* e938d9: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* e938dd: mov eax, dword ptr [esp + 0x4a4] */
  eax = R32((uint32_t)(esp + 0x4a4u));
/* e938e4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e938e7: mov ecx, dword ptr [edx + 0x40bc] */
  ecx = R32((uint32_t)(edx + 0x40bcu));
/* e938ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e938ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e938ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e938f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e938f1: call 0xe9a110 */
  esp -= 4; W32(esp, 0xe938f6u); SPILL(); f_e9a110(); if (g_unwind) return; RELOAD();
/* e938f6: mov ecx, dword ptr [esp + 0x4b0] */
  ecx = R32((uint32_t)(esp + 0x4b0u));
/* e938fd: mov ebx, eax */
  ebx = eax;
/* e938ff: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e93901: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe93904u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93904: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e93908: mov esi, eax */
  esi = eax;
/* e9390a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e9390d: mov edx, dword ptr [eax + 0x40bc] */
  edx = R32((uint32_t)(eax + 0x40bcu));
/* e93913: mov ecx, dword ptr [edx + 0x24] */
  ecx = R32((uint32_t)(edx + 0x24u));
/* e93916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93917: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93918: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9391a: lea ecx, [eax + 0x2fc9c] */
  ecx = (uint32_t)(eax + 0x2fc9cu);
/* e93920: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe93925u); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
/* e93925: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e93929: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e9392c: mov ecx, dword ptr [edx + 0x40bc] */
  ecx = R32((uint32_t)(edx + 0x40bcu));
/* e93932: mov eax, dword ptr [eax + 0x2b00c] */
  eax = R32((uint32_t)(eax + 0x2b00cu));
/* e93938: mov dword ptr [eax + 0xfc], ecx */
  W32((uint32_t)(eax + 0xfcu), ecx);
/* e9393e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e93942: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e93948: mov dword ptr [eax + 0x13c], esi */
  W32((uint32_t)(eax + 0x13cu), esi);
/* e9394e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e93952: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93958: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* e9395e: mov esi, 1 */
  esi = 0x1u;
/* e93963: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e93965: jle 0xe939a6 */
  if ((zf || sf != of)) goto L_e939a6;
L_e93967: /* e93967: mov edi, 0x100 */
  edi = 0x100u;
/* e9396c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e93970: /* e93970: mov dword ptr [edi + eax], 0 */
  W32((uint32_t)(edi + eax), 0x0u);
/* e93977: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9397b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e9397e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e93980: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e93982: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93983: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93989: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe9398eu); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
/* e9398e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e93992: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93998: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* e9399e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e9399f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e939a2: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e939a4: jl 0xe93970 */
  if ((sf != of)) goto L_e93970;
L_e939a6: /* e939a6: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e939ac: mov dword ptr [edx + 0x17c], 1 */
  W32((uint32_t)(edx + 0x17cu), 0x1u);
/* e939b6: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e939ba: mov edi, 0x10 */
  edi = 0x10u;
/* e939bf: nop  */
L_e939c0: /* e939c0: push 0xe88430 */
  { uint32_t v = 0xe88430u; esp -= 4; W32(esp, v); }
/* e939c5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e939c7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e939c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e939ca: call 0xe81240 */
  esp -= 4; W32(esp, 0xe939cfu); SPILL(); f_e81240(); if (g_unwind) return; RELOAD();
/* e939cf: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* e939d6: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e939d9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* e939da: jne 0xe939c0 */
  if (!zf) goto L_e939c0;
L_e939dc: /* e939dc: mov ecx, dword ptr [esp + 0x4b0] */
  ecx = R32((uint32_t)(esp + 0x4b0u));
/* e939e3: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* e939e7: mov dword ptr [esp + 0x498], 1 */
  W32((uint32_t)(esp + 0x498u), 0x1u);
/* e939f2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e939f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e939f5: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xe939f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e939f8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e939fc: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* e93a00: mov ecx, 0x11 */
  ecx = 0x11u;
/* e93a05: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* e93a09: lea edi, [esp + 0x58] */
  edi = (uint32_t)(esp + 0x58u);
/* e93a0d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e93a0f: mov ecx, dword ptr [esp + 0x4ac] */
  ecx = R32((uint32_t)(esp + 0x4acu));
/* e93a16: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* e93a1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93a1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93a1c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e93a1f: call 0xe8c590 */
  esp -= 4; W32(esp, 0xe93a24u); SPILL(); f_e8c590(); if (g_unwind) return; RELOAD();
/* e93a24: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e93a28: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e93a2e: mov dword ptr [edx + 0xf8], eax */
  W32((uint32_t)(edx + 0xf8u), eax);
/* e93a34: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e93a38: mov eax, dword ptr [eax + 0x454] */
  eax = R32((uint32_t)(eax + 0x454u));
/* e93a3e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e93a41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93a42: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93a48: call 0xe95e00 */
  esp -= 4; W32(esp, 0xe93a4du); SPILL(); f_e95e00(); if (g_unwind) return; RELOAD();
/* e93a4d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e93a51: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93a54: mov ecx, dword ptr [eax + 0x30f20] */
  ecx = R32((uint32_t)(eax + 0x30f20u));
/* e93a5a: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93a60: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93a63: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93a66: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93a68: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e93a6a: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e93a6d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e93a6f: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e93a71: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e93a75: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93a78: mov eax, dword ptr [edx + 0x30f1c] */
  eax = R32((uint32_t)(edx + 0x30f1cu));
/* e93a7e: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e93a84: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e93a87: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* e93a8a: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e93a8c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e93a90: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93a93: mov edx, dword ptr [ecx + 0x30f5c] */
  edx = R32((uint32_t)(ecx + 0x30f5cu));
/* e93a99: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e93a9e: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e93aa1: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* e93aa4: mov ecx, dword ptr [esp + 0x4b0] */
  ecx = R32((uint32_t)(esp + 0x4b0u));
/* e93aab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93aad: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe93ab0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93ab0: add dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* e93ab2: mov ecx, dword ptr [esp + 0x49c] */
  ecx = R32((uint32_t)(esp + 0x49cu));
/* e93ab9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e93aba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e93abb: mov eax, ebx */
  eax = ebx;
/* e93abd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e93abe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e93ac5: add esp, 0x49c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x49cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e93acb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e93ad0(void) {
  LOAD_REGS();
L_e93ad0: /* e93ad0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e93ad2: push 0xead004 */
  { uint32_t v = 0xead004u; esp -= 4; W32(esp, v); }
/* e93ad7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e93add: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93ade: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e93ae5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e93ae8: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93aee: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e93af2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e93af5: mov ecx, dword ptr [eax + 0x30f28] */
  ecx = R32((uint32_t)(eax + 0x30f28u));
/* e93afb: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93afe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e93aff: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93b02: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93b04: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e93b06: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e93b0a: xor ebp, ebp */
  ebp = 0;
/* e93b0c: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93b0e: je 0xe93be4 */
  if (zf) goto L_e93be4;
L_e93b14: /* e93b14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93b16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e93b17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93b18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93b19: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe93b1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93b1b: mov edi, eax */
  edi = eax;
/* e93b1d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e93b21: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93b24: mov ebx, edx */
  ebx = edx;
/* e93b26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e93b27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93b28: call 0xe8bdd0 */
  esp -= 4; W32(esp, 0xe93b2du); SPILL(); f_e8bdd0(); if (g_unwind) return; RELOAD();
/* e93b2d: mov esi, eax */
  esi = eax;
/* e93b2f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93b31: jne 0xe93b71 */
  if (!zf) goto L_e93b71;
L_e93b33: /* e93b33: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e93b39: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e93b3b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93b3d: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e93b42: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* e93b44: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe93b46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93b46: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e93b4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93b4c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* e93b50: je 0xe93b65 */
  if (zf) goto L_e93b65;
L_e93b52: /* e93b52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e93b56: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93b59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e93b5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93b5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93b5c: mov ecx, eax */
  ecx = eax;
/* e93b5e: call 0xe98620 */
  esp -= 4; W32(esp, 0xe93b63u); SPILL(); f_e98620(); if (g_unwind) return; RELOAD();
/* e93b63: jmp 0xe93b67 */
  goto L_e93b67;
L_e93b65: /* e93b65: xor eax, eax */
  eax = 0;
L_e93b67: /* e93b67: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* e93b6f: mov esi, eax */
  esi = eax;
L_e93b71: /* e93b71: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e93b75: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e93b77: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xe93b7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93b7a: cmp dword ptr [esi + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93b7d: je 0xe93b90 */
  if (zf) goto L_e93b90;
L_e93b7f: /* e93b7f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e93b83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93b84: mov ecx, esi */
  ecx = esi;
/* e93b86: call 0xe9a3e0 */
  esp -= 4; W32(esp, 0xe93b8bu); SPILL(); f_e9a3e0(); if (g_unwind) return; RELOAD();
/* e93b8b: mov ebp, 1 */
  ebp = 0x1u;
L_e93b90: /* e93b90: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93b94: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93b97: mov ecx, dword ptr [eax + 0x46a8] */
  ecx = R32((uint32_t)(eax + 0x46a8u));
/* e93b9d: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* e93ba0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e93ba4: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e93baa: mov dword ptr [eax + 0x180], esi */
  W32((uint32_t)(eax + 0x180u), esi);
/* e93bb0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e93bb4: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e93bba: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e93bbe: mov dword ptr [edx + 0x184], eax */
  W32((uint32_t)(edx + 0x184u), eax);
/* e93bc4: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e93bc8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e93bcc: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* e93bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93bd0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93bd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93bd4: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93bda: call 0xe95e40 */
  esp -= 4; W32(esp, 0xe93bdfu); SPILL(); f_e95e40(); if (g_unwind) return; RELOAD();
/* e93bdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e93be0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e93be1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e93be2: jmp 0xe93c20 */
  goto L_e93c20;
L_e93be4: /* e93be4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e93be8: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93bee: cmp dword ptr [eax + 0x180], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x180u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93bf4: je 0xe93c20 */
  if (zf) goto L_e93c20;
L_e93bf6: /* e93bf6: mov dword ptr [eax + 0x180], ebp */
  W32((uint32_t)(eax + 0x180u), ebp);
/* e93bfc: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e93c00: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e93c06: mov dword ptr [eax + 0x184], ebp */
  W32((uint32_t)(eax + 0x184u), ebp);
/* e93c0c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e93c10: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e93c13: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e93c14: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e93c15: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93c1b: call 0xe95e40 */
  esp -= 4; W32(esp, 0xe93c20u); SPILL(); f_e95e40(); if (g_unwind) return; RELOAD();
L_e93c20: /* e93c20: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e93c24: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93c27: mov ecx, dword ptr [eax + 0x30f28] */
  ecx = R32((uint32_t)(eax + 0x30f28u));
/* e93c2d: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93c33: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93c36: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93c39: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93c3b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93c3d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e93c40: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e93c42: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e93c44: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e93c48: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93c4b: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e93c51: mov eax, dword ptr [edx + 0x30f24] */
  eax = R32((uint32_t)(edx + 0x30f24u));
/* e93c57: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e93c5a: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* e93c5d: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* e93c60: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e93c61: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93c63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e93c65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e93c66: je 0xe93c82 */
  if (zf) goto L_e93c82;
L_e93c68: /* e93c68: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e93c6c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e93c6e: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe93c71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93c71: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93c75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e93c7c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e93c7f: ret 8 */
  esp += 12; SPILL(); return;
L_e93c82: /* e93c82: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93c86: xor eax, eax */
  eax = 0;
/* e93c88: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e93c8f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e93c92: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e93ca0(void) {
  LOAD_REGS();
L_e93ca0: /* e93ca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e93ca2: push 0xead024 */
  { uint32_t v = 0xead024u; esp -= 4; W32(esp, v); }
/* e93ca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e93cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93cae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e93cb5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e93cb8: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93cbe: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e93cc2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e93cc5: mov ecx, dword ptr [eax + 0x30f30] */
  ecx = R32((uint32_t)(eax + 0x30f30u));
/* e93ccb: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93cce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93ccf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93cd0: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93cd3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93cd5: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e93cd7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e93cdb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93cdd: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe93ce0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93ce0: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93ce3: jne 0xe93d52 */
  if (!zf) goto L_e93d52;
L_e93ce5: /* e93ce5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e93ce9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93cec: mov eax, dword ptr [ecx + 0x40c4] */
  eax = R32((uint32_t)(ecx + 0x40c4u));
/* e93cf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93cf4: jne 0xe93d43 */
  if (!zf) goto L_e93d43;
L_e93cf6: /* e93cf6: mov edx, dword ptr [0xeae014] */
  edx = R32((uint32_t)(0xeae014u));
/* e93cfc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e93cfe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e93d00: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e93d05: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* e93d07: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe93d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93d09: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e93d0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93d0f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e93d17: je 0xe93d2c */
  if (zf) goto L_e93d2c;
L_e93d19: /* e93d19: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93d1d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93d20: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e93d22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93d23: mov ecx, eax */
  ecx = eax;
/* e93d25: call 0xe9aff0 */
  esp -= 4; W32(esp, 0xe93d2au); SPILL(); f_e9aff0(); if (g_unwind) return; RELOAD();
/* e93d2a: jmp 0xe93d2e */
  goto L_e93d2e;
L_e93d2c: /* e93d2c: xor eax, eax */
  eax = 0;
L_e93d2e: /* e93d2e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93d32: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93d35: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* e93d3d: mov dword ptr [edx + 0x40c4], eax */
  W32((uint32_t)(edx + 0x40c4u), eax);
L_e93d43: /* e93d43: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e93d47: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93d4a: mov esi, dword ptr [ecx + 0x40c4] */
  esi = R32((uint32_t)(ecx + 0x40c4u));
/* e93d50: jmp 0xe93dbd */
  goto L_e93dbd;
L_e93d52: /* e93d52: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e93d56: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93d59: mov ecx, dword ptr [eax + 0x40c0] */
  ecx = R32((uint32_t)(eax + 0x40c0u));
/* e93d5f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93d61: jne 0xe93db0 */
  if (!zf) goto L_e93db0;
L_e93d63: /* e93d63: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e93d69: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e93d6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93d6d: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e93d72: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* e93d74: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe93d76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93d76: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e93d7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93d7c: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e93d84: je 0xe93d99 */
  if (zf) goto L_e93d99;
L_e93d86: /* e93d86: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93d8a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93d8d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e93d8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93d90: mov ecx, eax */
  ecx = eax;
/* e93d92: call 0xe9aff0 */
  esp -= 4; W32(esp, 0xe93d97u); SPILL(); f_e9aff0(); if (g_unwind) return; RELOAD();
/* e93d97: jmp 0xe93d9b */
  goto L_e93d9b;
L_e93d99: /* e93d99: xor eax, eax */
  eax = 0;
L_e93d9b: /* e93d9b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93d9f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93da2: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* e93daa: mov dword ptr [edx + 0x40c0], eax */
  W32((uint32_t)(edx + 0x40c0u), eax);
L_e93db0: /* e93db0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e93db4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93db7: mov esi, dword ptr [ecx + 0x40c0] */
  esi = R32((uint32_t)(ecx + 0x40c0u));
L_e93dbd: /* e93dbd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e93dc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93dc2: mov ecx, esi */
  ecx = esi;
/* e93dc4: call 0xe9a740 */
  esp -= 4; W32(esp, 0xe93dc9u); SPILL(); f_e9a740(); if (g_unwind) return; RELOAD();
/* e93dc9: mov edi, eax */
  edi = eax;
/* e93dcb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e93dcf: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e93dd5: mov dword ptr [ecx + 0x180], esi */
  W32((uint32_t)(ecx + 0x180u), esi);
/* e93ddb: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e93ddf: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e93de5: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e93de9: mov dword ptr [eax + 0x184], ecx */
  W32((uint32_t)(eax + 0x184u), ecx);
/* e93def: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e93df3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93df7: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e93dfa: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e93dfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93dff: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93e05: call 0xe95e40 */
  esp -= 4; W32(esp, 0xe93e0au); SPILL(); f_e95e40(); if (g_unwind) return; RELOAD();
/* e93e0a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e93e0e: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93e11: mov ecx, dword ptr [eax + 0x30f30] */
  ecx = R32((uint32_t)(eax + 0x30f30u));
/* e93e17: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93e1d: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93e20: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93e23: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93e25: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e93e27: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e93e2a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e93e2c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e93e2e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e93e32: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93e35: mov eax, dword ptr [edx + 0x30f2c] */
  eax = R32((uint32_t)(edx + 0x30f2cu));
/* e93e3b: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e93e41: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e93e44: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* e93e47: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e93e49: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e93e4d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e93e50: mov edx, dword ptr [ecx + 0x30f60] */
  edx = R32((uint32_t)(ecx + 0x30f60u));
/* e93e56: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e93e5b: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e93e5e: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* e93e61: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e93e65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e93e67: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe93e6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e93e6a: add dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* e93e6c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e93e70: mov eax, edi */
  eax = edi;
/* e93e72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e93e73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e93e74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e93e7b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e93e7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e93e90(void) {
  LOAD_REGS();
L_e93e90: /* e93e90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e93e91: mov ebp, esp */
  ebp = esp;
/* e93e93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e93e95: push 0xead02e */
  { uint32_t v = 0xead02eu; esp -= 4; W32(esp, v); }
/* e93e9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e93ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93ea1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e93ea8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e93eab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e93eac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93ead: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93eae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* e93eb1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* e93eb4: xor edi, edi */
  edi = 0;
L_e93eb6: /* e93eb6: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93ebc: cmp edi, dword ptr [eax + 0x54c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x54cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e93ec2: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e93ec5: jge 0xe94264 */
  if ((sf == of)) goto L_e94264;
L_e93ecb: /* e93ecb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93ece: mov esi, dword ptr [edx + 0x4124] */
  esi = R32((uint32_t)(edx + 0x4124u));
/* e93ed4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93ed6: je 0xe93eea */
  if (zf) goto L_e93eea;
L_e93ed8: /* e93ed8: mov edx, dword ptr [eax + 0x55c] */
  edx = R32((uint32_t)(eax + 0x55cu));
/* e93ede: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93ee0: je 0xe93eea */
  if (zf) goto L_e93eea;
L_e93ee2: /* e93ee2: cmp edx, dword ptr [eax + 0x558] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x558u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93ee8: je 0xe93f35 */
  if (zf) goto L_e93f35;
L_e93eea: /* e93eea: mov edx, dword ptr [eax + 0x188] */
  edx = R32((uint32_t)(eax + 0x188u));
/* e93ef0: mov eax, dword ptr [eax + edi*4 + 0x52c] */
  eax = R32((uint32_t)(eax + edi*4 + 0x52cu));
/* e93ef7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93ef9: call 0xe91e50 */
  esp -= 4; W32(esp, 0xe93efeu); SPILL(); f_e91e50(); if (g_unwind) return; RELOAD();
/* e93efe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e93f01: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93f07: mov edx, dword ptr [eax + 0x518] */
  edx = R32((uint32_t)(eax + 0x518u));
/* e93f0d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f0f: je 0xe93f35 */
  if (zf) goto L_e93f35;
L_e93f11: /* e93f11: mov eax, dword ptr [eax + 0x550] */
  eax = R32((uint32_t)(eax + 0x550u));
/* e93f17: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* e93f1a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f1c: je 0xe93f35 */
  if (zf) goto L_e93f35;
L_e93f1e: /* e93f1e: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* e93f21: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e93f24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93f25: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e93f27: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93f2d: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe93f32u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e93f32: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_e93f35: /* e93f35: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* e93f38: mov eax, dword ptr [esi + 0x4124] */
  eax = R32((uint32_t)(esi + 0x4124u));
/* e93f3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f40: je 0xe93f70 */
  if (zf) goto L_e93f70;
L_e93f42: /* e93f42: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93f48: mov edx, dword ptr [eax + 0x55c] */
  edx = R32((uint32_t)(eax + 0x55cu));
/* e93f4e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f50: je 0xe93f70 */
  if (zf) goto L_e93f70;
L_e93f52: /* e93f52: cmp edx, dword ptr [eax + 0x558] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x558u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93f58: jne 0xe93f70 */
  if (!zf) goto L_e93f70;
L_e93f5a: /* e93f5a: mov ecx, dword ptr [ecx + 0x2b598] */
  ecx = R32((uint32_t)(ecx + 0x2b598u));
/* e93f60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93f61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93f62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93f63: lea ecx, [esi + 0x2fc9c] */
  ecx = (uint32_t)(esi + 0x2fc9cu);
/* e93f69: call 0xe97ec0 */
  esp -= 4; W32(esp, 0xe93f6eu); SPILL(); f_e97ec0(); if (g_unwind) return; RELOAD();
/* e93f6e: jmp 0xe93f90 */
  goto L_e93f90;
L_e93f70: /* e93f70: lea ecx, [esi + 0x2fc9c] */
  ecx = (uint32_t)(esi + 0x2fc9cu);
/* e93f76: call 0xe96cf0 */
  esp -= 4; W32(esp, 0xe93f7bu); SPILL(); f_e96cf0(); if (g_unwind) return; RELOAD();
/* e93f7b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e93f7e: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e93f84: mov ecx, dword ptr [eax + 0x558] */
  ecx = R32((uint32_t)(eax + 0x558u));
/* e93f8a: mov dword ptr [eax + 0x55c], ecx */
  W32((uint32_t)(eax + 0x55cu), ecx);
L_e93f90: /* e93f90: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e93f93: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93f96: mov ecx, dword ptr [eax + 0x30f38] */
  ecx = R32((uint32_t)(eax + 0x30f38u));
/* e93f9c: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93fa2: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93fa5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e93fac: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93faf: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93fb1: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e93fb3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e93fb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93fb8: jne 0xe9404e */
  if (!zf) goto L_e9404e;
L_e93fbe: /* e93fbe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e93fc1: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e93fc7: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e93fcd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93fcf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e93fd2: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e93fd8: je 0xe93ff4 */
  if (zf) goto L_e93ff4;
L_e93fda: /* e93fda: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e93fdd: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e93fe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93fe1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e93fe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93fe5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e93fe8: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e93fea: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e93feb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93fec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93fed: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e93fef: jmp 0xe9413c */
  goto L_e9413c;
L_e93ff4: /* e93ff4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e93ff7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e93ff9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93ffa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e93ffd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93ffe: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94001: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe94007u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94007: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9400a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9400d: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e94013: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94018: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9401b: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9401e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e94021: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
L_e94024: /* e94024: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
L_e94026: /* e94026: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e94029: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e9402c: mov ecx, dword ptr [eax + 0x30f38] */
  ecx = R32((uint32_t)(eax + 0x30f38u));
/* e94032: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e94038: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e9403b: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e9403e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e94040: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e94042: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e94045: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e94047: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e94049: jmp 0xe94223 */
  goto L_e94223;
L_e9404e: /* e9404e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94051: jne 0xe940be */
  if (!zf) goto L_e940be;
L_e94053: /* e94053: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e94056: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e9405c: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e94062: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94064: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e94067: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9406d: je 0xe94089 */
  if (zf) goto L_e94089;
L_e9406f: /* e9406f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e94072: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e94075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94076: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e94079: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9407a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e9407d: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e9407f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e94080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94081: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94082: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e94084: jmp 0xe9413c */
  goto L_e9413c;
L_e94089: /* e94089: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9408c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9408d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e94090: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94091: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
L_e94093: /* e94093: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94096: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe9409cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9409c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9409f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e940a2: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e940a8: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e940ad: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e940b0: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e940b3: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e940b6: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e940b9: jmp 0xe94024 */
  goto L_e94024;
L_e940be: /* e940be: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e940c1: jne 0xe94102 */
  if (!zf) goto L_e94102;
L_e940c3: /* e940c3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e940c6: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e940cc: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e940d2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e940d4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e940d7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e940dd: je 0xe940f6 */
  if (zf) goto L_e940f6;
L_e940df: /* e940df: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e940e2: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e940e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e940e6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e940e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e940ea: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e940ed: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e940ef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e940f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e940f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e940f2: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e940f4: jmp 0xe9413c */
  goto L_e9413c;
L_e940f6: /* e940f6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e940f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e940fa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e940fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e940fe: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e94100: jmp 0xe94093 */
  goto L_e94093;
L_e94102: /* e94102: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94105: jne 0xe941a4 */
  if (!zf) goto L_e941a4;
L_e9410b: /* e9410b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9410e: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e94114: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e9411a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9411c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e9411f: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e94125: je 0xe94172 */
  if (zf) goto L_e94172;
L_e94127: /* e94127: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9412a: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e9412d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9412e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e94131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94132: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e94135: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e94137: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e94138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94139: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9413a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_e9413c: /* e9413c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9413e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9413f: call dword ptr [edx + 0x11c] */
  { uint32_t t = R32((uint32_t)(edx + 0x11cu)); esp -= 4; W32(esp, 0xe94145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94145: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e94148: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e9414b: mov ecx, dword ptr [eax + 0x30f40] */
  ecx = R32((uint32_t)(eax + 0x30f40u));
/* e94151: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e94157: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e9415a: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* e9415d: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* e94160: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e94163: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* e94166: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e94168: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e94169: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9416b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e9416d: jmp 0xe94026 */
  goto L_e94026;
L_e94172: /* e94172: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e94175: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94177: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94178: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e9417b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9417c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9417e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9417f: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe94185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94185: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e94188: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9418b: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e94191: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94196: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e94199: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9419c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9419f: jmp 0xe94024 */
  goto L_e94024;
L_e941a4: /* e941a4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e941a7: jne 0xe94026 */
  if (!zf) goto L_e94026;
L_e941ad: /* e941ad: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e941b0: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e941b6: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e941bc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e941be: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e941c1: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e941c7: je 0xe941e3 */
  if (zf) goto L_e941e3;
L_e941c9: /* e941c9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e941cc: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e941cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e941d0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e941d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e941d4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e941d7: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e941d9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e941da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e941db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e941dc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e941de: jmp 0xe9413c */
  goto L_e9413c;
L_e941e3: /* e941e3: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e941e6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e941e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e941e9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e941ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e941ed: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e941ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e941f0: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe941f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e941f6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e941f9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e941fc: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e94202: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94207: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9420a: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9420d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e94210: lea ecx, [edx + edx] */
  ecx = (uint32_t)(edx + edx);
/* e94213: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* e94215: jmp 0xe94026 */
  goto L_e94026;
L_e94223: /* e94223: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e94226: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e9422c: mov edx, dword ptr [ecx + 0x554] */
  edx = R32((uint32_t)(ecx + 0x554u));
/* e94232: mov dword ptr [eax + 0x2b598], edx */
  W32((uint32_t)(eax + 0x2b598u), edx);
/* e94238: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9423b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9423e: mov edx, dword ptr [ecx + 0x30f3c] */
  edx = R32((uint32_t)(ecx + 0x30f3cu));
/* e94244: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94249: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9424c: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9424f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e94252: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* e94254: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e94257: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* e9425e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e9425f: jmp 0xe93eb6 */
  goto L_e93eb6;
L_e94264: /* e94264: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e94267: mov ecx, dword ptr [eax + 0x30f34] */
  ecx = R32((uint32_t)(eax + 0x30f34u));
/* e9426d: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e94273: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e94276: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e94279: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9427b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9427c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9427d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9427f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e94282: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e94283: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9428a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9428b: mov esp, ebp */
  esp = ebp;
/* e9428d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9428e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_e9421a(void) {
  LOAD_REGS();
L_e9421a: /* e9421a: mov eax, 0xe94220 */
  eax = 0xe94220u;
/* e9421f: ret  */
  esp += 4; SPILL(); return;
}

void f_e94220(void) {
  LOAD_REGS();
  goto L_e94220;
L_e93eb6: /* e93eb6: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93ebc: cmp edi, dword ptr [eax + 0x54c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x54cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e93ec2: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e93ec5: jge 0xe94264 */
  if ((sf == of)) goto L_e94264;
L_e93ecb: /* e93ecb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e93ece: mov esi, dword ptr [edx + 0x4124] */
  esi = R32((uint32_t)(edx + 0x4124u));
/* e93ed4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93ed6: je 0xe93eea */
  if (zf) goto L_e93eea;
L_e93ed8: /* e93ed8: mov edx, dword ptr [eax + 0x55c] */
  edx = R32((uint32_t)(eax + 0x55cu));
/* e93ede: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93ee0: je 0xe93eea */
  if (zf) goto L_e93eea;
L_e93ee2: /* e93ee2: cmp edx, dword ptr [eax + 0x558] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x558u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93ee8: je 0xe93f35 */
  if (zf) goto L_e93f35;
L_e93eea: /* e93eea: mov edx, dword ptr [eax + 0x188] */
  edx = R32((uint32_t)(eax + 0x188u));
/* e93ef0: mov eax, dword ptr [eax + edi*4 + 0x52c] */
  eax = R32((uint32_t)(eax + edi*4 + 0x52cu));
/* e93ef7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93ef9: call 0xe91e50 */
  esp -= 4; W32(esp, 0xe93efeu); SPILL(); f_e91e50(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD();
/* e93efe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e93f01: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93f07: mov edx, dword ptr [eax + 0x518] */
  edx = R32((uint32_t)(eax + 0x518u));
/* e93f0d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f0f: je 0xe93f35 */
  if (zf) goto L_e93f35;
L_e93f11: /* e93f11: mov eax, dword ptr [eax + 0x550] */
  eax = R32((uint32_t)(eax + 0x550u));
/* e93f17: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* e93f1a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f1c: je 0xe93f35 */
  if (zf) goto L_e93f35;
L_e93f1e: /* e93f1e: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* e93f21: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e93f24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93f25: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e93f27: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e93f2d: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe93f32u); SPILL(); f_e95dd0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD();
/* e93f32: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_e93f35: /* e93f35: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* e93f38: mov eax, dword ptr [esi + 0x4124] */
  eax = R32((uint32_t)(esi + 0x4124u));
/* e93f3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f40: je 0xe93f70 */
  if (zf) goto L_e93f70;
L_e93f42: /* e93f42: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e93f48: mov edx, dword ptr [eax + 0x55c] */
  edx = R32((uint32_t)(eax + 0x55cu));
/* e93f4e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93f50: je 0xe93f70 */
  if (zf) goto L_e93f70;
L_e93f52: /* e93f52: cmp edx, dword ptr [eax + 0x558] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x558u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e93f58: jne 0xe93f70 */
  if (!zf) goto L_e93f70;
L_e93f5a: /* e93f5a: mov ecx, dword ptr [ecx + 0x2b598] */
  ecx = R32((uint32_t)(ecx + 0x2b598u));
/* e93f60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93f61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e93f62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e93f63: lea ecx, [esi + 0x2fc9c] */
  ecx = (uint32_t)(esi + 0x2fc9cu);
/* e93f69: call 0xe97ec0 */
  esp -= 4; W32(esp, 0xe93f6eu); SPILL(); f_e97ec0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD();
/* e93f6e: jmp 0xe93f90 */
  goto L_e93f90;
L_e93f70: /* e93f70: lea ecx, [esi + 0x2fc9c] */
  ecx = (uint32_t)(esi + 0x2fc9cu);
/* e93f76: call 0xe96cf0 */
  esp -= 4; W32(esp, 0xe93f7bu); SPILL(); f_e96cf0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD();
/* e93f7b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e93f7e: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e93f84: mov ecx, dword ptr [eax + 0x558] */
  ecx = R32((uint32_t)(eax + 0x558u));
/* e93f8a: mov dword ptr [eax + 0x55c], ecx */
  W32((uint32_t)(eax + 0x55cu), ecx);
L_e93f90: /* e93f90: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e93f93: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e93f96: mov ecx, dword ptr [eax + 0x30f38] */
  ecx = R32((uint32_t)(eax + 0x30f38u));
/* e93f9c: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e93fa2: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e93fa5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e93fac: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e93faf: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e93fb1: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e93fb3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e93fb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93fb8: jne 0xe9404e */
  if (!zf) goto L_e9404e;
L_e93fbe: /* e93fbe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e93fc1: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e93fc7: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e93fcd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e93fcf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e93fd2: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e93fd8: je 0xe93ff4 */
  if (zf) goto L_e93ff4;
L_e93fda: /* e93fda: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e93fdd: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e93fe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93fe1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e93fe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93fe5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e93fe8: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e93fea: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e93feb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e93fec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e93fed: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e93fef: jmp 0xe9413c */
  goto L_e9413c;
L_e93ff4: /* e93ff4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e93ff7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e93ff9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93ffa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e93ffd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e93ffe: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94001: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe94007u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD(); }
/* e94007: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9400a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9400d: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e94013: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94018: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9401b: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9401e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e94021: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
L_e94024: /* e94024: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
L_e94026: /* e94026: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e94029: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e9402c: mov ecx, dword ptr [eax + 0x30f38] */
  ecx = R32((uint32_t)(eax + 0x30f38u));
/* e94032: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e94038: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e9403b: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e9403e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e94040: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e94042: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e94045: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e94047: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e94049: jmp 0xe94223 */
  goto L_e94223;
L_e9404e: /* e9404e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94051: jne 0xe940be */
  if (!zf) goto L_e940be;
L_e94053: /* e94053: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e94056: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e9405c: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e94062: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94064: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e94067: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9406d: je 0xe94089 */
  if (zf) goto L_e94089;
L_e9406f: /* e9406f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e94072: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e94075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94076: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e94079: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9407a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e9407d: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e9407f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e94080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94081: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94082: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e94084: jmp 0xe9413c */
  goto L_e9413c;
L_e94089: /* e94089: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9408c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9408d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e94090: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94091: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
L_e94093: /* e94093: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94096: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe9409cu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD(); }
/* e9409c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9409f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e940a2: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e940a8: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e940ad: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e940b0: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e940b3: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e940b6: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e940b9: jmp 0xe94024 */
  goto L_e94024;
L_e940be: /* e940be: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e940c1: jne 0xe94102 */
  if (!zf) goto L_e94102;
L_e940c3: /* e940c3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e940c6: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e940cc: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e940d2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e940d4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e940d7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e940dd: je 0xe940f6 */
  if (zf) goto L_e940f6;
L_e940df: /* e940df: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e940e2: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e940e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e940e6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e940e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e940ea: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e940ed: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e940ef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e940f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e940f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e940f2: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e940f4: jmp 0xe9413c */
  goto L_e9413c;
L_e940f6: /* e940f6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e940f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e940fa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e940fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e940fe: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e94100: jmp 0xe94093 */
  goto L_e94093;
L_e94102: /* e94102: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94105: jne 0xe941a4 */
  if (!zf) goto L_e941a4;
L_e9410b: /* e9410b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9410e: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e94114: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e9411a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9411c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e9411f: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e94125: je 0xe94172 */
  if (zf) goto L_e94172;
L_e94127: /* e94127: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9412a: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e9412d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9412e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e94131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94132: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e94135: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e94137: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e94138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94139: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9413a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_e9413c: /* e9413c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9413e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9413f: call dword ptr [edx + 0x11c] */
  { uint32_t t = R32((uint32_t)(edx + 0x11cu)); esp -= 4; W32(esp, 0xe94145u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD(); }
/* e94145: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e94148: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e9414b: mov ecx, dword ptr [eax + 0x30f40] */
  ecx = R32((uint32_t)(eax + 0x30f40u));
/* e94151: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e94157: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e9415a: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* e9415d: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* e94160: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e94163: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* e94166: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e94168: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e94169: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9416b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e9416d: jmp 0xe94026 */
  goto L_e94026;
L_e94172: /* e94172: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e94175: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94177: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94178: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e9417b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9417c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9417e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9417f: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe94185u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD(); }
/* e94185: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e94188: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9418b: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e94191: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94196: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e94199: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9419c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9419f: jmp 0xe94024 */
  goto L_e94024;
L_e941a4: /* e941a4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e941a7: jne 0xe94026 */
  if (!zf) goto L_e94026;
L_e941ad: /* e941ad: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e941b0: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e941b6: mov edx, dword ptr [ecx + 0x180] */
  edx = R32((uint32_t)(ecx + 0x180u));
/* e941bc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e941be: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e941c1: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e941c7: je 0xe941e3 */
  if (zf) goto L_e941e3;
L_e941c9: /* e941c9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e941cc: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* e941cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e941d0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e941d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e941d4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e941d7: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e941d9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e941da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e941db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e941dc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e941de: jmp 0xe9413c */
  goto L_e9413c;
L_e941e3: /* e941e3: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e941e6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e941e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e941e9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e941ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e941ed: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e941ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e941f0: call dword ptr [ecx + 0x118] */
  { uint32_t t = R32((uint32_t)(ecx + 0x118u)); esp -= 4; W32(esp, 0xe941f6u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0xe94220u: guest_unwind_done(); RELOAD(); goto L_e94220; } return; } RELOAD(); }
/* e941f6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e941f9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e941fc: mov edx, dword ptr [ecx + 0x30f40] */
  edx = R32((uint32_t)(ecx + 0x30f40u));
/* e94202: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94207: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9420a: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9420d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e94210: lea ecx, [edx + edx] */
  ecx = (uint32_t)(edx + edx);
/* e94213: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* e94215: jmp 0xe94026 */
  goto L_e94026;
L_e94220: /* e94220: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_e94223: /* e94223: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e94226: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e9422c: mov edx, dword ptr [ecx + 0x554] */
  edx = R32((uint32_t)(ecx + 0x554u));
/* e94232: mov dword ptr [eax + 0x2b598], edx */
  W32((uint32_t)(eax + 0x2b598u), edx);
/* e94238: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9423b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9423e: mov edx, dword ptr [ecx + 0x30f3c] */
  edx = R32((uint32_t)(ecx + 0x30f3cu));
/* e94244: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94249: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9424c: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9424f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e94252: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* e94254: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e94257: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* e9425e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e9425f: jmp 0xe93eb6 */
  goto L_e93eb6;
L_e94264: /* e94264: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e94267: mov ecx, dword ptr [eax + 0x30f34] */
  ecx = R32((uint32_t)(eax + 0x30f34u));
/* e9426d: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e94273: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e94276: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e94279: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9427b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9427c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9427d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9427f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e94282: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e94283: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9428a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9428b: mov esp, ebp */
  esp = ebp;
/* e9428d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9428e: ret 0x14 */
  esp += 24; SPILL(); return;
}
