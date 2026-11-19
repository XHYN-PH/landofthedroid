#include "recomp.h"
#include "rec_mod.h"

void f_f805c0(void) {
  LOAD_REGS();
L_f805c0: /* f805c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f805c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f805c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f805c6: mov esi, ecx */
  esi = ecx;
/* f805c8: call 0xf71a28 */
  esp -= 4; W32(esp, 0xf805cdu); SPILL(); f_f71a28(); if (g_unwind) return; RELOAD();
/* f805cd: mov eax, esi */
  eax = esi;
/* f805cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f805d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f805f0(void) {
  LOAD_REGS();
L_f805f0: /* f805f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f805f2: push 0xf99539 */
  { uint32_t v = 0xf99539u; esp -= 4; W32(esp, v); }
/* f805f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f805fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f805fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f80605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80606: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80608: mov esi, ecx */
  esi = ecx;
/* f8060a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8060b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f8060f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f80612: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f80614: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f8061a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f80622: jge 0xf80638 */
  if ((sf == of)) goto L_f80638;
L_f80624: /* f80624: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f80629: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f8062e: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f80633: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf80635u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80635: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80638: /* f80638: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8063b: jle 0xf80651 */
  if ((zf || sf != of)) goto L_f80651;
L_f8063d: /* f8063d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80642: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80647: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8064c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8064eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8064e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80651: /* f80651: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80653: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80654: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80656: mov ecx, esi */
  ecx = esi;
/* f80658: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8065eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8065e: mov ecx, esi */
  ecx = esi;
/* f80660: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f80668: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf8066eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f8066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f80672: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80673: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80674: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80675: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8067c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8067f: ret  */
  esp += 4; SPILL(); return;
}

void f_f806b0(void) {
  LOAD_REGS();
L_f806b0: /* f806b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f806b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f806b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f806b6: mov esi, ecx */
  esi = ecx;
/* f806b8: call 0xf71fb4 */
  esp -= 4; W32(esp, 0xf806bdu); SPILL(); f_f71fb4(); if (g_unwind) return; RELOAD();
/* f806bd: mov eax, esi */
  eax = esi;
/* f806bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f806c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f806e0(void) {
  LOAD_REGS();
L_f806e0: /* f806e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f806e2: push 0xf99559 */
  { uint32_t v = 0xf99559u; esp -= 4; W32(esp, v); }
/* f806e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f806ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f806ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f806f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f806f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f806f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f806f8: mov esi, ecx */
  esi = ecx;
/* f806fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f806fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f806ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f80702: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f80704: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f8070a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f80712: jge 0xf80728 */
  if ((sf == of)) goto L_f80728;
L_f80714: /* f80714: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f80719: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f8071e: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f80723: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf80725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80728: /* f80728: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8072b: jle 0xf80741 */
  if ((zf || sf != of)) goto L_f80741;
L_f8072d: /* f8072d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80732: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80737: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8073c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8073eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8073e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80741: /* f80741: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80744: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80746: mov ecx, esi */
  ecx = esi;
/* f80748: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8074eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8074e: mov ecx, esi */
  ecx = esi;
/* f80750: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f80758: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf8075eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f8075e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f80762: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80763: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80764: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80765: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8076c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8076f: ret  */
  esp += 4; SPILL(); return;
}

void f_f807a0(void) {
  LOAD_REGS();
L_f807a0: /* f807a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f807a1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* f807a5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f807a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f807a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f807a9: mov esi, dword ptr [0xfce328] */
  esi = R32((uint32_t)(0xfce328u));
/* f807af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f807b0: mov ebp, ecx */
  ebp = ecx;
/* f807b2: jge 0xf807c8 */
  if ((sf == of)) goto L_f807c8;
L_f807b4: /* f807b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f807b9: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f807be: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f807c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf807c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f807c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f807c8: /* f807c8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f807cb: jle 0xf807e1 */
  if ((zf || sf != of)) goto L_f807e1;
L_f807cd: /* f807cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f807d2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f807d7: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f807dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf807deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f807de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f807e1: /* f807e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f807e5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* f807e8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f807eb: jle 0xf80801 */
  if ((zf || sf != of)) goto L_f80801;
L_f807ed: /* f807ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f807f2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f807f7: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f807fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf807feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f807fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80801: /* f80801: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f80803: jge 0xf80820 */
  if ((sf == of)) goto L_f80820;
L_f80805: /* f80805: mov esi, ebx */
  esi = ebx;
/* f80807: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* f8080a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f8080c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f80810: /* f80810: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* f80813: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f80815: call 0xf71172 */
  esp -= 4; W32(esp, 0xf8081au); SPILL(); f_f71172(); if (g_unwind) return; RELOAD();
/* f8081a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f8081d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* f8081e: jne 0xf80810 */
  if (!zf) goto L_f80810;
L_f80820: /* f80820: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f80824: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f80826: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80827: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80828: mov ecx, ebp */
  ecx = ebp;
/* f8082a: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf80830u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f80830: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80831: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80832: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f80833: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80834: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f80870(void) {
  LOAD_REGS();
L_f80870: /* f80870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80872: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80873: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f80877: mov esi, ecx */
  esi = ecx;
/* f80879: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8087b: je 0xf808bd */
  if (zf) goto L_f808bd;
L_f8087d: /* f8087d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f80880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f80881: call 0xf71faa */
  esp -= 4; W32(esp, 0xf80886u); SPILL(); f_f71faa(); if (g_unwind) return; RELOAD();
/* f80886: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f80889: xor ebx, ebx */
  ebx = 0;
/* f8088b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8088d: jle 0xf808bd */
  if ((zf || sf != of)) goto L_f808bd;
L_f8088f: /* f8088f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f80890: xor ebp, ebp */
  ebp = 0;
L_f80892: /* f80892: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f80894: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f80896: mov ecx, esi */
  ecx = esi;
/* f80898: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf8089eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f8089e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* f808a1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* f808a3: je 0xf808b1 */
  if (zf) goto L_f808b1;
L_f808a5: /* f808a5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f808a7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f808a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f808aa: mov ecx, eax */
  ecx = eax;
/* f808ac: call 0xf7165e */
  esp -= 4; W32(esp, 0xf808b1u); SPILL(); f_f7165e(); if (g_unwind) return; RELOAD();
L_f808b1: /* f808b1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f808b4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f808b5: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f808b8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f808ba: jl 0xf80892 */
  if ((sf != of)) goto L_f80892;
L_f808bc: /* f808bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_f808bd: /* f808bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f808be: mov eax, esi */
  eax = esi;
/* f808c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f808c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f808c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f808f0(void) {
  LOAD_REGS();
L_f808f0: /* f808f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f808f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* f808f5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f808f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f808f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f808f9: mov esi, dword ptr [0xfce328] */
  esi = R32((uint32_t)(0xfce328u));
/* f808ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80900: mov ebp, ecx */
  ebp = ecx;
/* f80902: jge 0xf80918 */
  if ((sf == of)) goto L_f80918;
L_f80904: /* f80904: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f80909: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f8090e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f80913: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf80915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80918: /* f80918: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8091b: jle 0xf80931 */
  if ((zf || sf != of)) goto L_f80931;
L_f8091d: /* f8091d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f80922: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80927: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f8092c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf8092eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8092e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80931: /* f80931: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f80935: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* f80938: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8093b: jle 0xf80951 */
  if ((zf || sf != of)) goto L_f80951;
L_f8093d: /* f8093d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80942: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80947: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8094c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf8094eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8094e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80951: /* f80951: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f80953: jge 0xf80970 */
  if ((sf == of)) goto L_f80970;
L_f80955: /* f80955: mov esi, ebx */
  esi = ebx;
/* f80957: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f8095a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f8095c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f80960: /* f80960: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* f80963: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f80965: call 0xf71a05 */
  esp -= 4; W32(esp, 0xf8096au); SPILL(); f_f71a05(); if (g_unwind) return; RELOAD();
/* f8096a: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f8096d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* f8096e: jne 0xf80960 */
  if (!zf) goto L_f80960;
L_f80970: /* f80970: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f80974: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f80976: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80977: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80978: mov ecx, ebp */
  ecx = ebp;
/* f8097a: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf80980u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f80980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80982: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f80983: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80984: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f809c0(void) {
  LOAD_REGS();
L_f809c0: /* f809c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f809c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f809c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f809c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f809c7: mov esi, ecx */
  esi = ecx;
/* f809c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f809cb: je 0xf80a0f */
  if (zf) goto L_f80a0f;
L_f809cd: /* f809cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f809d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f809d1: call 0xf711c2 */
  esp -= 4; W32(esp, 0xf809d6u); SPILL(); f_f711c2(); if (g_unwind) return; RELOAD();
/* f809d6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f809d9: xor ebx, ebx */
  ebx = 0;
/* f809db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f809dd: jle 0xf80a0f */
  if ((zf || sf != of)) goto L_f80a0f;
L_f809df: /* f809df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f809e0: xor ebp, ebp */
  ebp = 0;
L_f809e2: /* f809e2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f809e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f809e6: mov ecx, esi */
  ecx = esi;
/* f809e8: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf809eeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f809ee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f809f0: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f809f3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* f809f5: je 0xf80a03 */
  if (zf) goto L_f80a03;
L_f809f7: /* f809f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f809f9: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f809fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f809fc: mov ecx, eax */
  ecx = eax;
/* f809fe: call 0xf7123f */
  esp -= 4; W32(esp, 0xf80a03u); SPILL(); f_f7123f(); if (g_unwind) return; RELOAD();
L_f80a03: /* f80a03: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f80a06: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f80a07: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f80a0a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f80a0c: jl 0xf809e2 */
  if ((sf != of)) goto L_f809e2;
L_f80a0e: /* f80a0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_f80a0f: /* f80a0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80a10: mov eax, esi */
  eax = esi;
/* f80a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80a13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80a14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f80a40(void) {
  LOAD_REGS();
L_f80a40: /* f80a40: jmp 0xf7198d */
  SPILL(); f_f7198d(); return;
}

void f_f80a60(void) {
  LOAD_REGS();
L_f80a60: /* f80a60: jmp 0xf71b68 */
  SPILL(); f_f71b68(); return;
}

void f_f80a80(void) {
  LOAD_REGS();
L_f80a80: /* f80a80: jmp 0xf715fa */
  SPILL(); f_f715fa(); return;
}

void f_f80aa0(void) {
  LOAD_REGS();
L_f80aa0: /* f80aa0: jmp 0xf71a78 */
  SPILL(); f_f71a78(); return;
}

void f_f80ac0(void) {
  LOAD_REGS();
L_f80ac0: /* f80ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80ac1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f80ac2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80ac3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80ac4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f80ac8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80ac9: mov esi, ecx */
  esi = ecx;
/* f80acb: call dword ptr [0xfce508] */
  esp -= 4; W32(esp, 0xf80ad1u); SPILL(); f_6c26a8(); if (g_unwind) return; /* Engine!??4UBaseGUIController@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f80ad1: lea eax, [edi + 0x4c] */
  eax = (uint32_t)(edi + 0x4cu);
/* f80ad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f80ad5: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* f80ad8: call 0xf71dc0 */
  esp -= 4; W32(esp, 0xf80addu); SPILL(); f_f71dc0(); if (g_unwind) return; RELOAD();
/* f80add: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* f80ae0: lea edx, [edi + 0x5c] */
  edx = (uint32_t)(edi + 0x5cu);
/* f80ae3: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* f80ae6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f80ae7: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* f80aea: call 0xf72275 */
  esp -= 4; W32(esp, 0xf80aefu); SPILL(); f_f72275(); if (g_unwind) return; RELOAD();
/* f80aef: lea eax, [edi + 0x68] */
  eax = (uint32_t)(edi + 0x68u);
/* f80af2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f80af3: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* f80af6: call 0xf71177 */
  esp -= 4; W32(esp, 0xf80afbu); SPILL(); f_f71177(); if (g_unwind) return; RELOAD();
/* f80afb: lea ecx, [edi + 0x74] */
  ecx = (uint32_t)(edi + 0x74u);
/* f80afe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80aff: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* f80b02: call 0xf71492 */
  esp -= 4; W32(esp, 0xf80b07u); SPILL(); f_f71492(); if (g_unwind) return; RELOAD();
/* f80b07: lea edx, [edi + 0x80] */
  edx = (uint32_t)(edi + 0x80u);
/* f80b0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f80b0e: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* f80b14: call 0xf710e6 */
  esp -= 4; W32(esp, 0xf80b19u); SPILL(); f_f710e6(); if (g_unwind) return; RELOAD();
/* f80b19: lea eax, [edi + 0x8c] */
  eax = (uint32_t)(edi + 0x8cu);
/* f80b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f80b20: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* f80b26: call 0xf7208b */
  esp -= 4; W32(esp, 0xf80b2bu); SPILL(); f_f7208b(); if (g_unwind) return; RELOAD();
/* f80b2b: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* f80b31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80b32: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* f80b38: call 0xf71dc0 */
  esp -= 4; W32(esp, 0xf80b3du); SPILL(); f_f71dc0(); if (g_unwind) return; RELOAD();
/* f80b3d: mov dl, byte ptr [edi + 0xa4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xa4u))) & 0xffu);
/* f80b43: mov byte ptr [esi + 0xa4], dl */
  W8((uint32_t)(esi + 0xa4u), (edx & 0xffu));
/* f80b49: mov al, byte ptr [edi + 0xa5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xa5u))) & 0xffu);
/* f80b4f: mov ebx, dword ptr [esi + 0xb8] */
  ebx = R32((uint32_t)(esi + 0xb8u));
/* f80b55: mov byte ptr [esi + 0xa5], al */
  W8((uint32_t)(esi + 0xa5u), (eax & 0xffu));
/* f80b5b: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* f80b61: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* f80b67: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* f80b6d: mov dword ptr [esi + 0xac], edx */
  W32((uint32_t)(esi + 0xacu), edx);
/* f80b73: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* f80b79: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* f80b7f: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* f80b85: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* f80b8b: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* f80b91: xor edx, dword ptr [edi + 0xb8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f80b97: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f80b9a: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* f80b9c: mov dword ptr [esi + 0xb8], ebx */
  W32((uint32_t)(esi + 0xb8u), ebx);
/* f80ba2: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* f80ba8: mov ecx, ebx */
  ecx = ebx;
/* f80baa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80bac: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f80baf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80bb1: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* f80bb7: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* f80bbd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80bbf: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f80bc2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80bc4: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* f80bca: mov edx, dword ptr [edi + 0xbc] */
  edx = R32((uint32_t)(edi + 0xbcu));
/* f80bd0: mov dword ptr [esi + 0xbc], edx */
  W32((uint32_t)(esi + 0xbcu), edx);
/* f80bd6: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* f80bdc: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* f80be2: mov ecx, dword ptr [edi + 0xc4] */
  ecx = R32((uint32_t)(edi + 0xc4u));
/* f80be8: mov dword ptr [esi + 0xc4], ecx */
  W32((uint32_t)(esi + 0xc4u), ecx);
/* f80bee: mov edx, dword ptr [edi + 0xc8] */
  edx = R32((uint32_t)(edi + 0xc8u));
/* f80bf4: mov dword ptr [esi + 0xc8], edx */
  W32((uint32_t)(esi + 0xc8u), edx);
/* f80bfa: mov eax, dword ptr [edi + 0xcc] */
  eax = R32((uint32_t)(edi + 0xccu));
/* f80c00: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* f80c06: mov cl, byte ptr [edi + 0xd0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xd0u))) & 0xffu);
/* f80c0c: mov byte ptr [esi + 0xd0], cl */
  W8((uint32_t)(esi + 0xd0u), (ecx & 0xffu));
/* f80c12: mov dl, byte ptr [edi + 0xd1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xd1u))) & 0xffu);
/* f80c18: mov byte ptr [esi + 0xd1], dl */
  W8((uint32_t)(esi + 0xd1u), (edx & 0xffu));
/* f80c1e: mov al, byte ptr [edi + 0xd2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xd2u))) & 0xffu);
/* f80c24: mov byte ptr [esi + 0xd2], al */
  W8((uint32_t)(esi + 0xd2u), (eax & 0xffu));
/* f80c2a: mov cl, byte ptr [edi + 0xd3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xd3u))) & 0xffu);
/* f80c30: mov byte ptr [esi + 0xd3], cl */
  W8((uint32_t)(esi + 0xd3u), (ecx & 0xffu));
/* f80c36: mov edx, dword ptr [edi + 0xd4] */
  edx = R32((uint32_t)(edi + 0xd4u));
/* f80c3c: mov dword ptr [esi + 0xd4], edx */
  W32((uint32_t)(esi + 0xd4u), edx);
/* f80c42: mov eax, dword ptr [edi + 0xd8] */
  eax = R32((uint32_t)(edi + 0xd8u));
/* f80c48: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* f80c4e: mov ecx, dword ptr [edi + 0xdc] */
  ecx = R32((uint32_t)(edi + 0xdcu));
/* f80c54: mov dword ptr [esi + 0xdc], ecx */
  W32((uint32_t)(esi + 0xdcu), ecx);
/* f80c5a: mov edx, dword ptr [edi + 0xe0] */
  edx = R32((uint32_t)(edi + 0xe0u));
/* f80c60: mov dword ptr [esi + 0xe0], edx */
  W32((uint32_t)(esi + 0xe0u), edx);
/* f80c66: mov eax, dword ptr [edi + 0xe4] */
  eax = R32((uint32_t)(edi + 0xe4u));
/* f80c6c: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* f80c72: mov ecx, dword ptr [edi + 0xe8] */
  ecx = R32((uint32_t)(edi + 0xe8u));
/* f80c78: mov dword ptr [esi + 0xe8], ecx */
  W32((uint32_t)(esi + 0xe8u), ecx);
/* f80c7e: mov edx, dword ptr [edi + 0xec] */
  edx = R32((uint32_t)(edi + 0xecu));
/* f80c84: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* f80c8a: mov eax, dword ptr [edi + 0xf0] */
  eax = R32((uint32_t)(edi + 0xf0u));
/* f80c90: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* f80c96: mov ecx, dword ptr [edi + 0xf4] */
  ecx = R32((uint32_t)(edi + 0xf4u));
/* f80c9c: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* f80ca2: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* f80ca8: mov ebp, dword ptr [esi + 0x114] */
  ebp = R32((uint32_t)(esi + 0x114u));
/* f80cae: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f80cb4: mov eax, dword ptr [edi + 0xfc] */
  eax = R32((uint32_t)(edi + 0xfcu));
/* f80cba: mov dword ptr [esi + 0xfc], eax */
  W32((uint32_t)(esi + 0xfcu), eax);
/* f80cc0: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* f80cc6: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* f80ccc: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* f80cd2: mov dword ptr [esi + 0x104], edx */
  W32((uint32_t)(esi + 0x104u), edx);
/* f80cd8: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* f80cde: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* f80ce4: mov ecx, dword ptr [edi + 0x10c] */
  ecx = R32((uint32_t)(edi + 0x10cu));
/* f80cea: mov eax, dword ptr [esi + 0x114] */
  eax = R32((uint32_t)(esi + 0x114u));
/* f80cf0: mov dword ptr [esi + 0x10c], ecx */
  W32((uint32_t)(esi + 0x10cu), ecx);
/* f80cf6: mov edx, dword ptr [edi + 0x110] */
  edx = R32((uint32_t)(edi + 0x110u));
/* f80cfc: mov dword ptr [esi + 0x110], edx */
  W32((uint32_t)(esi + 0x110u), edx);
/* f80d02: xor eax, dword ptr [edi + 0x114] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x114u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80d08: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f80d0b: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* f80d0d: mov dword ptr [esi + 0x114], ebp */
  W32((uint32_t)(esi + 0x114u), ebp);
/* f80d13: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* f80d19: mov ecx, ebp */
  ecx = ebp;
/* f80d1b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80d1d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f80d20: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80d22: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* f80d28: mov ecx, dword ptr [edi + 0x114] */
  ecx = R32((uint32_t)(edi + 0x114u));
/* f80d2e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80d30: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f80d33: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80d35: mov dword ptr [esi + 0x114], ecx */
  W32((uint32_t)(esi + 0x114u), ecx);
/* f80d3b: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* f80d41: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80d43: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f80d46: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80d48: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* f80d4e: mov ecx, dword ptr [edi + 0x114] */
  ecx = R32((uint32_t)(edi + 0x114u));
/* f80d54: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80d56: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f80d59: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80d5b: lea edx, [edi + 0x118] */
  edx = (uint32_t)(edi + 0x118u);
/* f80d61: mov dword ptr [esi + 0x114], ecx */
  W32((uint32_t)(esi + 0x114u), ecx);
/* f80d67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f80d68: lea ecx, [esi + 0x118] */
  ecx = (uint32_t)(esi + 0x118u);
/* f80d6e: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf80d74u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f80d74: mov eax, dword ptr [edi + 0x124] */
  eax = R32((uint32_t)(edi + 0x124u));
/* f80d7a: mov edx, dword ptr [esi + 0x128] */
  edx = R32((uint32_t)(esi + 0x128u));
/* f80d80: mov dword ptr [esi + 0x124], eax */
  W32((uint32_t)(esi + 0x124u), eax);
/* f80d86: mov ecx, dword ptr [edi + 0x128] */
  ecx = R32((uint32_t)(edi + 0x128u));
/* f80d8c: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80d8e: mov ebp, edx */
  ebp = edx;
/* f80d90: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f80d93: xor ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* f80d95: mov dword ptr [esi + 0x128], ebp */
  W32((uint32_t)(esi + 0x128u), ebp);
/* f80d9b: mov edx, dword ptr [edi + 0x12c] */
  edx = R32((uint32_t)(edi + 0x12cu));
/* f80da1: mov dword ptr [esi + 0x12c], edx */
  W32((uint32_t)(esi + 0x12cu), edx);
/* f80da7: mov eax, dword ptr [edi + 0x130] */
  eax = R32((uint32_t)(edi + 0x130u));
/* f80dad: mov dword ptr [esi + 0x130], eax */
  W32((uint32_t)(esi + 0x130u), eax);
/* f80db3: mov ecx, dword ptr [edi + 0x134] */
  ecx = R32((uint32_t)(edi + 0x134u));
/* f80db9: mov dword ptr [esi + 0x134], ecx */
  W32((uint32_t)(esi + 0x134u), ecx);
/* f80dbf: mov edx, dword ptr [edi + 0x138] */
  edx = R32((uint32_t)(edi + 0x138u));
/* f80dc5: mov ecx, dword ptr [esi + 0x140] */
  ecx = R32((uint32_t)(esi + 0x140u));
/* f80dcb: mov dword ptr [esi + 0x138], edx */
  W32((uint32_t)(esi + 0x138u), edx);
/* f80dd1: mov eax, dword ptr [edi + 0x13c] */
  eax = R32((uint32_t)(edi + 0x13cu));
/* f80dd7: mov dword ptr [esi + 0x13c], eax */
  W32((uint32_t)(esi + 0x13cu), eax);
/* f80ddd: mov ebx, dword ptr [edi + 0x140] */
  ebx = R32((uint32_t)(edi + 0x140u));
/* f80de3: mov eax, dword ptr [esi + 0x140] */
  eax = R32((uint32_t)(esi + 0x140u));
/* f80de9: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80deb: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f80dee: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80df0: mov dword ptr [esi + 0x140], eax */
  W32((uint32_t)(esi + 0x140u), eax);
/* f80df6: mov edx, dword ptr [edi + 0x140] */
  edx = R32((uint32_t)(edi + 0x140u));
/* f80dfc: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f80dfe: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f80e01: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f80e03: lea eax, [edi + 0x144] */
  eax = (uint32_t)(edi + 0x144u);
/* f80e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f80e0a: lea ecx, [esi + 0x144] */
  ecx = (uint32_t)(esi + 0x144u);
/* f80e10: mov dword ptr [esi + 0x140], edx */
  W32((uint32_t)(esi + 0x140u), edx);
/* f80e16: call 0xf71492 */
  esp -= 4; W32(esp, 0xf80e1bu); SPILL(); f_f71492(); if (g_unwind) return; RELOAD();
/* f80e1b: mov ebx, dword ptr [edi + 0x150] */
  ebx = R32((uint32_t)(edi + 0x150u));
/* f80e21: mov ecx, dword ptr [esi + 0x150] */
  ecx = R32((uint32_t)(esi + 0x150u));
/* f80e27: mov eax, dword ptr [esi + 0x150] */
  eax = R32((uint32_t)(esi + 0x150u));
/* f80e2d: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f80e2f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f80e32: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80e34: mov dword ptr [esi + 0x150], eax */
  W32((uint32_t)(esi + 0x150u), eax);
/* f80e3a: mov ecx, eax */
  ecx = eax;
/* f80e3c: mov eax, dword ptr [edi + 0x150] */
  eax = R32((uint32_t)(edi + 0x150u));
/* f80e42: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80e44: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f80e47: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f80e49: mov dword ptr [esi + 0x150], eax */
  W32((uint32_t)(esi + 0x150u), eax);
/* f80e4f: mov edx, dword ptr [edi + 0x150] */
  edx = R32((uint32_t)(edi + 0x150u));
/* f80e55: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f80e57: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f80e5a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f80e5c: mov dword ptr [esi + 0x150], edx */
  W32((uint32_t)(esi + 0x150u), edx);
/* f80e62: mov eax, dword ptr [edi + 0x154] */
  eax = R32((uint32_t)(edi + 0x154u));
/* f80e68: mov dword ptr [esi + 0x154], eax */
  W32((uint32_t)(esi + 0x154u), eax);
/* f80e6e: mov ecx, dword ptr [edi + 0x158] */
  ecx = R32((uint32_t)(edi + 0x158u));
/* f80e74: mov dword ptr [esi + 0x158], ecx */
  W32((uint32_t)(esi + 0x158u), ecx);
/* f80e7a: mov edx, dword ptr [edi + 0x15c] */
  edx = R32((uint32_t)(edi + 0x15cu));
/* f80e80: mov dword ptr [esi + 0x15c], edx */
  W32((uint32_t)(esi + 0x15cu), edx);
/* f80e86: mov eax, dword ptr [edi + 0x160] */
  eax = R32((uint32_t)(edi + 0x160u));
/* f80e8c: mov dword ptr [esi + 0x160], eax */
  W32((uint32_t)(esi + 0x160u), eax);
/* f80e92: mov ecx, dword ptr [edi + 0x164] */
  ecx = R32((uint32_t)(edi + 0x164u));
/* f80e98: mov dword ptr [esi + 0x164], ecx */
  W32((uint32_t)(esi + 0x164u), ecx);
/* f80e9e: mov edx, dword ptr [edi + 0x168] */
  edx = R32((uint32_t)(edi + 0x168u));
/* f80ea4: mov dword ptr [esi + 0x168], edx */
  W32((uint32_t)(esi + 0x168u), edx);
/* f80eaa: mov eax, dword ptr [edi + 0x16c] */
  eax = R32((uint32_t)(edi + 0x16cu));
/* f80eb0: mov dword ptr [esi + 0x16c], eax */
  W32((uint32_t)(esi + 0x16cu), eax);
/* f80eb6: mov ecx, dword ptr [edi + 0x170] */
  ecx = R32((uint32_t)(edi + 0x170u));
/* f80ebc: mov dword ptr [esi + 0x170], ecx */
  W32((uint32_t)(esi + 0x170u), ecx);
/* f80ec2: mov edx, dword ptr [edi + 0x174] */
  edx = R32((uint32_t)(edi + 0x174u));
/* f80ec8: mov dword ptr [esi + 0x174], edx */
  W32((uint32_t)(esi + 0x174u), edx);
/* f80ece: mov eax, dword ptr [edi + 0x178] */
  eax = R32((uint32_t)(edi + 0x178u));
/* f80ed4: mov dword ptr [esi + 0x178], eax */
  W32((uint32_t)(esi + 0x178u), eax);
/* f80eda: mov ecx, dword ptr [edi + 0x17c] */
  ecx = R32((uint32_t)(edi + 0x17cu));
/* f80ee0: mov dword ptr [esi + 0x17c], ecx */
  W32((uint32_t)(esi + 0x17cu), ecx);
/* f80ee6: mov edx, dword ptr [edi + 0x180] */
  edx = R32((uint32_t)(edi + 0x180u));
/* f80eec: mov dword ptr [esi + 0x180], edx */
  W32((uint32_t)(esi + 0x180u), edx);
/* f80ef2: mov eax, dword ptr [edi + 0x184] */
  eax = R32((uint32_t)(edi + 0x184u));
/* f80ef8: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
/* f80efe: mov ecx, dword ptr [edi + 0x188] */
  ecx = R32((uint32_t)(edi + 0x188u));
/* f80f04: mov dword ptr [esi + 0x188], ecx */
  W32((uint32_t)(esi + 0x188u), ecx);
/* f80f0a: mov edx, dword ptr [edi + 0x18c] */
  edx = R32((uint32_t)(edi + 0x18cu));
/* f80f10: mov dword ptr [esi + 0x18c], edx */
  W32((uint32_t)(esi + 0x18cu), edx);
/* f80f16: mov eax, dword ptr [edi + 0x190] */
  eax = R32((uint32_t)(edi + 0x190u));
/* f80f1c: mov dword ptr [esi + 0x190], eax */
  W32((uint32_t)(esi + 0x190u), eax);
/* f80f22: mov ecx, dword ptr [edi + 0x194] */
  ecx = R32((uint32_t)(edi + 0x194u));
/* f80f28: mov eax, edi */
  eax = edi;
/* f80f2a: mov dword ptr [esi + 0x194], ecx */
  W32((uint32_t)(esi + 0x194u), ecx);
/* f80f30: lea ecx, [esi + 0x198] */
  ecx = (uint32_t)(esi + 0x198u);
/* f80f36: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f80f38: mov ebp, 0x40 */
  ebp = 0x40u;
/* f80f3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f80f40: /* f80f40: mov dl, byte ptr [eax + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx))) & 0xffu);
/* f80f43: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* f80f45: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f80f46: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* f80f47: jne 0xf80f40 */
  if (!zf) goto L_f80f40;
L_f80f49: /* f80f49: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f80f4f: mov edx, 0x10 */
  edx = 0x10u;
L_f80f54: /* f80f54: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* f80f57: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* f80f59: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f80f5c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* f80f5d: jne 0xf80f54 */
  if (!zf) goto L_f80f54;
L_f80f5f: /* f80f5f: mov eax, dword ptr [edi + 0x218] */
  eax = R32((uint32_t)(edi + 0x218u));
/* f80f65: mov dword ptr [esi + 0x218], eax */
  W32((uint32_t)(esi + 0x218u), eax);
/* f80f6b: mov ecx, dword ptr [edi + 0x21c] */
  ecx = R32((uint32_t)(edi + 0x21cu));
/* f80f71: mov dword ptr [esi + 0x21c], ecx */
  W32((uint32_t)(esi + 0x21cu), ecx);
/* f80f77: mov edx, dword ptr [edi + 0x220] */
  edx = R32((uint32_t)(edi + 0x220u));
/* f80f7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80f7e: mov dword ptr [esi + 0x220], edx */
  W32((uint32_t)(esi + 0x220u), edx);
/* f80f84: mov eax, esi */
  eax = esi;
/* f80f86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80f87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f80f88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80f89: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f810d0(void) {
  LOAD_REGS();
L_f810d0: /* f810d0: jmp 0xf7109b */
  SPILL(); f_f7109b(); return;
}

void f_f810f0(void) {
  LOAD_REGS();
L_f810f0: /* f810f0: jmp 0xf712b2 */
  SPILL(); f_f712b2(); return;
}

void f_f81110(void) {
  LOAD_REGS();
L_f81110: /* f81110: jmp 0xf71668 */
  SPILL(); f_f71668(); return;
}

void f_f81130(void) {
  LOAD_REGS();
L_f81130: /* f81130: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f81134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81136: mov esi, ecx */
  esi = ecx;
/* f81138: call 0xf71b13 */
  esp -= 4; W32(esp, 0xf8113du); SPILL(); f_f71b13(); if (g_unwind) return; RELOAD();
/* f8113d: mov eax, esi */
  eax = esi;
/* f8113f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81140: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81160(void) {
  LOAD_REGS();
L_f81160: /* f81160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f81164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81165: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81166: mov esi, ecx */
  esi = ecx;
/* f81168: call 0xf71fcd */
  esp -= 4; W32(esp, 0xf8116du); SPILL(); f_f71fcd(); if (g_unwind) return; RELOAD();
/* f8116d: mov eax, esi */
  eax = esi;
/* f8116f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81170: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81190(void) {
  LOAD_REGS();
L_f81190: /* f81190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f81194: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81196: mov esi, ecx */
  esi = ecx;
/* f81198: call 0xf715b4 */
  esp -= 4; W32(esp, 0xf8119du); SPILL(); f_f715b4(); if (g_unwind) return; RELOAD();
/* f8119d: mov eax, esi */
  eax = esi;
/* f8119f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f811a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f811c0(void) {
  LOAD_REGS();
L_f811c0: /* f811c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f811c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f811c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f811c6: mov esi, ecx */
  esi = ecx;
/* f811c8: call 0xf7125d */
  esp -= 4; W32(esp, 0xf811cdu); SPILL(); f_f7125d(); if (g_unwind) return; RELOAD();
/* f811cd: mov eax, esi */
  eax = esi;
/* f811cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f811d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f811f0(void) {
  LOAD_REGS();
L_f811f0: /* f811f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f811f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f811f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f811f6: mov esi, ecx */
  esi = ecx;
/* f811f8: call 0xf71a3c */
  esp -= 4; W32(esp, 0xf811fdu); SPILL(); f_f71a3c(); if (g_unwind) return; RELOAD();
/* f811fd: mov eax, esi */
  eax = esi;
/* f811ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81200: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81220(void) {
  LOAD_REGS();
L_f81220: /* f81220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f81224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81226: mov esi, ecx */
  esi = ecx;
/* f81228: call 0xf71e1f */
  esp -= 4; W32(esp, 0xf8122du); SPILL(); f_f71e1f(); if (g_unwind) return; RELOAD();
/* f8122d: mov eax, esi */
  eax = esi;
/* f8122f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81230: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81250(void) {
  LOAD_REGS();
L_f81250: /* f81250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f81252: push 0xf995ab */
  { uint32_t v = 0xf995abu; esp -= 4; W32(esp, v); }
/* f81257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8125d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8125e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f81265: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f81268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81269: mov esi, ecx */
  esi = ecx;
/* f8126b: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* f8126f: mov dword ptr [esp + 0x48], 1 */
  W32((uint32_t)(esp + 0x48u), 0x1u);
/* f81277: call 0xf7115e */
  esp -= 4; W32(esp, 0xf8127cu); SPILL(); f_f7115e(); if (g_unwind) return; RELOAD();
/* f8127c: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* f81280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81281: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f81285: mov byte ptr [esp + 0x4c], 2 */
  W8((uint32_t)(esp + 0x4cu), 0x2u);
/* f8128a: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* f81292: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf81298u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f81298: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* f8129c: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* f812a0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* f812a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f812a5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* f812a9: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf812afu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f812af: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* f812b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f812b4: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* f812b8: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf812beu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f812be: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* f812c2: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* f812c6: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* f812ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f812cb: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* f812cf: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf812d5u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f812d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f812d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f812d9: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f812dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f812de: mov ecx, dword ptr [0xfba498] */
  ecx = R32((uint32_t)(0xfba498u));
/* f812e4: lea edx, [esi + 0x218] */
  edx = (uint32_t)(esi + 0x218u);
/* f812ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f812eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f812ec: mov ecx, esi */
  ecx = esi;
/* f812ee: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xf812f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f812f1: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* f812f5: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* f812f9: mov byte ptr [esp + 0x48], 3 */
  W8((uint32_t)(esp + 0x48u), 0x3u);
/* f812fe: call 0xf71172 */
  esp -= 4; W32(esp, 0xf81303u); SPILL(); f_f71172(); if (g_unwind) return; RELOAD();
/* f81303: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* f81307: mov byte ptr [esp + 0x48], 4 */
  W8((uint32_t)(esp + 0x48u), 0x4u);
/* f8130c: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf81312u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f81312: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* f81316: mov byte ptr [esp + 0x48], 1 */
  W8((uint32_t)(esp + 0x48u), 0x1u);
/* f8131b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf81321u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f81321: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* f81325: mov byte ptr [esp + 0x48], 5 */
  W8((uint32_t)(esp + 0x48u), 0x5u);
/* f8132a: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf81330u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f81330: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* f81334: mov byte ptr [esp + 0x48], 0 */
  W8((uint32_t)(esp + 0x48u), 0x0u);
/* f81339: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf8133fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f8133f: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* f81343: mov dword ptr [esp + 0x48], 6 */
  W32((uint32_t)(esp + 0x48u), 0x6u);
/* f8134b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf81351u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f81351: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* f81355: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* f8135d: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf81363u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f81363: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* f81367: mov eax, esi */
  eax = esi;
/* f81369: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8136a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f81371: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f81374: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_f813d0(void) {
  LOAD_REGS();
L_f813d0: /* f813d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f813d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f813d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f813d6: mov esi, ecx */
  esi = ecx;
/* f813d8: call 0xf7150f */
  esp -= 4; W32(esp, 0xf813ddu); SPILL(); f_f7150f(); if (g_unwind) return; RELOAD();
/* f813dd: mov eax, esi */
  eax = esi;
/* f813df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f813e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81400(void) {
  LOAD_REGS();
L_f81400: /* f81400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81401: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81402: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81407: mov esi, ecx */
  esi = ecx;
/* f81409: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf8140eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f8140e: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f81414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81415: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f8141b: call 0xf71992 */
  esp -= 4; W32(esp, 0xf81420u); SPILL(); f_f71992(); if (g_unwind) return; RELOAD();
/* f81420: lea ecx, [edi + 0x1d8] */
  ecx = (uint32_t)(edi + 0x1d8u);
/* f81426: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f81427: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f8142d: call 0xf71992 */
  esp -= 4; W32(esp, 0xf81432u); SPILL(); f_f71992(); if (g_unwind) return; RELOAD();
/* f81432: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* f81438: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* f8143e: mov eax, dword ptr [edi + 0x1e8] */
  eax = R32((uint32_t)(edi + 0x1e8u));
/* f81444: mov edi, dword ptr [esi + 0x1e8] */
  edi = R32((uint32_t)(esi + 0x1e8u));
/* f8144a: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8144c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f8144f: mov ecx, edi */
  ecx = edi;
/* f81451: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81453: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81454: mov dword ptr [esi + 0x1e8], ecx */
  W32((uint32_t)(esi + 0x1e8u), ecx);
/* f8145a: mov eax, esi */
  eax = esi;
/* f8145c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8145d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81480(void) {
  LOAD_REGS();
L_f81480: /* f81480: jmp 0xf715a5 */
  SPILL(); f_f715a5(); return;
}

void f_f814a0(void) {
  LOAD_REGS();
L_f814a0: /* f814a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f814a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f814a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f814a6: mov esi, ecx */
  esi = ecx;
/* f814a8: call 0xf71ed8 */
  esp -= 4; W32(esp, 0xf814adu); SPILL(); f_f71ed8(); if (g_unwind) return; RELOAD();
/* f814ad: mov eax, esi */
  eax = esi;
/* f814af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f814b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f814d0(void) {
  LOAD_REGS();
L_f814d0: /* f814d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f814d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f814d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f814d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f814d7: mov esi, ecx */
  esi = ecx;
/* f814d9: call 0xf71cee */
  esp -= 4; W32(esp, 0xf814deu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f814de: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f814e4: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f814ea: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f814f0: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f814f6: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f814fc: mov edi, dword ptr [esi + 0x1f4] */
  edi = R32((uint32_t)(esi + 0x1f4u));
/* f81502: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81504: mov eax, edi */
  eax = edi;
/* f81506: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f81509: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8150b: mov dword ptr [esi + 0x1f4], eax */
  W32((uint32_t)(esi + 0x1f4u), eax);
/* f81511: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81512: mov eax, esi */
  eax = esi;
/* f81514: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81515: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81540(void) {
  LOAD_REGS();
L_f81540: /* f81540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81541: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81542: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81547: mov esi, ecx */
  esi = ecx;
/* f81549: call 0xf71cee */
  esp -= 4; W32(esp, 0xf8154eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f8154e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81554: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8155a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81560: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81566: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f8156c: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f81572: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81574: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f81577: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81579: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f8157f: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f81585: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8158b: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f81591: xor ecx, dword ptr [edi + 0x1fc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1fcu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81597: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f8159d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f815a0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f815a2: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f815a8: mov ecx, eax */
  ecx = eax;
/* f815aa: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* f815b0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f815b2: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f815b5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f815b7: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f815bd: mov edx, dword ptr [edi + 0x1fc] */
  edx = R32((uint32_t)(edi + 0x1fcu));
/* f815c3: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f815c5: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f815c8: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f815ca: mov dword ptr [esi + 0x1fc], edx */
  W32((uint32_t)(esi + 0x1fcu), edx);
/* f815d0: mov eax, dword ptr [edi + 0x200] */
  eax = R32((uint32_t)(edi + 0x200u));
/* f815d6: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f815dc: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f815e2: mov dword ptr [esi + 0x204], ecx */
  W32((uint32_t)(esi + 0x204u), ecx);
/* f815e8: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f815ee: mov dword ptr [esi + 0x208], edx */
  W32((uint32_t)(esi + 0x208u), edx);
/* f815f4: mov eax, dword ptr [edi + 0x20c] */
  eax = R32((uint32_t)(edi + 0x20cu));
/* f815fa: mov dword ptr [esi + 0x20c], eax */
  W32((uint32_t)(esi + 0x20cu), eax);
/* f81600: mov cl, byte ptr [edi + 0x210] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x210u))) & 0xffu);
/* f81606: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81607: mov byte ptr [esi + 0x210], cl */
  W8((uint32_t)(esi + 0x210u), (ecx & 0xffu));
/* f8160d: mov eax, esi */
  eax = esi;
/* f8160f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81610: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81660(void) {
  LOAD_REGS();
L_f81660: /* f81660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81662: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81667: mov esi, ecx */
  esi = ecx;
/* f81669: call 0xf71cee */
  esp -= 4; W32(esp, 0xf8166eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f8166e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81674: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8167a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81680: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81686: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f8168c: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f81692: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81694: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f81697: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81699: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f8169f: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f816a5: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f816ab: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f816b1: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f816b7: add edi, 0x200 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f816bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f816be: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f816c4: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf816cau); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f816ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f816cb: mov eax, esi */
  eax = esi;
/* f816cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f816ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81700(void) {
  LOAD_REGS();
L_f81700: /* f81700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81701: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81702: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81707: mov esi, ecx */
  esi = ecx;
/* f81709: call 0xf71cee */
  esp -= 4; W32(esp, 0xf8170eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f8170e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81714: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8171a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81720: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f81726: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f8172c: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81732: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81734: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f81737: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81739: mov dword ptr [esi + 0x1f4], eax */
  W32((uint32_t)(esi + 0x1f4u), eax);
/* f8173f: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f81745: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f8174b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8174c: mov eax, esi */
  eax = esi;
/* f8174e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8174f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81780(void) {
  LOAD_REGS();
L_f81780: /* f81780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81781: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81782: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81787: mov esi, ecx */
  esi = ecx;
/* f81789: call 0xf71cee */
  esp -= 4; W32(esp, 0xf8178eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f8178e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81794: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8179a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8179b: mov eax, esi */
  eax = esi;
/* f8179d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8179e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f817c0(void) {
  LOAD_REGS();
L_f817c0: /* f817c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f817c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f817c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f817c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f817c4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f817c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f817c9: mov esi, ecx */
  esi = ecx;
/* f817cb: call 0xf71cee */
  esp -= 4; W32(esp, 0xf817d0u); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f817d0: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f817d6: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f817dc: mov cl, byte ptr [edi + 0x1f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1f0u))) & 0xffu);
/* f817e2: mov eax, dword ptr [esi + 0x1f8] */
  eax = R32((uint32_t)(esi + 0x1f8u));
/* f817e8: mov byte ptr [esi + 0x1f0], cl */
  W8((uint32_t)(esi + 0x1f0u), (ecx & 0xffu));
/* f817ee: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f817f4: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f817fa: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81800: xor eax, dword ptr [edi + 0x1f8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81806: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f81809: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8180b: mov dword ptr [esi + 0x1f8], ecx */
  W32((uint32_t)(esi + 0x1f8u), ecx);
/* f81811: mov eax, ecx */
  eax = ecx;
/* f81813: mov ecx, dword ptr [edi + 0x1f8] */
  ecx = R32((uint32_t)(edi + 0x1f8u));
/* f81819: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8181b: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f8181e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81820: mov dword ptr [esi + 0x1f8], ecx */
  W32((uint32_t)(esi + 0x1f8u), ecx);
/* f81826: mov edx, dword ptr [edi + 0x1fc] */
  edx = R32((uint32_t)(edi + 0x1fcu));
/* f8182c: mov ebp, edi */
  ebp = edi;
/* f8182e: mov dword ptr [esi + 0x1fc], edx */
  W32((uint32_t)(esi + 0x1fcu), edx);
/* f81834: lea ebx, [esi + 0x200] */
  ebx = (uint32_t)(esi + 0x200u);
/* f8183a: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f8183c: mov dword ptr [esp + 0x14], 2 */
  W32((uint32_t)(esp + 0x14u), 0x2u);
L_f81844: /* f81844: lea eax, [ebx + ebp] */
  eax = (uint32_t)(ebx + ebp);
/* f81847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81848: mov ecx, ebx */
  ecx = ebx;
/* f8184a: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81850u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81850: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f81854: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f81857: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f81858: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* f8185c: jne 0xf81844 */
  if (!zf) goto L_f81844;
L_f8185e: /* f8185e: mov ecx, dword ptr [edi + 0x218] */
  ecx = R32((uint32_t)(edi + 0x218u));
/* f81864: mov dword ptr [esi + 0x218], ecx */
  W32((uint32_t)(esi + 0x218u), ecx);
/* f8186a: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* f81870: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* f81876: mov eax, dword ptr [edi + 0x220] */
  eax = R32((uint32_t)(edi + 0x220u));
/* f8187c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8187d: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* f81883: mov eax, esi */
  eax = esi;
/* f81885: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81886: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f81887: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f81888: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f818d0(void) {
  LOAD_REGS();
L_f818d0: /* f818d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f818d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f818d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f818d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f818d7: mov esi, ecx */
  esi = ecx;
/* f818d9: call 0xf71cee */
  esp -= 4; W32(esp, 0xf818deu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f818de: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f818e4: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f818ea: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f818f0: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f818f6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f818f8: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f818fb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f818fd: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* f81903: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81909: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8190a: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81910: mov eax, esi */
  eax = esi;
/* f81912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81913: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81940(void) {
  LOAD_REGS();
L_f81940: /* f81940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81942: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81946: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81947: mov esi, ecx */
  esi = ecx;
/* f81949: call 0xf71cee */
  esp -= 4; W32(esp, 0xf8194eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f8194e: lea eax, [edi + 0x1ec] */
  eax = (uint32_t)(edi + 0x1ecu);
/* f81954: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81955: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* f8195b: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81961u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81961: lea ecx, [edi + 0x1f8] */
  ecx = (uint32_t)(edi + 0x1f8u);
/* f81967: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f81968: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f8196e: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81974u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81974: lea edx, [edi + 0x204] */
  edx = (uint32_t)(edi + 0x204u);
/* f8197a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8197b: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* f81981: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81987u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81987: mov eax, dword ptr [edi + 0x210] */
  eax = R32((uint32_t)(edi + 0x210u));
/* f8198d: mov edx, dword ptr [esi + 0x214] */
  edx = R32((uint32_t)(esi + 0x214u));
/* f81993: mov dword ptr [esi + 0x210], eax */
  W32((uint32_t)(esi + 0x210u), eax);
/* f81999: mov ecx, dword ptr [edi + 0x214] */
  ecx = R32((uint32_t)(edi + 0x214u));
/* f8199f: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f819a1: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f819a4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f819a6: mov dword ptr [esi + 0x214], edx */
  W32((uint32_t)(esi + 0x214u), edx);
/* f819ac: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f819b2: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* f819b8: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* f819be: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* f819c4: mov ecx, dword ptr [edi + 0x220] */
  ecx = R32((uint32_t)(edi + 0x220u));
/* f819ca: mov eax, dword ptr [esi + 0x220] */
  eax = R32((uint32_t)(esi + 0x220u));
/* f819d0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f819d2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f819d5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f819d7: mov ecx, dword ptr [esi + 0x228] */
  ecx = R32((uint32_t)(esi + 0x228u));
/* f819dd: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* f819e3: mov dl, byte ptr [edi + 0x224] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x224u))) & 0xffu);
/* f819e9: mov byte ptr [esi + 0x224], dl */
  W8((uint32_t)(esi + 0x224u), (edx & 0xffu));
/* f819ef: mov al, byte ptr [edi + 0x225] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x225u))) & 0xffu);
/* f819f5: mov byte ptr [esi + 0x225], al */
  W8((uint32_t)(esi + 0x225u), (eax & 0xffu));
/* f819fb: xor ecx, dword ptr [edi + 0x228] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x228u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81a01: mov edx, dword ptr [esi + 0x228] */
  edx = R32((uint32_t)(esi + 0x228u));
/* f81a07: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f81a0a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81a0c: mov dword ptr [esi + 0x228], edx */
  W32((uint32_t)(esi + 0x228u), edx);
/* f81a12: mov eax, edx */
  eax = edx;
/* f81a14: mov edx, dword ptr [edi + 0x228] */
  edx = R32((uint32_t)(edi + 0x228u));
/* f81a1a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81a1c: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f81a1f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81a21: mov dword ptr [esi + 0x228], edx */
  W32((uint32_t)(esi + 0x228u), edx);
/* f81a27: mov eax, dword ptr [edi + 0x22c] */
  eax = R32((uint32_t)(edi + 0x22cu));
/* f81a2d: mov dword ptr [esi + 0x22c], eax */
  W32((uint32_t)(esi + 0x22cu), eax);
/* f81a33: mov ecx, dword ptr [edi + 0x230] */
  ecx = R32((uint32_t)(edi + 0x230u));
/* f81a39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81a3a: mov dword ptr [esi + 0x230], ecx */
  W32((uint32_t)(esi + 0x230u), ecx);
/* f81a40: mov eax, esi */
  eax = esi;
/* f81a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81a43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81aa0(void) {
  LOAD_REGS();
L_f81aa0: /* f81aa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81aa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81aa2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81aa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81aa7: mov esi, ecx */
  esi = ecx;
/* f81aa9: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81aaeu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81aae: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81ab4: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f81aba: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81ac0: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81ac6: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81acc: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81ad2: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f81ad8: mov edx, dword ptr [esi + 0x200] */
  edx = R32((uint32_t)(esi + 0x200u));
/* f81ade: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f81ae4: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f81aea: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f81af0: xor edx, dword ptr [edi + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x200u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f81af6: mov eax, dword ptr [esi + 0x200] */
  eax = R32((uint32_t)(esi + 0x200u));
/* f81afc: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f81aff: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81b01: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f81b07: mov ecx, eax */
  ecx = eax;
/* f81b09: mov eax, dword ptr [edi + 0x200] */
  eax = R32((uint32_t)(edi + 0x200u));
/* f81b0f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81b11: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f81b14: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81b16: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f81b1c: mov ecx, dword ptr [edi + 0x200] */
  ecx = R32((uint32_t)(edi + 0x200u));
/* f81b22: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81b24: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f81b27: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81b29: mov dword ptr [esi + 0x200], ecx */
  W32((uint32_t)(esi + 0x200u), ecx);
/* f81b2f: mov edx, dword ptr [edi + 0x204] */
  edx = R32((uint32_t)(edi + 0x204u));
/* f81b35: add edi, 0x208 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f81b3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81b3c: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* f81b42: mov dword ptr [esi + 0x204], edx */
  W32((uint32_t)(esi + 0x204u), edx);
/* f81b48: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81b4eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81b4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81b4f: mov eax, esi */
  eax = esi;
/* f81b51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81b52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81b90(void) {
  LOAD_REGS();
L_f81b90: /* f81b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81b91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81b92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81b97: mov esi, ecx */
  esi = ecx;
/* f81b99: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81b9eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81b9e: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f81ba4: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81baa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81bac: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f81baf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81bb1: mov dword ptr [esi + 0x1ec], ecx */
  W32((uint32_t)(esi + 0x1ecu), ecx);
/* f81bb7: lea ecx, [edi + 0x1f0] */
  ecx = (uint32_t)(edi + 0x1f0u);
/* f81bbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f81bbe: lea ecx, [esi + 0x1f0] */
  ecx = (uint32_t)(esi + 0x1f0u);
/* f81bc4: call 0xf71a28 */
  esp -= 4; W32(esp, 0xf81bc9u); SPILL(); f_f71a28(); if (g_unwind) return; RELOAD();
/* f81bc9: mov edx, dword ptr [edi + 0x1fc] */
  edx = R32((uint32_t)(edi + 0x1fcu));
/* f81bcf: lea eax, [edi + 0x200] */
  eax = (uint32_t)(edi + 0x200u);
/* f81bd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81bd6: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f81bdc: mov dword ptr [esi + 0x1fc], edx */
  W32((uint32_t)(esi + 0x1fcu), edx);
/* f81be2: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81be8u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81be8: mov ecx, dword ptr [edi + 0x20c] */
  ecx = R32((uint32_t)(edi + 0x20cu));
/* f81bee: mov dword ptr [esi + 0x20c], ecx */
  W32((uint32_t)(esi + 0x20cu), ecx);
/* f81bf4: mov edx, dword ptr [edi + 0x210] */
  edx = R32((uint32_t)(edi + 0x210u));
/* f81bfa: mov dword ptr [esi + 0x210], edx */
  W32((uint32_t)(esi + 0x210u), edx);
/* f81c00: mov eax, dword ptr [edi + 0x214] */
  eax = R32((uint32_t)(edi + 0x214u));
/* f81c06: mov dword ptr [esi + 0x214], eax */
  W32((uint32_t)(esi + 0x214u), eax);
/* f81c0c: mov ecx, dword ptr [edi + 0x218] */
  ecx = R32((uint32_t)(edi + 0x218u));
/* f81c12: mov edi, dword ptr [esi + 0x218] */
  edi = R32((uint32_t)(esi + 0x218u));
/* f81c18: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81c1a: mov eax, edi */
  eax = edi;
/* f81c1c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f81c1f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81c21: mov dword ptr [esi + 0x218], eax */
  W32((uint32_t)(esi + 0x218u), eax);
/* f81c27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81c28: mov eax, esi */
  eax = esi;
/* f81c2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81c2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81c60(void) {
  LOAD_REGS();
L_f81c60: /* f81c60: jmp 0xf71933 */
  SPILL(); f_f71933(); return;
}

void f_f81c80(void) {
  LOAD_REGS();
L_f81c80: /* f81c80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f81c84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81c85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81c86: mov esi, ecx */
  esi = ecx;
/* f81c88: call 0xf7100f */
  esp -= 4; W32(esp, 0xf81c8du); SPILL(); f_f7100f(); if (g_unwind) return; RELOAD();
/* f81c8d: mov eax, esi */
  eax = esi;
/* f81c8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81c90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81cb0(void) {
  LOAD_REGS();
L_f81cb0: /* f81cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81cb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81cb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81cb7: mov esi, ecx */
  esi = ecx;
/* f81cb9: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81cbeu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81cbe: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81cc4: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f81cca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81ccb: mov eax, esi */
  eax = esi;
/* f81ccd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81cce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81cf0(void) {
  LOAD_REGS();
L_f81cf0: /* f81cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81cf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81cf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81cf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81cf7: mov esi, ecx */
  esi = ecx;
/* f81cf9: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81cfeu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81cfe: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81d04: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f81d0a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81d10: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81d16: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81d1c: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81d22: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f81d28: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f81d2e: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f81d34: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f81d3a: mov edx, dword ptr [edi + 0x200] */
  edx = R32((uint32_t)(edi + 0x200u));
/* f81d40: mov dword ptr [esi + 0x200], edx */
  W32((uint32_t)(esi + 0x200u), edx);
/* f81d46: mov eax, dword ptr [edi + 0x204] */
  eax = R32((uint32_t)(edi + 0x204u));
/* f81d4c: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f81d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81d53: mov eax, esi */
  eax = esi;
/* f81d55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81d56: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81d80(void) {
  LOAD_REGS();
L_f81d80: /* f81d80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81d81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81d82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81d86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81d87: mov esi, ecx */
  esi = ecx;
/* f81d89: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81d8eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81d8e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81d94: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f81d9a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81da0: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81da6: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81dac: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81db2: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f81db8: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f81dbe: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f81dc4: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f81dca: mov edx, dword ptr [edi + 0x200] */
  edx = R32((uint32_t)(edi + 0x200u));
/* f81dd0: mov dword ptr [esi + 0x200], edx */
  W32((uint32_t)(esi + 0x200u), edx);
/* f81dd6: mov eax, dword ptr [edi + 0x204] */
  eax = R32((uint32_t)(edi + 0x204u));
/* f81ddc: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f81de2: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f81de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81de9: mov dword ptr [esi + 0x208], ecx */
  W32((uint32_t)(esi + 0x208u), ecx);
/* f81def: mov eax, esi */
  eax = esi;
/* f81df1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81df2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81e20(void) {
  LOAD_REGS();
L_f81e20: /* f81e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81e21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81e22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81e26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81e27: mov esi, ecx */
  esi = ecx;
/* f81e29: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81e2eu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81e2e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81e34: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f81e3a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81e40: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81e46: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81e4c: lea eax, [edi + 0x1f8] */
  eax = (uint32_t)(edi + 0x1f8u);
/* f81e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81e53: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f81e59: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81e5f: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81e65u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81e65: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f81e6b: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* f81e71: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81e73: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f81e76: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81e78: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f81e7e: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f81e84: mov dword ptr [esi + 0x208], edx */
  W32((uint32_t)(esi + 0x208u), edx);
/* f81e8a: mov eax, dword ptr [edi + 0x20c] */
  eax = R32((uint32_t)(edi + 0x20cu));
/* f81e90: mov dword ptr [esi + 0x20c], eax */
  W32((uint32_t)(esi + 0x20cu), eax);
/* f81e96: mov ecx, dword ptr [edi + 0x210] */
  ecx = R32((uint32_t)(edi + 0x210u));
/* f81e9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81e9d: mov dword ptr [esi + 0x210], ecx */
  W32((uint32_t)(esi + 0x210u), ecx);
/* f81ea3: mov eax, esi */
  eax = esi;
/* f81ea5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81ea6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81ee0(void) {
  LOAD_REGS();
L_f81ee0: /* f81ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81ee1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81ee2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81ee6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81ee7: mov esi, ecx */
  esi = ecx;
/* f81ee9: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81eeeu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81eee: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81ef4: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f81efa: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81f00: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81f06: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81f0c: lea eax, [edi + 0x1f8] */
  eax = (uint32_t)(edi + 0x1f8u);
/* f81f12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f81f13: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f81f19: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81f1f: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf81f25u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f81f25: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f81f2b: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* f81f31: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81f33: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f81f36: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81f38: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f81f3e: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f81f44: mov dword ptr [esi + 0x208], edx */
  W32((uint32_t)(esi + 0x208u), edx);
/* f81f4a: mov eax, dword ptr [edi + 0x20c] */
  eax = R32((uint32_t)(edi + 0x20cu));
/* f81f50: mov dword ptr [esi + 0x20c], eax */
  W32((uint32_t)(esi + 0x20cu), eax);
/* f81f56: mov ecx, dword ptr [edi + 0x210] */
  ecx = R32((uint32_t)(edi + 0x210u));
/* f81f5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f81f5d: mov dword ptr [esi + 0x210], ecx */
  W32((uint32_t)(esi + 0x210u), ecx);
/* f81f63: mov eax, esi */
  eax = esi;
/* f81f65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f81f66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f81fa0(void) {
  LOAD_REGS();
L_f81fa0: /* f81fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f81fa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81fa2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f81fa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f81fa7: mov esi, ecx */
  esi = ecx;
/* f81fa9: call 0xf71cee */
  esp -= 4; W32(esp, 0xf81faeu); SPILL(); f_f71cee(); if (g_unwind) return; RELOAD();
/* f81fae: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f81fb4: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f81fba: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f81fc0: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f81fc6: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f81fcc: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f81fd2: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f81fd8: mov al, byte ptr [edi + 0x1f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1f8u))) & 0xffu);
/* f81fde: mov byte ptr [esi + 0x1f8], al */
  W8((uint32_t)(esi + 0x1f8u), (eax & 0xffu));
/* f81fe4: xor ecx, dword ptr [edi + 0x1fc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1fcu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f81fea: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f81ff0: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f81ff3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f81ff5: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f81ffb: mov ecx, eax */
  ecx = eax;
/* f81ffd: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* f82003: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82005: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f82008: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8200a: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f82010: mov edx, dword ptr [edi + 0x1fc] */
  edx = R32((uint32_t)(edi + 0x1fcu));
/* f82016: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f82018: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f8201b: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8201d: mov dword ptr [esi + 0x1fc], edx */
  W32((uint32_t)(esi + 0x1fcu), edx);
/* f82023: mov eax, dword ptr [edi + 0x200] */
  eax = R32((uint32_t)(edi + 0x200u));
/* f82029: mov edx, dword ptr [esi + 0x208] */
  edx = R32((uint32_t)(esi + 0x208u));
/* f8202f: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f82035: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f8203b: mov dword ptr [esi + 0x204], ecx */
  W32((uint32_t)(esi + 0x204u), ecx);
/* f82041: xor edx, dword ptr [edi + 0x208] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x208u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f82047: mov eax, dword ptr [esi + 0x208] */
  eax = R32((uint32_t)(esi + 0x208u));
/* f8204d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f82050: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82052: mov dword ptr [esi + 0x208], eax */
  W32((uint32_t)(esi + 0x208u), eax);
/* f82058: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f8205e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82060: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f82063: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82065: mov dword ptr [esi + 0x208], ecx */
  W32((uint32_t)(esi + 0x208u), ecx);
/* f8206b: mov edx, dword ptr [edi + 0x20c] */
  edx = R32((uint32_t)(edi + 0x20cu));
/* f82071: lea eax, [edi + 0x210] */
  eax = (uint32_t)(edi + 0x210u);
/* f82077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82078: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* f8207e: mov dword ptr [esi + 0x20c], edx */
  W32((uint32_t)(esi + 0x20cu), edx);
/* f82084: call 0xf71992 */
  esp -= 4; W32(esp, 0xf82089u); SPILL(); f_f71992(); if (g_unwind) return; RELOAD();
/* f82089: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* f8208f: mov ecx, dword ptr [esi + 0x21c] */
  ecx = R32((uint32_t)(esi + 0x21cu));
/* f82095: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82097: mov edx, dword ptr [esi + 0x21c] */
  edx = R32((uint32_t)(esi + 0x21cu));
/* f8209d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f820a0: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f820a2: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* f820a8: mov eax, edx */
  eax = edx;
/* f820aa: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* f820b0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f820b2: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f820b5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f820b7: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* f820bd: mov eax, dword ptr [edi + 0x220] */
  eax = R32((uint32_t)(edi + 0x220u));
/* f820c3: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* f820c9: mov ecx, dword ptr [edi + 0x224] */
  ecx = R32((uint32_t)(edi + 0x224u));
/* f820cf: mov dword ptr [esi + 0x224], ecx */
  W32((uint32_t)(esi + 0x224u), ecx);
/* f820d5: mov edx, dword ptr [edi + 0x228] */
  edx = R32((uint32_t)(edi + 0x228u));
/* f820db: mov dword ptr [esi + 0x228], edx */
  W32((uint32_t)(esi + 0x228u), edx);
/* f820e1: mov eax, dword ptr [edi + 0x22c] */
  eax = R32((uint32_t)(edi + 0x22cu));
/* f820e7: mov dword ptr [esi + 0x22c], eax */
  W32((uint32_t)(esi + 0x22cu), eax);
/* f820ed: mov ecx, dword ptr [edi + 0x230] */
  ecx = R32((uint32_t)(edi + 0x230u));
/* f820f3: mov dword ptr [esi + 0x230], ecx */
  W32((uint32_t)(esi + 0x230u), ecx);
/* f820f9: mov edx, dword ptr [edi + 0x234] */
  edx = R32((uint32_t)(edi + 0x234u));
/* f820ff: mov dword ptr [esi + 0x234], edx */
  W32((uint32_t)(esi + 0x234u), edx);
/* f82105: mov eax, esi */
  eax = esi;
/* f82107: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f82108: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82109: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82170(void) {
  LOAD_REGS();
L_f82170: /* f82170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82171: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82172: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f82176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82177: mov esi, ecx */
  esi = ecx;
/* f82179: call dword ptr [0xfce3b8] */
  esp -= 4; W32(esp, 0xf8217fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f8217f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f82182: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* f82185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82186: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* f82189: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* f8218c: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf82192u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f82192: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* f82195: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* f82198: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8219a: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f8219d: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8219f: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* f821a2: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* f821a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f821a6: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* f821a9: call 0xf71492 */
  esp -= 4; W32(esp, 0xf821aeu); SPILL(); f_f71492(); if (g_unwind) return; RELOAD();
/* f821ae: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f821b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f821b2: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* f821b5: call 0xf71fb4 */
  esp -= 4; W32(esp, 0xf821bau); SPILL(); f_f71fb4(); if (g_unwind) return; RELOAD();
/* f821ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f821bb: mov eax, esi */
  eax = esi;
/* f821bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f821be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f821f0(void) {
  LOAD_REGS();
L_f821f0: /* f821f0: jmp 0xf712a3 */
  SPILL(); f_f712a3(); return;
}

void f_f82210(void) {
  LOAD_REGS();
L_f82210: /* f82210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f82214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82216: mov esi, ecx */
  esi = ecx;
/* f82218: call 0xf71da7 */
  esp -= 4; W32(esp, 0xf8221du); SPILL(); f_f71da7(); if (g_unwind) return; RELOAD();
/* f8221d: mov eax, esi */
  eax = esi;
/* f8221f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82220: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82240(void) {
  LOAD_REGS();
L_f82240: /* f82240: mov eax, ecx */
  eax = ecx;
/* f82242: ret  */
  esp += 4; SPILL(); return;
}

void f_f82260(void) {
  LOAD_REGS();
L_f82260: /* f82260: mov eax, ecx */
  eax = ecx;
/* f82262: ret  */
  esp += 4; SPILL(); return;
}

void f_f82280(void) {
  LOAD_REGS();
L_f82280: /* f82280: mov eax, ecx */
  eax = ecx;
/* f82282: ret  */
  esp += 4; SPILL(); return;
}

void f_f822a0(void) {
  LOAD_REGS();
L_f822a0: /* f822a0: mov eax, ecx */
  eax = ecx;
/* f822a2: ret  */
  esp += 4; SPILL(); return;
}

void f_f822c0(void) {
  LOAD_REGS();
L_f822c0: /* f822c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f822c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f822c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f822c6: mov esi, ecx */
  esi = ecx;
/* f822c8: call 0xf7160e */
  esp -= 4; W32(esp, 0xf822cdu); SPILL(); f_f7160e(); if (g_unwind) return; RELOAD();
/* f822cd: mov eax, esi */
  eax = esi;
/* f822cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f822d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f822f0(void) {
  LOAD_REGS();
L_f822f0: /* f822f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f822f2: push 0xf995d9 */
  { uint32_t v = 0xf995d9u; esp -= 4; W32(esp, v); }
/* f822f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f822fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f822fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f82305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82307: mov esi, ecx */
  esi = ecx;
/* f82309: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8230d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f82310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82311: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f82313: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f8231b: call 0xf71f41 */
  esp -= 4; W32(esp, 0xf82320u); SPILL(); f_f71f41(); if (g_unwind) return; RELOAD();
/* f82320: mov ecx, esi */
  ecx = esi;
/* f82322: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8232a: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf82330u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f82330: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f82334: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82335: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8233c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8233f: ret  */
  esp += 4; SPILL(); return;
}

void f_f82360(void) {
  LOAD_REGS();
L_f82360: /* f82360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f82364: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82366: mov esi, ecx */
  esi = ecx;
/* f82368: call 0xf721cb */
  esp -= 4; W32(esp, 0xf8236du); SPILL(); f_f721cb(); if (g_unwind) return; RELOAD();
/* f8236d: mov eax, esi */
  eax = esi;
/* f8236f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82370: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82390(void) {
  LOAD_REGS();
L_f82390: /* f82390: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f82392: push 0xf995f9 */
  { uint32_t v = 0xf995f9u; esp -= 4; W32(esp, v); }
/* f82397: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8239d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8239e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f823a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f823a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f823a7: mov esi, ecx */
  esi = ecx;
/* f823a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f823ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f823b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f823b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f823b3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f823bb: call 0xf71249 */
  esp -= 4; W32(esp, 0xf823c0u); SPILL(); f_f71249(); if (g_unwind) return; RELOAD();
/* f823c0: mov ecx, esi */
  ecx = esi;
/* f823c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f823ca: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf823d0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f823d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f823d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f823d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f823dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f823df: ret  */
  esp += 4; SPILL(); return;
}

void f_f82400(void) {
  LOAD_REGS();
L_f82400: /* f82400: mov eax, ecx */
  eax = ecx;
/* f82402: ret  */
  esp += 4; SPILL(); return;
}

void f_f82420(void) {
  LOAD_REGS();
L_f82420: /* f82420: mov eax, ecx */
  eax = ecx;
/* f82422: ret  */
  esp += 4; SPILL(); return;
}

void f_f82440(void) {
  LOAD_REGS();
L_f82440: /* f82440: mov eax, ecx */
  eax = ecx;
/* f82442: ret  */
  esp += 4; SPILL(); return;
}

void f_f82460(void) {
  LOAD_REGS();
L_f82460: /* f82460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f82462: push 0xf9968c */
  { uint32_t v = 0xf9968cu; esp -= 4; W32(esp, v); }
/* f82467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8246d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8246e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f82475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82477: mov esi, ecx */
  esi = ecx;
/* f82479: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8247d: mov dword ptr [esi], 0xfa27a0 */
  W32((uint32_t)(esi), 0xfa27a0u);
/* f82483: mov dword ptr [esp + 0x10], 9 */
  W32((uint32_t)(esp + 0x10u), 0x9u);
/* f8248b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf82491u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f82491: lea ecx, [esi + 0x144] */
  ecx = (uint32_t)(esi + 0x144u);
/* f82497: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* f8249c: call 0xf71a78 */
  esp -= 4; W32(esp, 0xf824a1u); SPILL(); f_f71a78(); if (g_unwind) return; RELOAD();
/* f824a1: lea ecx, [esi + 0x118] */
  ecx = (uint32_t)(esi + 0x118u);
/* f824a7: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* f824ac: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf824b2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f824b2: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* f824b8: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* f824bd: call 0xf7109b */
  esp -= 4; W32(esp, 0xf824c2u); SPILL(); f_f7109b(); if (g_unwind) return; RELOAD();
/* f824c2: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* f824c8: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* f824cd: call 0xf71b68 */
  esp -= 4; W32(esp, 0xf824d2u); SPILL(); f_f71b68(); if (g_unwind) return; RELOAD();
/* f824d2: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* f824d8: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* f824dd: call 0xf7198d */
  esp -= 4; W32(esp, 0xf824e2u); SPILL(); f_f7198d(); if (g_unwind) return; RELOAD();
/* f824e2: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* f824e5: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* f824ea: call 0xf71a78 */
  esp -= 4; W32(esp, 0xf824efu); SPILL(); f_f71a78(); if (g_unwind) return; RELOAD();
/* f824ef: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* f824f2: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* f824f7: call 0xf71668 */
  esp -= 4; W32(esp, 0xf824fcu); SPILL(); f_f71668(); if (g_unwind) return; RELOAD();
/* f824fc: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* f824ff: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f82504: call 0xf712b2 */
  esp -= 4; W32(esp, 0xf82509u); SPILL(); f_f712b2(); if (g_unwind) return; RELOAD();
/* f82509: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* f8250c: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f82511: call 0xf7109b */
  esp -= 4; W32(esp, 0xf82516u); SPILL(); f_f7109b(); if (g_unwind) return; RELOAD();
/* f82516: mov ecx, esi */
  ecx = esi;
/* f82518: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f82520: call dword ptr [0xfce510] */
  esp -= 4; W32(esp, 0xf82526u); SPILL(); f_6c5d99(); if (g_unwind) return; /* Engine!??1UBaseGUIController@@UAE@XZ */ RELOAD();
/* f82526: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f8252a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8252b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f82532: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f82535: ret  */
  esp += 4; SPILL(); return;
}

void f_f82580(void) {
  LOAD_REGS();
L_f82580: /* f82580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f82582: push 0xf9971f */
  { uint32_t v = 0xf9971fu; esp -= 4; W32(esp, v); }
/* f82587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8258d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8258e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f82595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82597: mov esi, ecx */
  esi = ecx;
/* f82599: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8259d: call dword ptr [0xfce514] */
  esp -= 4; W32(esp, 0xf825a3u); SPILL(); f_6cbdf7(); if (g_unwind) return; /* Engine!??0UInteractions@@IAE@XZ */ RELOAD();
/* f825a3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f825ab: mov dword ptr [esi], 0xfa27a0 */
  W32((uint32_t)(esi), 0xfa27a0u);
/* f825b1: lea ecx, [esi + 0x118] */
  ecx = (uint32_t)(esi + 0x118u);
/* f825b7: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* f825bc: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf825c2u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f825c2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f825c6: mov eax, esi */
  eax = esi;
/* f825c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f825c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f825d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f825d3: ret  */
  esp += 4; SPILL(); return;
}

void f_f82600(void) {
  LOAD_REGS();
L_f82600: /* f82600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f82602: push 0xf997be */
  { uint32_t v = 0xf997beu; esp -= 4; W32(esp, v); }
/* f82607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8260d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8260e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f82615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82616: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f82617: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f82618: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f8261c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8261d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8261e: mov ebx, ecx */
  ebx = ecx;
/* f82620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f82621: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* f82625: call dword ptr [0xfce518] */
  esp -= 4; W32(esp, 0xf8262bu); SPILL(); f_6cbbd6(); if (g_unwind) return; /* Engine!??0UBaseGUIController@@QAE@ABV0@@Z */ RELOAD();
/* f8262b: lea eax, [ebp + 0x4c] */
  eax = (uint32_t)(ebp + 0x4cu);
/* f8262e: lea ecx, [ebx + 0x4c] */
  ecx = (uint32_t)(ebx + 0x4cu);
/* f82631: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82632: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* f8263a: mov dword ptr [ebx], 0xfa27a0 */
  W32((uint32_t)(ebx), 0xfa27a0u);
/* f82640: call 0xf71b13 */
  esp -= 4; W32(esp, 0xf82645u); SPILL(); f_f71b13(); if (g_unwind) return; RELOAD();
/* f82645: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* f82648: lea edx, [ebp + 0x5c] */
  edx = (uint32_t)(ebp + 0x5cu);
/* f8264b: mov dword ptr [ebx + 0x58], ecx */
  W32((uint32_t)(ebx + 0x58u), ecx);
/* f8264e: lea ecx, [ebx + 0x5c] */
  ecx = (uint32_t)(ebx + 0x5cu);
/* f82651: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f82652: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* f82657: call 0xf71fcd */
  esp -= 4; W32(esp, 0xf8265cu); SPILL(); f_f71fcd(); if (g_unwind) return; RELOAD();
/* f8265c: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* f8265f: lea ecx, [ebx + 0x68] */
  ecx = (uint32_t)(ebx + 0x68u);
/* f82662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82663: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* f82668: call 0xf715b4 */
  esp -= 4; W32(esp, 0xf8266du); SPILL(); f_f715b4(); if (g_unwind) return; RELOAD();
/* f8266d: lea edx, [ebp + 0x74] */
  edx = (uint32_t)(ebp + 0x74u);
/* f82670: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* f82673: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f82674: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* f82679: call 0xf7125d */
  esp -= 4; W32(esp, 0xf8267eu); SPILL(); f_f7125d(); if (g_unwind) return; RELOAD();
/* f8267e: lea eax, [ebp + 0x80] */
  eax = (uint32_t)(ebp + 0x80u);
/* f82684: lea ecx, [ebx + 0x80] */
  ecx = (uint32_t)(ebx + 0x80u);
/* f8268a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8268b: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* f82690: call 0xf71a3c */
  esp -= 4; W32(esp, 0xf82695u); SPILL(); f_f71a3c(); if (g_unwind) return; RELOAD();
/* f82695: lea edx, [ebp + 0x8c] */
  edx = (uint32_t)(ebp + 0x8cu);
/* f8269b: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* f826a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f826a2: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* f826a7: call 0xf71e1f */
  esp -= 4; W32(esp, 0xf826acu); SPILL(); f_f71e1f(); if (g_unwind) return; RELOAD();
/* f826ac: lea eax, [ebp + 0x98] */
  eax = (uint32_t)(ebp + 0x98u);
/* f826b2: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* f826b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f826b9: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* f826be: call 0xf71b13 */
  esp -= 4; W32(esp, 0xf826c3u); SPILL(); f_f71b13(); if (g_unwind) return; RELOAD();
/* f826c3: mov cl, byte ptr [ebp + 0xa4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xa4u))) & 0xffu);
/* f826c9: mov edi, dword ptr [ebx + 0xb8] */
  edi = R32((uint32_t)(ebx + 0xb8u));
/* f826cf: mov byte ptr [ebx + 0xa4], cl */
  W8((uint32_t)(ebx + 0xa4u), (ecx & 0xffu));
/* f826d5: mov dl, byte ptr [ebp + 0xa5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xa5u))) & 0xffu);
/* f826db: mov byte ptr [ebx + 0xa5], dl */
  W8((uint32_t)(ebx + 0xa5u), (edx & 0xffu));
/* f826e1: mov eax, dword ptr [ebp + 0xa8] */
  eax = R32((uint32_t)(ebp + 0xa8u));
/* f826e7: mov dword ptr [ebx + 0xa8], eax */
  W32((uint32_t)(ebx + 0xa8u), eax);
/* f826ed: mov ecx, dword ptr [ebp + 0xac] */
  ecx = R32((uint32_t)(ebp + 0xacu));
/* f826f3: mov dword ptr [ebx + 0xac], ecx */
  W32((uint32_t)(ebx + 0xacu), ecx);
/* f826f9: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* f826ff: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* f82705: mov dword ptr [ebx + 0xb0], edx */
  W32((uint32_t)(ebx + 0xb0u), edx);
/* f8270b: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* f82711: mov dword ptr [ebx + 0xb4], eax */
  W32((uint32_t)(ebx + 0xb4u), eax);
/* f82717: xor ecx, dword ptr [ebp + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xb8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8271d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f82720: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* f82722: mov dword ptr [ebx + 0xb8], edi */
  W32((uint32_t)(ebx + 0xb8u), edi);
/* f82728: mov eax, dword ptr [ebp + 0xb8] */
  eax = R32((uint32_t)(ebp + 0xb8u));
/* f8272e: mov ecx, edi */
  ecx = edi;
/* f82730: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82732: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f82735: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82737: mov byte ptr [esp + 0x1c], 7 */
  W8((uint32_t)(esp + 0x1cu), 0x7u);
/* f8273c: mov dword ptr [ebx + 0xb8], eax */
  W32((uint32_t)(ebx + 0xb8u), eax);
/* f82742: mov edx, dword ptr [ebp + 0xb8] */
  edx = R32((uint32_t)(ebp + 0xb8u));
/* f82748: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8274a: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f8274d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8274f: mov dword ptr [ebx + 0xb8], edx */
  W32((uint32_t)(ebx + 0xb8u), edx);
/* f82755: mov eax, dword ptr [ebp + 0xbc] */
  eax = R32((uint32_t)(ebp + 0xbcu));
/* f8275b: mov dword ptr [ebx + 0xbc], eax */
  W32((uint32_t)(ebx + 0xbcu), eax);
/* f82761: mov ecx, dword ptr [ebp + 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xc0u));
/* f82767: mov dword ptr [ebx + 0xc0], ecx */
  W32((uint32_t)(ebx + 0xc0u), ecx);
/* f8276d: mov edx, dword ptr [ebp + 0xc4] */
  edx = R32((uint32_t)(ebp + 0xc4u));
/* f82773: mov dword ptr [ebx + 0xc4], edx */
  W32((uint32_t)(ebx + 0xc4u), edx);
/* f82779: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* f8277f: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* f82785: mov ecx, dword ptr [ebp + 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xccu));
/* f8278b: mov dword ptr [ebx + 0xcc], ecx */
  W32((uint32_t)(ebx + 0xccu), ecx);
/* f82791: mov edx, dword ptr [ebp + 0xd0] */
  edx = R32((uint32_t)(ebp + 0xd0u));
/* f82797: mov dword ptr [ebx + 0xd0], edx */
  W32((uint32_t)(ebx + 0xd0u), edx);
/* f8279d: lea eax, [ebp + 0xd4] */
  eax = (uint32_t)(ebp + 0xd4u);
/* f827a3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f827a5: lea ecx, [ebx + 0xd4] */
  ecx = (uint32_t)(ebx + 0xd4u);
/* f827ab: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f827ad: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f827b0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* f827b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* f827b6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* f827b9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* f827bc: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* f827bf: lea ecx, [ebp + 0xe4] */
  ecx = (uint32_t)(ebp + 0xe4u);
/* f827c5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f827c7: lea edx, [ebx + 0xe4] */
  edx = (uint32_t)(ebx + 0xe4u);
/* f827cd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f827cf: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f827d2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f827d5: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* f827d8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f827db: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* f827de: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* f827e1: mov edx, dword ptr [ebp + 0xf4] */
  edx = R32((uint32_t)(ebp + 0xf4u));
/* f827e7: mov dword ptr [ebx + 0xf4], edx */
  W32((uint32_t)(ebx + 0xf4u), edx);
/* f827ed: mov eax, dword ptr [ebp + 0xf8] */
  eax = R32((uint32_t)(ebp + 0xf8u));
/* f827f3: mov dword ptr [ebx + 0xf8], eax */
  W32((uint32_t)(ebx + 0xf8u), eax);
/* f827f9: mov ecx, dword ptr [ebp + 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xfcu));
/* f827ff: mov dword ptr [ebx + 0xfc], ecx */
  W32((uint32_t)(ebx + 0xfcu), ecx);
/* f82805: mov edx, dword ptr [ebp + 0x100] */
  edx = R32((uint32_t)(ebp + 0x100u));
/* f8280b: mov dword ptr [ebx + 0x100], edx */
  W32((uint32_t)(ebx + 0x100u), edx);
/* f82811: mov eax, dword ptr [ebp + 0x104] */
  eax = R32((uint32_t)(ebp + 0x104u));
/* f82817: mov dword ptr [ebx + 0x104], eax */
  W32((uint32_t)(ebx + 0x104u), eax);
/* f8281d: mov ecx, dword ptr [ebp + 0x108] */
  ecx = R32((uint32_t)(ebp + 0x108u));
/* f82823: mov dword ptr [ebx + 0x108], ecx */
  W32((uint32_t)(ebx + 0x108u), ecx);
/* f82829: mov edx, dword ptr [ebp + 0x10c] */
  edx = R32((uint32_t)(ebp + 0x10cu));
/* f8282f: mov ecx, dword ptr [ebx + 0x114] */
  ecx = R32((uint32_t)(ebx + 0x114u));
/* f82835: mov dword ptr [ebx + 0x10c], edx */
  W32((uint32_t)(ebx + 0x10cu), edx);
/* f8283b: mov eax, dword ptr [ebp + 0x110] */
  eax = R32((uint32_t)(ebp + 0x110u));
/* f82841: mov dword ptr [ebx + 0x110], eax */
  W32((uint32_t)(ebx + 0x110u), eax);
/* f82847: mov esi, dword ptr [ebp + 0x114] */
  esi = R32((uint32_t)(ebp + 0x114u));
/* f8284d: mov eax, dword ptr [ebx + 0x114] */
  eax = R32((uint32_t)(ebx + 0x114u));
/* f82853: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82855: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f82858: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8285a: mov dword ptr [ebx + 0x114], eax */
  W32((uint32_t)(ebx + 0x114u), eax);
/* f82860: mov ecx, eax */
  ecx = eax;
/* f82862: mov eax, dword ptr [ebp + 0x114] */
  eax = R32((uint32_t)(ebp + 0x114u));
/* f82868: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8286a: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f8286d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8286f: mov dword ptr [ebx + 0x114], eax */
  W32((uint32_t)(ebx + 0x114u), eax);
/* f82875: mov ecx, dword ptr [ebp + 0x114] */
  ecx = R32((uint32_t)(ebp + 0x114u));
/* f8287b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8287d: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f82880: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82882: mov dword ptr [ebx + 0x114], ecx */
  W32((uint32_t)(ebx + 0x114u), ecx);
/* f82888: mov eax, dword ptr [ebp + 0x114] */
  eax = R32((uint32_t)(ebp + 0x114u));
/* f8288e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82890: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f82893: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82895: mov dword ptr [ebx + 0x114], eax */
  W32((uint32_t)(ebx + 0x114u), eax);
/* f8289b: mov edx, dword ptr [ebp + 0x114] */
  edx = R32((uint32_t)(ebp + 0x114u));
/* f828a1: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f828a3: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f828a6: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f828a8: mov dword ptr [ebx + 0x114], edx */
  W32((uint32_t)(ebx + 0x114u), edx);
/* f828ae: lea eax, [ebp + 0x118] */
  eax = (uint32_t)(ebp + 0x118u);
/* f828b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f828b5: lea ecx, [ebx + 0x118] */
  ecx = (uint32_t)(ebx + 0x118u);
/* f828bb: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf828c1u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f828c1: mov ecx, dword ptr [ebp + 0x124] */
  ecx = R32((uint32_t)(ebp + 0x124u));
/* f828c7: mov dword ptr [ebx + 0x124], ecx */
  W32((uint32_t)(ebx + 0x124u), ecx);
/* f828cd: mov edx, dword ptr [ebp + 0x128] */
  edx = R32((uint32_t)(ebp + 0x128u));
/* f828d3: mov ecx, dword ptr [ebx + 0x128] */
  ecx = R32((uint32_t)(ebx + 0x128u));
/* f828d9: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f828db: mov edi, ecx */
  edi = ecx;
/* f828dd: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f828e0: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* f828e2: mov dword ptr [ebx + 0x128], edi */
  W32((uint32_t)(ebx + 0x128u), edi);
/* f828e8: mov eax, dword ptr [ebp + 0x12c] */
  eax = R32((uint32_t)(ebp + 0x12cu));
/* f828ee: mov dword ptr [ebx + 0x12c], eax */
  W32((uint32_t)(ebx + 0x12cu), eax);
/* f828f4: mov ecx, dword ptr [ebp + 0x130] */
  ecx = R32((uint32_t)(ebp + 0x130u));
/* f828fa: mov dword ptr [ebx + 0x130], ecx */
  W32((uint32_t)(ebx + 0x130u), ecx);
/* f82900: mov edx, dword ptr [ebp + 0x134] */
  edx = R32((uint32_t)(ebp + 0x134u));
/* f82906: mov dword ptr [ebx + 0x134], edx */
  W32((uint32_t)(ebx + 0x134u), edx);
/* f8290c: mov eax, dword ptr [ebp + 0x138] */
  eax = R32((uint32_t)(ebp + 0x138u));
/* f82912: mov edx, dword ptr [ebx + 0x140] */
  edx = R32((uint32_t)(ebx + 0x140u));
/* f82918: mov dword ptr [ebx + 0x138], eax */
  W32((uint32_t)(ebx + 0x138u), eax);
/* f8291e: mov ecx, dword ptr [ebp + 0x13c] */
  ecx = R32((uint32_t)(ebp + 0x13cu));
/* f82924: mov eax, dword ptr [ebx + 0x140] */
  eax = R32((uint32_t)(ebx + 0x140u));
/* f8292a: mov dword ptr [ebx + 0x13c], ecx */
  W32((uint32_t)(ebx + 0x13cu), ecx);
/* f82930: xor edx, dword ptr [ebp + 0x140] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x140u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f82936: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f82939: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8293b: mov dword ptr [ebx + 0x140], eax */
  W32((uint32_t)(ebx + 0x140u), eax);
/* f82941: mov ecx, dword ptr [ebp + 0x140] */
  ecx = R32((uint32_t)(ebp + 0x140u));
/* f82947: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82949: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f8294c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8294e: lea edx, [ebp + 0x144] */
  edx = (uint32_t)(ebp + 0x144u);
/* f82954: mov dword ptr [ebx + 0x140], ecx */
  W32((uint32_t)(ebx + 0x140u), ecx);
/* f8295a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8295b: lea ecx, [ebx + 0x144] */
  ecx = (uint32_t)(ebx + 0x144u);
/* f82961: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* f82966: call 0xf7125d */
  esp -= 4; W32(esp, 0xf8296bu); SPILL(); f_f7125d(); if (g_unwind) return; RELOAD();
/* f8296b: mov esi, dword ptr [ebp + 0x150] */
  esi = R32((uint32_t)(ebp + 0x150u));
/* f82971: mov eax, dword ptr [ebx + 0x150] */
  eax = R32((uint32_t)(ebx + 0x150u));
/* f82977: mov ecx, dword ptr [ebx + 0x150] */
  ecx = R32((uint32_t)(ebx + 0x150u));
/* f8297d: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8297f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f82982: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82984: mov dword ptr [ebx + 0x150], ecx */
  W32((uint32_t)(ebx + 0x150u), ecx);
/* f8298a: mov eax, dword ptr [ebp + 0x150] */
  eax = R32((uint32_t)(ebp + 0x150u));
/* f82990: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82992: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f82995: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82997: mov dword ptr [ebx + 0x150], eax */
  W32((uint32_t)(ebx + 0x150u), eax);
/* f8299d: mov ecx, dword ptr [ebp + 0x150] */
  ecx = R32((uint32_t)(ebp + 0x150u));
/* f829a3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f829a5: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f829a8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f829aa: mov dword ptr [ebx + 0x150], ecx */
  W32((uint32_t)(ebx + 0x150u), ecx);
/* f829b0: mov edx, dword ptr [ebp + 0x154] */
  edx = R32((uint32_t)(ebp + 0x154u));
/* f829b6: mov dword ptr [ebx + 0x154], edx */
  W32((uint32_t)(ebx + 0x154u), edx);
/* f829bc: lea eax, [ebp + 0x158] */
  eax = (uint32_t)(ebp + 0x158u);
/* f829c2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f829c4: lea ecx, [ebx + 0x158] */
  ecx = (uint32_t)(ebx + 0x158u);
/* f829ca: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f829cc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f829cf: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* f829d2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* f829d5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* f829d8: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* f829db: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* f829de: lea ecx, [ebp + 0x168] */
  ecx = (uint32_t)(ebp + 0x168u);
/* f829e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f829e6: lea edx, [ebx + 0x168] */
  edx = (uint32_t)(ebx + 0x168u);
/* f829ec: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f829ee: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f829f1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f829f4: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* f829f7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f829fa: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* f829fd: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* f82a00: lea edx, [ebp + 0x178] */
  edx = (uint32_t)(ebp + 0x178u);
/* f82a06: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f82a08: lea eax, [ebx + 0x178] */
  eax = (uint32_t)(ebx + 0x178u);
/* f82a0e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f82a10: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f82a13: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f82a16: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* f82a19: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f82a1c: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* f82a1f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f82a22: lea eax, [ebp + 0x188] */
  eax = (uint32_t)(ebp + 0x188u);
/* f82a28: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f82a2a: lea ecx, [ebx + 0x188] */
  ecx = (uint32_t)(ebx + 0x188u);
/* f82a30: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f82a32: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f82a35: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* f82a38: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* f82a3b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* f82a3e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* f82a41: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* f82a44: lea esi, [ebp + 0x198] */
  esi = (uint32_t)(ebp + 0x198u);
/* f82a4a: lea edi, [ebx + 0x198] */
  edi = (uint32_t)(ebx + 0x198u);
/* f82a50: mov ecx, 0x10 */
  ecx = 0x10u;
/* f82a55: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f82a57: lea esi, [ebp + 0x1d8] */
  esi = (uint32_t)(ebp + 0x1d8u);
/* f82a5d: lea edi, [ebx + 0x1d8] */
  edi = (uint32_t)(ebx + 0x1d8u);
/* f82a63: mov ecx, 0x10 */
  ecx = 0x10u;
/* f82a68: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f82a6a: mov ecx, dword ptr [ebp + 0x218] */
  ecx = R32((uint32_t)(ebp + 0x218u));
/* f82a70: mov dword ptr [ebx + 0x218], ecx */
  W32((uint32_t)(ebx + 0x218u), ecx);
/* f82a76: mov edx, dword ptr [ebp + 0x21c] */
  edx = R32((uint32_t)(ebp + 0x21cu));
/* f82a7c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f82a80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f82a81: mov dword ptr [ebx + 0x21c], edx */
  W32((uint32_t)(ebx + 0x21cu), edx);
/* f82a87: mov eax, dword ptr [ebp + 0x220] */
  eax = R32((uint32_t)(ebp + 0x220u));
/* f82a8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82a8e: mov dword ptr [ebx + 0x220], eax */
  W32((uint32_t)(ebx + 0x220u), eax);
/* f82a94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f82a95: mov eax, ebx */
  eax = ebx;
/* f82a97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f82a98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f82a9f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f82aa2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82be0(void) {
  LOAD_REGS();
L_f82be0: /* f82be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82be1: mov esi, ecx */
  esi = ecx;
/* f82be3: call 0xf71e74 */
  esp -= 4; W32(esp, 0xf82be8u); SPILL(); f_f71e74(); if (g_unwind) return; RELOAD();
/* f82be8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f82bed: je 0xf82bfe */
  if (zf) goto L_f82bfe;
L_f82bef: /* f82bef: push 0x224 */
  { uint32_t v = 0x224u; esp -= 4; W32(esp, v); }
/* f82bf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82bf5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf82bfbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f82bfb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f82bfe: /* f82bfe: mov eax, esi */
  eax = esi;
/* f82c00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82c01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82c20(void) {
  LOAD_REGS();
L_f82c20: /* f82c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f82c21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f82c25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f82c28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82c29: mov esi, ecx */
  esi = ecx;
/* f82c2b: je 0xf82c60 */
  if (zf) goto L_f82c60;
L_f82c2d: /* f82c2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f82c30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82c31: push 0xf71e74 */
  { uint32_t v = 0xf71e74u; esp -= 4; W32(esp, v); }
/* f82c36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f82c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82c3a: push 0x224 */
  { uint32_t v = 0x224u; esp -= 4; W32(esp, v); }
/* f82c3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82c40: call 0xf97850 */
  esp -= 4; W32(esp, 0xf82c45u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f82c45: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f82c48: je 0xf82c58 */
  if (zf) goto L_f82c58;
L_f82c4a: /* f82c4a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f82c50: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f82c52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f82c54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82c55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf82c58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f82c58: /* f82c58: mov eax, edi */
  eax = edi;
/* f82c5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f82c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82c5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f82c5d: ret 4 */
  esp += 8; SPILL(); return;
L_f82c60: /* f82c60: mov ecx, esi */
  ecx = esi;
/* f82c62: call 0xf71e74 */
  esp -= 4; W32(esp, 0xf82c67u); SPILL(); f_f71e74(); if (g_unwind) return; RELOAD();
/* f82c67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f82c6a: je 0xf82c7b */
  if (zf) goto L_f82c7b;
L_f82c6c: /* f82c6c: push 0x224 */
  { uint32_t v = 0x224u; esp -= 4; W32(esp, v); }
/* f82c71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82c72: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf82c78u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f82c78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f82c7b: /* f82c7b: mov eax, esi */
  eax = esi;
/* f82c7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82c7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f82c7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82cb0(void) {
  LOAD_REGS();
L_f82cb0: /* f82cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82cb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82cb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f82cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82cb7: mov esi, ecx */
  esi = ecx;
/* f82cb9: call 0xf71e51 */
  esp -= 4; W32(esp, 0xf82cbeu); SPILL(); f_f71e51(); if (g_unwind) return; RELOAD();
/* f82cbe: mov al, byte ptr [edi + 0x208] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x208u))) & 0xffu);
/* f82cc4: lea ecx, [edi + 0x20c] */
  ecx = (uint32_t)(edi + 0x20cu);
/* f82cca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82ccb: lea ecx, [esi + 0x20c] */
  ecx = (uint32_t)(esi + 0x20cu);
/* f82cd1: mov byte ptr [esi + 0x208], al */
  W8((uint32_t)(esi + 0x208u), (eax & 0xffu));
/* f82cd7: call 0xf7160e */
  esp -= 4; W32(esp, 0xf82cdcu); SPILL(); f_f7160e(); if (g_unwind) return; RELOAD();
/* f82cdc: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f82ce2: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* f82ce8: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* f82cee: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* f82cf4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f82cf5: mov eax, esi */
  eax = esi;
/* f82cf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82cf8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82d20(void) {
  LOAD_REGS();
L_f82d20: /* f82d20: jmp 0xf71cfd */
  SPILL(); f_f71cfd(); return;
}

void f_f82d40(void) {
  LOAD_REGS();
L_f82d40: /* f82d40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f82d44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82d45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82d46: mov esi, ecx */
  esi = ecx;
/* f82d48: call 0xf71a00 */
  esp -= 4; W32(esp, 0xf82d4du); SPILL(); f_f71a00(); if (g_unwind) return; RELOAD();
/* f82d4d: mov eax, esi */
  eax = esi;
/* f82d4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82d50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82d70(void) {
  LOAD_REGS();
L_f82d70: /* f82d70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82d71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82d72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f82d76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82d77: mov esi, ecx */
  esi = ecx;
/* f82d79: call 0xf71e51 */
  esp -= 4; W32(esp, 0xf82d7eu); SPILL(); f_f71e51(); if (g_unwind) return; RELOAD();
/* f82d7e: mov al, byte ptr [edi + 0x208] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x208u))) & 0xffu);
/* f82d84: lea ecx, [edi + 0x20c] */
  ecx = (uint32_t)(edi + 0x20cu);
/* f82d8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82d8b: lea ecx, [esi + 0x20c] */
  ecx = (uint32_t)(esi + 0x20cu);
/* f82d91: mov byte ptr [esi + 0x208], al */
  W8((uint32_t)(esi + 0x208u), (eax & 0xffu));
/* f82d97: call 0xf7160e */
  esp -= 4; W32(esp, 0xf82d9cu); SPILL(); f_f7160e(); if (g_unwind) return; RELOAD();
/* f82d9c: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f82da2: lea ecx, [edi + 0x220] */
  ecx = (uint32_t)(edi + 0x220u);
/* f82da8: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* f82dae: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* f82db4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82db5: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* f82dbb: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* f82dc1: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf82dc7u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f82dc7: lea edx, [edi + 0x22c] */
  edx = (uint32_t)(edi + 0x22cu);
/* f82dcd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f82dce: lea ecx, [esi + 0x22c] */
  ecx = (uint32_t)(esi + 0x22cu);
/* f82dd4: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf82ddau); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f82dda: mov eax, dword ptr [edi + 0x238] */
  eax = R32((uint32_t)(edi + 0x238u));
/* f82de0: mov dword ptr [esi + 0x238], eax */
  W32((uint32_t)(esi + 0x238u), eax);
/* f82de6: mov ecx, dword ptr [edi + 0x23c] */
  ecx = R32((uint32_t)(edi + 0x23cu));
/* f82dec: mov dword ptr [esi + 0x23c], ecx */
  W32((uint32_t)(esi + 0x23cu), ecx);
/* f82df2: mov edx, dword ptr [edi + 0x240] */
  edx = R32((uint32_t)(edi + 0x240u));
/* f82df8: mov ecx, dword ptr [esi + 0x248] */
  ecx = R32((uint32_t)(esi + 0x248u));
/* f82dfe: mov dword ptr [esi + 0x240], edx */
  W32((uint32_t)(esi + 0x240u), edx);
/* f82e04: mov al, byte ptr [edi + 0x244] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x244u))) & 0xffu);
/* f82e0a: mov byte ptr [esi + 0x244], al */
  W8((uint32_t)(esi + 0x244u), (eax & 0xffu));
/* f82e10: xor ecx, dword ptr [edi + 0x248] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x248u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82e16: mov edx, dword ptr [esi + 0x248] */
  edx = R32((uint32_t)(esi + 0x248u));
/* f82e1c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f82e1f: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f82e21: mov dword ptr [esi + 0x248], edx */
  W32((uint32_t)(esi + 0x248u), edx);
/* f82e27: mov eax, edx */
  eax = edx;
/* f82e29: mov edx, dword ptr [edi + 0x248] */
  edx = R32((uint32_t)(edi + 0x248u));
/* f82e2f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f82e31: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f82e34: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f82e36: lea ecx, [edi + 0x250] */
  ecx = (uint32_t)(edi + 0x250u);
/* f82e3c: mov dword ptr [esi + 0x248], edx */
  W32((uint32_t)(esi + 0x248u), edx);
/* f82e42: mov eax, dword ptr [edi + 0x24c] */
  eax = R32((uint32_t)(edi + 0x24cu));
/* f82e48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82e49: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* f82e4f: mov dword ptr [esi + 0x24c], eax */
  W32((uint32_t)(esi + 0x24cu), eax);
/* f82e55: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf82e5bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f82e5b: lea edx, [edi + 0x25c] */
  edx = (uint32_t)(edi + 0x25cu);
/* f82e61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f82e62: lea ecx, [esi + 0x25c] */
  ecx = (uint32_t)(esi + 0x25cu);
/* f82e68: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf82e6eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f82e6e: mov ecx, dword ptr [edi + 0x268] */
  ecx = R32((uint32_t)(edi + 0x268u));
/* f82e74: mov eax, dword ptr [esi + 0x268] */
  eax = R32((uint32_t)(esi + 0x268u));
/* f82e7a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82e7c: mov ecx, dword ptr [esi + 0x268] */
  ecx = R32((uint32_t)(esi + 0x268u));
/* f82e82: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f82e85: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82e87: mov dword ptr [esi + 0x268], ecx */
  W32((uint32_t)(esi + 0x268u), ecx);
/* f82e8d: mov eax, dword ptr [edi + 0x268] */
  eax = R32((uint32_t)(edi + 0x268u));
/* f82e93: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82e95: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f82e98: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f82e9a: mov dword ptr [esi + 0x268], eax */
  W32((uint32_t)(esi + 0x268u), eax);
/* f82ea0: mov ecx, dword ptr [edi + 0x268] */
  ecx = R32((uint32_t)(edi + 0x268u));
/* f82ea6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82ea8: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f82eab: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f82ead: mov dword ptr [esi + 0x268], ecx */
  W32((uint32_t)(esi + 0x268u), ecx);
/* f82eb3: mov edx, dword ptr [edi + 0x26c] */
  edx = R32((uint32_t)(edi + 0x26cu));
/* f82eb9: mov dword ptr [esi + 0x26c], edx */
  W32((uint32_t)(esi + 0x26cu), edx);
/* f82ebf: mov eax, dword ptr [edi + 0x270] */
  eax = R32((uint32_t)(edi + 0x270u));
/* f82ec5: mov dword ptr [esi + 0x270], eax */
  W32((uint32_t)(esi + 0x270u), eax);
/* f82ecb: mov ecx, dword ptr [edi + 0x274] */
  ecx = R32((uint32_t)(edi + 0x274u));
/* f82ed1: mov dword ptr [esi + 0x274], ecx */
  W32((uint32_t)(esi + 0x274u), ecx);
/* f82ed7: mov edx, dword ptr [edi + 0x278] */
  edx = R32((uint32_t)(edi + 0x278u));
/* f82edd: mov dword ptr [esi + 0x278], edx */
  W32((uint32_t)(esi + 0x278u), edx);
/* f82ee3: mov eax, dword ptr [edi + 0x27c] */
  eax = R32((uint32_t)(edi + 0x27cu));
/* f82ee9: mov dword ptr [esi + 0x27c], eax */
  W32((uint32_t)(esi + 0x27cu), eax);
/* f82eef: mov ecx, dword ptr [edi + 0x280] */
  ecx = R32((uint32_t)(edi + 0x280u));
/* f82ef5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f82ef6: mov dword ptr [esi + 0x280], ecx */
  W32((uint32_t)(esi + 0x280u), ecx);
/* f82efc: mov eax, esi */
  eax = esi;
/* f82efe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f82eff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f82f80(void) {
  LOAD_REGS();
L_f82f80: /* f82f80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f82f81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f82f82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f82f83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82f84: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f82f88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f82f89: mov esi, ecx */
  esi = ecx;
/* f82f8b: call 0xf71e51 */
  esp -= 4; W32(esp, 0xf82f90u); SPILL(); f_f71e51(); if (g_unwind) return; RELOAD();
/* f82f90: lea eax, [edi + 0x208] */
  eax = (uint32_t)(edi + 0x208u);
/* f82f96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82f97: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* f82f9d: call 0xf721cb */
  esp -= 4; W32(esp, 0xf82fa2u); SPILL(); f_f721cb(); if (g_unwind) return; RELOAD();
/* f82fa2: lea ecx, [edi + 0x214] */
  ecx = (uint32_t)(edi + 0x214u);
/* f82fa8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82fa9: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* f82faf: call 0xf718b1 */
  esp -= 4; W32(esp, 0xf82fb4u); SPILL(); f_f718b1(); if (g_unwind) return; RELOAD();
/* f82fb4: mov ebp, edi */
  ebp = edi;
/* f82fb6: lea ebx, [esi + 0x220] */
  ebx = (uint32_t)(esi + 0x220u);
/* f82fbc: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f82fbe: mov dword ptr [esp + 0x14], 8 */
  W32((uint32_t)(esp + 0x14u), 0x8u);
L_f82fc6: /* f82fc6: lea edx, [ebx + ebp] */
  edx = (uint32_t)(ebx + ebp);
/* f82fc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f82fca: mov ecx, ebx */
  ecx = ebx;
/* f82fcc: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf82fd2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f82fd2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f82fd6: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f82fd9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f82fda: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* f82fde: jne 0xf82fc6 */
  if (!zf) goto L_f82fc6;
L_f82fe0: /* f82fe0: lea eax, [edi + 0x280] */
  eax = (uint32_t)(edi + 0x280u);
/* f82fe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f82fe7: lea ecx, [esi + 0x280] */
  ecx = (uint32_t)(esi + 0x280u);
/* f82fed: call 0xf72068 */
  esp -= 4; W32(esp, 0xf82ff2u); SPILL(); f_f72068(); if (g_unwind) return; RELOAD();
/* f82ff2: lea ecx, [edi + 0x28c] */
  ecx = (uint32_t)(edi + 0x28cu);
/* f82ff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f82ff9: lea ecx, [esi + 0x28c] */
  ecx = (uint32_t)(esi + 0x28cu);
/* f82fff: call 0xf72068 */
  esp -= 4; W32(esp, 0xf83004u); SPILL(); f_f72068(); if (g_unwind) return; RELOAD();
/* f83004: mov edx, dword ptr [edi + 0x298] */
  edx = R32((uint32_t)(edi + 0x298u));
/* f8300a: mov ecx, dword ptr [esi + 0x2a0] */
  ecx = R32((uint32_t)(esi + 0x2a0u));
/* f83010: mov ebp, dword ptr [esi + 0x2a0] */
  ebp = R32((uint32_t)(esi + 0x2a0u));
/* f83016: mov dword ptr [esi + 0x298], edx */
  W32((uint32_t)(esi + 0x298u), edx);
/* f8301c: mov eax, dword ptr [edi + 0x29c] */
  eax = R32((uint32_t)(edi + 0x29cu));
/* f83022: mov dword ptr [esi + 0x29c], eax */
  W32((uint32_t)(esi + 0x29cu), eax);
/* f83028: xor ecx, dword ptr [edi + 0x2a0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2a0u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8302e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f83031: xor ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* f83033: mov dword ptr [esi + 0x2a0], ebp */
  W32((uint32_t)(esi + 0x2a0u), ebp);
/* f83039: mov eax, dword ptr [edi + 0x2a0] */
  eax = R32((uint32_t)(edi + 0x2a0u));
/* f8303f: mov ecx, ebp */
  ecx = ebp;
/* f83041: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f83043: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f83046: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f83048: mov dword ptr [esi + 0x2a0], eax */
  W32((uint32_t)(esi + 0x2a0u), eax);
/* f8304e: mov ecx, dword ptr [edi + 0x2a0] */
  ecx = R32((uint32_t)(edi + 0x2a0u));
/* f83054: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f83056: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f83059: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8305b: mov dword ptr [esi + 0x2a0], ecx */
  W32((uint32_t)(esi + 0x2a0u), ecx);
/* f83061: mov edx, dword ptr [edi + 0x2a0] */
  edx = R32((uint32_t)(edi + 0x2a0u));
/* f83067: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f83069: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f8306c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8306d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8306f: mov dword ptr [esi + 0x2a0], edx */
  W32((uint32_t)(esi + 0x2a0u), edx);
/* f83075: mov eax, esi */
  eax = esi;
/* f83077: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83078: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f83079: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8307a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f830c0(void) {
  LOAD_REGS();
L_f830c0: /* f830c0: jmp 0xf711ef */
  SPILL(); f_f711ef(); return;
}

void f_f830e0(void) {
  LOAD_REGS();
L_f830e0: /* f830e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f830e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f830e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f830e6: mov esi, ecx */
  esi = ecx;
/* f830e8: call 0xf71069 */
  esp -= 4; W32(esp, 0xf830edu); SPILL(); f_f71069(); if (g_unwind) return; RELOAD();
/* f830ed: mov eax, esi */
  eax = esi;
/* f830ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f830f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83110(void) {
  LOAD_REGS();
L_f83110: /* f83110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83112: push 0xf99814 */
  { uint32_t v = 0xf99814u; esp -= 4; W32(esp, v); }
/* f83117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8311d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8311e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83127: mov esi, ecx */
  esi = ecx;
/* f83129: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8312d: mov dword ptr [esi], 0xfa2850 */
  W32((uint32_t)(esi), 0xfa2850u);
/* f83133: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* f8313b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf83141u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f83141: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f83147: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f8314c: call 0xf715a5 */
  esp -= 4; W32(esp, 0xf83151u); SPILL(); f_f715a5(); if (g_unwind) return; RELOAD();
/* f83151: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f83157: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f8315c: call 0xf715a5 */
  esp -= 4; W32(esp, 0xf83161u); SPILL(); f_f715a5(); if (g_unwind) return; RELOAD();
/* f83161: mov ecx, esi */
  ecx = esi;
/* f83163: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8316b: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf83170u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f83170: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f83174: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83175: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8317c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8317f: ret  */
  esp += 4; SPILL(); return;
}

void f_f831a0(void) {
  LOAD_REGS();
L_f831a0: /* f831a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f831a1: mov esi, ecx */
  esi = ecx;
/* f831a3: call 0xf716fe */
  esp -= 4; W32(esp, 0xf831a8u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f831a8: mov dword ptr [esi], 0xfa2850 */
  W32((uint32_t)(esi), 0xfa2850u);
/* f831ae: mov eax, esi */
  eax = esi;
/* f831b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f831b1: ret  */
  esp += 4; SPILL(); return;
}

void f_f831d0(void) {
  LOAD_REGS();
L_f831d0: /* f831d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f831d2: push 0xf99846 */
  { uint32_t v = 0xf99846u; esp -= 4; W32(esp, v); }
/* f831d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f831dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f831de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f831e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f831e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f831e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f831e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f831ec: mov esi, ecx */
  esi = ecx;
/* f831ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f831ef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f831f3: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf831f8u); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f831f8: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f831fe: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f83204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83205: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f8320d: mov dword ptr [esi], 0xfa2850 */
  W32((uint32_t)(esi), 0xfa2850u);
/* f83213: call 0xf71ed8 */
  esp -= 4; W32(esp, 0xf83218u); SPILL(); f_f71ed8(); if (g_unwind) return; RELOAD();
/* f83218: lea ecx, [edi + 0x1d8] */
  ecx = (uint32_t)(edi + 0x1d8u);
/* f8321e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8321f: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f83225: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f8322a: call 0xf71ed8 */
  esp -= 4; W32(esp, 0xf8322fu); SPILL(); f_f71ed8(); if (g_unwind) return; RELOAD();
/* f8322f: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* f83235: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* f8323b: mov eax, dword ptr [edi + 0x1e8] */
  eax = R32((uint32_t)(edi + 0x1e8u));
/* f83241: mov edi, dword ptr [esi + 0x1e8] */
  edi = R32((uint32_t)(esi + 0x1e8u));
/* f83247: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f83249: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f8324c: mov ecx, edi */
  ecx = edi;
/* f8324e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f83250: mov dword ptr [esi + 0x1e8], ecx */
  W32((uint32_t)(esi + 0x1e8u), ecx);
/* f83256: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f8325a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8325b: mov eax, esi */
  eax = esi;
/* f8325d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8325e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f83265: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f83268: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f832a0(void) {
  LOAD_REGS();
L_f832a0: /* f832a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f832a1: mov esi, ecx */
  esi = ecx;
/* f832a3: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf832a8u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f832a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f832ad: je 0xf832be */
  if (zf) goto L_f832be;
L_f832af: /* f832af: push 0x1ec */
  { uint32_t v = 0x1ecu; esp -= 4; W32(esp, v); }
/* f832b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f832b5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf832bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f832bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f832be: /* f832be: mov eax, esi */
  eax = esi;
/* f832c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f832c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f832e0(void) {
  LOAD_REGS();
L_f832e0: /* f832e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f832e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f832e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f832e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f832e9: mov esi, ecx */
  esi = ecx;
/* f832eb: je 0xf83320 */
  if (zf) goto L_f83320;
L_f832ed: /* f832ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f832f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f832f1: push 0xf71ed3 */
  { uint32_t v = 0xf71ed3u; esp -= 4; W32(esp, v); }
/* f832f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f832f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f832fa: push 0x1ec */
  { uint32_t v = 0x1ecu; esp -= 4; W32(esp, v); }
/* f832ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83300: call 0xf97850 */
  esp -= 4; W32(esp, 0xf83305u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f83305: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83308: je 0xf83318 */
  if (zf) goto L_f83318;
L_f8330a: /* f8330a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f83310: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f83312: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f83314: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83315: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf83318u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f83318: /* f83318: mov eax, edi */
  eax = edi;
/* f8331a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8331b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8331c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8331d: ret 4 */
  esp += 8; SPILL(); return;
L_f83320: /* f83320: mov ecx, esi */
  ecx = esi;
/* f83322: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf83327u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f83327: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8332a: je 0xf8333b */
  if (zf) goto L_f8333b;
L_f8332c: /* f8332c: push 0x1ec */
  { uint32_t v = 0x1ecu; esp -= 4; W32(esp, v); }
/* f83331: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83332: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf83338u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f83338: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8333b: /* f8333b: mov eax, esi */
  eax = esi;
/* f8333d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8333e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8333f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83370(void) {
  LOAD_REGS();
L_f83370: /* f83370: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83372: push 0xf99868 */
  { uint32_t v = 0xf99868u; esp -= 4; W32(esp, v); }
/* f83377: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8337d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8337e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83386: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83387: mov esi, ecx */
  esi = ecx;
/* f83389: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8338d: mov dword ptr [esi], 0xfa2940 */
  W32((uint32_t)(esi), 0xfa2940u);
/* f83393: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f8339b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf833a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f833a1: mov ecx, esi */
  ecx = esi;
/* f833a3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f833ab: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf833b0u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f833b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f833b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f833b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f833bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f833bf: ret  */
  esp += 4; SPILL(); return;
}

void f_f833e0(void) {
  LOAD_REGS();
L_f833e0: /* f833e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f833e1: mov esi, ecx */
  esi = ecx;
/* f833e3: call 0xf716fe */
  esp -= 4; W32(esp, 0xf833e8u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f833e8: mov dword ptr [esi], 0xfa2940 */
  W32((uint32_t)(esi), 0xfa2940u);
/* f833ee: mov eax, esi */
  eax = esi;
/* f833f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f833f1: ret  */
  esp += 4; SPILL(); return;
}

void f_f83410(void) {
  LOAD_REGS();
L_f83410: /* f83410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83412: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f83416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83417: mov esi, ecx */
  esi = ecx;
/* f83419: call 0xf717bc */
  esp -= 4; W32(esp, 0xf8341eu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f8341e: mov dword ptr [esi], 0xfa2940 */
  W32((uint32_t)(esi), 0xfa2940u);
/* f83424: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f8342a: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f83430: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f83436: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f8343c: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f83442: mov edi, dword ptr [esi + 0x1f4] */
  edi = R32((uint32_t)(esi + 0x1f4u));
/* f83448: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8344a: mov eax, edi */
  eax = edi;
/* f8344c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f8344f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f83451: mov dword ptr [esi + 0x1f4], eax */
  W32((uint32_t)(esi + 0x1f4u), eax);
/* f83457: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f83458: mov eax, esi */
  eax = esi;
/* f8345a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8345b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83480(void) {
  LOAD_REGS();
L_f83480: /* f83480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83481: mov esi, ecx */
  esi = ecx;
/* f83483: call 0xf714f6 */
  esp -= 4; W32(esp, 0xf83488u); SPILL(); f_f714f6(); if (g_unwind) return; RELOAD();
/* f83488: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8348d: je 0xf8349e */
  if (zf) goto L_f8349e;
L_f8348f: /* f8348f: push 0x1f8 */
  { uint32_t v = 0x1f8u; esp -= 4; W32(esp, v); }
/* f83494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83495: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8349bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8349b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8349e: /* f8349e: mov eax, esi */
  eax = esi;
/* f834a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f834a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f834c0(void) {
  LOAD_REGS();
L_f834c0: /* f834c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f834c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f834c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f834c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f834c9: mov esi, ecx */
  esi = ecx;
/* f834cb: je 0xf83500 */
  if (zf) goto L_f83500;
L_f834cd: /* f834cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f834d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f834d1: push 0xf714f6 */
  { uint32_t v = 0xf714f6u; esp -= 4; W32(esp, v); }
/* f834d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f834d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f834da: push 0x1f8 */
  { uint32_t v = 0x1f8u; esp -= 4; W32(esp, v); }
/* f834df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f834e0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf834e5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f834e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f834e8: je 0xf834f8 */
  if (zf) goto L_f834f8;
L_f834ea: /* f834ea: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f834f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f834f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f834f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f834f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf834f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f834f8: /* f834f8: mov eax, edi */
  eax = edi;
/* f834fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f834fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f834fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f834fd: ret 4 */
  esp += 8; SPILL(); return;
L_f83500: /* f83500: mov ecx, esi */
  ecx = esi;
/* f83502: call 0xf714f6 */
  esp -= 4; W32(esp, 0xf83507u); SPILL(); f_f714f6(); if (g_unwind) return; RELOAD();
/* f83507: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8350a: je 0xf8351b */
  if (zf) goto L_f8351b;
L_f8350c: /* f8350c: push 0x1f8 */
  { uint32_t v = 0x1f8u; esp -= 4; W32(esp, v); }
/* f83511: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83512: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf83518u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f83518: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8351b: /* f8351b: mov eax, esi */
  eax = esi;
/* f8351d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8351e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8351f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83550(void) {
  LOAD_REGS();
L_f83550: /* f83550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83552: push 0xf99888 */
  { uint32_t v = 0xf99888u; esp -= 4; W32(esp, v); }
/* f83557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8355d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8355e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83566: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83567: mov esi, ecx */
  esi = ecx;
/* f83569: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8356d: mov dword ptr [esi], 0xfa2a30 */
  W32((uint32_t)(esi), 0xfa2a30u);
/* f83573: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f8357b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf83581u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f83581: mov ecx, esi */
  ecx = esi;
/* f83583: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8358b: call 0xf714f6 */
  esp -= 4; W32(esp, 0xf83590u); SPILL(); f_f714f6(); if (g_unwind) return; RELOAD();
/* f83590: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f83594: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83595: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8359c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8359f: ret  */
  esp += 4; SPILL(); return;
}

void f_f835c0(void) {
  LOAD_REGS();
L_f835c0: /* f835c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f835c1: mov esi, ecx */
  esi = ecx;
/* f835c3: call 0xf716fe */
  esp -= 4; W32(esp, 0xf835c8u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f835c8: mov dword ptr [esi], 0xfa2a30 */
  W32((uint32_t)(esi), 0xfa2a30u);
/* f835ce: mov eax, esi */
  eax = esi;
/* f835d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f835d1: ret  */
  esp += 4; SPILL(); return;
}

void f_f835f0(void) {
  LOAD_REGS();
L_f835f0: /* f835f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f835f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f835f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f835f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f835f7: mov esi, ecx */
  esi = ecx;
/* f835f9: call 0xf717bc */
  esp -= 4; W32(esp, 0xf835feu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f835fe: mov dword ptr [esi], 0xfa2940 */
  W32((uint32_t)(esi), 0xfa2940u);
/* f83604: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f8360a: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f83610: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f83616: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f8361c: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f83622: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f83628: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8362a: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f8362d: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8362f: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f83635: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8363b: mov dword ptr [esi], 0xfa2a30 */
  W32((uint32_t)(esi), 0xfa2a30u);
/* f83641: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f83647: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f8364d: xor ecx, dword ptr [edi + 0x1fc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1fcu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f83653: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f83659: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f8365c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8365e: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f83664: mov ecx, eax */
  ecx = eax;
/* f83666: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* f8366c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8366e: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f83671: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f83673: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f83679: mov edx, dword ptr [edi + 0x1fc] */
  edx = R32((uint32_t)(edi + 0x1fcu));
/* f8367f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f83681: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f83684: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f83686: mov dword ptr [esi + 0x1fc], edx */
  W32((uint32_t)(esi + 0x1fcu), edx);
/* f8368c: mov eax, dword ptr [edi + 0x200] */
  eax = R32((uint32_t)(edi + 0x200u));
/* f83692: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f83698: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f8369e: mov dword ptr [esi + 0x204], ecx */
  W32((uint32_t)(esi + 0x204u), ecx);
/* f836a4: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f836aa: mov dword ptr [esi + 0x208], edx */
  W32((uint32_t)(esi + 0x208u), edx);
/* f836b0: mov eax, dword ptr [edi + 0x20c] */
  eax = R32((uint32_t)(edi + 0x20cu));
/* f836b6: mov dword ptr [esi + 0x20c], eax */
  W32((uint32_t)(esi + 0x20cu), eax);
/* f836bc: mov cl, byte ptr [edi + 0x210] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x210u))) & 0xffu);
/* f836c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f836c3: mov byte ptr [esi + 0x210], cl */
  W8((uint32_t)(esi + 0x210u), (ecx & 0xffu));
/* f836c9: mov eax, esi */
  eax = esi;
/* f836cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f836cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83710(void) {
  LOAD_REGS();
L_f83710: /* f83710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83711: mov esi, ecx */
  esi = ecx;
/* f83713: call 0xf71839 */
  esp -= 4; W32(esp, 0xf83718u); SPILL(); f_f71839(); if (g_unwind) return; RELOAD();
/* f83718: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8371d: je 0xf8372e */
  if (zf) goto L_f8372e;
L_f8371f: /* f8371f: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f83724: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83725: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8372bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8372b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8372e: /* f8372e: mov eax, esi */
  eax = esi;
/* f83730: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83731: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83750(void) {
  LOAD_REGS();
L_f83750: /* f83750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f83751: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f83755: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83759: mov esi, ecx */
  esi = ecx;
/* f8375b: je 0xf83790 */
  if (zf) goto L_f83790;
L_f8375d: /* f8375d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f83760: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83761: push 0xf71839 */
  { uint32_t v = 0xf71839u; esp -= 4; W32(esp, v); }
/* f83766: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f83769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8376a: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f8376f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83770: call 0xf97850 */
  esp -= 4; W32(esp, 0xf83775u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f83775: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83778: je 0xf83788 */
  if (zf) goto L_f83788;
L_f8377a: /* f8377a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f83780: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f83782: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f83784: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83785: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf83788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f83788: /* f83788: mov eax, edi */
  eax = edi;
/* f8378a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8378b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8378c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8378d: ret 4 */
  esp += 8; SPILL(); return;
L_f83790: /* f83790: mov ecx, esi */
  ecx = esi;
/* f83792: call 0xf71839 */
  esp -= 4; W32(esp, 0xf83797u); SPILL(); f_f71839(); if (g_unwind) return; RELOAD();
/* f83797: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8379a: je 0xf837ab */
  if (zf) goto L_f837ab;
L_f8379c: /* f8379c: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f837a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f837a2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf837a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f837a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f837ab: /* f837ab: mov eax, esi */
  eax = esi;
/* f837ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f837ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f837af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f837e0(void) {
  LOAD_REGS();
L_f837e0: /* f837e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f837e2: push 0xf998b7 */
  { uint32_t v = 0xf998b7u; esp -= 4; W32(esp, v); }
/* f837e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f837ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f837ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f837f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f837f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f837f7: mov esi, ecx */
  esi = ecx;
/* f837f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f837fd: mov dword ptr [esi], 0xfa2b20 */
  W32((uint32_t)(esi), 0xfa2b20u);
/* f83803: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f8380b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf83811u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f83811: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f83817: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f8381c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf83822u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f83822: mov ecx, esi */
  ecx = esi;
/* f83824: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8382c: call 0xf714f6 */
  esp -= 4; W32(esp, 0xf83831u); SPILL(); f_f714f6(); if (g_unwind) return; RELOAD();
/* f83831: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f83835: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83836: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8383d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f83840: ret  */
  esp += 4; SPILL(); return;
}

void f_f83870(void) {
  LOAD_REGS();
L_f83870: /* f83870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83872: push 0xf998d8 */
  { uint32_t v = 0xf998d8u; esp -= 4; W32(esp, v); }
/* f83877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8387d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8387e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83887: mov esi, ecx */
  esi = ecx;
/* f83889: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8388d: call 0xf716fe */
  esp -= 4; W32(esp, 0xf83892u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f83892: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f83898: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f838a0: mov dword ptr [esi], 0xfa2b20 */
  W32((uint32_t)(esi), 0xfa2b20u);
/* f838a6: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf838acu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f838ac: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f838b0: mov eax, esi */
  eax = esi;
/* f838b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f838b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f838ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f838bd: ret  */
  esp += 4; SPILL(); return;
}

void f_f838e0(void) {
  LOAD_REGS();
L_f838e0: /* f838e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f838e2: push 0xf998f8 */
  { uint32_t v = 0xf998f8u; esp -= 4; W32(esp, v); }
/* f838e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f838ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f838ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f838f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f838f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f838f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f838f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f838fc: mov esi, ecx */
  esi = ecx;
/* f838fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f838ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f83903: call 0xf717bc */
  esp -= 4; W32(esp, 0xf83908u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f83908: mov dword ptr [esi], 0xfa2940 */
  W32((uint32_t)(esi), 0xfa2940u);
/* f8390e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f83914: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8391a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f83920: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f83926: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8392c: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f83932: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f83934: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f83937: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f83939: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f8393f: mov dword ptr [esi], 0xfa2b20 */
  W32((uint32_t)(esi), 0xfa2b20u);
/* f83945: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f8394b: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f83951: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f83957: add edi, 0x200 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f8395d: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f83963: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83964: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f8396a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f83972: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf83978u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f83978: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f8397c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8397d: mov eax, esi */
  eax = esi;
/* f8397f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83980: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f83987: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8398a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f839c0(void) {
  LOAD_REGS();
L_f839c0: /* f839c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f839c1: mov esi, ecx */
  esi = ecx;
/* f839c3: call 0xf71640 */
  esp -= 4; W32(esp, 0xf839c8u); SPILL(); f_f71640(); if (g_unwind) return; RELOAD();
/* f839c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f839cd: je 0xf839de */
  if (zf) goto L_f839de;
L_f839cf: /* f839cf: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* f839d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f839d5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf839dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f839db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f839de: /* f839de: mov eax, esi */
  eax = esi;
/* f839e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f839e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83a00(void) {
  LOAD_REGS();
L_f83a00: /* f83a00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f83a01: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f83a05: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83a09: mov esi, ecx */
  esi = ecx;
/* f83a0b: je 0xf83a40 */
  if (zf) goto L_f83a40;
L_f83a0d: /* f83a0d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f83a10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83a11: push 0xf71640 */
  { uint32_t v = 0xf71640u; esp -= 4; W32(esp, v); }
/* f83a16: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f83a19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83a1a: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* f83a1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83a20: call 0xf97850 */
  esp -= 4; W32(esp, 0xf83a25u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f83a25: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83a28: je 0xf83a38 */
  if (zf) goto L_f83a38;
L_f83a2a: /* f83a2a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f83a30: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f83a32: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f83a34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83a35: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf83a38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f83a38: /* f83a38: mov eax, edi */
  eax = edi;
/* f83a3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f83a3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83a3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f83a3d: ret 4 */
  esp += 8; SPILL(); return;
L_f83a40: /* f83a40: mov ecx, esi */
  ecx = esi;
/* f83a42: call 0xf71640 */
  esp -= 4; W32(esp, 0xf83a47u); SPILL(); f_f71640(); if (g_unwind) return; RELOAD();
/* f83a47: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83a4a: je 0xf83a5b */
  if (zf) goto L_f83a5b;
L_f83a4c: /* f83a4c: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* f83a51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83a52: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf83a58u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f83a58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f83a5b: /* f83a5b: mov eax, esi */
  eax = esi;
/* f83a5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83a5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f83a5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83a90(void) {
  LOAD_REGS();
L_f83a90: /* f83a90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83a92: push 0xf99918 */
  { uint32_t v = 0xf99918u; esp -= 4; W32(esp, v); }
/* f83a97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f83a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83a9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83aa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83aa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83aa7: mov esi, ecx */
  esi = ecx;
/* f83aa9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f83aad: mov dword ptr [esi], 0xfa2c10 */
  W32((uint32_t)(esi), 0xfa2c10u);
/* f83ab3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f83abb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf83ac1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f83ac1: mov ecx, esi */
  ecx = esi;
/* f83ac3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f83acb: call 0xf714f6 */
  esp -= 4; W32(esp, 0xf83ad0u); SPILL(); f_f714f6(); if (g_unwind) return; RELOAD();
/* f83ad0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f83ad4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83ad5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f83adc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f83adf: ret  */
  esp += 4; SPILL(); return;
}

void f_f83b00(void) {
  LOAD_REGS();
L_f83b00: /* f83b00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83b01: mov esi, ecx */
  esi = ecx;
/* f83b03: call 0xf716fe */
  esp -= 4; W32(esp, 0xf83b08u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f83b08: mov dword ptr [esi], 0xfa2c10 */
  W32((uint32_t)(esi), 0xfa2c10u);
/* f83b0e: mov eax, esi */
  eax = esi;
/* f83b10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83b11: ret  */
  esp += 4; SPILL(); return;
}

void f_f83b30(void) {
  LOAD_REGS();
L_f83b30: /* f83b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83b31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83b32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f83b36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83b37: mov esi, ecx */
  esi = ecx;
/* f83b39: call 0xf717bc */
  esp -= 4; W32(esp, 0xf83b3eu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f83b3e: mov dword ptr [esi], 0xfa2940 */
  W32((uint32_t)(esi), 0xfa2940u);
/* f83b44: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f83b4a: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f83b50: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f83b56: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f83b5c: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f83b62: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f83b68: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f83b6a: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f83b6d: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f83b6f: mov dword ptr [esi + 0x1f4], eax */
  W32((uint32_t)(esi + 0x1f4u), eax);
/* f83b75: mov dword ptr [esi], 0xfa2c10 */
  W32((uint32_t)(esi), 0xfa2c10u);
/* f83b7b: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f83b81: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f83b87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f83b88: mov eax, esi */
  eax = esi;
/* f83b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83b8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83bb0(void) {
  LOAD_REGS();
L_f83bb0: /* f83bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83bb1: mov esi, ecx */
  esi = ecx;
/* f83bb3: call 0xf7218f */
  esp -= 4; W32(esp, 0xf83bb8u); SPILL(); f_f7218f(); if (g_unwind) return; RELOAD();
/* f83bb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83bbd: je 0xf83bce */
  if (zf) goto L_f83bce;
L_f83bbf: /* f83bbf: push 0x1fc */
  { uint32_t v = 0x1fcu; esp -= 4; W32(esp, v); }
/* f83bc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83bc5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf83bcbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f83bcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f83bce: /* f83bce: mov eax, esi */
  eax = esi;
/* f83bd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83bd1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83bf0(void) {
  LOAD_REGS();
L_f83bf0: /* f83bf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f83bf1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f83bf5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83bf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83bf9: mov esi, ecx */
  esi = ecx;
/* f83bfb: je 0xf83c30 */
  if (zf) goto L_f83c30;
L_f83bfd: /* f83bfd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f83c00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83c01: push 0xf7218f */
  { uint32_t v = 0xf7218fu; esp -= 4; W32(esp, v); }
/* f83c06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f83c09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83c0a: push 0x1fc */
  { uint32_t v = 0x1fcu; esp -= 4; W32(esp, v); }
/* f83c0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83c10: call 0xf97850 */
  esp -= 4; W32(esp, 0xf83c15u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f83c15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83c18: je 0xf83c28 */
  if (zf) goto L_f83c28;
L_f83c1a: /* f83c1a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f83c20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f83c22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f83c24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83c25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf83c28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f83c28: /* f83c28: mov eax, edi */
  eax = edi;
/* f83c2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f83c2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83c2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f83c2d: ret 4 */
  esp += 8; SPILL(); return;
L_f83c30: /* f83c30: mov ecx, esi */
  ecx = esi;
/* f83c32: call 0xf7218f */
  esp -= 4; W32(esp, 0xf83c37u); SPILL(); f_f7218f(); if (g_unwind) return; RELOAD();
/* f83c37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83c3a: je 0xf83c4b */
  if (zf) goto L_f83c4b;
L_f83c3c: /* f83c3c: push 0x1fc */
  { uint32_t v = 0x1fcu; esp -= 4; W32(esp, v); }
/* f83c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83c42: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf83c48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f83c48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f83c4b: /* f83c4b: mov eax, esi */
  eax = esi;
/* f83c4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83c4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f83c4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83c80(void) {
  LOAD_REGS();
L_f83c80: /* f83c80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83c82: push 0xf99938 */
  { uint32_t v = 0xf99938u; esp -= 4; W32(esp, v); }
/* f83c87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f83c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83c8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83c95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83c96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83c97: mov esi, ecx */
  esi = ecx;
/* f83c99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f83c9d: mov dword ptr [esi], 0xfa2d00 */
  W32((uint32_t)(esi), 0xfa2d00u);
/* f83ca3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f83cab: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf83cb1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f83cb1: mov ecx, esi */
  ecx = esi;
/* f83cb3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f83cbb: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf83cc0u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f83cc0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f83cc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83cc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f83ccc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f83ccf: ret  */
  esp += 4; SPILL(); return;
}

void f_f83cf0(void) {
  LOAD_REGS();
L_f83cf0: /* f83cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83cf1: mov esi, ecx */
  esi = ecx;
/* f83cf3: call 0xf716fe */
  esp -= 4; W32(esp, 0xf83cf8u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f83cf8: mov dword ptr [esi], 0xfa2d00 */
  W32((uint32_t)(esi), 0xfa2d00u);
/* f83cfe: mov eax, esi */
  eax = esi;
/* f83d00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83d01: ret  */
  esp += 4; SPILL(); return;
}

void f_f83d20(void) {
  LOAD_REGS();
L_f83d20: /* f83d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83d21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83d22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f83d26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83d27: mov esi, ecx */
  esi = ecx;
/* f83d29: call 0xf717bc */
  esp -= 4; W32(esp, 0xf83d2eu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f83d2e: mov dword ptr [esi], 0xfa2d00 */
  W32((uint32_t)(esi), 0xfa2d00u);
/* f83d34: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f83d3a: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f83d40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f83d41: mov eax, esi */
  eax = esi;
/* f83d43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83d44: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83d60(void) {
  LOAD_REGS();
L_f83d60: /* f83d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83d61: mov esi, ecx */
  esi = ecx;
/* f83d63: call 0xf71046 */
  esp -= 4; W32(esp, 0xf83d68u); SPILL(); f_f71046(); if (g_unwind) return; RELOAD();
/* f83d68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83d6d: je 0xf83d7e */
  if (zf) goto L_f83d7e;
L_f83d6f: /* f83d6f: push 0x1f0 */
  { uint32_t v = 0x1f0u; esp -= 4; W32(esp, v); }
/* f83d74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83d75: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf83d7bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f83d7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f83d7e: /* f83d7e: mov eax, esi */
  eax = esi;
/* f83d80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83d81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83da0(void) {
  LOAD_REGS();
L_f83da0: /* f83da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f83da1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f83da5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83da8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83da9: mov esi, ecx */
  esi = ecx;
/* f83dab: je 0xf83de0 */
  if (zf) goto L_f83de0;
L_f83dad: /* f83dad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f83db0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83db1: push 0xf71046 */
  { uint32_t v = 0xf71046u; esp -= 4; W32(esp, v); }
/* f83db6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f83db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83dba: push 0x1f0 */
  { uint32_t v = 0x1f0u; esp -= 4; W32(esp, v); }
/* f83dbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83dc0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf83dc5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f83dc5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83dc8: je 0xf83dd8 */
  if (zf) goto L_f83dd8;
L_f83dca: /* f83dca: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f83dd0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f83dd2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f83dd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83dd5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf83dd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f83dd8: /* f83dd8: mov eax, edi */
  eax = edi;
/* f83dda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f83ddb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83ddc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f83ddd: ret 4 */
  esp += 8; SPILL(); return;
L_f83de0: /* f83de0: mov ecx, esi */
  ecx = esi;
/* f83de2: call 0xf71046 */
  esp -= 4; W32(esp, 0xf83de7u); SPILL(); f_f71046(); if (g_unwind) return; RELOAD();
/* f83de7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f83dea: je 0xf83dfb */
  if (zf) goto L_f83dfb;
L_f83dec: /* f83dec: push 0x1f0 */
  { uint32_t v = 0x1f0u; esp -= 4; W32(esp, v); }
/* f83df1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83df2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf83df8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f83df8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f83dfb: /* f83dfb: mov eax, esi */
  eax = esi;
/* f83dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83dfe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f83dff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f83e30(void) {
  LOAD_REGS();
L_f83e30: /* f83e30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83e32: push 0xf99972 */
  { uint32_t v = 0xf99972u; esp -= 4; W32(esp, v); }
/* f83e37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f83e3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83e3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83e45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83e47: mov esi, ecx */
  esi = ecx;
/* f83e49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f83e4d: mov dword ptr [esi], 0xfa2df0 */
  W32((uint32_t)(esi), 0xfa2df0u);
/* f83e53: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f83e5b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf83e61u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f83e61: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f83e66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83e67: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f83e69: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f83e6b: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f83e71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83e72: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* f83e77: call 0xf97850 */
  esp -= 4; W32(esp, 0xf83e7cu); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f83e7c: mov ecx, esi */
  ecx = esi;
/* f83e7e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f83e86: call 0xf71046 */
  esp -= 4; W32(esp, 0xf83e8bu); SPILL(); f_f71046(); if (g_unwind) return; RELOAD();
/* f83e8b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f83e8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83e90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f83e97: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f83e9a: ret  */
  esp += 4; SPILL(); return;
}

void f_f83ec0(void) {
  LOAD_REGS();
L_f83ec0: /* f83ec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83ec2: push 0xf99998 */
  { uint32_t v = 0xf99998u; esp -= 4; W32(esp, v); }
/* f83ec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f83ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83ece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83ed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83ed7: mov esi, ecx */
  esi = ecx;
/* f83ed9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f83edd: call 0xf716fe */
  esp -= 4; W32(esp, 0xf83ee2u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f83ee2: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f83ee7: mov ecx, dword ptr [0xfce3c4] */
  ecx = R32((uint32_t)(0xfce3c4u));
/* f83eed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83eee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83eef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f83ef1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f83ef3: lea edx, [esi + 0x200] */
  edx = (uint32_t)(esi + 0x200u);
/* f83ef9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f83efa: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* f83f02: mov dword ptr [esi], 0xfa2df0 */
  W32((uint32_t)(esi), 0xfa2df0u);
/* f83f08: call 0xf978b0 */
  esp -= 4; W32(esp, 0xf83f0du); SPILL(); f_f978b0(); if (g_unwind) return; RELOAD();
/* f83f0d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f83f11: mov eax, esi */
  eax = esi;
/* f83f13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f83f14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f83f1b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f83f1e: ret  */
  esp += 4; SPILL(); return;
}

void f_f83f40(void) {
  LOAD_REGS();
L_f83f40: /* f83f40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f83f42: push 0xf999b8 */
  { uint32_t v = 0xf999b8u; esp -= 4; W32(esp, v); }
/* f83f47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f83f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83f4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f83f55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f83f57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83f58: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f83f5c: mov esi, ecx */
  esi = ecx;
/* f83f5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f83f5f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f83f63: call 0xf717bc */
  esp -= 4; W32(esp, 0xf83f68u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f83f68: mov dword ptr [esi], 0xfa2d00 */
  W32((uint32_t)(esi), 0xfa2d00u);
/* f83f6e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f83f74: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f83f7a: mov eax, dword ptr [esi + 0x1f8] */
  eax = R32((uint32_t)(esi + 0x1f8u));
/* f83f80: mov dword ptr [esi], 0xfa2df0 */
  W32((uint32_t)(esi), 0xfa2df0u);
/* f83f86: mov cl, byte ptr [edi + 0x1f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1f0u))) & 0xffu);
/* f83f8c: mov byte ptr [esi + 0x1f0], cl */
  W8((uint32_t)(esi + 0x1f0u), (ecx & 0xffu));
/* f83f92: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f83f98: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f83f9e: xor eax, dword ptr [edi + 0x1f8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f83fa4: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f83faa: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f83fad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f83faf: mov dword ptr [esi + 0x1f8], ecx */
  W32((uint32_t)(esi + 0x1f8u), ecx);
/* f83fb5: mov eax, ecx */
  eax = ecx;
/* f83fb7: mov ecx, dword ptr [edi + 0x1f8] */
  ecx = R32((uint32_t)(edi + 0x1f8u));
/* f83fbd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f83fbf: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f83fc2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f83fc4: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f83fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83fca: mov dword ptr [esi + 0x1f8], ecx */
  W32((uint32_t)(esi + 0x1f8u), ecx);
/* f83fd0: mov ecx, dword ptr [0xfce3c8] */
  ecx = R32((uint32_t)(0xfce3c8u));
/* f83fd6: mov edx, dword ptr [edi + 0x1fc] */
  edx = R32((uint32_t)(edi + 0x1fcu));
/* f83fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f83fdd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f83fdf: mov dword ptr [esi + 0x1fc], edx */
  W32((uint32_t)(esi + 0x1fcu), edx);
/* f83fe5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f83fe7: lea edx, [edi + 0x200] */
  edx = (uint32_t)(edi + 0x200u);
/* f83fed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f83fee: lea eax, [esi + 0x200] */
  eax = (uint32_t)(esi + 0x200u);
/* f83ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f83ff5: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* f83ffd: call 0xf97912 */
  esp -= 4; W32(esp, 0xf84002u); SPILL(); f_f97912(); if (g_unwind) return; RELOAD();
/* f84002: mov ecx, dword ptr [edi + 0x218] */
  ecx = R32((uint32_t)(edi + 0x218u));
/* f84008: mov dword ptr [esi + 0x218], ecx */
  W32((uint32_t)(esi + 0x218u), ecx);
/* f8400e: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* f84014: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f84018: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* f8401e: mov eax, dword ptr [edi + 0x220] */
  eax = R32((uint32_t)(edi + 0x220u));
/* f84024: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* f8402a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8402b: mov eax, esi */
  eax = esi;
/* f8402d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8402e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f84035: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f84038: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84080(void) {
  LOAD_REGS();
L_f84080: /* f84080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84081: mov esi, ecx */
  esi = ecx;
/* f84083: call 0xf721d5 */
  esp -= 4; W32(esp, 0xf84088u); SPILL(); f_f721d5(); if (g_unwind) return; RELOAD();
/* f84088: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8408d: je 0xf8409e */
  if (zf) goto L_f8409e;
L_f8408f: /* f8408f: push 0x224 */
  { uint32_t v = 0x224u; esp -= 4; W32(esp, v); }
/* f84094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84095: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8409bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8409b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8409e: /* f8409e: mov eax, esi */
  eax = esi;
/* f840a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f840a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f840c0(void) {
  LOAD_REGS();
L_f840c0: /* f840c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f840c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f840c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f840c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f840c9: mov esi, ecx */
  esi = ecx;
/* f840cb: je 0xf84100 */
  if (zf) goto L_f84100;
L_f840cd: /* f840cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f840d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f840d1: push 0xf721d5 */
  { uint32_t v = 0xf721d5u; esp -= 4; W32(esp, v); }
/* f840d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f840d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f840da: push 0x224 */
  { uint32_t v = 0x224u; esp -= 4; W32(esp, v); }
/* f840df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f840e0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf840e5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f840e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f840e8: je 0xf840f8 */
  if (zf) goto L_f840f8;
L_f840ea: /* f840ea: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f840f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f840f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f840f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f840f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf840f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f840f8: /* f840f8: mov eax, edi */
  eax = edi;
/* f840fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f840fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f840fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f840fd: ret 4 */
  esp += 8; SPILL(); return;
L_f84100: /* f84100: mov ecx, esi */
  ecx = esi;
/* f84102: call 0xf721d5 */
  esp -= 4; W32(esp, 0xf84107u); SPILL(); f_f721d5(); if (g_unwind) return; RELOAD();
/* f84107: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8410a: je 0xf8411b */
  if (zf) goto L_f8411b;
L_f8410c: /* f8410c: push 0x224 */
  { uint32_t v = 0x224u; esp -= 4; W32(esp, v); }
/* f84111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84112: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf84118u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f84118: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8411b: /* f8411b: mov eax, esi */
  eax = esi;
/* f8411d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8411e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8411f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84150(void) {
  LOAD_REGS();
L_f84150: /* f84150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84152: push 0xf999d8 */
  { uint32_t v = 0xf999d8u; esp -= 4; W32(esp, v); }
/* f84157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8415d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8415e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84167: mov esi, ecx */
  esi = ecx;
/* f84169: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8416d: mov dword ptr [esi], 0xfa2ee0 */
  W32((uint32_t)(esi), 0xfa2ee0u);
/* f84173: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f8417b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf84181u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f84181: mov ecx, esi */
  ecx = esi;
/* f84183: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8418b: call 0xf71046 */
  esp -= 4; W32(esp, 0xf84190u); SPILL(); f_f71046(); if (g_unwind) return; RELOAD();
/* f84190: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f84194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84195: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8419c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8419f: ret  */
  esp += 4; SPILL(); return;
}

void f_f841c0(void) {
  LOAD_REGS();
L_f841c0: /* f841c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f841c1: mov esi, ecx */
  esi = ecx;
/* f841c3: call 0xf716fe */
  esp -= 4; W32(esp, 0xf841c8u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f841c8: mov dword ptr [esi], 0xfa2ee0 */
  W32((uint32_t)(esi), 0xfa2ee0u);
/* f841ce: mov eax, esi */
  eax = esi;
/* f841d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f841d1: ret  */
  esp += 4; SPILL(); return;
}

void f_f841f0(void) {
  LOAD_REGS();
L_f841f0: /* f841f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f841f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f841f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f841f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f841f7: mov esi, ecx */
  esi = ecx;
/* f841f9: call 0xf717bc */
  esp -= 4; W32(esp, 0xf841feu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f841fe: mov dword ptr [esi], 0xfa2d00 */
  W32((uint32_t)(esi), 0xfa2d00u);
/* f84204: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f8420a: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f84210: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f84216: mov dword ptr [esi], 0xfa2ee0 */
  W32((uint32_t)(esi), 0xfa2ee0u);
/* f8421c: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f84222: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f84224: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f84227: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f84229: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* f8422f: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f84235: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f84236: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f8423c: mov eax, esi */
  eax = esi;
/* f8423e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8423f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84270(void) {
  LOAD_REGS();
L_f84270: /* f84270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84271: mov esi, ecx */
  esi = ecx;
/* f84273: call 0xf71091 */
  esp -= 4; W32(esp, 0xf84278u); SPILL(); f_f71091(); if (g_unwind) return; RELOAD();
/* f84278: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8427d: je 0xf8428e */
  if (zf) goto L_f8428e;
L_f8427f: /* f8427f: push 0x1f8 */
  { uint32_t v = 0x1f8u; esp -= 4; W32(esp, v); }
/* f84284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84285: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8428bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8428b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8428e: /* f8428e: mov eax, esi */
  eax = esi;
/* f84290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84291: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f842b0(void) {
  LOAD_REGS();
L_f842b0: /* f842b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f842b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f842b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f842b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f842b9: mov esi, ecx */
  esi = ecx;
/* f842bb: je 0xf842f0 */
  if (zf) goto L_f842f0;
L_f842bd: /* f842bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f842c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f842c1: push 0xf71091 */
  { uint32_t v = 0xf71091u; esp -= 4; W32(esp, v); }
/* f842c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f842c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f842ca: push 0x1f8 */
  { uint32_t v = 0x1f8u; esp -= 4; W32(esp, v); }
/* f842cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f842d0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf842d5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f842d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f842d8: je 0xf842e8 */
  if (zf) goto L_f842e8;
L_f842da: /* f842da: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f842e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f842e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f842e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f842e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf842e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f842e8: /* f842e8: mov eax, edi */
  eax = edi;
/* f842ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f842eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f842ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f842ed: ret 4 */
  esp += 8; SPILL(); return;
L_f842f0: /* f842f0: mov ecx, esi */
  ecx = esi;
/* f842f2: call 0xf71091 */
  esp -= 4; W32(esp, 0xf842f7u); SPILL(); f_f71091(); if (g_unwind) return; RELOAD();
/* f842f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f842fa: je 0xf8430b */
  if (zf) goto L_f8430b;
L_f842fc: /* f842fc: push 0x1f8 */
  { uint32_t v = 0x1f8u; esp -= 4; W32(esp, v); }
/* f84301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84302: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf84308u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f84308: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8430b: /* f8430b: mov eax, esi */
  eax = esi;
/* f8430d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8430e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8430f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84340(void) {
  LOAD_REGS();
L_f84340: /* f84340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84342: push 0xf99a25 */
  { uint32_t v = 0xf99a25u; esp -= 4; W32(esp, v); }
/* f84347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8434d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8434e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84357: mov esi, ecx */
  esi = ecx;
/* f84359: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8435d: mov dword ptr [esi], 0xfa2fd0 */
  W32((uint32_t)(esi), 0xfa2fd0u);
/* f84363: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* f8436b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf84371u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f84371: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* f84377: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* f8437c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf84382u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f84382: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f84388: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f8438d: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf84393u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f84393: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* f84399: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f8439e: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf843a4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f843a4: mov ecx, esi */
  ecx = esi;
/* f843a6: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f843ae: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf843b3u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f843b3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f843b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f843b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f843bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f843c2: ret  */
  esp += 4; SPILL(); return;
}

void f_f84400(void) {
  LOAD_REGS();
L_f84400: /* f84400: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84402: push 0xf99a66 */
  { uint32_t v = 0xf99a66u; esp -= 4; W32(esp, v); }
/* f84407: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8440d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8440e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84417: mov esi, ecx */
  esi = ecx;
/* f84419: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8441d: call 0xf716fe */
  esp -= 4; W32(esp, 0xf84422u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f84422: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* f84428: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f84430: mov dword ptr [esi], 0xfa2fd0 */
  W32((uint32_t)(esi), 0xfa2fd0u);
/* f84436: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf8443cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f8443c: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f84442: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f84447: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf8444du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f8444d: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* f84453: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* f84458: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf8445eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f8445e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f84462: mov eax, esi */
  eax = esi;
/* f84464: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84465: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8446c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8446f: ret  */
  esp += 4; SPILL(); return;
}

void f_f84490(void) {
  LOAD_REGS();
L_f84490: /* f84490: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84492: push 0xf99aa6 */
  { uint32_t v = 0xf99aa6u; esp -= 4; W32(esp, v); }
/* f84497: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8449d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8449e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f844a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f844a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f844a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f844a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f844ac: mov esi, ecx */
  esi = ecx;
/* f844ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f844af: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f844b3: call 0xf717bc */
  esp -= 4; W32(esp, 0xf844b8u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f844b8: lea eax, [edi + 0x1ec] */
  eax = (uint32_t)(edi + 0x1ecu);
/* f844be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f844bf: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* f844c5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f844cd: mov dword ptr [esi], 0xfa2fd0 */
  W32((uint32_t)(esi), 0xfa2fd0u);
/* f844d3: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf844d9u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f844d9: lea ecx, [edi + 0x1f8] */
  ecx = (uint32_t)(edi + 0x1f8u);
/* f844df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f844e0: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f844e6: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f844eb: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf844f1u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f844f1: lea edx, [edi + 0x204] */
  edx = (uint32_t)(edi + 0x204u);
/* f844f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f844f8: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* f844fe: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* f84503: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf84509u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f84509: mov eax, dword ptr [edi + 0x210] */
  eax = R32((uint32_t)(edi + 0x210u));
/* f8450f: mov edx, dword ptr [esi + 0x214] */
  edx = R32((uint32_t)(esi + 0x214u));
/* f84515: mov dword ptr [esi + 0x210], eax */
  W32((uint32_t)(esi + 0x210u), eax);
/* f8451b: mov ecx, dword ptr [edi + 0x214] */
  ecx = R32((uint32_t)(edi + 0x214u));
/* f84521: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f84523: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f84526: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f84528: mov dword ptr [esi + 0x214], edx */
  W32((uint32_t)(esi + 0x214u), edx);
/* f8452e: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f84534: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* f8453a: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* f84540: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* f84546: mov ecx, dword ptr [edi + 0x220] */
  ecx = R32((uint32_t)(edi + 0x220u));
/* f8454c: mov eax, dword ptr [esi + 0x220] */
  eax = R32((uint32_t)(esi + 0x220u));
/* f84552: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f84554: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f84557: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f84559: mov ecx, dword ptr [esi + 0x228] */
  ecx = R32((uint32_t)(esi + 0x228u));
/* f8455f: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* f84565: mov dl, byte ptr [edi + 0x224] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x224u))) & 0xffu);
/* f8456b: mov byte ptr [esi + 0x224], dl */
  W8((uint32_t)(esi + 0x224u), (edx & 0xffu));
/* f84571: mov al, byte ptr [edi + 0x225] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x225u))) & 0xffu);
/* f84577: mov byte ptr [esi + 0x225], al */
  W8((uint32_t)(esi + 0x225u), (eax & 0xffu));
/* f8457d: xor ecx, dword ptr [edi + 0x228] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x228u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f84583: mov edx, dword ptr [esi + 0x228] */
  edx = R32((uint32_t)(esi + 0x228u));
/* f84589: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f8458c: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8458e: mov dword ptr [esi + 0x228], edx */
  W32((uint32_t)(esi + 0x228u), edx);
/* f84594: mov eax, edx */
  eax = edx;
/* f84596: mov edx, dword ptr [edi + 0x228] */
  edx = R32((uint32_t)(edi + 0x228u));
/* f8459c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8459e: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f845a1: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f845a3: mov dword ptr [esi + 0x228], edx */
  W32((uint32_t)(esi + 0x228u), edx);
/* f845a9: mov eax, dword ptr [edi + 0x22c] */
  eax = R32((uint32_t)(edi + 0x22cu));
/* f845af: mov dword ptr [esi + 0x22c], eax */
  W32((uint32_t)(esi + 0x22cu), eax);
/* f845b5: mov ecx, dword ptr [edi + 0x230] */
  ecx = R32((uint32_t)(edi + 0x230u));
/* f845bb: mov dword ptr [esi + 0x230], ecx */
  W32((uint32_t)(esi + 0x230u), ecx);
/* f845c1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f845c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f845c6: mov eax, esi */
  eax = esi;
/* f845c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f845c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f845d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f845d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84640(void) {
  LOAD_REGS();
L_f84640: /* f84640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84641: mov esi, ecx */
  esi = ecx;
/* f84643: call 0xf71866 */
  esp -= 4; W32(esp, 0xf84648u); SPILL(); f_f71866(); if (g_unwind) return; RELOAD();
/* f84648: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8464d: je 0xf8465e */
  if (zf) goto L_f8465e;
L_f8464f: /* f8464f: push 0x234 */
  { uint32_t v = 0x234u; esp -= 4; W32(esp, v); }
/* f84654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84655: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8465bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8465b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8465e: /* f8465e: mov eax, esi */
  eax = esi;
/* f84660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84661: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84680(void) {
  LOAD_REGS();
L_f84680: /* f84680: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f84681: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f84685: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84689: mov esi, ecx */
  esi = ecx;
/* f8468b: je 0xf846c0 */
  if (zf) goto L_f846c0;
L_f8468d: /* f8468d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f84690: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84691: push 0xf71866 */
  { uint32_t v = 0xf71866u; esp -= 4; W32(esp, v); }
/* f84696: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f84699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8469a: push 0x234 */
  { uint32_t v = 0x234u; esp -= 4; W32(esp, v); }
/* f8469f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f846a0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf846a5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f846a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f846a8: je 0xf846b8 */
  if (zf) goto L_f846b8;
L_f846aa: /* f846aa: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f846b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f846b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f846b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f846b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf846b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f846b8: /* f846b8: mov eax, edi */
  eax = edi;
/* f846ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f846bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f846bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f846bd: ret 4 */
  esp += 8; SPILL(); return;
L_f846c0: /* f846c0: mov ecx, esi */
  ecx = esi;
/* f846c2: call 0xf71866 */
  esp -= 4; W32(esp, 0xf846c7u); SPILL(); f_f71866(); if (g_unwind) return; RELOAD();
/* f846c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f846ca: je 0xf846db */
  if (zf) goto L_f846db;
L_f846cc: /* f846cc: push 0x234 */
  { uint32_t v = 0x234u; esp -= 4; W32(esp, v); }
/* f846d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f846d2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf846d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f846d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f846db: /* f846db: mov eax, esi */
  eax = esi;
/* f846dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f846de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f846df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84710(void) {
  LOAD_REGS();
L_f84710: /* f84710: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84712: push 0xf99ad7 */
  { uint32_t v = 0xf99ad7u; esp -= 4; W32(esp, v); }
/* f84717: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8471d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8471e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84726: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84727: mov esi, ecx */
  esi = ecx;
/* f84729: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8472d: mov dword ptr [esi], 0xfa30c0 */
  W32((uint32_t)(esi), 0xfa30c0u);
/* f84733: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f8473b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf84741u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f84741: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* f84747: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f8474c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf84752u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f84752: mov ecx, esi */
  ecx = esi;
/* f84754: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8475c: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf84761u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f84761: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f84765: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84766: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8476d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f84770: ret  */
  esp += 4; SPILL(); return;
}

void f_f847a0(void) {
  LOAD_REGS();
L_f847a0: /* f847a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f847a2: push 0xf99af8 */
  { uint32_t v = 0xf99af8u; esp -= 4; W32(esp, v); }
/* f847a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f847ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f847ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f847b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f847b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f847b7: mov esi, ecx */
  esi = ecx;
/* f847b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f847bd: call 0xf716fe */
  esp -= 4; W32(esp, 0xf847c2u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f847c2: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* f847c8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f847d0: mov dword ptr [esi], 0xfa30c0 */
  W32((uint32_t)(esi), 0xfa30c0u);
/* f847d6: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf847dcu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f847dc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f847e0: mov eax, esi */
  eax = esi;
/* f847e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f847e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f847ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f847ed: ret  */
  esp += 4; SPILL(); return;
}

void f_f84810(void) {
  LOAD_REGS();
L_f84810: /* f84810: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84812: push 0xf99b18 */
  { uint32_t v = 0xf99b18u; esp -= 4; W32(esp, v); }
/* f84817: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8481d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8481e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84827: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84828: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f8482c: mov esi, ecx */
  esi = ecx;
/* f8482e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8482f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f84833: call 0xf717bc */
  esp -= 4; W32(esp, 0xf84838u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f84838: mov dword ptr [esi], 0xfa30c0 */
  W32((uint32_t)(esi), 0xfa30c0u);
/* f8483e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f84844: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8484a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f84850: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f84856: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f8485c: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f84862: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f84868: mov edx, dword ptr [esi + 0x200] */
  edx = R32((uint32_t)(esi + 0x200u));
/* f8486e: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f84874: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f8487a: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f84880: xor edx, dword ptr [edi + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x200u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f84886: mov eax, dword ptr [esi + 0x200] */
  eax = R32((uint32_t)(esi + 0x200u));
/* f8488c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f8488f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f84891: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f84897: mov ecx, eax */
  ecx = eax;
/* f84899: mov eax, dword ptr [edi + 0x200] */
  eax = R32((uint32_t)(edi + 0x200u));
/* f8489f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f848a1: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f848a4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f848a6: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f848ac: mov ecx, dword ptr [edi + 0x200] */
  ecx = R32((uint32_t)(edi + 0x200u));
/* f848b2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f848b4: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f848b7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f848b9: mov dword ptr [esi + 0x200], ecx */
  W32((uint32_t)(esi + 0x200u), ecx);
/* f848bf: mov edx, dword ptr [edi + 0x204] */
  edx = R32((uint32_t)(edi + 0x204u));
/* f848c5: add edi, 0x208 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f848cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f848cc: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* f848d2: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f848da: mov dword ptr [esi + 0x204], edx */
  W32((uint32_t)(esi + 0x204u), edx);
/* f848e0: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf848e6u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f848e6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f848ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f848eb: mov eax, esi */
  eax = esi;
/* f848ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f848ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f848f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f848f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84940(void) {
  LOAD_REGS();
L_f84940: /* f84940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84941: mov esi, ecx */
  esi = ecx;
/* f84943: call 0xf71d75 */
  esp -= 4; W32(esp, 0xf84948u); SPILL(); f_f71d75(); if (g_unwind) return; RELOAD();
/* f84948: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8494d: je 0xf8495e */
  if (zf) goto L_f8495e;
L_f8494f: /* f8494f: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f84954: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84955: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8495bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8495b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8495e: /* f8495e: mov eax, esi */
  eax = esi;
/* f84960: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84961: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84980(void) {
  LOAD_REGS();
L_f84980: /* f84980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f84981: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f84985: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84989: mov esi, ecx */
  esi = ecx;
/* f8498b: je 0xf849c0 */
  if (zf) goto L_f849c0;
L_f8498d: /* f8498d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f84990: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84991: push 0xf71d75 */
  { uint32_t v = 0xf71d75u; esp -= 4; W32(esp, v); }
/* f84996: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f84999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8499a: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f8499f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f849a0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf849a5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f849a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f849a8: je 0xf849b8 */
  if (zf) goto L_f849b8;
L_f849aa: /* f849aa: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f849b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f849b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f849b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f849b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf849b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f849b8: /* f849b8: mov eax, edi */
  eax = edi;
/* f849ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f849bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f849bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f849bd: ret 4 */
  esp += 8; SPILL(); return;
L_f849c0: /* f849c0: mov ecx, esi */
  ecx = esi;
/* f849c2: call 0xf71d75 */
  esp -= 4; W32(esp, 0xf849c7u); SPILL(); f_f71d75(); if (g_unwind) return; RELOAD();
/* f849c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f849ca: je 0xf849db */
  if (zf) goto L_f849db;
L_f849cc: /* f849cc: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f849d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f849d2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf849d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f849d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f849db: /* f849db: mov eax, esi */
  eax = esi;
/* f849dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f849de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f849df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84a10(void) {
  LOAD_REGS();
L_f84a10: /* f84a10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84a12: push 0xf99b55 */
  { uint32_t v = 0xf99b55u; esp -= 4; W32(esp, v); }
/* f84a17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f84a1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f84a1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84a25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84a26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84a27: mov esi, ecx */
  esi = ecx;
/* f84a29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f84a2d: mov dword ptr [esi], 0xfa31b0 */
  W32((uint32_t)(esi), 0xfa31b0u);
/* f84a33: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* f84a3b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf84a41u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f84a41: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f84a47: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f84a4c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf84a52u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f84a52: lea ecx, [esi + 0x1f0] */
  ecx = (uint32_t)(esi + 0x1f0u);
/* f84a58: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f84a5d: call 0xf71933 */
  esp -= 4; W32(esp, 0xf84a62u); SPILL(); f_f71933(); if (g_unwind) return; RELOAD();
/* f84a62: mov ecx, esi */
  ecx = esi;
/* f84a64: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f84a6c: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf84a71u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f84a71: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f84a75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84a76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f84a7d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f84a80: ret  */
  esp += 4; SPILL(); return;
}

void f_f84ab0(void) {
  LOAD_REGS();
L_f84ab0: /* f84ab0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84ab2: push 0xf99b86 */
  { uint32_t v = 0xf99b86u; esp -= 4; W32(esp, v); }
/* f84ab7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f84abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f84abe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84ac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84ac6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84ac7: mov esi, ecx */
  esi = ecx;
/* f84ac9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f84acd: call 0xf716fe */
  esp -= 4; W32(esp, 0xf84ad2u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f84ad2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f84ada: mov dword ptr [esi], 0xfa31b0 */
  W32((uint32_t)(esi), 0xfa31b0u);
/* f84ae0: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f84ae6: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f84aeb: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf84af1u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f84af1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f84af5: mov eax, esi */
  eax = esi;
/* f84af7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84af8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f84aff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f84b02: ret  */
  esp += 4; SPILL(); return;
}

void f_f84b30(void) {
  LOAD_REGS();
L_f84b30: /* f84b30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84b32: push 0xf99bb6 */
  { uint32_t v = 0xf99bb6u; esp -= 4; W32(esp, v); }
/* f84b37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f84b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f84b3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84b45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84b46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84b47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84b48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f84b4c: mov esi, ecx */
  esi = ecx;
/* f84b4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84b4f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f84b53: call 0xf717bc */
  esp -= 4; W32(esp, 0xf84b58u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f84b58: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f84b5e: mov dword ptr [esi], 0xfa31b0 */
  W32((uint32_t)(esi), 0xfa31b0u);
/* f84b64: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f84b6a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f84b6c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f84b6f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f84b71: lea edx, [edi + 0x1f0] */
  edx = (uint32_t)(edi + 0x1f0u);
/* f84b77: mov dword ptr [esi + 0x1ec], ecx */
  W32((uint32_t)(esi + 0x1ecu), ecx);
/* f84b7d: lea ecx, [esi + 0x1f0] */
  ecx = (uint32_t)(esi + 0x1f0u);
/* f84b83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f84b84: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f84b8c: call 0xf7100f */
  esp -= 4; W32(esp, 0xf84b91u); SPILL(); f_f7100f(); if (g_unwind) return; RELOAD();
/* f84b91: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* f84b97: lea ecx, [edi + 0x200] */
  ecx = (uint32_t)(edi + 0x200u);
/* f84b9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84b9e: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* f84ba4: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f84ba9: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f84baf: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf84bb5u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f84bb5: mov edx, dword ptr [edi + 0x20c] */
  edx = R32((uint32_t)(edi + 0x20cu));
/* f84bbb: mov dword ptr [esi + 0x20c], edx */
  W32((uint32_t)(esi + 0x20cu), edx);
/* f84bc1: mov eax, dword ptr [edi + 0x210] */
  eax = R32((uint32_t)(edi + 0x210u));
/* f84bc7: mov dword ptr [esi + 0x210], eax */
  W32((uint32_t)(esi + 0x210u), eax);
/* f84bcd: mov ecx, dword ptr [edi + 0x214] */
  ecx = R32((uint32_t)(edi + 0x214u));
/* f84bd3: mov dword ptr [esi + 0x214], ecx */
  W32((uint32_t)(esi + 0x214u), ecx);
/* f84bd9: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f84bdf: mov edi, dword ptr [esi + 0x218] */
  edi = R32((uint32_t)(esi + 0x218u));
/* f84be5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f84be9: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f84beb: mov eax, edi */
  eax = edi;
/* f84bed: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f84bf0: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f84bf2: mov dword ptr [esi + 0x218], eax */
  W32((uint32_t)(esi + 0x218u), eax);
/* f84bf8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f84bf9: mov eax, esi */
  eax = esi;
/* f84bfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84bfc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f84c03: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f84c06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84c50(void) {
  LOAD_REGS();
L_f84c50: /* f84c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84c51: mov esi, ecx */
  esi = ecx;
/* f84c53: call 0xf71636 */
  esp -= 4; W32(esp, 0xf84c58u); SPILL(); f_f71636(); if (g_unwind) return; RELOAD();
/* f84c58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84c5d: je 0xf84c6e */
  if (zf) goto L_f84c6e;
L_f84c5f: /* f84c5f: push 0x21c */
  { uint32_t v = 0x21cu; esp -= 4; W32(esp, v); }
/* f84c64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84c65: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf84c6bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f84c6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f84c6e: /* f84c6e: mov eax, esi */
  eax = esi;
/* f84c70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84c71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84c90(void) {
  LOAD_REGS();
L_f84c90: /* f84c90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f84c91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f84c95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84c98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84c99: mov esi, ecx */
  esi = ecx;
/* f84c9b: je 0xf84cd0 */
  if (zf) goto L_f84cd0;
L_f84c9d: /* f84c9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f84ca0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84ca1: push 0xf71636 */
  { uint32_t v = 0xf71636u; esp -= 4; W32(esp, v); }
/* f84ca6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f84ca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f84caa: push 0x21c */
  { uint32_t v = 0x21cu; esp -= 4; W32(esp, v); }
/* f84caf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84cb0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf84cb5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f84cb5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84cb8: je 0xf84cc8 */
  if (zf) goto L_f84cc8;
L_f84cba: /* f84cba: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f84cc0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f84cc2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f84cc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84cc5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf84cc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f84cc8: /* f84cc8: mov eax, edi */
  eax = edi;
/* f84cca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f84ccb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84ccc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f84ccd: ret 4 */
  esp += 8; SPILL(); return;
L_f84cd0: /* f84cd0: mov ecx, esi */
  ecx = esi;
/* f84cd2: call 0xf71636 */
  esp -= 4; W32(esp, 0xf84cd7u); SPILL(); f_f71636(); if (g_unwind) return; RELOAD();
/* f84cd7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84cda: je 0xf84ceb */
  if (zf) goto L_f84ceb;
L_f84cdc: /* f84cdc: push 0x21c */
  { uint32_t v = 0x21cu; esp -= 4; W32(esp, v); }
/* f84ce1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84ce2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf84ce8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f84ce8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f84ceb: /* f84ceb: mov eax, esi */
  eax = esi;
/* f84ced: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84cee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f84cef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84d20(void) {
  LOAD_REGS();
L_f84d20: /* f84d20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84d22: push 0xf99bd8 */
  { uint32_t v = 0xf99bd8u; esp -= 4; W32(esp, v); }
/* f84d27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f84d2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f84d2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84d36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84d37: mov esi, ecx */
  esi = ecx;
/* f84d39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f84d3d: mov dword ptr [esi], 0xfa32a0 */
  W32((uint32_t)(esi), 0xfa32a0u);
/* f84d43: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f84d4b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf84d51u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f84d51: mov ecx, esi */
  ecx = esi;
/* f84d53: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f84d5b: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf84d60u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f84d60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f84d64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84d65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f84d6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f84d6f: ret  */
  esp += 4; SPILL(); return;
}

void f_f84d90(void) {
  LOAD_REGS();
L_f84d90: /* f84d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84d91: mov esi, ecx */
  esi = ecx;
/* f84d93: call 0xf716fe */
  esp -= 4; W32(esp, 0xf84d98u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f84d98: mov dword ptr [esi], 0xfa32a0 */
  W32((uint32_t)(esi), 0xfa32a0u);
/* f84d9e: mov eax, esi */
  eax = esi;
/* f84da0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84da1: ret  */
  esp += 4; SPILL(); return;
}

void f_f84dc0(void) {
  LOAD_REGS();
L_f84dc0: /* f84dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84dc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84dc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f84dc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84dc7: mov esi, ecx */
  esi = ecx;
/* f84dc9: call 0xf717bc */
  esp -= 4; W32(esp, 0xf84dceu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f84dce: mov dword ptr [esi], 0xfa32a0 */
  W32((uint32_t)(esi), 0xfa32a0u);
/* f84dd4: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f84dda: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f84de0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f84de1: mov eax, esi */
  eax = esi;
/* f84de3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84de4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84e00(void) {
  LOAD_REGS();
L_f84e00: /* f84e00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84e01: mov esi, ecx */
  esi = ecx;
/* f84e03: call 0xf71ebf */
  esp -= 4; W32(esp, 0xf84e08u); SPILL(); f_f71ebf(); if (g_unwind) return; RELOAD();
/* f84e08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84e0d: je 0xf84e1e */
  if (zf) goto L_f84e1e;
L_f84e0f: /* f84e0f: push 0x1f0 */
  { uint32_t v = 0x1f0u; esp -= 4; W32(esp, v); }
/* f84e14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84e15: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf84e1bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f84e1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f84e1e: /* f84e1e: mov eax, esi */
  eax = esi;
/* f84e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84e21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84e40(void) {
  LOAD_REGS();
L_f84e40: /* f84e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f84e41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f84e45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84e48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84e49: mov esi, ecx */
  esi = ecx;
/* f84e4b: je 0xf84e80 */
  if (zf) goto L_f84e80;
L_f84e4d: /* f84e4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f84e50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84e51: push 0xf71ebf */
  { uint32_t v = 0xf71ebfu; esp -= 4; W32(esp, v); }
/* f84e56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f84e59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f84e5a: push 0x1f0 */
  { uint32_t v = 0x1f0u; esp -= 4; W32(esp, v); }
/* f84e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84e60: call 0xf97850 */
  esp -= 4; W32(esp, 0xf84e65u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f84e65: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84e68: je 0xf84e78 */
  if (zf) goto L_f84e78;
L_f84e6a: /* f84e6a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f84e70: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f84e72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f84e74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84e75: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf84e78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f84e78: /* f84e78: mov eax, edi */
  eax = edi;
/* f84e7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f84e7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84e7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f84e7d: ret 4 */
  esp += 8; SPILL(); return;
L_f84e80: /* f84e80: mov ecx, esi */
  ecx = esi;
/* f84e82: call 0xf71ebf */
  esp -= 4; W32(esp, 0xf84e87u); SPILL(); f_f71ebf(); if (g_unwind) return; RELOAD();
/* f84e87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f84e8a: je 0xf84e9b */
  if (zf) goto L_f84e9b;
L_f84e8c: /* f84e8c: push 0x1f0 */
  { uint32_t v = 0x1f0u; esp -= 4; W32(esp, v); }
/* f84e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84e92: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf84e98u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f84e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f84e9b: /* f84e9b: mov eax, esi */
  eax = esi;
/* f84e9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84e9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f84e9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f84ed0(void) {
  LOAD_REGS();
L_f84ed0: /* f84ed0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f84ed2: push 0xf99bf8 */
  { uint32_t v = 0xf99bf8u; esp -= 4; W32(esp, v); }
/* f84ed7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f84edd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f84ede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f84ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f84ee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84ee7: mov esi, ecx */
  esi = ecx;
/* f84ee9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f84eed: mov dword ptr [esi], 0xfa3390 */
  W32((uint32_t)(esi), 0xfa3390u);
/* f84ef3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f84efb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf84f01u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f84f01: mov ecx, esi */
  ecx = esi;
/* f84f03: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f84f0b: call 0xf71ebf */
  esp -= 4; W32(esp, 0xf84f10u); SPILL(); f_f71ebf(); if (g_unwind) return; RELOAD();
/* f84f10: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f84f14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84f15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f84f1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f84f1f: ret  */
  esp += 4; SPILL(); return;
}

void f_f84f40(void) {
  LOAD_REGS();
L_f84f40: /* f84f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84f41: mov esi, ecx */
  esi = ecx;
/* f84f43: call 0xf716fe */
  esp -= 4; W32(esp, 0xf84f48u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f84f48: mov dword ptr [esi], 0xfa3390 */
  W32((uint32_t)(esi), 0xfa3390u);
/* f84f4e: mov eax, esi */
  eax = esi;
/* f84f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84f51: ret  */
  esp += 4; SPILL(); return;
}

void f_f84f70(void) {
  LOAD_REGS();
L_f84f70: /* f84f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f84f71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84f72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f84f76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f84f77: mov esi, ecx */
  esi = ecx;
/* f84f79: call 0xf717bc */
  esp -= 4; W32(esp, 0xf84f7eu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f84f7e: mov dword ptr [esi], 0xfa32a0 */
  W32((uint32_t)(esi), 0xfa32a0u);
/* f84f84: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f84f8a: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f84f90: mov dword ptr [esi], 0xfa3390 */
  W32((uint32_t)(esi), 0xfa3390u);
/* f84f96: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f84f9c: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f84fa2: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f84fa8: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f84fae: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f84fb4: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f84fba: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f84fc0: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f84fc6: mov edx, dword ptr [edi + 0x200] */
  edx = R32((uint32_t)(edi + 0x200u));
/* f84fcc: mov dword ptr [esi + 0x200], edx */
  W32((uint32_t)(esi + 0x200u), edx);
/* f84fd2: mov eax, dword ptr [edi + 0x204] */
  eax = R32((uint32_t)(edi + 0x204u));
/* f84fd8: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f84fde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f84fdf: mov eax, esi */
  eax = esi;
/* f84fe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f84fe2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85010(void) {
  LOAD_REGS();
L_f85010: /* f85010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85011: mov esi, ecx */
  esi = ecx;
/* f85013: call 0xf71c3a */
  esp -= 4; W32(esp, 0xf85018u); SPILL(); f_f71c3a(); if (g_unwind) return; RELOAD();
/* f85018: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8501d: je 0xf8502e */
  if (zf) goto L_f8502e;
L_f8501f: /* f8501f: push 0x208 */
  { uint32_t v = 0x208u; esp -= 4; W32(esp, v); }
/* f85024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85025: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8502bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8502b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8502e: /* f8502e: mov eax, esi */
  eax = esi;
/* f85030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85031: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85050(void) {
  LOAD_REGS();
L_f85050: /* f85050: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f85051: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f85055: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85058: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85059: mov esi, ecx */
  esi = ecx;
/* f8505b: je 0xf85090 */
  if (zf) goto L_f85090;
L_f8505d: /* f8505d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f85060: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85061: push 0xf71c3a */
  { uint32_t v = 0xf71c3au; esp -= 4; W32(esp, v); }
/* f85066: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f85069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8506a: push 0x208 */
  { uint32_t v = 0x208u; esp -= 4; W32(esp, v); }
/* f8506f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85070: call 0xf97850 */
  esp -= 4; W32(esp, 0xf85075u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f85075: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85078: je 0xf85088 */
  if (zf) goto L_f85088;
L_f8507a: /* f8507a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f85080: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f85082: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f85084: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85085: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf85088u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f85088: /* f85088: mov eax, edi */
  eax = edi;
/* f8508a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8508b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8508c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8508d: ret 4 */
  esp += 8; SPILL(); return;
L_f85090: /* f85090: mov ecx, esi */
  ecx = esi;
/* f85092: call 0xf71c3a */
  esp -= 4; W32(esp, 0xf85097u); SPILL(); f_f71c3a(); if (g_unwind) return; RELOAD();
/* f85097: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8509a: je 0xf850ab */
  if (zf) goto L_f850ab;
L_f8509c: /* f8509c: push 0x208 */
  { uint32_t v = 0x208u; esp -= 4; W32(esp, v); }
/* f850a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f850a2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf850a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f850a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f850ab: /* f850ab: mov eax, esi */
  eax = esi;
/* f850ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f850ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f850af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f850e0(void) {
  LOAD_REGS();
L_f850e0: /* f850e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f850e2: push 0xf99c18 */
  { uint32_t v = 0xf99c18u; esp -= 4; W32(esp, v); }
/* f850e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f850ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f850ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f850f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f850f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f850f7: mov esi, ecx */
  esi = ecx;
/* f850f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f850fd: mov dword ptr [esi], 0xfa3480 */
  W32((uint32_t)(esi), 0xfa3480u);
/* f85103: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f8510b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf85111u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f85111: mov ecx, esi */
  ecx = esi;
/* f85113: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8511b: call 0xf71ebf */
  esp -= 4; W32(esp, 0xf85120u); SPILL(); f_f71ebf(); if (g_unwind) return; RELOAD();
/* f85120: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f85124: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85125: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8512c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8512f: ret  */
  esp += 4; SPILL(); return;
}

void f_f85150(void) {
  LOAD_REGS();
L_f85150: /* f85150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85151: mov esi, ecx */
  esi = ecx;
/* f85153: call 0xf716fe */
  esp -= 4; W32(esp, 0xf85158u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f85158: mov dword ptr [esi], 0xfa3480 */
  W32((uint32_t)(esi), 0xfa3480u);
/* f8515e: mov eax, esi */
  eax = esi;
/* f85160: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85161: ret  */
  esp += 4; SPILL(); return;
}

void f_f85180(void) {
  LOAD_REGS();
L_f85180: /* f85180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85181: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85182: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f85186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85187: mov esi, ecx */
  esi = ecx;
/* f85189: call 0xf717bc */
  esp -= 4; W32(esp, 0xf8518eu); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f8518e: mov dword ptr [esi], 0xfa32a0 */
  W32((uint32_t)(esi), 0xfa32a0u);
/* f85194: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f8519a: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f851a0: mov dword ptr [esi], 0xfa3480 */
  W32((uint32_t)(esi), 0xfa3480u);
/* f851a6: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f851ac: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f851b2: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f851b8: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f851be: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* f851c4: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* f851ca: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f851d0: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f851d6: mov edx, dword ptr [edi + 0x200] */
  edx = R32((uint32_t)(edi + 0x200u));
/* f851dc: mov dword ptr [esi + 0x200], edx */
  W32((uint32_t)(esi + 0x200u), edx);
/* f851e2: mov eax, dword ptr [edi + 0x204] */
  eax = R32((uint32_t)(edi + 0x204u));
/* f851e8: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f851ee: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f851f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f851f5: mov dword ptr [esi + 0x208], ecx */
  W32((uint32_t)(esi + 0x208u), ecx);
/* f851fb: mov eax, esi */
  eax = esi;
/* f851fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f851fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85240(void) {
  LOAD_REGS();
L_f85240: /* f85240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85241: mov esi, ecx */
  esi = ecx;
/* f85243: call 0xf71451 */
  esp -= 4; W32(esp, 0xf85248u); SPILL(); f_f71451(); if (g_unwind) return; RELOAD();
/* f85248: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8524d: je 0xf8525e */
  if (zf) goto L_f8525e;
L_f8524f: /* f8524f: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* f85254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85255: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8525bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8525b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8525e: /* f8525e: mov eax, esi */
  eax = esi;
/* f85260: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85261: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85280(void) {
  LOAD_REGS();
L_f85280: /* f85280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f85281: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f85285: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85288: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85289: mov esi, ecx */
  esi = ecx;
/* f8528b: je 0xf852c0 */
  if (zf) goto L_f852c0;
L_f8528d: /* f8528d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f85290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85291: push 0xf71451 */
  { uint32_t v = 0xf71451u; esp -= 4; W32(esp, v); }
/* f85296: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f85299: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8529a: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* f8529f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f852a0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf852a5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f852a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f852a8: je 0xf852b8 */
  if (zf) goto L_f852b8;
L_f852aa: /* f852aa: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f852b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f852b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f852b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f852b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf852b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f852b8: /* f852b8: mov eax, edi */
  eax = edi;
/* f852ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f852bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f852bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f852bd: ret 4 */
  esp += 8; SPILL(); return;
L_f852c0: /* f852c0: mov ecx, esi */
  ecx = esi;
/* f852c2: call 0xf71451 */
  esp -= 4; W32(esp, 0xf852c7u); SPILL(); f_f71451(); if (g_unwind) return; RELOAD();
/* f852c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f852ca: je 0xf852db */
  if (zf) goto L_f852db;
L_f852cc: /* f852cc: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* f852d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f852d2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf852d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f852d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f852db: /* f852db: mov eax, esi */
  eax = esi;
/* f852dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f852de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f852df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85310(void) {
  LOAD_REGS();
L_f85310: /* f85310: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85312: push 0xf99c47 */
  { uint32_t v = 0xf99c47u; esp -= 4; W32(esp, v); }
/* f85317: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8531d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8531e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85325: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85326: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85327: mov esi, ecx */
  esi = ecx;
/* f85329: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8532d: mov dword ptr [esi], 0xfa3570 */
  W32((uint32_t)(esi), 0xfa3570u);
/* f85333: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f8533b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf85341u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f85341: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f85347: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f8534c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf85352u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f85352: mov ecx, esi */
  ecx = esi;
/* f85354: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8535c: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf85361u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f85361: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f85365: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85366: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8536d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f85370: ret  */
  esp += 4; SPILL(); return;
}

void f_f853a0(void) {
  LOAD_REGS();
L_f853a0: /* f853a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f853a2: push 0xf99c68 */
  { uint32_t v = 0xf99c68u; esp -= 4; W32(esp, v); }
/* f853a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f853ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f853ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f853b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f853b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f853b7: mov esi, ecx */
  esi = ecx;
/* f853b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f853bd: call 0xf716fe */
  esp -= 4; W32(esp, 0xf853c2u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f853c2: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f853c8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f853d0: mov dword ptr [esi], 0xfa3570 */
  W32((uint32_t)(esi), 0xfa3570u);
/* f853d6: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf853dcu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f853dc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f853e0: mov eax, esi */
  eax = esi;
/* f853e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f853e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f853ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f853ed: ret  */
  esp += 4; SPILL(); return;
}

void f_f85410(void) {
  LOAD_REGS();
L_f85410: /* f85410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85412: push 0xf99c88 */
  { uint32_t v = 0xf99c88u; esp -= 4; W32(esp, v); }
/* f85417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8541d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8541e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85428: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f8542c: mov esi, ecx */
  esi = ecx;
/* f8542e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8542f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f85433: call 0xf717bc */
  esp -= 4; W32(esp, 0xf85438u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f85438: mov dword ptr [esi], 0xfa3570 */
  W32((uint32_t)(esi), 0xfa3570u);
/* f8543e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f85444: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8544a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f85450: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f85456: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f8545c: lea eax, [edi + 0x1f8] */
  eax = (uint32_t)(edi + 0x1f8u);
/* f85462: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85463: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f85469: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f85471: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f85477: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf8547du); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f8547d: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f85483: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* f85489: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8548b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f8548e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f85490: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f85496: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f8549c: mov dword ptr [esi + 0x208], edx */
  W32((uint32_t)(esi + 0x208u), edx);
/* f854a2: mov eax, dword ptr [edi + 0x20c] */
  eax = R32((uint32_t)(edi + 0x20cu));
/* f854a8: mov dword ptr [esi + 0x20c], eax */
  W32((uint32_t)(esi + 0x20cu), eax);
/* f854ae: mov ecx, dword ptr [edi + 0x210] */
  ecx = R32((uint32_t)(edi + 0x210u));
/* f854b4: mov dword ptr [esi + 0x210], ecx */
  W32((uint32_t)(esi + 0x210u), ecx);
/* f854ba: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f854be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f854bf: mov eax, esi */
  eax = esi;
/* f854c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f854c2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f854c9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f854cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85500(void) {
  LOAD_REGS();
L_f85500: /* f85500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85501: mov esi, ecx */
  esi = ecx;
/* f85503: call 0xf71bcc */
  esp -= 4; W32(esp, 0xf85508u); SPILL(); f_f71bcc(); if (g_unwind) return; RELOAD();
/* f85508: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8550d: je 0xf8551e */
  if (zf) goto L_f8551e;
L_f8550f: /* f8550f: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f85514: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85515: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8551bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8551b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8551e: /* f8551e: mov eax, esi */
  eax = esi;
/* f85520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85521: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85540(void) {
  LOAD_REGS();
L_f85540: /* f85540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f85541: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f85545: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85549: mov esi, ecx */
  esi = ecx;
/* f8554b: je 0xf85580 */
  if (zf) goto L_f85580;
L_f8554d: /* f8554d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f85550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85551: push 0xf71bcc */
  { uint32_t v = 0xf71bccu; esp -= 4; W32(esp, v); }
/* f85556: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f85559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8555a: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f8555f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85560: call 0xf97850 */
  esp -= 4; W32(esp, 0xf85565u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f85565: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85568: je 0xf85578 */
  if (zf) goto L_f85578;
L_f8556a: /* f8556a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f85570: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f85572: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f85574: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85575: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf85578u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f85578: /* f85578: mov eax, edi */
  eax = edi;
/* f8557a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8557b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8557c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8557d: ret 4 */
  esp += 8; SPILL(); return;
L_f85580: /* f85580: mov ecx, esi */
  ecx = esi;
/* f85582: call 0xf71bcc */
  esp -= 4; W32(esp, 0xf85587u); SPILL(); f_f71bcc(); if (g_unwind) return; RELOAD();
/* f85587: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8558a: je 0xf8559b */
  if (zf) goto L_f8559b;
L_f8558c: /* f8558c: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f85591: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85592: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf85598u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f85598: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8559b: /* f8559b: mov eax, esi */
  eax = esi;
/* f8559d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8559e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8559f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f855d0(void) {
  LOAD_REGS();
L_f855d0: /* f855d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f855d2: push 0xf99cb7 */
  { uint32_t v = 0xf99cb7u; esp -= 4; W32(esp, v); }
/* f855d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f855dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f855de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f855e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f855e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f855e7: mov esi, ecx */
  esi = ecx;
/* f855e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f855ed: mov dword ptr [esi], 0xfa3660 */
  W32((uint32_t)(esi), 0xfa3660u);
/* f855f3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f855fb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf85601u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f85601: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f85607: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f8560c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf85612u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f85612: mov ecx, esi */
  ecx = esi;
/* f85614: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f8561c: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf85621u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f85621: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f85625: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85626: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8562d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f85630: ret  */
  esp += 4; SPILL(); return;
}

void f_f85660(void) {
  LOAD_REGS();
L_f85660: /* f85660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85662: push 0xf99cd8 */
  { uint32_t v = 0xf99cd8u; esp -= 4; W32(esp, v); }
/* f85667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8566d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8566e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85675: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85677: mov esi, ecx */
  esi = ecx;
/* f85679: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8567d: call 0xf716fe */
  esp -= 4; W32(esp, 0xf85682u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f85682: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f85688: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f85690: mov dword ptr [esi], 0xfa3660 */
  W32((uint32_t)(esi), 0xfa3660u);
/* f85696: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf8569cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f8569c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f856a0: mov eax, esi */
  eax = esi;
/* f856a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f856a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f856aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f856ad: ret  */
  esp += 4; SPILL(); return;
}

void f_f856d0(void) {
  LOAD_REGS();
L_f856d0: /* f856d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f856d2: push 0xf99cf8 */
  { uint32_t v = 0xf99cf8u; esp -= 4; W32(esp, v); }
/* f856d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f856dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f856de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f856e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f856e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f856e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f856e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f856ec: mov esi, ecx */
  esi = ecx;
/* f856ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f856ef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f856f3: call 0xf717bc */
  esp -= 4; W32(esp, 0xf856f8u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f856f8: mov dword ptr [esi], 0xfa3660 */
  W32((uint32_t)(esi), 0xfa3660u);
/* f856fe: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f85704: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8570a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f85710: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f85716: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f8571c: lea eax, [edi + 0x1f8] */
  eax = (uint32_t)(edi + 0x1f8u);
/* f85722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85723: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f85729: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f85731: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f85737: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf8573du); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f8573d: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f85743: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* f85749: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8574b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f8574e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f85750: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f85756: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f8575c: mov dword ptr [esi + 0x208], edx */
  W32((uint32_t)(esi + 0x208u), edx);
/* f85762: mov eax, dword ptr [edi + 0x20c] */
  eax = R32((uint32_t)(edi + 0x20cu));
/* f85768: mov dword ptr [esi + 0x20c], eax */
  W32((uint32_t)(esi + 0x20cu), eax);
/* f8576e: mov ecx, dword ptr [edi + 0x210] */
  ecx = R32((uint32_t)(edi + 0x210u));
/* f85774: mov dword ptr [esi + 0x210], ecx */
  W32((uint32_t)(esi + 0x210u), ecx);
/* f8577a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f8577e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8577f: mov eax, esi */
  eax = esi;
/* f85781: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85782: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f85789: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8578c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f857c0(void) {
  LOAD_REGS();
L_f857c0: /* f857c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f857c1: mov esi, ecx */
  esi = ecx;
/* f857c3: call 0xf7123a */
  esp -= 4; W32(esp, 0xf857c8u); SPILL(); f_f7123a(); if (g_unwind) return; RELOAD();
/* f857c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f857cd: je 0xf857de */
  if (zf) goto L_f857de;
L_f857cf: /* f857cf: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f857d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f857d5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf857dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f857db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f857de: /* f857de: mov eax, esi */
  eax = esi;
/* f857e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f857e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85800(void) {
  LOAD_REGS();
L_f85800: /* f85800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f85801: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f85805: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85809: mov esi, ecx */
  esi = ecx;
/* f8580b: je 0xf85840 */
  if (zf) goto L_f85840;
L_f8580d: /* f8580d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f85810: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85811: push 0xf7123a */
  { uint32_t v = 0xf7123au; esp -= 4; W32(esp, v); }
/* f85816: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f85819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8581a: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f8581f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85820: call 0xf97850 */
  esp -= 4; W32(esp, 0xf85825u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f85825: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85828: je 0xf85838 */
  if (zf) goto L_f85838;
L_f8582a: /* f8582a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f85830: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f85832: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f85834: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85835: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf85838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f85838: /* f85838: mov eax, edi */
  eax = edi;
/* f8583a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8583b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8583c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8583d: ret 4 */
  esp += 8; SPILL(); return;
L_f85840: /* f85840: mov ecx, esi */
  ecx = esi;
/* f85842: call 0xf7123a */
  esp -= 4; W32(esp, 0xf85847u); SPILL(); f_f7123a(); if (g_unwind) return; RELOAD();
/* f85847: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8584a: je 0xf8585b */
  if (zf) goto L_f8585b;
L_f8584c: /* f8584c: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* f85851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85852: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf85858u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f85858: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8585b: /* f8585b: mov eax, esi */
  eax = esi;
/* f8585d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8585e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8585f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85890(void) {
  LOAD_REGS();
L_f85890: /* f85890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85892: push 0xf99d26 */
  { uint32_t v = 0xf99d26u; esp -= 4; W32(esp, v); }
/* f85897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8589d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8589e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f858a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f858a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f858a7: mov esi, ecx */
  esi = ecx;
/* f858a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f858ad: mov dword ptr [esi], 0xfa3750 */
  W32((uint32_t)(esi), 0xfa3750u);
/* f858b3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f858bb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf858c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f858c1: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* f858c7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f858cc: call 0xf715a5 */
  esp -= 4; W32(esp, 0xf858d1u); SPILL(); f_f715a5(); if (g_unwind) return; RELOAD();
/* f858d1: mov ecx, esi */
  ecx = esi;
/* f858d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f858db: call 0xf71ed3 */
  esp -= 4; W32(esp, 0xf858e0u); SPILL(); f_f71ed3(); if (g_unwind) return; RELOAD();
/* f858e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f858e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f858e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f858ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f858ef: ret  */
  esp += 4; SPILL(); return;
}

void f_f85910(void) {
  LOAD_REGS();
L_f85910: /* f85910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85911: mov esi, ecx */
  esi = ecx;
/* f85913: call 0xf716fe */
  esp -= 4; W32(esp, 0xf85918u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f85918: mov dword ptr [esi], 0xfa3750 */
  W32((uint32_t)(esi), 0xfa3750u);
/* f8591e: mov eax, esi */
  eax = esi;
/* f85920: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85921: ret  */
  esp += 4; SPILL(); return;
}

void f_f85940(void) {
  LOAD_REGS();
L_f85940: /* f85940: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85942: push 0xf99d48 */
  { uint32_t v = 0xf99d48u; esp -= 4; W32(esp, v); }
/* f85947: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8594d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8594e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85955: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85956: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85957: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85958: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f8595c: mov esi, ecx */
  esi = ecx;
/* f8595e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8595f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f85963: call 0xf717bc */
  esp -= 4; W32(esp, 0xf85968u); SPILL(); f_f717bc(); if (g_unwind) return; RELOAD();
/* f85968: mov dword ptr [esi], 0xfa3750 */
  W32((uint32_t)(esi), 0xfa3750u);
/* f8596e: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* f85974: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f8597a: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f85980: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f85986: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f8598c: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f85992: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f85998: mov al, byte ptr [edi + 0x1f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1f8u))) & 0xffu);
/* f8599e: mov byte ptr [esi + 0x1f8], al */
  W8((uint32_t)(esi + 0x1f8u), (eax & 0xffu));
/* f859a4: xor ecx, dword ptr [edi + 0x1fc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1fcu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f859aa: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f859b0: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f859b3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f859b5: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f859bb: mov ecx, eax */
  ecx = eax;
/* f859bd: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* f859c3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f859c5: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f859c8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f859ca: mov dword ptr [esi + 0x1fc], eax */
  W32((uint32_t)(esi + 0x1fcu), eax);
/* f859d0: mov edx, dword ptr [edi + 0x1fc] */
  edx = R32((uint32_t)(edi + 0x1fcu));
/* f859d6: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f859d8: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f859db: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f859dd: mov dword ptr [esi + 0x1fc], edx */
  W32((uint32_t)(esi + 0x1fcu), edx);
/* f859e3: mov eax, dword ptr [edi + 0x200] */
  eax = R32((uint32_t)(edi + 0x200u));
/* f859e9: mov edx, dword ptr [esi + 0x208] */
  edx = R32((uint32_t)(esi + 0x208u));
/* f859ef: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* f859f5: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* f859fb: mov dword ptr [esi + 0x204], ecx */
  W32((uint32_t)(esi + 0x204u), ecx);
/* f85a01: xor edx, dword ptr [edi + 0x208] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x208u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f85a07: mov eax, dword ptr [esi + 0x208] */
  eax = R32((uint32_t)(esi + 0x208u));
/* f85a0d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f85a10: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f85a12: mov dword ptr [esi + 0x208], eax */
  W32((uint32_t)(esi + 0x208u), eax);
/* f85a18: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f85a1e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f85a20: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f85a23: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f85a25: mov dword ptr [esi + 0x208], ecx */
  W32((uint32_t)(esi + 0x208u), ecx);
/* f85a2b: mov edx, dword ptr [edi + 0x20c] */
  edx = R32((uint32_t)(edi + 0x20cu));
/* f85a31: lea eax, [edi + 0x210] */
  eax = (uint32_t)(edi + 0x210u);
/* f85a37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85a38: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* f85a3e: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f85a46: mov dword ptr [esi + 0x20c], edx */
  W32((uint32_t)(esi + 0x20cu), edx);
/* f85a4c: call 0xf71ed8 */
  esp -= 4; W32(esp, 0xf85a51u); SPILL(); f_f71ed8(); if (g_unwind) return; RELOAD();
/* f85a51: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* f85a57: mov ecx, dword ptr [esi + 0x21c] */
  ecx = R32((uint32_t)(esi + 0x21cu));
/* f85a5d: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f85a5f: mov edx, dword ptr [esi + 0x21c] */
  edx = R32((uint32_t)(esi + 0x21cu));
/* f85a65: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f85a68: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f85a6a: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* f85a70: mov eax, edx */
  eax = edx;
/* f85a72: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* f85a78: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f85a7a: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f85a7d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f85a7f: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* f85a85: mov eax, dword ptr [edi + 0x220] */
  eax = R32((uint32_t)(edi + 0x220u));
/* f85a8b: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* f85a91: mov ecx, dword ptr [edi + 0x224] */
  ecx = R32((uint32_t)(edi + 0x224u));
/* f85a97: mov dword ptr [esi + 0x224], ecx */
  W32((uint32_t)(esi + 0x224u), ecx);
/* f85a9d: mov edx, dword ptr [edi + 0x228] */
  edx = R32((uint32_t)(edi + 0x228u));
/* f85aa3: mov dword ptr [esi + 0x228], edx */
  W32((uint32_t)(esi + 0x228u), edx);
/* f85aa9: mov eax, dword ptr [edi + 0x22c] */
  eax = R32((uint32_t)(edi + 0x22cu));
/* f85aaf: mov dword ptr [esi + 0x22c], eax */
  W32((uint32_t)(esi + 0x22cu), eax);
/* f85ab5: mov ecx, dword ptr [edi + 0x230] */
  ecx = R32((uint32_t)(edi + 0x230u));
/* f85abb: mov dword ptr [esi + 0x230], ecx */
  W32((uint32_t)(esi + 0x230u), ecx);
/* f85ac1: mov edx, dword ptr [edi + 0x234] */
  edx = R32((uint32_t)(edi + 0x234u));
/* f85ac7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f85acb: mov dword ptr [esi + 0x234], edx */
  W32((uint32_t)(esi + 0x234u), edx);
/* f85ad1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f85ad2: mov eax, esi */
  eax = esi;
/* f85ad4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85ad5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f85adc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f85adf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85b60(void) {
  LOAD_REGS();
L_f85b60: /* f85b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85b61: mov esi, ecx */
  esi = ecx;
/* f85b63: call 0xf71ff5 */
  esp -= 4; W32(esp, 0xf85b68u); SPILL(); f_f71ff5(); if (g_unwind) return; RELOAD();
/* f85b68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85b6d: je 0xf85b7e */
  if (zf) goto L_f85b7e;
L_f85b6f: /* f85b6f: push 0x238 */
  { uint32_t v = 0x238u; esp -= 4; W32(esp, v); }
/* f85b74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85b75: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf85b7bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f85b7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f85b7e: /* f85b7e: mov eax, esi */
  eax = esi;
/* f85b80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85b81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85ba0(void) {
  LOAD_REGS();
L_f85ba0: /* f85ba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f85ba1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f85ba5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85ba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85ba9: mov esi, ecx */
  esi = ecx;
/* f85bab: je 0xf85be0 */
  if (zf) goto L_f85be0;
L_f85bad: /* f85bad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f85bb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85bb1: push 0xf71ff5 */
  { uint32_t v = 0xf71ff5u; esp -= 4; W32(esp, v); }
/* f85bb6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f85bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85bba: push 0x238 */
  { uint32_t v = 0x238u; esp -= 4; W32(esp, v); }
/* f85bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85bc0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf85bc5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f85bc5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85bc8: je 0xf85bd8 */
  if (zf) goto L_f85bd8;
L_f85bca: /* f85bca: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f85bd0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f85bd2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f85bd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85bd5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf85bd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f85bd8: /* f85bd8: mov eax, edi */
  eax = edi;
/* f85bda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f85bdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85bdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f85bdd: ret 4 */
  esp += 8; SPILL(); return;
L_f85be0: /* f85be0: mov ecx, esi */
  ecx = esi;
/* f85be2: call 0xf71ff5 */
  esp -= 4; W32(esp, 0xf85be7u); SPILL(); f_f71ff5(); if (g_unwind) return; RELOAD();
/* f85be7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85bea: je 0xf85bfb */
  if (zf) goto L_f85bfb;
L_f85bec: /* f85bec: push 0x238 */
  { uint32_t v = 0x238u; esp -= 4; W32(esp, v); }
/* f85bf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85bf2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf85bf8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f85bf8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f85bfb: /* f85bfb: mov eax, esi */
  eax = esi;
/* f85bfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85bfe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f85bff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85c30(void) {
  LOAD_REGS();
L_f85c30: /* f85c30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85c32: push 0xf99d8a */
  { uint32_t v = 0xf99d8au; esp -= 4; W32(esp, v); }
/* f85c37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f85c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85c3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85c45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85c46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85c47: mov esi, ecx */
  esi = ecx;
/* f85c49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f85c4d: mov dword ptr [esi], 0xfa3840 */
  W32((uint32_t)(esi), 0xfa3840u);
/* f85c53: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* f85c5b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf85c61u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f85c61: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* f85c64: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* f85c69: call 0xf712a3 */
  esp -= 4; W32(esp, 0xf85c6eu); SPILL(); f_f712a3(); if (g_unwind) return; RELOAD();
/* f85c6e: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* f85c71: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f85c76: call 0xf71a78 */
  esp -= 4; W32(esp, 0xf85c7bu); SPILL(); f_f71a78(); if (g_unwind) return; RELOAD();
/* f85c7b: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* f85c7e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f85c83: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf85c89u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f85c89: mov ecx, esi */
  ecx = esi;
/* f85c8b: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f85c93: call 0xf71154 */
  esp -= 4; W32(esp, 0xf85c98u); SPILL(); f_f71154(); if (g_unwind) return; RELOAD();
/* f85c98: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f85c9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85c9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f85ca4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f85ca7: ret  */
  esp += 4; SPILL(); return;
}

void f_f85cd0(void) {
  LOAD_REGS();
L_f85cd0: /* f85cd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85cd2: push 0xf99db8 */
  { uint32_t v = 0xf99db8u; esp -= 4; W32(esp, v); }
/* f85cd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f85cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85cde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85ce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85ce7: mov esi, ecx */
  esi = ecx;
/* f85ce9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f85ced: call dword ptr [0xfce3b0] */
  esp -= 4; W32(esp, 0xf85cf3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* f85cf3: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* f85cf6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f85cfe: mov dword ptr [esi], 0xfa3840 */
  W32((uint32_t)(esi), 0xfa3840u);
/* f85d04: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf85d0au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f85d0a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f85d0e: mov eax, esi */
  eax = esi;
/* f85d10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85d11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f85d18: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f85d1b: ret  */
  esp += 4; SPILL(); return;
}

void f_f85d40(void) {
  LOAD_REGS();
L_f85d40: /* f85d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85d42: push 0xf99def */
  { uint32_t v = 0xf99defu; esp -= 4; W32(esp, v); }
/* f85d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f85d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85d55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85d56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85d57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85d58: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f85d5c: mov esi, ecx */
  esi = ecx;
/* f85d5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85d5f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f85d63: call dword ptr [0xfce3b4] */
  esp -= 4; W32(esp, 0xf85d69u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* f85d69: mov dword ptr [esi], 0xfa1020 */
  W32((uint32_t)(esi), 0xfa1020u);
/* f85d6f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f85d72: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* f85d75: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* f85d78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85d79: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* f85d7c: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f85d84: mov dword ptr [esi], 0xfa3840 */
  W32((uint32_t)(esi), 0xfa3840u);
/* f85d8a: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf85d90u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f85d90: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* f85d93: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* f85d96: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f85d98: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f85d9b: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f85d9d: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* f85da0: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* f85da3: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* f85da6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85da7: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f85dac: call 0xf7125d */
  esp -= 4; W32(esp, 0xf85db1u); SPILL(); f_f7125d(); if (g_unwind) return; RELOAD();
/* f85db1: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f85db4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85db5: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* f85db8: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* f85dbd: call 0xf71da7 */
  esp -= 4; W32(esp, 0xf85dc2u); SPILL(); f_f71da7(); if (g_unwind) return; RELOAD();
/* f85dc2: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f85dc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f85dc7: mov eax, esi */
  eax = esi;
/* f85dc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85dca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f85dd1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f85dd4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85e10(void) {
  LOAD_REGS();
L_f85e10: /* f85e10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85e11: mov esi, ecx */
  esi = ecx;
/* f85e13: call 0xf711b8 */
  esp -= 4; W32(esp, 0xf85e18u); SPILL(); f_f711b8(); if (g_unwind) return; RELOAD();
/* f85e18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85e1d: je 0xf85e2b */
  if (zf) goto L_f85e2b;
L_f85e1f: /* f85e1f: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f85e21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85e22: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf85e28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f85e28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f85e2b: /* f85e2b: mov eax, esi */
  eax = esi;
/* f85e2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85e2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85e50(void) {
  LOAD_REGS();
L_f85e50: /* f85e50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f85e51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f85e55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85e58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85e59: mov esi, ecx */
  esi = ecx;
/* f85e5b: je 0xf85e8d */
  if (zf) goto L_f85e8d;
L_f85e5d: /* f85e5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f85e60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85e61: push 0xf711b8 */
  { uint32_t v = 0xf711b8u; esp -= 4; W32(esp, v); }
/* f85e66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f85e69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85e6a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f85e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85e6d: call 0xf97850 */
  esp -= 4; W32(esp, 0xf85e72u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f85e72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85e75: je 0xf85e85 */
  if (zf) goto L_f85e85;
L_f85e77: /* f85e77: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f85e7d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f85e7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f85e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85e82: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf85e85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f85e85: /* f85e85: mov eax, edi */
  eax = edi;
/* f85e87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f85e88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85e89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f85e8a: ret 4 */
  esp += 8; SPILL(); return;
L_f85e8d: /* f85e8d: mov ecx, esi */
  ecx = esi;
/* f85e8f: call 0xf711b8 */
  esp -= 4; W32(esp, 0xf85e94u); SPILL(); f_f711b8(); if (g_unwind) return; RELOAD();
/* f85e94: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f85e97: je 0xf85ea5 */
  if (zf) goto L_f85ea5;
L_f85e99: /* f85e99: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f85e9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85e9c: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf85ea2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f85ea2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f85ea5: /* f85ea5: mov eax, esi */
  eax = esi;
/* f85ea7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85ea8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f85ea9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f85ed0(void) {
  LOAD_REGS();
L_f85ed0: /* f85ed0: mov eax, ecx */
  eax = ecx;
/* f85ed2: ret  */
  esp += 4; SPILL(); return;
}

void f_f85ef0(void) {
  LOAD_REGS();
L_f85ef0: /* f85ef0: mov eax, ecx */
  eax = ecx;
/* f85ef2: ret  */
  esp += 4; SPILL(); return;
}

void f_f85f10(void) {
  LOAD_REGS();
L_f85f10: /* f85f10: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f85f14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f85f16: je 0xf85f1d */
  if (zf) goto L_f85f1d;
L_f85f18: /* f85f18: jmp 0xf714fb */
  SPILL(); f_f714fb(); return;
L_f85f1d: /* f85f1d: ret  */
  esp += 4; SPILL(); return;
}

void f_f85f30(void) {
  LOAD_REGS();
L_f85f30: /* f85f30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85f32: push 0xf99e26 */
  { uint32_t v = 0xf99e26u; esp -= 4; W32(esp, v); }
/* f85f37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f85f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85f3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85f45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85f46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85f47: mov esi, ecx */
  esi = ecx;
/* f85f49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f85f4d: mov dword ptr [esi], 0xfa38c0 */
  W32((uint32_t)(esi), 0xfa38c0u);
/* f85f53: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f85f5b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf85f61u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f85f61: lea ecx, [esi + 0x20c] */
  ecx = (uint32_t)(esi + 0x20cu);
/* f85f67: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f85f6c: call 0xf71cfd */
  esp -= 4; W32(esp, 0xf85f71u); SPILL(); f_f71cfd(); if (g_unwind) return; RELOAD();
/* f85f71: mov ecx, esi */
  ecx = esi;
/* f85f73: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f85f7b: call 0xf72252 */
  esp -= 4; W32(esp, 0xf85f80u); SPILL(); f_f72252(); if (g_unwind) return; RELOAD();
/* f85f80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f85f84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85f85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f85f8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f85f8f: ret  */
  esp += 4; SPILL(); return;
}

void f_f85fb0(void) {
  LOAD_REGS();
L_f85fb0: /* f85fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85fb1: mov esi, ecx */
  esi = ecx;
/* f85fb3: call 0xf716fe */
  esp -= 4; W32(esp, 0xf85fb8u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f85fb8: mov dword ptr [esi], 0xfa38c0 */
  W32((uint32_t)(esi), 0xfa38c0u);
/* f85fbe: mov eax, esi */
  eax = esi;
/* f85fc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f85fc1: ret  */
  esp += 4; SPILL(); return;
}

void f_f85fe0(void) {
  LOAD_REGS();
L_f85fe0: /* f85fe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f85fe2: push 0xf99e48 */
  { uint32_t v = 0xf99e48u; esp -= 4; W32(esp, v); }
/* f85fe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f85fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f85fee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f85ff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f85ff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f85ff7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85ff8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f85ffc: mov esi, ecx */
  esi = ecx;
/* f85ffe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f85fff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f86003: call 0xf71d7f */
  esp -= 4; W32(esp, 0xf86008u); SPILL(); f_f71d7f(); if (g_unwind) return; RELOAD();
/* f86008: lea ecx, [edi + 0x20c] */
  ecx = (uint32_t)(edi + 0x20cu);
/* f8600e: mov dword ptr [esi], 0xfa38c0 */
  W32((uint32_t)(esi), 0xfa38c0u);
/* f86014: mov al, byte ptr [edi + 0x208] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x208u))) & 0xffu);
/* f8601a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8601b: lea ecx, [esi + 0x20c] */
  ecx = (uint32_t)(esi + 0x20cu);
/* f86021: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f86029: mov byte ptr [esi + 0x208], al */
  W8((uint32_t)(esi + 0x208u), (eax & 0xffu));
/* f8602f: call 0xf71a00 */
  esp -= 4; W32(esp, 0xf86034u); SPILL(); f_f71a00(); if (g_unwind) return; RELOAD();
/* f86034: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f8603a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f8603e: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* f86044: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* f8604a: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* f86050: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f86051: mov eax, esi */
  eax = esi;
/* f86053: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86054: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8605b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8605e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f860a0(void) {
  LOAD_REGS();
L_f860a0: /* f860a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f860a1: mov esi, ecx */
  esi = ecx;
/* f860a3: call 0xf71208 */
  esp -= 4; W32(esp, 0xf860a8u); SPILL(); f_f71208(); if (g_unwind) return; RELOAD();
/* f860a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f860ad: je 0xf860be */
  if (zf) goto L_f860be;
L_f860af: /* f860af: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* f860b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f860b5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf860bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f860bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f860be: /* f860be: mov eax, esi */
  eax = esi;
/* f860c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f860c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f860e0(void) {
  LOAD_REGS();
L_f860e0: /* f860e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f860e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f860e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f860e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f860e9: mov esi, ecx */
  esi = ecx;
/* f860eb: je 0xf86120 */
  if (zf) goto L_f86120;
L_f860ed: /* f860ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f860f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f860f1: push 0xf71208 */
  { uint32_t v = 0xf71208u; esp -= 4; W32(esp, v); }
/* f860f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f860f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f860fa: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* f860ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86100: call 0xf97850 */
  esp -= 4; W32(esp, 0xf86105u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f86105: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f86108: je 0xf86118 */
  if (zf) goto L_f86118;
L_f8610a: /* f8610a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f86110: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f86112: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f86114: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86115: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf86118u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f86118: /* f86118: mov eax, edi */
  eax = edi;
/* f8611a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8611b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8611c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8611d: ret 4 */
  esp += 8; SPILL(); return;
L_f86120: /* f86120: mov ecx, esi */
  ecx = esi;
/* f86122: call 0xf71208 */
  esp -= 4; W32(esp, 0xf86127u); SPILL(); f_f71208(); if (g_unwind) return; RELOAD();
/* f86127: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8612a: je 0xf8613b */
  if (zf) goto L_f8613b;
L_f8612c: /* f8612c: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* f86131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86132: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf86138u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f86138: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8613b: /* f8613b: mov eax, esi */
  eax = esi;
/* f8613d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8613e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8613f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f86170(void) {
  LOAD_REGS();
L_f86170: /* f86170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f86172: push 0xf99ea4 */
  { uint32_t v = 0xf99ea4u; esp -= 4; W32(esp, v); }
/* f86177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8617d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8617e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f86185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86187: mov esi, ecx */
  esi = ecx;
/* f86189: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8618d: mov dword ptr [esi], 0xfa39b0 */
  W32((uint32_t)(esi), 0xfa39b0u);
/* f86193: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* f8619b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf861a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f861a1: lea ecx, [esi + 0x25c] */
  ecx = (uint32_t)(esi + 0x25cu);
/* f861a7: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* f861ac: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf861b2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f861b2: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* f861b8: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* f861bd: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf861c3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f861c3: lea ecx, [esi + 0x22c] */
  ecx = (uint32_t)(esi + 0x22cu);
/* f861c9: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f861ce: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf861d4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f861d4: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* f861da: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f861df: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf861e5u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f861e5: mov ecx, esi */
  ecx = esi;
/* f861e7: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f861ef: call 0xf71208 */
  esp -= 4; W32(esp, 0xf861f4u); SPILL(); f_f71208(); if (g_unwind) return; RELOAD();
/* f861f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f861f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f861f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f86200: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f86203: ret  */
  esp += 4; SPILL(); return;
}

void f_f86240(void) {
  LOAD_REGS();
L_f86240: /* f86240: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f86242: push 0xf99f05 */
  { uint32_t v = 0xf99f05u; esp -= 4; W32(esp, v); }
/* f86247: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8624d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8624e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f86255: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86256: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86257: mov esi, ecx */
  esi = ecx;
/* f86259: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8625d: call 0xf716fe */
  esp -= 4; W32(esp, 0xf86262u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f86262: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* f86268: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f86270: mov dword ptr [esi], 0xfa39b0 */
  W32((uint32_t)(esi), 0xfa39b0u);
/* f86276: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf8627cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f8627c: lea ecx, [esi + 0x22c] */
  ecx = (uint32_t)(esi + 0x22cu);
/* f86282: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f86287: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf8628du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f8628d: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* f86293: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* f86298: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf8629eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f8629e: lea ecx, [esi + 0x25c] */
  ecx = (uint32_t)(esi + 0x25cu);
/* f862a4: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* f862a9: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf862afu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f862af: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f862b3: mov eax, esi */
  eax = esi;
/* f862b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f862b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f862bd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f862c0: ret  */
  esp += 4; SPILL(); return;
}

void f_f86300(void) {
  LOAD_REGS();
L_f86300: /* f86300: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f86302: push 0xf99f55 */
  { uint32_t v = 0xf99f55u; esp -= 4; W32(esp, v); }
/* f86307: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8630d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8630e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f86315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86316: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86317: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86318: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f8631c: mov esi, ecx */
  esi = ecx;
/* f8631e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8631f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f86323: call 0xf71708 */
  esp -= 4; W32(esp, 0xf86328u); SPILL(); f_f71708(); if (g_unwind) return; RELOAD();
/* f86328: lea eax, [edi + 0x220] */
  eax = (uint32_t)(edi + 0x220u);
/* f8632e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8632f: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* f86335: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f8633d: mov dword ptr [esi], 0xfa39b0 */
  W32((uint32_t)(esi), 0xfa39b0u);
/* f86343: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf86349u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f86349: lea ecx, [edi + 0x22c] */
  ecx = (uint32_t)(edi + 0x22cu);
/* f8634f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86350: lea ecx, [esi + 0x22c] */
  ecx = (uint32_t)(esi + 0x22cu);
/* f86356: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f8635b: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf86361u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f86361: mov edx, dword ptr [edi + 0x238] */
  edx = R32((uint32_t)(edi + 0x238u));
/* f86367: mov dword ptr [esi + 0x238], edx */
  W32((uint32_t)(esi + 0x238u), edx);
/* f8636d: mov eax, dword ptr [edi + 0x23c] */
  eax = R32((uint32_t)(edi + 0x23cu));
/* f86373: mov dword ptr [esi + 0x23c], eax */
  W32((uint32_t)(esi + 0x23cu), eax);
/* f86379: mov ecx, dword ptr [edi + 0x240] */
  ecx = R32((uint32_t)(edi + 0x240u));
/* f8637f: mov eax, dword ptr [esi + 0x248] */
  eax = R32((uint32_t)(esi + 0x248u));
/* f86385: mov dword ptr [esi + 0x240], ecx */
  W32((uint32_t)(esi + 0x240u), ecx);
/* f8638b: mov dl, byte ptr [edi + 0x244] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x244u))) & 0xffu);
/* f86391: mov byte ptr [esi + 0x244], dl */
  W8((uint32_t)(esi + 0x244u), (edx & 0xffu));
/* f86397: xor eax, dword ptr [edi + 0x248] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x248u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8639d: mov ecx, dword ptr [esi + 0x248] */
  ecx = R32((uint32_t)(esi + 0x248u));
/* f863a3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f863a6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f863a8: mov dword ptr [esi + 0x248], ecx */
  W32((uint32_t)(esi + 0x248u), ecx);
/* f863ae: mov eax, ecx */
  eax = ecx;
/* f863b0: mov ecx, dword ptr [edi + 0x248] */
  ecx = R32((uint32_t)(edi + 0x248u));
/* f863b6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f863b8: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f863bb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f863bd: mov dword ptr [esi + 0x248], ecx */
  W32((uint32_t)(esi + 0x248u), ecx);
/* f863c3: mov edx, dword ptr [edi + 0x24c] */
  edx = R32((uint32_t)(edi + 0x24cu));
/* f863c9: lea eax, [edi + 0x250] */
  eax = (uint32_t)(edi + 0x250u);
/* f863cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f863d0: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* f863d6: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* f863db: mov dword ptr [esi + 0x24c], edx */
  W32((uint32_t)(esi + 0x24cu), edx);
/* f863e1: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf863e7u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f863e7: lea ecx, [edi + 0x25c] */
  ecx = (uint32_t)(edi + 0x25cu);
/* f863ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f863ee: lea ecx, [esi + 0x25c] */
  ecx = (uint32_t)(esi + 0x25cu);
/* f863f4: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* f863f9: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf863ffu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f863ff: mov eax, dword ptr [edi + 0x268] */
  eax = R32((uint32_t)(edi + 0x268u));
/* f86405: mov edx, dword ptr [esi + 0x268] */
  edx = R32((uint32_t)(esi + 0x268u));
/* f8640b: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f8640d: mov eax, dword ptr [esi + 0x268] */
  eax = R32((uint32_t)(esi + 0x268u));
/* f86413: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f86416: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f86418: mov dword ptr [esi + 0x268], eax */
  W32((uint32_t)(esi + 0x268u), eax);
/* f8641e: mov ecx, eax */
  ecx = eax;
/* f86420: mov eax, dword ptr [edi + 0x268] */
  eax = R32((uint32_t)(edi + 0x268u));
/* f86426: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f86428: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f8642b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8642d: mov dword ptr [esi + 0x268], eax */
  W32((uint32_t)(esi + 0x268u), eax);
/* f86433: mov ecx, dword ptr [edi + 0x268] */
  ecx = R32((uint32_t)(edi + 0x268u));
/* f86439: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f8643b: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f8643e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f86440: mov dword ptr [esi + 0x268], ecx */
  W32((uint32_t)(esi + 0x268u), ecx);
/* f86446: mov edx, dword ptr [edi + 0x26c] */
  edx = R32((uint32_t)(edi + 0x26cu));
/* f8644c: mov dword ptr [esi + 0x26c], edx */
  W32((uint32_t)(esi + 0x26cu), edx);
/* f86452: mov eax, dword ptr [edi + 0x270] */
  eax = R32((uint32_t)(edi + 0x270u));
/* f86458: mov dword ptr [esi + 0x270], eax */
  W32((uint32_t)(esi + 0x270u), eax);
/* f8645e: mov ecx, dword ptr [edi + 0x274] */
  ecx = R32((uint32_t)(edi + 0x274u));
/* f86464: mov dword ptr [esi + 0x274], ecx */
  W32((uint32_t)(esi + 0x274u), ecx);
/* f8646a: mov edx, dword ptr [edi + 0x278] */
  edx = R32((uint32_t)(edi + 0x278u));
/* f86470: mov dword ptr [esi + 0x278], edx */
  W32((uint32_t)(esi + 0x278u), edx);
/* f86476: mov eax, dword ptr [edi + 0x27c] */
  eax = R32((uint32_t)(edi + 0x27cu));
/* f8647c: mov dword ptr [esi + 0x27c], eax */
  W32((uint32_t)(esi + 0x27cu), eax);
/* f86482: mov ecx, dword ptr [edi + 0x280] */
  ecx = R32((uint32_t)(edi + 0x280u));
/* f86488: mov dword ptr [esi + 0x280], ecx */
  W32((uint32_t)(esi + 0x280u), ecx);
/* f8648e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f86492: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f86493: mov eax, esi */
  eax = esi;
/* f86495: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86496: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8649d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f864a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f86520(void) {
  LOAD_REGS();
L_f86520: /* f86520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86521: mov esi, ecx */
  esi = ecx;
/* f86523: call 0xf721d0 */
  esp -= 4; W32(esp, 0xf86528u); SPILL(); f_f721d0(); if (g_unwind) return; RELOAD();
/* f86528: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8652d: je 0xf8653e */
  if (zf) goto L_f8653e;
L_f8652f: /* f8652f: push 0x284 */
  { uint32_t v = 0x284u; esp -= 4; W32(esp, v); }
/* f86534: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86535: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8653bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8653b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8653e: /* f8653e: mov eax, esi */
  eax = esi;
/* f86540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86541: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f86560(void) {
  LOAD_REGS();
L_f86560: /* f86560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f86561: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f86565: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f86568: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86569: mov esi, ecx */
  esi = ecx;
/* f8656b: je 0xf865a0 */
  if (zf) goto L_f865a0;
L_f8656d: /* f8656d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f86570: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86571: push 0xf721d0 */
  { uint32_t v = 0xf721d0u; esp -= 4; W32(esp, v); }
/* f86576: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f86579: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8657a: push 0x284 */
  { uint32_t v = 0x284u; esp -= 4; W32(esp, v); }
/* f8657f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86580: call 0xf97850 */
  esp -= 4; W32(esp, 0xf86585u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f86585: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f86588: je 0xf86598 */
  if (zf) goto L_f86598;
L_f8658a: /* f8658a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f86590: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f86592: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f86594: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86595: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf86598u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f86598: /* f86598: mov eax, edi */
  eax = edi;
/* f8659a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8659b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8659c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8659d: ret 4 */
  esp += 8; SPILL(); return;
L_f865a0: /* f865a0: mov ecx, esi */
  ecx = esi;
/* f865a2: call 0xf721d0 */
  esp -= 4; W32(esp, 0xf865a7u); SPILL(); f_f721d0(); if (g_unwind) return; RELOAD();
/* f865a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f865aa: je 0xf865bb */
  if (zf) goto L_f865bb;
L_f865ac: /* f865ac: push 0x284 */
  { uint32_t v = 0x284u; esp -= 4; W32(esp, v); }
/* f865b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f865b2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf865b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f865b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f865bb: /* f865bb: mov eax, esi */
  eax = esi;
/* f865bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f865be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f865bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f865f0(void) {
  LOAD_REGS();
L_f865f0: /* f865f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f865f2: push 0xf99fca */
  { uint32_t v = 0xf99fcau; esp -= 4; W32(esp, v); }
/* f865f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f865fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f865fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f86605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86607: mov esi, ecx */
  esi = ecx;
/* f86609: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f8660d: mov dword ptr [esi], 0xfa3aa0 */
  W32((uint32_t)(esi), 0xfa3aa0u);
/* f86613: mov dword ptr [esp + 0x10], 5 */
  W32((uint32_t)(esp + 0x10u), 0x5u);
/* f8661b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf86621u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f86621: lea ecx, [esi + 0x28c] */
  ecx = (uint32_t)(esi + 0x28cu);
/* f86627: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* f8662c: call 0xf715fa */
  esp -= 4; W32(esp, 0xf86631u); SPILL(); f_f715fa(); if (g_unwind) return; RELOAD();
/* f86631: lea ecx, [esi + 0x280] */
  ecx = (uint32_t)(esi + 0x280u);
/* f86637: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* f8663c: call 0xf715fa */
  esp -= 4; W32(esp, 0xf86641u); SPILL(); f_f715fa(); if (g_unwind) return; RELOAD();
/* f86641: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f86646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f86647: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f86649: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f8664b: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* f86651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86652: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* f86657: call 0xf97850 */
  esp -= 4; W32(esp, 0xf8665cu); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f8665c: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* f86662: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f86667: call 0xf71e9c */
  esp -= 4; W32(esp, 0xf8666cu); SPILL(); f_f71e9c(); if (g_unwind) return; RELOAD();
/* f8666c: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* f86672: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f86677: call 0xf711ef */
  esp -= 4; W32(esp, 0xf8667cu); SPILL(); f_f711ef(); if (g_unwind) return; RELOAD();
/* f8667c: mov ecx, esi */
  ecx = esi;
/* f8667e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f86686: call 0xf72252 */
  esp -= 4; W32(esp, 0xf8668bu); SPILL(); f_f72252(); if (g_unwind) return; RELOAD();
/* f8668b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f8668f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86690: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f86697: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8669a: ret  */
  esp += 4; SPILL(); return;
}

void f_f866d0(void) {
  LOAD_REGS();
L_f866d0: /* f866d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f866d2: push 0xf9a014 */
  { uint32_t v = 0xf9a014u; esp -= 4; W32(esp, v); }
/* f866d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f866dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f866de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f866e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f866e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f866e7: mov esi, ecx */
  esi = ecx;
/* f866e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f866ed: call 0xf716fe */
  esp -= 4; W32(esp, 0xf866f2u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f866f2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f866fa: mov dword ptr [esi], 0xfa3aa0 */
  W32((uint32_t)(esi), 0xfa3aa0u);
/* f86700: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f86705: mov ecx, dword ptr [0xfce3c4] */
  ecx = R32((uint32_t)(0xfce3c4u));
/* f8670b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8670c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8670d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f8670f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f86711: lea edx, [esi + 0x220] */
  edx = (uint32_t)(esi + 0x220u);
/* f86717: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f86718: mov byte ptr [esp + 0x24], 2 */
  W8((uint32_t)(esp + 0x24u), 0x2u);
/* f8671d: call 0xf978b0 */
  esp -= 4; W32(esp, 0xf86722u); SPILL(); f_f978b0(); if (g_unwind) return; RELOAD();
/* f86722: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f86726: mov eax, esi */
  eax = esi;
/* f86728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86729: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f86730: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f86733: ret  */
  esp += 4; SPILL(); return;
}

void f_f86760(void) {
  LOAD_REGS();
L_f86760: /* f86760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f86762: push 0xf9a062 */
  { uint32_t v = 0xf9a062u; esp -= 4; W32(esp, v); }
/* f86767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8676d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8676e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f86775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86778: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f8677c: mov esi, ecx */
  esi = ecx;
/* f8677e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8677f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f86783: call 0xf71d7f */
  esp -= 4; W32(esp, 0xf86788u); SPILL(); f_f71d7f(); if (g_unwind) return; RELOAD();
/* f86788: lea eax, [edi + 0x208] */
  eax = (uint32_t)(edi + 0x208u);
/* f8678e: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* f86794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f86795: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f8679d: mov dword ptr [esi], 0xfa3aa0 */
  W32((uint32_t)(esi), 0xfa3aa0u);
/* f867a3: call 0xf71069 */
  esp -= 4; W32(esp, 0xf867a8u); SPILL(); f_f71069(); if (g_unwind) return; RELOAD();
/* f867a8: lea edx, [edi + 0x214] */
  edx = (uint32_t)(edi + 0x214u);
/* f867ae: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* f867b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f867b5: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f867ba: call 0xf71884 */
  esp -= 4; W32(esp, 0xf867bfu); SPILL(); f_f71884(); if (g_unwind) return; RELOAD();
/* f867bf: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f867c4: mov ecx, dword ptr [0xfce3c8] */
  ecx = R32((uint32_t)(0xfce3c8u));
/* f867ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f867cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f867cc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f867ce: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f867d0: lea edx, [edi + 0x220] */
  edx = (uint32_t)(edi + 0x220u);
/* f867d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f867d7: lea eax, [esi + 0x220] */
  eax = (uint32_t)(esi + 0x220u);
/* f867dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f867de: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* f867e3: call 0xf97912 */
  esp -= 4; W32(esp, 0xf867e8u); SPILL(); f_f97912(); if (g_unwind) return; RELOAD();
/* f867e8: lea edx, [edi + 0x280] */
  edx = (uint32_t)(edi + 0x280u);
/* f867ee: lea ecx, [esi + 0x280] */
  ecx = (uint32_t)(esi + 0x280u);
/* f867f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f867f5: call 0xf7150f */
  esp -= 4; W32(esp, 0xf867fau); SPILL(); f_f7150f(); if (g_unwind) return; RELOAD();
/* f867fa: lea eax, [edi + 0x28c] */
  eax = (uint32_t)(edi + 0x28cu);
/* f86800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f86801: lea ecx, [esi + 0x28c] */
  ecx = (uint32_t)(esi + 0x28cu);
/* f86807: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* f8680c: call 0xf7150f */
  esp -= 4; W32(esp, 0xf86811u); SPILL(); f_f7150f(); if (g_unwind) return; RELOAD();
/* f86811: mov ecx, dword ptr [edi + 0x298] */
  ecx = R32((uint32_t)(edi + 0x298u));
/* f86817: mov eax, dword ptr [esi + 0x2a0] */
  eax = R32((uint32_t)(esi + 0x2a0u));
/* f8681d: mov dword ptr [esi + 0x298], ecx */
  W32((uint32_t)(esi + 0x298u), ecx);
/* f86823: mov edx, dword ptr [edi + 0x29c] */
  edx = R32((uint32_t)(edi + 0x29cu));
/* f86829: mov dword ptr [esi + 0x29c], edx */
  W32((uint32_t)(esi + 0x29cu), edx);
/* f8682f: xor eax, dword ptr [edi + 0x2a0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2a0u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f86835: mov ecx, dword ptr [esi + 0x2a0] */
  ecx = R32((uint32_t)(esi + 0x2a0u));
/* f8683b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f8683e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f86840: mov dword ptr [esi + 0x2a0], ecx */
  W32((uint32_t)(esi + 0x2a0u), ecx);
/* f86846: mov eax, dword ptr [edi + 0x2a0] */
  eax = R32((uint32_t)(edi + 0x2a0u));
/* f8684c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f8684e: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f86851: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f86853: mov dword ptr [esi + 0x2a0], eax */
  W32((uint32_t)(esi + 0x2a0u), eax);
/* f86859: mov ecx, dword ptr [edi + 0x2a0] */
  ecx = R32((uint32_t)(edi + 0x2a0u));
/* f8685f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f86861: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f86864: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f86866: mov dword ptr [esi + 0x2a0], ecx */
  W32((uint32_t)(esi + 0x2a0u), ecx);
/* f8686c: mov edx, dword ptr [edi + 0x2a0] */
  edx = R32((uint32_t)(edi + 0x2a0u));
/* f86872: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f86874: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f86877: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f86879: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f8687d: mov dword ptr [esi + 0x2a0], edx */
  W32((uint32_t)(esi + 0x2a0u), edx);
/* f86883: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f86884: mov eax, esi */
  eax = esi;
/* f86886: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86887: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8688e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f86891: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f868f0(void) {
  LOAD_REGS();
L_f868f0: /* f868f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f868f1: mov esi, ecx */
  esi = ecx;
/* f868f3: call 0xf713a2 */
  esp -= 4; W32(esp, 0xf868f8u); SPILL(); f_f713a2(); if (g_unwind) return; RELOAD();
/* f868f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f868fd: je 0xf8690e */
  if (zf) goto L_f8690e;
L_f868ff: /* f868ff: push 0x2a4 */
  { uint32_t v = 0x2a4u; esp -= 4; W32(esp, v); }
/* f86904: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86905: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf8690bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f8690b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8690e: /* f8690e: mov eax, esi */
  eax = esi;
/* f86910: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86911: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f86930(void) {
  LOAD_REGS();
L_f86930: /* f86930: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f86931: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f86935: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f86938: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86939: mov esi, ecx */
  esi = ecx;
/* f8693b: je 0xf86970 */
  if (zf) goto L_f86970;
L_f8693d: /* f8693d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f86940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86941: push 0xf713a2 */
  { uint32_t v = 0xf713a2u; esp -= 4; W32(esp, v); }
/* f86946: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f86949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8694a: push 0x2a4 */
  { uint32_t v = 0x2a4u; esp -= 4; W32(esp, v); }
/* f8694f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86950: call 0xf97850 */
  esp -= 4; W32(esp, 0xf86955u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f86955: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f86958: je 0xf86968 */
  if (zf) goto L_f86968;
L_f8695a: /* f8695a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f86960: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f86962: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f86964: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86965: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf86968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f86968: /* f86968: mov eax, edi */
  eax = edi;
/* f8696a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8696b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8696c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8696d: ret 4 */
  esp += 8; SPILL(); return;
L_f86970: /* f86970: mov ecx, esi */
  ecx = esi;
/* f86972: call 0xf713a2 */
  esp -= 4; W32(esp, 0xf86977u); SPILL(); f_f713a2(); if (g_unwind) return; RELOAD();
/* f86977: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8697a: je 0xf8698b */
  if (zf) goto L_f8698b;
L_f8697c: /* f8697c: push 0x2a4 */
  { uint32_t v = 0x2a4u; esp -= 4; W32(esp, v); }
/* f86981: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86982: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf86988u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f86988: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8698b: /* f8698b: mov eax, esi */
  eax = esi;
/* f8698d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8698e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8698f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f869c0(void) {
  LOAD_REGS();
L_f869c0: /* f869c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f869c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f869c6: je 0xf869cd */
  if (zf) goto L_f869cd;
L_f869c8: /* f869c8: jmp 0xf71bd6 */
  SPILL(); f_f71bd6(); return;
L_f869cd: /* f869cd: ret  */
  esp += 4; SPILL(); return;
}

void f_f869e0(void) {
  LOAD_REGS();
L_f869e0: /* f869e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f869e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f869e6: je 0xf869ed */
  if (zf) goto L_f869ed;
L_f869e8: /* f869e8: jmp 0xf71190 */
  SPILL(); f_f71190(); return;
L_f869ed: /* f869ed: ret  */
  esp += 4; SPILL(); return;
}

void f_f86a00(void) {
  LOAD_REGS();
L_f86a00: /* f86a00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86a04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86a06: je 0xf86a0d */
  if (zf) goto L_f86a0d;
L_f86a08: /* f86a08: jmp 0xf71cbc */
  SPILL(); f_f71cbc(); return;
L_f86a0d: /* f86a0d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86a20(void) {
  LOAD_REGS();
L_f86a20: /* f86a20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86a24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86a26: je 0xf86a2d */
  if (zf) goto L_f86a2d;
L_f86a28: /* f86a28: jmp 0xf7207c */
  SPILL(); f_f7207c(); return;
L_f86a2d: /* f86a2d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86a40(void) {
  LOAD_REGS();
L_f86a40: /* f86a40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86a44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86a46: je 0xf86a4d */
  if (zf) goto L_f86a4d;
L_f86a48: /* f86a48: jmp 0xf718a2 */
  SPILL(); f_f718a2(); return;
L_f86a4d: /* f86a4d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86a60(void) {
  LOAD_REGS();
L_f86a60: /* f86a60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86a64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86a66: je 0xf86a6d */
  if (zf) goto L_f86a6d;
L_f86a68: /* f86a68: jmp 0xf721f3 */
  SPILL(); f_f721f3(); return;
L_f86a6d: /* f86a6d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86a80(void) {
  LOAD_REGS();
L_f86a80: /* f86a80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86a84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86a86: je 0xf86a8d */
  if (zf) goto L_f86a8d;
L_f86a88: /* f86a88: jmp 0xf713ed */
  SPILL(); f_f713ed(); return;
L_f86a8d: /* f86a8d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86aa0(void) {
  LOAD_REGS();
L_f86aa0: /* f86aa0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86aa4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86aa6: je 0xf86aad */
  if (zf) goto L_f86aad;
L_f86aa8: /* f86aa8: jmp 0xf71a4b */
  SPILL(); f_f71a4b(); return;
L_f86aad: /* f86aad: ret  */
  esp += 4; SPILL(); return;
}

void f_f86ac0(void) {
  LOAD_REGS();
L_f86ac0: /* f86ac0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86ac4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86ac6: je 0xf86acd */
  if (zf) goto L_f86acd;
L_f86ac8: /* f86ac8: jmp 0xf7105a */
  SPILL(); f_f7105a(); return;
L_f86acd: /* f86acd: ret  */
  esp += 4; SPILL(); return;
}

void f_f86ae0(void) {
  LOAD_REGS();
L_f86ae0: /* f86ae0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86ae4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86ae6: je 0xf86aed */
  if (zf) goto L_f86aed;
L_f86ae8: /* f86ae8: jmp 0xf719b0 */
  SPILL(); f_f719b0(); return;
L_f86aed: /* f86aed: ret  */
  esp += 4; SPILL(); return;
}

void f_f86b00(void) {
  LOAD_REGS();
L_f86b00: /* f86b00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86b04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86b06: je 0xf86b0d */
  if (zf) goto L_f86b0d;
L_f86b08: /* f86b08: jmp 0xf71ece */
  SPILL(); f_f71ece(); return;
L_f86b0d: /* f86b0d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86b20(void) {
  LOAD_REGS();
L_f86b20: /* f86b20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86b24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86b26: je 0xf86b2d */
  if (zf) goto L_f86b2d;
L_f86b28: /* f86b28: jmp 0xf711ea */
  SPILL(); f_f711ea(); return;
L_f86b2d: /* f86b2d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86b40(void) {
  LOAD_REGS();
L_f86b40: /* f86b40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86b44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86b46: je 0xf86b4d */
  if (zf) goto L_f86b4d;
L_f86b48: /* f86b48: jmp 0xf719d3 */
  SPILL(); f_f719d3(); return;
L_f86b4d: /* f86b4d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86b60(void) {
  LOAD_REGS();
L_f86b60: /* f86b60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86b64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86b66: je 0xf86b6d */
  if (zf) goto L_f86b6d;
L_f86b68: /* f86b68: jmp 0xf72199 */
  SPILL(); f_f72199(); return;
L_f86b6d: /* f86b6d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86b80(void) {
  LOAD_REGS();
L_f86b80: /* f86b80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86b84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86b86: je 0xf86b8d */
  if (zf) goto L_f86b8d;
L_f86b88: /* f86b88: jmp 0xf71bb8 */
  SPILL(); f_f71bb8(); return;
L_f86b8d: /* f86b8d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86ba0(void) {
  LOAD_REGS();
L_f86ba0: /* f86ba0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86ba4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86ba6: je 0xf86bad */
  if (zf) goto L_f86bad;
L_f86ba8: /* f86ba8: jmp 0xf7137f */
  SPILL(); f_f7137f(); return;
L_f86bad: /* f86bad: ret  */
  esp += 4; SPILL(); return;
}

void f_f86bc0(void) {
  LOAD_REGS();
L_f86bc0: /* f86bc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86bc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86bc6: je 0xf86bcd */
  if (zf) goto L_f86bcd;
L_f86bc8: /* f86bc8: jmp 0xf71f82 */
  SPILL(); f_f71f82(); return;
L_f86bcd: /* f86bcd: ret  */
  esp += 4; SPILL(); return;
}

void f_f86be0(void) {
  LOAD_REGS();
L_f86be0: /* f86be0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86be4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86be6: je 0xf86bed */
  if (zf) goto L_f86bed;
L_f86be8: /* f86be8: jmp 0xf7224d */
  SPILL(); f_f7224d(); return;
L_f86bed: /* f86bed: ret  */
  esp += 4; SPILL(); return;
}

void f_f86c00(void) {
  LOAD_REGS();
L_f86c00: /* f86c00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86c04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86c06: je 0xf86c0d */
  if (zf) goto L_f86c0d;
L_f86c08: /* f86c08: jmp 0xf71bef */
  SPILL(); f_f71bef(); return;
L_f86c0d: /* f86c0d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86c20(void) {
  LOAD_REGS();
L_f86c20: /* f86c20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86c24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86c26: je 0xf86c2d */
  if (zf) goto L_f86c2d;
L_f86c28: /* f86c28: jmp 0xf71dca */
  SPILL(); f_f71dca(); return;
L_f86c2d: /* f86c2d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86c40(void) {
  LOAD_REGS();
L_f86c40: /* f86c40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86c44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86c46: je 0xf86c4d */
  if (zf) goto L_f86c4d;
L_f86c48: /* f86c48: jmp 0xf72135 */
  SPILL(); f_f72135(); return;
L_f86c4d: /* f86c4d: ret  */
  esp += 4; SPILL(); return;
}

void f_f86c60(void) {
  LOAD_REGS();
L_f86c60: /* f86c60: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f86c63: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f86c65: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* f86c69: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* f86c6d: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* f86c71: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* f86c75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f86c77: jge 0xf86c7f */
  if ((sf == of)) goto L_f86c7f;
L_f86c79: /* f86c79: fadd qword ptr [0xfa3ba0] */
  ST0 = ST0 + (F64((uint32_t)(0xfa3ba0u)));
L_f86c7f: /* f86c7f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f86c83: fmul qword ptr [0xfa3ba0] */
  ST0 = ST0 * (F64((uint32_t)(0xfa3ba0u)));
/* f86c89: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f86c8b: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f86c8f: jge 0xf86c97 */
  if ((sf == of)) goto L_f86c97;
L_f86c91: /* f86c91: fadd qword ptr [0xfa3ba0] */
  ST0 = ST0 + (F64((uint32_t)(0xfa3ba0u)));
L_f86c97: /* f86c97: mov edx, dword ptr [0xfce3dc] */
  edx = R32((uint32_t)(0xfce3dcu));
/* f86c9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f86c9f: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* f86ca1: fadd qword ptr [0xfa3b90] */
  ST0 = ST0 + (F64((uint32_t)(0xfa3b90u)));
/* f86ca7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f86caa: ret  */
  esp += 4; SPILL(); return;
}

void f_f86cd0(void) {
  LOAD_REGS();
L_f86cd0: /* f86cd0: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* f86cd4: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf86cdau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f86cda: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f86cf0(void) {
  LOAD_REGS();
L_f86cf0: /* f86cf0: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* f86cf3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86cf5: je 0xf86cff */
  if (zf) goto L_f86cff;
L_f86cf7: /* f86cf7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f86cf9: jmp dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); SPILL(); call_ind(t); return; }
L_f86cff: /* f86cff: xor eax, eax */
  eax = 0;
/* f86d01: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f86d20(void) {
  LOAD_REGS();
L_f86d20: /* f86d20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f86d21: mov ebp, esp */
  ebp = esp;
/* f86d23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f86d25: push 0xf9a080 */
  { uint32_t v = 0xf9a080u; esp -= 4; W32(esp, v); }
/* f86d2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f86d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f86d31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f86d38: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f86d3b: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f86d3e: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f86d41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86d43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f86d44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86d45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86d46: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f86d49: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f86d50: je 0xf86dbf */
  if (zf) goto L_f86dbf;
L_f86d52: /* f86d52: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* f86d58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86d5a: je 0xf86dbf */
  if (zf) goto L_f86dbf;
L_f86d5c: /* f86d5c: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* f86d5f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86d61: je 0xf86dbf */
  if (zf) goto L_f86dbf;
L_f86d63: /* f86d63: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* f86d66: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86d68: je 0xf86dbf */
  if (zf) goto L_f86dbf;
L_f86d6a: /* f86d6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86d6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86d6e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f86d70: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f86d75: push 0x45800000 */
  { uint32_t v = 0x45800000u; esp -= 4; W32(esp, v); }
/* f86d7a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f86d7f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f86d82: mov edx, ecx */
  edx = ecx;
/* f86d84: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* f86d87: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f86d89: mov edx, esp */
  edx = esp;
/* f86d8b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* f86d92: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* f86d95: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f86d97: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* f86d9e: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* f86da1: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* f86da4: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* f86dab: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* f86dae: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* f86db1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f86db4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f86db5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86db7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86db9: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf86dbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f86dbf: /* f86dbf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f86dc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f86dc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86dc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f86dcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f86dcc: mov esp, ebp */
  esp = ebp;
/* f86dce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f86dcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f86dd2(void) {
  LOAD_REGS();
L_f86dd2: /* f86dd2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f86dd5: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f86dda: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f86ddd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f86dde: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f86de1: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf86de6u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f86de6(); return;
}

void f_f86de6(void) {
  LOAD_REGS();
L_f86de6: /* f86de6: push 0xfa3bb0 */
  { uint32_t v = 0xfa3bb0u; esp -= 4; W32(esp, v); }
/* f86deb: push 0xfb9910 */
  { uint32_t v = 0xfb9910u; esp -= 4; W32(esp, v); }
/* f86df0: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf86df6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f86df6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f86df9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86dfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86dfd: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf86e02u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f86e02: guest_badaddr(0xf86e02); return;
}

void f_f86e50(void) {
  LOAD_REGS();
L_f86e50: /* f86e50: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f86e56: fcomp dword ptr [ecx + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xb0u)));
  FPOP();
/* f86e5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f86e5e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f86e61: jp 0xf86e79 */
  if (pf) goto L_f86e79;
L_f86e63: /* f86e63: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f86e69: fcomp dword ptr [ecx + 0xb4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xb4u)));
  FPOP();
/* f86e6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f86e71: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f86e74: jp 0xf86e79 */
  if (pf) goto L_f86e79;
L_f86e76: /* f86e76: xor eax, eax */
  eax = 0;
/* f86e78: ret  */
  esp += 4; SPILL(); return;
L_f86e79: /* f86e79: mov eax, 1 */
  eax = 0x1u;
/* f86e7e: ret  */
  esp += 4; SPILL(); return;
}

void f_f86e90(void) {
  LOAD_REGS();
L_f86e90: /* f86e90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f86e91: mov ebp, esp */
  ebp = esp;
/* f86e93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f86e95: push 0xf9a090 */
  { uint32_t v = 0xf9a090u; esp -= 4; W32(esp, v); }
/* f86e9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f86ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f86ea1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f86ea8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f86eab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f86eac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f86ead: mov esi, ecx */
  esi = ecx;
/* f86eaf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f86eb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f86eb2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f86eb5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f86ebc: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf86ec2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f86ec2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f86ec5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f86ec8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f86eca: mov dword ptr [esi + 0xa4], ecx */
  W32((uint32_t)(esi + 0xa4u), ecx);
/* f86ed0: mov ecx, esi */
  ecx = esi;
/* f86ed2: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf86ed8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f86ed8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f86edb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f86ede: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f86ee0: mov ecx, esi */
  ecx = esi;
/* f86ee2: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* f86ee8: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf86eeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f86eee: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f86ef1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f86ef3: mov ecx, esi */
  ecx = esi;
/* f86ef5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf86ef8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f86ef8: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f86efb: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f86efe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f86f00: mov ecx, esi */
  ecx = esi;
/* f86f02: fstp dword ptr [esi + 0xac] */
  WF32((uint32_t)(esi + 0xacu), ST0); FPOP();
/* f86f08: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf86f0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f86f0e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f86f10: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f86f13: mov ecx, esi */
  ecx = esi;
/* f86f15: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf86f18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f86f18: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f86f1b: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f86f1e: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f86f24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f86f26: fst dword ptr [esi + 0xb0] */
  WF32((uint32_t)(esi + 0xb0u), ST0);
/* f86f2c: je 0xf86f85 */
  if (zf) goto L_f86f85;
L_f86f2e: /* f86f2e: fild dword ptr [eax + 0x98] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* f86f34: fadd dword ptr [esi + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa4u)));
/* f86f3a: fstp dword ptr [esi + 0xb4] */
  WF32((uint32_t)(esi + 0xb4u), ST0); FPOP();
/* f86f40: fild dword ptr [eax + 0x9c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x9cu)); FPUSH(v); }
/* f86f46: fadd dword ptr [esi + 0xa8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa8u)));
/* f86f4c: fstp dword ptr [esi + 0xb8] */
  WF32((uint32_t)(esi + 0xb8u), ST0); FPOP();
/* f86f52: fild dword ptr [eax + 0xa0] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0xa0u)); FPUSH(v); }
/* f86f58: fsubr dword ptr [esi + 0xac] */
  ST0 = (F32((uint32_t)(esi + 0xacu))) - ST0;
/* f86f5e: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* f86f64: fild dword ptr [eax + 0xa4] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0xa4u)); FPUSH(v); }
/* f86f6a: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* f86f6c: fstp dword ptr [esi + 0xc0] */
  WF32((uint32_t)(esi + 0xc0u), ST0); FPOP();
/* f86f72: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f86f74: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f86f77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f86f7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f86f7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86f80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f86f81: mov esp, ebp */
  esp = ebp;
/* f86f83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f86f84: ret  */
  esp += 4; SPILL(); return;
L_f86f85: /* f86f85: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* f86f8b: fstp dword ptr [esi + 0xc0] */
  WF32((uint32_t)(esi + 0xc0u), ST0); FPOP();
/* f86f91: mov edx, dword ptr [esi + 0xa8] */
  edx = R32((uint32_t)(esi + 0xa8u));
/* f86f97: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f86f9d: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* f86fa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f86fa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f86fa7: mov dword ptr [esi + 0xb8], edx */
  W32((uint32_t)(esi + 0xb8u), edx);
/* f86fad: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* f86fb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f86fb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f86fbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f86fbc: mov esp, ebp */
  esp = ebp;
/* f86fbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f86fbf: ret  */
  esp += 4; SPILL(); return;
}

void f_f86fc0(void) {
  LOAD_REGS();
L_f86fc0: /* f86fc0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f86fc3: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f86fc8: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* f86fcb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f86fcc: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f86fcf: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf86fd4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f86fd4(); return;
}

void f_f86fd4(void) {
  LOAD_REGS();
L_f86fd4: /* f86fd4: push 0xfa3c04 */
  { uint32_t v = 0xfa3c04u; esp -= 4; W32(esp, v); }
/* f86fd9: push 0xfb99b4 */
  { uint32_t v = 0xfb99b4u; esp -= 4; W32(esp, v); }
/* f86fde: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf86fe4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f86fe4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f86fe7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86fe9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f86feb: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf86ff0u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f86ff0: guest_badaddr(0xf86ff0); return;
}

void f_f87060(void) {
  LOAD_REGS();
L_f87060: /* f87060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87061: mov ebp, esp */
  ebp = esp;
/* f87063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87065: push 0xf9a0a0 */
  { uint32_t v = 0xf9a0a0u; esp -= 4; W32(esp, v); }
/* f8706a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87078: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8707b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8707e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f87081: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87082: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f87083: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87084: mov esi, ecx */
  esi = ecx;
/* f87086: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87089: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8708c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8708d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87090: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f87097: jne 0xf870ae */
  if (!zf) goto L_f870ae;
L_f87099: /* f87099: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f8709c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8709d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8709f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f870a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f870a3: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f870a8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf870aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f870ae: /* f870ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f870b0: mov ecx, esi */
  ecx = esi;
/* f870b2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf870b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f870b5: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f870b8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f870bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f870be: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* f870c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f870c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f870c2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f870c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f870ca: mov esp, ebp */
  esp = ebp;
/* f870cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f870cd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f870d0(void) {
  LOAD_REGS();
L_f870d0: /* f870d0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f870d3: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f870d8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f870db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f870dc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f870df: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf870e4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f870e4(); return;
}

void f_f870e4(void) {
  LOAD_REGS();
L_f870e4: /* f870e4: push 0xfa3c44 */
  { uint32_t v = 0xfa3c44u; esp -= 4; W32(esp, v); }
/* f870e9: push 0xfb99cc */
  { uint32_t v = 0xfb99ccu; esp -= 4; W32(esp, v); }
/* f870ee: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf870f4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f870f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f870f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f870f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f870fb: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf87100u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f87100: guest_badaddr(0xf87100); return;
}

void f_f87140(void) {
  LOAD_REGS();
L_f87140: /* f87140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87141: mov ebp, esp */
  ebp = esp;
/* f87143: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87145: push 0xf9a0b0 */
  { uint32_t v = 0xf9a0b0u; esp -= 4; W32(esp, v); }
/* f8714a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87151: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87158: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8715b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8715e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f87161: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87162: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f87163: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87164: mov esi, ecx */
  esi = ecx;
/* f87166: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87169: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8716c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8716d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87170: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f87177: jne 0xf8718e */
  if (!zf) goto L_f8718e;
L_f87179: /* f87179: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f8717c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8717d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8717f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87183: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f87188: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf8718eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8718e: /* f8718e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87190: mov ecx, esi */
  ecx = esi;
/* f87192: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf87195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87195: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f87198: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8719b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8719e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* f871a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f871a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f871a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f871a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f871aa: mov esp, ebp */
  esp = ebp;
/* f871ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f871ad: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f871b0(void) {
  LOAD_REGS();
L_f871b0: /* f871b0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f871b3: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f871b8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f871bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f871bc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f871bf: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf871c4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f871c4(); return;
}

void f_f871c4(void) {
  LOAD_REGS();
L_f871c4: /* f871c4: push 0xfa3c8c */
  { uint32_t v = 0xfa3c8cu; esp -= 4; W32(esp, v); }
/* f871c9: push 0xfb99dc */
  { uint32_t v = 0xfb99dcu; esp -= 4; W32(esp, v); }
/* f871ce: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf871d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f871d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f871d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f871d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f871db: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf871e0u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f871e0: guest_badaddr(0xf871e0); return;
}

void f_f87220(void) {
  LOAD_REGS();
L_f87220: /* f87220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87221: mov ebp, esp */
  ebp = esp;
/* f87223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87225: push 0xf9a0c0 */
  { uint32_t v = 0xf9a0c0u; esp -= 4; W32(esp, v); }
/* f8722a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87238: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8723b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8723e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f87241: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87242: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f87243: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87244: mov esi, ecx */
  esi = ecx;
/* f87246: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87249: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8724c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8724d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87250: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f87257: jne 0xf8726e */
  if (!zf) goto L_f8726e;
L_f87259: /* f87259: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f8725c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8725d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8725f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87263: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f87268: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf8726eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8726e: /* f8726e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87270: mov ecx, esi */
  ecx = esi;
/* f87272: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf87278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87278: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8727b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8727e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f87281: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* f87283: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f87284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f87285: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8728c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8728d: mov esp, ebp */
  esp = ebp;
/* f8728f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87290: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f87293(void) {
  LOAD_REGS();
L_f87293: /* f87293: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f87296: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8729b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8729e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8729f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f872a2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf872a7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f872a7(); return;
}

void f_f872a7(void) {
  LOAD_REGS();
L_f872a7: /* f872a7: push 0xfa3cd8 */
  { uint32_t v = 0xfa3cd8u; esp -= 4; W32(esp, v); }
/* f872ac: push 0xfb99ec */
  { uint32_t v = 0xfb99ecu; esp -= 4; W32(esp, v); }
/* f872b1: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf872b7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f872b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f872ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f872bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f872be: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf872c3u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f872c3: guest_badaddr(0xf872c3); return;
}

void f_f87300(void) {
  LOAD_REGS();
L_f87300: /* f87300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87301: mov ebp, esp */
  ebp = esp;
/* f87303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87305: push 0xf9a0d0 */
  { uint32_t v = 0xf9a0d0u; esp -= 4; W32(esp, v); }
/* f8730a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87318: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8731b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8731e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f87321: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87322: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f87323: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87324: mov esi, ecx */
  esi = ecx;
/* f87326: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87329: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8732c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8732d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87330: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f87337: jne 0xf8734e */
  if (!zf) goto L_f8734e;
L_f87339: /* f87339: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f8733c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8733d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8733f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87342: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87343: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f87348: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf8734eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8734e: /* f8734e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87350: mov ecx, esi */
  ecx = esi;
/* f87352: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf87358u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87358: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8735b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8735e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f87361: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* f87363: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f87364: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f87365: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8736c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8736d: mov esp, ebp */
  esp = ebp;
/* f8736f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87370: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f87373(void) {
  LOAD_REGS();
L_f87373: /* f87373: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f87376: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8737b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8737e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8737f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f87382: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf87387u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f87387(); return;
}

void f_f87387(void) {
  LOAD_REGS();
L_f87387: /* f87387: push 0xfa3d20 */
  { uint32_t v = 0xfa3d20u; esp -= 4; W32(esp, v); }
/* f8738c: push 0xfb99fc */
  { uint32_t v = 0xfb99fcu; esp -= 4; W32(esp, v); }
/* f87391: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf87397u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f87397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8739a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8739c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8739e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf873a3u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f873a3: guest_badaddr(0xf873a3); return;
}

void f_f873e0(void) {
  LOAD_REGS();
L_f873e0: /* f873e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f873e4: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* f873e7: mov dword ptr [ecx + 0xd8], edx */
  W32((uint32_t)(ecx + 0xd8u), edx);
/* f873ed: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* f873f0: mov dword ptr [ecx + 0xdc], edx */
  W32((uint32_t)(ecx + 0xdcu), edx);
/* f873f6: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* f873f9: mov dword ptr [ecx + 0xe0], edx */
  W32((uint32_t)(ecx + 0xe0u), edx);
/* f873ff: mov dl, byte ptr [eax + 0x50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* f87402: mov byte ptr [ecx + 0xe8], dl */
  W8((uint32_t)(ecx + 0xe8u), (edx & 0xffu));
/* f87408: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f8740b: mov dword ptr [ecx + 0xe4], eax */
  W32((uint32_t)(ecx + 0xe4u), eax);
/* f87411: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87430(void) {
  LOAD_REGS();
L_f87430: /* f87430: mov edx, dword ptr [ecx + 0xd8] */
  edx = R32((uint32_t)(ecx + 0xd8u));
/* f87436: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f8743a: mov dword ptr [eax + 0x44], edx */
  W32((uint32_t)(eax + 0x44u), edx);
/* f8743d: mov edx, dword ptr [ecx + 0xdc] */
  edx = R32((uint32_t)(ecx + 0xdcu));
/* f87443: mov dword ptr [eax + 0x48], edx */
  W32((uint32_t)(eax + 0x48u), edx);
/* f87446: mov edx, dword ptr [ecx + 0xe0] */
  edx = R32((uint32_t)(ecx + 0xe0u));
/* f8744c: mov dword ptr [eax + 0x58], edx */
  W32((uint32_t)(eax + 0x58u), edx);
/* f8744f: mov dl, byte ptr [ecx + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xe8u))) & 0xffu);
/* f87455: mov byte ptr [eax + 0x50], dl */
  W8((uint32_t)(eax + 0x50u), (edx & 0xffu));
/* f87458: mov ecx, dword ptr [ecx + 0xe4] */
  ecx = R32((uint32_t)(ecx + 0xe4u));
/* f8745e: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* f87461: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87480(void) {
  LOAD_REGS();
L_f87480: /* f87480: xor eax, eax */
  eax = 0;
/* f87482: ret  */
  esp += 4; SPILL(); return;
}

void f_f874a0(void) {
  LOAD_REGS();
L_f874a0: /* f874a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f874a1: mov ebp, esp */
  ebp = esp;
/* f874a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f874a5: push 0xf9a0e0 */
  { uint32_t v = 0xf9a0e0u; esp -= 4; W32(esp, v); }
/* f874aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f874b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f874b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f874b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f874bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f874bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f874bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f874c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f874c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f874c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f874c6: mov edi, ecx */
  edi = ecx;
/* f874c8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f874cf: je 0xf87517 */
  if (zf) goto L_f87517;
L_f874d1: /* f874d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f874d3: mov ecx, esi */
  ecx = esi;
/* f874d5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf874d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f874d8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f874db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f874de: mov dword ptr [edi + 0x74], ecx */
  W32((uint32_t)(edi + 0x74u), ecx);
/* f874e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f874e3: mov ecx, esi */
  ecx = esi;
/* f874e5: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf874e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f874e8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f874eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f874ee: mov dword ptr [edi + 0x78], eax */
  W32((uint32_t)(edi + 0x78u), eax);
/* f874f1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f874f3: mov ecx, esi */
  ecx = esi;
/* f874f5: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf874fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f874fb: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f874fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f87501: mov dword ptr [edi + 0x70], eax */
  W32((uint32_t)(edi + 0x70u), eax);
/* f87504: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87506: mov ecx, esi */
  ecx = esi;
/* f87508: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8750eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8750e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f87511: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f87514: mov dword ptr [edi + 0x6c], eax */
  W32((uint32_t)(edi + 0x6cu), eax);
L_f87517: /* f87517: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8751a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8751b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8751c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f87523: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87524: mov esp, ebp */
  esp = ebp;
/* f87526: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87527: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8752a(void) {
  LOAD_REGS();
L_f8752a: /* f8752a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8752d: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f87532: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f87535: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f87536: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f87539: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8753eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8753e(); return;
}

void f_f8753e(void) {
  LOAD_REGS();
L_f8753e: /* f8753e: push 0xfa3d64 */
  { uint32_t v = 0xfa3d64u; esp -= 4; W32(esp, v); }
/* f87543: push 0xfb9a4c */
  { uint32_t v = 0xfb9a4cu; esp -= 4; W32(esp, v); }
/* f87548: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8754eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8754e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f87551: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f87553: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f87555: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8755au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8755a: guest_badaddr(0xf8755a); return;
}

void f_f87590(void) {
  LOAD_REGS();
L_f87590: /* f87590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87594: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* f87598: mov dword ptr [ecx + 0x74], eax */
  W32((uint32_t)(ecx + 0x74u), eax);
/* f8759b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f8759f: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* f875a2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f875a6: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* f875a9: mov dword ptr [ecx + 0x6c], edx */
  W32((uint32_t)(ecx + 0x6cu), edx);
/* f875ac: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f875c0(void) {
  LOAD_REGS();
L_f875c0: /* f875c0: test byte ptr [ecx + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f875c4: je 0xf87632 */
  if (zf) goto L_f87632;
L_f875c6: /* f875c6: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* f875c9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f875cb: je 0xf87632 */
  if (zf) goto L_f87632;
L_f875cd: /* f875cd: cmp ecx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f875d0: je 0xf87632 */
  if (zf) goto L_f87632;
L_f875d2: /* f875d2: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f875d8: fcomp dword ptr [ecx + 0xa4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xa4u)));
  FPOP();
/* f875de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f875e0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f875e3: jne 0xf87632 */
  if (!zf) goto L_f87632;
L_f875e5: /* f875e5: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f875eb: fcomp dword ptr [ecx + 0xac] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xacu)));
  FPOP();
/* f875f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f875f3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f875f6: jp 0xf87632 */
  if (pf) goto L_f87632;
L_f875f8: /* f875f8: fld dword ptr [edx + 0xac] */
  { double v = F32((uint32_t)(edx + 0xacu)); FPUSH(v); }
/* f875fe: fcomp dword ptr [ecx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xa8u)));
  FPOP();
/* f87604: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87606: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f87609: jne 0xf87632 */
  if (!zf) goto L_f87632;
L_f8760b: /* f8760b: fld dword ptr [edx + 0xac] */
  { double v = F32((uint32_t)(edx + 0xacu)); FPUSH(v); }
/* f87611: fcomp dword ptr [ecx + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xb0u)));
  FPOP();
/* f87617: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87619: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8761c: jp 0xf87632 */
  if (pf) goto L_f87632;
L_f8761e: /* f8761e: mov eax, dword ptr [edx + 0x110] */
  eax = R32((uint32_t)(edx + 0x110u));
/* f87624: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f87626: jne 0xf87635 */
  if (!zf) goto L_f87635;
L_f87628: /* f87628: mov dword ptr [edx + 0x110], 0 */
  W32((uint32_t)(edx + 0x110u), 0x0u);
L_f87632: /* f87632: xor eax, eax */
  eax = 0;
/* f87634: ret  */
  esp += 4; SPILL(); return;
L_f87635: /* f87635: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87637: jne 0xf87632 */
  if (!zf) goto L_f87632;
L_f87639: /* f87639: mov dword ptr [edx + 0x110], ecx */
  W32((uint32_t)(edx + 0x110u), ecx);
/* f8763f: mov eax, 1 */
  eax = 0x1u;
/* f87644: ret  */
  esp += 4; SPILL(); return;
}

void f_f87680(void) {
  LOAD_REGS();
L_f87680: /* f87680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87681: mov ebp, esp */
  ebp = esp;
/* f87683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87685: push 0xf9a0f0 */
  { uint32_t v = 0xf9a0f0u; esp -= 4; W32(esp, v); }
/* f8768a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87698: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8769b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8769c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8769d: mov esi, ecx */
  esi = ecx;
/* f8769f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f876a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f876a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f876a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f876ae: je 0xf87718 */
  if (zf) goto L_f87718;
L_f876b0: /* f876b0: cmp byte ptr [esi + 0x30], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f876b4: je 0xf87718 */
  if (zf) goto L_f87718;
L_f876b6: /* f876b6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f876b9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f876bb: call 0xf979dc */
  esp -= 4; W32(esp, 0xf876c0u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f876c0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f876c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f876c4: call 0xf979dc */
  esp -= 4; W32(esp, 0xf876c9u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f876c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f876ca: mov ecx, esi */
  ecx = esi;
/* f876cc: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0xf876cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f876cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f876d1: je 0xf87718 */
  if (zf) goto L_f87718;
L_f876d3: /* f876d3: mov eax, esi */
  eax = esi;
/* f876d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f876d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f876df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f876e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f876e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f876e2: mov esp, ebp */
  esp = ebp;
/* f876e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f876e5: ret 8 */
  esp += 12; SPILL(); return;
L_f87718: /* f87718: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8771b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8771c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8771d: xor eax, eax */
  eax = 0;
/* f8771f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f87726: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87727: mov esp, ebp */
  esp = ebp;
/* f87729: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8772a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f876e8(void) {
  LOAD_REGS();
L_f876e8: /* f876e8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f876eb: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f876f0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f876f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f876f4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f876f7: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf876fcu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f876fc(); return;
}

void f_f876fc(void) {
  LOAD_REGS();
L_f876fc: /* f876fc: push 0xfa3da0 */
  { uint32_t v = 0xfa3da0u; esp -= 4; W32(esp, v); }
/* f87701: push 0xfb9a64 */
  { uint32_t v = 0xfb9a64u; esp -= 4; W32(esp, v); }
/* f87706: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8770cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8770c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8770f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f87711: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f87713: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf87718u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f87718: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8771b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8771c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8771d: xor eax, eax */
  eax = 0;
/* f8771f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f87726: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87727: mov esp, ebp */
  esp = ebp;
/* f87729: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8772a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f87760(void) {
  LOAD_REGS();
L_f87760: /* f87760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87761: mov ebp, esp */
  ebp = esp;
/* f87763: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87765: push 0xf9a100 */
  { uint32_t v = 0xf9a100u; esp -= 4; W32(esp, v); }
/* f8776a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87771: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87778: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8777b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8777e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f87781: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87782: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87783: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f87784: xor edi, edi */
  edi = 0;
/* f87786: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f87787: mov esi, ecx */
  esi = ecx;
/* f87789: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8778c: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8778f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87792: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f87795: jne 0xf877ab */
  if (!zf) goto L_f877ab;
L_f87797: /* f87797: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f8779a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8779b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8779c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8779f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f877a0: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f877a5: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf877abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f877ab: /* f877ab: mov eax, dword ptr [esi + 0xcc] */
  eax = R32((uint32_t)(esi + 0xccu));
/* f877b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f877b4: mov dword ptr [esi + 0xd4], edi */
  W32((uint32_t)(esi + 0xd4u), edi);
/* f877ba: mov dword ptr [esi + 0xd0], edi */
  W32((uint32_t)(esi + 0xd0u), edi);
/* f877c0: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f877c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f877c4: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* f877ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f877cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f877d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f877d3: mov esp, ebp */
  esp = ebp;
/* f877d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f877d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f877d9(void) {
  LOAD_REGS();
L_f877d9: /* f877d9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f877dc: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f877e1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f877e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f877e5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f877e8: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf877edu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f877ed(); return;
}

void f_f877ed(void) {
  LOAD_REGS();
L_f877ed: /* f877ed: push 0xfa3de0 */
  { uint32_t v = 0xfa3de0u; esp -= 4; W32(esp, v); }
/* f877f2: push 0xfb9a74 */
  { uint32_t v = 0xfb9a74u; esp -= 4; W32(esp, v); }
/* f877f7: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf877fdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f877fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f87800: xor edi, edi */
  edi = 0;
/* f87802: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f87803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f87804: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf87809u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f87809: guest_badaddr(0xf87809); return;
}

void f_f87840(void) {
  LOAD_REGS();
L_f87840: /* f87840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87841: mov ebp, esp */
  ebp = esp;
/* f87843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87845: push 0xf9a110 */
  { uint32_t v = 0xf9a110u; esp -= 4; W32(esp, v); }
/* f8784a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87858: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8785b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8785e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f87861: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87862: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f87863: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87864: mov esi, ecx */
  esi = ecx;
/* f87866: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87869: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8786c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8786d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87870: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f87877: jne 0xf8788e */
  if (!zf) goto L_f8788e;
L_f87879: /* f87879: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f8787c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8787d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8787f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f87882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87883: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f87888: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf8788eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8788e: /* f8788e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87890: mov ecx, esi */
  ecx = esi;
/* f87892: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0xf87898u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87898: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8789b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8789c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8789d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f878a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f878a5: mov esp, ebp */
  esp = ebp;
/* f878a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f878a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f878ab(void) {
  LOAD_REGS();
L_f878ab: /* f878ab: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f878ae: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f878b3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f878b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f878b7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f878ba: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf878bfu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f878bf(); return;
}

void f_f878bf(void) {
  LOAD_REGS();
L_f878bf: /* f878bf: push 0xfa3e28 */
  { uint32_t v = 0xfa3e28u; esp -= 4; W32(esp, v); }
/* f878c4: push 0xfb9a7c */
  { uint32_t v = 0xfb9a7cu; esp -= 4; W32(esp, v); }
/* f878c9: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf878cfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f878cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f878d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f878d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f878d6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf878dbu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f878db: guest_badaddr(0xf878db); return;
}

void f_f87910(void) {
  LOAD_REGS();
L_f87910: /* f87910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87911: mov ebp, esp */
  ebp = esp;
/* f87913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87915: push 0xf9a120 */
  { uint32_t v = 0xf9a120u; esp -= 4; W32(esp, v); }
/* f8791a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87928: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8792b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8792c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8792d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8792e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87931: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f87938: call 0xf71f69 */
  esp -= 4; W32(esp, 0xf8793du); SPILL(); f_f71f69(); if (g_unwind) return; RELOAD();
/* f8793d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8793f: je 0xf87957 */
  if (zf) goto L_f87957;
L_f87941: /* f87941: mov eax, 1 */
  eax = 0x1u;
/* f87946: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f87949: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f87950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f87951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f87952: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87953: mov esp, ebp */
  esp = ebp;
/* f87955: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87956: ret  */
  esp += 4; SPILL(); return;
L_f87957: /* f87957: mov eax, dword ptr [ecx + 0x1fc] */
  eax = R32((uint32_t)(ecx + 0x1fcu));
/* f8795d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8795f: je 0xf87984 */
  if (zf) goto L_f87984;
L_f87961: /* f87961: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* f87967: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87969: je 0xf87984 */
  if (zf) goto L_f87984;
L_f8796b: /* f8796b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8796d: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0xf87973u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87973: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f87976: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8797d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8797e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8797f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87980: mov esp, ebp */
  esp = ebp;
/* f87982: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87983: ret  */
  esp += 4; SPILL(); return;
L_f87984: /* f87984: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f87987: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f87988: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f87989: xor eax, eax */
  eax = 0;
/* f8798b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f87992: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87993: mov esp, ebp */
  esp = ebp;
/* f87995: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87996: ret  */
  esp += 4; SPILL(); return;
}

void f_f87997(void) {
  LOAD_REGS();
L_f87997: /* f87997: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8799a: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8799f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f879a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f879a3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f879a6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf879abu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f879ab(); return;
}

void f_f879ab(void) {
  LOAD_REGS();
L_f879ab: /* f879ab: push 0xfa3e90 */
  { uint32_t v = 0xfa3e90u; esp -= 4; W32(esp, v); }
/* f879b0: push 0xfb9c14 */
  { uint32_t v = 0xfb9c14u; esp -= 4; W32(esp, v); }
/* f879b5: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf879bbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f879bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f879be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f879c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f879c2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf879c7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f879c7: guest_badaddr(0xf879c7); return;
}

void f_f87a00(void) {
  LOAD_REGS();
L_f87a00: /* f87a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f87a01: mov ebp, esp */
  ebp = esp;
/* f87a03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f87a05: push 0xf9a130 */
  { uint32_t v = 0xf9a130u; esp -= 4; W32(esp, v); }
/* f87a0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f87a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87a11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f87a18: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f87a1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87a1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87a1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f87a1e: xor ebx, ebx */
  ebx = 0;
/* f87a20: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f87a23: mov esi, ecx */
  esi = ecx;
/* f87a25: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f87a28: call 0xf71960 */
  esp -= 4; W32(esp, 0xf87a2du); SPILL(); f_f71960(); if (g_unwind) return; RELOAD();
/* f87a2d: test byte ptr [esi + 0x1f8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f87a34: jne 0xf87b6c */
  if (!zf) goto L_f87b6c;
L_f87a3a: /* f87a3a: mov al, byte ptr [esi + 0x1f0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1f0u))) & 0xffu);
/* f87a40: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f87a42: je 0xf87a60 */
  if (zf) goto L_f87a60;
L_f87a44: /* f87a44: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f87a46: je 0xf87a60 */
  if (zf) goto L_f87a60;
L_f87a48: /* f87a48: push 0xea6 */
  { uint32_t v = 0xea6u; esp -= 4; W32(esp, v); }
/* f87a4d: push 0xfb9c68 */
  { uint32_t v = 0xfb9c68u; esp -= 4; W32(esp, v); }
/* f87a52: push 0xfb9c78 */
  { uint32_t v = 0xfb9c78u; esp -= 4; W32(esp, v); }
/* f87a57: call dword ptr [0xfce328] */
  esp -= 4; W32(esp, 0xf87a5du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f87a5d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f87a60: /* f87a60: cmp byte ptr [esi + 0x1f0], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f87a66: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f87a68: mov ecx, esi */
  ecx = esi;
/* f87a6a: jne 0xf87ac1 */
  if (!zf) goto L_f87ac1;
L_f87a6c: /* f87a6c: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf87a72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87a72: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f87a75: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f87a78: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87a7a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f87a7d: mov ecx, esi */
  ecx = esi;
/* f87a7f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf87a82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87a82: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* f87a85: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f87a88: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f87a8a: mov ecx, esi */
  ecx = esi;
/* f87a8c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f87a8f: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf87a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87a95: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87a97: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f87a9a: mov ecx, esi */
  ecx = esi;
/* f87a9c: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf87a9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87a9f: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f87aa2: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f87aa8: mov edx, 3 */
  edx = 0x3u;
/* f87aad: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f87ab3: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f87ab6: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f87ab9: fadd dword ptr [esi + 0x1fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1fcu)));
/* f87abf: jmp 0xf87b14 */
  goto L_f87b14;
L_f87ac1: /* f87ac1: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf87ac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87ac7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f87aca: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87acc: mov ecx, esi */
  ecx = esi;
/* f87ace: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf87ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87ad1: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f87ad4: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f87ada: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f87adc: mov ecx, esi */
  ecx = esi;
/* f87ade: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f87ae4: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f87ae7: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f87aea: fadd dword ptr [esi + 0x1fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1fcu)));
/* f87af0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f87af3: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf87af9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87af9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f87afb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f87afe: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f87b01: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f87b04: mov ecx, esi */
  ecx = esi;
/* f87b06: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf87b09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87b09: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f87b0c: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f87b0f: mov edx, 5 */
  edx = 0x5u;
L_f87b14: /* f87b14: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f87b17: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f87b1d: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* f87b20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87b22: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f87b25: jne 0xf87b6a */
  if (!zf) goto L_f87b6a;
L_f87b27: /* f87b27: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f87b2d: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f87b30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87b32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f87b35: jp 0xf87b6a */
  if (pf) goto L_f87b6a;
L_f87b37: /* f87b37: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f87b3d: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* f87b40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87b42: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f87b45: jne 0xf87b6a */
  if (!zf) goto L_f87b6a;
L_f87b47: /* f87b47: fcomp dword ptr [ecx + 0xac] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xacu)));
  FPOP();
/* f87b4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87b4f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f87b52: jne 0xf87b6c */
  if (!zf) goto L_f87b6c;
L_f87b54: /* f87b54: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* f87b57: xor eax, eax */
  eax = 0;
/* f87b59: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f87b5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f87b63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f87b64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f87b65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87b66: mov esp, ebp */
  esp = ebp;
/* f87b68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87b69: ret  */
  esp += 4; SPILL(); return;
L_f87b6a: /* f87b6a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f87b6c: /* f87b6c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f87b6f: mov dword ptr [esi + 0x7c], ebx */
  W32((uint32_t)(esi + 0x7cu), ebx);
/* f87b72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f87b73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f87b74: xor eax, eax */
  eax = 0;
/* f87b76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f87b7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f87b7e: mov esp, ebp */
  esp = ebp;
/* f87b80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f87b81: ret  */
  esp += 4; SPILL(); return;
}

void f_f87b82(void) {
  LOAD_REGS();
L_f87b82: /* f87b82: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f87b85: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f87b8a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f87b8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f87b8e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f87b91: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf87b96u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f87b96(); return;
}

void f_f87b96(void) {
  LOAD_REGS();
L_f87b96: /* f87b96: push 0xfa3ed0 */
  { uint32_t v = 0xfa3ed0u; esp -= 4; W32(esp, v); }
/* f87b9b: push 0xfb9cc4 */
  { uint32_t v = 0xfb9cc4u; esp -= 4; W32(esp, v); }
/* f87ba0: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf87ba6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f87ba6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f87ba9: xor ebx, ebx */
  ebx = 0;
/* f87bab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87bac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f87bad: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf87bb2u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f87bb2: guest_badaddr(0xf87bb2); return;
}

void f_f87c30(void) {
  LOAD_REGS();
L_f87c30: /* f87c30: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf87c36u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f87c36: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f87c3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87c3b: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf87c41u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f87c41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87c42: call dword ptr [0xfce3e8] */
  esp -= 4; W32(esp, 0xf87c48u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f87c48: imul eax, dword ptr [0xfb9d68] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xfb9d68u)));
  eax = (uint32_t)r;
  }
/* f87c4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f87c52: ret  */
  esp += 4; SPILL(); return;
}

void f_f87c70(void) {
  LOAD_REGS();
L_f87c70: /* f87c70: mov eax, ecx */
  eax = ecx;
/* f87c72: xor ecx, ecx */
  ecx = 0;
/* f87c74: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f87c76: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f87c79: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f87c7c: ret  */
  esp += 4; SPILL(); return;
}

void f_f87c90(void) {
  LOAD_REGS();
L_f87c90: /* f87c90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87c94: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f87c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87c97: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf87c9du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f87c9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87cb0(void) {
  LOAD_REGS();
L_f87cb0: /* f87cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87cb4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f87cb6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* f87cb9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f87cbc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87cd0(void) {
  LOAD_REGS();
L_f87cd0: /* f87cd0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f87cd2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f87cd6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* f87cd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87cf0(void) {
  LOAD_REGS();
L_f87cf0: /* f87cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87cf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87cf5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f87cf7: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf87cfdu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f87cfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87d10(void) {
  LOAD_REGS();
L_f87d10: /* f87d10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87d14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87d15: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f87d17: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf87d1du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f87d1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87d30(void) {
  LOAD_REGS();
L_f87d30: /* f87d30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f87d34: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* f87d38: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f87d3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87d3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f87d3c: call dword ptr [0xfce3f4] */
  esp -= 4; W32(esp, 0xf87d42u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* f87d42: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f87d60(void) {
  LOAD_REGS();
L_f87d60: /* f87d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87d64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87d65: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f87d67: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf87d6du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f87d6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87d80(void) {
  LOAD_REGS();
L_f87d80: /* f87d80: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* f87d83: xor eax, eax */
  eax = 0;
/* f87d85: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87d87: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f87d8a: ret  */
  esp += 4; SPILL(); return;
}

void f_f87da0(void) {
  LOAD_REGS();
L_f87da0: /* f87da0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f87da3: ret  */
  esp += 4; SPILL(); return;
}

void f_f87dc0(void) {
  LOAD_REGS();
L_f87dc0: /* f87dc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87dc4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f87dc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f87dc7: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf87dcdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f87dcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f87de0(void) {
  LOAD_REGS();
L_f87de0: /* f87de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f87de1: mov esi, ecx */
  esi = ecx;
/* f87de3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f87de6: je 0xf87e38 */
  if (zf) goto L_f87e38;
L_f87de8: /* f87de8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f87deb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87ded: je 0xf87e20 */
  if (zf) goto L_f87e20;
L_f87def: /* f87def: nop  */
L_f87df0: /* f87df0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f87df3: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* f87df6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87df8: mov edx, dword ptr [0xfce3f8] */
  edx = R32((uint32_t)(0xfce3f8u));
/* f87dfe: je 0xf87e0b */
  if (zf) goto L_f87e0b;
L_f87e00: /* f87e00: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f87e02: je 0xf87e38 */
  if (zf) goto L_f87e38;
L_f87e04: /* f87e04: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f87e07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87e09: jne 0xf87e00 */
  if (!zf) goto L_f87e00;
L_f87e0b: /* f87e0b: xor eax, eax */
  eax = 0;
/* f87e0d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87e0f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f87e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87e14: jne 0xf87e38 */
  if (!zf) goto L_f87e38;
L_f87e16: /* f87e16: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f87e19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87e1b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f87e1e: jne 0xf87df0 */
  if (!zf) goto L_f87df0;
L_f87e20: /* f87e20: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f87e22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f87e24: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf87e27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f87e27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87e29: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f87e2b: je 0xf87e33 */
  if (zf) goto L_f87e33;
L_f87e2d: /* f87e2d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* f87e30: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_f87e33: /* f87e33: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f87e36: jne 0xf87de8 */
  if (!zf) goto L_f87de8;
L_f87e38: /* f87e38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f87e39: ret  */
  esp += 4; SPILL(); return;
}

void f_f87e60(void) {
  LOAD_REGS();
L_f87e60: /* f87e60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f87e64: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f87e68: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f87e6a: jl 0xf87e76 */
  if ((sf != of)) goto L_f87e76;
L_f87e6c: /* f87e6c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f87e70: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f87e72: jge 0xf87e76 */
  if ((sf == of)) goto L_f87e76;
L_f87e74: /* f87e74: mov eax, ecx */
  eax = ecx;
L_f87e76: /* f87e76: ret  */
  esp += 4; SPILL(); return;
}

void f_f87e90(void) {
  LOAD_REGS();
L_f87e90: /* f87e90: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f87e94: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* f87e98: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87e9a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f87e9d: jp 0xf87ea4 */
  if (pf) goto L_f87ea4;
L_f87e9f: /* f87e9f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f87ea3: ret  */
  esp += 4; SPILL(); return;
L_f87ea4: /* f87ea4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* f87ea8: ret  */
  esp += 4; SPILL(); return;
}

void f_f87ec0(void) {
  LOAD_REGS();
L_f87ec0: /* f87ec0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f87ec4: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* f87ec8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87eca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f87ecd: jp 0xf87ed4 */
  if (pf) goto L_f87ed4;
L_f87ecf: /* f87ecf: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* f87ed3: ret  */
  esp += 4; SPILL(); return;
L_f87ed4: /* f87ed4: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f87ed8: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* f87edc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f87ede: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f87ee1: jp 0xf87ee8 */
  if (pf) goto L_f87ee8;
L_f87ee3: /* f87ee3: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f87ee7: ret  */
  esp += 4; SPILL(); return;
L_f87ee8: /* f87ee8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* f87eec: ret  */
  esp += 4; SPILL(); return;
}

void f_f87f00(void) {
  LOAD_REGS();
L_f87f00: /* f87f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87f04: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f87f08: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f87f0a: jge 0xf87f0e */
  if ((sf == of)) goto L_f87f0e;
L_f87f0c: /* f87f0c: mov eax, ecx */
  eax = ecx;
L_f87f0e: /* f87f0e: ret  */
  esp += 4; SPILL(); return;
}

void f_f87f20(void) {
  LOAD_REGS();
L_f87f20: /* f87f20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87f24: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f87f28: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f87f2a: jle 0xf87f2e */
  if ((zf || sf != of)) goto L_f87f2e;
L_f87f2c: /* f87f2c: mov eax, ecx */
  eax = ecx;
L_f87f2e: /* f87f2e: ret  */
  esp += 4; SPILL(); return;
}
