#include "recomp.h"
#include "rec_mod.h"

void f_4704a9(void) {
  LOAD_REGS();
L_4704a9: /* 4704a9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4704ac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4704ae: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4704b1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4704b3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4704b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4704b8: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4704bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4704bc: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4704c1u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4704c1: mov eax, 0x4704c7 */
  eax = 0x4704c7u;
/* 4704c6: ret  */
  esp += 4; SPILL(); return;
}

void f_4704c7(void) {
  LOAD_REGS();
L_4704c7: /* 4704c7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4704ca: xor ebx, ebx */
  ebx = 0;
/* 4704cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4704ce: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4704d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4704d2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4704d5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4704d7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4704da: call 0x461453 */
  esp -= 4; W32(esp, 0x4704dfu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4704c7u: guest_unwind_done(); RELOAD(); goto L_4704c7; } return; } RELOAD();
/* 4704df: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4704e3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4704e6: call 0x462246 */
  esp -= 4; W32(esp, 0x4704ebu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4704c7u: guest_unwind_done(); RELOAD(); goto L_4704c7; } return; } RELOAD();
/* 4704eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4704ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4704ef: mov eax, esi */
  eax = esi;
/* 4704f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4704f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4704f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4704fa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4704fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4704fe(void) {
  LOAD_REGS();
L_4704fe: /* 4704fe: mov eax, 0x48c50f */
  eax = 0x48c50fu;
/* 470503: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470508u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470508: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47050b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47050c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47050d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47050e: mov esi, ecx */
  esi = ecx;
/* 470510: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470513: xor ebx, ebx */
  ebx = 0;
/* 470515: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470516: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470519: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47051c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47051f: call 0x462178 */
  esp -= 4; W32(esp, 0x470524u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470524: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470527: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47052a: je 0x4705b3 */
  if (zf) goto L_4705b3;
L_470530: /* 470530: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470533: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470534: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470536: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470539: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47053b: call 0x464a5a */
  esp -= 4; W32(esp, 0x470540u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470541: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470545: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x47054au); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 47054a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47054b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47054e: mov edi, eax */
  edi = eax;
/* 470550: call 0x461389 */
  esp -= 4; W32(esp, 0x470555u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470555: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470557: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47055a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47055d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47055f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 470562: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470565: xor ecx, ecx */
  ecx = 0;
/* 470567: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 47056b: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 47056e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470572: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470574: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470575: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470578: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47057b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47057c: mov ecx, edi */
  ecx = edi;
/* 47057e: call 0x468a7e */
  esp -= 4; W32(esp, 0x470583u); SPILL(); f_468a7e(); if (g_unwind) return; RELOAD();
/* 470583: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470585: je 0x4705b3 */
  if (zf) goto L_4705b3;
L_470587: /* 470587: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 47058e: jmp 0x4705b3 */
  goto L_4705b3;
L_4705b3: /* 4705b3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4705b5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4705b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4705b9: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4705bc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4705be: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4705c1: call 0x461453 */
  esp -= 4; W32(esp, 0x4705c6u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4705c6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4705ca: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4705cd: call 0x462246 */
  esp -= 4; W32(esp, 0x4705d2u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4705d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4705d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4705d6: mov eax, esi */
  eax = esi;
/* 4705d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4705d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4705e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4705e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4705e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_470590(void) {
  LOAD_REGS();
L_470590: /* 470590: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470593: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470595: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470598: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47059a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47059d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47059f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4705a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4705a3: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4705a8u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4705a8: mov eax, 0x4705ae */
  eax = 0x4705aeu;
/* 4705ad: ret  */
  esp += 4; SPILL(); return;
}

void f_4705ae(void) {
  LOAD_REGS();
L_4705ae: /* 4705ae: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4705b1: xor ebx, ebx */
  ebx = 0;
/* 4705b3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4705b5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4705b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4705b9: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4705bc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4705be: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4705c1: call 0x461453 */
  esp -= 4; W32(esp, 0x4705c6u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4705aeu: guest_unwind_done(); RELOAD(); goto L_4705ae; } return; } RELOAD();
/* 4705c6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4705ca: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4705cd: call 0x462246 */
  esp -= 4; W32(esp, 0x4705d2u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4705aeu: guest_unwind_done(); RELOAD(); goto L_4705ae; } return; } RELOAD();
/* 4705d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4705d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4705d6: mov eax, esi */
  eax = esi;
/* 4705d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4705d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4705e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4705e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4705e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4705e5(void) {
  LOAD_REGS();
L_4705e5: /* 4705e5: mov eax, 0x48c529 */
  eax = 0x48c529u;
/* 4705ea: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4705efu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4705ef: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4705f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4705f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4705f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4705f5: mov esi, ecx */
  esi = ecx;
/* 4705f7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4705fa: xor ebx, ebx */
  ebx = 0;
/* 4705fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4705fd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470600: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470603: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 470606: call 0x462178 */
  esp -= 4; W32(esp, 0x47060bu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 47060b: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47060e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470611: je 0x47069a */
  if (zf) goto L_47069a;
L_470617: /* 470617: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47061a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47061b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47061d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470620: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470622: call 0x464a5a */
  esp -= 4; W32(esp, 0x470627u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470628: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47062c: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x470631u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 470631: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470632: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470635: mov edi, eax */
  edi = eax;
/* 470637: call 0x461389 */
  esp -= 4; W32(esp, 0x47063cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47063c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47063e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470641: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 470644: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470646: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 470649: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 47064c: xor ecx, ecx */
  ecx = 0;
/* 47064e: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470652: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470655: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470659: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47065a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47065b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47065c: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47065f: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 470662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470663: mov ecx, edi */
  ecx = edi;
/* 470665: call 0x468c46 */
  esp -= 4; W32(esp, 0x47066au); SPILL(); f_468c46(); if (g_unwind) return; RELOAD();
/* 47066a: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47066c: je 0x47069a */
  if (zf) goto L_47069a;
L_47066e: /* 47066e: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470675: jmp 0x47069a */
  goto L_47069a;
L_47069a: /* 47069a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47069c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47069f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4706a0: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4706a3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4706a5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4706a8: call 0x461453 */
  esp -= 4; W32(esp, 0x4706adu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4706ad: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4706b1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4706b4: call 0x462246 */
  esp -= 4; W32(esp, 0x4706b9u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4706b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4706bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4706bd: mov eax, esi */
  eax = esi;
/* 4706bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4706c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4706c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4706c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4706c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_470677(void) {
  LOAD_REGS();
L_470677: /* 470677: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47067a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47067c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47067f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470681: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470684: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470686: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470689: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47068a: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47068fu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47068f: mov eax, 0x470695 */
  eax = 0x470695u;
/* 470694: ret  */
  esp += 4; SPILL(); return;
}

void f_470695(void) {
  LOAD_REGS();
L_470695: /* 470695: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470698: xor ebx, ebx */
  ebx = 0;
/* 47069a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47069c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47069f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4706a0: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4706a3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4706a5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4706a8: call 0x461453 */
  esp -= 4; W32(esp, 0x4706adu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470695u: guest_unwind_done(); RELOAD(); goto L_470695; } return; } RELOAD();
/* 4706ad: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4706b1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4706b4: call 0x462246 */
  esp -= 4; W32(esp, 0x4706b9u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470695u: guest_unwind_done(); RELOAD(); goto L_470695; } return; } RELOAD();
/* 4706b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4706bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4706bd: mov eax, esi */
  eax = esi;
/* 4706bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4706c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4706c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4706c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4706c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4706cc(void) {
  LOAD_REGS();
L_4706cc: /* 4706cc: mov eax, 0x48c543 */
  eax = 0x48c543u;
/* 4706d1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4706d6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4706d6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4706d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4706da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4706db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4706dc: mov esi, ecx */
  esi = ecx;
/* 4706de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4706e1: xor ebx, ebx */
  ebx = 0;
/* 4706e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4706e4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4706e7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4706ea: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4706ed: call 0x462178 */
  esp -= 4; W32(esp, 0x4706f2u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4706f2: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4706f5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4706f8: je 0x470783 */
  if (zf) goto L_470783;
L_4706fe: /* 4706fe: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470702: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470704: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470707: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470709: call 0x464a5a */
  esp -= 4; W32(esp, 0x47070eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47070e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47070f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470713: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x470718u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 470718: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470719: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47071c: mov edi, eax */
  edi = eax;
/* 47071e: call 0x461389 */
  esp -= 4; W32(esp, 0x470723u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470723: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 470726: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470728: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47072b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47072d: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470730: xor ecx, ecx */
  ecx = 0;
/* 470732: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470736: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470739: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47073d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47073e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47073f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 470742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470743: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470744: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470745: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470748: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 47074b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47074c: mov ecx, edi */
  ecx = edi;
/* 47074e: call 0x468c6a */
  esp -= 4; W32(esp, 0x470753u); SPILL(); f_468c6a(); if (g_unwind) return; RELOAD();
/* 470753: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470755: je 0x470783 */
  if (zf) goto L_470783;
L_470757: /* 470757: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 47075e: jmp 0x470783 */
  goto L_470783;
L_470783: /* 470783: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470785: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470788: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470789: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47078c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47078e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470791: call 0x461453 */
  esp -= 4; W32(esp, 0x470796u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470796: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47079a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47079d: call 0x462246 */
  esp -= 4; W32(esp, 0x4707a2u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4707a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4707a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4707a6: mov eax, esi */
  eax = esi;
/* 4707a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4707a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4707b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4707b1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4707b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470760(void) {
  LOAD_REGS();
L_470760: /* 470760: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470763: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470765: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470768: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47076a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47076d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47076f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470773: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470778u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470778: mov eax, 0x47077e */
  eax = 0x47077eu;
/* 47077d: ret  */
  esp += 4; SPILL(); return;
}

void f_47077e(void) {
  LOAD_REGS();
L_47077e: /* 47077e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470781: xor ebx, ebx */
  ebx = 0;
/* 470783: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470785: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470788: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470789: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47078c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47078e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470791: call 0x461453 */
  esp -= 4; W32(esp, 0x470796u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47077eu: guest_unwind_done(); RELOAD(); goto L_47077e; } return; } RELOAD();
/* 470796: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47079a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47079d: call 0x462246 */
  esp -= 4; W32(esp, 0x4707a2u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47077eu: guest_unwind_done(); RELOAD(); goto L_47077e; } return; } RELOAD();
/* 4707a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4707a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4707a6: mov eax, esi */
  eax = esi;
/* 4707a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4707a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4707b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4707b1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4707b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4707b5(void) {
  LOAD_REGS();
L_4707b5: /* 4707b5: mov eax, 0x48c55d */
  eax = 0x48c55du;
/* 4707ba: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4707bfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4707bf: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4707c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4707c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4707c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4707c5: mov esi, ecx */
  esi = ecx;
/* 4707c7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4707ca: xor ebx, ebx */
  ebx = 0;
/* 4707cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4707cd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4707d0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4707d3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4707d6: call 0x462178 */
  esp -= 4; W32(esp, 0x4707dbu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4707db: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4707de: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4707e1: je 0x47086c */
  if (zf) goto L_47086c;
L_4707e7: /* 4707e7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4707ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4707eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4707ed: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4707f0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4707f2: call 0x464a5a */
  esp -= 4; W32(esp, 0x4707f7u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4707f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4707f8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4707fc: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x470801u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 470801: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470802: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470805: mov edi, eax */
  edi = eax;
/* 470807: call 0x461389 */
  esp -= 4; W32(esp, 0x47080cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47080c: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 47080f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470811: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470814: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470816: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470819: xor ecx, ecx */
  ecx = 0;
/* 47081b: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 47081f: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470822: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470826: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470828: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 47082b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47082c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47082d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47082e: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470831: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 470834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470835: mov ecx, edi */
  ecx = edi;
/* 470837: call 0x468c6a */
  esp -= 4; W32(esp, 0x47083cu); SPILL(); f_468c6a(); if (g_unwind) return; RELOAD();
/* 47083c: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47083e: je 0x47086c */
  if (zf) goto L_47086c;
L_470840: /* 470840: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470847: jmp 0x47086c */
  goto L_47086c;
L_47086c: /* 47086c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47086e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470871: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470872: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470875: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470877: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47087a: call 0x461453 */
  esp -= 4; W32(esp, 0x47087fu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47087f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470883: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470886: call 0x462246 */
  esp -= 4; W32(esp, 0x47088bu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 47088b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47088e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47088f: mov eax, esi */
  eax = esi;
/* 470891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470892: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470899: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47089a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47089b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_470849(void) {
  LOAD_REGS();
L_470849: /* 470849: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47084c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47084e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470851: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470853: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470856: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470858: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47085b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47085c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470861u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470861: mov eax, 0x470867 */
  eax = 0x470867u;
/* 470866: ret  */
  esp += 4; SPILL(); return;
}

void f_470867(void) {
  LOAD_REGS();
L_470867: /* 470867: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47086a: xor ebx, ebx */
  ebx = 0;
/* 47086c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47086e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470871: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470872: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470875: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470877: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47087a: call 0x461453 */
  esp -= 4; W32(esp, 0x47087fu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470867u: guest_unwind_done(); RELOAD(); goto L_470867; } return; } RELOAD();
/* 47087f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470883: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470886: call 0x462246 */
  esp -= 4; W32(esp, 0x47088bu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470867u: guest_unwind_done(); RELOAD(); goto L_470867; } return; } RELOAD();
/* 47088b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47088e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47088f: mov eax, esi */
  eax = esi;
/* 470891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470892: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470899: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47089a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47089b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47089e(void) {
  LOAD_REGS();
L_47089e: /* 47089e: mov eax, 0x48c577 */
  eax = 0x48c577u;
/* 4708a3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4708a8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4708a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4708ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4708ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4708ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4708ae: mov esi, ecx */
  esi = ecx;
/* 4708b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4708b3: xor ebx, ebx */
  ebx = 0;
/* 4708b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4708b6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4708b9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4708bc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4708bf: call 0x462178 */
  esp -= 4; W32(esp, 0x4708c4u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4708c4: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4708c7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4708ca: je 0x470955 */
  if (zf) goto L_470955;
L_4708d0: /* 4708d0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4708d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4708d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4708d6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4708d9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4708db: call 0x464a5a */
  esp -= 4; W32(esp, 0x4708e0u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4708e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4708e1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4708e5: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x4708eau); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 4708ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4708eb: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4708ee: mov edi, eax */
  edi = eax;
/* 4708f0: call 0x461389 */
  esp -= 4; W32(esp, 0x4708f5u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4708f5: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4708f8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4708fa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4708fd: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4708ff: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470902: xor ecx, ecx */
  ecx = 0;
/* 470904: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470908: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 47090b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47090f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470911: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 470914: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470916: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470917: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47091a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47091d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47091e: mov ecx, edi */
  ecx = edi;
/* 470920: call 0x468c90 */
  esp -= 4; W32(esp, 0x470925u); SPILL(); f_468c90(); if (g_unwind) return; RELOAD();
/* 470925: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470927: je 0x470955 */
  if (zf) goto L_470955;
L_470929: /* 470929: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470930: jmp 0x470955 */
  goto L_470955;
L_470955: /* 470955: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470957: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47095a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47095b: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47095e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470960: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470963: call 0x461453 */
  esp -= 4; W32(esp, 0x470968u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470968: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47096c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47096f: call 0x462246 */
  esp -= 4; W32(esp, 0x470974u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470974: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470977: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470978: mov eax, esi */
  eax = esi;
/* 47097a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47097b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470982: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470983: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470984: ret 8 */
  esp += 12; SPILL(); return;
}

void f_470932(void) {
  LOAD_REGS();
L_470932: /* 470932: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470935: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470937: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47093a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47093c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47093f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470941: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470945: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47094au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47094a: mov eax, 0x470950 */
  eax = 0x470950u;
/* 47094f: ret  */
  esp += 4; SPILL(); return;
}

void f_470950(void) {
  LOAD_REGS();
L_470950: /* 470950: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470953: xor ebx, ebx */
  ebx = 0;
/* 470955: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470957: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47095a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47095b: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47095e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470960: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470963: call 0x461453 */
  esp -= 4; W32(esp, 0x470968u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470950u: guest_unwind_done(); RELOAD(); goto L_470950; } return; } RELOAD();
/* 470968: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47096c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47096f: call 0x462246 */
  esp -= 4; W32(esp, 0x470974u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470950u: guest_unwind_done(); RELOAD(); goto L_470950; } return; } RELOAD();
/* 470974: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470977: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470978: mov eax, esi */
  eax = esi;
/* 47097a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47097b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470982: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470983: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470984: ret 8 */
  esp += 12; SPILL(); return;
}

void f_470987(void) {
  LOAD_REGS();
L_470987: /* 470987: mov eax, 0x48c591 */
  eax = 0x48c591u;
/* 47098c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470991u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470991: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470994: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470995: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470996: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470997: mov esi, ecx */
  esi = ecx;
/* 470999: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47099c: xor ebx, ebx */
  ebx = 0;
/* 47099e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47099f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4709a2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4709a5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4709a8: call 0x462178 */
  esp -= 4; W32(esp, 0x4709adu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4709ad: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4709b0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4709b3: je 0x470a39 */
  if (zf) goto L_470a39;
L_4709b9: /* 4709b9: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4709bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4709bd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4709bf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4709c2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4709c4: call 0x464a5a */
  esp -= 4; W32(esp, 0x4709c9u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4709c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4709ca: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4709ce: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x4709d3u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 4709d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4709d4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4709d7: mov edi, eax */
  edi = eax;
/* 4709d9: call 0x461389 */
  esp -= 4; W32(esp, 0x4709deu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4709de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4709e0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4709e3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4709e6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4709e8: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 4709eb: xor ecx, ecx */
  ecx = 0;
/* 4709ed: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 4709f1: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 4709f4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4709f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4709f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4709fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4709fb: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4709fe: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 470a01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470a02: mov ecx, edi */
  ecx = edi;
/* 470a04: call 0x468aa2 */
  esp -= 4; W32(esp, 0x470a09u); SPILL(); f_468aa2(); if (g_unwind) return; RELOAD();
/* 470a09: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470a0b: je 0x470a39 */
  if (zf) goto L_470a39;
L_470a0d: /* 470a0d: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470a14: jmp 0x470a39 */
  goto L_470a39;
L_470a39: /* 470a39: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470a3b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470a3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470a3f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470a42: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470a44: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470a47: call 0x461453 */
  esp -= 4; W32(esp, 0x470a4cu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470a4c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470a50: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470a53: call 0x462246 */
  esp -= 4; W32(esp, 0x470a58u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470a58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470a5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470a5c: mov eax, esi */
  eax = esi;
/* 470a5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470a5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470a66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470a67: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470a68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470a16(void) {
  LOAD_REGS();
L_470a16: /* 470a16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470a19: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470a1b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470a1e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470a20: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470a23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470a25: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470a28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470a29: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470a2eu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470a2e: mov eax, 0x470a34 */
  eax = 0x470a34u;
/* 470a33: ret  */
  esp += 4; SPILL(); return;
}

void f_470a34(void) {
  LOAD_REGS();
L_470a34: /* 470a34: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470a37: xor ebx, ebx */
  ebx = 0;
/* 470a39: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470a3b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470a3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470a3f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470a42: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470a44: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470a47: call 0x461453 */
  esp -= 4; W32(esp, 0x470a4cu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470a34u: guest_unwind_done(); RELOAD(); goto L_470a34; } return; } RELOAD();
/* 470a4c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470a50: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470a53: call 0x462246 */
  esp -= 4; W32(esp, 0x470a58u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470a34u: guest_unwind_done(); RELOAD(); goto L_470a34; } return; } RELOAD();
/* 470a58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470a5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470a5c: mov eax, esi */
  eax = esi;
/* 470a5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470a5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470a66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470a67: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470a68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470a6b(void) {
  LOAD_REGS();
L_470a6b: /* 470a6b: mov eax, 0x48c5a3 */
  eax = 0x48c5a3u;
/* 470a70: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470a75u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470a75: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470a78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470a79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470a7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470a7b: mov esi, ecx */
  esi = ecx;
/* 470a7d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470a80: xor ebx, ebx */
  ebx = 0;
/* 470a82: xor edi, edi */
  edi = 0;
/* 470a84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470a85: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470a88: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 470a8b: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 470a8e: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 470a91: call 0x462178 */
  esp -= 4; W32(esp, 0x470a96u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470a96: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470a99: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470a9c: je 0x470af1 */
  if (zf) goto L_470af1;
L_470a9e: /* 470a9e: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 470aa1: je 0x470af1 */
  if (zf) goto L_470af1;
L_470aa3: /* 470aa3: mov dword ptr [ebp - 0x18], 0xffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffu);
L_470aaa: /* 470aaa: cmp word ptr [ebp - 0x18], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe8u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 470aaf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 470ab2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470ab6: jne 0x470abf */
  if (!zf) goto L_470abf;
L_470ab8: /* 470ab8: call 0x4657fc */
  esp -= 4; W32(esp, 0x470abdu); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
/* 470abd: jmp 0x470ac4 */
  goto L_470ac4;
L_470abf: /* 470abf: call 0x465c69 */
  esp -= 4; W32(esp, 0x470ac4u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
L_470ac4: /* 470ac4: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 470ac8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 470acb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470ace: je 0x470af1 */
  if (zf) goto L_470af1;
L_470ad0: /* 470ad0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470ad2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470ad5: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470ad8: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 470adc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 470ae0: call 0x4619f2 */
  esp -= 4; W32(esp, 0x470ae5u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 470ae5: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 470ae9: jne 0x470b58 */
  if (!zf) goto L_470b58;
L_470aeb: /* 470aeb: or edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 470aee: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_470af1: /* 470af1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470af3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470af6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470af8: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470afb: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 470afe: jne 0x470b03 */
  if (!zf) goto L_470b03;
L_470b00: /* 470b00: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_470b03: /* 470b03: mov eax, edi */
  eax = edi;
/* 470b05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470b07: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470b09: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470b0c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470b0e: call 0x461453 */
  esp -= 4; W32(esp, 0x470b13u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470b13: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470b17: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470b1a: call 0x462246 */
  esp -= 4; W32(esp, 0x470b1fu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470b1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470b22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470b23: mov eax, esi */
  eax = esi;
/* 470b25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470b26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470b2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470b2e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470b2f: ret 4 */
  esp += 8; SPILL(); return;
L_470b58: /* 470b58: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470b5b: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 470b5f: jmp 0x470aaa */
  goto L_470aaa;
}

void f_470b32(void) {
  LOAD_REGS();
L_470b32: /* 470b32: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 470b35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470b37: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470b3a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470b3c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470b3f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470b41: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470b44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470b45: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470b4au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470b4a: mov eax, 0x470b50 */
  eax = 0x470b50u;
/* 470b4f: ret  */
  esp += 4; SPILL(); return;
}

void f_470b50(void) {
  LOAD_REGS();
  goto L_470b50;
L_470aaa: /* 470aaa: cmp word ptr [ebp - 0x18], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe8u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 470aaf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 470ab2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470ab6: jne 0x470abf */
  if (!zf) goto L_470abf;
L_470ab8: /* 470ab8: call 0x4657fc */
  esp -= 4; W32(esp, 0x470abdu); SPILL(); f_4657fc(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470b50u: guest_unwind_done(); RELOAD(); goto L_470b50; } return; } RELOAD();
/* 470abd: jmp 0x470ac4 */
  goto L_470ac4;
L_470abf: /* 470abf: call 0x465c69 */
  esp -= 4; W32(esp, 0x470ac4u); SPILL(); f_465c69(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470b50u: guest_unwind_done(); RELOAD(); goto L_470b50; } return; } RELOAD();
L_470ac4: /* 470ac4: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 470ac8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 470acb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470ace: je 0x470af1 */
  if (zf) goto L_470af1;
L_470ad0: /* 470ad0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470ad2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470ad5: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470ad8: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 470adc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 470ae0: call 0x4619f2 */
  esp -= 4; W32(esp, 0x470ae5u); SPILL(); f_4619f2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470b50u: guest_unwind_done(); RELOAD(); goto L_470b50; } return; } RELOAD();
/* 470ae5: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 470ae9: jne 0x470b58 */
  if (!zf) goto L_470b58;
L_470aeb: /* 470aeb: or edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 470aee: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_470af1: /* 470af1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470af3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470af6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470af8: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470afb: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 470afe: jne 0x470b03 */
  if (!zf) goto L_470b03;
L_470b00: /* 470b00: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_470b03: /* 470b03: mov eax, edi */
  eax = edi;
/* 470b05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470b07: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470b09: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470b0c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470b0e: call 0x461453 */
  esp -= 4; W32(esp, 0x470b13u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470b50u: guest_unwind_done(); RELOAD(); goto L_470b50; } return; } RELOAD();
/* 470b13: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470b17: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470b1a: call 0x462246 */
  esp -= 4; W32(esp, 0x470b1fu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470b50u: guest_unwind_done(); RELOAD(); goto L_470b50; } return; } RELOAD();
/* 470b1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470b22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470b23: mov eax, esi */
  eax = esi;
/* 470b25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470b26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470b2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470b2e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470b2f: ret 4 */
  esp += 8; SPILL(); return;
L_470b50: /* 470b50: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 470b53: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 470b56: xor ebx, ebx */
  ebx = 0;
L_470b58: /* 470b58: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470b5b: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 470b5f: jmp 0x470aaa */
  goto L_470aaa;
}

void f_470b64(void) {
  LOAD_REGS();
L_470b64: /* 470b64: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 470b67: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470b69: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470b6c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470b6e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470b71: xor ebx, ebx */
  ebx = 0;
/* 470b73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470b74: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470b78: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470b7du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470b7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470b7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470b7f: call 0x48bed8 */
  esp -= 4; W32(esp, 0x470b84u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_470b84(); return;
}

void f_470b84(void) {
  LOAD_REGS();
L_470b84: /* 470b84: mov eax, 0x48c5bd */
  eax = 0x48c5bdu;
/* 470b89: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470b8eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470b8e: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470b91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470b92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470b93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470b94: mov esi, ecx */
  esi = ecx;
/* 470b96: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470b99: xor ebx, ebx */
  ebx = 0;
/* 470b9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470b9c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470b9f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470ba2: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 470ba5: call 0x462178 */
  esp -= 4; W32(esp, 0x470baau); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470baa: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470bad: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470bb0: je 0x470c36 */
  if (zf) goto L_470c36;
L_470bb6: /* 470bb6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470bba: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470bbc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470bbf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470bc1: call 0x464a5a */
  esp -= 4; W32(esp, 0x470bc6u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470bc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470bc7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470bcb: call 0x46e379 */
  esp -= 4; W32(esp, 0x470bd0u); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 470bd0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470bd1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470bd4: mov edi, eax */
  edi = eax;
/* 470bd6: call 0x461389 */
  esp -= 4; W32(esp, 0x470bdbu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470bdb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470bdd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470be0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 470be3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470be5: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470be8: xor ecx, ecx */
  ecx = 0;
/* 470bea: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470bee: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470bf1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470bf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470bf7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470bf8: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470bfb: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 470bfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470bff: mov ecx, edi */
  ecx = edi;
/* 470c01: call 0x468be3 */
  esp -= 4; W32(esp, 0x470c06u); SPILL(); f_468be3(); if (g_unwind) return; RELOAD();
/* 470c06: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470c08: je 0x470c36 */
  if (zf) goto L_470c36;
L_470c0a: /* 470c0a: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470c11: jmp 0x470c36 */
  goto L_470c36;
L_470c36: /* 470c36: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470c38: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470c3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470c3c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470c3f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470c41: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470c44: call 0x461453 */
  esp -= 4; W32(esp, 0x470c49u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470c49: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470c4d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470c50: call 0x462246 */
  esp -= 4; W32(esp, 0x470c55u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470c55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470c58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470c59: mov eax, esi */
  eax = esi;
/* 470c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470c5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470c63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470c64: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470c65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470c13(void) {
  LOAD_REGS();
L_470c13: /* 470c13: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470c16: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470c18: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470c1b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470c1d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470c20: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470c22: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470c25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470c26: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470c2bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470c2b: mov eax, 0x470c31 */
  eax = 0x470c31u;
/* 470c30: ret  */
  esp += 4; SPILL(); return;
}

void f_470c31(void) {
  LOAD_REGS();
L_470c31: /* 470c31: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470c34: xor ebx, ebx */
  ebx = 0;
/* 470c36: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470c38: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470c3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470c3c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470c3f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470c41: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470c44: call 0x461453 */
  esp -= 4; W32(esp, 0x470c49u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470c31u: guest_unwind_done(); RELOAD(); goto L_470c31; } return; } RELOAD();
/* 470c49: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470c4d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470c50: call 0x462246 */
  esp -= 4; W32(esp, 0x470c55u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470c31u: guest_unwind_done(); RELOAD(); goto L_470c31; } return; } RELOAD();
/* 470c55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470c58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470c59: mov eax, esi */
  eax = esi;
/* 470c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470c5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470c63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470c64: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470c65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470c68(void) {
  LOAD_REGS();
L_470c68: /* 470c68: mov eax, 0x48c5d7 */
  eax = 0x48c5d7u;
/* 470c6d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470c72u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470c72: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470c75: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 470c79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470c7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470c7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470c7c: mov esi, ecx */
  esi = ecx;
/* 470c7e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470c81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470c82: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470c85: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470c88: call 0x462178 */
  esp -= 4; W32(esp, 0x470c8du); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470c8d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470c91: cmp byte ptr [ebp - 0x24], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470c95: je 0x470d3e */
  if (zf) goto L_470d3e;
L_470c9b: /* 470c9b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470c9f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470ca1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470ca4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470ca6: call 0x464a5a */
  esp -= 4; W32(esp, 0x470cabu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470cab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470cac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470cb0: call 0x46e379 */
  esp -= 4; W32(esp, 0x470cb5u); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 470cb5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470cb6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470cb9: mov ebx, eax */
  ebx = eax;
/* 470cbb: call 0x461389 */
  esp -= 4; W32(esp, 0x470cc0u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470cc0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470cc2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470cc5: mov ecx, dword ptr [ecx + esi + 0xc] */
  ecx = R32((uint32_t)(ecx + esi + 0xcu));
/* 470cc9: and ecx, 0xe00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 470ccf: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 470cd5: je 0x470ce3 */
  if (zf) goto L_470ce3;
L_470cd7: /* 470cd7: cmp ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 470cdd: movsx edi, word ptr [ebp + 8] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x8u)));
/* 470ce1: jne 0x470ce7 */
  if (!zf) goto L_470ce7;
L_470ce3: /* 470ce3: movzx edi, word ptr [ebp + 8] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0x8u)));
L_470ce7: /* 470ce7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470cea: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470cec: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470cef: xor ecx, ecx */
  ecx = 0;
/* 470cf1: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470cf5: and byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 470cf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470cfa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470cfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470cff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470d00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470d01: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470d04: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 470d07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470d08: mov ecx, ebx */
  ecx = ebx;
/* 470d0a: call 0x468c04 */
  esp -= 4; W32(esp, 0x470d0fu); SPILL(); f_468c04(); if (g_unwind) return; RELOAD();
/* 470d0f: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470d12: je 0x470d3e */
  if (zf) goto L_470d3e;
L_470d14: /* 470d14: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470d1b: jmp 0x470d3e */
  goto L_470d3e;
L_470d3e: /* 470d3e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470d40: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470d43: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470d47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 470d49: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470d4c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470d4e: call 0x461453 */
  esp -= 4; W32(esp, 0x470d53u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470d53: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470d57: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470d5a: call 0x462246 */
  esp -= 4; W32(esp, 0x470d5fu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470d5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470d62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470d63: mov eax, esi */
  eax = esi;
/* 470d65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470d66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470d6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470d6e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470d6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470d1d(void) {
  LOAD_REGS();
L_470d1d: /* 470d1d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470d20: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470d22: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470d25: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470d27: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470d2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470d2c: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470d2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470d30: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470d35u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470d35: mov eax, 0x470d3b */
  eax = 0x470d3bu;
/* 470d3a: ret  */
  esp += 4; SPILL(); return;
}

void f_470d3b(void) {
  LOAD_REGS();
L_470d3b: /* 470d3b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470d3e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470d40: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470d43: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470d47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 470d49: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470d4c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470d4e: call 0x461453 */
  esp -= 4; W32(esp, 0x470d53u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470d3bu: guest_unwind_done(); RELOAD(); goto L_470d3b; } return; } RELOAD();
/* 470d53: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470d57: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470d5a: call 0x462246 */
  esp -= 4; W32(esp, 0x470d5fu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470d3bu: guest_unwind_done(); RELOAD(); goto L_470d3b; } return; } RELOAD();
/* 470d5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470d62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470d63: mov eax, esi */
  eax = esi;
/* 470d65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470d66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470d6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470d6e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470d6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470d72(void) {
  LOAD_REGS();
L_470d72: /* 470d72: mov eax, 0x48c5f1 */
  eax = 0x48c5f1u;
/* 470d77: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470d7cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470d7c: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470d7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470d80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470d81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470d82: mov esi, ecx */
  esi = ecx;
/* 470d84: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470d87: xor ebx, ebx */
  ebx = 0;
/* 470d89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470d8a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 470d8d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470d90: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 470d93: call 0x462178 */
  esp -= 4; W32(esp, 0x470d98u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470d98: cmp byte ptr [ebp - 0x2c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470d9b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470d9e: je 0x470e28 */
  if (zf) goto L_470e28;
L_470da4: /* 470da4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470da7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470da8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470daa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470dad: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470daf: call 0x464a5a */
  esp -= 4; W32(esp, 0x470db4u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470db5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470db9: call 0x46e379 */
  esp -= 4; W32(esp, 0x470dbeu); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 470dbe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470dbf: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470dc2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 470dc5: call 0x461389 */
  esp -= 4; W32(esp, 0x470dcau); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470dca: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470dcc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470dcf: movzx edi, word ptr [ebp + 8] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0x8u)));
/* 470dd3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470dd5: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470dd8: xor ecx, ecx */
  ecx = 0;
/* 470dda: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470dde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470ddf: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470de2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470de6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470de7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 470dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470deb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470dec: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470def: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 470df2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470df3: call 0x468c25 */
  esp -= 4; W32(esp, 0x470df8u); SPILL(); f_468c25(); if (g_unwind) return; RELOAD();
/* 470df8: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470dfa: je 0x470e28 */
  if (zf) goto L_470e28;
L_470dfc: /* 470dfc: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470e03: jmp 0x470e28 */
  goto L_470e28;
L_470e28: /* 470e28: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470e2a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470e2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470e2e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470e31: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470e33: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470e36: call 0x461453 */
  esp -= 4; W32(esp, 0x470e3bu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470e3b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470e3f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 470e42: call 0x462246 */
  esp -= 4; W32(esp, 0x470e47u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470e47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470e4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470e4b: mov eax, esi */
  eax = esi;
/* 470e4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470e4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470e55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470e56: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470e57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470e05(void) {
  LOAD_REGS();
L_470e05: /* 470e05: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470e08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470e0a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470e0d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470e0f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470e12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470e14: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470e17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470e18: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470e1du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470e1d: mov eax, 0x470e23 */
  eax = 0x470e23u;
/* 470e22: ret  */
  esp += 4; SPILL(); return;
}

void f_470e23(void) {
  LOAD_REGS();
L_470e23: /* 470e23: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470e26: xor ebx, ebx */
  ebx = 0;
/* 470e28: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470e2a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470e2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470e2e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470e31: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470e33: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470e36: call 0x461453 */
  esp -= 4; W32(esp, 0x470e3bu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470e23u: guest_unwind_done(); RELOAD(); goto L_470e23; } return; } RELOAD();
/* 470e3b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470e3f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 470e42: call 0x462246 */
  esp -= 4; W32(esp, 0x470e47u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470e23u: guest_unwind_done(); RELOAD(); goto L_470e23; } return; } RELOAD();
/* 470e47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470e4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470e4b: mov eax, esi */
  eax = esi;
/* 470e4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470e4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470e55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470e56: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470e57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470e5a(void) {
  LOAD_REGS();
L_470e5a: /* 470e5a: mov eax, 0x48c625 */
  eax = 0x48c625u;
/* 470e5f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470e64u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470e64: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470e67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470e68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470e69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470e6a: mov esi, ecx */
  esi = ecx;
/* 470e6c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470e6f: xor ebx, ebx */
  ebx = 0;
/* 470e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470e72: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470e75: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470e78: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 470e7b: call 0x462178 */
  esp -= 4; W32(esp, 0x470e80u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470e80: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470e83: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470e86: je 0x470f0c */
  if (zf) goto L_470f0c;
L_470e8c: /* 470e8c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470e8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470e90: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470e92: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470e95: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470e97: call 0x464a5a */
  esp -= 4; W32(esp, 0x470e9cu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470e9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470e9d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470ea1: call 0x46e379 */
  esp -= 4; W32(esp, 0x470ea6u); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 470ea6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470ea7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470eaa: mov edi, eax */
  edi = eax;
/* 470eac: call 0x461389 */
  esp -= 4; W32(esp, 0x470eb1u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470eb1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470eb3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470eb6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 470eb9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470ebb: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470ebe: xor ecx, ecx */
  ecx = 0;
/* 470ec0: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470ec4: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470ec7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470ecc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470ecd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470ece: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470ed1: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 470ed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470ed5: mov ecx, edi */
  ecx = edi;
/* 470ed7: call 0x468c25 */
  esp -= 4; W32(esp, 0x470edcu); SPILL(); f_468c25(); if (g_unwind) return; RELOAD();
/* 470edc: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470ede: je 0x470f0c */
  if (zf) goto L_470f0c;
L_470ee0: /* 470ee0: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470ee7: jmp 0x470f0c */
  goto L_470f0c;
L_470f0c: /* 470f0c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470f0e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470f11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470f12: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470f15: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470f17: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470f1a: call 0x461453 */
  esp -= 4; W32(esp, 0x470f1fu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470f1f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470f23: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470f26: call 0x462246 */
  esp -= 4; W32(esp, 0x470f2bu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470f2b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470f2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470f2f: mov eax, esi */
  eax = esi;
/* 470f31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470f32: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470f39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470f3a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470f3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470ee9(void) {
  LOAD_REGS();
L_470ee9: /* 470ee9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470eec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470eee: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470ef1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470ef3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470ef6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470ef8: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470efc: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470f01u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470f01: mov eax, 0x470f07 */
  eax = 0x470f07u;
/* 470f06: ret  */
  esp += 4; SPILL(); return;
}

void f_470f07(void) {
  LOAD_REGS();
L_470f07: /* 470f07: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470f0a: xor ebx, ebx */
  ebx = 0;
/* 470f0c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470f0e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470f11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470f12: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470f15: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470f17: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470f1a: call 0x461453 */
  esp -= 4; W32(esp, 0x470f1fu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470f07u: guest_unwind_done(); RELOAD(); goto L_470f07; } return; } RELOAD();
/* 470f1f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470f23: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470f26: call 0x462246 */
  esp -= 4; W32(esp, 0x470f2bu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470f07u: guest_unwind_done(); RELOAD(); goto L_470f07; } return; } RELOAD();
/* 470f2b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470f2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470f2f: mov eax, esi */
  eax = esi;
/* 470f31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470f32: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470f39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470f3a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470f3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470f3e(void) {
  LOAD_REGS();
L_470f3e: /* 470f3e: mov eax, 0x48c60b */
  eax = 0x48c60bu;
/* 470f43: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470f48u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470f48: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470f4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470f4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470f4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470f4e: mov esi, ecx */
  esi = ecx;
/* 470f50: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470f53: xor ebx, ebx */
  ebx = 0;
/* 470f55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470f56: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470f59: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470f5c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 470f5f: call 0x462178 */
  esp -= 4; W32(esp, 0x470f64u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470f64: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470f67: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470f6a: je 0x470ff0 */
  if (zf) goto L_470ff0;
L_470f70: /* 470f70: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470f73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470f74: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470f76: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470f79: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470f7b: call 0x464a5a */
  esp -= 4; W32(esp, 0x470f80u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470f81: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470f85: call 0x46e379 */
  esp -= 4; W32(esp, 0x470f8au); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 470f8a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470f8b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470f8e: mov edi, eax */
  edi = eax;
/* 470f90: call 0x461389 */
  esp -= 4; W32(esp, 0x470f95u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470f95: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470f97: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470f9a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 470f9d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470f9f: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 470fa2: xor ecx, ecx */
  ecx = 0;
/* 470fa4: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470fa8: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470fab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 470faf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 470fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470fb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 470fb2: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470fb5: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 470fb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470fb9: mov ecx, edi */
  ecx = edi;
/* 470fbb: call 0x468c04 */
  esp -= 4; W32(esp, 0x470fc0u); SPILL(); f_468c04(); if (g_unwind) return; RELOAD();
/* 470fc0: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470fc2: je 0x470ff0 */
  if (zf) goto L_470ff0;
L_470fc4: /* 470fc4: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 470fcb: jmp 0x470ff0 */
  goto L_470ff0;
L_470ff0: /* 470ff0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470ff2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470ff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470ff6: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470ff9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470ffb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470ffe: call 0x461453 */
  esp -= 4; W32(esp, 0x471003u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 471003: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471007: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47100a: call 0x462246 */
  esp -= 4; W32(esp, 0x47100fu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 47100f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471012: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471013: mov eax, esi */
  eax = esi;
/* 471015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471016: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47101d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47101e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47101f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470fcd(void) {
  LOAD_REGS();
L_470fcd: /* 470fcd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 470fd0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470fd2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470fd5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470fd7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470fda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470fdc: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470fdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470fe0: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470fe5u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470fe5: mov eax, 0x470feb */
  eax = 0x470febu;
/* 470fea: ret  */
  esp += 4; SPILL(); return;
}

void f_470feb(void) {
  LOAD_REGS();
L_470feb: /* 470feb: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470fee: xor ebx, ebx */
  ebx = 0;
/* 470ff0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470ff2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470ff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470ff6: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470ff9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470ffb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470ffe: call 0x461453 */
  esp -= 4; W32(esp, 0x471003u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470febu: guest_unwind_done(); RELOAD(); goto L_470feb; } return; } RELOAD();
/* 471003: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471007: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47100a: call 0x462246 */
  esp -= 4; W32(esp, 0x47100fu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470febu: guest_unwind_done(); RELOAD(); goto L_470feb; } return; } RELOAD();
/* 47100f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471012: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471013: mov eax, esi */
  eax = esi;
/* 471015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471016: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47101d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47101e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47101f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471022(void) {
  LOAD_REGS();
L_471022: /* 471022: mov eax, 0x48c63f */
  eax = 0x48c63fu;
/* 471027: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47102cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47102c: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47102f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471031: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471032: mov esi, ecx */
  esi = ecx;
/* 471034: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 471037: xor ebx, ebx */
  ebx = 0;
/* 471039: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47103a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47103d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 471040: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 471043: call 0x462178 */
  esp -= 4; W32(esp, 0x471048u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 471048: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47104b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47104e: je 0x4710d7 */
  if (zf) goto L_4710d7;
L_471054: /* 471054: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 471057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471058: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47105a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47105d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47105f: call 0x464a5a */
  esp -= 4; W32(esp, 0x471064u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 471064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471065: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 471069: call 0x46e379 */
  esp -= 4; W32(esp, 0x47106eu); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 47106e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47106f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 471072: mov edi, eax */
  edi = eax;
/* 471074: call 0x461389 */
  esp -= 4; W32(esp, 0x471079u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 471079: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47107b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47107e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 471081: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 471083: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 471086: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 471089: xor ecx, ecx */
  ecx = 0;
/* 47108b: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 47108f: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 471092: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 471096: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471098: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 471099: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47109c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47109f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4710a0: mov ecx, edi */
  ecx = edi;
/* 4710a2: call 0x468a7e */
  esp -= 4; W32(esp, 0x4710a7u); SPILL(); f_468a7e(); if (g_unwind) return; RELOAD();
/* 4710a7: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4710a9: je 0x4710d7 */
  if (zf) goto L_4710d7;
L_4710ab: /* 4710ab: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4710b2: jmp 0x4710d7 */
  goto L_4710d7;
L_4710d7: /* 4710d7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4710d9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4710dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4710dd: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4710e0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4710e2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4710e5: call 0x461453 */
  esp -= 4; W32(esp, 0x4710eau); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4710ea: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4710ee: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4710f1: call 0x462246 */
  esp -= 4; W32(esp, 0x4710f6u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4710f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4710f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4710fa: mov eax, esi */
  eax = esi;
/* 4710fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4710fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471104: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 471105: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471106: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4710b4(void) {
  LOAD_REGS();
L_4710b4: /* 4710b4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4710b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4710b9: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4710bc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4710be: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4710c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4710c3: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4710c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4710c7: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4710ccu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4710cc: mov eax, 0x4710d2 */
  eax = 0x4710d2u;
/* 4710d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4710d2(void) {
  LOAD_REGS();
L_4710d2: /* 4710d2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4710d5: xor ebx, ebx */
  ebx = 0;
/* 4710d7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4710d9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4710dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4710dd: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4710e0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4710e2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4710e5: call 0x461453 */
  esp -= 4; W32(esp, 0x4710eau); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4710d2u: guest_unwind_done(); RELOAD(); goto L_4710d2; } return; } RELOAD();
/* 4710ea: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4710ee: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4710f1: call 0x462246 */
  esp -= 4; W32(esp, 0x4710f6u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4710d2u: guest_unwind_done(); RELOAD(); goto L_4710d2; } return; } RELOAD();
/* 4710f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4710f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4710fa: mov eax, esi */
  eax = esi;
/* 4710fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4710fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471104: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 471105: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471106: ret 8 */
  esp += 12; SPILL(); return;
}

void f_471109(void) {
  LOAD_REGS();
L_471109: /* 471109: mov eax, 0x48c659 */
  eax = 0x48c659u;
/* 47110e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471113u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471113: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 471116: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471117: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471118: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471119: mov esi, ecx */
  esi = ecx;
/* 47111b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47111e: xor ebx, ebx */
  ebx = 0;
/* 471120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471121: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 471124: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 471127: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47112a: call 0x462178 */
  esp -= 4; W32(esp, 0x47112fu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 47112f: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471132: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471135: je 0x4711be */
  if (zf) goto L_4711be;
L_47113b: /* 47113b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47113e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47113f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471141: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 471144: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471146: call 0x464a5a */
  esp -= 4; W32(esp, 0x47114bu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47114b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47114c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 471150: call 0x46e379 */
  esp -= 4; W32(esp, 0x471155u); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 471155: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 471156: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 471159: mov edi, eax */
  edi = eax;
/* 47115b: call 0x461389 */
  esp -= 4; W32(esp, 0x471160u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 471160: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471162: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471165: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 471168: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47116a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47116d: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 471170: xor ecx, ecx */
  ecx = 0;
/* 471172: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 471176: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 471179: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47117d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47117e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47117f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 471180: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 471183: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 471186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471187: mov ecx, edi */
  ecx = edi;
/* 471189: call 0x468c46 */
  esp -= 4; W32(esp, 0x47118eu); SPILL(); f_468c46(); if (g_unwind) return; RELOAD();
/* 47118e: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471190: je 0x4711be */
  if (zf) goto L_4711be;
L_471192: /* 471192: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 471199: jmp 0x4711be */
  goto L_4711be;
L_4711be: /* 4711be: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4711c0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4711c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4711c4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4711c7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4711c9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4711cc: call 0x461453 */
  esp -= 4; W32(esp, 0x4711d1u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4711d1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4711d5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4711d8: call 0x462246 */
  esp -= 4; W32(esp, 0x4711ddu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4711dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4711e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4711e1: mov eax, esi */
  eax = esi;
/* 4711e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4711e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4711eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4711ec: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4711ed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47119b(void) {
  LOAD_REGS();
L_47119b: /* 47119b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47119e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4711a0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4711a3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4711a5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4711a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4711aa: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4711ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4711ae: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4711b3u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4711b3: mov eax, 0x4711b9 */
  eax = 0x4711b9u;
/* 4711b8: ret  */
  esp += 4; SPILL(); return;
}

void f_4711b9(void) {
  LOAD_REGS();
L_4711b9: /* 4711b9: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4711bc: xor ebx, ebx */
  ebx = 0;
/* 4711be: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4711c0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4711c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4711c4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4711c7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4711c9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4711cc: call 0x461453 */
  esp -= 4; W32(esp, 0x4711d1u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4711b9u: guest_unwind_done(); RELOAD(); goto L_4711b9; } return; } RELOAD();
/* 4711d1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4711d5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4711d8: call 0x462246 */
  esp -= 4; W32(esp, 0x4711ddu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4711b9u: guest_unwind_done(); RELOAD(); goto L_4711b9; } return; } RELOAD();
/* 4711dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4711e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4711e1: mov eax, esi */
  eax = esi;
/* 4711e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4711e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4711eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4711ec: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4711ed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4711f0(void) {
  LOAD_REGS();
L_4711f0: /* 4711f0: mov eax, 0x48c673 */
  eax = 0x48c673u;
/* 4711f5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4711fau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4711fa: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4711fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4711fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4711ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471200: mov esi, ecx */
  esi = ecx;
/* 471202: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 471205: xor ebx, ebx */
  ebx = 0;
/* 471207: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471208: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47120b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47120e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 471211: call 0x462178 */
  esp -= 4; W32(esp, 0x471216u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 471216: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471219: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47121c: je 0x4712a7 */
  if (zf) goto L_4712a7;
L_471222: /* 471222: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 471225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471226: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471228: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47122b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47122d: call 0x464a5a */
  esp -= 4; W32(esp, 0x471232u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 471232: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471233: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 471237: call 0x46e379 */
  esp -= 4; W32(esp, 0x47123cu); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 47123c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47123d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 471240: mov edi, eax */
  edi = eax;
/* 471242: call 0x461389 */
  esp -= 4; W32(esp, 0x471247u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 471247: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 47124a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47124c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47124f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 471251: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 471254: xor ecx, ecx */
  ecx = 0;
/* 471256: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 47125a: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 47125d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 471261: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471262: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471263: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 471266: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471268: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 471269: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47126c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 47126f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471270: mov ecx, edi */
  ecx = edi;
/* 471272: call 0x468c6a */
  esp -= 4; W32(esp, 0x471277u); SPILL(); f_468c6a(); if (g_unwind) return; RELOAD();
/* 471277: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471279: je 0x4712a7 */
  if (zf) goto L_4712a7;
L_47127b: /* 47127b: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 471282: jmp 0x4712a7 */
  goto L_4712a7;
L_4712a7: /* 4712a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4712a9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4712ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4712ad: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4712b0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4712b2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4712b5: call 0x461453 */
  esp -= 4; W32(esp, 0x4712bau); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4712ba: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4712be: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4712c1: call 0x462246 */
  esp -= 4; W32(esp, 0x4712c6u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4712c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4712c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4712ca: mov eax, esi */
  eax = esi;
/* 4712cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4712cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4712d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4712d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4712d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471284(void) {
  LOAD_REGS();
L_471284: /* 471284: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 471287: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 471289: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47128c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47128e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 471291: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 471293: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 471296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471297: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47129cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47129c: mov eax, 0x4712a2 */
  eax = 0x4712a2u;
/* 4712a1: ret  */
  esp += 4; SPILL(); return;
}

void f_4712a2(void) {
  LOAD_REGS();
L_4712a2: /* 4712a2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4712a5: xor ebx, ebx */
  ebx = 0;
/* 4712a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4712a9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4712ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4712ad: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4712b0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4712b2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4712b5: call 0x461453 */
  esp -= 4; W32(esp, 0x4712bau); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4712a2u: guest_unwind_done(); RELOAD(); goto L_4712a2; } return; } RELOAD();
/* 4712ba: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4712be: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4712c1: call 0x462246 */
  esp -= 4; W32(esp, 0x4712c6u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4712a2u: guest_unwind_done(); RELOAD(); goto L_4712a2; } return; } RELOAD();
/* 4712c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4712c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4712ca: mov eax, esi */
  eax = esi;
/* 4712cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4712cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4712d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4712d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4712d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4712d9(void) {
  LOAD_REGS();
L_4712d9: /* 4712d9: mov eax, 0x48c68d */
  eax = 0x48c68du;
/* 4712de: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4712e3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4712e3: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4712e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4712e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4712e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4712e9: mov esi, ecx */
  esi = ecx;
/* 4712eb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4712ee: xor ebx, ebx */
  ebx = 0;
/* 4712f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4712f1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4712f4: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4712f7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4712fa: call 0x462178 */
  esp -= 4; W32(esp, 0x4712ffu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4712ff: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471302: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471305: je 0x471390 */
  if (zf) goto L_471390;
L_47130b: /* 47130b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47130e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47130f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471311: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 471314: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471316: call 0x464a5a */
  esp -= 4; W32(esp, 0x47131bu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47131b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47131c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 471320: call 0x46e379 */
  esp -= 4; W32(esp, 0x471325u); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 471325: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 471326: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 471329: mov edi, eax */
  edi = eax;
/* 47132b: call 0x461389 */
  esp -= 4; W32(esp, 0x471330u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 471330: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 471333: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471335: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471338: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47133a: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 47133d: xor ecx, ecx */
  ecx = 0;
/* 47133f: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 471343: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 471346: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47134a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47134b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47134c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 47134f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471351: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 471352: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 471355: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 471358: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471359: mov ecx, edi */
  ecx = edi;
/* 47135b: call 0x468c6a */
  esp -= 4; W32(esp, 0x471360u); SPILL(); f_468c6a(); if (g_unwind) return; RELOAD();
/* 471360: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471362: je 0x471390 */
  if (zf) goto L_471390;
L_471364: /* 471364: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 47136b: jmp 0x471390 */
  goto L_471390;
L_471390: /* 471390: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471392: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 471395: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471396: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 471399: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47139b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47139e: call 0x461453 */
  esp -= 4; W32(esp, 0x4713a3u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4713a3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4713a7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4713aa: call 0x462246 */
  esp -= 4; W32(esp, 0x4713afu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4713af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4713b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4713b3: mov eax, esi */
  eax = esi;
/* 4713b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4713b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4713bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4713be: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4713bf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47136d(void) {
  LOAD_REGS();
L_47136d: /* 47136d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 471370: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 471372: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 471375: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471377: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47137a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47137c: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47137f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471380: call 0x464bb2 */
  esp -= 4; W32(esp, 0x471385u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 471385: mov eax, 0x47138b */
  eax = 0x47138bu;
/* 47138a: ret  */
  esp += 4; SPILL(); return;
}

void f_47138b(void) {
  LOAD_REGS();
L_47138b: /* 47138b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47138e: xor ebx, ebx */
  ebx = 0;
/* 471390: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471392: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 471395: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471396: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 471399: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47139b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47139e: call 0x461453 */
  esp -= 4; W32(esp, 0x4713a3u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47138bu: guest_unwind_done(); RELOAD(); goto L_47138b; } return; } RELOAD();
/* 4713a3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4713a7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4713aa: call 0x462246 */
  esp -= 4; W32(esp, 0x4713afu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47138bu: guest_unwind_done(); RELOAD(); goto L_47138b; } return; } RELOAD();
/* 4713af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4713b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4713b3: mov eax, esi */
  eax = esi;
/* 4713b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4713b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4713bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4713be: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4713bf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4713c2(void) {
  LOAD_REGS();
L_4713c2: /* 4713c2: mov eax, 0x48c6a7 */
  eax = 0x48c6a7u;
/* 4713c7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4713ccu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4713cc: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4713cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4713d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4713d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4713d2: mov esi, ecx */
  esi = ecx;
/* 4713d4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4713d7: xor ebx, ebx */
  ebx = 0;
/* 4713d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4713da: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4713dd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4713e0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4713e3: call 0x462178 */
  esp -= 4; W32(esp, 0x4713e8u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4713e8: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4713eb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4713ee: je 0x471479 */
  if (zf) goto L_471479;
L_4713f4: /* 4713f4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4713f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4713f8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4713fa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4713fd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4713ff: call 0x464a5a */
  esp -= 4; W32(esp, 0x471404u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 471404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471405: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 471409: call 0x46e379 */
  esp -= 4; W32(esp, 0x47140eu); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 47140e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47140f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 471412: mov edi, eax */
  edi = eax;
/* 471414: call 0x461389 */
  esp -= 4; W32(esp, 0x471419u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 471419: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 47141c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47141e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471421: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 471423: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 471426: xor ecx, ecx */
  ecx = 0;
/* 471428: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 47142c: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 47142f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 471433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471434: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471435: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 471438: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471439: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47143a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47143b: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47143e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 471441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471442: mov ecx, edi */
  ecx = edi;
/* 471444: call 0x468c90 */
  esp -= 4; W32(esp, 0x471449u); SPILL(); f_468c90(); if (g_unwind) return; RELOAD();
/* 471449: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47144b: je 0x471479 */
  if (zf) goto L_471479;
L_47144d: /* 47144d: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 471454: jmp 0x471479 */
  goto L_471479;
L_471479: /* 471479: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47147b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47147e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47147f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 471482: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471484: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471487: call 0x461453 */
  esp -= 4; W32(esp, 0x47148cu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47148c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471490: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 471493: call 0x462246 */
  esp -= 4; W32(esp, 0x471498u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 471498: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47149b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47149c: mov eax, esi */
  eax = esi;
/* 47149e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47149f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4714a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4714a7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4714a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_471456(void) {
  LOAD_REGS();
L_471456: /* 471456: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 471459: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47145b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47145e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471460: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 471463: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 471465: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 471468: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471469: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47146eu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47146e: mov eax, 0x471474 */
  eax = 0x471474u;
/* 471473: ret  */
  esp += 4; SPILL(); return;
}

void f_471474(void) {
  LOAD_REGS();
L_471474: /* 471474: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 471477: xor ebx, ebx */
  ebx = 0;
/* 471479: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47147b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47147e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47147f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 471482: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471484: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471487: call 0x461453 */
  esp -= 4; W32(esp, 0x47148cu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x471474u: guest_unwind_done(); RELOAD(); goto L_471474; } return; } RELOAD();
/* 47148c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471490: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 471493: call 0x462246 */
  esp -= 4; W32(esp, 0x471498u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x471474u: guest_unwind_done(); RELOAD(); goto L_471474; } return; } RELOAD();
/* 471498: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47149b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47149c: mov eax, esi */
  eax = esi;
/* 47149e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47149f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4714a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4714a7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4714a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4714ab(void) {
  LOAD_REGS();
L_4714ab: /* 4714ab: mov eax, 0x48c6c1 */
  eax = 0x48c6c1u;
/* 4714b0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4714b5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4714b5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4714b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4714b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4714ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4714bb: mov esi, ecx */
  esi = ecx;
/* 4714bd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4714c0: xor ebx, ebx */
  ebx = 0;
/* 4714c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4714c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4714c6: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4714c9: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4714cc: call 0x462178 */
  esp -= 4; W32(esp, 0x4714d1u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4714d1: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4714d4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4714d7: je 0x47155d */
  if (zf) goto L_47155d;
L_4714dd: /* 4714dd: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4714e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4714e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4714e3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4714e6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4714e8: call 0x464a5a */
  esp -= 4; W32(esp, 0x4714edu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4714ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4714ee: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4714f2: call 0x46e379 */
  esp -= 4; W32(esp, 0x4714f7u); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 4714f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4714f8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4714fb: mov edi, eax */
  edi = eax;
/* 4714fd: call 0x461389 */
  esp -= 4; W32(esp, 0x471502u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 471502: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471504: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471507: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47150a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47150c: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 47150f: xor ecx, ecx */
  ecx = 0;
/* 471511: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 471515: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 471518: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47151c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47151d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47151e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47151f: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 471522: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 471525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471526: mov ecx, edi */
  ecx = edi;
/* 471528: call 0x468aa2 */
  esp -= 4; W32(esp, 0x47152du); SPILL(); f_468aa2(); if (g_unwind) return; RELOAD();
/* 47152d: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47152f: je 0x47155d */
  if (zf) goto L_47155d;
L_471531: /* 471531: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 471538: jmp 0x47155d */
  goto L_47155d;
L_47155d: /* 47155d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47155f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 471562: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471563: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 471566: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471568: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47156b: call 0x461453 */
  esp -= 4; W32(esp, 0x471570u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 471570: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471574: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 471577: call 0x462246 */
  esp -= 4; W32(esp, 0x47157cu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 47157c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47157f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471580: mov eax, esi */
  eax = esi;
/* 471582: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471583: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47158a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47158b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47158c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47153a(void) {
  LOAD_REGS();
L_47153a: /* 47153a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47153d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47153f: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 471542: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471544: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 471547: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 471549: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47154c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47154d: call 0x464bb2 */
  esp -= 4; W32(esp, 0x471552u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 471552: mov eax, 0x471558 */
  eax = 0x471558u;
/* 471557: ret  */
  esp += 4; SPILL(); return;
}

void f_471558(void) {
  LOAD_REGS();
L_471558: /* 471558: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47155b: xor ebx, ebx */
  ebx = 0;
/* 47155d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47155f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 471562: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471563: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 471566: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471568: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47156b: call 0x461453 */
  esp -= 4; W32(esp, 0x471570u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x471558u: guest_unwind_done(); RELOAD(); goto L_471558; } return; } RELOAD();
/* 471570: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471574: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 471577: call 0x462246 */
  esp -= 4; W32(esp, 0x47157cu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x471558u: guest_unwind_done(); RELOAD(); goto L_471558; } return; } RELOAD();
/* 47157c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47157f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471580: mov eax, esi */
  eax = esi;
/* 471582: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471583: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47158a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47158b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47158c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47158f(void) {
  LOAD_REGS();
L_47158f: /* 47158f: mov eax, 0x48c473 */
  eax = 0x48c473u;
/* 471594: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471599u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471599: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47159c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47159d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47159e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47159f: mov esi, ecx */
  esi = ecx;
/* 4715a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4715a4: xor ebx, ebx */
  ebx = 0;
/* 4715a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4715a7: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4715aa: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 4715ad: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4715b0: call 0x462178 */
  esp -= 4; W32(esp, 0x4715b5u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 4715b5: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4715b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4715bb: je 0x4715da */
  if (zf) goto L_4715da;
L_4715bd: /* 4715bd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4715bf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4715c2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4715c5: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4715c9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4715cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4715ce: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4715d2: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x4715d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4715d5: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4715d8: je 0x471606 */
  if (zf) goto L_471606;
L_4715da: /* 4715da: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 4715e1: jmp 0x471606 */
  goto L_471606;
L_471606: /* 471606: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471608: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47160b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47160c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47160f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471611: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471614: call 0x461453 */
  esp -= 4; W32(esp, 0x471619u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 471619: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47161d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 471620: call 0x462246 */
  esp -= 4; W32(esp, 0x471625u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 471625: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471628: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471629: mov eax, esi */
  eax = esi;
/* 47162b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47162c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471633: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 471634: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471635: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4715e3(void) {
  LOAD_REGS();
L_4715e3: /* 4715e3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4715e6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4715e8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4715eb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4715ed: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4715f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4715f2: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4715f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4715f6: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4715fbu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4715fb: mov eax, 0x471601 */
  eax = 0x471601u;
/* 471600: ret  */
  esp += 4; SPILL(); return;
}

void f_471601(void) {
  LOAD_REGS();
L_471601: /* 471601: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 471604: xor ebx, ebx */
  ebx = 0;
/* 471606: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471608: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47160b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47160c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47160f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471611: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471614: call 0x461453 */
  esp -= 4; W32(esp, 0x471619u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x471601u: guest_unwind_done(); RELOAD(); goto L_471601; } return; } RELOAD();
/* 471619: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47161d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 471620: call 0x462246 */
  esp -= 4; W32(esp, 0x471625u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x471601u: guest_unwind_done(); RELOAD(); goto L_471601; } return; } RELOAD();
/* 471625: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471628: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471629: mov eax, esi */
  eax = esi;
/* 47162b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47162c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471633: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 471634: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471635: ret 8 */
  esp += 12; SPILL(); return;
}

void f_471638(void) {
  LOAD_REGS();
L_471638: /* 471638: jmp 0x465ca4 */
  SPILL(); f_465ca4(); return;
}

void f_47163d(void) {
  LOAD_REGS();
L_47163d: /* 47163d: jmp 0x465dbd */
  SPILL(); f_465dbd(); return;
}

void f_471642(void) {
  LOAD_REGS();
L_471642: /* 471642: jmp 0x465ed9 */
  SPILL(); f_465ed9(); return;
}

void f_471647(void) {
  LOAD_REGS();
L_471647: /* 471647: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471648: mov esi, ecx */
  esi = ecx;
/* 47164a: mov dword ptr [esi], 0x4c8150 */
  W32((uint32_t)(esi), 0x4c8150u);
/* 471650: call 0x46bb9c */
  esp -= 4; W32(esp, 0x471655u); SPILL(); f_46bb9c(); if (g_unwind) return; RELOAD();
/* 471655: mov ecx, esi */
  ecx = esi;
/* 471657: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471658: jmp 0x462325 */
  SPILL(); f_462325(); return;
}

void f_47165d(void) {
  LOAD_REGS();
L_47165d: /* 47165d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47165e: mov ebp, esp */
  ebp = esp;
/* 471660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471661: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471662: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 471665: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 471668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471669: mov esi, ecx */
  esi = ecx;
/* 47166b: jne 0x471674 */
  if (!zf) goto L_471674;
L_47166d: /* 47166d: xor eax, eax */
  eax = 0;
/* 47166f: jmp 0x4717d0 */
  goto L_4717d0;
L_471674: /* 471674: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 471677: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 471679: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47167b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47167c: je 0x4716a0 */
  if (zf) goto L_4716a0;
L_47167e: /* 47167e: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 471681: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 471683: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 471686: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 471688: jae 0x4716a0 */
  if (!cf) goto L_4716a0;
L_47168a: /* 47168a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 47168b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47168d: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 471690: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471692: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 471695: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 471697: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 471699: mov eax, ebx */
  eax = ebx;
/* 47169b: jmp 0x4717cf */
  goto L_4717cf;
L_4716a0: /* 4716a0: test byte ptr [esi + 0x40], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4716a4: je 0x4716ae */
  if (zf) goto L_4716ae;
L_4716a6: /* 4716a6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4716a9: jmp 0x4717cf */
  goto L_4717cf;
L_4716ae: /* 4716ae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4716b0: jne 0x4716b6 */
  if (!zf) goto L_4716b6;
L_4716b2: /* 4716b2: xor ebx, ebx */
  ebx = 0;
/* 4716b4: jmp 0x4716c2 */
  goto L_4716c2;
L_4716b6: /* 4716b6: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4716b9: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4716bc: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 4716be: sub ebx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4716c0: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_4716c2: /* 4716c2: mov eax, ebx */
  eax = ebx;
/* 4716c4: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4716c6: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4716c9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4716cc: jae 0x4716d1 */
  if (!cf) goto L_4716d1;
L_4716ce: /* 4716ce: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4716d0: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_4716d1: /* 4716d1: xor edi, edi */
  edi = 0;
/* 4716d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4716d5: jbe 0x4716f8 */
  if ((cf | zf)) goto L_4716f8;
L_4716d7: /* 4716d7: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
/* 4716dc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4716de: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4716e0: jae 0x4716e6 */
  if (!cf) goto L_4716e6;
L_4716e2: /* 4716e2: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  eax = r;
  }
/* 4716e4: jne 0x4716d7 */
  if (!zf) goto L_4716d7;
L_4716e6: /* 4716e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4716e8: jbe 0x4716f8 */
  if ((cf | zf)) goto L_4716f8;
L_4716ea: /* 4716ea: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4716ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4716ed: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4716f0: call 0x4620da */
  esp -= 4; W32(esp, 0x4716f5u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4716f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4716f6: mov edi, eax */
  edi = eax;
L_4716f8: /* 4716f8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4716fa: jbe 0x47170b */
  if ((cf | zf)) goto L_47170b;
L_4716fc: /* 4716fc: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4716ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471700: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 471702: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471703: call 0x4617bb */
  esp -= 4; W32(esp, 0x471708u); SPILL(); hle_memcpy(); RELOAD();
/* 471708: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_47170b: /* 47170b: test byte ptr [esi + 0x40], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47170f: je 0x47171c */
  if (zf) goto L_47171c;
L_471711: /* 471711: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 471714: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 471716: call 0x461c65 */
  esp -= 4; W32(esp, 0x47171bu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 47171b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_47171c: /* 47171c: xor eax, eax */
  eax = 0;
/* 47171e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47171f: or dword ptr [esi + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x40u), r);
  }
/* 471722: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 471724: jne 0x471764 */
  if (!zf) goto L_471764;
L_471726: /* 471726: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 471729: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47172c: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 47172f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 471731: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 471734: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 471736: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 471739: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 47173b: test byte ptr [esi + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47173f: je 0x471753 */
  if (zf) goto L_471753;
L_471741: /* 471741: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 471744: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471746: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 471749: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47174c: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 47174f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471751: jmp 0x4717b9 */
  goto L_4717b9;
L_471753: /* 471753: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 471756: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 471758: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 47175b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 47175d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 471760: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 471762: jmp 0x4717b9 */
  goto L_4717b9;
L_471764: /* 471764: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 471767: mov ecx, edi */
  ecx = edi;
/* 471769: sub ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47176b: mov ebx, edi */
  ebx = edi;
/* 47176d: add dword ptr [esi + 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 471770: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 471772: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 471775: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 471777: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 47177a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47177c: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 47177e: add dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 471780: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 471783: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 471785: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 471787: mov ecx, edi */
  ecx = edi;
/* 471789: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47178b: add ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47178e: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 471791: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 471793: test byte ptr [esi + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 471797: jne 0x471741 */
  if (!zf) goto L_471741;
L_471799: /* 471799: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 47179c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47179e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4717a1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4717a3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 4717a6: sub eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4717a8: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 4717aa: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 4717ad: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4717af: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4717b1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4717b3: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 4717b6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4717b7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4717b9: /* 4717b9: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4717bc: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 4717be: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 4717c1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4717c3: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 4717c6: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4717c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4717cb: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 4717cd: mov eax, ecx */
  eax = ecx;
L_4717cf: /* 4717cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4717d0: /* 4717d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4717d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4717d2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4717d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4717d6(void) {
  LOAD_REGS();
L_4717d6: /* 4717d6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4717da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4717db: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 4717df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4717e0: mov esi, ecx */
  esi = ecx;
/* 4717e2: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 4717e6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4717e8: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4717eb: je 0x471858 */
  if (zf) goto L_471858;
L_4717ed: /* 4717ed: and eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4717f0: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4717f2: je 0x471858 */
  if (zf) goto L_471858;
L_4717f4: /* 4717f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4717f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4717f6: call 0x4620da */
  esp -= 4; W32(esp, 0x4717fbu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4717fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4717fc: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 471800: mov edi, eax */
  edi = eax;
/* 471802: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471803: call 0x4617bb */
  esp -= 4; W32(esp, 0x471808u); SPILL(); hle_memcpy(); RELOAD();
/* 471808: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47180b: test byte ptr [esi + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47180f: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 471812: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 471815: jne 0x471826 */
  if (!zf) goto L_471826;
L_471817: /* 471817: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 47181a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47181c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 47181f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471821: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 471824: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_471826: /* 471826: test byte ptr [esi + 0x40], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47182a: jne 0x471853 */
  if (!zf) goto L_471853;
L_47182c: /* 47182c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 47182f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471831: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 471834: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471836: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 471839: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 47183b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 47183e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 471841: jne 0x471853 */
  if (!zf) goto L_471853;
L_471843: /* 471843: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 471846: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471848: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 47184b: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47184e: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 471851: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_471853: /* 471853: or dword ptr [esi + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x40u), r);
  }
/* 471857: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_471858: /* 471858: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471859: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47185a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47185d(void) {
  LOAD_REGS();
L_47185d: /* 47185d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47185e: mov esi, ecx */
  esi = ecx;
/* 471860: mov dword ptr [esi], 0x4c81d0 */
  W32((uint32_t)(esi), 0x4c81d0u);
/* 471866: call 0x46bb9c */
  esp -= 4; W32(esp, 0x47186bu); SPILL(); f_46bb9c(); if (g_unwind) return; RELOAD();
/* 47186b: mov ecx, esi */
  ecx = esi;
/* 47186d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47186e: jmp 0x461d2b */
  SPILL(); f_461d2b(); return;
}

void f_471873(void) {
  LOAD_REGS();
L_471873: /* 471873: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 471877: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471878: mov esi, ecx */
  esi = ecx;
/* 47187a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 47187e: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 471882: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 471884: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 471887: je 0x471904 */
  if (zf) goto L_471904;
L_471889: /* 471889: and eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47188c: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47188e: je 0x471904 */
  if (zf) goto L_471904;
L_471890: /* 471890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471891: lea ebx, [ecx + ecx] */
  ebx = (uint32_t)(ecx + ecx);
/* 471894: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471895: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471896: call 0x4620da */
  esp -= 4; W32(esp, 0x47189bu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 47189b: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47189f: mov edi, eax */
  edi = eax;
/* 4718a1: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4718a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4718a6: call 0x462cb0 */
  esp -= 4; W32(esp, 0x4718abu); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 4718ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4718ae: test byte ptr [esi + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4718b2: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4718b5: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 4718b8: jne 0x4718cd */
  if (!zf) goto L_4718cd;
L_4718ba: /* 4718ba: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4718bd: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4718bf: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4718c2: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4718c4: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 4718c7: mov eax, ebx */
  eax = ebx;
/* 4718c9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4718cb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_4718cd: /* 4718cd: test byte ptr [esi + 0x40], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4718d1: jne 0x4718fe */
  if (!zf) goto L_4718fe;
L_4718d3: /* 4718d3: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4718d6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4718d8: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4718db: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4718dd: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4718e0: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 4718e2: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 4718e4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4718e7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4718ea: jne 0x4718fe */
  if (!zf) goto L_4718fe;
L_4718ec: /* 4718ec: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4718ef: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4718f1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4718f4: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4718f7: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 4718fa: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 4718fc: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_4718fe: /* 4718fe: or dword ptr [esi + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x40u), r);
  }
/* 471902: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471903: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_471904: /* 471904: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471905: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_471908(void) {
  LOAD_REGS();
L_471908: /* 471908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471909: mov esi, ecx */
  esi = ecx;
/* 47190b: mov dword ptr [esi], 0x4c8250 */
  W32((uint32_t)(esi), 0x4c8250u);
/* 471911: call 0x46bb9c */
  esp -= 4; W32(esp, 0x471916u); SPILL(); f_46bb9c(); if (g_unwind) return; RELOAD();
/* 471916: mov ecx, esi */
  ecx = esi;
/* 471918: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471919: jmp 0x461360 */
  SPILL(); f_461360(); return;
}

void f_47191e(void) {
  LOAD_REGS();
L_47191e: /* 47191e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47191f: mov ebp, esp */
  ebp = esp;
/* 471921: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471922: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471923: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471924: mov di, word ptr [ebp + 8] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
/* 471928: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47192c: mov esi, ecx */
  esi = ecx;
/* 47192e: jne 0x471938 */
  if (!zf) goto L_471938;
L_471930: /* 471930: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 471933: jmp 0x471ab9 */
  goto L_471ab9;
L_471938: /* 471938: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 47193b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 47193d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47193f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471940: je 0x471966 */
  if (zf) goto L_471966;
L_471942: /* 471942: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 471945: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 471947: lea ebx, [edx + ecx*2] */
  ebx = (uint32_t)(edx + ecx*2);
/* 47194a: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47194c: jae 0x471966 */
  if (!cf) goto L_471966;
L_47194e: /* 47194e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 47194f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 471951: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 471954: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471956: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 471959: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 47195b: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 47195e: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 471961: jmp 0x471ab8 */
  goto L_471ab8;
L_471966: /* 471966: test byte ptr [esi + 0x40], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47196a: je 0x471975 */
  if (zf) goto L_471975;
L_47196c: /* 47196c: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 471970: jmp 0x471ab8 */
  goto L_471ab8;
L_471975: /* 471975: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 471977: jne 0x47197d */
  if (!zf) goto L_47197d;
L_471979: /* 471979: xor ebx, ebx */
  ebx = 0;
/* 47197b: jmp 0x47198d */
  goto L_47198d;
L_47197d: /* 47197d: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 471980: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 471982: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 471985: shl ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 471987: sub ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 471989: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47198b: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_47198d: /* 47198d: mov eax, ebx */
  eax = ebx;
/* 47198f: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 471991: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 471994: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471997: jae 0x47199c */
  if (!cf) goto L_47199c;
L_471999: /* 471999: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 47199b: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_47199c: /* 47199c: xor edi, edi */
  edi = 0;
/* 47199e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4719a0: jbe 0x4719c5 */
  if ((cf | zf)) goto L_4719c5;
L_4719a2: /* 4719a2: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
/* 4719a7: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4719a9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4719ab: jae 0x4719b1 */
  if (!cf) goto L_4719b1;
L_4719ad: /* 4719ad: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  eax = r;
  }
/* 4719af: jne 0x4719a2 */
  if (!zf) goto L_4719a2;
L_4719b1: /* 4719b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4719b3: jbe 0x4719c5 */
  if ((cf | zf)) goto L_4719c5;
L_4719b5: /* 4719b5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4719b7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4719ba: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4719bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4719bd: call 0x4620da */
  esp -= 4; W32(esp, 0x4719c2u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4719c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4719c3: mov edi, eax */
  edi = eax;
L_4719c5: /* 4719c5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4719c7: jbe 0x4719d8 */
  if ((cf | zf)) goto L_4719d8;
L_4719c9: /* 4719c9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4719cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4719cd: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4719cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4719d0: call 0x462cb0 */
  esp -= 4; W32(esp, 0x4719d5u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 4719d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4719d8: /* 4719d8: test byte ptr [esi + 0x40], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4719dc: je 0x4719e9 */
  if (zf) goto L_4719e9;
L_4719de: /* 4719de: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4719e1: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4719e3: call 0x461c65 */
  esp -= 4; W32(esp, 0x4719e8u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 4719e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4719e9: /* 4719e9: xor eax, eax */
  eax = 0;
/* 4719eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4719ec: or dword ptr [esi + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x40u), r);
  }
/* 4719ef: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4719f1: jne 0x471a32 */
  if (!zf) goto L_471a32;
L_4719f3: /* 4719f3: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 4719f6: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 4719f9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 4719fb: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 4719fe: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 471a00: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 471a03: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 471a06: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 471a08: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 471a0a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 471a0c: test byte ptr [esi + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 471a10: je 0x471a26 */
  if (zf) goto L_471a26;
L_471a12: /* 471a12: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 471a15: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471a17: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 471a1a: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 471a1d: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 471a20: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 471a22: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 471a24: jmp 0x471a9f */
  goto L_471a9f;
L_471a26: /* 471a26: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 471a29: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 471a2b: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 471a2e: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 471a30: jmp 0x471a9a */
  goto L_471a9a;
L_471a32: /* 471a32: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 471a35: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 471a38: sub ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 471a3a: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 471a3c: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 471a3f: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 471a42: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 471a44: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 471a47: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 471a49: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 471a4b: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 471a4d: lea edx, [edi + ecx*2] */
  edx = (uint32_t)(edi + ecx*2);
/* 471a50: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 471a53: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 471a55: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 471a57: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 471a59: lea eax, [edi + ebx*2] */
  eax = (uint32_t)(edi + ebx*2);
/* 471a5c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 471a5e: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 471a61: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 471a63: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 471a66: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 471a69: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 471a6b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 471a6d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 471a6f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 471a71: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 471a73: test byte ptr [esi + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 471a77: jne 0x471a12 */
  if (!zf) goto L_471a12;
L_471a79: /* 471a79: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 471a7c: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 471a7e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 471a81: sub edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 471a83: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 471a86: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 471a88: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 471a8a: lea edx, [edi + edx*2] */
  edx = (uint32_t)(edi + edx*2);
/* 471a8d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 471a8f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 471a90: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 471a92: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 471a95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 471a96: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 471a98: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_471a9a: /* 471a9a: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 471a9d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_471a9f: /* 471a9f: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 471aa2: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 471aa4: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 471aa7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 471aa9: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 471aac: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 471aae: mov cx, word ptr [ebp + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
/* 471ab2: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 471ab5: mov ax, cx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
L_471ab8: /* 471ab8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_471ab9: /* 471ab9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471aba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471abb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471abc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471abf(void) {
  LOAD_REGS();
L_471abf: /* 471abf: mov eax, 0x48c6d6 */
  eax = 0x48c6d6u;
/* 471ac4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471ac9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471ac9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471aca: mov eax, dword ptr [ecx - 0x50] */
  eax = R32((uint32_t)(ecx + 0xffffffb0u));
/* 471acd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471ad1: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471ad4: mov dword ptr [eax + ecx - 0x50], 0x4c82d0 */
  W32((uint32_t)(eax + ecx + 0xffffffb0u), 0x4c82d0u);
/* 471adc: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471ae0: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471ae3: mov ecx, esi */
  ecx = esi;
/* 471ae5: call 0x471647 */
  esp -= 4; W32(esp, 0x471aeau); SPILL(); f_471647(); if (g_unwind) return; RELOAD();
/* 471aea: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 471aed: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471af0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471af3: mov dword ptr [eax + esi - 8], 0x4c702c */
  W32((uint32_t)(eax + esi + 0xfffffff8u), 0x4c702cu);
/* 471afb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471afc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471b03: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471b04: ret  */
  esp += 4; SPILL(); return;
}

void f_471b05(void) {
  LOAD_REGS();
L_471b05: /* 471b05: mov eax, 0x48c6eb */
  eax = 0x48c6ebu;
/* 471b0a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471b0fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471b0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471b10: mov eax, dword ptr [ecx - 0x50] */
  eax = R32((uint32_t)(ecx + 0xffffffb0u));
/* 471b13: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471b16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471b17: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471b1a: mov dword ptr [eax + ecx - 0x50], 0x4c832c */
  W32((uint32_t)(eax + ecx + 0xffffffb0u), 0x4c832cu);
/* 471b22: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471b26: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471b29: mov ecx, esi */
  ecx = esi;
/* 471b2b: call 0x47185d */
  esp -= 4; W32(esp, 0x471b30u); SPILL(); f_47185d(); if (g_unwind) return; RELOAD();
/* 471b30: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 471b33: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471b36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471b39: mov dword ptr [eax + esi - 8], 0x4c7730 */
  W32((uint32_t)(eax + esi + 0xfffffff8u), 0x4c7730u);
/* 471b41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471b42: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471b49: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471b4a: ret  */
  esp += 4; SPILL(); return;
}

void f_471b4b(void) {
  LOAD_REGS();
L_471b4b: /* 471b4b: mov eax, 0x48c700 */
  eax = 0x48c700u;
/* 471b50: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471b55u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471b56: mov eax, dword ptr [ecx - 0x50] */
  eax = R32((uint32_t)(ecx + 0xffffffb0u));
/* 471b59: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471b5d: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471b60: mov dword ptr [eax + ecx - 0x50], 0x4c8388 */
  W32((uint32_t)(eax + ecx + 0xffffffb0u), 0x4c8388u);
/* 471b68: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471b6c: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471b6f: mov ecx, esi */
  ecx = esi;
/* 471b71: call 0x471908 */
  esp -= 4; W32(esp, 0x471b76u); SPILL(); f_471908(); if (g_unwind) return; RELOAD();
/* 471b76: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 471b79: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471b7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471b7f: mov dword ptr [eax + esi - 8], 0x4c7788 */
  W32((uint32_t)(eax + esi + 0xfffffff8u), 0x4c7788u);
/* 471b87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471b88: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471b8f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471b90: ret  */
  esp += 4; SPILL(); return;
}

void f_471b91(void) {
  LOAD_REGS();
L_471b91: /* 471b91: mov eax, 0x48c715 */
  eax = 0x48c715u;
/* 471b96: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471b9bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471b9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471b9c: mov eax, dword ptr [ecx - 0x4c] */
  eax = R32((uint32_t)(ecx + 0xffffffb4u));
/* 471b9f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471ba2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471ba3: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471ba6: mov dword ptr [eax + ecx - 0x4c], 0x4c83e4 */
  W32((uint32_t)(eax + ecx + 0xffffffb4u), 0x4c83e4u);
/* 471bae: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471bb2: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471bb5: mov ecx, esi */
  ecx = esi;
/* 471bb7: call 0x471647 */
  esp -= 4; W32(esp, 0x471bbcu); SPILL(); f_471647(); if (g_unwind) return; RELOAD();
/* 471bbc: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 471bbf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471bc2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471bc5: mov dword ptr [eax + esi - 4], 0x4c6cc0 */
  W32((uint32_t)(eax + esi + 0xfffffffcu), 0x4c6cc0u);
/* 471bcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471bce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471bd5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471bd6: ret  */
  esp += 4; SPILL(); return;
}

void f_471bd7(void) {
  LOAD_REGS();
L_471bd7: /* 471bd7: mov eax, 0x48c72a */
  eax = 0x48c72au;
/* 471bdc: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471be1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471be1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471be2: mov eax, dword ptr [ecx - 0x4c] */
  eax = R32((uint32_t)(ecx + 0xffffffb4u));
/* 471be5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471be8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471be9: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471bec: mov dword ptr [eax + ecx - 0x4c], 0x4c8440 */
  W32((uint32_t)(eax + ecx + 0xffffffb4u), 0x4c8440u);
/* 471bf4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471bf8: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471bfb: mov ecx, esi */
  ecx = esi;
/* 471bfd: call 0x47185d */
  esp -= 4; W32(esp, 0x471c02u); SPILL(); f_47185d(); if (g_unwind) return; RELOAD();
/* 471c02: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 471c05: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471c08: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471c0b: mov dword ptr [eax + esi - 4], 0x4c7680 */
  W32((uint32_t)(eax + esi + 0xfffffffcu), 0x4c7680u);
/* 471c13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471c14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471c1b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471c1c: ret  */
  esp += 4; SPILL(); return;
}

void f_471c1d(void) {
  LOAD_REGS();
L_471c1d: /* 471c1d: mov eax, 0x48c73f */
  eax = 0x48c73fu;
/* 471c22: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471c27u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471c27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471c28: mov eax, dword ptr [ecx - 0x4c] */
  eax = R32((uint32_t)(ecx + 0xffffffb4u));
/* 471c2b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471c2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471c2f: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471c32: mov dword ptr [eax + ecx - 0x4c], 0x4c849c */
  W32((uint32_t)(eax + ecx + 0xffffffb4u), 0x4c849cu);
/* 471c3a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471c3e: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471c41: mov ecx, esi */
  ecx = esi;
/* 471c43: call 0x471908 */
  esp -= 4; W32(esp, 0x471c48u); SPILL(); f_471908(); if (g_unwind) return; RELOAD();
/* 471c48: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 471c4b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471c4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471c51: mov dword ptr [eax + esi - 4], 0x4c76d8 */
  W32((uint32_t)(eax + esi + 0xfffffffcu), 0x4c76d8u);
/* 471c59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471c5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471c61: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471c62: ret  */
  esp += 4; SPILL(); return;
}

void f_471c63(void) {
  LOAD_REGS();
L_471c63: /* 471c63: mov eax, 0x48c754 */
  eax = 0x48c754u;
/* 471c68: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471c6du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471c6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471c6e: mov eax, dword ptr [ecx - 0x54] */
  eax = R32((uint32_t)(ecx + 0xffffffacu));
/* 471c71: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471c74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471c75: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471c78: mov dword ptr [eax + ecx - 0x54], 0x4c6990 */
  W32((uint32_t)(eax + ecx + 0xffffffacu), 0x4c6990u);
/* 471c80: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471c84: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471c87: mov ecx, esi */
  ecx = esi;
/* 471c89: call 0x471647 */
  esp -= 4; W32(esp, 0x471c8eu); SPILL(); f_471647(); if (g_unwind) return; RELOAD();
/* 471c8e: mov ecx, esi */
  ecx = esi;
/* 471c90: call 0x4690e5 */
  esp -= 4; W32(esp, 0x471c95u); SPILL(); f_4690e5(); if (g_unwind) return; RELOAD();
/* 471c95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471c98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471c99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471ca0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471ca1: ret  */
  esp += 4; SPILL(); return;
}

void f_471ca2(void) {
  LOAD_REGS();
L_471ca2: /* 471ca2: mov eax, 0x48c769 */
  eax = 0x48c769u;
/* 471ca7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471cacu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471cac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471cad: mov eax, dword ptr [ecx - 0x54] */
  eax = R32((uint32_t)(ecx + 0xffffffacu));
/* 471cb0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471cb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471cb4: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471cb7: mov dword ptr [eax + ecx - 0x54], 0x4c6a00 */
  W32((uint32_t)(eax + ecx + 0xffffffacu), 0x4c6a00u);
/* 471cbf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471cc3: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471cc6: mov ecx, esi */
  ecx = esi;
/* 471cc8: call 0x47185d */
  esp -= 4; W32(esp, 0x471ccdu); SPILL(); f_47185d(); if (g_unwind) return; RELOAD();
/* 471ccd: mov ecx, esi */
  ecx = esi;
/* 471ccf: call 0x469198 */
  esp -= 4; W32(esp, 0x471cd4u); SPILL(); f_469198(); if (g_unwind) return; RELOAD();
/* 471cd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471cd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471cd8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471cdf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471ce0: ret  */
  esp += 4; SPILL(); return;
}

void f_471ce1(void) {
  LOAD_REGS();
L_471ce1: /* 471ce1: mov eax, 0x48c77e */
  eax = 0x48c77eu;
/* 471ce6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471cebu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471ceb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471cec: mov eax, dword ptr [ecx - 0x54] */
  eax = R32((uint32_t)(ecx + 0xffffffacu));
/* 471cef: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 471cf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471cf3: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 471cf6: mov dword ptr [eax + ecx - 0x54], 0x4c84f8 */
  W32((uint32_t)(eax + ecx + 0xffffffacu), 0x4c84f8u);
/* 471cfe: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471d02: lea esi, [ecx - 0x48] */
  esi = (uint32_t)(ecx + 0xffffffb8u);
/* 471d05: mov ecx, esi */
  ecx = esi;
/* 471d07: call 0x471908 */
  esp -= 4; W32(esp, 0x471d0cu); SPILL(); f_471908(); if (g_unwind) return; RELOAD();
/* 471d0c: mov ecx, esi */
  ecx = esi;
/* 471d0e: call 0x46924b */
  esp -= 4; W32(esp, 0x471d13u); SPILL(); f_46924b(); if (g_unwind) return; RELOAD();
/* 471d13: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471d16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471d17: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471d1e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471d1f: ret  */
  esp += 4; SPILL(); return;
}

void f_471d20(void) {
  LOAD_REGS();
L_471d20: /* 471d20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 471d21: mov ebp, esp */
  ebp = esp;
/* 471d23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471d24: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 471d27: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 471d29: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 471d2c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471d30: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 471d33: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 471d36: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 471d39: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x471d3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 471d3c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 471d3f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471d40: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_471d43(void) {
  LOAD_REGS();
L_471d43: /* 471d43: mov eax, 0x48c788 */
  eax = 0x48c788u;
/* 471d48: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471d4du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471d4d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 471d50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471d51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471d52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471d53: mov esi, ecx */
  esi = ecx;
/* 471d55: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 471d58: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 471d5b: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x471d61u); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 471d61: xor ebx, ebx */
  ebx = 0;
/* 471d63: mov edi, eax */
  edi = eax;
/* 471d65: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 471d68: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 471d6b: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 471d6e: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 471d71: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471d74: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471d79u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471d79: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 471d7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471d7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471d7e: push dword ptr [edi + 0x1c] */
  { uint32_t v = R32((uint32_t)(edi + 0x1cu)); esp -= 4; W32(esp, v); }
/* 471d81: call 0x46e20c */
  esp -= 4; W32(esp, 0x471d86u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 471d86: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471d89: cmp byte ptr [esi + 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x28u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471d8c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 471d8f: je 0x471d96 */
  if (zf) goto L_471d96;
L_471d91: /* 471d91: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 471d94: jmp 0x471d99 */
  goto L_471d99;
L_471d96: /* 471d96: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
L_471d99: /* 471d99: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 471d9c: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471da1u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471da1: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 471da4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471da5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471da6: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 471da9: call 0x46e20c */
  esp -= 4; W32(esp, 0x471daeu); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 471dae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471db1: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 471db4: cmp byte ptr [edi + 0x2e], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x2eu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 471db8: jbe 0x471dc3 */
  if ((cf | zf)) goto L_471dc3;
L_471dba: /* 471dba: mov dword ptr [ebp - 0x14], 0x4c6847 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4c6847u);
/* 471dc1: jmp 0x471dc9 */
  goto L_471dc9;
L_471dc3: /* 471dc3: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 471dc6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_471dc9: /* 471dc9: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471dceu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471dce: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 471dd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471dd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471dd3: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 471dd6: call 0x46e20c */
  esp -= 4; W32(esp, 0x471ddbu); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 471ddb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471dde: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 471de1: cmp byte ptr [edi + 0x2f], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x2fu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 471de5: jbe 0x471df0 */
  if ((cf | zf)) goto L_471df0;
L_471de7: /* 471de7: mov dword ptr [ebp - 0x14], 0x4c8ea0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4c8ea0u);
/* 471dee: jmp 0x471df6 */
  goto L_471df6;
L_471df0: /* 471df0: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 471df3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_471df6: /* 471df6: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471dfbu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471dfb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 471dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471dff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471e00: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 471e03: call 0x46e20c */
  esp -= 4; W32(esp, 0x471e08u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 471e08: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 471e0b: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 471e0e: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 471e10: mov byte ptr [esi + 0xc], al */
  W8((uint32_t)(esi + 0xcu), (eax & 0xffu));
/* 471e13: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 471e16: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 471e18: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471e1b: cmp byte ptr [esi + 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x28u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471e1e: mov byte ptr [esi + 0xd], al */
  W8((uint32_t)(esi + 0xdu), (eax & 0xffu));
/* 471e21: je 0x471e28 */
  if (zf) goto L_471e28;
L_471e23: /* 471e23: mov al, byte ptr [edi + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x28u))) & 0xffu);
/* 471e26: jmp 0x471e2b */
  goto L_471e2b;
L_471e28: /* 471e28: mov al, byte ptr [edi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x29u))) & 0xffu);
L_471e2b: /* 471e2b: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 471e2e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 471e30: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 471e33: jl 0x471e3a */
  if ((sf != of)) goto L_471e3a;
L_471e35: /* 471e35: cmp eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 471e38: jl 0x471e3d */
  if ((sf != of)) goto L_471e3d;
L_471e3a: /* 471e3a: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
L_471e3d: /* 471e3d: movsx eax, byte ptr [edi + 0x2e] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2eu)));
/* 471e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e42: movsx eax, byte ptr [edi + 0x2a] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2au)));
/* 471e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e47: movsx eax, byte ptr [edi + 0x2b] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2bu)));
/* 471e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e4c: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* 471e4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e50: mov ecx, esi */
  ecx = esi;
/* 471e52: call 0x4695a0 */
  esp -= 4; W32(esp, 0x471e57u); SPILL(); f_4695a0(); if (g_unwind) return; RELOAD();
/* 471e57: movsx eax, byte ptr [edi + 0x2f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2fu)));
/* 471e5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e5c: movsx eax, byte ptr [edi + 0x2c] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2cu)));
/* 471e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e61: movsx eax, byte ptr [edi + 0x2d] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2du)));
/* 471e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e66: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 471e69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471e6a: mov ecx, esi */
  ecx = esi;
/* 471e6c: call 0x4695a0 */
  esp -= 4; W32(esp, 0x471e71u); SPILL(); f_4695a0(); if (g_unwind) return; RELOAD();
/* 471e71: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 471e74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 471e75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 471e76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 471e7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 471e7e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471e7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471e82(void) {
  LOAD_REGS();
L_471e82: /* 471e82: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 471e85: call 0x46961e */
  esp -= 4; W32(esp, 0x471e8au); SPILL(); f_46961e(); if (g_unwind) return; RELOAD();
/* 471e8a: xor ebx, ebx */
  ebx = 0;
/* 471e8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471e8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471e8e: call 0x48bed8 */
  esp -= 4; W32(esp, 0x471e93u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_471e93(); return;
}

void f_471e93(void) {
  LOAD_REGS();
L_471e93: /* 471e93: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 471e94: mov ebp, esp */
  ebp = esp;
/* 471e96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471e97: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 471e9a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 471e9c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471ea0: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x471ea3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 471ea3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 471ea6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471ea7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471eaa(void) {
  LOAD_REGS();
L_471eaa: /* 471eaa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 471eab: mov ebp, esp */
  ebp = esp;
/* 471ead: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471eae: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 471eb1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 471eb3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471eb7: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x471ebau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 471eba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 471ebd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471ebe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471ec1(void) {
  LOAD_REGS();
L_471ec1: /* 471ec1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 471ec2: mov ebp, esp */
  ebp = esp;
/* 471ec4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471ec5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 471ec8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 471eca: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471ece: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x471ed1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 471ed1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 471ed4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471ed5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471ed8(void) {
  LOAD_REGS();
L_471ed8: /* 471ed8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 471ed9: mov ebp, esp */
  ebp = esp;
/* 471edb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 471edc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 471edf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 471ee1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 471ee5: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x471ee8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 471ee8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 471eeb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 471eec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_471eef(void) {
  LOAD_REGS();
L_471eef: /* 471eef: mov eax, 0x48c792 */
  eax = 0x48c792u;
/* 471ef4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x471ef9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 471ef9: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 471efc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471efd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 471efe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 471eff: mov esi, ecx */
  esi = ecx;
/* 471f01: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 471f04: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 471f07: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x471f0du); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 471f0d: xor ebx, ebx */
  ebx = 0;
/* 471f0f: mov edi, eax */
  edi = eax;
/* 471f11: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 471f14: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 471f17: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 471f1a: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 471f1d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 471f20: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471f25u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471f25: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 471f28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471f29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471f2a: push dword ptr [edi + 0x1c] */
  { uint32_t v = R32((uint32_t)(edi + 0x1cu)); esp -= 4; W32(esp, v); }
/* 471f2d: call 0x46e20c */
  esp -= 4; W32(esp, 0x471f32u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 471f32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471f35: cmp byte ptr [esi + 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x28u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471f38: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 471f3b: je 0x471f42 */
  if (zf) goto L_471f42;
L_471f3d: /* 471f3d: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 471f40: jmp 0x471f45 */
  goto L_471f45;
L_471f42: /* 471f42: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
L_471f45: /* 471f45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 471f48: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471f4du); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471f4d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 471f50: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 471f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471f54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471f55: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 471f58: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 471f5b: call 0x467d22 */
  esp -= 4; W32(esp, 0x471f60u); SPILL(); f_467d22(); if (g_unwind) return; RELOAD();
/* 471f60: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471f63: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 471f66: cmp byte ptr [edi + 0x2e], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x2eu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 471f6a: jbe 0x471f75 */
  if ((cf | zf)) goto L_471f75;
L_471f6c: /* 471f6c: mov dword ptr [ebp - 0x14], 0x4c6847 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4c6847u);
/* 471f73: jmp 0x471f7b */
  goto L_471f7b;
L_471f75: /* 471f75: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 471f78: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_471f7b: /* 471f7b: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471f80u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471f80: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 471f83: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 471f86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471f87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471f88: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 471f8b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 471f8e: call 0x467d22 */
  esp -= 4; W32(esp, 0x471f93u); SPILL(); f_467d22(); if (g_unwind) return; RELOAD();
/* 471f93: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471f96: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 471f99: cmp byte ptr [edi + 0x2f], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x2fu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 471f9d: jbe 0x471fa8 */
  if ((cf | zf)) goto L_471fa8;
L_471f9f: /* 471f9f: mov dword ptr [ebp - 0x14], 0x4c8ea0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4c8ea0u);
/* 471fa6: jmp 0x471fae */
  goto L_471fae;
L_471fa8: /* 471fa8: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 471fab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_471fae: /* 471fae: call 0x4887f7 */
  esp -= 4; W32(esp, 0x471fb3u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 471fb3: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 471fb6: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 471fb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471fba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 471fbb: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 471fbe: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 471fc1: call 0x467d22 */
  esp -= 4; W32(esp, 0x471fc6u); SPILL(); f_467d22(); if (g_unwind) return; RELOAD();
/* 471fc6: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 471fc9: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 471fcc: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 471fcf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 471fd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471fd3: call 0x461d6f */
  esp -= 4; W32(esp, 0x471fd8u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 471fd8: mov word ptr [esi + 0xc], ax */
  W16((uint32_t)(esi + 0xcu), (eax & 0xffffu));
/* 471fdc: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 471fdf: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 471fe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 471fe3: call 0x461d6f */
  esp -= 4; W32(esp, 0x471fe8u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 471fe8: cmp byte ptr [esi + 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x28u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 471feb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 471fec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 471fed: mov word ptr [esi + 0xe], ax */
  W16((uint32_t)(esi + 0xeu), (eax & 0xffffu));
/* 471ff1: je 0x471ff8 */
  if (zf) goto L_471ff8;
L_471ff3: /* 471ff3: mov al, byte ptr [edi + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x28u))) & 0xffu);
/* 471ff6: jmp 0x471ffb */
  goto L_471ffb;
L_471ff8: /* 471ff8: mov al, byte ptr [edi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x29u))) & 0xffu);
L_471ffb: /* 471ffb: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 471ffe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 472000: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 472003: jl 0x47200a */
  if ((sf != of)) goto L_47200a;
L_472005: /* 472005: cmp eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 472008: jl 0x47200d */
  if ((sf != of)) goto L_47200d;
L_47200a: /* 47200a: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
L_47200d: /* 47200d: movsx eax, byte ptr [edi + 0x2e] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2eu)));
/* 472011: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472012: movsx eax, byte ptr [edi + 0x2a] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2au)));
/* 472016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472017: movsx eax, byte ptr [edi + 0x2b] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2bu)));
/* 47201b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47201c: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* 47201f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472020: mov ecx, esi */
  ecx = esi;
/* 472022: call 0x4695a0 */
  esp -= 4; W32(esp, 0x472027u); SPILL(); f_4695a0(); if (g_unwind) return; RELOAD();
/* 472027: movsx eax, byte ptr [edi + 0x2f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2fu)));
/* 47202b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47202c: movsx eax, byte ptr [edi + 0x2c] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2cu)));
/* 472030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472031: movsx eax, byte ptr [edi + 0x2d] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + 0x2du)));
/* 472035: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472036: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 472039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47203a: mov ecx, esi */
  ecx = esi;
/* 47203c: call 0x4695a0 */
  esp -= 4; W32(esp, 0x472041u); SPILL(); f_4695a0(); if (g_unwind) return; RELOAD();
/* 472041: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 472044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472045: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472046: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47204d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47204e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47204f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_472052(void) {
  LOAD_REGS();
L_472052: /* 472052: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 472055: call 0x46961e */
  esp -= 4; W32(esp, 0x47205au); SPILL(); f_46961e(); if (g_unwind) return; RELOAD();
/* 47205a: xor ebx, ebx */
  ebx = 0;
/* 47205c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47205d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47205e: call 0x48bed8 */
  esp -= 4; W32(esp, 0x472063u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_472063(); return;
}

void f_472063(void) {
  LOAD_REGS();
L_472063: /* 472063: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 472064: mov ebp, esp */
  ebp = esp;
/* 472066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472067: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 47206a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 47206c: jbe 0x47207c */
  if ((cf | zf)) goto L_47207c;
L_47206e: /* 47206e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 472071: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 472074: call 0x46c6ef */
  esp -= 4; W32(esp, 0x472079u); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 472079: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 47207a: jne 0x47206e */
  if (!zf) goto L_47206e;
L_47207c: /* 47207c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47207f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472082: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 472084: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 472087: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47208a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47208b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 47208c: ret  */
  esp += 4; SPILL(); return;
}

void f_47208d(void) {
  LOAD_REGS();
L_47208d: /* 47208d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47208e: mov ebp, esp */
  ebp = esp;
/* 472090: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472093: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 472096: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472097: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47209a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47209b: mov edi, ecx */
  edi = ecx;
/* 47209d: jmp 0x472109 */
  goto L_472109;
L_47209f: /* 47209f: xor eax, eax */
  eax = 0;
/* 4720a1: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4720a3: cmp al, 0x25 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4720a5: je 0x4720b2 */
  if (zf) goto L_4720b2;
L_4720a7: /* 4720a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4720a8: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 4720ab: call 0x46c6ef */
  esp -= 4; W32(esp, 0x4720b0u); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 4720b0: jmp 0x472108 */
  goto L_472108;
L_4720b2: /* 4720b2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4720b3: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4720b5: je 0x47210f */
  if (zf) goto L_47210f;
L_4720b7: /* 4720b7: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4720b9: and byte ptr [ebp + 0x24], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x24u), r);
  }
/* 4720bd: cmp al, 0x45 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x45u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4720bf: mov byte ptr [ebp + 0x20], al */
  W8((uint32_t)(ebp + 0x20u), (eax & 0xffu));
/* 4720c2: je 0x4720d0 */
  if (zf) goto L_4720d0;
L_4720c4: /* 4720c4: cmp al, 0x4f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4720c6: je 0x4720d0 */
  if (zf) goto L_4720d0;
L_4720c8: /* 4720c8: cmp al, 0x51 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x51u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4720ca: je 0x4720d0 */
  if (zf) goto L_4720d0;
L_4720cc: /* 4720cc: cmp al, 0x23 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x23u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4720ce: jne 0x4720dd */
  if (!zf) goto L_4720dd;
L_4720d0: /* 4720d0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4720d1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4720d3: je 0x472113 */
  if (zf) goto L_472113;
L_4720d5: /* 4720d5: mov byte ptr [ebp + 0x24], al */
  W8((uint32_t)(ebp + 0x24u), (eax & 0xffu));
/* 4720d8: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4720da: mov byte ptr [ebp + 0x20], al */
  W8((uint32_t)(ebp + 0x20u), (eax & 0xffu));
L_4720dd: /* 4720dd: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4720e0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4720e2: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4720e5: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4720e8: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4720eb: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4720ee: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4720f1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4720f4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4720f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4720f8: mov ecx, edi */
  ecx = edi;
/* 4720fa: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x4720fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4720fd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4720ff: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472102: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 472105: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_472108: /* 472108: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_472109: /* 472109: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47210b: jne 0x47209f */
  if (!zf) goto L_47209f;
L_47210d: /* 47210d: jmp 0x472128 */
  goto L_472128;
L_47210f: /* 47210f: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* 472111: jmp 0x472120 */
  goto L_472120;
L_472113: /* 472113: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* 472115: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 472118: call 0x46c6ef */
  esp -= 4; W32(esp, 0x47211du); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 47211d: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
L_472120: /* 472120: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 472123: call 0x46c6ef */
  esp -= 4; W32(esp, 0x472128u); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
L_472128: /* 472128: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47212b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47212e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47212f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 472131: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 472134: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472135: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 472138: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472139: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47213a: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47213d(void) {
  LOAD_REGS();
L_47213d: /* 47213d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47213e: mov ebp, esp */
  ebp = esp;
/* 472140: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472141: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 472144: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 472146: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472149: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47214d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472150: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x472153u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 472153: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472156: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 472157: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47215a(void) {
  LOAD_REGS();
L_47215a: /* 47215a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47215b: mov esi, ecx */
  esi = ecx;
/* 47215d: cmp byte ptr [esi + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 472161: jne 0x472168 */
  if (!zf) goto L_472168;
L_472163: /* 472163: call 0x46c732 */
  esp -= 4; W32(esp, 0x472168u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_472168: /* 472168: mov al, byte ptr [esi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x5u))) & 0xffu);
/* 47216b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47216c: ret  */
  esp += 4; SPILL(); return;
}

void f_47216d(void) {
  LOAD_REGS();
L_47216d: /* 47216d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47216e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47216f: mov esi, ecx */
  esi = ecx;
/* 472171: cmp byte ptr [esi + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 472175: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472176: jne 0x47217d */
  if (!zf) goto L_47217d;
L_472178: /* 472178: call 0x46c732 */
  esp -= 4; W32(esp, 0x47217du); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47217d: /* 47217d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 47217f: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 472182: mov ecx, esi */
  ecx = esi;
/* 472184: call 0x46c710 */
  esp -= 4; W32(esp, 0x472189u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 472189: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 47218d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47218f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472190: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472191: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 472194: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472195: ret 8 */
  esp += 12; SPILL(); return;
}

void f_472198(void) {
  LOAD_REGS();
L_472198: /* 472198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472199: mov esi, ecx */
  esi = ecx;
/* 47219b: cmp byte ptr [esi + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47219f: jne 0x4721a6 */
  if (!zf) goto L_4721a6;
L_4721a1: /* 4721a1: call 0x46c779 */
  esp -= 4; W32(esp, 0x4721a6u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_4721a6: /* 4721a6: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 4721aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4721ab: ret  */
  esp += 4; SPILL(); return;
}

void f_4721ac(void) {
  LOAD_REGS();
L_4721ac: /* 4721ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4721ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4721ae: mov esi, ecx */
  esi = ecx;
/* 4721b0: cmp byte ptr [esi + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4721b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4721b5: jne 0x4721bc */
  if (!zf) goto L_4721bc;
L_4721b7: /* 4721b7: call 0x46c779 */
  esp -= 4; W32(esp, 0x4721bcu); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_4721bc: /* 4721bc: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 4721be: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 4721c1: mov ecx, esi */
  ecx = esi;
/* 4721c3: call 0x46c756 */
  esp -= 4; W32(esp, 0x4721c8u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 4721c8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4721cc: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4721ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4721cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4721d0: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 4721d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4721d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4721d7(void) {
  LOAD_REGS();
L_4721d7: /* 4721d7: mov eax, 0x48c7ac */
  eax = 0x48c7acu;
/* 4721dc: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4721e1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4721e1: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4721e4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4721e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4721e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4721e9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4721ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4721ed: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4721f0: xor ebx, ebx */
  ebx = 0;
/* 4721f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4721f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4721f4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4721f7: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4721fa: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 4721fd: call 0x466d1b */
  esp -= 4; W32(esp, 0x472202u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 472202: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 472205: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472208: je 0x4722b3 */
  if (zf) goto L_4722b3;
L_47220e: /* 47220e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 472211: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472212: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472214: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 472217: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472219: call 0x464a5a */
  esp -= 4; W32(esp, 0x47221eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47221e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47221f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 472223: call 0x46587a */
  esp -= 4; W32(esp, 0x472228u); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 472228: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472229: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 47222c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 47222f: call 0x461389 */
  esp -= 4; W32(esp, 0x472234u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 472234: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472236: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472239: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47223b: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 47223e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 472240: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 472244: jg 0x47224b */
  if ((!zf && sf == of)) goto L_47224b;
L_472246: /* 472246: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
L_47224b: /* 47224b: mov edi, ecx */
  edi = ecx;
/* 47224d: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 472250: call 0x46567c */
  esp -= 4; W32(esp, 0x472255u); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_472255: /* 472255: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 472256: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 472258: jle 0x4722b3 */
  if ((zf || sf != of)) goto L_4722b3;
L_47225a: /* 47225a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47225d: jne 0x472265 */
  if (!zf) goto L_472265;
L_47225f: /* 47225f: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 472263: jmp 0x4722b3 */
  goto L_4722b3;
L_472265: /* 472265: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 472268: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 47226b: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 47226e: test byte ptr [edx + ecx*2], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472272: jne 0x4722b3 */
  if (!zf) goto L_4722b3;
L_472274: /* 472274: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 472276: je 0x4722b3 */
  if (zf) goto L_4722b3;
L_472278: /* 472278: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47227b: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 47227e: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 472280: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472282: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472285: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 472289: call 0x465c50 */
  esp -= 4; W32(esp, 0x47228eu); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 47228e: jmp 0x472255 */
  goto L_472255;
L_4722b3: /* 4722b3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4722b6: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 4722b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4722ba: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4722bd: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4722bf: cmp ecx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4722c2: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 4722c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4722c8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4722cb: jne 0x4722d0 */
  if (!zf) goto L_4722d0;
L_4722cd: /* 4722cd: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4722d0: /* 4722d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4722d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4722d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4722d4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4722d7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4722d9: call 0x461453 */
  esp -= 4; W32(esp, 0x4722deu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4722de: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4722e2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4722e5: call 0x46228e */
  esp -= 4; W32(esp, 0x4722eau); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4722ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4722ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4722ee: mov eax, esi */
  eax = esi;
/* 4722f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4722f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4722f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4722f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4722fa: ret  */
  esp += 4; SPILL(); return;
}

void f_472290(void) {
  LOAD_REGS();
L_472290: /* 472290: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472293: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 472295: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 472298: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47229a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47229d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47229f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4722a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4722a3: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4722a8u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4722a8: mov eax, 0x4722ae */
  eax = 0x4722aeu;
/* 4722ad: ret  */
  esp += 4; SPILL(); return;
}

void f_4722ae(void) {
  LOAD_REGS();
L_4722ae: /* 4722ae: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4722b1: xor ebx, ebx */
  ebx = 0;
/* 4722b3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4722b6: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 4722b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4722ba: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4722bd: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4722bf: cmp ecx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4722c2: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 4722c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4722c8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4722cb: jne 0x4722d0 */
  if (!zf) goto L_4722d0;
L_4722cd: /* 4722cd: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4722d0: /* 4722d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4722d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4722d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4722d4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4722d7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4722d9: call 0x461453 */
  esp -= 4; W32(esp, 0x4722deu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4722aeu: guest_unwind_done(); RELOAD(); goto L_4722ae; } return; } RELOAD();
/* 4722de: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4722e2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4722e5: call 0x46228e */
  esp -= 4; W32(esp, 0x4722eau); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4722aeu: guest_unwind_done(); RELOAD(); goto L_4722ae; } return; } RELOAD();
/* 4722ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4722ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4722ee: mov eax, esi */
  eax = esi;
/* 4722f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4722f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4722f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4722f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4722fa: ret  */
  esp += 4; SPILL(); return;
}

void f_4722fb(void) {
  LOAD_REGS();
L_4722fb: /* 4722fb: mov eax, 0x48c7be */
  eax = 0x48c7beu;
/* 472300: call 0x4616c0 */
  esp -= 4; W32(esp, 0x472305u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 472305: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 472308: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472309: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47230a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47230d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47230e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 472311: xor ebx, ebx */
  ebx = 0;
/* 472313: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472315: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 472318: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 47231b: call 0x466d1b */
  esp -= 4; W32(esp, 0x472320u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 472320: cmp byte ptr [ebp - 0x18], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 472323: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472326: je 0x472372 */
  if (zf) goto L_472372;
L_472328: /* 472328: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47232a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47232d: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 472331: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 472335: call 0x46581a */
  esp -= 4; W32(esp, 0x47233au); SPILL(); f_46581a(); if (g_unwind) return; RELOAD();
/* 47233a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47233d: jne 0x472348 */
  if (!zf) goto L_472348;
L_47233f: /* 47233f: mov dword ptr [ebp - 0x14], 3 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3u);
/* 472346: jmp 0x472372 */
  goto L_472372;
L_472348: /* 472348: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47234b: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 47234d: jmp 0x472372 */
  goto L_472372;
L_472372: /* 472372: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472374: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 472377: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472378: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47237b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47237d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472380: call 0x461453 */
  esp -= 4; W32(esp, 0x472385u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 472385: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 472389: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47238c: call 0x46228e */
  esp -= 4; W32(esp, 0x472391u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 472391: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 472394: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472395: mov eax, esi */
  eax = esi;
/* 472397: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472398: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47239f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4723a0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4723a1: ret  */
  esp += 4; SPILL(); return;
}

void f_47234f(void) {
  LOAD_REGS();
L_47234f: /* 47234f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472352: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 472354: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 472357: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472359: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47235c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47235e: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 472361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472362: call 0x464bb2 */
  esp -= 4; W32(esp, 0x472367u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 472367: mov eax, 0x47236d */
  eax = 0x47236du;
/* 47236c: ret  */
  esp += 4; SPILL(); return;
}

void f_47236d(void) {
  LOAD_REGS();
L_47236d: /* 47236d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 472370: xor ebx, ebx */
  ebx = 0;
/* 472372: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472374: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 472377: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472378: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47237b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47237d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472380: call 0x461453 */
  esp -= 4; W32(esp, 0x472385u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47236du: guest_unwind_done(); RELOAD(); goto L_47236d; } return; } RELOAD();
/* 472385: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 472389: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47238c: call 0x46228e */
  esp -= 4; W32(esp, 0x472391u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47236du: guest_unwind_done(); RELOAD(); goto L_47236d; } return; } RELOAD();
/* 472391: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 472394: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472395: mov eax, esi */
  eax = esi;
/* 472397: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472398: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47239f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4723a0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4723a1: ret  */
  esp += 4; SPILL(); return;
}

void f_4723a2(void) {
  LOAD_REGS();
L_4723a2: /* 4723a2: jmp 0x4721d7 */
  SPILL(); f_4721d7(); return;
}

void f_4723a7(void) {
  LOAD_REGS();
L_4723a7: /* 4723a7: jmp 0x4722fb */
  SPILL(); f_4722fb(); return;
}

void f_4723ac(void) {
  LOAD_REGS();
L_4723ac: /* 4723ac: mov eax, 0x48c7d8 */
  eax = 0x48c7d8u;
/* 4723b1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4723b6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4723b6: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4723b9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4723bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4723bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4723be: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4723c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4723c2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4723c5: xor ebx, ebx */
  ebx = 0;
/* 4723c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4723c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4723c9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4723cc: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4723cf: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4723d2: call 0x466d56 */
  esp -= 4; W32(esp, 0x4723d7u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4723d7: cmp byte ptr [ebp - 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4723da: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4723dd: je 0x472492 */
  if (zf) goto L_472492;
L_4723e3: /* 4723e3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4723e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4723e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4723e9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4723ec: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4723ee: call 0x464a5a */
  esp -= 4; W32(esp, 0x4723f3u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4723f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4723f4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4723f8: call 0x46591c */
  esp -= 4; W32(esp, 0x4723fdu); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 4723fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4723fe: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 472401: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 472404: call 0x461389 */
  esp -= 4; W32(esp, 0x472409u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 472409: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47240b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47240e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 472410: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 472413: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 472415: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 472419: jg 0x472420 */
  if ((!zf && sf == of)) goto L_472420;
L_47241b: /* 47241b: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
L_472420: /* 472420: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 472423: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 472426: call 0x4657fc */
  esp -= 4; W32(esp, 0x47242bu); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_47242b: /* 47242b: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47242e: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 472431: mov edi, eax */
  edi = eax;
/* 472433: jle 0x472492 */
  if ((zf || sf != of)) goto L_472492;
L_472435: /* 472435: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 472439: jne 0x472441 */
  if (!zf) goto L_472441;
L_47243b: /* 47243b: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47243f: jmp 0x472492 */
  goto L_472492;
L_472441: /* 472441: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 472444: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 472446: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472447: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 472449: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x47244cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47244c: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47244e: jne 0x472492 */
  if (!zf) goto L_472492;
L_472450: /* 472450: cmp di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 472453: je 0x472492 */
  if (zf) goto L_472492;
L_472455: /* 472455: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 472458: add dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 47245c: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 47245f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472461: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472464: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 472468: call 0x465c69 */
  esp -= 4; W32(esp, 0x47246du); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 47246d: jmp 0x47242b */
  goto L_47242b;
L_472492: /* 472492: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 472495: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 472498: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47249a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47249d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47249f: cmp ecx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4724a2: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 4724a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4724a8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4724ab: jne 0x4724b0 */
  if (!zf) goto L_4724b0;
L_4724ad: /* 4724ad: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4724b0: /* 4724b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4724b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4724b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4724b4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4724b7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4724b9: call 0x461453 */
  esp -= 4; W32(esp, 0x4724beu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4724be: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4724c2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4724c5: call 0x46228e */
  esp -= 4; W32(esp, 0x4724cau); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4724ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4724cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4724ce: mov eax, esi */
  eax = esi;
/* 4724d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4724d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4724d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4724d9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4724da: ret  */
  esp += 4; SPILL(); return;
}

void f_47246f(void) {
  LOAD_REGS();
L_47246f: /* 47246f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472472: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 472474: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 472477: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472479: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47247c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47247e: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 472481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472482: call 0x464bb2 */
  esp -= 4; W32(esp, 0x472487u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 472487: mov eax, 0x47248d */
  eax = 0x47248du;
/* 47248c: ret  */
  esp += 4; SPILL(); return;
}

void f_47248d(void) {
  LOAD_REGS();
L_47248d: /* 47248d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 472490: xor ebx, ebx */
  ebx = 0;
/* 472492: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 472495: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 472498: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47249a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47249d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47249f: cmp ecx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4724a2: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 4724a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4724a8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4724ab: jne 0x4724b0 */
  if (!zf) goto L_4724b0;
L_4724ad: /* 4724ad: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4724b0: /* 4724b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4724b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4724b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4724b4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4724b7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4724b9: call 0x461453 */
  esp -= 4; W32(esp, 0x4724beu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47248du: guest_unwind_done(); RELOAD(); goto L_47248d; } return; } RELOAD();
/* 4724be: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4724c2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4724c5: call 0x46228e */
  esp -= 4; W32(esp, 0x4724cau); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47248du: guest_unwind_done(); RELOAD(); goto L_47248d; } return; } RELOAD();
/* 4724ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4724cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4724ce: mov eax, esi */
  eax = esi;
/* 4724d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4724d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4724d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4724d9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4724da: ret  */
  esp += 4; SPILL(); return;
}

void f_4724db(void) {
  LOAD_REGS();
L_4724db: /* 4724db: mov eax, 0x48c7ea */
  eax = 0x48c7eau;
/* 4724e0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4724e5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4724e5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4724e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4724e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4724ea: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4724ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4724ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4724f1: xor ebx, ebx */
  ebx = 0;
/* 4724f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4724f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4724f5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4724f8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4724fb: call 0x466d56 */
  esp -= 4; W32(esp, 0x472500u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 472500: cmp byte ptr [ebp - 0x18], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 472503: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472506: je 0x472554 */
  if (zf) goto L_472554;
L_472508: /* 472508: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47250a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47250d: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 472511: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 472515: call 0x46584a */
  esp -= 4; W32(esp, 0x47251au); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 47251a: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47251e: jne 0x472529 */
  if (!zf) goto L_472529;
L_472520: /* 472520: mov dword ptr [ebp - 0x14], 3 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3u);
/* 472527: jmp 0x472554 */
  goto L_472554;
L_472529: /* 472529: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47252c: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 47252f: jmp 0x472554 */
  goto L_472554;
L_472554: /* 472554: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472556: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 472559: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47255a: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47255d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47255f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472562: call 0x461453 */
  esp -= 4; W32(esp, 0x472567u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 472567: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47256b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47256e: call 0x46228e */
  esp -= 4; W32(esp, 0x472573u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 472573: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 472576: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472577: mov eax, esi */
  eax = esi;
/* 472579: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47257a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 472581: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472582: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 472583: ret  */
  esp += 4; SPILL(); return;
}

void f_472531(void) {
  LOAD_REGS();
L_472531: /* 472531: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472534: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 472536: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 472539: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47253b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47253e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 472540: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 472543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472544: call 0x464bb2 */
  esp -= 4; W32(esp, 0x472549u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 472549: mov eax, 0x47254f */
  eax = 0x47254fu;
/* 47254e: ret  */
  esp += 4; SPILL(); return;
}

void f_47254f(void) {
  LOAD_REGS();
L_47254f: /* 47254f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 472552: xor ebx, ebx */
  ebx = 0;
/* 472554: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472556: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 472559: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47255a: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47255d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47255f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472562: call 0x461453 */
  esp -= 4; W32(esp, 0x472567u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47254fu: guest_unwind_done(); RELOAD(); goto L_47254f; } return; } RELOAD();
/* 472567: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47256b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47256e: call 0x46228e */
  esp -= 4; W32(esp, 0x472573u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47254fu: guest_unwind_done(); RELOAD(); goto L_47254f; } return; } RELOAD();
/* 472573: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 472576: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472577: mov eax, esi */
  eax = esi;
/* 472579: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47257a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 472581: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472582: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 472583: ret  */
  esp += 4; SPILL(); return;
}

void f_472584(void) {
  LOAD_REGS();
L_472584: /* 472584: mov eax, 0x48c804 */
  eax = 0x48c804u;
/* 472589: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47258eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47258e: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 472591: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 472594: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472595: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472596: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 472599: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47259a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47259d: xor ebx, ebx */
  ebx = 0;
/* 47259f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4725a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4725a1: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4725a4: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4725a7: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4725aa: call 0x466d91 */
  esp -= 4; W32(esp, 0x4725afu); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4725af: cmp byte ptr [ebp - 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4725b2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4725b5: je 0x47266a */
  if (zf) goto L_47266a;
L_4725bb: /* 4725bb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4725be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4725bf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4725c1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4725c4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4725c6: call 0x464a5a */
  esp -= 4; W32(esp, 0x4725cbu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4725cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4725cc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4725d0: call 0x4659be */
  esp -= 4; W32(esp, 0x4725d5u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 4725d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4725d6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4725d9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 4725dc: call 0x461389 */
  esp -= 4; W32(esp, 0x4725e1u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4725e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4725e3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4725e6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4725e8: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 4725eb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4725ed: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4725f1: jg 0x4725f8 */
  if ((!zf && sf == of)) goto L_4725f8;
L_4725f3: /* 4725f3: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
L_4725f8: /* 4725f8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 4725fb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4725fe: call 0x4657fc */
  esp -= 4; W32(esp, 0x472603u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_472603: /* 472603: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 472606: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 472609: mov edi, eax */
  edi = eax;
/* 47260b: jle 0x47266a */
  if ((zf || sf != of)) goto L_47266a;
L_47260d: /* 47260d: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 472611: jne 0x472619 */
  if (!zf) goto L_472619;
L_472613: /* 472613: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 472617: jmp 0x47266a */
  goto L_47266a;
L_472619: /* 472619: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 47261c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47261e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47261f: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 472621: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x472624u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 472624: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 472626: jne 0x47266a */
  if (!zf) goto L_47266a;
L_472628: /* 472628: cmp di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47262b: je 0x47266a */
  if (zf) goto L_47266a;
L_47262d: /* 47262d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 472630: add dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 472634: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 472637: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472639: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47263c: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 472640: call 0x465c69 */
  esp -= 4; W32(esp, 0x472645u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 472645: jmp 0x472603 */
  goto L_472603;
L_47266a: /* 47266a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47266d: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 472670: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472672: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472675: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 472677: cmp ecx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47267a: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 47267d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 472680: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472683: jne 0x472688 */
  if (!zf) goto L_472688;
L_472685: /* 472685: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_472688: /* 472688: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472689: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47268a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47268c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47268f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472691: call 0x461453 */
  esp -= 4; W32(esp, 0x472696u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 472696: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47269a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 47269d: call 0x46228e */
  esp -= 4; W32(esp, 0x4726a2u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4726a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4726a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4726a6: mov eax, esi */
  eax = esi;
/* 4726a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4726a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4726b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4726b1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4726b2: ret  */
  esp += 4; SPILL(); return;
}

void f_472647(void) {
  LOAD_REGS();
L_472647: /* 472647: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47264a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47264c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47264f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472651: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 472654: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 472656: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 472659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47265a: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47265fu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47265f: mov eax, 0x472665 */
  eax = 0x472665u;
/* 472664: ret  */
  esp += 4; SPILL(); return;
}

void f_472665(void) {
  LOAD_REGS();
L_472665: /* 472665: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 472668: xor ebx, ebx */
  ebx = 0;
/* 47266a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47266d: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 472670: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472672: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472675: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 472677: cmp ecx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47267a: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 47267d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 472680: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 472683: jne 0x472688 */
  if (!zf) goto L_472688;
L_472685: /* 472685: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_472688: /* 472688: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472689: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47268a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47268c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47268f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472691: call 0x461453 */
  esp -= 4; W32(esp, 0x472696u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x472665u: guest_unwind_done(); RELOAD(); goto L_472665; } return; } RELOAD();
/* 472696: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47269a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 47269d: call 0x46228e */
  esp -= 4; W32(esp, 0x4726a2u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x472665u: guest_unwind_done(); RELOAD(); goto L_472665; } return; } RELOAD();
/* 4726a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4726a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4726a6: mov eax, esi */
  eax = esi;
/* 4726a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4726a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4726b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4726b1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4726b2: ret  */
  esp += 4; SPILL(); return;
}

void f_4726b3(void) {
  LOAD_REGS();
L_4726b3: /* 4726b3: mov eax, 0x48c816 */
  eax = 0x48c816u;
/* 4726b8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4726bdu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4726bd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4726c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4726c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4726c2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4726c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4726c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4726c9: xor ebx, ebx */
  ebx = 0;
/* 4726cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4726cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4726cd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4726d0: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4726d3: call 0x466d91 */
  esp -= 4; W32(esp, 0x4726d8u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4726d8: cmp byte ptr [ebp - 0x18], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4726db: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4726de: je 0x47272c */
  if (zf) goto L_47272c;
L_4726e0: /* 4726e0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4726e2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4726e5: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4726e9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4726ed: call 0x46584a */
  esp -= 4; W32(esp, 0x4726f2u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 4726f2: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4726f6: jne 0x472701 */
  if (!zf) goto L_472701;
L_4726f8: /* 4726f8: mov dword ptr [ebp - 0x14], 3 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3u);
/* 4726ff: jmp 0x47272c */
  goto L_47272c;
L_472701: /* 472701: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 472704: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 472707: jmp 0x47272c */
  goto L_47272c;
L_47272c: /* 47272c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47272e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 472731: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472732: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 472735: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472737: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47273a: call 0x461453 */
  esp -= 4; W32(esp, 0x47273fu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47273f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 472743: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 472746: call 0x46228e */
  esp -= 4; W32(esp, 0x47274bu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47274b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47274e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47274f: mov eax, esi */
  eax = esi;
/* 472751: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472752: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 472759: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47275a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47275b: ret  */
  esp += 4; SPILL(); return;
}

void f_472709(void) {
  LOAD_REGS();
L_472709: /* 472709: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47270c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47270e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 472711: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472713: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 472716: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 472718: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47271b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47271c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x472721u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 472721: mov eax, 0x472727 */
  eax = 0x472727u;
/* 472726: ret  */
  esp += 4; SPILL(); return;
}

void f_472727(void) {
  LOAD_REGS();
L_472727: /* 472727: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47272a: xor ebx, ebx */
  ebx = 0;
/* 47272c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47272e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 472731: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472732: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 472735: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472737: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47273a: call 0x461453 */
  esp -= 4; W32(esp, 0x47273fu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x472727u: guest_unwind_done(); RELOAD(); goto L_472727; } return; } RELOAD();
/* 47273f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 472743: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 472746: call 0x46228e */
  esp -= 4; W32(esp, 0x47274bu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x472727u: guest_unwind_done(); RELOAD(); goto L_472727; } return; } RELOAD();
/* 47274b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47274e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47274f: mov eax, esi */
  eax = esi;
/* 472751: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472752: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 472759: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47275a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47275b: ret  */
  esp += 4; SPILL(); return;
}

void f_47275c(void) {
  LOAD_REGS();
L_47275c: /* 47275c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472760: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 472764: call 0x465b98 */
  esp -= 4; W32(esp, 0x472769u); SPILL(); f_465b98(); if (g_unwind) return; RELOAD();
/* 472769: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 47276b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47276d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47276e: ret  */
  esp += 4; SPILL(); return;
}

void f_47276f(void) {
  LOAD_REGS();
L_47276f: /* 47276f: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 472773: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 472777: call 0x465c09 */
  esp -= 4; W32(esp, 0x47277cu); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 47277c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 47277e: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472780: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472781: ret  */
  esp += 4; SPILL(); return;
}

void f_472782(void) {
  LOAD_REGS();
L_472782: /* 472782: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472786: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 47278a: call 0x465c09 */
  esp -= 4; W32(esp, 0x47278fu); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 47278f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 472791: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472793: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472794: ret  */
  esp += 4; SPILL(); return;
}

void f_472795(void) {
  LOAD_REGS();
L_472795: /* 472795: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472799: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 47279d: call 0x465b98 */
  esp -= 4; W32(esp, 0x4727a2u); SPILL(); f_465b98(); if (g_unwind) return; RELOAD();
/* 4727a2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4727a4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4727a6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4727a8: ret  */
  esp += 4; SPILL(); return;
}

void f_4727a9(void) {
  LOAD_REGS();
L_4727a9: /* 4727a9: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4727ad: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4727b1: call 0x465c09 */
  esp -= 4; W32(esp, 0x4727b6u); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 4727b6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4727b8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4727ba: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4727bc: ret  */
  esp += 4; SPILL(); return;
}

void f_4727bd(void) {
  LOAD_REGS();
L_4727bd: /* 4727bd: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4727c1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4727c5: call 0x465c09 */
  esp -= 4; W32(esp, 0x4727cau); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 4727ca: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4727cc: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4727ce: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4727d0: ret  */
  esp += 4; SPILL(); return;
}

void f_4727d1(void) {
  LOAD_REGS();
L_4727d1: /* 4727d1: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4727d5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4727d9: call 0x465b98 */
  esp -= 4; W32(esp, 0x4727deu); SPILL(); f_465b98(); if (g_unwind) return; RELOAD();
/* 4727de: xor ecx, ecx */
  ecx = 0;
/* 4727e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4727e2: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 4727e5: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4727e7: ret  */
  esp += 4; SPILL(); return;
}

void f_4727e8(void) {
  LOAD_REGS();
L_4727e8: /* 4727e8: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4727ec: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4727f0: call 0x465c09 */
  esp -= 4; W32(esp, 0x4727f5u); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 4727f5: xor ecx, ecx */
  ecx = 0;
/* 4727f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4727f9: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 4727fc: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4727fe: ret  */
  esp += 4; SPILL(); return;
}

void f_4727ff(void) {
  LOAD_REGS();
L_4727ff: /* 4727ff: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472803: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 472807: call 0x465c09 */
  esp -= 4; W32(esp, 0x47280cu); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 47280c: xor ecx, ecx */
  ecx = 0;
/* 47280e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 472810: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 472813: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 472815: ret  */
  esp += 4; SPILL(); return;
}

void f_472816(void) {
  LOAD_REGS();
L_472816: /* 472816: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 47281a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47281e: call 0x4727d1 */
  esp -= 4; W32(esp, 0x472823u); SPILL(); f_4727d1(); if (g_unwind) return; RELOAD();
/* 472823: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472824: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472825: ret  */
  esp += 4; SPILL(); return;
}

void f_472826(void) {
  LOAD_REGS();
L_472826: /* 472826: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 47282a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47282e: call 0x4727ff */
  esp -= 4; W32(esp, 0x472833u); SPILL(); f_4727ff(); if (g_unwind) return; RELOAD();
/* 472833: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472834: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472835: ret  */
  esp += 4; SPILL(); return;
}

void f_472836(void) {
  LOAD_REGS();
L_472836: /* 472836: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 47283a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47283e: call 0x4727e8 */
  esp -= 4; W32(esp, 0x472843u); SPILL(); f_4727e8(); if (g_unwind) return; RELOAD();
/* 472843: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472844: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472845: ret  */
  esp += 4; SPILL(); return;
}

void f_472846(void) {
  LOAD_REGS();
L_472846: /* 472846: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 47284a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47284e: call 0x4727d1 */
  esp -= 4; W32(esp, 0x472853u); SPILL(); f_4727d1(); if (g_unwind) return; RELOAD();
/* 472853: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 472855: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472856: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472857: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472859: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47285a: ret  */
  esp += 4; SPILL(); return;
}

void f_47285b(void) {
  LOAD_REGS();
L_47285b: /* 47285b: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 47285f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472863: call 0x4727ff */
  esp -= 4; W32(esp, 0x472868u); SPILL(); f_4727ff(); if (g_unwind) return; RELOAD();
/* 472868: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 47286a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47286b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47286c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47286e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47286f: ret  */
  esp += 4; SPILL(); return;
}

void f_472870(void) {
  LOAD_REGS();
L_472870: /* 472870: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 472874: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472878: call 0x4727e8 */
  esp -= 4; W32(esp, 0x47287du); SPILL(); f_4727e8(); if (g_unwind) return; RELOAD();
/* 47287d: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 47287f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472880: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472881: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472883: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472884: ret  */
  esp += 4; SPILL(); return;
}

void f_472885(void) {
  LOAD_REGS();
L_472885: /* 472885: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472889: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47288d: call 0x4727d1 */
  esp -= 4; W32(esp, 0x472892u); SPILL(); f_4727d1(); if (g_unwind) return; RELOAD();
/* 472892: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 472894: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472895: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472896: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472898: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472899: ret  */
  esp += 4; SPILL(); return;
}

void f_47289a(void) {
  LOAD_REGS();
L_47289a: /* 47289a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47289e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4728a2: call 0x4727e8 */
  esp -= 4; W32(esp, 0x4728a7u); SPILL(); f_4727e8(); if (g_unwind) return; RELOAD();
/* 4728a7: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4728a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4728aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4728ab: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4728ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4728ae: ret  */
  esp += 4; SPILL(); return;
}

void f_4728af(void) {
  LOAD_REGS();
L_4728af: /* 4728af: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4728b3: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4728b7: call 0x4727ff */
  esp -= 4; W32(esp, 0x4728bcu); SPILL(); f_4727ff(); if (g_unwind) return; RELOAD();
/* 4728bc: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4728be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4728bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4728c0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4728c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4728c3: ret  */
  esp += 4; SPILL(); return;
}

void f_4728c4(void) {
  LOAD_REGS();
L_4728c4: /* 4728c4: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4728c8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4728cc: call 0x46f113 */
  esp -= 4; W32(esp, 0x4728d1u); SPILL(); f_46f113(); if (g_unwind) return; RELOAD();
/* 4728d1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4728d3: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4728d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4728d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4728d7(void) {
  LOAD_REGS();
L_4728d7: /* 4728d7: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4728db: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4728df: call 0x46f113 */
  esp -= 4; W32(esp, 0x4728e4u); SPILL(); f_46f113(); if (g_unwind) return; RELOAD();
/* 4728e4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4728e6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4728e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4728e9: ret  */
  esp += 4; SPILL(); return;
}

void f_4728ea(void) {
  LOAD_REGS();
L_4728ea: /* 4728ea: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4728ee: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4728f2: call 0x46f113 */
  esp -= 4; W32(esp, 0x4728f7u); SPILL(); f_46f113(); if (g_unwind) return; RELOAD();
/* 4728f7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4728f9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4728fb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4728fd: ret  */
  esp += 4; SPILL(); return;
}

void f_4728fe(void) {
  LOAD_REGS();
L_4728fe: /* 4728fe: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472902: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 472906: call 0x46f113 */
  esp -= 4; W32(esp, 0x47290bu); SPILL(); f_46f113(); if (g_unwind) return; RELOAD();
/* 47290b: xor ecx, ecx */
  ecx = 0;
/* 47290d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47290f: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 472912: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 472914: ret  */
  esp += 4; SPILL(); return;
}

void f_472915(void) {
  LOAD_REGS();
L_472915: /* 472915: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 472919: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47291d: call 0x4729bf */
  esp -= 4; W32(esp, 0x472922u); SPILL(); f_4729bf(); if (g_unwind) return; RELOAD();
/* 472922: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472923: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472924: ret  */
  esp += 4; SPILL(); return;
}

void f_472925(void) {
  LOAD_REGS();
L_472925: /* 472925: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 472929: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47292d: call 0x4728fe */
  esp -= 4; W32(esp, 0x472932u); SPILL(); f_4728fe(); if (g_unwind) return; RELOAD();
/* 472932: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472933: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472934: ret  */
  esp += 4; SPILL(); return;
}

void f_472935(void) {
  LOAD_REGS();
L_472935: /* 472935: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 472939: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47293d: call 0x4729d6 */
  esp -= 4; W32(esp, 0x472942u); SPILL(); f_4729d6(); if (g_unwind) return; RELOAD();
/* 472942: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472943: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472944: ret  */
  esp += 4; SPILL(); return;
}

void f_472945(void) {
  LOAD_REGS();
L_472945: /* 472945: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472949: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47294d: call 0x4729bf */
  esp -= 4; W32(esp, 0x472952u); SPILL(); f_4729bf(); if (g_unwind) return; RELOAD();
/* 472952: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 472954: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472955: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472956: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472958: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472959: ret  */
  esp += 4; SPILL(); return;
}

void f_47295a(void) {
  LOAD_REGS();
L_47295a: /* 47295a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47295e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472962: call 0x4729d6 */
  esp -= 4; W32(esp, 0x472967u); SPILL(); f_4729d6(); if (g_unwind) return; RELOAD();
/* 472967: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 472969: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47296a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47296b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47296d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47296e: ret  */
  esp += 4; SPILL(); return;
}

void f_47296f(void) {
  LOAD_REGS();
L_47296f: /* 47296f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472973: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472977: call 0x4728fe */
  esp -= 4; W32(esp, 0x47297cu); SPILL(); f_4728fe(); if (g_unwind) return; RELOAD();
/* 47297c: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 47297e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47297f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472980: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472982: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472983: ret  */
  esp += 4; SPILL(); return;
}

void f_472984(void) {
  LOAD_REGS();
L_472984: /* 472984: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472988: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 47298c: call 0x46f0a1 */
  esp -= 4; W32(esp, 0x472991u); SPILL(); f_46f0a1(); if (g_unwind) return; RELOAD();
/* 472991: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 472993: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472995: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472996: ret  */
  esp += 4; SPILL(); return;
}

void f_472997(void) {
  LOAD_REGS();
L_472997: /* 472997: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47299b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 47299f: call 0x46f0a1 */
  esp -= 4; W32(esp, 0x4729a4u); SPILL(); f_46f0a1(); if (g_unwind) return; RELOAD();
/* 4729a4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4729a6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4729a8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4729aa: ret  */
  esp += 4; SPILL(); return;
}

void f_4729ab(void) {
  LOAD_REGS();
L_4729ab: /* 4729ab: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4729af: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4729b3: call 0x46f113 */
  esp -= 4; W32(esp, 0x4729b8u); SPILL(); f_46f113(); if (g_unwind) return; RELOAD();
/* 4729b8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4729ba: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4729bc: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4729be: ret  */
  esp += 4; SPILL(); return;
}

void f_4729bf(void) {
  LOAD_REGS();
L_4729bf: /* 4729bf: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4729c3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4729c7: call 0x46f0a1 */
  esp -= 4; W32(esp, 0x4729ccu); SPILL(); f_46f0a1(); if (g_unwind) return; RELOAD();
/* 4729cc: xor ecx, ecx */
  ecx = 0;
/* 4729ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4729d0: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 4729d3: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4729d5: ret  */
  esp += 4; SPILL(); return;
}

void f_4729d6(void) {
  LOAD_REGS();
L_4729d6: /* 4729d6: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4729da: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4729de: call 0x46f113 */
  esp -= 4; W32(esp, 0x4729e3u); SPILL(); f_46f113(); if (g_unwind) return; RELOAD();
/* 4729e3: xor ecx, ecx */
  ecx = 0;
/* 4729e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4729e7: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 4729ea: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4729ec: ret  */
  esp += 4; SPILL(); return;
}

void f_4729ed(void) {
  LOAD_REGS();
L_4729ed: /* 4729ed: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4729f1: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4729f5: call 0x4729bf */
  esp -= 4; W32(esp, 0x4729fau); SPILL(); f_4729bf(); if (g_unwind) return; RELOAD();
/* 4729fa: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4729fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4729fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4729fe: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472a00: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472a01: ret  */
  esp += 4; SPILL(); return;
}

void f_472a02(void) {
  LOAD_REGS();
L_472a02: /* 472a02: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 472a06: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472a0a: call 0x4728fe */
  esp -= 4; W32(esp, 0x472a0fu); SPILL(); f_4728fe(); if (g_unwind) return; RELOAD();
/* 472a0f: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 472a11: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472a12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472a13: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472a15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472a16: ret  */
  esp += 4; SPILL(); return;
}

void f_472a17(void) {
  LOAD_REGS();
L_472a17: /* 472a17: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 472a1b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472a1f: call 0x4729d6 */
  esp -= 4; W32(esp, 0x472a24u); SPILL(); f_4729d6(); if (g_unwind) return; RELOAD();
/* 472a24: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 472a26: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472a27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472a28: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 472a2a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 472a2b: ret  */
  esp += 4; SPILL(); return;
}

void f_472a2c(void) {
  LOAD_REGS();
L_472a2c: /* 472a2c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 472a2d: mov ebp, esp */
  ebp = esp;
/* 472a2f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 472a32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472a33: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 472a36: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 472a39: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 472a3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 472a41: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 472a44: jp 0x472a5f */
  if (pf) goto L_472a5f;
L_472a46: /* 472a46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 472a48: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 472a4b: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 472a4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472a4f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472a52: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472a55: call 0x46d0a7 */
  esp -= 4; W32(esp, 0x472a5au); SPILL(); f_46d0a7(); if (g_unwind) return; RELOAD();
/* 472a5a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472a5d: jmp 0x472aba */
  goto L_472aba;
L_472a5f: /* 472a5f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 472a62: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 472a65: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 472a6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 472a6d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 472a70: jp 0x472a99 */
  if (pf) goto L_472a99;
L_472a72: /* 472a72: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 472a74: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 472a77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472a78: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 472a7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472a7c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 472a7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472a80: call 0x46d199 */
  esp -= 4; W32(esp, 0x472a85u); SPILL(); f_46d199(); if (g_unwind) return; RELOAD();
/* 472a85: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 472a87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 472a8a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 472a8c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472a8f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 472a92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472a95: mov eax, ecx */
  eax = ecx;
/* 472a97: jmp 0x472abd */
  goto L_472abd;
L_472a99: /* 472a99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472a9a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 472a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472a9e: call 0x46cf75 */
  esp -= 4; W32(esp, 0x472aa3u); SPILL(); f_46cf75(); if (g_unwind) return; RELOAD();
/* 472aa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472aa4: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 472aa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472aa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472aa9: call 0x46cd76 */
  esp -= 4; W32(esp, 0x472aaeu); SPILL(); f_46cd76(); if (g_unwind) return; RELOAD();
/* 472aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472aaf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472ab2: call 0x46cf10 */
  esp -= 4; W32(esp, 0x472ab7u); SPILL(); f_46cf10(); if (g_unwind) return; RELOAD();
/* 472ab7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_472aba: /* 472aba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_472abd: /* 472abd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472abe: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 472abf: ret  */
  esp += 4; SPILL(); return;
}

void f_472ac0(void) {
  LOAD_REGS();
L_472ac0: /* 472ac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 472ac1: mov ebp, esp */
  ebp = esp;
/* 472ac3: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 472ac6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472ac7: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 472aca: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 472acd: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 472ad3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 472ad5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 472ad8: jp 0x472af3 */
  if (pf) goto L_472af3;
L_472ada: /* 472ada: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 472adc: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 472adf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472ae0: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 472ae3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472ae6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472ae9: call 0x46d76c */
  esp -= 4; W32(esp, 0x472aeeu); SPILL(); f_46d76c(); if (g_unwind) return; RELOAD();
/* 472aee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472af1: jmp 0x472b4c */
  goto L_472b4c;
L_472af3: /* 472af3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 472af6: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 472af9: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 472aff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 472b01: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 472b04: jp 0x472b2b */
  if (pf) goto L_472b2b;
L_472b06: /* 472b06: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 472b08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472b09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472b0a: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 472b0d: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 472b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472b11: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 472b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472b15: call 0x46d85a */
  esp -= 4; W32(esp, 0x472b1au); SPILL(); f_46d85a(); if (g_unwind) return; RELOAD();
/* 472b1a: mov esi, eax */
  esi = eax;
/* 472b1c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472b1f: mov edi, eax */
  edi = eax;
/* 472b21: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472b22: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472b23: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472b24: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472b27: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472b28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472b29: jmp 0x472b4f */
  goto L_472b4f;
L_472b2b: /* 472b2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472b2c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 472b2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472b30: call 0x46d684 */
  esp -= 4; W32(esp, 0x472b35u); SPILL(); f_46d684(); if (g_unwind) return; RELOAD();
/* 472b35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472b36: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 472b39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472b3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472b3b: call 0x46d4bf */
  esp -= 4; W32(esp, 0x472b40u); SPILL(); f_46d4bf(); if (g_unwind) return; RELOAD();
/* 472b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472b41: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472b44: call 0x46d619 */
  esp -= 4; W32(esp, 0x472b49u); SPILL(); f_46d619(); if (g_unwind) return; RELOAD();
/* 472b49: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_472b4c: /* 472b4c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_472b4f: /* 472b4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472b50: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 472b51: ret  */
  esp += 4; SPILL(); return;
}

void f_472b52(void) {
  LOAD_REGS();
L_472b52: /* 472b52: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 472b53: mov ebp, esp */
  ebp = esp;
/* 472b55: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 472b58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472b59: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 472b5c: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 472b5f: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 472b65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 472b67: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 472b6a: jp 0x472b85 */
  if (pf) goto L_472b85;
L_472b6c: /* 472b6c: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 472b6e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 472b71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472b72: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 472b75: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472b78: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472b7b: call 0x46de69 */
  esp -= 4; W32(esp, 0x472b80u); SPILL(); f_46de69(); if (g_unwind) return; RELOAD();
/* 472b80: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472b83: jmp 0x472bde */
  goto L_472bde;
L_472b85: /* 472b85: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 472b88: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 472b8b: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 472b91: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 472b93: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 472b96: jp 0x472bbd */
  if (pf) goto L_472bbd;
L_472b98: /* 472b98: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 472b9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472b9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472b9c: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 472b9f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 472ba2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472ba3: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 472ba6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472ba7: call 0x46df57 */
  esp -= 4; W32(esp, 0x472bacu); SPILL(); f_46df57(); if (g_unwind) return; RELOAD();
/* 472bac: mov esi, eax */
  esi = eax;
/* 472bae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 472bb1: mov edi, eax */
  edi = eax;
/* 472bb3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472bb4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472bb5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472bb6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472bb9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 472bba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472bbb: jmp 0x472be1 */
  goto L_472be1;
L_472bbd: /* 472bbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472bbe: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 472bc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472bc2: call 0x46dd34 */
  esp -= 4; W32(esp, 0x472bc7u); SPILL(); f_46dd34(); if (g_unwind) return; RELOAD();
/* 472bc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472bc8: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 472bcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472bcd: call 0x46d4bf */
  esp -= 4; W32(esp, 0x472bd2u); SPILL(); f_46d4bf(); if (g_unwind) return; RELOAD();
/* 472bd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472bd3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 472bd6: call 0x46dcc9 */
  esp -= 4; W32(esp, 0x472bdbu); SPILL(); f_46dcc9(); if (g_unwind) return; RELOAD();
/* 472bdb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_472bde: /* 472bde: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_472be1: /* 472be1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472be2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 472be3: ret  */
  esp += 4; SPILL(); return;
}

void f_472be4(void) {
  LOAD_REGS();
L_472be4: /* 472be4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472be5: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 472be9: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472bec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472bed: mov esi, ecx */
  esi = ecx;
/* 472bef: je 0x472c15 */
  if (zf) goto L_472c15;
L_472bf1: /* 472bf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472bf2: push 0x471647 */
  { uint32_t v = 0x471647u; esp -= 4; W32(esp, v); }
/* 472bf7: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 472bfa: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 472bfc: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 472bfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472bff: call 0x48be30 */
  esp -= 4; W32(esp, 0x472c04u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 472c04: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472c07: je 0x472c10 */
  if (zf) goto L_472c10;
L_472c09: /* 472c09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472c0a: call 0x48bdcd */
  esp -= 4; W32(esp, 0x472c0fu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 472c0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_472c10: /* 472c10: mov eax, edi */
  eax = edi;
/* 472c12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472c13: jmp 0x472c2a */
  goto L_472c2a;
L_472c15: /* 472c15: mov ecx, esi */
  ecx = esi;
/* 472c17: call 0x471647 */
  esp -= 4; W32(esp, 0x472c1cu); SPILL(); f_471647(); if (g_unwind) return; RELOAD();
/* 472c1c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472c1f: je 0x472c28 */
  if (zf) goto L_472c28;
L_472c21: /* 472c21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472c22: call 0x461c65 */
  esp -= 4; W32(esp, 0x472c27u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 472c27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_472c28: /* 472c28: mov eax, esi */
  eax = esi;
L_472c2a: /* 472c2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472c2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472c2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_472c2f(void) {
  LOAD_REGS();
L_472c2f: /* 472c2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472c30: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 472c34: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472c37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472c38: mov esi, ecx */
  esi = ecx;
/* 472c3a: je 0x472c60 */
  if (zf) goto L_472c60;
L_472c3c: /* 472c3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472c3d: push 0x47185d */
  { uint32_t v = 0x47185du; esp -= 4; W32(esp, v); }
/* 472c42: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 472c45: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 472c47: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 472c49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472c4a: call 0x48be30 */
  esp -= 4; W32(esp, 0x472c4fu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 472c4f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472c52: je 0x472c5b */
  if (zf) goto L_472c5b;
L_472c54: /* 472c54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472c55: call 0x48bdcd */
  esp -= 4; W32(esp, 0x472c5au); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 472c5a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_472c5b: /* 472c5b: mov eax, edi */
  eax = edi;
/* 472c5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472c5e: jmp 0x472c75 */
  goto L_472c75;
L_472c60: /* 472c60: mov ecx, esi */
  ecx = esi;
/* 472c62: call 0x47185d */
  esp -= 4; W32(esp, 0x472c67u); SPILL(); f_47185d(); if (g_unwind) return; RELOAD();
/* 472c67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472c6a: je 0x472c73 */
  if (zf) goto L_472c73;
L_472c6c: /* 472c6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472c6d: call 0x461c65 */
  esp -= 4; W32(esp, 0x472c72u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 472c72: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_472c73: /* 472c73: mov eax, esi */
  eax = esi;
L_472c75: /* 472c75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472c76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472c77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_472c7a(void) {
  LOAD_REGS();
L_472c7a: /* 472c7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472c7b: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 472c7f: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472c82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472c83: mov esi, ecx */
  esi = ecx;
/* 472c85: je 0x472cab */
  if (zf) goto L_472cab;
L_472c87: /* 472c87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472c88: push 0x471908 */
  { uint32_t v = 0x471908u; esp -= 4; W32(esp, v); }
/* 472c8d: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 472c90: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 472c92: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 472c94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472c95: call 0x48be30 */
  esp -= 4; W32(esp, 0x472c9au); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 472c9a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472c9d: je 0x472ca6 */
  if (zf) goto L_472ca6;
L_472c9f: /* 472c9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472ca0: call 0x48bdcd */
  esp -= 4; W32(esp, 0x472ca5u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 472ca5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_472ca6: /* 472ca6: mov eax, edi */
  eax = edi;
/* 472ca8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472ca9: jmp 0x472cc0 */
  goto L_472cc0;
L_472cab: /* 472cab: mov ecx, esi */
  ecx = esi;
/* 472cad: call 0x471908 */
  esp -= 4; W32(esp, 0x472cb2u); SPILL(); f_471908(); if (g_unwind) return; RELOAD();
/* 472cb2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472cb5: je 0x472cbe */
  if (zf) goto L_472cbe;
L_472cb7: /* 472cb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472cb8: call 0x461c65 */
  esp -= 4; W32(esp, 0x472cbdu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 472cbd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_472cbe: /* 472cbe: mov eax, esi */
  eax = esi;
L_472cc0: /* 472cc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472cc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472cc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_472cc5(void) {
  LOAD_REGS();
L_472cc5: /* 472cc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472cc6: lea esi, [ecx + 0x50] */
  esi = (uint32_t)(ecx + 0x50u);
/* 472cc9: mov ecx, esi */
  ecx = esi;
/* 472ccb: call 0x471abf */
  esp -= 4; W32(esp, 0x472cd0u); SPILL(); f_471abf(); if (g_unwind) return; RELOAD();
/* 472cd0: mov ecx, esi */
  ecx = esi;
/* 472cd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472cd3: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_472cd8(void) {
  LOAD_REGS();
L_472cd8: /* 472cd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472cd9: lea esi, [ecx + 0x50] */
  esi = (uint32_t)(ecx + 0x50u);
/* 472cdc: mov ecx, esi */
  ecx = esi;
/* 472cde: call 0x471b05 */
  esp -= 4; W32(esp, 0x472ce3u); SPILL(); f_471b05(); if (g_unwind) return; RELOAD();
/* 472ce3: mov ecx, esi */
  ecx = esi;
/* 472ce5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472ce6: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_472ceb(void) {
  LOAD_REGS();
L_472ceb: /* 472ceb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472cec: lea esi, [ecx + 0x50] */
  esi = (uint32_t)(ecx + 0x50u);
/* 472cef: mov ecx, esi */
  ecx = esi;
/* 472cf1: call 0x471b4b */
  esp -= 4; W32(esp, 0x472cf6u); SPILL(); f_471b4b(); if (g_unwind) return; RELOAD();
/* 472cf6: mov ecx, esi */
  ecx = esi;
/* 472cf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472cf9: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_472cfe(void) {
  LOAD_REGS();
L_472cfe: /* 472cfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472cff: lea esi, [ecx + 0x4c] */
  esi = (uint32_t)(ecx + 0x4cu);
/* 472d02: mov ecx, esi */
  ecx = esi;
/* 472d04: call 0x471b91 */
  esp -= 4; W32(esp, 0x472d09u); SPILL(); f_471b91(); if (g_unwind) return; RELOAD();
/* 472d09: mov ecx, esi */
  ecx = esi;
/* 472d0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472d0c: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_472d11(void) {
  LOAD_REGS();
L_472d11: /* 472d11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472d12: lea esi, [ecx + 0x4c] */
  esi = (uint32_t)(ecx + 0x4cu);
/* 472d15: mov ecx, esi */
  ecx = esi;
/* 472d17: call 0x471bd7 */
  esp -= 4; W32(esp, 0x472d1cu); SPILL(); f_471bd7(); if (g_unwind) return; RELOAD();
/* 472d1c: mov ecx, esi */
  ecx = esi;
/* 472d1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472d1f: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_472d24(void) {
  LOAD_REGS();
L_472d24: /* 472d24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472d25: lea esi, [ecx + 0x4c] */
  esi = (uint32_t)(ecx + 0x4cu);
/* 472d28: mov ecx, esi */
  ecx = esi;
/* 472d2a: call 0x471c1d */
  esp -= 4; W32(esp, 0x472d2fu); SPILL(); f_471c1d(); if (g_unwind) return; RELOAD();
/* 472d2f: mov ecx, esi */
  ecx = esi;
/* 472d31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472d32: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_472d37(void) {
  LOAD_REGS();
L_472d37: /* 472d37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472d38: lea esi, [ecx + 0x54] */
  esi = (uint32_t)(ecx + 0x54u);
/* 472d3b: mov ecx, esi */
  ecx = esi;
/* 472d3d: call 0x471c63 */
  esp -= 4; W32(esp, 0x472d42u); SPILL(); f_471c63(); if (g_unwind) return; RELOAD();
/* 472d42: mov ecx, esi */
  ecx = esi;
/* 472d44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472d45: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_472d4a(void) {
  LOAD_REGS();
L_472d4a: /* 472d4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472d4b: lea esi, [ecx + 0x54] */
  esi = (uint32_t)(ecx + 0x54u);
/* 472d4e: mov ecx, esi */
  ecx = esi;
/* 472d50: call 0x471ca2 */
  esp -= 4; W32(esp, 0x472d55u); SPILL(); f_471ca2(); if (g_unwind) return; RELOAD();
/* 472d55: mov ecx, esi */
  ecx = esi;
/* 472d57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472d58: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_472d5d(void) {
  LOAD_REGS();
L_472d5d: /* 472d5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472d5e: lea esi, [ecx + 0x54] */
  esi = (uint32_t)(ecx + 0x54u);
/* 472d61: mov ecx, esi */
  ecx = esi;
/* 472d63: call 0x471ce1 */
  esp -= 4; W32(esp, 0x472d68u); SPILL(); f_471ce1(); if (g_unwind) return; RELOAD();
/* 472d68: mov ecx, esi */
  ecx = esi;
/* 472d6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472d6b: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_472d70(void) {
  LOAD_REGS();
L_472d70: /* 472d70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 472d71: mov ebp, esp */
  ebp = esp;
/* 472d73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472d74: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 472d77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472d78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472d79: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 472d7c: cmp dword ptr [ebx + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472d7f: mov esi, ecx */
  esi = ecx;
/* 472d81: jae 0x472d88 */
  if (!cf) goto L_472d88;
L_472d83: /* 472d83: call 0x487763 */
  esp -= 4; W32(esp, 0x472d88u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_472d88: /* 472d88: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 472d8b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 472d8d: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472d90: jae 0x472d95 */
  if (!cf) goto L_472d95;
L_472d92: /* 472d92: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_472d95: /* 472d95: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 472d98: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 472d9b: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 472d9e: ja 0x472da7 */
  if ((!cf && !zf)) goto L_472da7;
L_472da0: /* 472da0: mov ecx, esi */
  ecx = esi;
/* 472da2: call 0x4877fe */
  esp -= 4; W32(esp, 0x472da7u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_472da7: /* 472da7: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 472dab: jbe 0x472dfe */
  if ((cf | zf)) goto L_472dfe;
L_472dad: /* 472dad: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 472db0: add edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 472db3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 472db5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472db6: mov ecx, esi */
  ecx = esi;
/* 472db8: call 0x462402 */
  esp -= 4; W32(esp, 0x472dbdu); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 472dbd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472dbf: je 0x472dfe */
  if (zf) goto L_472dfe;
L_472dc1: /* 472dc1: cmp dword ptr [ebx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472dc5: jb 0x472dcc */
  if (cf) goto L_472dcc;
L_472dc7: /* 472dc7: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 472dca: jmp 0x472dcf */
  goto L_472dcf;
L_472dcc: /* 472dcc: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_472dcf: /* 472dcf: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472dd3: jb 0x472dda */
  if (cf) goto L_472dda;
L_472dd5: /* 472dd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 472dd8: jmp 0x472ddd */
  goto L_472ddd;
L_472dda: /* 472dda: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_472ddd: /* 472ddd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 472de0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 472de3: lea ecx, [ebx + ecx*2] */
  ecx = (uint32_t)(ebx + ecx*2);
/* 472de6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472de7: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 472dea: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 472ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472dee: call 0x462cb0 */
  esp -= 4; W32(esp, 0x472df3u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 472df3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472df6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472df7: mov ecx, esi */
  ecx = esi;
/* 472df9: call 0x4624dd */
  esp -= 4; W32(esp, 0x472dfeu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_472dfe: /* 472dfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472dff: mov eax, esi */
  eax = esi;
/* 472e01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472e02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472e03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 472e04: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_472e07(void) {
  LOAD_REGS();
L_472e07: /* 472e07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 472e08: mov ebp, esp */
  ebp = esp;
/* 472e0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472e0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472e0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472e0d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 472e10: mov esi, ecx */
  esi = ecx;
/* 472e12: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472e15: jb 0x472e22 */
  if (cf) goto L_472e22;
L_472e17: /* 472e17: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 472e1a: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 472e1d: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472e20: jae 0x472e29 */
  if (!cf) goto L_472e29;
L_472e22: /* 472e22: mov ecx, esi */
  ecx = esi;
/* 472e24: call 0x487763 */
  esp -= 4; W32(esp, 0x472e29u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_472e29: /* 472e29: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 472e2c: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 472e2f: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 472e32: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472e35: jae 0x472e3a */
  if (!cf) goto L_472e3a;
L_472e37: /* 472e37: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_472e3a: /* 472e3a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 472e3d: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 472e40: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 472e43: ja 0x472e4c */
  if ((!cf && !zf)) goto L_472e4c;
L_472e45: /* 472e45: mov ecx, esi */
  ecx = esi;
/* 472e47: call 0x4877fe */
  esp -= 4; W32(esp, 0x472e4cu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_472e4c: /* 472e4c: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 472e50: jbe 0x472f22 */
  if ((cf | zf)) goto L_472f22;
L_472e56: /* 472e56: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 472e59: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 472e5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 472e5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472e5f: mov ecx, esi */
  ecx = esi;
/* 472e61: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 472e64: call 0x462402 */
  esp -= 4; W32(esp, 0x472e69u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 472e69: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 472e6b: je 0x472f22 */
  if (zf) goto L_472f22;
L_472e71: /* 472e71: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 472e74: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472e77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472e78: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 472e7b: jb 0x472e81 */
  if (cf) goto L_472e81;
L_472e7d: /* 472e7d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 472e7f: jmp 0x472e83 */
  goto L_472e83;
L_472e81: /* 472e81: mov ecx, ebx */
  ecx = ebx;
L_472e83: /* 472e83: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472e86: jb 0x472e8c */
  if (cf) goto L_472e8c;
L_472e88: /* 472e88: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 472e8a: jmp 0x472e8e */
  goto L_472e8e;
L_472e8c: /* 472e8c: mov eax, ebx */
  eax = ebx;
L_472e8e: /* 472e8e: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 472e91: sub edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 472e94: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 472e96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 472e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 472e9a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472e9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 472e9d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 472ea0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 472ea2: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 472ea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472ea6: call 0x463de2 */
  esp -= 4; W32(esp, 0x472eabu); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 472eab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 472eae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472eb1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 472eb3: jne 0x472eec */
  if (!zf) goto L_472eec;
L_472eb5: /* 472eb5: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 472eb8: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472ebb: jae 0x472ec4 */
  if (!cf) goto L_472ec4;
L_472ebd: /* 472ebd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 472ec0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 472ec2: jmp 0x472ec6 */
  goto L_472ec6;
L_472ec4: /* 472ec4: mov ecx, eax */
  ecx = eax;
L_472ec6: /* 472ec6: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 472ec9: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472ecc: jb 0x472ed2 */
  if (cf) goto L_472ed2;
L_472ece: /* 472ece: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 472ed0: jmp 0x472ed4 */
  goto L_472ed4;
L_472ed2: /* 472ed2: mov eax, ebx */
  eax = ebx;
L_472ed4: /* 472ed4: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472ed7: jb 0x472edb */
  if (cf) goto L_472edb;
L_472ed9: /* 472ed9: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_472edb: /* 472edb: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 472ede: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 472ee1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472ee2: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 472ee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472ee5: call 0x463de2 */
  esp -= 4; W32(esp, 0x472eeau); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 472eea: jmp 0x472f14 */
  goto L_472f14;
L_472eec: /* 472eec: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472ef0: jb 0x472ef7 */
  if (cf) goto L_472ef7;
L_472ef2: /* 472ef2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 472ef5: jmp 0x472efa */
  goto L_472efa;
L_472ef7: /* 472ef7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_472efa: /* 472efa: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472efe: jb 0x472f02 */
  if (cf) goto L_472f02;
L_472f00: /* 472f00: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_472f02: /* 472f02: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 472f05: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 472f08: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 472f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472f0c: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 472f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472f0f: call 0x462cb0 */
  esp -= 4; W32(esp, 0x472f14u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
L_472f14: /* 472f14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 472f17: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 472f1a: mov ecx, esi */
  ecx = esi;
/* 472f1c: call 0x4624dd */
  esp -= 4; W32(esp, 0x472f21u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 472f21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_472f22: /* 472f22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472f23: mov eax, esi */
  eax = esi;
/* 472f25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472f26: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 472f27: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_472f2a(void) {
  LOAD_REGS();
L_472f2a: /* 472f2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472f2b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 472f2f: mov esi, ecx */
  esi = ecx;
/* 472f31: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x472f37u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 472f37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 472f38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 472f39: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 472f3d: mov ecx, esi */
  ecx = esi;
/* 472f3f: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 472f43: call 0x4732e2 */
  esp -= 4; W32(esp, 0x472f48u); SPILL(); f_4732e2(); if (g_unwind) return; RELOAD();
/* 472f48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472f49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_472f4c(void) {
  LOAD_REGS();
L_472f4c: /* 472f4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472f4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472f4e: mov esi, ecx */
  esi = ecx;
/* 472f50: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472f54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472f55: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 472f58: jb 0x472f5e */
  if (cf) goto L_472f5e;
L_472f5a: /* 472f5a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 472f5c: jmp 0x472f60 */
  goto L_472f60;
L_472f5e: /* 472f5e: mov ecx, edi */
  ecx = edi;
L_472f60: /* 472f60: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 472f64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 472f66: jne 0x472f6c */
  if (!zf) goto L_472f6c;
L_472f68: /* 472f68: xor ebx, ebx */
  ebx = 0;
/* 472f6a: jmp 0x472f72 */
  goto L_472f72;
L_472f6c: /* 472f6c: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 472f6e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 472f70: mov ebx, eax */
  ebx = eax;
L_472f72: /* 472f72: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 472f76: mov ecx, esi */
  ecx = esi;
/* 472f78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 472f7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472f7b: call 0x4733c4 */
  esp -= 4; W32(esp, 0x472f80u); SPILL(); f_4733c4(); if (g_unwind) return; RELOAD();
/* 472f80: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472f84: jb 0x472f88 */
  if (cf) goto L_472f88;
L_472f86: /* 472f86: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_472f88: /* 472f88: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 472f8c: lea ecx, [edi + ebx*2] */
  ecx = (uint32_t)(edi + ebx*2);
/* 472f8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472f90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472f91: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 472f93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472f94: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_472f97(void) {
  LOAD_REGS();
L_472f97: /* 472f97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472f98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472f99: mov esi, ecx */
  esi = ecx;
/* 472f9b: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472f9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472fa0: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 472fa3: jb 0x472fa9 */
  if (cf) goto L_472fa9;
L_472fa5: /* 472fa5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 472fa7: jmp 0x472fab */
  goto L_472fab;
L_472fa9: /* 472fa9: mov ecx, edi */
  ecx = edi;
L_472fab: /* 472fab: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 472faf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 472fb1: jne 0x472fb7 */
  if (!zf) goto L_472fb7;
L_472fb3: /* 472fb3: xor ebx, ebx */
  ebx = 0;
/* 472fb5: jmp 0x472fbd */
  goto L_472fbd;
L_472fb7: /* 472fb7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 472fb9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 472fbb: mov ebx, eax */
  ebx = eax;
L_472fbd: /* 472fbd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 472fbf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472fc0: mov ecx, esi */
  ecx = esi;
/* 472fc2: call 0x47349c */
  esp -= 4; W32(esp, 0x472fc7u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 472fc7: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472fcb: jb 0x472fcf */
  if (cf) goto L_472fcf;
L_472fcd: /* 472fcd: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_472fcf: /* 472fcf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 472fd3: lea ecx, [edi + ebx*2] */
  ecx = (uint32_t)(edi + ebx*2);
/* 472fd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 472fd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 472fd8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 472fda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 472fdb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_472fde(void) {
  LOAD_REGS();
L_472fde: /* 472fde: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 472fdf: mov ebp, esp */
  ebp = esp;
/* 472fe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 472fe2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 472fe3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 472fe4: mov edi, ecx */
  edi = ecx;
/* 472fe6: cmp dword ptr [edi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 472fea: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 472fed: jb 0x472ff3 */
  if (cf) goto L_472ff3;
L_472fef: /* 472fef: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 472ff1: jmp 0x472ff5 */
  goto L_472ff5;
L_472ff3: /* 472ff3: mov eax, ebx */
  eax = ebx;
L_472ff5: /* 472ff5: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 472ff9: jne 0x472fff */
  if (!zf) goto L_472fff;
L_472ffb: /* 472ffb: xor esi, esi */
  esi = 0;
/* 472ffd: jmp 0x473006 */
  goto L_473006;
L_472fff: /* 472fff: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 473002: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 473004: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
L_473006: /* 473006: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 473009: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47300b: je 0x473012 */
  if (zf) goto L_473012;
L_47300d: /* 47300d: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473010: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_473012: /* 473012: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473013: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473014: mov ecx, edi */
  ecx = edi;
/* 473016: call 0x47349c */
  esp -= 4; W32(esp, 0x47301bu); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 47301b: cmp dword ptr [edi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47301f: jb 0x473023 */
  if (cf) goto L_473023;
L_473021: /* 473021: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_473023: /* 473023: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 473026: lea ecx, [ebx + esi*2] */
  ecx = (uint32_t)(ebx + esi*2);
/* 473029: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47302a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47302b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47302d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47302e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 47302f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_473032(void) {
  LOAD_REGS();
L_473032: /* 473032: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473034: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473035: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 473036: mov esi, ecx */
  esi = ecx;
/* 473038: call 0x46adc2 */
  esp -= 4; W32(esp, 0x47303du); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 47303d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47303e: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 47303f: mov ecx, esi */
  ecx = esi;
/* 473041: call 0x46adf7 */
  esp -= 4; W32(esp, 0x473046u); SPILL(); f_46adf7(); if (g_unwind) return; RELOAD();
/* 473046: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 47304a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47304b: mov ecx, esi */
  ecx = esi;
/* 47304d: call 0x472fde */
  esp -= 4; W32(esp, 0x473052u); SPILL(); f_472fde(); if (g_unwind) return; RELOAD();
/* 473052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473053: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473054: ret  */
  esp += 4; SPILL(); return;
}

void f_473055(void) {
  LOAD_REGS();
L_473055: /* 473055: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473056: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47305a: mov esi, ecx */
  esi = ecx;
/* 47305c: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x473062u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 473062: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473064: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473068: mov ecx, esi */
  ecx = esi;
/* 47306a: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47306e: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473072: call 0x4737ff */
  esp -= 4; W32(esp, 0x473077u); SPILL(); f_4737ff(); if (g_unwind) return; RELOAD();
/* 473077: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473078: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47307b(void) {
  LOAD_REGS();
L_47307b: /* 47307b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47307c: mov ebp, esp */
  ebp = esp;
/* 47307e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47307f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473081: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 473084: mov esi, ecx */
  esi = ecx;
/* 473086: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473089: jae 0x473090 */
  if (!cf) goto L_473090;
L_47308b: /* 47308b: call 0x487763 */
  esp -= 4; W32(esp, 0x473090u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_473090: /* 473090: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 473093: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 473096: mov ecx, eax */
  ecx = eax;
/* 473098: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47309a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47309c: jae 0x4730a0 */
  if (!cf) goto L_4730a0;
L_47309e: /* 47309e: mov ebx, ecx */
  ebx = ecx;
L_4730a0: /* 4730a0: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4730a3: sub ecx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4730a6: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4730a8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4730aa: ja 0x4730b3 */
  if ((!cf && !zf)) goto L_4730b3;
L_4730ac: /* 4730ac: mov ecx, esi */
  ecx = esi;
/* 4730ae: call 0x4877fe */
  esp -= 4; W32(esp, 0x4730b3u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4730b3: /* 4730b3: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 4730b6: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4730b8: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4730ba: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4730bd: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 4730c0: jae 0x4730f9 */
  if (!cf) goto L_4730f9;
L_4730c2: /* 4730c2: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4730c6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 4730c9: jb 0x4730d2 */
  if (cf) goto L_4730d2;
L_4730cb: /* 4730cb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4730cd: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 4730d0: jmp 0x4730d5 */
  goto L_4730d5;
L_4730d2: /* 4730d2: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_4730d5: /* 4730d5: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4730d9: jb 0x4730dd */
  if (cf) goto L_4730dd;
L_4730db: /* 4730db: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_4730dd: /* 4730dd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 4730e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4730e1: lea ecx, [edi + ebx] */
  ecx = (uint32_t)(edi + ebx);
/* 4730e4: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 4730e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4730e8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4730eb: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4730ed: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 4730f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4730f1: call 0x463de2 */
  esp -= 4; W32(esp, 0x4730f6u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 4730f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4730f9: /* 4730f9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4730fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4730fe: ja 0x473104 */
  if ((!cf && !zf)) goto L_473104;
L_473100: /* 473100: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 473102: jbe 0x47317c */
  if ((cf | zf)) goto L_47317c;
L_473104: /* 473104: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473106: add eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 473109: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47310b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47310c: mov ecx, esi */
  ecx = esi;
/* 47310e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 473111: call 0x462402 */
  esp -= 4; W32(esp, 0x473116u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 473116: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473118: je 0x47317c */
  if (zf) goto L_47317c;
L_47311a: /* 47311a: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47311d: jae 0x473152 */
  if (!cf) goto L_473152;
L_47311f: /* 47311f: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 473122: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473125: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 473128: jb 0x47312e */
  if (cf) goto L_47312e;
L_47312a: /* 47312a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47312c: jmp 0x473130 */
  goto L_473130;
L_47312e: /* 47312e: mov ecx, eax */
  ecx = eax;
L_473130: /* 473130: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473133: jb 0x473137 */
  if (cf) goto L_473137;
L_473135: /* 473135: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_473137: /* 473137: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47313a: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 47313d: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 473140: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473141: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 473144: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473146: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 473149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47314a: call 0x463de2 */
  esp -= 4; W32(esp, 0x47314fu); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 47314f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_473152: /* 473152: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473156: jb 0x47315d */
  if (cf) goto L_47315d;
L_473158: /* 473158: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 47315b: jmp 0x473160 */
  goto L_473160;
L_47315d: /* 47315d: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_473160: /* 473160: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 473163: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 473166: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47316a: call 0x463dfb */
  esp -= 4; W32(esp, 0x47316fu); SPILL(); f_463dfb(); if (g_unwind) return; RELOAD();
/* 47316f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 473172: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473175: mov ecx, esi */
  ecx = esi;
/* 473177: call 0x4624dd */
  esp -= 4; W32(esp, 0x47317cu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_47317c: /* 47317c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47317d: mov eax, esi */
  eax = esi;
/* 47317f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473181: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 473182: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_473185(void) {
  LOAD_REGS();
L_473185: /* 473185: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 473186: mov ebp, esp */
  ebp = esp;
/* 473188: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473189: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 47318c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47318d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47318e: mov esi, ecx */
  esi = ecx;
/* 473190: call 0x461078 */
  esp -= 4; W32(esp, 0x473195u); SPILL(); f_461078(); if (g_unwind) return; RELOAD();
/* 473195: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473197: je 0x4731b9 */
  if (zf) goto L_4731b9;
L_473199: /* 473199: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47319d: jb 0x4731a4 */
  if (cf) goto L_4731a4;
L_47319f: /* 47319f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4731a2: jmp 0x4731a7 */
  goto L_4731a7;
L_4731a4: /* 4731a4: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4731a7: /* 4731a7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4731aa: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4731ac: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 4731ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4731af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4731b0: mov ecx, esi */
  ecx = esi;
/* 4731b2: call 0x472d70 */
  esp -= 4; W32(esp, 0x4731b7u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 4731b7: jmp 0x473212 */
  goto L_473212;
L_4731b9: /* 4731b9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4731bc: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4731bf: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4731c2: ja 0x4731cb */
  if ((!cf && !zf)) goto L_4731cb;
L_4731c4: /* 4731c4: mov ecx, esi */
  ecx = esi;
/* 4731c6: call 0x4877fe */
  esp -= 4; W32(esp, 0x4731cbu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4731cb: /* 4731cb: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4731cf: jbe 0x473210 */
  if ((cf | zf)) goto L_473210;
L_4731d1: /* 4731d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4731d2: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 4731d5: add edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4731d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4731da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4731db: mov ecx, esi */
  ecx = esi;
/* 4731dd: call 0x462402 */
  esp -= 4; W32(esp, 0x4731e2u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 4731e2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4731e4: je 0x47320f */
  if (zf) goto L_47320f;
L_4731e6: /* 4731e6: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4731ea: jb 0x4731f1 */
  if (cf) goto L_4731f1;
L_4731ec: /* 4731ec: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4731ef: jmp 0x4731f4 */
  goto L_4731f4;
L_4731f1: /* 4731f1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4731f4: /* 4731f4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4731f7: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 4731fa: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 4731fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4731fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4731ff: call 0x462cb0 */
  esp -= 4; W32(esp, 0x473204u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 473204: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 473207: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473208: mov ecx, esi */
  ecx = esi;
/* 47320a: call 0x4624dd */
  esp -= 4; W32(esp, 0x47320fu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_47320f: /* 47320f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_473210: /* 473210: mov eax, esi */
  eax = esi;
L_473212: /* 473212: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473213: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473214: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 473215: ret 8 */
  esp += 12; SPILL(); return;
}

void f_473218(void) {
  LOAD_REGS();
L_473218: /* 473218: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473219: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47321d: mov esi, ecx */
  esi = ecx;
/* 47321f: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x473225u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 473225: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473227: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47322b: mov ecx, esi */
  ecx = esi;
/* 47322d: call 0x473185 */
  esp -= 4; W32(esp, 0x473232u); SPILL(); f_473185(); if (g_unwind) return; RELOAD();
/* 473232: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473233: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473236(void) {
  LOAD_REGS();
L_473236: /* 473236: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473237: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 47323b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47323c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47323f: mov esi, ecx */
  esi = ecx;
/* 473241: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473244: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 473246: ja 0x47324d */
  if ((!cf && !zf)) goto L_47324d;
L_473248: /* 473248: call 0x4877fe */
  esp -= 4; W32(esp, 0x47324du); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_47324d: /* 47324d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 47324f: jbe 0x473290 */
  if ((cf | zf)) goto L_473290;
L_473251: /* 473251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473252: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 473255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473257: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 473259: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47325a: mov ecx, esi */
  ecx = esi;
/* 47325c: call 0x462402 */
  esp -= 4; W32(esp, 0x473261u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 473261: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473263: je 0x47328f */
  if (zf) goto L_47328f;
L_473265: /* 473265: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473269: jb 0x473270 */
  if (cf) goto L_473270;
L_47326b: /* 47326b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 47326e: jmp 0x473273 */
  goto L_473273;
L_473270: /* 473270: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_473273: /* 473273: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 473276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473277: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47327b: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 47327e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47327f: call 0x463dfb */
  esp -= 4; W32(esp, 0x473284u); SPILL(); f_463dfb(); if (g_unwind) return; RELOAD();
/* 473284: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 473287: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473288: mov ecx, esi */
  ecx = esi;
/* 47328a: call 0x4624dd */
  esp -= 4; W32(esp, 0x47328fu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_47328f: /* 47328f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_473290: /* 473290: mov eax, esi */
  eax = esi;
/* 473292: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473293: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473294: ret 8 */
  esp += 12; SPILL(); return;
}

void f_473297(void) {
  LOAD_REGS();
L_473297: /* 473297: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473298: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473299: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 47329d: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4732a0: mov esi, ecx */
  esi = ecx;
/* 4732a2: jne 0x4732a9 */
  if (!zf) goto L_4732a9;
L_4732a4: /* 4732a4: call 0x4877fe */
  esp -= 4; W32(esp, 0x4732a9u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4732a9: /* 4732a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4732ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4732ac: mov ecx, esi */
  ecx = esi;
/* 4732ae: call 0x462402 */
  esp -= 4; W32(esp, 0x4732b3u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 4732b3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4732b5: je 0x4732db */
  if (zf) goto L_4732db;
L_4732b7: /* 4732b7: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4732bb: jb 0x4732c2 */
  if (cf) goto L_4732c2;
L_4732bd: /* 4732bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4732c0: jmp 0x4732c5 */
  goto L_4732c5;
L_4732c2: /* 4732c2: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4732c5: /* 4732c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4732c6: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4732ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4732cb: call 0x463dfb */
  esp -= 4; W32(esp, 0x4732d0u); SPILL(); f_463dfb(); if (g_unwind) return; RELOAD();
/* 4732d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4732d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4732d4: mov ecx, esi */
  ecx = esi;
/* 4732d6: call 0x4624dd */
  esp -= 4; W32(esp, 0x4732dbu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_4732db: /* 4732db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4732dc: mov eax, esi */
  eax = esi;
/* 4732de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4732df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4732e2(void) {
  LOAD_REGS();
L_4732e2: /* 4732e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4732e3: mov ebp, esp */
  ebp = esp;
/* 4732e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4732e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4732e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4732e8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 4732eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4732ec: mov esi, ecx */
  esi = ecx;
/* 4732ee: call 0x461078 */
  esp -= 4; W32(esp, 0x4732f3u); SPILL(); f_461078(); if (g_unwind) return; RELOAD();
/* 4732f3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4732f5: je 0x47331d */
  if (zf) goto L_47331d;
L_4732f7: /* 4732f7: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4732fb: jb 0x473302 */
  if (cf) goto L_473302;
L_4732fd: /* 4732fd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 473300: jmp 0x473305 */
  goto L_473305;
L_473302: /* 473302: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_473305: /* 473305: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 473308: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 47330a: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 47330c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47330d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47330e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473311: mov ecx, esi */
  ecx = esi;
/* 473313: call 0x472e07 */
  esp -= 4; W32(esp, 0x473318u); SPILL(); f_472e07(); if (g_unwind) return; RELOAD();
/* 473318: jmp 0x4733be */
  goto L_4733be;
L_47331d: /* 47331d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 473320: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473323: jae 0x47332c */
  if (!cf) goto L_47332c;
L_473325: /* 473325: mov ecx, esi */
  ecx = esi;
/* 473327: call 0x487763 */
  esp -= 4; W32(esp, 0x47332cu); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_47332c: /* 47332c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47332f: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473332: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 473335: ja 0x47333e */
  if ((!cf && !zf)) goto L_47333e;
L_473337: /* 473337: mov ecx, esi */
  ecx = esi;
/* 473339: call 0x4877fe */
  esp -= 4; W32(esp, 0x47333eu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_47333e: /* 47333e: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 473342: jbe 0x4733bc */
  if ((cf | zf)) goto L_4733bc;
L_473344: /* 473344: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 473347: add eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47334a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47334c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47334d: mov ecx, esi */
  ecx = esi;
/* 47334f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 473352: call 0x462402 */
  esp -= 4; W32(esp, 0x473357u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 473357: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473359: je 0x4733bc */
  if (zf) goto L_4733bc;
L_47335b: /* 47335b: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 47335e: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473361: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473362: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 473365: jb 0x47336b */
  if (cf) goto L_47336b;
L_473367: /* 473367: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 473369: jmp 0x47336d */
  goto L_47336d;
L_47336b: /* 47336b: mov ecx, ebx */
  ecx = ebx;
L_47336d: /* 47336d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473370: jb 0x473376 */
  if (cf) goto L_473376;
L_473372: /* 473372: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 473374: jmp 0x473378 */
  goto L_473378;
L_473376: /* 473376: mov eax, ebx */
  eax = ebx;
L_473378: /* 473378: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 47337b: sub edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 47337e: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 473380: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 473381: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 473384: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473387: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47338a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 47338c: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 47338f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473390: call 0x463de2 */
  esp -= 4; W32(esp, 0x473395u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 473395: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 473398: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47339c: jb 0x4733a0 */
  if (cf) goto L_4733a0;
L_47339e: /* 47339e: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_4733a0: /* 4733a0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4733a3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4733a5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4733a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4733a9: call 0x462cb0 */
  esp -= 4; W32(esp, 0x4733aeu); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 4733ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4733b1: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4733b4: mov ecx, esi */
  ecx = esi;
/* 4733b6: call 0x4624dd */
  esp -= 4; W32(esp, 0x4733bbu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4733bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4733bc: /* 4733bc: mov eax, esi */
  eax = esi;
L_4733be: /* 4733be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4733bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4733c0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4733c1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4733c4(void) {
  LOAD_REGS();
L_4733c4: /* 4733c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4733c5: mov ebp, esp */
  ebp = esp;
/* 4733c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4733c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4733c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4733ca: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4733cd: mov esi, ecx */
  esi = ecx;
/* 4733cf: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4733d2: jae 0x4733d9 */
  if (!cf) goto L_4733d9;
L_4733d4: /* 4733d4: call 0x487763 */
  esp -= 4; W32(esp, 0x4733d9u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_4733d9: /* 4733d9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4733dc: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4733df: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4733e2: ja 0x4733eb */
  if ((!cf && !zf)) goto L_4733eb;
L_4733e4: /* 4733e4: mov ecx, esi */
  ecx = esi;
/* 4733e6: call 0x4877fe */
  esp -= 4; W32(esp, 0x4733ebu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4733eb: /* 4733eb: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4733ef: jbe 0x473469 */
  if ((cf | zf)) goto L_473469;
L_4733f1: /* 4733f1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4733f4: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4733f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4733f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4733fa: mov ecx, esi */
  ecx = esi;
/* 4733fc: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4733ff: call 0x462402 */
  esp -= 4; W32(esp, 0x473404u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 473404: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473406: je 0x473469 */
  if (zf) goto L_473469;
L_473408: /* 473408: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 47340b: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47340e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47340f: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 473412: jb 0x473418 */
  if (cf) goto L_473418;
L_473414: /* 473414: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 473416: jmp 0x47341a */
  goto L_47341a;
L_473418: /* 473418: mov ecx, ebx */
  ecx = ebx;
L_47341a: /* 47341a: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47341d: jb 0x473423 */
  if (cf) goto L_473423;
L_47341f: /* 47341f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 473421: jmp 0x473425 */
  goto L_473425;
L_473423: /* 473423: mov eax, ebx */
  eax = ebx;
L_473425: /* 473425: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 473428: sub edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 47342b: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 47342d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47342e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 473431: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473434: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 473437: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 473439: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 47343c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47343d: call 0x463de2 */
  esp -= 4; W32(esp, 0x473442u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 473442: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 473445: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473449: jb 0x47344d */
  if (cf) goto L_47344d;
L_47344b: /* 47344b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_47344d: /* 47344d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 473450: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 473452: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 473455: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473456: call 0x463dfb */
  esp -= 4; W32(esp, 0x47345bu); SPILL(); f_463dfb(); if (g_unwind) return; RELOAD();
/* 47345b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47345e: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 473461: mov ecx, esi */
  ecx = esi;
/* 473463: call 0x4624dd */
  esp -= 4; W32(esp, 0x473468u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 473468: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_473469: /* 473469: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47346a: mov eax, esi */
  eax = esi;
/* 47346c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47346d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47346e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_473471(void) {
  LOAD_REGS();
L_473471: /* 473471: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473475: jb 0x47347c */
  if (cf) goto L_47347c;
L_473477: /* 473477: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 47347a: jmp 0x47347f */
  goto L_47347f;
L_47347c: /* 47347c: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
L_47347f: /* 47347f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 473483: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473485: je 0x47348b */
  if (zf) goto L_47348b;
L_473487: /* 473487: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473489: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_47348b: /* 47348b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47348f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 473493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473494: call 0x4733c4 */
  esp -= 4; W32(esp, 0x473499u); SPILL(); f_4733c4(); if (g_unwind) return; RELOAD();
/* 473499: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47349c(void) {
  LOAD_REGS();
L_47349c: /* 47349c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47349d: mov ebp, esp */
  ebp = esp;
/* 47349f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4734a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4734a1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4734a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4734a5: mov edi, ecx */
  edi = ecx;
/* 4734a7: cmp dword ptr [edi + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4734aa: jae 0x4734b1 */
  if (!cf) goto L_4734b1;
L_4734ac: /* 4734ac: call 0x487763 */
  esp -= 4; W32(esp, 0x4734b1u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_4734b1: /* 4734b1: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 4734b4: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 4734b7: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4734b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4734bb: jae 0x4734bf */
  if (!cf) goto L_4734bf;
L_4734bd: /* 4734bd: mov ebx, eax */
  ebx = eax;
L_4734bf: /* 4734bf: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4734c1: jbe 0x473514 */
  if ((cf | zf)) goto L_473514;
L_4734c3: /* 4734c3: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 4734c6: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4734c9: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 4734cc: jb 0x4734d5 */
  if (cf) goto L_4734d5;
L_4734ce: /* 4734ce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4734d0: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 4734d3: jmp 0x4734d8 */
  goto L_4734d8;
L_4734d5: /* 4734d5: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_4734d8: /* 4734d8: cmp dword ptr [edi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4734dc: jb 0x4734e0 */
  if (cf) goto L_4734e0;
L_4734de: /* 4734de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_4734e0: /* 4734e0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 4734e3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4734e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4734e6: lea eax, [esi + ebx] */
  eax = (uint32_t)(esi + ebx);
/* 4734e9: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 4734ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4734ed: lea eax, [ecx + esi*2] */
  eax = (uint32_t)(ecx + esi*2);
/* 4734f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4734f1: call 0x463de2 */
  esp -= 4; W32(esp, 0x4734f6u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 4734f6: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 4734f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4734fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4734fe: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 473500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473501: mov ecx, edi */
  ecx = edi;
/* 473503: call 0x462402 */
  esp -= 4; W32(esp, 0x473508u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 473508: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47350a: je 0x473514 */
  if (zf) goto L_473514;
L_47350c: /* 47350c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47350d: mov ecx, edi */
  ecx = edi;
/* 47350f: call 0x4624dd */
  esp -= 4; W32(esp, 0x473514u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_473514: /* 473514: mov eax, edi */
  eax = edi;
/* 473516: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 473517: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473518: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473519: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 47351a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47351d(void) {
  LOAD_REGS();
L_47351d: /* 47351d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47351e: mov ebp, esp */
  ebp = esp;
/* 473520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473522: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473523: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 473526: mov esi, ecx */
  esi = ecx;
/* 473528: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47352b: jb 0x473538 */
  if (cf) goto L_473538;
L_47352d: /* 47352d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 473530: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 473533: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473536: jae 0x47353f */
  if (!cf) goto L_47353f;
L_473538: /* 473538: mov ecx, esi */
  ecx = esi;
/* 47353a: call 0x487763 */
  esp -= 4; W32(esp, 0x47353fu); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_47353f: /* 47353f: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 473542: mov eax, ecx */
  eax = ecx;
/* 473544: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473546: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473549: jae 0x47354e */
  if (!cf) goto L_47354e;
L_47354b: /* 47354b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_47354e: /* 47354e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 473551: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 473554: sub eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473557: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47355a: jae 0x47355f */
  if (!cf) goto L_47355f;
L_47355c: /* 47355c: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_47355f: /* 47355f: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 473562: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 473565: sub eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473568: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47356a: ja 0x473573 */
  if ((!cf && !zf)) goto L_473573;
L_47356c: /* 47356c: mov ecx, esi */
  ecx = esi;
/* 47356e: call 0x4877fe */
  esp -= 4; W32(esp, 0x473573u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_473573: /* 473573: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 473576: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473577: mov ecx, eax */
  ecx = eax;
/* 473579: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47357c: mov ebx, eax */
  ebx = eax;
/* 47357e: add ecx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473581: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 473583: sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 473586: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473588: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 47358b: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 47358e: jae 0x47359a */
  if (!cf) goto L_47359a;
L_473590: /* 473590: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473592: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473593: mov ecx, esi */
  ecx = esi;
/* 473595: call 0x462402 */
  esp -= 4; W32(esp, 0x47359au); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
L_47359a: /* 47359a: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47359d: je 0x47360e */
  if (zf) goto L_47360e;
L_47359f: /* 47359f: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 4735a2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4735a5: jb 0x4735ac */
  if (cf) goto L_4735ac;
L_4735a7: /* 4735a7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4735aa: jmp 0x4735af */
  goto L_4735af;
L_4735ac: /* 4735ac: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
L_4735af: /* 4735af: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4735b2: jb 0x4735b9 */
  if (cf) goto L_4735b9;
L_4735b4: /* 4735b4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4735b7: jmp 0x4735bc */
  goto L_4735bc;
L_4735b9: /* 4735b9: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4735bc: /* 4735bc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 4735bf: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4735c1: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 4735c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4735c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4735c6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4735c9: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4735cb: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 4735ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4735cf: call 0x463de2 */
  esp -= 4; W32(esp, 0x4735d4u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 4735d4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4735d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4735da: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4735de: jb 0x4735e5 */
  if (cf) goto L_4735e5;
L_4735e0: /* 4735e0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4735e3: jmp 0x4735e8 */
  goto L_4735e8;
L_4735e5: /* 4735e5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4735e8: /* 4735e8: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4735ec: jb 0x4735f3 */
  if (cf) goto L_4735f3;
L_4735ee: /* 4735ee: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4735f1: jmp 0x4735f6 */
  goto L_4735f6;
L_4735f3: /* 4735f3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
L_4735f6: /* 4735f6: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 4735f9: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4735fc: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 4735ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473600: lea eax, [ecx + edi*2] */
  eax = (uint32_t)(ecx + edi*2);
/* 473603: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473604: call 0x462cb0 */
  esp -= 4; W32(esp, 0x473609u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 473609: jmp 0x4737d5 */
  goto L_4737d5;
L_47360e: /* 47360e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 473611: cmp dword ptr [ebp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 473614: ja 0x473673 */
  if ((!cf && !zf)) goto L_473673;
L_473616: /* 473616: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 473619: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47361c: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 47361f: jb 0x473625 */
  if (cf) goto L_473625;
L_473621: /* 473621: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 473623: jmp 0x473627 */
  goto L_473627;
L_473625: /* 473625: mov ecx, ebx */
  ecx = ebx;
L_473627: /* 473627: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47362a: jb 0x473630 */
  if (cf) goto L_473630;
L_47362c: /* 47362c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 47362e: jmp 0x473632 */
  goto L_473632;
L_473630: /* 473630: mov eax, ebx */
  eax = ebx;
L_473632: /* 473632: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 473635: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 473638: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 47363b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47363c: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 47363f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473640: call 0x463de2 */
  esp -= 4; W32(esp, 0x473645u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 473645: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 473648: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47364b: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47364e: jb 0x473654 */
  if (cf) goto L_473654;
L_473650: /* 473650: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 473652: jmp 0x473656 */
  goto L_473656;
L_473654: /* 473654: mov ecx, ebx */
  ecx = ebx;
L_473656: /* 473656: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473659: jb 0x47365d */
  if (cf) goto L_47365d;
L_47365b: /* 47365b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_47365d: /* 47365d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 473660: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473663: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 473665: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 473668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473669: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 47366c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 47366e: jmp 0x47372f */
  goto L_47372f;
L_473673: /* 473673: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 473676: ja 0x4736cb */
  if ((!cf && !zf)) goto L_4736cb;
L_473678: /* 473678: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 47367b: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47367e: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 473681: jb 0x473687 */
  if (cf) goto L_473687;
L_473683: /* 473683: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 473685: jmp 0x473689 */
  goto L_473689;
L_473687: /* 473687: mov ecx, ebx */
  ecx = ebx;
L_473689: /* 473689: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47368c: jb 0x473692 */
  if (cf) goto L_473692;
L_47368e: /* 47368e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 473690: jmp 0x473694 */
  goto L_473694;
L_473692: /* 473692: mov eax, ebx */
  eax = ebx;
L_473694: /* 473694: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 473697: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47369a: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 47369c: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 47369f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4736a0: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4736a3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4736a5: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 4736a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4736a9: call 0x463de2 */
  esp -= 4; W32(esp, 0x4736aeu); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 4736ae: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 4736b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4736b4: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4736b7: jb 0x4736bd */
  if (cf) goto L_4736bd;
L_4736b9: /* 4736b9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4736bb: jmp 0x4736bf */
  goto L_4736bf;
L_4736bd: /* 4736bd: mov ecx, ebx */
  ecx = ebx;
L_4736bf: /* 4736bf: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4736c2: jb 0x4736c6 */
  if (cf) goto L_4736c6;
L_4736c4: /* 4736c4: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_4736c6: /* 4736c6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4736c9: jmp 0x473728 */
  goto L_473728;
L_4736cb: /* 4736cb: lea edx, [edi + eax] */
  edx = (uint32_t)(edi + eax);
/* 4736ce: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4736d1: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 4736d4: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 4736d7: ja 0x473738 */
  if ((!cf && !zf)) goto L_473738;
L_4736d9: /* 4736d9: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4736dc: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 4736df: jb 0x4736e5 */
  if (cf) goto L_4736e5;
L_4736e1: /* 4736e1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4736e3: jmp 0x4736e7 */
  goto L_4736e7;
L_4736e5: /* 4736e5: mov ecx, ebx */
  ecx = ebx;
L_4736e7: /* 4736e7: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4736ea: jb 0x4736f0 */
  if (cf) goto L_4736f0;
L_4736ec: /* 4736ec: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4736ee: jmp 0x4736f2 */
  goto L_4736f2;
L_4736f0: /* 4736f0: mov eax, ebx */
  eax = ebx;
L_4736f2: /* 4736f2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4736f5: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 4736f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4736f9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4736fc: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4736fe: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 473701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473702: call 0x463de2 */
  esp -= 4; W32(esp, 0x473707u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 473707: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 47370a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47370d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473710: jb 0x473716 */
  if (cf) goto L_473716;
L_473712: /* 473712: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 473714: jmp 0x473718 */
  goto L_473718;
L_473716: /* 473716: mov ecx, ebx */
  ecx = ebx;
L_473718: /* 473718: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47371b: jb 0x47371f */
  if (cf) goto L_47371f;
L_47371d: /* 47371d: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_47371f: /* 47371f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 473722: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473725: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_473728: /* 473728: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47372b: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 47372e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_47372f: /* 47372f: lea eax, [ebx + edi*2] */
  eax = (uint32_t)(ebx + edi*2);
/* 473732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473733: jmp 0x4737d0 */
  goto L_4737d0;
L_473738: /* 473738: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47373b: jb 0x473742 */
  if (cf) goto L_473742;
L_47373d: /* 47373d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 473740: jmp 0x473745 */
  goto L_473745;
L_473742: /* 473742: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
L_473745: /* 473745: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473748: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 47374b: jb 0x473751 */
  if (cf) goto L_473751;
L_47374d: /* 47374d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 47374f: jmp 0x473753 */
  goto L_473753;
L_473751: /* 473751: mov eax, ebx */
  eax = ebx;
L_473753: /* 473753: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 473756: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 473759: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 47375c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47375d: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 473760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473761: call 0x463de2 */
  esp -= 4; W32(esp, 0x473766u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 473766: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 473769: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47376c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47376f: jb 0x473775 */
  if (cf) goto L_473775;
L_473771: /* 473771: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 473773: jmp 0x473777 */
  goto L_473777;
L_473775: /* 473775: mov ecx, ebx */
  ecx = ebx;
L_473777: /* 473777: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47377a: jb 0x473780 */
  if (cf) goto L_473780;
L_47377c: /* 47377c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 47377e: jmp 0x473782 */
  goto L_473782;
L_473780: /* 473780: mov eax, ebx */
  eax = ebx;
L_473782: /* 473782: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 473785: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473788: add ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47378a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47378c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47378d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 473790: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 473792: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 473795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473796: call 0x463de2 */
  esp -= 4; W32(esp, 0x47379bu); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 47379b: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 47379e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4737a1: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4737a4: jb 0x4737ab */
  if (cf) goto L_4737ab;
L_4737a6: /* 4737a6: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 4737a9: jmp 0x4737ae */
  goto L_4737ae;
L_4737ab: /* 4737ab: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
L_4737ae: /* 4737ae: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4737b1: jb 0x4737b8 */
  if (cf) goto L_4737b8;
L_4737b3: /* 4737b3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4737b6: jmp 0x4737bb */
  goto L_4737bb;
L_4737b8: /* 4737b8: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4737bb: /* 4737bb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4737be: mov edi, ecx */
  edi = ecx;
/* 4737c0: sub edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4737c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4737c4: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 4737c7: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4737c9: lea ecx, [edx + edi*2] */
  ecx = (uint32_t)(edx + edi*2);
/* 4737cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4737cd: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4737cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_4737d0: /* 4737d0: call 0x463de2 */
  esp -= 4; W32(esp, 0x4737d5u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
L_4737d5: /* 4737d5: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4737d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4737db: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4737de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4737df: jb 0x4737ef */
  if (cf) goto L_4737ef;
L_4737e1: /* 4737e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4737e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4737e4: mov ecx, esi */
  ecx = esi;
/* 4737e6: call 0x462402 */
  esp -= 4; W32(esp, 0x4737ebu); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 4737eb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4737ed: je 0x4737f7 */
  if (zf) goto L_4737f7;
L_4737ef: /* 4737ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4737f0: mov ecx, esi */
  ecx = esi;
/* 4737f2: call 0x4624dd */
  esp -= 4; W32(esp, 0x4737f7u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_4737f7: /* 4737f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4737f8: mov eax, esi */
  eax = esi;
/* 4737fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4737fb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4737fc: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_4737ff(void) {
  LOAD_REGS();
L_4737ff: /* 4737ff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 473800: mov ebp, esp */
  ebp = esp;
/* 473802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473804: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 473807: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473808: mov esi, ecx */
  esi = ecx;
/* 47380a: call 0x461078 */
  esp -= 4; W32(esp, 0x47380fu); SPILL(); f_461078(); if (g_unwind) return; RELOAD();
/* 47380f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473811: je 0x47383c */
  if (zf) goto L_47383c;
L_473813: /* 473813: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473817: jb 0x47381e */
  if (cf) goto L_47381e;
L_473819: /* 473819: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 47381c: jmp 0x473821 */
  goto L_473821;
L_47381e: /* 47381e: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_473821: /* 473821: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473824: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 473826: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 473828: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473829: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47382a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47382d: mov ecx, esi */
  ecx = esi;
/* 47382f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473832: call 0x47351d */
  esp -= 4; W32(esp, 0x473837u); SPILL(); f_47351d(); if (g_unwind) return; RELOAD();
/* 473837: jmp 0x47393d */
  goto L_47393d;
L_47383c: /* 47383c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47383f: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473842: jae 0x47384b */
  if (!cf) goto L_47384b;
L_473844: /* 473844: mov ecx, esi */
  ecx = esi;
/* 473846: call 0x487763 */
  esp -= 4; W32(esp, 0x47384bu); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_47384b: /* 47384b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 47384e: mov ecx, eax */
  ecx = eax;
/* 473850: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473851: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 473854: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 473856: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473858: jae 0x47385c */
  if (!cf) goto L_47385c;
L_47385a: /* 47385a: mov ebx, ecx */
  ebx = ecx;
L_47385c: /* 47385c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 47385f: sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 473862: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473864: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 473866: ja 0x47386f */
  if ((!cf && !zf)) goto L_47386f;
L_473868: /* 473868: mov ecx, esi */
  ecx = esi;
/* 47386a: call 0x4877fe */
  esp -= 4; W32(esp, 0x47386fu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_47386f: /* 47386f: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 473872: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 473874: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 473876: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473879: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47387c: jae 0x4738b5 */
  if (!cf) goto L_4738b5;
L_47387e: /* 47387e: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473882: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 473885: jb 0x47388e */
  if (cf) goto L_47388e;
L_473887: /* 473887: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 473889: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 47388c: jmp 0x473891 */
  goto L_473891;
L_47388e: /* 47388e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_473891: /* 473891: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473895: jb 0x473899 */
  if (cf) goto L_473899;
L_473897: /* 473897: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_473899: /* 473899: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 47389c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47389d: lea ecx, [edi + ebx] */
  ecx = (uint32_t)(edi + ebx);
/* 4738a0: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 4738a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4738a4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 4738a7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4738a9: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 4738ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4738ad: call 0x463de2 */
  esp -= 4; W32(esp, 0x4738b2u); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 4738b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4738b5: /* 4738b5: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4738b9: ja 0x4738bf */
  if ((!cf && !zf)) goto L_4738bf;
L_4738bb: /* 4738bb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4738bd: jbe 0x47393a */
  if ((cf | zf)) goto L_47393a;
L_4738bf: /* 4738bf: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4738c2: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4738c4: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4738c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4738c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4738ca: mov ecx, esi */
  ecx = esi;
/* 4738cc: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 4738cf: call 0x462402 */
  esp -= 4; W32(esp, 0x4738d4u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 4738d4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4738d6: je 0x47393a */
  if (zf) goto L_47393a;
L_4738d8: /* 4738d8: cmp ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4738db: jae 0x473910 */
  if (!cf) goto L_473910;
L_4738dd: /* 4738dd: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 4738e0: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4738e3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 4738e6: jb 0x4738ec */
  if (cf) goto L_4738ec;
L_4738e8: /* 4738e8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4738ea: jmp 0x4738ee */
  goto L_4738ee;
L_4738ec: /* 4738ec: mov ecx, eax */
  ecx = eax;
L_4738ee: /* 4738ee: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4738f1: jb 0x4738f5 */
  if (cf) goto L_4738f5;
L_4738f3: /* 4738f3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_4738f5: /* 4738f5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4738f8: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 4738fb: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 4738fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4738ff: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 473902: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473904: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 473907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473908: call 0x463de2 */
  esp -= 4; W32(esp, 0x47390du); SPILL(); f_463de2(); if (g_unwind) return; RELOAD();
/* 47390d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_473910: /* 473910: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473914: jb 0x47391b */
  if (cf) goto L_47391b;
L_473916: /* 473916: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 473919: jmp 0x47391e */
  goto L_47391e;
L_47391b: /* 47391b: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_47391e: /* 47391e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473921: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 473924: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 473927: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473928: call 0x462cb0 */
  esp -= 4; W32(esp, 0x47392du); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 47392d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 473930: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473933: mov ecx, esi */
  ecx = esi;
/* 473935: call 0x4624dd */
  esp -= 4; W32(esp, 0x47393au); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_47393a: /* 47393a: mov eax, esi */
  eax = esi;
/* 47393c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_47393d: /* 47393d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47393e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47393f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 473940: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_473943(void) {
  LOAD_REGS();
L_473943: /* 473943: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 473947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473949: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 47394d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47394e: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473952: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473956: jne 0x47395c */
  if (!zf) goto L_47395c;
L_473958: /* 473958: xor eax, eax */
  eax = 0;
/* 47395a: jmp 0x473960 */
  goto L_473960;
L_47395c: /* 47395c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47395e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_473960: /* 473960: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473964: jb 0x47396b */
  if (cf) goto L_47396b;
L_473966: /* 473966: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 473969: jmp 0x47396e */
  goto L_47396e;
L_47396b: /* 47396b: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_47396e: /* 47396e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473971: je 0x473977 */
  if (zf) goto L_473977;
L_473973: /* 473973: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 473975: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_473977: /* 473977: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 473978: call 0x4737ff */
  esp -= 4; W32(esp, 0x47397du); SPILL(); f_4737ff(); if (g_unwind) return; RELOAD();
/* 47397d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47397e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_473981(void) {
  LOAD_REGS();
L_473981: /* 473981: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 473985: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473987: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 47398b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47398c: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 473990: jne 0x473996 */
  if (!zf) goto L_473996;
L_473992: /* 473992: xor eax, eax */
  eax = 0;
/* 473994: jmp 0x47399a */
  goto L_47399a;
L_473996: /* 473996: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473998: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_47399a: /* 47399a: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47399e: jb 0x4739a5 */
  if (cf) goto L_4739a5;
L_4739a0: /* 4739a0: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4739a3: jmp 0x4739a8 */
  goto L_4739a8;
L_4739a5: /* 4739a5: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_4739a8: /* 4739a8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4739aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4739ab: je 0x4739b1 */
  if (zf) goto L_4739b1;
L_4739ad: /* 4739ad: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4739af: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_4739b1: /* 4739b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4739b2: call 0x473055 */
  esp -= 4; W32(esp, 0x4739b7u); SPILL(); f_473055(); if (g_unwind) return; RELOAD();
/* 4739b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4739b8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4739bb(void) {
  LOAD_REGS();
L_4739bb: /* 4739bb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4739bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4739c1: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4739c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4739c6: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4739ca: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4739ce: jne 0x4739d4 */
  if (!zf) goto L_4739d4;
L_4739d0: /* 4739d0: xor eax, eax */
  eax = 0;
/* 4739d2: jmp 0x4739d8 */
  goto L_4739d8;
L_4739d4: /* 4739d4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4739d6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_4739d8: /* 4739d8: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4739dc: jb 0x4739e3 */
  if (cf) goto L_4739e3;
L_4739de: /* 4739de: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4739e1: jmp 0x4739e6 */
  goto L_4739e6;
L_4739e3: /* 4739e3: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_4739e6: /* 4739e6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4739e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4739e9: je 0x4739ef */
  if (zf) goto L_4739ef;
L_4739eb: /* 4739eb: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4739ed: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_4739ef: /* 4739ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4739f0: call 0x47307b */
  esp -= 4; W32(esp, 0x4739f5u); SPILL(); f_47307b(); if (g_unwind) return; RELOAD();
/* 4739f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4739f6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4739f9(void) {
  LOAD_REGS();
L_4739f9: /* 4739f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4739fa: mov ebp, esp */
  ebp = esp;
/* 4739fc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4739ff: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 473a02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473a03: mov esi, ecx */
  esi = ecx;
/* 473a05: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 473a08: jne 0x473a36 */
  if (!zf) goto L_473a36;
L_473a0a: /* 473a0a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 473a0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473a0f: je 0x473a15 */
  if (zf) goto L_473a15;
L_473a11: /* 473a11: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473a13: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_473a15: /* 473a15: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473a19: jb 0x473a20 */
  if (cf) goto L_473a20;
L_473a1b: /* 473a1b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 473a1e: jmp 0x473a23 */
  goto L_473a23;
L_473a20: /* 473a20: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
L_473a23: /* 473a23: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473a25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473a26: je 0x473a2c */
  if (zf) goto L_473a2c;
L_473a28: /* 473a28: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 473a2a: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_473a2c: /* 473a2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473a2d: mov ecx, esi */
  ecx = esi;
/* 473a2f: call 0x47349c */
  esp -= 4; W32(esp, 0x473a34u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 473a34: jmp 0x473a69 */
  goto L_473a69;
L_473a36: /* 473a36: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473a39: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 473a3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473a3c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 473a3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473a41: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 473a44: je 0x473a4a */
  if (zf) goto L_473a4a;
L_473a46: /* 473a46: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473a48: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_473a4a: /* 473a4a: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473a4e: jb 0x473a55 */
  if (cf) goto L_473a55;
L_473a50: /* 473a50: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 473a53: jmp 0x473a58 */
  goto L_473a58;
L_473a55: /* 473a55: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
L_473a58: /* 473a58: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473a5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473a5b: je 0x473a61 */
  if (zf) goto L_473a61;
L_473a5d: /* 473a5d: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 473a5f: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_473a61: /* 473a61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473a62: mov ecx, esi */
  ecx = esi;
/* 473a64: call 0x4737ff */
  esp -= 4; W32(esp, 0x473a69u); SPILL(); f_4737ff(); if (g_unwind) return; RELOAD();
L_473a69: /* 473a69: mov eax, esi */
  eax = esi;
/* 473a6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473a6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 473a6d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_473a70(void) {
  LOAD_REGS();
L_473a70: /* 473a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 473a71: mov ebp, esp */
  ebp = esp;
/* 473a73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473a74: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473a77: mov esi, ecx */
  esi = ecx;
/* 473a79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473a7a: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 473a7b: call 0x46adc2 */
  esp -= 4; W32(esp, 0x473a80u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 473a80: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 473a83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473a84: mov ecx, esi */
  ecx = esi;
/* 473a86: call 0x472f4c */
  esp -= 4; W32(esp, 0x473a8bu); SPILL(); f_472f4c(); if (g_unwind) return; RELOAD();
/* 473a8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473a8c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 473a8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473a90(void) {
  LOAD_REGS();
L_473a90: /* 473a90: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 473a93: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 473a97: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 473a99: ja 0x473aa5 */
  if ((!cf && !zf)) goto L_473aa5;
L_473a9b: /* 473a9b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 473a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473a9e: call 0x47349c */
  esp -= 4; W32(esp, 0x473aa3u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 473aa3: jmp 0x473ab1 */
  goto L_473ab1;
L_473aa5: /* 473aa5: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473aa9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 473aab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473aac: call 0x473236 */
  esp -= 4; W32(esp, 0x473ab1u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
L_473ab1: /* 473ab1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_473ab4(void) {
  LOAD_REGS();
L_473ab4: /* 473ab4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 473ab8: cmp dword ptr [ecx + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 473abb: jae 0x473ac5 */
  if (!cf) goto L_473ac5;
L_473abd: /* 473abd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473abf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473ac0: call 0x462402 */
  esp -= 4; W32(esp, 0x473ac5u); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
L_473ac5: /* 473ac5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473ac8(void) {
  LOAD_REGS();
L_473ac8: /* 473ac8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 473aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473acc: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473ad0: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473ad4: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 473ad8: call 0x46f0c5 */
  esp -= 4; W32(esp, 0x473addu); SPILL(); f_46f0c5(); if (g_unwind) return; RELOAD();
/* 473add: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_473ae0(void) {
  LOAD_REGS();
L_473ae0: /* 473ae0: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 473ae5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473aeau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473aea: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 473aed: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 473af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473af1: mov esi, ecx */
  esi = ecx;
/* 473af3: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 473af6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 473af9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473afd: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 473b02: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 473b08: mov dword ptr [esi], 0x4c7834 */
  W32((uint32_t)(esi), 0x4c7834u);
/* 473b0e: call 0x488f1b */
  esp -= 4; W32(esp, 0x473b13u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 473b13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473b14: mov ecx, esi */
  ecx = esi;
/* 473b16: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 473b1a: call 0x46f136 */
  esp -= 4; W32(esp, 0x473b1fu); SPILL(); f_46f136(); if (g_unwind) return; RELOAD();
/* 473b1f: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473b23: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 473b29: call 0x488e1d */
  esp -= 4; W32(esp, 0x473b2eu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 473b2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473b31: mov eax, esi */
  eax = esi;
/* 473b33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473b34: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473b3b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473b3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473b3f(void) {
  LOAD_REGS();
L_473b3f: /* 473b3f: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 473b44: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473b49u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473b49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473b4a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 473b4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473b4e: mov esi, ecx */
  esi = ecx;
/* 473b50: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 473b53: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 473b56: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473b59: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473b5d: mov dword ptr [esi], 0x4c7834 */
  W32((uint32_t)(esi), 0x4c7834u);
/* 473b63: call 0x46f136 */
  esp -= 4; W32(esp, 0x473b68u); SPILL(); f_46f136(); if (g_unwind) return; RELOAD();
/* 473b68: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473b6b: mov eax, esi */
  eax = esi;
/* 473b6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473b6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473b75: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473b76: ret 8 */
  esp += 12; SPILL(); return;
}

void f_473b79(void) {
  LOAD_REGS();
L_473b79: /* 473b79: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 473b7e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473b83u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473b83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473b84: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 473b87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473b89: je 0x473bb2 */
  if (zf) goto L_473bb2;
L_473b8b: /* 473b8b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 473b8e: jne 0x473bb2 */
  if (!zf) goto L_473bb2;
L_473b90: /* 473b90: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 473b92: call 0x4620da */
  esp -= 4; W32(esp, 0x473b97u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 473b97: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473b98: mov ecx, eax */
  ecx = eax;
/* 473b9a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 473b9d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473ba1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473ba3: je 0x473bae */
  if (zf) goto L_473bae;
L_473ba5: /* 473ba5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473ba7: call 0x473ae0 */
  esp -= 4; W32(esp, 0x473bacu); SPILL(); f_473ae0(); if (g_unwind) return; RELOAD();
/* 473bac: jmp 0x473bb0 */
  goto L_473bb0;
L_473bae: /* 473bae: xor eax, eax */
  eax = 0;
L_473bb0: /* 473bb0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_473bb2: /* 473bb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473bb5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 473bb7: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 473bb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473bb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473bc0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473bc1: ret  */
  esp += 4; SPILL(); return;
}

void f_473bc2(void) {
  LOAD_REGS();
L_473bc2: /* 473bc2: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 473bc7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473bccu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473bcc: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 473bcf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 473bd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473bd3: mov esi, ecx */
  esi = ecx;
/* 473bd5: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 473bd8: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 473bdb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473bdf: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 473be4: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 473bea: mov dword ptr [esi], 0x4c7898 */
  W32((uint32_t)(esi), 0x4c7898u);
/* 473bf0: call 0x488f1b */
  esp -= 4; W32(esp, 0x473bf5u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 473bf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473bf6: mov ecx, esi */
  ecx = esi;
/* 473bf8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 473bfc: call 0x46f1e1 */
  esp -= 4; W32(esp, 0x473c01u); SPILL(); f_46f1e1(); if (g_unwind) return; RELOAD();
/* 473c01: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473c05: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 473c0b: call 0x488e1d */
  esp -= 4; W32(esp, 0x473c10u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 473c10: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473c13: mov eax, esi */
  eax = esi;
/* 473c15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473c16: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473c1d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473c1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473c21(void) {
  LOAD_REGS();
L_473c21: /* 473c21: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 473c26: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473c2bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473c2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473c2c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 473c2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473c30: mov esi, ecx */
  esi = ecx;
/* 473c32: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 473c35: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 473c38: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473c3b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473c3f: mov dword ptr [esi], 0x4c7898 */
  W32((uint32_t)(esi), 0x4c7898u);
/* 473c45: call 0x46f1e1 */
  esp -= 4; W32(esp, 0x473c4au); SPILL(); f_46f1e1(); if (g_unwind) return; RELOAD();
/* 473c4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473c4d: mov eax, esi */
  eax = esi;
/* 473c4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473c50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473c57: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473c58: ret 8 */
  esp += 12; SPILL(); return;
}

void f_473c5b(void) {
  LOAD_REGS();
L_473c5b: /* 473c5b: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 473c60: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473c65u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473c66: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 473c69: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473c6b: je 0x473c94 */
  if (zf) goto L_473c94;
L_473c6d: /* 473c6d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 473c70: jne 0x473c94 */
  if (!zf) goto L_473c94;
L_473c72: /* 473c72: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 473c74: call 0x4620da */
  esp -= 4; W32(esp, 0x473c79u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 473c79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473c7a: mov ecx, eax */
  ecx = eax;
/* 473c7c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 473c7f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473c83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473c85: je 0x473c90 */
  if (zf) goto L_473c90;
L_473c87: /* 473c87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473c89: call 0x473bc2 */
  esp -= 4; W32(esp, 0x473c8eu); SPILL(); f_473bc2(); if (g_unwind) return; RELOAD();
/* 473c8e: jmp 0x473c92 */
  goto L_473c92;
L_473c90: /* 473c90: xor eax, eax */
  eax = 0;
L_473c92: /* 473c92: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_473c94: /* 473c94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473c97: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 473c99: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 473c9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473c9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473ca2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473ca3: ret  */
  esp += 4; SPILL(); return;
}

void f_473ca4(void) {
  LOAD_REGS();
L_473ca4: /* 473ca4: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 473ca9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473caeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473cae: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 473cb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 473cb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473cb5: mov esi, ecx */
  esi = ecx;
/* 473cb7: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 473cba: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 473cbd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473cc1: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 473cc6: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 473ccc: mov dword ptr [esi], 0x4c78fc */
  W32((uint32_t)(esi), 0x4c78fcu);
/* 473cd2: call 0x488f1b */
  esp -= 4; W32(esp, 0x473cd7u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 473cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473cd8: mov ecx, esi */
  ecx = esi;
/* 473cda: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 473cde: call 0x46f1e1 */
  esp -= 4; W32(esp, 0x473ce3u); SPILL(); f_46f1e1(); if (g_unwind) return; RELOAD();
/* 473ce3: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473ce7: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 473ced: call 0x488e1d */
  esp -= 4; W32(esp, 0x473cf2u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 473cf2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473cf5: mov eax, esi */
  eax = esi;
/* 473cf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473cf8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473cff: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473d00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473d03(void) {
  LOAD_REGS();
L_473d03: /* 473d03: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 473d08: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473d0du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473d0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473d0e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 473d11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473d12: mov esi, ecx */
  esi = ecx;
/* 473d14: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 473d17: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 473d1a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473d1d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473d21: mov dword ptr [esi], 0x4c78fc */
  W32((uint32_t)(esi), 0x4c78fcu);
/* 473d27: call 0x46f1e1 */
  esp -= 4; W32(esp, 0x473d2cu); SPILL(); f_46f1e1(); if (g_unwind) return; RELOAD();
/* 473d2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473d2f: mov eax, esi */
  eax = esi;
/* 473d31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473d32: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473d39: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473d3a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_473d3d(void) {
  LOAD_REGS();
L_473d3d: /* 473d3d: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 473d42: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473d47u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473d47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473d48: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 473d4b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473d4d: je 0x473d76 */
  if (zf) goto L_473d76;
L_473d4f: /* 473d4f: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 473d52: jne 0x473d76 */
  if (!zf) goto L_473d76;
L_473d54: /* 473d54: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 473d56: call 0x4620da */
  esp -= 4; W32(esp, 0x473d5bu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 473d5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473d5c: mov ecx, eax */
  ecx = eax;
/* 473d5e: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 473d61: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473d65: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 473d67: je 0x473d72 */
  if (zf) goto L_473d72;
L_473d69: /* 473d69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473d6b: call 0x473ca4 */
  esp -= 4; W32(esp, 0x473d70u); SPILL(); f_473ca4(); if (g_unwind) return; RELOAD();
/* 473d70: jmp 0x473d74 */
  goto L_473d74;
L_473d72: /* 473d72: xor eax, eax */
  eax = 0;
L_473d74: /* 473d74: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_473d76: /* 473d76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473d79: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 473d7b: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 473d7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473d7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473d84: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473d85: ret  */
  esp += 4; SPILL(); return;
}

void f_473d86(void) {
  LOAD_REGS();
L_473d86: /* 473d86: mov eax, 0x48c830 */
  eax = 0x48c830u;
/* 473d8b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473d90u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473d90: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 473d93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473d94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473d95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473d96: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 473d99: mov esi, ecx */
  esi = ecx;
/* 473d9b: xor ebx, ebx */
  ebx = 0;
/* 473d9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473d9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473d9f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 473da2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 473da5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 473da8: call 0x466d1b */
  esp -= 4; W32(esp, 0x473dadu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 473dad: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 473db0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 473db3: je 0x473e34 */
  if (zf) goto L_473e34;
L_473db5: /* 473db5: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 473db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473db9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473dbb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 473dbe: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473dc0: call 0x464a5a */
  esp -= 4; W32(esp, 0x473dc5u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 473dc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473dc6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 473dca: call 0x46e41b */
  esp -= 4; W32(esp, 0x473dcfu); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 473dcf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473dd0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 473dd3: mov edi, eax */
  edi = eax;
/* 473dd5: call 0x461389 */
  esp -= 4; W32(esp, 0x473ddau); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 473dda: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473ddc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 473ddf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473de2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 473de4: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 473de7: xor edx, edx */
  edx = 0;
/* 473de9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 473deb: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 473dee: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 473df1: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 473df4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473df5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473df6: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 473dfa: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 473dfd: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 473e00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 473e01: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 473e04: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 473e08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473e0a: mov ecx, edi */
  ecx = edi;
/* 473e0c: call 0x468981 */
  esp -= 4; W32(esp, 0x473e11u); SPILL(); f_468981(); if (g_unwind) return; RELOAD();
/* 473e11: jmp 0x473e34 */
  goto L_473e34;
L_473e34: /* 473e34: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473e36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 473e39: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473e3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473e3f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 473e42: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473e44: call 0x461453 */
  esp -= 4; W32(esp, 0x473e49u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 473e49: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473e4d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 473e50: call 0x46228e */
  esp -= 4; W32(esp, 0x473e55u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 473e55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473e58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 473e59: mov eax, esi */
  eax = esi;
/* 473e5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473e5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473e63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473e64: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473e65: ret 4 */
  esp += 8; SPILL(); return;
}
